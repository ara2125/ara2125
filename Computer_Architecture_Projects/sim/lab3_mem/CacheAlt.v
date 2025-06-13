//=========================================================================
// Alt Blocking Cache
//=========================================================================

`ifndef LAB3_MEM_CACHE_ALT_V
`define LAB3_MEM_CACHE_ALT_V

`include "vc/mem-msgs.v"
`include "vc/trace.v"

`include "lab3_mem/CacheAltCtrl.v"
`include "lab3_mem/CacheAltDpath.v"

module lab3_mem_CacheAlt
#(
  parameter p_num_banks = 1 // Total number of cache banks
)
(
  input  logic          clk,
  input  logic          reset,

  // Processor <-> Cache Interface

  input  mem_req_4B_t   proc2cache_reqstream_msg,
  input  logic          proc2cache_reqstream_val,
  output logic          proc2cache_reqstream_rdy,

  output mem_resp_4B_t  proc2cache_respstream_msg,
  output logic          proc2cache_respstream_val,
  input  logic          proc2cache_respstream_rdy,

  // Cache <-> Memory Interface

  output mem_req_16B_t  cache2mem_reqstream_msg,
  output logic          cache2mem_reqstream_val,
  input  logic          cache2mem_reqstream_rdy,

  input  mem_resp_16B_t cache2mem_respstream_msg,
  input  logic          cache2mem_respstream_val,
  output logic          cache2mem_respstream_rdy
);


  logic        cachereq_reg_en;        // if the cache could accpet new message
  logic        tag_array1_ren;         // tag array 1 read enable
  logic        tag_array1_wen;         // tag array 1 write enable
  logic        tag_array2_ren;         // tag array 2 read enable
  logic        tag_array2_wen;         // tag array 2 write enable
  logic        tag_array_mux_sel;      // select which tag array to write to: (1) Way 0: Tag array 1 (2) Way 1: Tag array 2
  logic        evict_addr_reg_en;      // save the address of the data, evict the dirty data to the memory
  logic        memreq_addr_mux_sel;    // Choose the address to send to memory (1) when cache miss: send the address of the cache line (2) when the cache line is to be replaced due to read miss, send the evicted address
  logic [2:0]  cacheresp_type;         // read or write, send to processor
  logic [1:0]  hit_WAIT;               // hit or miss, send to processor and check
  
  logic [2:0]  cachereq_type;          // read or write, send from processor
  logic [31:0] cachereq_addr;          // address send to memory
  logic        tag1_match;             // compare to see if tag match
  logic        tag2_match;             // compare to see if tag match
  
  // data array
  
  logic        memresp_reg_en;         // if the cache could accpet the data from memory
  logic        write_data_mux_sel;     // select from (1) cache data(write) or (2) memory response data(read) 
  logic        wben_mux_sel;           // write byte enable decoder, control which bytes are written to the data array in the cache line 
  logic        data_array1_ren;        // data array 1 read enable
  logic        data_array1_wen;        // data array 1 write enable
  logic        data_array2_ren;        // data array 2 read enable
  logic        data_array2_wen;        // data array 2 write enable
  logic        data_array_mux_sel;     // select which data array to write to: (1) Way 0: Data array 1 (2) Way 1: Data array 2
  logic        read_data_zero_mux_sel; // (1) Select data from data array (2)If there is no valid data in the cache, select the default value of 0 as output.
  logic        read_data_reg_en;       // read data register enable
  logic [2:0]  memreq_type;            // read or write, send to processor


  //----------------------------------------------------------------------
  // Control
  //----------------------------------------------------------------------

  lab3_mem_CacheAltCtrl
  #(
    .p_num_banks              (p_num_banks)
  )
  ctrl
  (
   // Processor <-> Cache Interface

   .proc2cache_reqstream_val  (proc2cache_reqstream_val),
   .proc2cache_reqstream_rdy  (proc2cache_reqstream_rdy),
   .proc2cache_respstream_val (proc2cache_respstream_val),
   .proc2cache_respstream_rdy (proc2cache_respstream_rdy),

   // Cache <-> Memory Interface

   .cache2mem_reqstream_val   (cache2mem_reqstream_val),
   .cache2mem_reqstream_rdy   (cache2mem_reqstream_rdy),
   .cache2mem_respstream_val  (cache2mem_respstream_val),
   .cache2mem_respstream_rdy  (cache2mem_respstream_rdy),

    // clk/reset/control/status signals

   .*
  );

  //----------------------------------------------------------------------
  // Datapath
  //----------------------------------------------------------------------

  lab3_mem_CacheAltDpath
  #(
    .p_num_banks              (p_num_banks)
  )
  dpath
  (
   // Processor <-> Cache Interface

   .proc2cache_reqstream_msg  (proc2cache_reqstream_msg),
   .proc2cache_respstream_msg (proc2cache_respstream_msg),

   // Cache <-> Memory Interface

   .cache2mem_reqstream_msg   (cache2mem_reqstream_msg),
   .cache2mem_respstream_msg  (cache2mem_respstream_msg),

   // clk/reset/control/status signals

   .*
  );

  //----------------------------------------------------------------------
  // Line tracing
  //----------------------------------------------------------------------

  `ifndef SYNTHESIS

  integer i;

  logic [`VC_TRACE_NBITS-1:0] str;
  `VC_TRACE_BEGIN
  begin

    vc_trace.append_str( trace_str, "(" );

    // Display state

    case ( ctrl.state_reg )

      ctrl.STATE_IDLE:              vc_trace.append_str( trace_str, "I " );
      ctrl.STATE_TAG_CHECK:         vc_trace.append_str( trace_str, "TC" );
      ctrl.STATE_INIT_DATA_ACCESS:  vc_trace.append_str( trace_str, "IN" );
      ctrl.STATE_READ_DATA_ACCESS:  vc_trace.append_str( trace_str, "RD" );
      ctrl.STATE_WRITE_DATA_ACCESS: vc_trace.append_str( trace_str, "WD" );
      ctrl.STATE_REFILL_REQUEST:    vc_trace.append_str( trace_str, "RR" );
      ctrl.STATE_REFILL_WAIT:       vc_trace.append_str( trace_str, "RW" );
      ctrl.STATE_REFILL_UPDATE:     vc_trace.append_str( trace_str, "RU" );
      ctrl.STATE_EVICT_PREPARE:     vc_trace.append_str( trace_str, "EP" );
      ctrl.STATE_EVICT_REQUEST:     vc_trace.append_str( trace_str, "ER" );
      ctrl.STATE_EVICT_WAIT:        vc_trace.append_str( trace_str, "EW" );
      ctrl.STATE_WAIT:              vc_trace.append_str( trace_str, "W " );
      default:                      vc_trace.append_str( trace_str, "? " );

    endcase

    
    vc_trace.append_str( trace_str, " " );

    // Use a "hit" signal in the control unit to display h/m

    if ( ctrl.state_reg == ctrl.STATE_TAG_CHECK ) begin
      if ( ctrl.hit_TC )
        vc_trace.append_str( trace_str, "h" );
      else
        vc_trace.append_str( trace_str, "m" );
    end
    else
      vc_trace.append_str( trace_str, " " );

    // Way 0: Display all valid tags, show dirty bits with ; symbol

    // vc_trace.append_str( trace_str, "[" );
    // for ( i = 0; i < 8; i = i + 1 ) begin
    //   if ( !ctrl.valid_bits_way0.rfile[i] )
    //     vc_trace.append_str( trace_str, "   " );
    //   else begin
    //     $sformat( str, "%x", dpath.tag_array_way0.mem[i][7:0] );
    //     vc_trace.append_str( trace_str, str );
    //     if      (  ctrl.dirty_bits_way0.rfile[i] && (ctrl.use_bits.rfile[i] != 1'b0) ) vc_trace.append_str( trace_str, "," ); // dirty & used_bit=1
    //     else if ( !ctrl.dirty_bits_way0.rfile[i] && (ctrl.use_bits.rfile[i] == 1'b0) ) vc_trace.append_str( trace_str, "." ); // not dirty & used_bit=0
    //     else if (  ctrl.dirty_bits_way0.rfile[i] && (ctrl.use_bits.rfile[i] == 1'b0) ) vc_trace.append_str( trace_str, ";" ); // dirty & used_bit=0
    //     else                                                              vc_trace.append_str( trace_str, " " );              // not dirty & used_bit=1
    //   end
    // end
    // vc_trace.append_str( trace_str, "]" );

    // // Way 1: Display all valid tags, show dirty bits with ; symbol

    // vc_trace.append_str( trace_str, "[" );
    // for ( i = 0; i < 8; i = i + 1 ) begin
    //   if ( !ctrl.valid_bits_way1.rfile[i] )
    //     vc_trace.append_str( trace_str, "   " );
    //   else begin
    //     $sformat( str, "%x", dpath.tag_array_way1.mem[i][7:0] );
    //     vc_trace.append_str( trace_str, str );
    //     if      (  ctrl.dirty_bits_way1.rfile[i] && (ctrl.use_bits.rfile[i] != 1'b1) ) vc_trace.append_str( trace_str, "," ); // dirty & used_bit=0
    //     else if ( !ctrl.dirty_bits_way1.rfile[i] && (ctrl.use_bits.rfile[i] == 1'b1) ) vc_trace.append_str( trace_str, "." ); // not dirty & used_bit=1
    //     else if (  ctrl.dirty_bits_way1.rfile[i] && (ctrl.use_bits.rfile[i] == 1'b1) ) vc_trace.append_str( trace_str, ";" ); // dirty & used_bit=1
    //     else                                                                vc_trace.append_str( trace_str, " " );            // not dirty & used_bit=0
    //   end
    // end
    // vc_trace.append_str( trace_str, "]" );

    vc_trace.append_str( trace_str, ")" );
    
  end
  `VC_TRACE_END

  // These trace modules are useful because they breakout all the
  // individual fields so you can see them in gtkwave

  vc_MemReqMsg4BTrace proc2cache_reqstream_msg_trace
  (
    .clk   (clk),
    .reset (reset),
    .val   (proc2cache_reqstream_val),
    .rdy   (proc2cache_reqstream_rdy),
    .msg   (proc2cache_reqstream_msg)
  );

  vc_MemRespMsg4BTrace proc2cache_respstream_trace
  (
    .clk   (clk),
    .reset (reset),
    .val   (proc2cache_respstream_val),
    .rdy   (proc2cache_respstream_val),
    .msg   (proc2cache_respstream_msg)
  );

  vc_MemReqMsg16BTrace cache2mem_reqstream_msg_trace
  (
    .clk   (clk),
    .reset (reset),
    .val   (cache2mem_reqstream_val),
    .rdy   (cache2mem_reqstream_rdy),
    .msg   (cache2mem_reqstream_msg)
  );

  vc_MemRespMsg16BTrace cache2mem_respstream_msg_trace
  (
    .clk   (clk),
    .reset (reset),
    .val   (cache2mem_respstream_val),
    .rdy   (cache2mem_respstream_rdy),
    .msg   (cache2mem_respstream_msg)
  );

  `endif

endmodule

`endif
