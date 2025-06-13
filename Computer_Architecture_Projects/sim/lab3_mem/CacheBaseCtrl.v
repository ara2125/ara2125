//=========================================================================
// Base Blocking Cache Control
//=========================================================================

`ifndef LAB3_MEM_CACHE_BASE_CTRL_V
`define LAB3_MEM_CACHE_BASE_CTRL_V

`include "vc/regfiles.v"
`include "vc/mem-msgs.v"

module lab3_mem_CacheBaseCtrl
#(
  parameter p_num_banks = 1
)
(
  input  logic        clk,
  input  logic        reset,

  // Processor <-> Cache Interface

  input  logic        proc2cache_reqstream_val,
  output logic        proc2cache_reqstream_rdy,

  output logic        proc2cache_respstream_val,
  input  logic        proc2cache_respstream_rdy,

  // Cache <-> Memory Interface

  output logic        cache2mem_reqstream_val,
  input  logic        cache2mem_reqstream_rdy,

  input  logic        cache2mem_respstream_val,
  output logic        cache2mem_respstream_rdy,

  // control signals: datapath <-> control unit

  // tag array

  output        cachereq_reg_en,        // if the cache could accpet new message,
  output        tag_array_ren,          // tag array read enable
  output        tag_array_wen,          // tag array write enable
  output        evict_addr_reg_en,      // save the address of the data, evict the dirty data to the memory
  output        memreq_addr_mux_sel,    // choose the address to send to memory (1) when cache miss: send the address of the cache line (2) when the cache line is to be replaced due to read miss, send the evicted address
  output [2:0]  cacheresp_type,         // read or write, send to processor
  output [1:0]  hit_WAIT,               // hit or miss, send to processor and check

  input  [2:0]  cachereq_type,          // read or write, send from processor
  input  [31:0] cachereq_addr,          // address send to memory
  input         tag_match,              // compare to see if tag match

  // data array

  output        memresp_reg_en,         // if the cache could accpet the data from memory
  output        write_data_mux_sel,     // select from (1) cache data(write) or (2) memory response data(read) 
  output        wben_mux_sel,           // write byte enable decoder, control which bytes are written to the data array in the cache line 
  output        data_array_ren,         // data array read enable
  output        data_array_wen,         // data array write enable
  output        read_data_zero_mux_sel, // (1) Select data from data array (2)If there is no valid data in the cache, select the default value of 0 as output.
  output        read_data_reg_en,       // if the cache could accpet the data from memory
  output [2:0]  memreq_type             // read(0) or write(1), send to processor
);

  //----------------------------------------------------------------------
  // State Definitions
  //----------------------------------------------------------------------

  localparam STATE_IDLE              = 5'd0;
  localparam STATE_TAG_CHECK         = 5'd1;
  localparam STATE_INIT_DATA_ACCESS  = 5'd2;
  localparam STATE_READ_DATA_ACCESS  = 5'd3;
  localparam STATE_WRITE_DATA_ACCESS = 5'd4;
  localparam STATE_REFILL_REQUEST    = 5'd5;
  localparam STATE_REFILL_WAIT       = 5'd6;
  localparam STATE_REFILL_UPDATE     = 5'd7;
  localparam STATE_EVICT_PREPARE     = 5'd8;
  localparam STATE_EVICT_REQUEST     = 5'd9;
  localparam STATE_EVICT_WAIT        = 5'd10;
  localparam STATE_WAIT              = 5'd11;
  
  //----------------------------------------------------------------------
  // State
  //----------------------------------------------------------------------

  always_ff @( posedge clk ) begin
    if ( reset ) begin
      state_reg <= STATE_IDLE;
    end
    else begin
      state_reg <= state_next;
    end
  end

  //----------------------------------------------------------------------
  // State Transitions
  //----------------------------------------------------------------------
  
  // Determine the type of the message

  logic is_read;
  logic is_write;
  logic is_init;

  assign is_read  = cachereq_type == `VC_MEM_REQ_MSG_TYPE_READ;
  assign is_write = cachereq_type == `VC_MEM_REQ_MSG_TYPE_WRITE;
  assign is_init  = cachereq_type == `VC_MEM_REQ_MSG_TYPE_WRITE_INIT;

  // Determine the if the cache hit or miss
  
  logic is_read_hit;
  logic is_read_miss;
  logic is_write_hit;
  logic is_write_miss;
  logic is_miss;
  logic is_hit;

  assign is_read_hit   = (tag_match && is_read) && is_valid;
  assign is_read_miss  = (!tag_match || !is_valid) && is_read;
  assign is_write_hit  = (tag_match && is_write) && is_valid;
  assign is_write_miss = (!tag_match || !is_valid) && is_write;
  assign is_miss       = is_read_miss || is_write_miss;
  assign is_hit        = is_read_hit || is_write_hit;

  // State transition logic

  logic [4:0] state_reg;
  logic [4:0] state_next;

  always_comb begin

    state_next = state_reg;
    case ( state_reg )

      STATE_IDLE:
        if ( proc2cache_reqstream_val )
          state_next = STATE_TAG_CHECK;
        else 
          state_next = STATE_IDLE;
      STATE_TAG_CHECK:
        // init transcation 
        if ( is_init )
          state_next = STATE_INIT_DATA_ACCESS;
        // read hit
        else if( is_read_hit )
          state_next = STATE_READ_DATA_ACCESS;
        // write hit
        else if ( is_write_hit )
          state_next = STATE_WRITE_DATA_ACCESS;
        // miss & not dirty
        else if ( is_miss && !is_dirty )
          state_next = STATE_REFILL_REQUEST;
        else if ( is_miss && is_dirty )
          state_next = STATE_EVICT_PREPARE;
      STATE_INIT_DATA_ACCESS:
          state_next = STATE_WAIT;
      STATE_READ_DATA_ACCESS:  
          state_next = STATE_WAIT;  
      STATE_WRITE_DATA_ACCESS:
          state_next = STATE_WAIT;
      STATE_EVICT_PREPARE:
          state_next = STATE_EVICT_REQUEST;
      STATE_EVICT_REQUEST:
          if ( cache2mem_reqstream_rdy )
            state_next = STATE_EVICT_WAIT;
          else
            state_next = STATE_EVICT_REQUEST;
      STATE_EVICT_WAIT:
          if ( cache2mem_respstream_val )
            state_next = STATE_REFILL_REQUEST;
          else
            state_next = STATE_EVICT_WAIT;
      STATE_REFILL_REQUEST:
          if ( cache2mem_reqstream_rdy )
            state_next = STATE_REFILL_WAIT;
          else
            state_next = STATE_REFILL_REQUEST;
      STATE_REFILL_WAIT:
          if ( cache2mem_respstream_val )
            state_next = STATE_REFILL_UPDATE;
          else
            state_next = STATE_REFILL_WAIT;
      STATE_REFILL_UPDATE:
          if( is_read )
            state_next = STATE_READ_DATA_ACCESS;
          else
            state_next = STATE_WRITE_DATA_ACCESS;
      STATE_WAIT:
        if ( proc2cache_respstream_rdy )
          state_next = STATE_IDLE;
        else
          state_next = STATE_WAIT;

      default:
        state_next = STATE_IDLE;

    endcase

  end

  //----------------------------------------------------------------------
  // Valid/Dirty bits record
  //----------------------------------------------------------------------

  // Set the index of the cache line to be accessed

  logic [3:0] cachereq_addr_index;

  generate
    // handle address mapping for one bank
    if ( p_num_banks == 1 ) begin
      assign cachereq_addr_index = cachereq_addr[7:4];
    end
    // handle address mapping for four banks
    else if ( p_num_banks == 4 ) begin
      assign cachereq_addr_index = cachereq_addr[9:6];
    end
  endgenerate
  
  // Valid bits
  
  // When updating the valid bits of a cache line, set valid_bit_in to 1 or 0

  logic valid_bit_in;
  logic valid_bits_write_en;
  logic is_valid;

  vc_ResetRegfile_1r1w#(1,16) valid_bits
  (
    .clk        (clk),
    .reset      (reset),
    .read_addr  (cachereq_addr_index), // input
    .read_data  (is_valid),            // output
    .write_en   (valid_bits_write_en), // input
    .write_addr (cachereq_addr_index), // input
    .write_data (valid_bit_in)         // input
  );

  // Dirty bits

  // When updating the dirty bits of a cache line, set dirty_bit_in to 1 or 0
  
  logic dirty_bit_in;        
  logic dirty_bits_write_en;
  logic is_dirty;
  
  // Used to store the valid bits of 16 cache lines

  vc_ResetRegfile_1r1w#(1,16) dirty_bits
  (
    .clk        (clk),
    .reset      (reset),
    .read_addr  (cachereq_addr_index), // input
    .read_data  (is_dirty),            // output
    .write_en   (dirty_bits_write_en), // input
    .write_addr (cachereq_addr_index), // input
    .write_data (dirty_bit_in)         // input
  );

  //----------------------------------------------------------------------
  // State Outputs
  //----------------------------------------------------------------------

  task cs
    (
      input logic       cs_cachereq_rdy,           // if the cache could accpet message from processor
      input logic       cs_cacheresp_val,          // if the cache could send the data to processor
      input logic       cs_cachereq_reg_en,        // if the cache could accpet new message

      input logic       cs_memresp_rdy,            // if the cache could accpet the data from memory
      input logic       cs_memreq_val,             // if the cache could send the data to memory
      input logic       cs_memresp_reg_en,         // if the cache could accpet new message from memory
      
      input logic       cs_tag_array_ren,          // tag array read enable 
      input logic       cs_tag_array_wen,          // tag array write enable
      
      
      input logic       cs_data_array_ren,         // data array read enable
      input logic       cs_data_array_wen,         // data array write enable
      input logic       cs_wben_mux_sel,           // write byte enable decoder, control which bytes are written to the data array in the cache line
      input logic       cs_write_data_mux_sel,     // select from (1) cache data(write) or (2) memory response data(read)

      input logic       cs_valid_bit_in,           // valid bit
      input logic       cs_valid_bits_write_en,    // valid bit write enable
      input logic       cs_dirty_bit_in,           // dirty bit
      input logic       cs_dirty_bits_write_en,    // dirty bit write enable

      input logic       cs_evict_addr_reg_en,      // save the address of the data, evict the dirty data to the memory
      input logic       cs_memreq_addr_mux_sel,    // choose the address to send to memory (1) when cache miss: send the address of the cache line (2) when the cache line is to be replaced due to read miss, send the evicted address
      
      input logic       cs_read_data_zero_mux_sel, // (1) Select data from data array (2)If there is no valid data in the cache, select the default value of 0 as output.
      input logic       cs_read_data_reg_en,       // if the cache could accpet the data from memory

      input logic [2:0] cs_cacheresp_type,         // read(0) or write(1) or init(2), send to processor
      input logic [2:0] cs_memreq_type             // read or write, send to processor

    );
    begin
      proc2cache_reqstream_rdy  = cs_cachereq_rdy;
      proc2cache_respstream_val = cs_cacheresp_val;
      cachereq_reg_en           = cs_cachereq_reg_en;

      cache2mem_respstream_rdy  = cs_memresp_rdy;
      cache2mem_reqstream_val   = cs_memreq_val;
      memresp_reg_en            = cs_memresp_reg_en;
      
      tag_array_ren             = cs_tag_array_ren;
      tag_array_wen             = cs_tag_array_wen;
      
      data_array_ren            = cs_data_array_ren;
      data_array_wen            = cs_data_array_wen;
      wben_mux_sel              = cs_wben_mux_sel;
      write_data_mux_sel        = cs_write_data_mux_sel;

      valid_bit_in              = cs_valid_bit_in;
      valid_bits_write_en       = cs_valid_bits_write_en;
      dirty_bit_in              = cs_dirty_bit_in;
      dirty_bits_write_en       = cs_dirty_bits_write_en;

      evict_addr_reg_en         = cs_evict_addr_reg_en;
      memreq_addr_mux_sel       = cs_memreq_addr_mux_sel;
      
      read_data_zero_mux_sel    = cs_read_data_zero_mux_sel;
      read_data_reg_en          = cs_read_data_reg_en;

      cacheresp_type            = cs_cacheresp_type;
      memreq_type               = cs_memreq_type;
    end
    endtask

  // Set outputs using a control signal "table"
  always_comb begin
                              cs( 0,   0,   0,     0,    0,   0,    0,     0,     0,     0,     0,     0,    0,     0,     0,     0,     0,      0,     0,    0,   TYPE_READ,   TYPE_READ );
    case ( state_reg )
      //                        cache cache cache  mem   mem  mem   tag    tag    data   data   wben   write valid  valid  dirty  dirty  evict   memreq read  read cache       mem 
      //                        req   resp  req    resp  req  resp  array  array  array  array  mux    data  bit    bit    bit    bit    addr    addr   data  data resp        req
      //                        rdy   val   en     rdy   val  en    ren    wen    ren    wen    sel    mux   in     write  in     write  reg     mux    zero  reg  type        type
      //                                                                                               sel          en            en     en      sel    mux   en
      //                                                                                                                                                sel
      STATE_IDLE:             cs( 1,  0,    1,     0,    0,   0,    0,     0,     0,     0,    'x,    'x,    0,     0,    'x,     0,     0,     'x,    'x,    0,   TYPE_X,     TYPE_X     );
      STATE_TAG_CHECK:        cs( 0,  0,    0,     0,    0,   0,    1,     0,     0,     0,    'x,    'x,   'x,     0,    'x,     0,     0,     'x,    'x,    0,   TYPE_X,     TYPE_X     ); // Tag check
      STATE_INIT_DATA_ACCESS: cs( 0,  0,    0,     0,    0,   0,    0,     1,     0,     1,     0,     0,    1,     1,     0,     1,     0,     'x,    'x,    0,   TYPE_INIT,  TYPE_X     ); // Immediately write to appropriate cache line
      STATE_READ_DATA_ACCESS: cs( 0,  0,    0,     0,    0,   0,    0,     0,     1,     0,    'x,    'x,    1,     1,    'x,     0,     0,     'x,     0,    1,   TYPE_READ,  TYPE_X     ); // Read from appropriate cache line
      STATE_WRITE_DATA_ACCESS:cs( 0,  0,    0,     0,    0,   0,    0,     0,     0,     1,     0,     0,    1,     1,     1,     1,     0,     'x,     1,    1,   TYPE_WRITE, TYPE_X     ); // Write to appropriate cache line
      STATE_EVICT_PREPARE:    cs( 0,  0,    0,     0,    0,   0,    1,     0,     1,     0,    'x,    'x,   'x,     0,    'x,     0,     1,     'x,     0,    1,   TYPE_X,     TYPE_X     ); //  Read tag and data, and prepare eviction message
      STATE_EVICT_REQUEST:    cs( 0,  0,    0,     0,    1,   0,    0,     0,     0,     0,    'x,    'x,   'x,     0,    'x,     0,     0,      0,    'x,    0,   TYPE_X,     TYPE_WRITE ); // Make a request to memory to write the evicted cache line
      STATE_EVICT_WAIT:       cs( 0,  0,    0,     1,    0,   0,    0,     0,     0,     0,    'x,    'x,   'x,     0,    'x,     0,     0,     'x,    'x,    0,   TYPE_X,     TYPE_X     ); // Wait for memory response
      STATE_REFILL_REQUEST:   cs( 0,  0,    0,     0,    1,   0,   'x,     0,    'x,     0,    'x,    'x,   'x,     0,    'x,     0,     0,      1,     1,    0,   TYPE_X,     TYPE_READ  ); // Make a request to memory for refill the desired cache line
      STATE_REFILL_WAIT:      cs( 0,  0,    0,     1,    0,   1,   'x,     0,    'x,     0,    'x,    'x,   'x,     0,    'x,     0,     0,     'x,    'x,    0,   TYPE_X,     TYPE_X     ); // Wait for the memory to respond to the refill request
      STATE_REFILL_UPDATE:    cs( 0,  0,    0,     0,    0,   0,    0,     1,     0,     1,     1,     1,   'x,     0,     0,     1,     0,     'x,    'x,    0,   TYPE_X,     TYPE_X     ); // Update the cache line with the data from memory
      STATE_WAIT:             cs( 0,  1,    0,     0,    0,   0,    0,     0,     0,     0,    'x,    'x,   'x,     0,    'x,     0,     0,     'x,     0,    0,   TYPE_WAIT,  TYPE_X     ); // Wait while the sink (processor) is busy
      default:                cs( 0,  0,    0,     0,    0,   0,    0,     0,     0,     0,     0,     0,    0,     0,    'x,     0,     0,      1,     1,    0,   TYPE_READ,  TYPE_READ  );

    endcase
  end
  
  // cache response message type

  localparam  TYPE_READ  = 3'd0; // Type of the message: read
  localparam  TYPE_WRITE = 3'd1; // Type of the message: write
  localparam  TYPE_INIT  = 3'd2; // Type of the message: init
  localparam  TYPE_X     = 3'dx; // Type of the message: x
  
  // Determine the type of the message based on the cache request message type

  logic [2:0] TYPE_WAIT;       
  assign  TYPE_WAIT = cachereq_type;

  // Determine the test field (hit or miss) of the cache response message
  
  // hit_WAIT sent to the processor to check if the cache hit or miss

  always_ff @(posedge clk) begin
    if (reset) begin
      hit_WAIT <= 2'b00;
    end
    else if (state_reg == STATE_TAG_CHECK) begin
      if (is_hit)
        hit_WAIT <= 2'b01;
      else
        hit_WAIT <= 2'b00;
    end
  end
  
  // hit_TC specifically used for the line trace 

  logic [1:0] hit_TC;

  always_comb begin
    if (is_hit)
      hit_TC = 2'b01;
    else
      hit_TC = 2'b00;
  end

endmodule

`endif
