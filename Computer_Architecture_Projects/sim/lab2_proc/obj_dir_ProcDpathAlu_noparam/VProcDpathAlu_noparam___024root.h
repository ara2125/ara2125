// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VProcDpathAlu_noparam.h for the primary calling header

#ifndef VERILATED_VPROCDPATHALU_NOPARAM___024ROOT_H_
#define VERILATED_VPROCDPATHALU_NOPARAM___024ROOT_H_  // guard

#include "verilated.h"


class VProcDpathAlu_noparam__Syms;

class alignas(VL_CACHE_LINE_BYTES) VProcDpathAlu_noparam___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(reset,0,0);
    VL_IN8(clk,0,0);
    VL_IN8(fn,3,0);
    VL_OUT8(ops_eq,0,0);
    VL_OUT8(ops_lt,0,0);
    VL_OUT8(ops_ltu,0,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    VL_IN(in0,31,0);
    VL_IN(in1,31,0);
    VL_OUT(out,31,0);
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    VProcDpathAlu_noparam__Syms* const vlSymsp;

    // CONSTRUCTORS
    VProcDpathAlu_noparam___024root(VProcDpathAlu_noparam__Syms* symsp, const char* v__name);
    ~VProcDpathAlu_noparam___024root();
    VL_UNCOPYABLE(VProcDpathAlu_noparam___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
