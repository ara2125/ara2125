//=========================================================================
// Base Blocking Cache
//=========================================================================
// Note on p_num_banks: In a multi-banked cache design, cache lines are
// interleaved to different cache banks, so that consecutive cache lines
// correspond to a different bank. The following is the addressing
// structure in our four-banked data caches:
//
// +--------------------------+--------------+--------+--------+--------+
// |        22b               |     4b       |   2b   |   2b   |   2b   |
// |        tag               |   index      |bank idx| offset | subwd  |
// +--------------------------+--------------+--------+--------+--------+
//
// We will compose a four-banked cache in the final multi-core lab.

`ifndef LAB3_MEM_CACHE_BASE_V
`define LAB3_MEM_CACHE_BASE_V

`include "vc/mem-msgs.v"
`include "vc/trace.v"

`include "lab3_mem/CacheBaseCtrl.v"
`include "lab3_mem/CacheBaseDpath.v"

module lab3_mem_CacheBase
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

  // Control signals 
  logic        cachereq_reg_en;        // if the cache could accpet new message,
  logic        tag_array_ren;          // tag array read enable
  logic        tag_array_wen;          // tag array write enable
  logic        evict_addr_reg_en;      // save the address of the data, evict the dirty data to the memory
  logic        memreq_addr_mux_sel;    // choose the address to send to memory (1) when cache miss: send the address of the cache line (2) when the cache line is to be replaced due to read miss, send the evicted address
  logic [2:0]  cacheresp_type;         // read or write, send to processor
  logic [1:0]  hit_WAIT;               // hit or miss, send to processor and check

  logic [2:0]  cachereq_type;          // read or write, send from processor
  logic [31:0] cachereq_addr;          // address send to memory
  logic        tag_match;              // compare to see if tag match

  // data array

  logic        memresp_reg_en;         // if the cache could accpet the data from memory
  logic        write_data_mux_sel;     // select from (1) cache data(write) or (2) memory response data(read) 
  logic        wben_mux_sel;           // write byte enable decoder, control which bytes are written to the data array in the cache line 
  logic        data_array_ren;         // data array read enable
  logic        data_array_wen;         // data array write enable
  logic        read_data_zero_mux_sel; // (1) Select data from data array (2)If there is no valid data in the cache, select the default value of 0 as output.
  logic        read_data_reg_en;       // read data register enable
  logic [2:0]  memreq_type;            // read(0) or write(1), send to processor

  //----------------------------------------------------------------------
  // Control
  //----------------------------------------------------------------------

  lab3_mem_CacheBaseCtrl
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

  lab3_mem_CacheBaseDpath
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

    // Display all valid tags, show dirty bits with d symbol

    vc_trace.append_str( trace_str, "[" );
    for ( i = 0; i < 16; i = i + 1 ) begin
      if ( !ctrl.valid_bits.rfile[i] )
        vc_trace.append_str( trace_str, "   " );
      else begin
        $sformat( str, "%x", dpath.tag_array.mem[i][7:0] );
        vc_trace.append_str( trace_str, str );
        if ( !ctrl.dirty_bits.rfile[i] )
          vc_trace.append_str( trace_str, " " );
        else
          vc_trace.append_str( trace_str, "d" );
        if ( !ctrl.valid_bits.rfile[i] )
          vc_trace.append_str( trace_str, " " );
        else
          vc_trace.append_str( trace_str, "v" );
      end
    end
    vc_trace.append_str( trace_str, "]" );

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
