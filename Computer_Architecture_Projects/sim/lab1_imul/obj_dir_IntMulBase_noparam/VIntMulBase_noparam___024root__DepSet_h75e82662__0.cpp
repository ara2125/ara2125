// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIntMulBase_noparam.h for the primary calling header

#include "VIntMulBase_noparam__pch.h"
#include "VIntMulBase_noparam___024root.h"

void VIntMulBase_noparam___024root___ico_sequent__TOP__0(VIntMulBase_noparam___024root* vlSelf);

void VIntMulBase_noparam___024root___eval_ico(VIntMulBase_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulBase_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulBase_noparam___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VIntMulBase_noparam___024root___ico_sequent__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*1:0*/, 32> VIntMulBase_noparam__ConstPool__TABLE_hcd563ae5_0;

VL_INLINE_OPT void VIntMulBase_noparam___024root___ico_sequent__TOP__0(VIntMulBase_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulBase_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulBase_noparam___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->IntMulBase_noparam__DOT__v__DOT__result_mux_sel = 1U;
    vlSelf->IntMulBase_noparam__DOT__v__DOT__datapath__DOT__a_update 
        = ((IData)(vlSelf->IntMulBase_noparam__DOT__v__DOT__a_mux_sel)
            ? ((IData)(vlSelf->IntMulBase_noparam__DOT__v__DOT__a_mux_sel)
                ? (vlSelf->IntMulBase_noparam__DOT__v__DOT__datapath__DOT__a_reg 
                   << 1U) : 0U) : (IData)((vlSelf->istream_msg 
                                           >> 0x20U)));
    vlSelf->IntMulBase_noparam__DOT__v__DOT__datapath__DOT__b_update 
        = ((IData)(vlSelf->IntMulBase_noparam__DOT__v__DOT__b_mux_sel)
            ? ((IData)(vlSelf->IntMulBase_noparam__DOT__v__DOT__b_mux_sel)
                ? (vlSelf->IntMulBase_noparam__DOT__v__DOT__datapath__DOT__b_reg 
                   >> 1U) : 0U) : (IData)(vlSelf->istream_msg));
    __Vtableidx1 = (((IData)(vlSelf->ostream_rdy) << 4U) 
                    | (((0x20U == (IData)(vlSelf->IntMulBase_noparam__DOT__v__DOT__datapath__DOT____Vcellout__counter___count)) 
                        << 3U) | (((IData)(vlSelf->istream_val) 
                                   << 2U) | (IData)(vlSelf->IntMulBase_noparam__DOT__v__DOT__control_unit__DOT__state))));
    vlSelf->IntMulBase_noparam__DOT__v__DOT__control_unit__DOT__state_next 
        = VIntMulBase_noparam__ConstPool__TABLE_hcd563ae5_0
        [__Vtableidx1];
    vlSelf->IntMulBase_noparam__DOT__v__DOT__add_mux_sel = 0U;
    if ((0U == (IData)(vlSelf->IntMulBase_noparam__DOT__v__DOT__control_unit__DOT__state))) {
        vlSelf->IntMulBase_noparam__DOT__v__DOT__result_mux_sel = 1U;
        vlSelf->IntMulBase_noparam__DOT__v__DOT__add_mux_sel = 0U;
    } else if ((1U == (IData)(vlSelf->IntMulBase_noparam__DOT__v__DOT__control_unit__DOT__state))) {
        vlSelf->IntMulBase_noparam__DOT__v__DOT__result_mux_sel = 1U;
        vlSelf->__Vtask_IntMulBase_noparam__DOT__v__DOT__control_unit__DOT__cs__23__cs_add_mux_sel 
            = (1U & vlSelf->IntMulBase_noparam__DOT__v__DOT__datapath__DOT__b_reg);
        vlSelf->IntMulBase_noparam__DOT__v__DOT__add_mux_sel 
            = vlSelf->__Vtask_IntMulBase_noparam__DOT__v__DOT__control_unit__DOT__cs__23__cs_add_mux_sel;
    } else if ((2U == (IData)(vlSelf->IntMulBase_noparam__DOT__v__DOT__control_unit__DOT__state))) {
        vlSelf->IntMulBase_noparam__DOT__v__DOT__result_mux_sel 
            = (1U & (~ (IData)(vlSelf->ostream_rdy)));
        if (vlSelf->ostream_rdy) {
            vlSelf->__Vtask_IntMulBase_noparam__DOT__v__DOT__control_unit__DOT__cs__24__cs_add_mux_sel 
                = (1U & vlSelf->IntMulBase_noparam__DOT__v__DOT__datapath__DOT__b_reg);
            vlSelf->IntMulBase_noparam__DOT__v__DOT__add_mux_sel 
                = vlSelf->__Vtask_IntMulBase_noparam__DOT__v__DOT__control_unit__DOT__cs__24__cs_add_mux_sel;
        } else {
            vlSelf->__Vtask_IntMulBase_noparam__DOT__v__DOT__control_unit__DOT__cs__25__cs_add_mux_sel 
                = (1U & vlSelf->IntMulBase_noparam__DOT__v__DOT__datapath__DOT__b_reg);
            vlSelf->IntMulBase_noparam__DOT__v__DOT__add_mux_sel 
                = vlSelf->__Vtask_IntMulBase_noparam__DOT__v__DOT__control_unit__DOT__cs__25__cs_add_mux_sel;
        }
    }
    vlSelf->IntMulBase_noparam__DOT__v__DOT__datapath__DOT__add_mux_reg 
        = ((IData)(vlSelf->IntMulBase_noparam__DOT__v__DOT__add_mux_sel)
            ? ((IData)(vlSelf->IntMulBase_noparam__DOT__v__DOT__add_mux_sel)
                ? (vlSelf->IntMulBase_noparam__DOT__v__DOT__datapath__DOT__a_reg 
                   + vlSelf->IntMulBase_noparam__DOT__v__DOT__datapath__DOT__result_reg)
                : 0U) : vlSelf->IntMulBase_noparam__DOT__v__DOT__datapath__DOT__result_reg);
}

void VIntMulBase_noparam___024root___eval_triggers__ico(VIntMulBase_noparam___024root* vlSelf);

bool VIntMulBase_noparam___024root___eval_phase__ico(VIntMulBase_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulBase_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulBase_noparam___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VIntMulBase_noparam___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VIntMulBase_noparam___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VIntMulBase_noparam___024root___eval_act(VIntMulBase_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulBase_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulBase_noparam___024root___eval_act\n"); );
}

void VIntMulBase_noparam___024root___nba_sequent__TOP__0(VIntMulBase_noparam___024root* vlSelf);
void VIntMulBase_noparam___024root___nba_sequent__TOP__1(VIntMulBase_noparam___024root* vlSelf);
void VIntMulBase_noparam___024root___nba_comb__TOP__0(VIntMulBase_noparam___024root* vlSelf);

void VIntMulBase_noparam___024root___eval_nba(VIntMulBase_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulBase_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulBase_noparam___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VIntMulBase_noparam___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VIntMulBase_noparam___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((6ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VIntMulBase_noparam___024root___nba_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VIntMulBase_noparam___024root___nba_sequent__TOP__0(VIntMulBase_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulBase_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulBase_noparam___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__cycles = 0U;
    if (vlSelf->IntMulBase_noparam__DOT__v__DOT__result_en) {
        vlSelf->IntMulBase_noparam__DOT__v__DOT__datapath__DOT__result_reg 
            = ((IData)(vlSelf->IntMulBase_noparam__DOT__v__DOT__result_mux_sel)
                ? ((IData)(vlSelf->IntMulBase_noparam__DOT__v__DOT__result_mux_sel)
                    ? vlSelf->IntMulBase_noparam__DOT__v__DOT__datapath__DOT__add_mux_reg
                    : 0U) : 0U);
    }
    if (vlSelf->reset) {
        vlSelf->IntMulBase_noparam__DOT__v__DOT__datapath__DOT__a_reg = 0U;
        vlSelf->IntMulBase_noparam__DOT__v__DOT__datapath__DOT____Vcellout__counter___count = 0U;
        vlSelf->IntMulBase_noparam__DOT__v__DOT__datapath__DOT__b_reg = 0U;
    } else {
        vlSelf->IntMulBase_noparam__DOT__v__DOT__datapath__DOT__a_reg 
            = vlSelf->IntMulBase_noparam__DOT__v__DOT__datapath__DOT__a_update;
        vlSelf->IntMulBase_noparam__DOT__v__DOT__datapath__DOT____Vcellout__counter___count 
            = (0x3fU & (IData)(vlSelf->IntMulBase_noparam__DOT__v__DOT__datapath__DOT__counter___DOT__count_next));
        vlSelf->IntMulBase_noparam__DOT__v__DOT__datapath__DOT__b_reg 
            = vlSelf->IntMulBase_noparam__DOT__v__DOT__datapath__DOT__b_update;
    }
    vlSelf->ostream_msg = vlSelf->IntMulBase_noparam__DOT__v__DOT__datapath__DOT__result_reg;
}

VL_INLINE_OPT void VIntMulBase_noparam___024root___nba_sequent__TOP__1(VIntMulBase_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulBase_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulBase_noparam___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->IntMulBase_noparam__DOT__v__DOT__control_unit__DOT__state 
        = ((IData)(vlSelf->reset) ? 0U : (IData)(vlSelf->IntMulBase_noparam__DOT__v__DOT__control_unit__DOT__state_next));
    vlSelf->IntMulBase_noparam__DOT__v__DOT__result_en = 1U;
    vlSelf->ostream_val = 0U;
    vlSelf->IntMulBase_noparam__DOT__v__DOT__result_mux_sel = 1U;
    vlSelf->istream_rdy = 0U;
    vlSelf->IntMulBase_noparam__DOT__v__DOT__b_mux_sel = 0U;
    vlSelf->IntMulBase_noparam__DOT__v__DOT__a_mux_sel = 0U;
    if ((0U == (IData)(vlSelf->IntMulBase_noparam__DOT__v__DOT__control_unit__DOT__state))) {
        vlSelf->IntMulBase_noparam__DOT__v__DOT__result_en = 1U;
        vlSelf->ostream_val = 0U;
        vlSelf->IntMulBase_noparam__DOT__v__DOT__result_mux_sel = 1U;
        vlSelf->istream_rdy = 1U;
        vlSelf->IntMulBase_noparam__DOT__v__DOT__b_mux_sel = 0U;
        vlSelf->IntMulBase_noparam__DOT__v__DOT__a_mux_sel = 0U;
    } else if ((1U == (IData)(vlSelf->IntMulBase_noparam__DOT__v__DOT__control_unit__DOT__state))) {
        vlSelf->IntMulBase_noparam__DOT__v__DOT__result_en = 1U;
        vlSelf->ostream_val = 0U;
        vlSelf->IntMulBase_noparam__DOT__v__DOT__result_mux_sel = 1U;
        vlSelf->istream_rdy = 0U;
        vlSelf->IntMulBase_noparam__DOT__v__DOT__b_mux_sel = 1U;
        vlSelf->IntMulBase_noparam__DOT__v__DOT__a_mux_sel = 1U;
    } else if ((2U == (IData)(vlSelf->IntMulBase_noparam__DOT__v__DOT__control_unit__DOT__state))) {
        vlSelf->IntMulBase_noparam__DOT__v__DOT__result_en = 1U;
        vlSelf->ostream_val = 1U;
        vlSelf->IntMulBase_noparam__DOT__v__DOT__result_mux_sel 
            = (1U & (~ (IData)(vlSelf->ostream_rdy)));
        vlSelf->istream_rdy = 0U;
        vlSelf->IntMulBase_noparam__DOT__v__DOT__b_mux_sel = 1U;
        vlSelf->IntMulBase_noparam__DOT__v__DOT__a_mux_sel = 1U;
    }
}

VL_INLINE_OPT void VIntMulBase_noparam___024root___nba_comb__TOP__0(VIntMulBase_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulBase_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulBase_noparam___024root___nba_comb__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->ostream_rdy) << 4U) 
                    | (((0x20U == (IData)(vlSelf->IntMulBase_noparam__DOT__v__DOT__datapath__DOT____Vcellout__counter___count)) 
                        << 3U) | (((IData)(vlSelf->istream_val) 
                                   << 2U) | (IData)(vlSelf->IntMulBase_noparam__DOT__v__DOT__control_unit__DOT__state))));
    vlSelf->IntMulBase_noparam__DOT__v__DOT__control_unit__DOT__state_next 
        = VIntMulBase_noparam__ConstPool__TABLE_hcd563ae5_0
        [__Vtableidx1];
    vlSelf->IntMulBase_noparam__DOT__v__DOT__add_mux_sel = 0U;
    if ((0U == (IData)(vlSelf->IntMulBase_noparam__DOT__v__DOT__control_unit__DOT__state))) {
        vlSelf->IntMulBase_noparam__DOT__v__DOT__add_mux_sel = 0U;
    } else if ((1U == (IData)(vlSelf->IntMulBase_noparam__DOT__v__DOT__control_unit__DOT__state))) {
        vlSelf->__Vtask_IntMulBase_noparam__DOT__v__DOT__control_unit__DOT__cs__23__cs_add_mux_sel 
            = (1U & vlSelf->IntMulBase_noparam__DOT__v__DOT__datapath__DOT__b_reg);
        vlSelf->IntMulBase_noparam__DOT__v__DOT__add_mux_sel 
            = vlSelf->__Vtask_IntMulBase_noparam__DOT__v__DOT__control_unit__DOT__cs__23__cs_add_mux_sel;
    } else if ((2U == (IData)(vlSelf->IntMulBase_noparam__DOT__v__DOT__control_unit__DOT__state))) {
        if (vlSelf->ostream_rdy) {
            vlSelf->__Vtask_IntMulBase_noparam__DOT__v__DOT__control_unit__DOT__cs__24__cs_add_mux_sel 
                = (1U & vlSelf->IntMulBase_noparam__DOT__v__DOT__datapath__DOT__b_reg);
            vlSelf->IntMulBase_noparam__DOT__v__DOT__add_mux_sel 
                = vlSelf->__Vtask_IntMulBase_noparam__DOT__v__DOT__control_unit__DOT__cs__24__cs_add_mux_sel;
        } else {
            vlSelf->__Vtask_IntMulBase_noparam__DOT__v__DOT__control_unit__DOT__cs__25__cs_add_mux_sel 
                = (1U & vlSelf->IntMulBase_noparam__DOT__v__DOT__datapath__DOT__b_reg);
            vlSelf->IntMulBase_noparam__DOT__v__DOT__add_mux_sel 
                = vlSelf->__Vtask_IntMulBase_noparam__DOT__v__DOT__control_unit__DOT__cs__25__cs_add_mux_sel;
        }
    }
    vlSelf->IntMulBase_noparam__DOT__v__DOT__datapath__DOT__counter___DOT__count_next 
        = ((IData)(vlSelf->istream_rdy) ? 0U : (0x3fU 
                                                & ((IData)(vlSelf->IntMulBase_noparam__DOT__v__DOT__datapath__DOT____Vcellout__counter___count) 
                                                   + 
                                                   (0x20U 
                                                    > (IData)(vlSelf->IntMulBase_noparam__DOT__v__DOT__datapath__DOT____Vcellout__counter___count)))));
    vlSelf->IntMulBase_noparam__DOT__v__DOT__datapath__DOT__b_update 
        = ((IData)(vlSelf->IntMulBase_noparam__DOT__v__DOT__b_mux_sel)
            ? ((IData)(vlSelf->IntMulBase_noparam__DOT__v__DOT__b_mux_sel)
                ? (vlSelf->IntMulBase_noparam__DOT__v__DOT__datapath__DOT__b_reg 
                   >> 1U) : 0U) : (IData)(vlSelf->istream_msg));
    vlSelf->IntMulBase_noparam__DOT__v__DOT__datapath__DOT__a_update 
        = ((IData)(vlSelf->IntMulBase_noparam__DOT__v__DOT__a_mux_sel)
            ? ((IData)(vlSelf->IntMulBase_noparam__DOT__v__DOT__a_mux_sel)
                ? (vlSelf->IntMulBase_noparam__DOT__v__DOT__datapath__DOT__a_reg 
                   << 1U) : 0U) : (IData)((vlSelf->istream_msg 
                                           >> 0x20U)));
    vlSelf->IntMulBase_noparam__DOT__v__DOT__datapath__DOT__add_mux_reg 
        = ((IData)(vlSelf->IntMulBase_noparam__DOT__v__DOT__add_mux_sel)
            ? ((IData)(vlSelf->IntMulBase_noparam__DOT__v__DOT__add_mux_sel)
                ? (vlSelf->IntMulBase_noparam__DOT__v__DOT__datapath__DOT__a_reg 
                   + vlSelf->IntMulBase_noparam__DOT__v__DOT__datapath__DOT__result_reg)
                : 0U) : vlSelf->IntMulBase_noparam__DOT__v__DOT__datapath__DOT__result_reg);
}

void VIntMulBase_noparam___024root___eval_triggers__act(VIntMulBase_noparam___024root* vlSelf);

bool VIntMulBase_noparam___024root___eval_phase__act(VIntMulBase_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulBase_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulBase_noparam___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VIntMulBase_noparam___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VIntMulBase_noparam___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VIntMulBase_noparam___024root___eval_phase__nba(VIntMulBase_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulBase_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulBase_noparam___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VIntMulBase_noparam___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VIntMulBase_noparam___024root___dump_triggers__ico(VIntMulBase_noparam___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VIntMulBase_noparam___024root___dump_triggers__nba(VIntMulBase_noparam___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VIntMulBase_noparam___024root___dump_triggers__act(VIntMulBase_noparam___024root* vlSelf);
#endif  // VL_DEBUG

void VIntMulBase_noparam___024root___eval(VIntMulBase_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulBase_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulBase_noparam___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            VIntMulBase_noparam___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("lab1_imul/IntMulBase.v", 350, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VIntMulBase_noparam___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VIntMulBase_noparam___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("lab1_imul/IntMulBase.v", 350, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VIntMulBase_noparam___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("lab1_imul/IntMulBase.v", 350, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VIntMulBase_noparam___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VIntMulBase_noparam___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VIntMulBase_noparam___024root___eval_debug_assertions(VIntMulBase_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulBase_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulBase_noparam___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->istream_val & 0xfeU))) {
        Verilated::overWidthError("istream_val");}
    if (VL_UNLIKELY((vlSelf->ostream_rdy & 0xfeU))) {
        Verilated::overWidthError("ostream_rdy");}
}
#endif  // VL_DEBUG
