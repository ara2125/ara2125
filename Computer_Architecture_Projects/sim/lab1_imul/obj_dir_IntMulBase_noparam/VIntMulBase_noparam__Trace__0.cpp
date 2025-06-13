// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VIntMulBase_noparam__Syms.h"


void VIntMulBase_noparam___024root__trace_chg_0_sub_0(VIntMulBase_noparam___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VIntMulBase_noparam___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulBase_noparam___024root__trace_chg_0\n"); );
    // Init
    VIntMulBase_noparam___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VIntMulBase_noparam___024root*>(voidSelf);
    VIntMulBase_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VIntMulBase_noparam___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VIntMulBase_noparam___024root__trace_chg_0_sub_0(VIntMulBase_noparam___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulBase_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulBase_noparam___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgWData(oldp+0,(vlSelf->IntMulBase_noparam__DOT__v__DOT__str),4096);
        bufp->chgIData(oldp+128,(vlSelf->IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0),32);
        bufp->chgIData(oldp+129,(vlSelf->IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len1),32);
        bufp->chgIData(oldp+130,(vlSelf->IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0),32);
        bufp->chgIData(oldp+131,(vlSelf->IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+132,((0x20U == (IData)(vlSelf->IntMulBase_noparam__DOT__v__DOT__datapath__DOT____Vcellout__counter___count))));
        bufp->chgBit(oldp+133,((0U == (IData)(vlSelf->IntMulBase_noparam__DOT__v__DOT__datapath__DOT____Vcellout__counter___count))));
        bufp->chgBit(oldp+134,((1U & vlSelf->IntMulBase_noparam__DOT__v__DOT__datapath__DOT__b_reg)));
        bufp->chgIData(oldp+135,(vlSelf->IntMulBase_noparam__DOT__v__DOT__datapath__DOT__a_reg),32);
        bufp->chgIData(oldp+136,((vlSelf->IntMulBase_noparam__DOT__v__DOT__datapath__DOT__a_reg 
                                  << 1U)),32);
        bufp->chgIData(oldp+137,(vlSelf->IntMulBase_noparam__DOT__v__DOT__datapath__DOT__b_reg),32);
        bufp->chgIData(oldp+138,((vlSelf->IntMulBase_noparam__DOT__v__DOT__datapath__DOT__b_reg 
                                  >> 1U)),32);
        bufp->chgIData(oldp+139,(vlSelf->IntMulBase_noparam__DOT__v__DOT__datapath__DOT__result_reg),32);
        bufp->chgIData(oldp+140,((vlSelf->IntMulBase_noparam__DOT__v__DOT__datapath__DOT__a_reg 
                                  + vlSelf->IntMulBase_noparam__DOT__v__DOT__datapath__DOT__result_reg)),32);
        bufp->chgCData(oldp+141,((0x1fU & (IData)(vlSelf->IntMulBase_noparam__DOT__v__DOT__datapath__DOT____Vcellout__counter___count))),5);
        bufp->chgCData(oldp+142,(vlSelf->IntMulBase_noparam__DOT__v__DOT__datapath__DOT____Vcellout__counter___count),6);
        bufp->chgBit(oldp+143,((0x20U > (IData)(vlSelf->IntMulBase_noparam__DOT__v__DOT__datapath__DOT____Vcellout__counter___count))));
        bufp->chgIData(oldp+144,(vlSelf->IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__cycles),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+145,(vlSelf->IntMulBase_noparam__DOT__v__DOT__result_en));
        bufp->chgBit(oldp+146,(vlSelf->IntMulBase_noparam__DOT__v__DOT__a_mux_sel));
        bufp->chgBit(oldp+147,(vlSelf->IntMulBase_noparam__DOT__v__DOT__b_mux_sel));
        bufp->chgCData(oldp+148,(vlSelf->IntMulBase_noparam__DOT__v__DOT__control_unit__DOT__state),2);
    }
    bufp->chgBit(oldp+149,(vlSelf->clk));
    bufp->chgBit(oldp+150,(vlSelf->reset));
    bufp->chgQData(oldp+151,(vlSelf->istream_msg),64);
    bufp->chgBit(oldp+153,(vlSelf->istream_rdy));
    bufp->chgBit(oldp+154,(vlSelf->istream_val));
    bufp->chgIData(oldp+155,(vlSelf->ostream_msg),32);
    bufp->chgBit(oldp+156,(vlSelf->ostream_rdy));
    bufp->chgBit(oldp+157,(vlSelf->ostream_val));
    bufp->chgBit(oldp+158,(vlSelf->IntMulBase_noparam__DOT__v__DOT__result_mux_sel));
    bufp->chgBit(oldp+159,(vlSelf->IntMulBase_noparam__DOT__v__DOT__add_mux_sel));
    bufp->chgCData(oldp+160,(vlSelf->IntMulBase_noparam__DOT__v__DOT__control_unit__DOT__state_next),2);
    bufp->chgIData(oldp+161,(((IData)(vlSelf->IntMulBase_noparam__DOT__v__DOT__a_mux_sel)
                               ? ((IData)(vlSelf->IntMulBase_noparam__DOT__v__DOT__a_mux_sel)
                                   ? (vlSelf->IntMulBase_noparam__DOT__v__DOT__datapath__DOT__a_reg 
                                      << 1U) : 0U) : (IData)(
                                                             (vlSelf->istream_msg 
                                                              >> 0x20U)))),32);
    bufp->chgIData(oldp+162,(((IData)(vlSelf->IntMulBase_noparam__DOT__v__DOT__b_mux_sel)
                               ? ((IData)(vlSelf->IntMulBase_noparam__DOT__v__DOT__b_mux_sel)
                                   ? (vlSelf->IntMulBase_noparam__DOT__v__DOT__datapath__DOT__b_reg 
                                      >> 1U) : 0U) : (IData)(vlSelf->istream_msg))),32);
    bufp->chgIData(oldp+163,(((IData)(vlSelf->IntMulBase_noparam__DOT__v__DOT__result_mux_sel)
                               ? ((IData)(vlSelf->IntMulBase_noparam__DOT__v__DOT__result_mux_sel)
                                   ? ((IData)(vlSelf->IntMulBase_noparam__DOT__v__DOT__add_mux_sel)
                                       ? ((IData)(vlSelf->IntMulBase_noparam__DOT__v__DOT__add_mux_sel)
                                           ? (vlSelf->IntMulBase_noparam__DOT__v__DOT__datapath__DOT__a_reg 
                                              + vlSelf->IntMulBase_noparam__DOT__v__DOT__datapath__DOT__result_reg)
                                           : 0U) : vlSelf->IntMulBase_noparam__DOT__v__DOT__datapath__DOT__result_reg)
                                   : 0U) : 0U)),32);
    bufp->chgIData(oldp+164,(((IData)(vlSelf->IntMulBase_noparam__DOT__v__DOT__add_mux_sel)
                               ? ((IData)(vlSelf->IntMulBase_noparam__DOT__v__DOT__add_mux_sel)
                                   ? (vlSelf->IntMulBase_noparam__DOT__v__DOT__datapath__DOT__a_reg 
                                      + vlSelf->IntMulBase_noparam__DOT__v__DOT__datapath__DOT__result_reg)
                                   : 0U) : vlSelf->IntMulBase_noparam__DOT__v__DOT__datapath__DOT__result_reg)),32);
    bufp->chgIData(oldp+165,((IData)((vlSelf->istream_msg 
                                      >> 0x20U))),32);
    bufp->chgIData(oldp+166,((IData)(vlSelf->istream_msg)),32);
    bufp->chgCData(oldp+167,(((IData)(vlSelf->istream_rdy)
                               ? 0U : (0x3fU & ((IData)(vlSelf->IntMulBase_noparam__DOT__v__DOT__datapath__DOT____Vcellout__counter___count) 
                                                + (0x20U 
                                                   > (IData)(vlSelf->IntMulBase_noparam__DOT__v__DOT__datapath__DOT____Vcellout__counter___count)))))),6);
}

void VIntMulBase_noparam___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulBase_noparam___024root__trace_cleanup\n"); );
    // Init
    VIntMulBase_noparam___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VIntMulBase_noparam___024root*>(voidSelf);
    VIntMulBase_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
