// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VProcDpathAlu_noparam.h for the primary calling header

#include "VProcDpathAlu_noparam__pch.h"
#include "VProcDpathAlu_noparam__Syms.h"
#include "VProcDpathAlu_noparam___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VProcDpathAlu_noparam___024root___dump_triggers__stl(VProcDpathAlu_noparam___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VProcDpathAlu_noparam___024root___eval_triggers__stl(VProcDpathAlu_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VProcDpathAlu_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcDpathAlu_noparam___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VProcDpathAlu_noparam___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
