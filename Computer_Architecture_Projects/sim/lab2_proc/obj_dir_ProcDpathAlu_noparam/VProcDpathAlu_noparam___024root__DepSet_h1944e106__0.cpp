// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VProcDpathAlu_noparam.h for the primary calling header

#include "VProcDpathAlu_noparam__pch.h"
#include "VProcDpathAlu_noparam___024root.h"

void VProcDpathAlu_noparam___024root___ico_sequent__TOP__0(VProcDpathAlu_noparam___024root* vlSelf);

void VProcDpathAlu_noparam___024root___eval_ico(VProcDpathAlu_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VProcDpathAlu_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcDpathAlu_noparam___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VProcDpathAlu_noparam___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VProcDpathAlu_noparam___024root___ico_sequent__TOP__0(VProcDpathAlu_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VProcDpathAlu_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcDpathAlu_noparam___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->ops_eq = (vlSelf->in0 == vlSelf->in1);
    vlSelf->ops_lt = VL_LTS_III(32, vlSelf->in0, vlSelf->in1);
    vlSelf->ops_ltu = (vlSelf->in0 < vlSelf->in1);
    vlSelf->out = ((8U & (IData)(vlSelf->fn)) ? ((4U 
                                                  & (IData)(vlSelf->fn))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelf->fn))
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->fn))
                                                    ? 0U
                                                    : vlSelf->in1))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->fn))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->fn))
                                                    ? vlSelf->in0
                                                    : 0U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->fn))
                                                    ? 
                                                   (vlSelf->in0 
                                                    << 
                                                    (0x1fU 
                                                     & vlSelf->in1))
                                                    : 
                                                   (vlSelf->in0 
                                                    >> 
                                                    (0x1fU 
                                                     & vlSelf->in1)))))
                    : ((4U & (IData)(vlSelf->fn)) ? 
                       ((2U & (IData)(vlSelf->fn)) ? 
                        ((1U & (IData)(vlSelf->fn))
                          ? (vlSelf->in0 >> (0x1fU 
                                             & vlSelf->in1))
                          : (vlSelf->in0 < vlSelf->in1))
                         : ((1U & (IData)(vlSelf->fn))
                             ? VL_LTS_III(32, vlSelf->in0, vlSelf->in1)
                             : (vlSelf->in0 ^ vlSelf->in1)))
                        : ((2U & (IData)(vlSelf->fn))
                            ? ((1U & (IData)(vlSelf->fn))
                                ? (vlSelf->in0 | vlSelf->in1)
                                : (vlSelf->in0 & vlSelf->in1))
                            : ((1U & (IData)(vlSelf->fn))
                                ? (vlSelf->in0 - vlSelf->in1)
                                : (vlSelf->in0 + vlSelf->in1)))));
}

void VProcDpathAlu_noparam___024root___eval_triggers__ico(VProcDpathAlu_noparam___024root* vlSelf);

bool VProcDpathAlu_noparam___024root___eval_phase__ico(VProcDpathAlu_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VProcDpathAlu_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcDpathAlu_noparam___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VProcDpathAlu_noparam___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VProcDpathAlu_noparam___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VProcDpathAlu_noparam___024root___eval_act(VProcDpathAlu_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VProcDpathAlu_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcDpathAlu_noparam___024root___eval_act\n"); );
}

void VProcDpathAlu_noparam___024root___eval_nba(VProcDpathAlu_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VProcDpathAlu_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcDpathAlu_noparam___024root___eval_nba\n"); );
}

void VProcDpathAlu_noparam___024root___eval_triggers__act(VProcDpathAlu_noparam___024root* vlSelf);

bool VProcDpathAlu_noparam___024root___eval_phase__act(VProcDpathAlu_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VProcDpathAlu_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcDpathAlu_noparam___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VProcDpathAlu_noparam___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VProcDpathAlu_noparam___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VProcDpathAlu_noparam___024root___eval_phase__nba(VProcDpathAlu_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VProcDpathAlu_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcDpathAlu_noparam___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VProcDpathAlu_noparam___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VProcDpathAlu_noparam___024root___dump_triggers__ico(VProcDpathAlu_noparam___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VProcDpathAlu_noparam___024root___dump_triggers__nba(VProcDpathAlu_noparam___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VProcDpathAlu_noparam___024root___dump_triggers__act(VProcDpathAlu_noparam___024root* vlSelf);
#endif  // VL_DEBUG

void VProcDpathAlu_noparam___024root___eval(VProcDpathAlu_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VProcDpathAlu_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcDpathAlu_noparam___024root___eval\n"); );
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
            VProcDpathAlu_noparam___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("lab2_proc/ProcDpathAlu.v", 67, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VProcDpathAlu_noparam___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VProcDpathAlu_noparam___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("lab2_proc/ProcDpathAlu.v", 67, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VProcDpathAlu_noparam___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("lab2_proc/ProcDpathAlu.v", 67, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VProcDpathAlu_noparam___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VProcDpathAlu_noparam___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VProcDpathAlu_noparam___024root___eval_debug_assertions(VProcDpathAlu_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VProcDpathAlu_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcDpathAlu_noparam___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->fn & 0xf0U))) {
        Verilated::overWidthError("fn");}
}
#endif  // VL_DEBUG
