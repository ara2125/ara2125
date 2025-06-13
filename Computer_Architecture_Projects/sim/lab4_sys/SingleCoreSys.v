//========================================================================
// Single-Core System
//========================================================================

`ifndef LAB4_SYS_SINGLE_CORE_SYS_V
`define LAB4_SYS_SINGLE_CORE_SYS_V

`include "vc/mem-msgs.v"
`include "vc/trace.v"

`include "lab2_proc/ProcAlt.v"
`include "lab3_mem/CacheAlt.v"

module lab4_sys_SingleCoreSys
(
  input  logic          clk,
  input  logic          reset,

  // From mngr streaming port

  input  logic [31:0]   mngr2proc_msg,
  input  logic          mngr2proc_val,
  output logic          mngr2proc_rdy,

  // To mngr streaming port

  output logic [31:0]   proc2mngr_msg,
  output logic          proc2mngr_val,
  input  logic          proc2mngr_rdy,

  // Instruction Memory Request Port

  output mem_req_16B_t  imem_reqstream_msg,
  output logic          imem_reqstream_val,
  input  logic          imem_reqstream_rdy,

  // Instruction Memory Response Port

  input  mem_resp_16B_t imem_respstream_msg,
  input  logic          imem_respstream_val,
  output logic          imem_respstream_rdy,

  // Data Memory Request Port

  output mem_req_16B_t  dmem_reqstream_msg,
  output logic          dmem_reqstream_val,
  input  logic          dmem_reqstream_rdy,

  // Data Memory Response Port

  input  mem_resp_16B_t dmem_respstream_msg,
  input  logic          dmem_respstream_val,
  output logic          dmem_respstream_rdy,

  // stats output

  output logic          stats_en,
  output logic [3:0]    commit_inst,
  output logic [3:0]    icache_access,
  output logic [3:0]    icache_miss,
  output logic [3:0]    dcache_access,
  output logic [3:0]    dcache_miss
);

  //----------------------------------------------------------------------
  // Processor
  //----------------------------------------------------------------------

  lab2_proc_ProcAlt proc
  (
    .clk                 (clk),
    .reset               (reset),
    
    // From mngr streaming port

    .mngr2proc_msg       (mngr2proc_msg),
    .mngr2proc_val       (mngr2proc_val),
    .mngr2proc_rdy       (mngr2proc_rdy),
    
    // To mngr streaming port

    .proc2mngr_msg       (proc2mngr_msg),
    .proc2mngr_val       (proc2mngr_val),
    .proc2mngr_rdy       (proc2mngr_rdy),

    // Instruction Memory Request Port

    .imem_reqstream_msg  (icache_reqstream_msg),
    .imem_reqstream_val  (icache_reqstream_val),
    .imem_reqstream_rdy  (icache_reqstream_rdy),

    // Instruction Memory Response Port

    .imem_respstream_msg (icache_respstream_msg),
    .imem_respstream_val (icache_respstream_val),
    .imem_respstream_rdy (icache_respstream_rdy),

    // Data Memory Request Port

    .dmem_reqstream_msg  (dcache_reqstream_msg),
    .dmem_reqstream_val  (dcache_reqstream_val),
    .dmem_reqstream_rdy  (dcache_reqstream_rdy),

    // Data Memory Response Port
    .dmem_respstream_msg (dcache_respstream_msg),
    .dmem_respstream_val (dcache_respstream_val),
    .dmem_respstream_rdy (dcache_respstream_rdy),

    // stats output; core_id is an input port rather than a parameter so
    // that the module only needs to be compiled once. If it were a
    // parameter, each core would be compiled separately.
    
    .core_id             (0),
    .commit_inst         (commit_inst),
    .stats_en            (stats_en)
    
  );
  
  //----------------------------------------------------------------------
  // Connect the processor to the instruction cache
  //----------------------------------------------------------------------

  // Processor to icache reqest stream
  mem_req_4B_t  icache_reqstream_msg;
  logic         icache_reqstream_val;
  logic         icache_reqstream_rdy;

  // Processor to icache response stream
  mem_resp_4B_t icache_respstream_msg;
  logic         icache_respstream_val;
  logic         icache_respstream_rdy;
  
  // Processor to icache reqest stream
  mem_req_4B_t  proc2icache_reqstream_msg;
  logic         proc2icache_reqstream_val;
  logic         proc2icache_reqstream_rdy;

  // Processor to icache response stream
  mem_resp_4B_t proc2icache_respstream_msg;
  logic         proc2icache_respstream_val;
  logic         proc2icache_respstream_rdy;
  
  // Processor <-> Instruction Cache Interface
  assign proc2icache_reqstream_msg  = icache_reqstream_msg;
  assign proc2icache_reqstream_val  = icache_reqstream_val;
  assign icache_reqstream_rdy       = proc2icache_reqstream_rdy;

  assign icache_respstream_msg      = proc2icache_respstream_msg;
  assign icache_respstream_val      = proc2icache_respstream_val;
  assign proc2icache_respstream_rdy = icache_respstream_rdy;

  //----------------------------------------------------------------------
  // Connect the processor to the data cache
  //----------------------------------------------------------------------

  // Processor to dcache reqest stream
  mem_req_4B_t   dcache_reqstream_msg;
  logic          dcache_reqstream_val;
  logic          dcache_reqstream_rdy;

  // Processor to dcache response stream
  mem_resp_4B_t  dcache_respstream_msg;
  logic          dcache_respstream_val;
  logic          dcache_respstream_rdy;
  
  // Processor to dcache reqest stream
  mem_req_4B_t   proc2dcache_reqstream_msg;
  logic          proc2dcache_reqstream_val;
  logic          proc2dcache_reqstream_rdy;

  // Processor to dcache response stream
  mem_resp_4B_t  proc2dcache_respstream_msg;
  logic          proc2dcache_respstream_val;
  logic          proc2dcache_respstream_rdy;
  
  // Processor <-> Data Cache Interface
  assign proc2dcache_reqstream_msg  = dcache_reqstream_msg;
  assign proc2dcache_reqstream_val  = dcache_reqstream_val;
  assign dcache_reqstream_rdy       = proc2dcache_reqstream_rdy;

  assign dcache_respstream_msg      = proc2dcache_respstream_msg;
  assign dcache_respstream_val      = proc2dcache_respstream_val;
  assign proc2dcache_respstream_rdy = dcache_respstream_rdy;

  //----------------------------------------------------------------------
  // Instruction Cache
  //----------------------------------------------------------------------

  lab3_mem_CacheAlt #(1) icache
  (
    .clk                       (clk),
    .reset                     (reset),

    // Processor <-> Instruction Cache Interface

    .proc2cache_reqstream_msg  (proc2icache_reqstream_msg),
    .proc2cache_reqstream_val  (proc2icache_reqstream_val),
    .proc2cache_reqstream_rdy  (proc2icache_reqstream_rdy),

    .proc2cache_respstream_msg (proc2icache_respstream_msg),
    .proc2cache_respstream_val (proc2icache_respstream_val),
    .proc2cache_respstream_rdy (proc2icache_respstream_rdy),

    // Instruction Cache <-> Memory Interface

    .cache2mem_reqstream_msg   (icache2mem_reqstream_msg),
    .cache2mem_reqstream_val   (icache2mem_reqstream_val),
    .cache2mem_reqstream_rdy   (icache2mem_reqstream_rdy),

    .cache2mem_respstream_msg  (icache2mem_respstream_msg),
    .cache2mem_respstream_val  (icache2mem_respstream_val),
    .cache2mem_respstream_rdy  (icache2mem_respstream_rdy)
  );
  
  //----------------------------------------------------------------------
  // Connect the instruction cache to the memory
  //----------------------------------------------------------------------

  // Instruction cache to memory request stream
  mem_req_16B_t  icache2mem_reqstream_msg;
  logic          icache2mem_reqstream_val;
  logic          icache2mem_reqstream_rdy;
  
  // Instruction cache to memory response stream
  mem_resp_16B_t icache2mem_respstream_msg;
  logic          icache2mem_respstream_val;
  logic          icache2mem_respstream_rdy;
  
  // Instruction Cache <-> Memory Interface
  assign imem_reqstream_msg        = icache2mem_reqstream_msg;
  assign imem_reqstream_val        = icache2mem_reqstream_val;
  assign icache2mem_reqstream_rdy  = imem_reqstream_rdy;

  assign icache2mem_respstream_msg = imem_respstream_msg;
  assign icache2mem_respstream_val = imem_respstream_val;
  assign imem_respstream_rdy       = icache2mem_respstream_rdy;

  //----------------------------------------------------------------------
  // Data Cache
  //----------------------------------------------------------------------

  lab3_mem_CacheAlt #(1) dcache
  (
    .clk                       (clk),
    .reset                     (reset),

    // Processor <-> Cache Interface

    .proc2cache_reqstream_msg  (proc2dcache_reqstream_msg),
    .proc2cache_reqstream_val  (proc2dcache_reqstream_val),
    .proc2cache_reqstream_rdy  (proc2dcache_reqstream_rdy),

    .proc2cache_respstream_msg (proc2dcache_respstream_msg),
    .proc2cache_respstream_val (proc2dcache_respstream_val),
    .proc2cache_respstream_rdy (proc2dcache_respstream_rdy),

    // Cache <-> Memory Interface

    .cache2mem_reqstream_msg   (dcache2mem_reqstream_msg),
    .cache2mem_reqstream_val   (dcache2mem_reqstream_val),
    .cache2mem_reqstream_rdy   (dcache2mem_reqstream_rdy),

    .cache2mem_respstream_msg  (dcache2mem_respstream_msg),
    .cache2mem_respstream_val  (dcache2mem_respstream_val),
    .cache2mem_respstream_rdy  (dcache2mem_respstream_rdy)
  );

  //----------------------------------------------------------------------
  // Connect the data cache to the memory
  //----------------------------------------------------------------------
  
  // Data cache to memory request stream
  mem_req_16B_t  dcache2mem_reqstream_msg;
  logic          dcache2mem_reqstream_val;
  logic          dcache2mem_reqstream_rdy;
  
  // Data cache to memory response stream
  mem_resp_16B_t dcache2mem_respstream_msg;
  logic          dcache2mem_respstream_val;
  logic          dcache2mem_respstream_rdy;
  
  // Data Cache <-> Memory Interface
  assign dmem_reqstream_msg        = dcache2mem_reqstream_msg;
  assign dmem_reqstream_val        = dcache2mem_reqstream_val;
  assign dcache2mem_reqstream_rdy  = dmem_reqstream_rdy;
  
  assign dcache2mem_respstream_msg = dmem_respstream_msg;
  assign dcache2mem_respstream_val = dmem_respstream_val;
  assign dmem_respstream_rdy       = dcache2mem_respstream_rdy;

  // Use some extra ports to report on the number of cache accesses and
  // misses to be able to calculate the miss rate in the evaluation
  // simulator. If you use different names for your wires, you may need
  // to update this logic.

  assign icache_access = proc2icache_reqstream_val  & proc2icache_reqstream_rdy;
  assign icache_miss   = proc2icache_respstream_val & proc2icache_respstream_rdy & ~proc2icache_respstream_msg.test[0];
  assign dcache_access = proc2dcache_reqstream_val  & proc2dcache_reqstream_rdy;
  assign dcache_miss   = proc2dcache_respstream_val & proc2dcache_respstream_rdy & ~proc2dcache_respstream_msg.test[0];

  //----------------------------------------------------------------------
  // Line Traceing
  //----------------------------------------------------------------------
  // If you use different instance names for your processor and caches,
  // you may need to update the line tracing logic.

  `ifndef SYNTHESIS

  `VC_TRACE_BEGIN
  begin
    proc.line_trace( trace_str );
    vc_trace.append_str( trace_str, "|" );
    icache.line_trace( trace_str );
    dcache.line_trace( trace_str );
  end
  `VC_TRACE_END

   `endif /* SYNTHESIS */

endmodule

`endif /* LAB4_SYS_SINGLE_CORE_SYS_V */
