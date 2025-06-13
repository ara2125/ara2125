// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VProcBase_noparam.h for the primary calling header

#include "VProcBase_noparam__pch.h"
#include "VProcBase_noparam__Syms.h"
#include "VProcBase_noparam___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VProcBase_noparam___024root___dump_triggers__stl(VProcBase_noparam___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VProcBase_noparam___024root___eval_triggers__stl(VProcBase_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VProcBase_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcBase_noparam___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VProcBase_noparam___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
