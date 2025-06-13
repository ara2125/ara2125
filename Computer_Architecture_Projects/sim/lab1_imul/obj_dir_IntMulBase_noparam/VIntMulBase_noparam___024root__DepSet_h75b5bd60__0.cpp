// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIntMulBase_noparam.h for the primary calling header

#include "VIntMulBase_noparam__pch.h"
#include "VIntMulBase_noparam__Syms.h"
#include "VIntMulBase_noparam___024root.h"

extern const VlWide<128>/*4095:0*/ VIntMulBase_noparam__ConstPool__CONST_h0dfd4e8e_0;
extern const VlWide<128>/*4095:0*/ VIntMulBase_noparam__ConstPool__CONST_hf38a1e84_0;
extern const VlWide<128>/*4095:0*/ VIntMulBase_noparam__ConstPool__CONST_haead36df_0;
extern const VlWide<128>/*4095:0*/ VIntMulBase_noparam__ConstPool__CONST_h7ed547c1_0;
extern const VlWide<128>/*4095:0*/ VIntMulBase_noparam__ConstPool__CONST_h89919522_0;

void VIntMulBase_noparam___024root____Vdpiexp_IntMulBase_noparam__DOT__v__DOT__line_trace_TOP(VIntMulBase_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulBase_noparam___024root____Vdpiexp_IntMulBase_noparam__DOT__v__DOT__line_trace_TOP\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__trace;
    VL_ZERO_W(4096, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__trace);
    CData/*0:0*/ __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__val;
    __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__val = 0;
    CData/*0:0*/ __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__rdy;
    __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__str;
    VL_ZERO_W(4096, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__str);
    VlWide<128>/*4095:0*/ __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__1__trace;
    VL_ZERO_W(4096, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__1__trace);
    VlWide<128>/*4095:0*/ __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__1__str;
    VL_ZERO_W(4096, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__1__str);
    VlWide<128>/*4095:0*/ __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__2__trace;
    VL_ZERO_W(4096, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__2__trace);
    CData/*7:0*/ __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__2__char;
    __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__2__char = 0;
    IData/*31:0*/ __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__2__num;
    __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__2__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__3__trace;
    VL_ZERO_W(4096, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__3__trace);
    VlWide<128>/*4095:0*/ __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__3__str;
    VL_ZERO_W(4096, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__3__str);
    VlWide<128>/*4095:0*/ __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__4__trace;
    VL_ZERO_W(4096, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__4__trace);
    CData/*7:0*/ __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__4__char;
    __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__4__char = 0;
    IData/*31:0*/ __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__4__num;
    __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__4__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__5__trace;
    VL_ZERO_W(4096, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__5__trace);
    VlWide<128>/*4095:0*/ __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__5__str;
    VL_ZERO_W(4096, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__5__str);
    VlWide<128>/*4095:0*/ __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__6__trace;
    VL_ZERO_W(4096, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__6__trace);
    CData/*7:0*/ __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__6__char;
    __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__6__char = 0;
    IData/*31:0*/ __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__6__num;
    __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__6__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__7__trace;
    VL_ZERO_W(4096, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__7__trace);
    VlWide<128>/*4095:0*/ __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__7__str;
    VL_ZERO_W(4096, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__7__str);
    VlWide<128>/*4095:0*/ __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__8__trace;
    VL_ZERO_W(4096, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__8__trace);
    CData/*7:0*/ __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__8__char;
    __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__8__char = 0;
    IData/*31:0*/ __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__8__num;
    __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__8__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__9__trace;
    VL_ZERO_W(4096, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__9__trace);
    VlWide<128>/*4095:0*/ __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__9__str;
    VL_ZERO_W(4096, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__9__str);
    VlWide<128>/*4095:0*/ __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__10__trace;
    VL_ZERO_W(4096, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__10__trace);
    VlWide<128>/*4095:0*/ __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__10__str;
    VL_ZERO_W(4096, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__10__str);
    VlWide<128>/*4095:0*/ __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__11__trace;
    VL_ZERO_W(4096, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__11__trace);
    VlWide<128>/*4095:0*/ __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__11__str;
    VL_ZERO_W(4096, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__11__str);
    VlWide<128>/*4095:0*/ __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__12__trace;
    VL_ZERO_W(4096, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__12__trace);
    CData/*0:0*/ __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__12__val;
    __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__12__val = 0;
    CData/*0:0*/ __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__12__rdy;
    __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__12__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__12__str;
    VL_ZERO_W(4096, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__12__str);
    VlWide<128>/*4095:0*/ __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__13__trace;
    VL_ZERO_W(4096, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__13__trace);
    VlWide<128>/*4095:0*/ __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__13__str;
    VL_ZERO_W(4096, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__13__str);
    VlWide<128>/*4095:0*/ __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__14__trace;
    VL_ZERO_W(4096, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__14__trace);
    CData/*7:0*/ __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__14__char;
    __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__14__char = 0;
    IData/*31:0*/ __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__14__num;
    __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__14__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__15__trace;
    VL_ZERO_W(4096, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__15__trace);
    VlWide<128>/*4095:0*/ __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__15__str;
    VL_ZERO_W(4096, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__15__str);
    VlWide<128>/*4095:0*/ __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__16__trace;
    VL_ZERO_W(4096, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__16__trace);
    CData/*7:0*/ __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__16__char;
    __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__16__char = 0;
    IData/*31:0*/ __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__16__num;
    __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__16__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__17__trace;
    VL_ZERO_W(4096, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__17__trace);
    VlWide<128>/*4095:0*/ __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__17__str;
    VL_ZERO_W(4096, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__17__str);
    VlWide<128>/*4095:0*/ __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__18__trace;
    VL_ZERO_W(4096, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__18__trace);
    CData/*7:0*/ __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__18__char;
    __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__18__char = 0;
    IData/*31:0*/ __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__18__num;
    __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__18__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__19__trace;
    VL_ZERO_W(4096, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__19__trace);
    VlWide<128>/*4095:0*/ __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__19__str;
    VL_ZERO_W(4096, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__19__str);
    VlWide<128>/*4095:0*/ __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__20__trace;
    VL_ZERO_W(4096, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__20__trace);
    CData/*7:0*/ __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__20__char;
    __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__20__char = 0;
    IData/*31:0*/ __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__20__num;
    __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__20__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__str
                  ,"%x",0,64,vlSymsp->TOP.istream_msg);
    VL_ASSIGN_W(4096,__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__str, vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__str);
    __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__rdy 
        = vlSymsp->TOP.istream_rdy;
    __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__val 
        = vlSymsp->TOP.istream_val;
    VL_ASSIGN_W(4096,__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__trace, trace_str);
    vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len1))))))) {
        vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__rdy) 
         & (IData)(__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__val))) {
        VL_ASSIGN_W(4096,__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__1__str, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__str);
        VL_ASSIGN_W(4096,__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__1__trace, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__trace);
        vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__1__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__1__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__1__trace[0U];
        vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__1__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__1__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__1__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__1__trace[0U] 
            = vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__trace, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__1__trace);
    } else if (((IData)(__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__rdy) 
                & (~ (IData)(__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__val)))) {
        __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__2__num 
            = vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len1;
        __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__2__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__2__trace, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__trace);
        vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__2__trace[0U];
        vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__2__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__2__trace, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__2__char);
            vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__2__trace[0U] 
            = vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__trace, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__2__trace);
    } else if (((~ (IData)(__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__rdy)) 
                & (IData)(__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__val))) {
        VL_ASSIGN_W(4096,__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__3__str, VIntMulBase_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__3__trace, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__trace);
        vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__3__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__3__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__3__trace[0U];
        vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__3__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__3__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__3__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__3__trace[0U] 
            = vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__trace, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__3__trace);
        __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__4__num 
            = (vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__4__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__4__trace, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__trace);
        vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__4__trace[0U];
        vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__4__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__4__trace, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__4__char);
            vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__4__trace[0U] 
            = vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__trace, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__4__trace);
    } else if ((1U & ((~ (IData)(__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__rdy)) 
                      & (~ (IData)(__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__val))))) {
        VL_ASSIGN_W(4096,__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__5__str, VIntMulBase_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__5__trace, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__trace);
        vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__5__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__5__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__5__trace[0U];
        vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__5__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__5__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__5__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__5__trace[0U] 
            = vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__trace, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__5__trace);
        __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__6__num 
            = (vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__6__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__6__trace, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__trace);
        vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__6__trace[0U];
        vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__6__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__6__trace, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__6__char);
            vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__6__trace[0U] 
            = vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__trace, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__6__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__7__str, VIntMulBase_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__7__trace, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__trace);
        vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__7__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__7__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__7__trace[0U];
        vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__7__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__7__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__7__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__7__trace[0U] 
            = vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__trace, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__7__trace);
        __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__8__num 
            = (vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__8__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__8__trace, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__trace);
        vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__8__trace[0U];
        vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__8__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__8__trace, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__8__char);
            vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__8__trace[0U] 
            = vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__trace, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__8__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__trace);
    VL_ASSIGN_W(4096,__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__9__str, VIntMulBase_noparam__ConstPool__CONST_h7ed547c1_0);
    VL_ASSIGN_W(4096,__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__9__trace, trace_str);
    vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
        vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0);
    }
    vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
        = __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__9__trace[0U];
    vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
        = (vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(32, 0U, vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__9__trace, 
                        (0xffU & (((0U == (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                    ? 0U : (__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                  | (__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                     (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                               >> 5U))] 
                                     >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
        vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = (vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__9__trace[0U] 
        = vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
    VL_ASSIGN_W(4096,trace_str, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__9__trace);
    VL_SFORMAT_NX(4096,vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__str
                  ,"%x",0,2,vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__control_unit__DOT__state);
    VL_ASSIGN_W(4096,__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__10__str, vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__str);
    VL_ASSIGN_W(4096,__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__10__trace, trace_str);
    vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
        vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0);
    }
    vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
        = __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__10__trace[0U];
    vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
        = (vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(32, 0U, vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__10__trace, 
                        (0xffU & (((0U == (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                    ? 0U : (__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                  | (__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                     (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                               >> 5U))] 
                                     >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
        vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = (vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__10__trace[0U] 
        = vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
    VL_ASSIGN_W(4096,trace_str, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__10__trace);
    VL_ASSIGN_W(4096,__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__11__str, VIntMulBase_noparam__ConstPool__CONST_h89919522_0);
    VL_ASSIGN_W(4096,__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__11__trace, trace_str);
    vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
        vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0);
    }
    vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
        = __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__11__trace[0U];
    vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
        = (vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(32, 0U, vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__11__trace, 
                        (0xffU & (((0U == (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                    ? 0U : (__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                  | (__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                     (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                               >> 5U))] 
                                     >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
        vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = (vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__11__trace[0U] 
        = vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
    VL_ASSIGN_W(4096,trace_str, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__11__trace);
    VL_SFORMAT_NX(4096,vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__str
                  ,"%x",0,32,vlSymsp->TOP.ostream_msg);
    VL_ASSIGN_W(4096,__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__12__str, vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__str);
    __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__12__rdy 
        = vlSymsp->TOP.ostream_rdy;
    __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__12__val 
        = vlSymsp->TOP.ostream_val;
    VL_ASSIGN_W(4096,__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__12__trace, trace_str);
    vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__12__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__12__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len1))))))) {
        vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__12__rdy) 
         & (IData)(__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__12__val))) {
        VL_ASSIGN_W(4096,__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__13__str, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__12__str);
        VL_ASSIGN_W(4096,__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__13__trace, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__12__trace);
        vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__13__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__13__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__13__trace[0U];
        vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__13__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__13__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__13__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__13__trace[0U] 
            = vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__12__trace, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__13__trace);
    } else if (((IData)(__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__12__rdy) 
                & (~ (IData)(__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__12__val)))) {
        __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__14__num 
            = vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len1;
        __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__14__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__14__trace, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__12__trace);
        vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__14__trace[0U];
        vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__14__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__14__trace, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__14__char);
            vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__14__trace[0U] 
            = vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__12__trace, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__14__trace);
    } else if (((~ (IData)(__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__12__rdy)) 
                & (IData)(__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__12__val))) {
        VL_ASSIGN_W(4096,__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__15__str, VIntMulBase_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__15__trace, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__12__trace);
        vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__15__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__15__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__15__trace[0U];
        vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__15__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__15__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__15__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__15__trace[0U] 
            = vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__12__trace, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__15__trace);
        __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__16__num 
            = (vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__16__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__16__trace, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__12__trace);
        vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__16__trace[0U];
        vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__16__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__16__trace, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__16__char);
            vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__16__trace[0U] 
            = vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__12__trace, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__16__trace);
    } else if ((1U & ((~ (IData)(__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__12__rdy)) 
                      & (~ (IData)(__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__12__val))))) {
        VL_ASSIGN_W(4096,__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__17__str, VIntMulBase_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__17__trace, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__12__trace);
        vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__17__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__17__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__17__trace[0U];
        vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__17__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__17__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__17__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__17__trace[0U] 
            = vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__12__trace, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__17__trace);
        __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__18__num 
            = (vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__18__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__18__trace, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__12__trace);
        vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__18__trace[0U];
        vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__18__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__18__trace, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__18__char);
            vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__18__trace[0U] 
            = vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__12__trace, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__18__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__19__str, VIntMulBase_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__19__trace, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__12__trace);
        vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__19__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__19__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__19__trace[0U];
        vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__19__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__19__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__19__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__19__trace[0U] 
            = vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__12__trace, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__19__trace);
        __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__20__num 
            = (vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__20__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__20__trace, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__12__trace);
        vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__20__trace[0U];
        vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__20__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__20__trace, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__20__char);
            vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__20__trace[0U] 
            = vlSymsp->TOP.IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__12__trace, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__20__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_IntMulBase_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__12__trace);
    vlSymsp->TOP.__Vm_traceActivity[1U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VIntMulBase_noparam___024root___dump_triggers__ico(VIntMulBase_noparam___024root* vlSelf);
#endif  // VL_DEBUG

void VIntMulBase_noparam___024root___eval_triggers__ico(VIntMulBase_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulBase_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulBase_noparam___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
    vlSelf->__VicoTriggered.set(1U, (IData)(vlSelf->__Vdpi_export_trigger));
    vlSelf->__Vdpi_export_trigger = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VIntMulBase_noparam___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VIntMulBase_noparam___024root___dump_triggers__act(VIntMulBase_noparam___024root* vlSelf);
#endif  // VL_DEBUG

void VIntMulBase_noparam___024root___eval_triggers__act(VIntMulBase_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VIntMulBase_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulBase_noparam___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (IData)(vlSelf->__Vdpi_export_trigger));
    vlSelf->__Vdpi_export_trigger = 0U;
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))));
    vlSelf->__VactTriggered.set(2U, (((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))) 
                                     | ((IData)(vlSelf->reset) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__reset__0)))));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = vlSelf->reset;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VIntMulBase_noparam___024root___dump_triggers__act(vlSelf);
    }
#endif
}
