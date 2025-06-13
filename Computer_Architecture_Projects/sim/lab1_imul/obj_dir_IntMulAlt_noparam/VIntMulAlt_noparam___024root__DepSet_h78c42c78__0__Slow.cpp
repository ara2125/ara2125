// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIntMulAlt_noparam.h for the primary calling header

#include "VIntMulAlt_noparam__pch.h"
#include "VIntMulAlt_noparam___024root.h"

VL_ATTR_COLD void VIntMulAlt_noparam___024root___eval_static(VIntMulAlt_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulAlt_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulAlt_noparam___024root___eval_static\n"); );
}

VL_ATTR_COLD void VIntMulAlt_noparam___024root___eval_initial(VIntMulAlt_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulAlt_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulAlt_noparam___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = vlSelf->reset;
}

VL_ATTR_COLD void VIntMulAlt_noparam___024root___eval_final(VIntMulAlt_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulAlt_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulAlt_noparam___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VIntMulAlt_noparam___024root___dump_triggers__stl(VIntMulAlt_noparam___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VIntMulAlt_noparam___024root___eval_phase__stl(VIntMulAlt_noparam___024root* vlSelf);

VL_ATTR_COLD void VIntMulAlt_noparam___024root___eval_settle(VIntMulAlt_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulAlt_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulAlt_noparam___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            VIntMulAlt_noparam___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("lab1_imul/IntMulAlt.v", 368, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VIntMulAlt_noparam___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VIntMulAlt_noparam___024root___dump_triggers__stl(VIntMulAlt_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulAlt_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulAlt_noparam___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VIntMulAlt_noparam___024root___stl_sequent__TOP__0(VIntMulAlt_noparam___024root* vlSelf);

VL_ATTR_COLD void VIntMulAlt_noparam___024root___eval_stl(VIntMulAlt_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulAlt_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulAlt_noparam___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VIntMulAlt_noparam___024root___stl_sequent__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*1:0*/, 32> VIntMulAlt_noparam__ConstPool__TABLE_hcd563ae5_0;

VL_ATTR_COLD void VIntMulAlt_noparam___024root___stl_sequent__TOP__0(VIntMulAlt_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulAlt_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulAlt_noparam___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ IntMulAlt_noparam__DOT__v__DOT__add_mux_sel;
    IntMulAlt_noparam__DOT__v__DOT__add_mux_sel = 0;
    IData/*31:0*/ IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding;
    IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding = 0;
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->istream_rdy = 0U;
    vlSelf->IntMulAlt_noparam__DOT__v__DOT__b_mux_sel = 0U;
    vlSelf->IntMulAlt_noparam__DOT__v__DOT__a_mux_sel = 0U;
    vlSelf->IntMulAlt_noparam__DOT__v__DOT__result_en = 1U;
    vlSelf->ostream_val = 0U;
    vlSelf->ostream_msg = vlSelf->IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__result_reg;
    vlSelf->IntMulAlt_noparam__DOT__v__DOT__result_mux_sel = 1U;
    IntMulAlt_noparam__DOT__v__DOT__add_mux_sel = 0U;
    if ((0U == (IData)(vlSelf->IntMulAlt_noparam__DOT__v__DOT__control_unit__DOT__state))) {
        vlSelf->istream_rdy = 1U;
        vlSelf->IntMulAlt_noparam__DOT__v__DOT__b_mux_sel = 0U;
        vlSelf->IntMulAlt_noparam__DOT__v__DOT__a_mux_sel = 0U;
        vlSelf->IntMulAlt_noparam__DOT__v__DOT__result_en = 1U;
        vlSelf->ostream_val = 0U;
        vlSelf->IntMulAlt_noparam__DOT__v__DOT__result_mux_sel = 1U;
        IntMulAlt_noparam__DOT__v__DOT__add_mux_sel = 0U;
    } else if ((1U == (IData)(vlSelf->IntMulAlt_noparam__DOT__v__DOT__control_unit__DOT__state))) {
        vlSelf->istream_rdy = 0U;
        vlSelf->IntMulAlt_noparam__DOT__v__DOT__b_mux_sel = 1U;
        vlSelf->IntMulAlt_noparam__DOT__v__DOT__a_mux_sel = 1U;
        vlSelf->IntMulAlt_noparam__DOT__v__DOT__result_en = 1U;
        vlSelf->ostream_val = 0U;
        vlSelf->IntMulAlt_noparam__DOT__v__DOT__result_mux_sel = 1U;
        vlSelf->__Vtask_IntMulAlt_noparam__DOT__v__DOT__control_unit__DOT__cs__23__cs_add_mux_sel 
            = (1U & vlSelf->IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__b_reg);
        IntMulAlt_noparam__DOT__v__DOT__add_mux_sel 
            = vlSelf->__Vtask_IntMulAlt_noparam__DOT__v__DOT__control_unit__DOT__cs__23__cs_add_mux_sel;
    } else if ((2U == (IData)(vlSelf->IntMulAlt_noparam__DOT__v__DOT__control_unit__DOT__state))) {
        vlSelf->istream_rdy = 0U;
        vlSelf->IntMulAlt_noparam__DOT__v__DOT__b_mux_sel = 1U;
        vlSelf->IntMulAlt_noparam__DOT__v__DOT__a_mux_sel = 1U;
        vlSelf->IntMulAlt_noparam__DOT__v__DOT__result_en = 1U;
        vlSelf->ostream_val = 1U;
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
    vlSelf->IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__add_mux_reg 
        = ((IData)(IntMulAlt_noparam__DOT__v__DOT__add_mux_sel)
            ? ((IData)(IntMulAlt_noparam__DOT__v__DOT__add_mux_sel)
                ? (vlSelf->IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__a_reg 
                   + vlSelf->IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__result_reg)
                : 0U) : vlSelf->IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__result_reg);
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
    __Vtableidx1 = (((IData)(vlSelf->ostream_rdy) << 4U) 
                    | ((8U & (((IData)(1U) + (IData)(vlSelf->IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__bit_shift__DOT____Vcellout__max_extractor__out)) 
                              >> 2U)) | (((IData)(vlSelf->istream_val) 
                                          << 2U) | (IData)(vlSelf->IntMulAlt_noparam__DOT__v__DOT__control_unit__DOT__state))));
    vlSelf->IntMulAlt_noparam__DOT__v__DOT__control_unit__DOT__state_next 
        = VIntMulAlt_noparam__ConstPool__TABLE_hcd563ae5_0
        [__Vtableidx1];
}

VL_ATTR_COLD void VIntMulAlt_noparam___024root___eval_triggers__stl(VIntMulAlt_noparam___024root* vlSelf);

VL_ATTR_COLD bool VIntMulAlt_noparam___024root___eval_phase__stl(VIntMulAlt_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulAlt_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulAlt_noparam___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VIntMulAlt_noparam___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VIntMulAlt_noparam___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VIntMulAlt_noparam___024root___dump_triggers__ico(VIntMulAlt_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulAlt_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulAlt_noparam___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ vlSelf->__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
    if ((2ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 1 is active: Internal 'ico' trigger - DPI export trigger\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VIntMulAlt_noparam___024root___dump_triggers__act(VIntMulAlt_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulAlt_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulAlt_noparam___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: Internal 'act' trigger - DPI export trigger\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge clk or posedge reset)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VIntMulAlt_noparam___024root___dump_triggers__nba(VIntMulAlt_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulAlt_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulAlt_noparam___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: Internal 'nba' trigger - DPI export trigger\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge clk or posedge reset)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VIntMulAlt_noparam___024root___ctor_var_reset(VIntMulAlt_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulAlt_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulAlt_noparam___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->istream_msg = VL_RAND_RESET_Q(64);
    vlSelf->istream_rdy = VL_RAND_RESET_I(1);
    vlSelf->istream_val = VL_RAND_RESET_I(1);
    vlSelf->ostream_msg = VL_RAND_RESET_I(32);
    vlSelf->ostream_rdy = VL_RAND_RESET_I(1);
    vlSelf->ostream_val = VL_RAND_RESET_I(1);
    vlSelf->IntMulAlt_noparam__DOT__v__DOT__result_en = VL_RAND_RESET_I(1);
    vlSelf->IntMulAlt_noparam__DOT__v__DOT__a_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->IntMulAlt_noparam__DOT__v__DOT__b_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->IntMulAlt_noparam__DOT__v__DOT__result_mux_sel = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(4096, vlSelf->IntMulAlt_noparam__DOT__v__DOT__str);
    vlSelf->IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__a_reg = VL_RAND_RESET_I(32);
    vlSelf->IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__a_shift = VL_RAND_RESET_I(32);
    vlSelf->IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__b_reg = VL_RAND_RESET_I(32);
    vlSelf->IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__b_shift = VL_RAND_RESET_I(32);
    vlSelf->IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__result_reg = VL_RAND_RESET_I(32);
    vlSelf->IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__add_mux_reg = VL_RAND_RESET_I(32);
    vlSelf->IntMulAlt_noparam__DOT__v__DOT__datapath__DOT__bit_shift__DOT____Vcellout__max_extractor__out = VL_RAND_RESET_I(5);
    vlSelf->IntMulAlt_noparam__DOT__v__DOT__control_unit__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->IntMulAlt_noparam__DOT__v__DOT__control_unit__DOT__state_next = VL_RAND_RESET_I(2);
    vlSelf->IntMulAlt_noparam__DOT__v__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->IntMulAlt_noparam__DOT__v__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->IntMulAlt_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->__Vdpi_export_trigger = 0;
    vlSelf->__Vtask_IntMulAlt_noparam__DOT__v__DOT__control_unit__DOT__cs__23__cs_add_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_IntMulAlt_noparam__DOT__v__DOT__control_unit__DOT__cs__24__cs_add_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_IntMulAlt_noparam__DOT__v__DOT__control_unit__DOT__cs__25__cs_add_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = VL_RAND_RESET_I(1);
}
