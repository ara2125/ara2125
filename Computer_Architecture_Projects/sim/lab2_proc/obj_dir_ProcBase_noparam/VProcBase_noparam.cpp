// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VProcBase_noparam__pch.h"

//============================================================
// Constructors

VProcBase_noparam::VProcBase_noparam(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VProcBase_noparam__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , commit_inst{vlSymsp->TOP.commit_inst}
    , stats_en{vlSymsp->TOP.stats_en}
    , dmem_reqstream_rdy{vlSymsp->TOP.dmem_reqstream_rdy}
    , dmem_reqstream_val{vlSymsp->TOP.dmem_reqstream_val}
    , dmem_respstream_rdy{vlSymsp->TOP.dmem_respstream_rdy}
    , dmem_respstream_val{vlSymsp->TOP.dmem_respstream_val}
    , imem_reqstream_rdy{vlSymsp->TOP.imem_reqstream_rdy}
    , imem_reqstream_val{vlSymsp->TOP.imem_reqstream_val}
    , imem_respstream_rdy{vlSymsp->TOP.imem_respstream_rdy}
    , imem_respstream_val{vlSymsp->TOP.imem_respstream_val}
    , mngr2proc_rdy{vlSymsp->TOP.mngr2proc_rdy}
    , mngr2proc_val{vlSymsp->TOP.mngr2proc_val}
    , proc2mngr_rdy{vlSymsp->TOP.proc2mngr_rdy}
    , proc2mngr_val{vlSymsp->TOP.proc2mngr_val}
    , core_id{vlSymsp->TOP.core_id}
    , dmem_reqstream_msg{vlSymsp->TOP.dmem_reqstream_msg}
    , imem_reqstream_msg{vlSymsp->TOP.imem_reqstream_msg}
    , mngr2proc_msg{vlSymsp->TOP.mngr2proc_msg}
    , proc2mngr_msg{vlSymsp->TOP.proc2mngr_msg}
    , dmem_respstream_msg{vlSymsp->TOP.dmem_respstream_msg}
    , imem_respstream_msg{vlSymsp->TOP.imem_respstream_msg}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VProcBase_noparam::VProcBase_noparam(const char* _vcname__)
    : VProcBase_noparam(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VProcBase_noparam::~VProcBase_noparam() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VProcBase_noparam___024root___eval_debug_assertions(VProcBase_noparam___024root* vlSelf);
#endif  // VL_DEBUG
void VProcBase_noparam___024root___eval_static(VProcBase_noparam___024root* vlSelf);
void VProcBase_noparam___024root___eval_initial(VProcBase_noparam___024root* vlSelf);
void VProcBase_noparam___024root___eval_settle(VProcBase_noparam___024root* vlSelf);
void VProcBase_noparam___024root___eval(VProcBase_noparam___024root* vlSelf);

void VProcBase_noparam::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VProcBase_noparam::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VProcBase_noparam___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VProcBase_noparam___024root___eval_static(&(vlSymsp->TOP));
        VProcBase_noparam___024root___eval_initial(&(vlSymsp->TOP));
        VProcBase_noparam___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VProcBase_noparam___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VProcBase_noparam::eventsPending() { return false; }

uint64_t VProcBase_noparam::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VProcBase_noparam::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VProcBase_noparam___024root___eval_final(VProcBase_noparam___024root* vlSelf);

VL_ATTR_COLD void VProcBase_noparam::final() {
    VProcBase_noparam___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VProcBase_noparam::hierName() const { return vlSymsp->name(); }
const char* VProcBase_noparam::modelName() const { return "VProcBase_noparam"; }
unsigned VProcBase_noparam::threads() const { return 1; }
void VProcBase_noparam::prepareClone() const { contextp()->prepareClone(); }
void VProcBase_noparam::atClone() const {
    contextp()->threadPoolpOnClone();
}
