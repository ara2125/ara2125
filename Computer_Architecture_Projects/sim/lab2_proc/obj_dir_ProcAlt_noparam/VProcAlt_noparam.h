// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VPROCALT_NOPARAM_H_
#define VERILATED_VPROCALT_NOPARAM_H_  // guard

#include "verilated.h"
#include "svdpi.h"

class VProcAlt_noparam__Syms;
class VProcAlt_noparam___024root;
class VerilatedVcdC;

// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) VProcAlt_noparam VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    VProcAlt_noparam__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = true;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_IN8(&reset,0,0);
    VL_OUT8(&commit_inst,0,0);
    VL_OUT8(&stats_en,0,0);
    VL_IN8(&dmem_reqstream_rdy,0,0);
    VL_OUT8(&dmem_reqstream_val,0,0);
    VL_OUT8(&dmem_respstream_rdy,0,0);
    VL_IN8(&dmem_respstream_val,0,0);
    VL_IN8(&imem_reqstream_rdy,0,0);
    VL_OUT8(&imem_reqstream_val,0,0);
    VL_OUT8(&imem_respstream_rdy,0,0);
    VL_IN8(&imem_respstream_val,0,0);
    VL_OUT8(&mngr2proc_rdy,0,0);
    VL_IN8(&mngr2proc_val,0,0);
    VL_IN8(&proc2mngr_rdy,0,0);
    VL_OUT8(&proc2mngr_val,0,0);
    VL_IN(&core_id,31,0);
    VL_OUTW(&dmem_reqstream_msg,77,0,3);
    VL_OUTW(&imem_reqstream_msg,77,0,3);
    VL_IN(&mngr2proc_msg,31,0);
    VL_OUT(&proc2mngr_msg,31,0);
    VL_IN64(&dmem_respstream_msg,47,0);
    VL_IN64(&imem_respstream_msg,47,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    VProcAlt_noparam___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit VProcAlt_noparam(VerilatedContext* contextp, const char* name = "TOP");
    explicit VProcAlt_noparam(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~VProcAlt_noparam();
  private:
    VL_UNCOPYABLE(VProcAlt_noparam);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    /// DPI Export functions
    static void line_trace(svBitVecVal* trace_str);

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
