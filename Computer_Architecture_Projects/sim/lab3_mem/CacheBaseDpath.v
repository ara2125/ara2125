//=========================================================================
// Base Blocking Cache Datapath
//=========================================================================

`ifndef LAB3_MEM_CACHE_BASE_DPATH_V
`define LAB3_MEM_CACHE_BASE_DPATH_V

`include "vc/mem-msgs.v"
`include "vc/srams.v"
`include "vc/regs.v"
`include "vc/muxes.v"

`include "lab3_mem/WbenDecoder.v"
`include "lab3_mem/ReplUnit.v"

module lab3_mem_CacheBaseDpath
#(
  parameter p_num_banks = 1
)
(
  input  logic          clk,
  input  logic          reset,

  // Processor <-> Cache Interface

  input  mem_req_4B_t   proc2cache_reqstream_msg,
  output mem_resp_4B_t  proc2cache_respstream_msg,

  // Cache <-> Memory Interface

  output mem_req_16B_t  cache2mem_reqstream_msg,
  input  mem_resp_16B_t cache2mem_respstream_msg, // data 128 bits
  
  // control signals: datapath <-> control unit

  // tag array

  input         cachereq_reg_en,        // if the cache could accpet new message
  input         tag_array_ren,          // tag array read enable
  input         tag_array_wen,          // tag array write enable
  input         evict_addr_reg_en,      // save the address of the data, evict the dirty data to the memory
  input         memreq_addr_mux_sel,    // Choose the address to send to memory (1) when cache miss: send the address of the cache line (2) when the cache line is to be replaced due to read miss, send the evicted address
  input  [2:0]  cacheresp_type,         // read or write, send to processor
  input  [1:0]  hit_WAIT,               // hit or miss, send to processor and check
  
  output [2:0]  cachereq_type,          // read or write, send from processor
  output [31:0] cachereq_addr,          // address send to memory
  output        tag_match,              // compare to see if tag match
  
  // data array
  
  input         memresp_reg_en,         // if the cache could accpet the data from memory
  input         write_data_mux_sel,     // select from (1) cache data(write) or (2) memory response data(read) 
  input         wben_mux_sel,           // write byte enable decoder, control which bytes are written to the data array in the cache line 
  input         data_array_ren,         // data array read enable
  input         data_array_wen,         // data array write enable
  input         read_data_zero_mux_sel, // (1) Select data from data array (2)If there is no valid data in the cache, select the default value of 0 as output.
  input         read_data_reg_en,       // read data register enable
  input  [2:0]  memreq_type             // read or write, send to processor

);
  
  // Register the unpacked proc2cache_reqstream_msg
  // cache request message format

  logic [31:0] cachereq_addr_reg_out;
  logic [31:0] cachereq_data_reg_out;
  logic  [2:0] cachereq_type_reg_out;
  logic  [7:0] cachereq_opaque_reg_out;
  
  vc_EnResetReg #(3,0) cachereq_type_reg
  (
    .clk    (clk),
    .reset  (reset),
    .en     (cachereq_reg_en),
    .d      (proc2cache_reqstream_msg.type_),
    .q      (cachereq_type_reg_out)
  );

  vc_EnResetReg #(32,0) cachereq_addr_reg
  (
    .clk    (clk),
    .reset  (reset),
    .en     (cachereq_reg_en),
    .d      (proc2cache_reqstream_msg.addr),
    .q      (cachereq_addr_reg_out)
  );

  vc_EnResetReg #(8,0) cachereq_opaque_reg
  (
    .clk    (clk),
    .reset  (reset),
    .en     (cachereq_reg_en),
    .d      (proc2cache_reqstream_msg.opaque),
    .q      (cachereq_opaque_reg_out)
  );

  vc_EnResetReg #(32,0) cachereq_data_reg
  (
    .clk    (clk),
    .reset  (reset),
    .en     (cachereq_reg_en),
    .d      (proc2cache_reqstream_msg.data),
    .q      (cachereq_data_reg_out)
  );

  assign cachereq_type = cachereq_type_reg_out;
  assign cachereq_addr = cachereq_addr_reg_out;
  
  // memory message format

  logic [127:0] memresp_data_reg_out;

  vc_EnResetReg #(128,0) memresp_data_reg
  (
    .clk    (clk),
    .reset  (reset),
    .en     (memresp_reg_en),
    .d      (cache2mem_respstream_msg.data), 
    .q      (memresp_data_reg_out)
  );

  // Cachereq_msg address mapping

  logic  [1:0] cachereq_addr_byte_offset;
  logic  [1:0] cachereq_addr_word_offset;
  logic  [1:0] cachereq_addr_bank;
  logic  [3:0] cachereq_addr_index;
  logic [23:0] cachereq_addr_tag;
  generate
    // handle address mapping for one banks
    if ( p_num_banks == 1 ) begin
      assign cachereq_addr_byte_offset = cachereq_addr[1:0];
      assign cachereq_addr_word_offset = cachereq_addr[3:2];
      assign cachereq_addr_index       = cachereq_addr[7:4];
      assign cachereq_addr_tag         = cachereq_addr[31:8];
    end
    // handle address mapping for four banks
    else if ( p_num_banks == 4 ) begin
      assign cachereq_addr_byte_offset = cachereq_addr[1:0];
      assign cachereq_addr_word_offset = cachereq_addr[3:2];
      assign cachereq_addr_bank        = cachereq_addr[5:4];
      assign cachereq_addr_index       = cachereq_addr[9:6];
      assign cachereq_addr_tag         = cachereq_addr[31:10];
    end
  endgenerate

  // Replicate cachereq_data 32b -> 128b

  logic [127:0] cachereq_data_replicated;

  lab3_mem_ReplUnit repl_unit
  (
    .in_ (cachereq_data_reg_out),
    .out (cachereq_data_replicated)
  );
  
  // Write data mux sel
  // select from (1) cache data(write) or (2) memory response data(read) 128 bits
  
  logic [127:0] write_data_mux_sel_out;

  vc_Mux2 #(128) write_data_mux
  (
  .in0(cachereq_data_replicated), 
  .in1(memresp_data_reg_out),
  .sel(write_data_mux_sel),
  .out(write_data_mux_sel_out)
  );

  // Write byte enable decoder

  logic [15:0] wben_decoder_out;

  lab3_mem_WbenDecoder wben_decoder
  (
    .in_ (cachereq_addr_word_offset),
    .out (wben_decoder_out)
  );

  // Write byte mux sel
  
  logic [15:0] wben_mux_sel_out;

  vc_Mux2 #(16) wben_mux
  (
  .in0(wben_decoder_out), 
  .in1(16'hffff),
  .sel(wben_mux_sel),
  .out(wben_mux_sel_out)
  );

  // Tag array (16 tags, 24 bits/tag) - Bank 1 & Bank 4
  
  logic [23:0] tag_array_read_out;
  
  vc_CombinationalBitSRAM_1rw
  #(
    .p_data_nbits  (24),
    .p_num_entries (16)
  )
  tag_array
  (
    .clk           (clk),
    .reset         (reset),
    .read_addr     (cachereq_addr_index), 
    .read_data     (tag_array_read_out),    // ouput
    .read_en       (tag_array_ren),
    .write_en      (tag_array_wen),
    .write_addr    (cachereq_addr_index),
    .write_data    (cachereq_addr_tag)
  );

  // Data array (16 cacheslines, 128 bits/cacheline)

  logic [127:0] data_array_read_out;

  vc_CombinationalSRAM_1rw #(128,16) data_array
  (
    .clk           (clk),
    .reset         (reset),
    .read_addr     (cachereq_addr_index),
    .read_data     (data_array_read_out),  // output
    .read_en       (data_array_ren),
    .write_en      (data_array_wen),
    .write_byte_en (wben_mux_sel_out),
    .write_addr    (cachereq_addr_index),
    .write_data    (write_data_mux_sel_out)
  );

  // Datapath that follows the tag array

  // compare tag

  localparam MATCH = 1'b1;
  localparam NOT_MATCH = 1'b0;

  assign tag_match = (tag_array_read_out == cachereq_addr_tag) ? MATCH:NOT_MATCH;

  // make address 1: (tag_output 24b + index 4b) + 4b'0000 = 32 bits
  logic [31:0] evict_addr;

  // make address 2: (cachereq_addr_tag 24b + index 4b) + 4b'0000 = 32 bits
  logic [31:0] cachereq_addr_ifmiss;

  // Select the address to send to memory
  generate
    // bank is 1
    if ( p_num_banks == 1) begin
      assign evict_addr = {tag_array_read_out[23:0], cachereq_addr_index, 4'b0000};
      assign cachereq_addr_ifmiss = {cachereq_addr_tag[23:0], cachereq_addr_index, 4'b0000};
    end
    // bank is 4
    else if ( p_num_banks == 4) begin
      assign evict_addr = {tag_array_read_out[21:0], cachereq_addr_index, cachereq_addr_bank,4'b0000};
      assign cachereq_addr_ifmiss = {cachereq_addr_tag[21:0], cachereq_addr_index, cachereq_addr_bank,4'b0000};
    end
  endgenerate

  logic [31:0] evict_addr_reg_out;

  vc_EnResetReg #(32,0) evict_addr_reg
  (
    .clk    (clk),
    .reset  (reset),
    .en     (evict_addr_reg_en),
    .d      (evict_addr), 
    .q      (evict_addr_reg_out)
  );

  // Select the address to send to memory
  // (1) when cache miss: send the address of the cache line 
  // (2) when the cache line is to be replaced due to read miss, send the evicted address

  logic [31:0] memreq_addr_mux_sel_out;

  vc_Mux2 #(32) memreq_addr_mux
  (
  .in0(evict_addr_reg_out), 
  .in1(cachereq_addr_ifmiss),
  .sel(memreq_addr_mux_sel),
  .out(memreq_addr_mux_sel_out)
  );

  // Datapath that follows the data array

  // read data zero mux

  logic [127:0] read_data_zero_mux_sel_out;

  vc_Mux2 #(128) read_data_zero_mux
  (
  .in0(data_array_read_out), 
  .in1(128'b0),
  .sel(read_data_zero_mux_sel),
  .out(read_data_zero_mux_sel_out)
  );

  // read data reg

  logic [127:0] read_data_reg_out;

  vc_EnResetReg #(128,0) read_data_reg
  (
    .clk    (clk),
    .reset  (reset),
    .en     (read_data_reg_en),
    .d      (read_data_zero_mux_sel_out), 
    .q      (read_data_reg_out)
  );

  // read data word mux

  // Based on the word offset, it selects which word in the cache line
  // should be passed to the processor as cacheresp_data.

  logic [31:0] read_data_word_offest_mux_sel_out;

  vc_Mux4 #(32) read_data_word_offest_mux
  (
  .in0(read_data_reg_out[31:0]), 
  .in1(read_data_reg_out[63:32]),
  .in2(read_data_reg_out[95:64]),
  .in3(read_data_reg_out[127:96]),
  .sel(cachereq_addr_word_offset),
  .out(read_data_word_offest_mux_sel_out)
  );

  // proc to cache respstream message

  assign proc2cache_respstream_msg.opaque = cachereq_opaque_reg_out;
  assign proc2cache_respstream_msg.type_  = cacheresp_type;
  assign proc2cache_respstream_msg.len    = 2'b0;
  assign proc2cache_respstream_msg.test   = hit_WAIT;
  assign proc2cache_respstream_msg.data   = read_data_word_offest_mux_sel_out;

  // cache to memory reqstream message

  assign cache2mem_reqstream_msg.type_  = memreq_type;
  assign cache2mem_reqstream_msg.len    = 4'b0;
  assign cache2mem_reqstream_msg.addr   = memreq_addr_mux_sel_out;
  assign cache2mem_reqstream_msg.data   = read_data_reg_out;
  assign cache2mem_reqstream_msg.opaque = 8'b0;

endmodule

`endif
