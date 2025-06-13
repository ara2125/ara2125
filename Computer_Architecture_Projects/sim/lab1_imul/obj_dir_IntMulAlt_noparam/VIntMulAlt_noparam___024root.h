// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VIntMulAlt_noparam.h for the primary calling header

#ifndef VERILATED_VINTMULALT_NOPARAM___024ROOT_H_
#define VERILATED_VINTMULALT_NOPARAM___024ROOT_H_  // guard

#include "verilated.h"


class VIntMulAlt_noparam__Syms;

class alignas(VL_CACHE_LINE_BYTES) VIntMulAlt_noparam___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(istream_rdy,0,0);
    VL_IN8(istream_val,0,0);
    VL_IN8(ostream_rdy,0,0);
    VL_OUT8(ostream_val,0,0);
    CData/*0:0*/ IntMulAlt_noparam__DOT__v__DOT__result_en;
    CData/*0:0*/ IntMulAlt_noparam__DOT__v__DOT__a_mux_sel;
    CData/*0:0*/ IntMulAlt_noparam__DOT__v__DOT__b_mux_sel;
    CData/*0:0*/ IntMulAlt_noparam__DOT__v__DOT__result_mux_sel;
    CData/*4:0*/ IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__bit_shift__DOT____Vcellout__max_extractor__out;
    CData/*1:0*/ IntMulAlt_noparam__DOT__v__DOT__control_unit__DOT__state;
    CData/*1:0*/ IntMulAlt_noparam__DOT__v__DOT__control_unit__DOT__state_next;
    CData/*0:0*/ __Vdpi_export_trigger;
    CData/*0:0*/ __Vtask_IntMulAlt_noparam__DOT__v__DOT__control_unit__DOT__cs__23__cs_add_mux_sel;
    CData/*0:0*/ __Vtask_IntMulAlt_noparam__DOT__v__DOT__control_unit__DOT__cs__24__cs_add_mux_sel;
    CData/*0:0*/ __Vtask_IntMulAlt_noparam__DOT__v__DOT__control_unit__DOT__cs__25__cs_add_mux_sel;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__reset__0;
    CData/*0:0*/ __VactContinue;
    VL_OUT(ostream_msg,31,0);
    VlWide<128>/*4095:0*/ IntMulAlt_noparam__DOT__v__DOT__str;
    IData/*31:0*/ IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__a_reg;
    IData/*31:0*/ IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__a_shift;
    IData/*31:0*/ IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__b_reg;
    IData/*31:0*/ IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__b_shift;
    IData/*31:0*/ IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__result_reg;
    IData/*31:0*/ IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__add_mux_reg;
    IData/*31:0*/ IntMulAlt_noparam__DOT__v__DOT__vc_trace__DOT__len0;
    IData/*31:0*/ IntMulAlt_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
    IData/*31:0*/ IntMulAlt_noparam__DOT__v__DOT__vc_trace__DOT__idx1;
    IData/*31:0*/ __VactIterCount;
    VL_IN64(istream_msg,63,0);
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VicoTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    VIntMulAlt_noparam__Syms* const vlSymsp;

    // CONSTRUCTORS
    VIntMulAlt_noparam___024root(VIntMulAlt_noparam__Syms* symsp, const char* v__name);
    ~VIntMulAlt_noparam___024root();
    VL_UNCOPYABLE(VIntMulAlt_noparam___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
