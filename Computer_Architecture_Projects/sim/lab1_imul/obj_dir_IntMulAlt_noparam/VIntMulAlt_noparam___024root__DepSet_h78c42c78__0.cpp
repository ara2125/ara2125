// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIntMulAlt_noparam.h for the primary calling header

#include "VIntMulAlt_noparam__pch.h"
#include "VIntMulAlt_noparam___024root.h"

void VIntMulAlt_noparam___024root___ico_sequent__TOP__0(VIntMulAlt_noparam___024root* vlSelf);

void VIntMulAlt_noparam___024root___eval_ico(VIntMulAlt_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulAlt_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulAlt_noparam___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VIntMulAlt_noparam___024root___ico_sequent__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*1:0*/, 32> VIntMulAlt_noparam__ConstPool__TABLE_hcd563ae5_0;

VL_INLINE_OPT void VIntMulAlt_noparam___024root___ico_sequent__TOP__0(VIntMulAlt_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulAlt_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulAlt_noparam___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ IntMulAlt_noparam__DOT__v__DOT__add_mux_sel;
    IntMulAlt_noparam__DOT__v__DOT__add_mux_sel = 0;
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->IntMulAlt_noparam__DOT__v__DOT__result_mux_sel = 1U;
    __Vtableidx1 = (((IData)(vlSelf->ostream_rdy) << 4U) 
                    | ((8U & (((IData)(1U) + (IData)(vlSelf->IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__bit_shift__DOT____Vcellout__max_extractor__out)) 
                              >> 2U)) | (((IData)(vlSelf->istream_val) 
                                          << 2U) | (IData)(vlSelf->IntMulAlt_noparam__DOT__v__DOT__control_unit__DOT__state))));
    vlSelf->IntMulAlt_noparam__DOT__v__DOT__control_unit__DOT__state_next 
        = VIntMulAlt_noparam__ConstPool__TABLE_hcd563ae5_0
        [__Vtableidx1];
    IntMulAlt_noparam__DOT__v__DOT__add_mux_sel = 0U;
    if ((0U == (IData)(vlSelf->IntMulAlt_noparam__DOT__v__DOT__control_unit__DOT__state))) {
        vlSelf->IntMulAlt_noparam__DOT__v__DOT__result_mux_sel = 1U;
        IntMulAlt_noparam__DOT__v__DOT__add_mux_sel = 0U;
    } else if ((1U == (IData)(vlSelf->IntMulAlt_noparam__DOT__v__DOT__control_unit__DOT__state))) {
        vlSelf->IntMulAlt_noparam__DOT__v__DOT__result_mux_sel = 1U;
        vlSelf->__Vtask_IntMulAlt_noparam__DOT__v__DOT__control_unit__DOT__cs__23__cs_add_mux_sel 
            = (1U & vlSelf->IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__b_reg);
        IntMulAlt_noparam__DOT__v__DOT__add_mux_sel 
            = vlSelf->__Vtask_IntMulAlt_noparam__DOT__v__DOT__control_unit__DOT__cs__23__cs_add_mux_sel;
    } else if ((2U == (IData)(vlSelf->IntMulAlt_noparam__DOT__v__DOT__control_unit__DOT__state))) {
        vlSelf->IntMulAlt_noparam__DOT__v__DOT__result_mux_sel 
            = (1U & (~ (IData)(vlSelf->ostream_rdy)));
        if (vlSelf->ostream_rdy) {
            vlSelf->__Vtask_IntMulAlt_noparam__DOT__v__DOT__control_unit__DOT__cs__24__cs_add_mux_sel 
                = (1U & vlSelf->IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__b_reg);
            IntMulAlt_noparam__DOT__v__DOT__add_mux_sel 
                = vlSelf->__Vtask_IntMulAlt_noparam__DOT__v__DOT__control_unit__DOT__cs__24__cs_add_mux_sel;
        } else {
            vlSelf->__Vtask_IntMulAlt_noparam__DOT__v__DOT__control_unit__DOT__cs__25__cs_add_mux_sel 
                = (1U & vlSelf->IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__b_reg);
            IntMulAlt_noparam__DOT__v__DOT__add_mux_sel 
                = vlSelf->__Vtask_IntMulAlt_noparam__DOT__v__DOT__control_unit__DOT__cs__25__cs_add_mux_sel;
        }
    }
    vlSelf->IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__add_mux_reg 
        = ((IData)(IntMulAlt_noparam__DOT__v__DOT__add_mux_sel)
            ? ((IData)(IntMulAlt_noparam__DOT__v__DOT__add_mux_sel)
                ? (vlSelf->IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__a_reg 
                   + vlSelf->IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__result_reg)
                : 0U) : vlSelf->IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__result_reg);
}

void VIntMulAlt_noparam___024root___eval_triggers__ico(VIntMulAlt_noparam___024root* vlSelf);

bool VIntMulAlt_noparam___024root___eval_phase__ico(VIntMulAlt_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulAlt_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulAlt_noparam___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VIntMulAlt_noparam___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VIntMulAlt_noparam___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VIntMulAlt_noparam___024root___eval_act(VIntMulAlt_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulAlt_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulAlt_noparam___024root___eval_act\n"); );
}

void VIntMulAlt_noparam___024root___nba_sequent__TOP__0(VIntMulAlt_noparam___024root* vlSelf);
void VIntMulAlt_noparam___024root___nba_sequent__TOP__1(VIntMulAlt_noparam___024root* vlSelf);
void VIntMulAlt_noparam___024root___nba_comb__TOP__0(VIntMulAlt_noparam___024root* vlSelf);

void VIntMulAlt_noparam___024root___eval_nba(VIntMulAlt_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulAlt_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulAlt_noparam___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VIntMulAlt_noparam___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VIntMulAlt_noparam___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((6ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VIntMulAlt_noparam___024root___nba_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VIntMulAlt_noparam___024root___nba_sequent__TOP__0(VIntMulAlt_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulAlt_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulAlt_noparam___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding;
    IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding = 0;
    // Body
    if (vlSelf->IntMulAlt_noparam__DOT__v__DOT__result_en) {
        vlSelf->IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__result_reg 
            = ((IData)(vlSelf->IntMulAlt_noparam__DOT__v__DOT__result_mux_sel)
                ? ((IData)(vlSelf->IntMulAlt_noparam__DOT__v__DOT__result_mux_sel)
                    ? vlSelf->IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__add_mux_reg
                    : 0U) : 0U);
    }
    if (vlSelf->reset) {
        vlSelf->IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__a_reg = 0U;
        vlSelf->IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__b_reg = 0U;
    } else {
        vlSelf->IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__a_reg 
            = ((IData)(vlSelf->IntMulAlt_noparam__DOT__v__DOT__a_mux_sel)
                ? ((IData)(vlSelf->IntMulAlt_noparam__DOT__v__DOT__a_mux_sel)
                    ? vlSelf->IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__a_shift
                    : 0U) : (IData)((vlSelf->istream_msg 
                                     >> 0x20U)));
        vlSelf->IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__b_reg 
            = ((IData)(vlSelf->IntMulAlt_noparam__DOT__v__DOT__b_mux_sel)
                ? ((IData)(vlSelf->IntMulAlt_noparam__DOT__v__DOT__b_mux_sel)
                    ? vlSelf->IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__b_shift
                    : 0U) : (IData)(vlSelf->istream_msg));
    }
    vlSelf->ostream_msg = vlSelf->IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__result_reg;
    IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding 
        = (((0U == vlSelf->IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__b_reg) 
            << 0x1fU) | (((0U == (0x7fffffffU & vlSelf->IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__b_reg)) 
                          << 0x1eU) | (((0U == (0x3fffffffU 
                                                & vlSelf->IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__b_reg)) 
                                        << 0x1dU) | 
                                       (((0U == (0x1fffffffU 
                                                 & vlSelf->IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__b_reg)) 
                                         << 0x1cU) 
                                        | (((0U == 
                                             (0xfffffffU 
                                              & vlSelf->IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__b_reg)) 
                                            << 0x1bU) 
                                           | (((0U 
                                                == 
                                                (0x7ffffffU 
                                                 & vlSelf->IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__b_reg)) 
                                               << 0x1aU) 
                                              | (((0U 
                                                   == 
                                                   (0x3ffffffU 
                                                    & vlSelf->IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__b_reg)) 
                                                  << 0x19U) 
                                                 | (((0U 
                                                      == 
                                                      (0x1ffffffU 
                                                       & vlSelf->IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__b_reg)) 
                                                     << 0x18U) 
                                                    | (((0U 
                                                         == 
                                                         (0xffffffU 
                                                          & vlSelf->IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__b_reg)) 
                                                        << 0x17U) 
                                                       | (((0U 
                                                            == 
                                                            (0x7fffffU 
                                                             & vlSelf->IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__b_reg)) 
                                                           << 0x16U) 
                                                          | (((0U 
                                                               == 
                                                               (0x3fffffU 
                                                                & vlSelf->IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__b_reg)) 
                                                              << 0x15U) 
                                                             | (((0U 
                                                                  == 
                                                                  (0x1fffffU 
                                                                   & vlSelf->IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__b_reg)) 
                                                                 << 0x14U) 
                                                                | (((0U 
                                                                     == 
                                                                     (0xfffffU 
                                                                      & vlSelf->IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__b_reg)) 
                                                                    << 0x13U) 
                                                                   | (((0U 
                                                                        == 
                                                                        (0x7ffffU 
                                                                         & vlSelf->IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__b_reg)) 
                                                                       << 0x12U) 
                                                                      | (((0U 
                                                                           == 
                                                                           (0x3ffffU 
                                                                            & vlSelf->IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__b_reg)) 
                                                                          << 0x11U) 
                                                                         | (((0U 
                                                                              == 
                                                                              (0x1ffffU 
                                                                               & vlSelf->IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__b_reg)) 
                                                                             << 0x10U) 
                                                                            | (((0U 
                                                                                == 
                                                                                (0xffffU 
                                                                                & vlSelf->IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__b_reg)) 
                                                                                << 0xfU) 
                                                                               | (((0U 
                                                                                == 
                                                                                (0x7fffU 
                                                                                & vlSelf->IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__b_reg)) 
                                                                                << 0xeU) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0x3fffU 
                                                                                & vlSelf->IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__b_reg)) 
                                                                                << 0xdU) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0x1fffU 
                                                                                & vlSelf->IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__b_reg)) 
                                                                                << 0xcU) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0xfffU 
                                                                                & vlSelf->IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__b_reg)) 
                                                                                << 0xbU) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0x7ffU 
                                                                                & vlSelf->IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__b_reg)) 
                                                                                << 0xaU) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & vlSelf->IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__b_reg)) 
                                                                                << 9U) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0x1ffU 
                                                                                & vlSelf->IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__b_reg)) 
                                                                                << 8U) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0xffU 
                                                                                & vlSelf->IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__b_reg)) 
                                                                                << 7U) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__b_reg)) 
                                                                                << 6U) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & vlSelf->IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__b_reg)) 
                                                                                << 5U) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & vlSelf->IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__b_reg)) 
                                                                                << 4U) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0xfU 
                                                                                & vlSelf->IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__b_reg)) 
                                                                                << 3U) 
                                                                                | (((0U 
                                                                                == 
                                                                                (7U 
                                                                                & vlSelf->IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__b_reg)) 
                                                                                << 2U) 
                                                                                | (((0U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSelf->IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__b_reg)) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (~ vlSelf->IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__b_reg)))))))))))))))))))))))))))))))));
    vlSelf->IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__bit_shift__DOT____Vcellout__max_extractor__out 
        = (((((((((0x80000000U == (0x80000000U & IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding)) 
                  | (0x40000000U == (0xc0000000U & IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))) 
                 | (0x20000000U == (0xe0000000U & IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))) 
                | (0x10000000U == (0xf0000000U & IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))) 
               | (0x8000000U == (0xf8000000U & IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))) 
              | (0x4000000U == (0xfc000000U & IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))) 
             | (0x2000000U == (0xfe000000U & IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))) 
            | (0x1000000U == (0xff000000U & IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding)))
            ? ((0x80000000U == (0x80000000U & IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                ? 0x1fU : ((0x40000000U == (0xc0000000U 
                                            & IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                            ? 0x1eU : ((0x20000000U 
                                        == (0xe0000000U 
                                            & IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                                        ? 0x1dU : (
                                                   (0x10000000U 
                                                    == 
                                                    (0xf0000000U 
                                                     & IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                                                    ? 0x1cU
                                                    : 
                                                   ((0x8000000U 
                                                     == 
                                                     (0xf8000000U 
                                                      & IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                                                     ? 0x1bU
                                                     : 
                                                    ((0x4000000U 
                                                      == 
                                                      (0xfc000000U 
                                                       & IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                                                      ? 0x1aU
                                                      : 
                                                     ((0x2000000U 
                                                       == 
                                                       (0xfe000000U 
                                                        & IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                                                       ? 0x19U
                                                       : 0x18U)))))))
            : (((((((((0x800000U == (0xff800000U & IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding)) 
                      | (0x400000U == (0xffc00000U 
                                       & IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))) 
                     | (0x200000U == (0xffe00000U & IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))) 
                    | (0x100000U == (0xfff00000U & IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))) 
                   | (0x80000U == (0xfff80000U & IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))) 
                  | (0x40000U == (0xfffc0000U & IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))) 
                 | (0x20000U == (0xfffe0000U & IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))) 
                | (0x10000U == (0xffff0000U & IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding)))
                ? ((0x800000U == (0xff800000U & IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                    ? 0x17U : ((0x400000U == (0xffc00000U 
                                              & IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                                ? 0x16U : ((0x200000U 
                                            == (0xffe00000U 
                                                & IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                                            ? 0x15U
                                            : ((0x100000U 
                                                == 
                                                (0xfff00000U 
                                                 & IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                                                ? 0x14U
                                                : (
                                                   (0x80000U 
                                                    == 
                                                    (0xfff80000U 
                                                     & IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                                                    ? 0x13U
                                                    : 
                                                   ((0x40000U 
                                                     == 
                                                     (0xfffc0000U 
                                                      & IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                                                     ? 0x12U
                                                     : 
                                                    ((0x20000U 
                                                      == 
                                                      (0xfffe0000U 
                                                       & IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                                                      ? 0x11U
                                                      : 0x10U)))))))
                : (((((((((0x8000U == (0xffff8000U 
                                       & IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding)) 
                          | (0x4000U == (0xffffc000U 
                                         & IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))) 
                         | (0x2000U == (0xffffe000U 
                                        & IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))) 
                        | (0x1000U == (0xfffff000U 
                                       & IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))) 
                       | (0x800U == (0xfffff800U & IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))) 
                      | (0x400U == (0xfffffc00U & IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))) 
                     | (0x200U == (0xfffffe00U & IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))) 
                    | (0x100U == (0xffffff00U & IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding)))
                    ? ((0x8000U == (0xffff8000U & IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                        ? 0xfU : ((0x4000U == (0xffffc000U 
                                               & IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                                   ? 0xeU : ((0x2000U 
                                              == (0xffffe000U 
                                                  & IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                                              ? 0xdU
                                              : ((0x1000U 
                                                  == 
                                                  (0xfffff000U 
                                                   & IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                                                  ? 0xcU
                                                  : 
                                                 ((0x800U 
                                                   == 
                                                   (0xfffff800U 
                                                    & IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                                                   ? 0xbU
                                                   : 
                                                  ((0x400U 
                                                    == 
                                                    (0xfffffc00U 
                                                     & IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                                                    ? 0xaU
                                                    : 
                                                   ((0x200U 
                                                     == 
                                                     (0xfffffe00U 
                                                      & IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                                                     ? 9U
                                                     : 8U)))))))
                    : (((((((((0x80U == (0xffffff80U 
                                         & IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding)) 
                              | (0x40U == (0xffffffc0U 
                                           & IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))) 
                             | (0x20U == (0xffffffe0U 
                                          & IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))) 
                            | (0x10U == (0xfffffff0U 
                                         & IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))) 
                           | (8U == (0xfffffff8U & IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))) 
                          | (4U == (0xfffffffcU & IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))) 
                         | (2U == (0xfffffffeU & IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))) 
                        | (1U == IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                        ? ((0x80U == (0xffffff80U & IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                            ? 7U : ((0x40U == (0xffffffc0U 
                                               & IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                                     ? 6U : ((0x20U 
                                              == (0xffffffe0U 
                                                  & IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                                              ? 5U : 
                                             ((0x10U 
                                               == (0xfffffff0U 
                                                   & IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                                               ? 4U
                                               : ((8U 
                                                   == 
                                                   (0xfffffff8U 
                                                    & IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                                                   ? 3U
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0xfffffffcU 
                                                     & IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                                                    ? 2U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0xfffffffeU 
                                                      & IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                                                     ? 1U
                                                     : 0U)))))))
                        : 0U))));
    vlSelf->IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__a_shift 
        = VL_SHIFTL_III(32,32,6, vlSelf->IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__a_reg, 
                        (0x3fU & ((IData)(1U) + (IData)(vlSelf->IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__bit_shift__DOT____Vcellout__max_extractor__out))));
    vlSelf->IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__b_shift 
        = VL_SHIFTR_III(32,32,6, vlSelf->IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__b_reg, 
                        (0x3fU & ((IData)(1U) + (IData)(vlSelf->IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__bit_shift__DOT____Vcellout__max_extractor__out))));
}

VL_INLINE_OPT void VIntMulAlt_noparam___024root___nba_sequent__TOP__1(VIntMulAlt_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulAlt_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulAlt_noparam___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->IntMulAlt_noparam__DOT__v__DOT__control_unit__DOT__state 
        = ((IData)(vlSelf->reset) ? 0U : (IData)(vlSelf->IntMulAlt_noparam__DOT__v__DOT__control_unit__DOT__state_next));
    vlSelf->istream_rdy = 0U;
    vlSelf->IntMulAlt_noparam__DOT__v__DOT__b_mux_sel = 0U;
    vlSelf->IntMulAlt_noparam__DOT__v__DOT__a_mux_sel = 0U;
    vlSelf->IntMulAlt_noparam__DOT__v__DOT__result_en = 1U;
    vlSelf->ostream_val = 0U;
    vlSelf->IntMulAlt_noparam__DOT__v__DOT__result_mux_sel = 1U;
    if ((0U == (IData)(vlSelf->IntMulAlt_noparam__DOT__v__DOT__control_unit__DOT__state))) {
        vlSelf->istream_rdy = 1U;
        vlSelf->IntMulAlt_noparam__DOT__v__DOT__b_mux_sel = 0U;
        vlSelf->IntMulAlt_noparam__DOT__v__DOT__a_mux_sel = 0U;
        vlSelf->IntMulAlt_noparam__DOT__v__DOT__result_en = 1U;
        vlSelf->ostream_val = 0U;
        vlSelf->IntMulAlt_noparam__DOT__v__DOT__result_mux_sel = 1U;
    } else if ((1U == (IData)(vlSelf->IntMulAlt_noparam__DOT__v__DOT__control_unit__DOT__state))) {
        vlSelf->istream_rdy = 0U;
        vlSelf->IntMulAlt_noparam__DOT__v__DOT__b_mux_sel = 1U;
        vlSelf->IntMulAlt_noparam__DOT__v__DOT__a_mux_sel = 1U;
        vlSelf->IntMulAlt_noparam__DOT__v__DOT__result_en = 1U;
        vlSelf->ostream_val = 0U;
        vlSelf->IntMulAlt_noparam__DOT__v__DOT__result_mux_sel = 1U;
    } else if ((2U == (IData)(vlSelf->IntMulAlt_noparam__DOT__v__DOT__control_unit__DOT__state))) {
        vlSelf->istream_rdy = 0U;
        vlSelf->IntMulAlt_noparam__DOT__v__DOT__b_mux_sel = 1U;
        vlSelf->IntMulAlt_noparam__DOT__v__DOT__a_mux_sel = 1U;
        vlSelf->IntMulAlt_noparam__DOT__v__DOT__result_en = 1U;
        vlSelf->ostream_val = 1U;
        vlSelf->IntMulAlt_noparam__DOT__v__DOT__result_mux_sel 
            = (1U & (~ (IData)(vlSelf->ostream_rdy)));
    }
}

VL_INLINE_OPT void VIntMulAlt_noparam___024root___nba_comb__TOP__0(VIntMulAlt_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulAlt_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulAlt_noparam___024root___nba_comb__TOP__0\n"); );
    // Init
    CData/*0:0*/ IntMulAlt_noparam__DOT__v__DOT__add_mux_sel;
    IntMulAlt_noparam__DOT__v__DOT__add_mux_sel = 0;
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    IntMulAlt_noparam__DOT__v__DOT__add_mux_sel = 0U;
    if ((0U == (IData)(vlSelf->IntMulAlt_noparam__DOT__v__DOT__control_unit__DOT__state))) {
        IntMulAlt_noparam__DOT__v__DOT__add_mux_sel = 0U;
    } else if ((1U == (IData)(vlSelf->IntMulAlt_noparam__DOT__v__DOT__control_unit__DOT__state))) {
        vlSelf->__Vtask_IntMulAlt_noparam__DOT__v__DOT__control_unit__DOT__cs__23__cs_add_mux_sel 
            = (1U & vlSelf->IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__b_reg);
        IntMulAlt_noparam__DOT__v__DOT__add_mux_sel 
            = vlSelf->__Vtask_IntMulAlt_noparam__DOT__v__DOT__control_unit__DOT__cs__23__cs_add_mux_sel;
    } else if ((2U == (IData)(vlSelf->IntMulAlt_noparam__DOT__v__DOT__control_unit__DOT__state))) {
        if (vlSelf->ostream_rdy) {
            vlSelf->__Vtask_IntMulAlt_noparam__DOT__v__DOT__control_unit__DOT__cs__24__cs_add_mux_sel 
                = (1U & vlSelf->IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__b_reg);
            IntMulAlt_noparam__DOT__v__DOT__add_mux_sel 
                = vlSelf->__Vtask_IntMulAlt_noparam__DOT__v__DOT__control_unit__DOT__cs__24__cs_add_mux_sel;
        } else {
            vlSelf->__Vtask_IntMulAlt_noparam__DOT__v__DOT__control_unit__DOT__cs__25__cs_add_mux_sel 
                = (1U & vlSelf->IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__b_reg);
            IntMulAlt_noparam__DOT__v__DOT__add_mux_sel 
                = vlSelf->__Vtask_IntMulAlt_noparam__DOT__v__DOT__control_unit__DOT__cs__25__cs_add_mux_sel;
        }
    }
    __Vtableidx1 = (((IData)(vlSelf->ostream_rdy) << 4U) 
                    | ((8U & (((IData)(1U) + (IData)(vlSelf->IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__bit_shift__DOT____Vcellout__max_extractor__out)) 
                              >> 2U)) | (((IData)(vlSelf->istream_val) 
                                          << 2U) | (IData)(vlSelf->IntMulAlt_noparam__DOT__v__DOT__control_unit__DOT__state))));
    vlSelf->IntMulAlt_noparam__DOT__v__DOT__control_unit__DOT__state_next 
        = VIntMulAlt_noparam__ConstPool__TABLE_hcd563ae5_0
        [__Vtableidx1];
    vlSelf->IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__add_mux_reg 
        = ((IData)(IntMulAlt_noparam__DOT__v__DOT__add_mux_sel)
            ? ((IData)(IntMulAlt_noparam__DOT__v__DOT__add_mux_sel)
                ? (vlSelf->IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__a_reg 
                   + vlSelf->IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__result_reg)
                : 0U) : vlSelf->IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__result_reg);
}

void VIntMulAlt_noparam___024root___eval_triggers__act(VIntMulAlt_noparam___024root* vlSelf);

bool VIntMulAlt_noparam___024root___eval_phase__act(VIntMulAlt_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulAlt_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulAlt_noparam___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VIntMulAlt_noparam___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VIntMulAlt_noparam___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VIntMulAlt_noparam___024root___eval_phase__nba(VIntMulAlt_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulAlt_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulAlt_noparam___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VIntMulAlt_noparam___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VIntMulAlt_noparam___024root___dump_triggers__ico(VIntMulAlt_noparam___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VIntMulAlt_noparam___024root___dump_triggers__nba(VIntMulAlt_noparam___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VIntMulAlt_noparam___024root___dump_triggers__act(VIntMulAlt_noparam___024root* vlSelf);
#endif  // VL_DEBUG

void VIntMulAlt_noparam___024root___eval(VIntMulAlt_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulAlt_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulAlt_noparam___024root___eval\n"); );
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
            VIntMulAlt_noparam___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("lab1_imul/IntMulAlt.v", 368, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VIntMulAlt_noparam___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VIntMulAlt_noparam___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("lab1_imul/IntMulAlt.v", 368, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VIntMulAlt_noparam___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("lab1_imul/IntMulAlt.v", 368, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VIntMulAlt_noparam___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VIntMulAlt_noparam___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VIntMulAlt_noparam___024root___eval_debug_assertions(VIntMulAlt_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulAlt_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulAlt_noparam___024root___eval_debug_assertions\n"); );
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
