// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VProcDpathAlu_noparam__pch.h"

//============================================================
// Constructors

VProcDpathAlu_noparam::VProcDpathAlu_noparam(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VProcDpathAlu_noparam__Syms(contextp(), _vcname__, this)}
    , reset{vlSymsp->TOP.reset}
    , clk{vlSymsp->TOP.clk}
    , fn{vlSymsp->TOP.fn}
    , ops_eq{vlSymsp->TOP.ops_eq}
    , ops_lt{vlSymsp->TOP.ops_lt}
    , ops_ltu{vlSymsp->TOP.ops_ltu}
    , in0{vlSymsp->TOP.in0}
    , in1{vlSymsp->TOP.in1}
    , out{vlSymsp->TOP.out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VProcDpathAlu_noparam::VProcDpathAlu_noparam(const char* _vcname__)
    : VProcDpathAlu_noparam(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VProcDpathAlu_noparam::~VProcDpathAlu_noparam() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VProcDpathAlu_noparam___024root___eval_debug_assertions(VProcDpathAlu_noparam___024root* vlSelf);
#endif  // VL_DEBUG
void VProcDpathAlu_noparam___024root___eval_static(VProcDpathAlu_noparam___024root* vlSelf);
void VProcDpathAlu_noparam___024root___eval_initial(VProcDpathAlu_noparam___024root* vlSelf);
void VProcDpathAlu_noparam___024root___eval_settle(VProcDpathAlu_noparam___024root* vlSelf);
void VProcDpathAlu_noparam___024root___eval(VProcDpathAlu_noparam___024root* vlSelf);

void VProcDpathAlu_noparam::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VProcDpathAlu_noparam::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VProcDpathAlu_noparam___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VProcDpathAlu_noparam___024root___eval_static(&(vlSymsp->TOP));
        VProcDpathAlu_noparam___024root___eval_initial(&(vlSymsp->TOP));
        VProcDpathAlu_noparam___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VProcDpathAlu_noparam___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VProcDpathAlu_noparam::eventsPending() { return false; }

uint64_t VProcDpathAlu_noparam::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VProcDpathAlu_noparam::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VProcDpathAlu_noparam___024root___eval_final(VProcDpathAlu_noparam___024root* vlSelf);

VL_ATTR_COLD void VProcDpathAlu_noparam::final() {
    VProcDpathAlu_noparam___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VProcDpathAlu_noparam::hierName() const { return vlSymsp->name(); }
const char* VProcDpathAlu_noparam::modelName() const { return "VProcDpathAlu_noparam"; }
unsigned VProcDpathAlu_noparam::threads() const { return 1; }
void VProcDpathAlu_noparam::prepareClone() const { contextp()->prepareClone(); }
void VProcDpathAlu_noparam::atClone() const {
    contextp()->threadPoolpOnClone();
}
