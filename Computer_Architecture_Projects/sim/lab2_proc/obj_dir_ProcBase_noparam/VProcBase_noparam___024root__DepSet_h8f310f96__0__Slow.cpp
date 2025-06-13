// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VProcBase_noparam.h for the primary calling header

#include "VProcBase_noparam__pch.h"
#include "VProcBase_noparam___024root.h"

VL_ATTR_COLD void VProcBase_noparam___024root___eval_static(VProcBase_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VProcBase_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcBase_noparam___024root___eval_static\n"); );
}

VL_ATTR_COLD void VProcBase_noparam___024root___eval_initial(VProcBase_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VProcBase_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcBase_noparam___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = vlSelf->reset;
}

VL_ATTR_COLD void VProcBase_noparam___024root___eval_final(VProcBase_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VProcBase_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcBase_noparam___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VProcBase_noparam___024root___dump_triggers__stl(VProcBase_noparam___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VProcBase_noparam___024root___eval_phase__stl(VProcBase_noparam___024root* vlSelf);

VL_ATTR_COLD void VProcBase_noparam___024root___eval_settle(VProcBase_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VProcBase_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcBase_noparam___024root___eval_settle\n"); );
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
            VProcBase_noparam___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("lab2_proc/ProcBase.v", 412, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VProcBase_noparam___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VProcBase_noparam___024root___dump_triggers__stl(VProcBase_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VProcBase_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcBase_noparam___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VProcBase_noparam___024root___stl_sequent__TOP__0(VProcBase_noparam___024root* vlSelf);

VL_ATTR_COLD void VProcBase_noparam___024root___eval_stl(VProcBase_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VProcBase_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcBase_noparam___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VProcBase_noparam___024root___stl_sequent__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*1:0*/, 32> VProcBase_noparam__ConstPool__TABLE_hcd563ae5_0;

VL_ATTR_COLD void VProcBase_noparam___024root___stl_sequent__TOP__0(VProcBase_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VProcBase_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcBase_noparam___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ ProcBase_noparam__DOT__v__DOT__imem_reqstream_enq_val;
    ProcBase_noparam__DOT__v__DOT__imem_reqstream_enq_val = 0;
    CData/*0:0*/ ProcBase_noparam__DOT__v__DOT__imem_respstream_drop_val;
    ProcBase_noparam__DOT__v__DOT__imem_respstream_drop_val = 0;
    CData/*1:0*/ ProcBase_noparam__DOT__v__DOT__pc_sel_F;
    ProcBase_noparam__DOT__v__DOT__pc_sel_F = 0;
    CData/*2:0*/ ProcBase_noparam__DOT__v__DOT__imm_type_D;
    ProcBase_noparam__DOT__v__DOT__imm_type_D = 0;
    CData/*0:0*/ ProcBase_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq;
    ProcBase_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq = 0;
    CData/*0:0*/ ProcBase_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    ProcBase_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ ProcBase_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____VdfgRegularize_h1851b5ac_0_0;
    ProcBase_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____VdfgRegularize_h1851b5ac_0_0 = 0;
    CData/*0:0*/ ProcBase_noparam__DOT__v__DOT__imem_respstream_drop_unit__DOT____VdfgExtracted_hff9b16a6__0;
    ProcBase_noparam__DOT__v__DOT__imem_respstream_drop_unit__DOT____VdfgExtracted_hff9b16a6__0 = 0;
    CData/*0:0*/ ProcBase_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq;
    ProcBase_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq = 0;
    CData/*0:0*/ ProcBase_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    ProcBase_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ ProcBase_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    ProcBase_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ ProcBase_noparam__DOT__v__DOT__ctrl__DOT__ostall_D;
    ProcBase_noparam__DOT__v__DOT__ctrl__DOT__ostall_D = 0;
    CData/*0:0*/ ProcBase_noparam__DOT__v__DOT__ctrl__DOT__ostall_M;
    ProcBase_noparam__DOT__v__DOT__ctrl__DOT__ostall_M = 0;
    CData/*0:0*/ ProcBase_noparam__DOT__v__DOT__ctrl__DOT__osquash_X;
    ProcBase_noparam__DOT__v__DOT__ctrl__DOT__osquash_X = 0;
    CData/*1:0*/ ProcBase_noparam__DOT__v__DOT__ctrl__DOT__pc_sel_D;
    ProcBase_noparam__DOT__v__DOT__ctrl__DOT__pc_sel_D = 0;
    CData/*0:0*/ ProcBase_noparam__DOT__v__DOT__ctrl__DOT__pc_redirect_D;
    ProcBase_noparam__DOT__v__DOT__ctrl__DOT__pc_redirect_D = 0;
    CData/*1:0*/ ProcBase_noparam__DOT__v__DOT__ctrl__DOT__pc_sel_X;
    ProcBase_noparam__DOT__v__DOT__ctrl__DOT__pc_sel_X = 0;
    CData/*0:0*/ ProcBase_noparam__DOT__v__DOT__ctrl__DOT__csrr_D;
    ProcBase_noparam__DOT__v__DOT__ctrl__DOT__csrr_D = 0;
    CData/*0:0*/ ProcBase_noparam__DOT__v__DOT__ctrl__DOT__csrw_D;
    ProcBase_noparam__DOT__v__DOT__ctrl__DOT__csrw_D = 0;
    CData/*0:0*/ ProcBase_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hfec34484_0_8;
    ProcBase_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hfec34484_0_8 = 0;
    CData/*0:0*/ ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__add_mux_sel;
    ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__add_mux_sel = 0;
    IData/*31:0*/ ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding;
    ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_0;
    __VdfgRegularize_hd87f99a1_0_0 = 0;
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    if (((((((((0x13U == vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D) 
               | (0x33U == (0xfe00707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
              | (0x2003U == (0x707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
             | (0x2023U == (0x707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
            | (0x1063U == (0x707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
           | (0x2073U == (0x707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
          | (0x1073U == (0x707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
         | (0x40000033U == (0xfe00707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D)))) {
        if ((0x13U == vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D)) {
            vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__dmem_type_D = 0U;
            vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__alu_fn_D = 0U;
            vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__br_type_D = 0U;
            vlSelf->ProcBase_noparam__DOT__v__DOT__op2_sel_D = 0U;
            ProcBase_noparam__DOT__v__DOT__imm_type_D = 0U;
        } else if ((0x33U == (0xfe00707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) {
            vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__dmem_type_D = 0U;
            vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__alu_fn_D = 0U;
            vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__br_type_D = 0U;
            vlSelf->ProcBase_noparam__DOT__v__DOT__op2_sel_D = 0U;
            ProcBase_noparam__DOT__v__DOT__imm_type_D = 0U;
        } else if ((0x2003U == (0x707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) {
            vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__dmem_type_D = 1U;
            vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__alu_fn_D = 0U;
            vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__br_type_D = 0U;
            vlSelf->ProcBase_noparam__DOT__v__DOT__op2_sel_D = 1U;
            ProcBase_noparam__DOT__v__DOT__imm_type_D = 0U;
        } else if ((0x2023U == (0x707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) {
            vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__dmem_type_D = 2U;
            vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__alu_fn_D = 0U;
            vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__br_type_D = 0U;
            vlSelf->ProcBase_noparam__DOT__v__DOT__op2_sel_D = 1U;
            ProcBase_noparam__DOT__v__DOT__imm_type_D = 1U;
        } else {
            vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__dmem_type_D = 0U;
            if ((0x1063U == (0x707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) {
                vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__alu_fn_D = 0U;
                vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__br_type_D = 1U;
                vlSelf->ProcBase_noparam__DOT__v__DOT__op2_sel_D = 0U;
                ProcBase_noparam__DOT__v__DOT__imm_type_D = 2U;
            } else {
                if ((0x2073U == (0x707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) {
                    vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__alu_fn_D = 0xcU;
                    vlSelf->ProcBase_noparam__DOT__v__DOT__op2_sel_D = 2U;
                } else {
                    vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__alu_fn_D 
                        = ((0x1073U == (0x707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))
                            ? 0xbU : 1U);
                    vlSelf->ProcBase_noparam__DOT__v__DOT__op2_sel_D = 0U;
                }
                vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__br_type_D = 0U;
                ProcBase_noparam__DOT__v__DOT__imm_type_D = 0U;
            }
        }
        vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__rf_wen_D 
            = ((0x13U != vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D) 
               && ((0x33U == (0xfe00707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D)) 
                   || ((0x2003U == (0x707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D)) 
                       || ((0x2023U != (0x707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D)) 
                           && ((0x1063U != (0x707fU 
                                            & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D)) 
                               && ((0x2073U == (0x707fU 
                                                & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D)) 
                                   || (0x1073U != (0x707fU 
                                                   & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))))))));
        vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__ex_result_sel_D = 1U;
        vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__rs1_en_D 
            = ((0x13U != vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D) 
               && ((0x33U == (0xfe00707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D)) 
                   || ((0x2003U == (0x707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D)) 
                       || ((0x2023U == (0x707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D)) 
                           || ((0x1063U == (0x707fU 
                                            & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D)) 
                               || (0x2073U != (0x707fU 
                                               & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D)))))));
        vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__rs2_en_D 
            = ((0x13U != vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D) 
               && ((0x33U == (0xfe00707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D)) 
                   || ((0x2003U != (0x707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D)) 
                       && ((0x2023U == (0x707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D)) 
                           || ((0x1063U == (0x707fU 
                                            & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D)) 
                               || ((0x2073U != (0x707fU 
                                                & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D)) 
                                   && (0x1073U != (0x707fU 
                                                   & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))))))));
        vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__jump_D = 0U;
    } else {
        vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__dmem_type_D = 0U;
        if (((((((((0x2000033U == (0xfe00707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D)) 
                   | (0x7033U == (0xfe00707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                  | (0x6033U == (0xfe00707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                 | (0x4033U == (0xfe00707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                | (0x2033U == (0xfe00707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
               | (0x3033U == (0xfe00707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
              | (0x40005033U == (0xfe00707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
             | (0x5033U == (0xfe00707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D)))) {
            if ((0x2000033U == (0xfe00707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) {
                vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__alu_fn_D = 0U;
                vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__ex_result_sel_D = 2U;
            } else {
                vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__alu_fn_D 
                    = ((0x7033U == (0xfe00707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))
                        ? 2U : ((0x6033U == (0xfe00707fU 
                                             & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))
                                 ? 3U : ((0x4033U == 
                                          (0xfe00707fU 
                                           & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))
                                          ? 4U : ((0x2033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))
                                                   ? 5U
                                                   : 
                                                  ((0x3033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))
                                                    ? 6U
                                                    : 
                                                   ((0x40005033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))
                                                     ? 7U
                                                     : 8U))))));
                vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__ex_result_sel_D = 1U;
            }
            vlSelf->ProcBase_noparam__DOT__v__DOT__op2_sel_D = 0U;
            ProcBase_noparam__DOT__v__DOT__imm_type_D = 0U;
            vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__jump_D = 0U;
        } else if (((((((((0x1033U == (0xfe00707fU 
                                       & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D)) 
                          | (0x13U == (0x707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                         | (0x6013U == (0x707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                        | (0x4013U == (0x707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                       | (0x7013U == (0x707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                      | (0x2013U == (0x707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                     | (0x3013U == (0x707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                    | (0x40005013U == (0xfe00707fU 
                                       & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D)))) {
            if ((0x1033U == (0xfe00707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) {
                vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__alu_fn_D = 9U;
                vlSelf->ProcBase_noparam__DOT__v__DOT__op2_sel_D = 0U;
            } else {
                vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__alu_fn_D 
                    = ((0x13U == (0x707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))
                        ? 0U : ((0x6013U == (0x707fU 
                                             & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))
                                 ? 3U : ((0x4013U == 
                                          (0x707fU 
                                           & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))
                                          ? 4U : ((0x7013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))
                                                   ? 2U
                                                   : 
                                                  ((0x2013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))
                                                    ? 5U
                                                    : 
                                                   ((0x3013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))
                                                     ? 6U
                                                     : 7U))))));
                vlSelf->ProcBase_noparam__DOT__v__DOT__op2_sel_D = 1U;
            }
            ProcBase_noparam__DOT__v__DOT__imm_type_D = 0U;
            vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__ex_result_sel_D = 1U;
            vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__jump_D = 0U;
        } else if ((0x5013U == (0xfe00707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) {
            vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__alu_fn_D = 8U;
            vlSelf->ProcBase_noparam__DOT__v__DOT__op2_sel_D = 1U;
            ProcBase_noparam__DOT__v__DOT__imm_type_D = 0U;
            vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__ex_result_sel_D = 1U;
            vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__jump_D = 0U;
        } else if ((0x1013U == (0xfe00707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) {
            vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__alu_fn_D = 9U;
            vlSelf->ProcBase_noparam__DOT__v__DOT__op2_sel_D = 1U;
            ProcBase_noparam__DOT__v__DOT__imm_type_D = 0U;
            vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__ex_result_sel_D = 1U;
            vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__jump_D = 0U;
        } else if ((0x37U == (0x7fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) {
            vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__alu_fn_D = 0xcU;
            vlSelf->ProcBase_noparam__DOT__v__DOT__op2_sel_D = 1U;
            ProcBase_noparam__DOT__v__DOT__imm_type_D = 3U;
            vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__ex_result_sel_D = 1U;
            vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__jump_D = 0U;
        } else {
            vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__alu_fn_D = 0U;
            if ((0x17U == (0x7fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) {
                vlSelf->ProcBase_noparam__DOT__v__DOT__op2_sel_D = 1U;
                ProcBase_noparam__DOT__v__DOT__imm_type_D = 3U;
                vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__ex_result_sel_D = 1U;
                vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__jump_D = 0U;
            } else if ((0x6fU == (0x7fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) {
                vlSelf->ProcBase_noparam__DOT__v__DOT__op2_sel_D = 0U;
                ProcBase_noparam__DOT__v__DOT__imm_type_D = 4U;
                vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__ex_result_sel_D = 0U;
                vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__jump_D = 1U;
            } else {
                if ((0x67U == (0x707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) {
                    vlSelf->ProcBase_noparam__DOT__v__DOT__op2_sel_D = 1U;
                    vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__ex_result_sel_D = 0U;
                    vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__jump_D = 2U;
                } else {
                    vlSelf->ProcBase_noparam__DOT__v__DOT__op2_sel_D = 0U;
                    vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__ex_result_sel_D = 1U;
                    vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__jump_D = 0U;
                }
                ProcBase_noparam__DOT__v__DOT__imm_type_D = 0U;
            }
        }
        vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__br_type_D = 0U;
        vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__rf_wen_D 
            = (((((((((0x2000033U == (0xfe00707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D)) 
                      | (0x7033U == (0xfe00707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                     | (0x6033U == (0xfe00707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                    | (0x4033U == (0xfe00707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                   | (0x2033U == (0xfe00707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                  | (0x3033U == (0xfe00707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                 | (0x40005033U == (0xfe00707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                | (0x5033U == (0xfe00707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
               || (((((((((0x1033U == (0xfe00707fU 
                                       & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D)) 
                          | (0x13U == (0x707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                         | (0x6013U == (0x707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                        | (0x4013U == (0x707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                       | (0x7013U == (0x707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                      | (0x2013U == (0x707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                     | (0x3013U == (0x707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                    | (0x40005013U == (0xfe00707fU 
                                       & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                   || ((0x5013U == (0xfe00707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D)) 
                       || ((0x1013U == (0xfe00707fU 
                                        & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D)) 
                           || ((0x37U == (0x7fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D)) 
                               || ((0x17U == (0x7fU 
                                              & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D)) 
                                   || ((0x6fU == (0x7fU 
                                                  & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D)) 
                                       || (0x67U == 
                                           (0x707fU 
                                            & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D)))))))));
        vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__rs1_en_D 
            = (((((((((0x2000033U == (0xfe00707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D)) 
                      | (0x7033U == (0xfe00707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                     | (0x6033U == (0xfe00707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                    | (0x4033U == (0xfe00707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                   | (0x2033U == (0xfe00707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                  | (0x3033U == (0xfe00707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                 | (0x40005033U == (0xfe00707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                | (0x5033U == (0xfe00707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
               || (((((((((0x1033U == (0xfe00707fU 
                                       & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D)) 
                          | (0x13U == (0x707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                         | (0x6013U == (0x707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                        | (0x4013U == (0x707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                       | (0x7013U == (0x707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                      | (0x2013U == (0x707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                     | (0x3013U == (0x707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                    | (0x40005013U == (0xfe00707fU 
                                       & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                   || ((0x5013U == (0xfe00707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D)) 
                       || ((0x1013U == (0xfe00707fU 
                                        & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D)) 
                           || ((0x37U != (0x7fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D)) 
                               && ((0x17U != (0x7fU 
                                              & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D)) 
                                   && ((0x6fU != (0x7fU 
                                                  & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D)) 
                                       && (0x67U == 
                                           (0x707fU 
                                            & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D)))))))));
        vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__rs2_en_D 
            = (((((((((0x2000033U == (0xfe00707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D)) 
                      | (0x7033U == (0xfe00707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                     | (0x6033U == (0xfe00707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                    | (0x4033U == (0xfe00707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                   | (0x2033U == (0xfe00707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                  | (0x3033U == (0xfe00707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                 | (0x40005033U == (0xfe00707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                | (0x5033U == (0xfe00707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
               || (((((((((0x1033U == (0xfe00707fU 
                                       & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D)) 
                          | (0x13U == (0x707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                         | (0x6013U == (0x707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                        | (0x4013U == (0x707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                       | (0x7013U == (0x707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                      | (0x2013U == (0x707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                     | (0x3013U == (0x707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                    | (0x40005013U == (0xfe00707fU 
                                       & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                   && (0x1033U == (0xfe00707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))));
    }
    vlSelf->ProcBase_noparam__DOT__v__DOT__op1_sel_D 
        = ((1U & (~ ((((((((0x13U == vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D) 
                           | (0x33U == (0xfe00707fU 
                                        & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                          | (0x2003U == (0x707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                         | (0x2023U == (0x707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                        | (0x1063U == (0x707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                       | (0x2073U == (0x707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                      | (0x1073U == (0x707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                     | (0x40000033U == (0xfe00707fU 
                                        & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))))) 
           && ((1U & (~ ((((((((0x2000033U == (0xfe00707fU 
                                               & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D)) 
                               | (0x7033U == (0xfe00707fU 
                                              & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                              | (0x6033U == (0xfe00707fU 
                                             & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                             | (0x4033U == (0xfe00707fU 
                                            & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                            | (0x2033U == (0xfe00707fU 
                                           & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                           | (0x3033U == (0xfe00707fU 
                                          & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                          | (0x40005033U == (0xfe00707fU 
                                             & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                         | (0x5033U == (0xfe00707fU 
                                        & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))))) 
               && ((1U & (~ ((((((((0x1033U == (0xfe00707fU 
                                                & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D)) 
                                   | (0x13U == (0x707fU 
                                                & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                                  | (0x6013U == (0x707fU 
                                                 & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                                 | (0x4013U == (0x707fU 
                                                & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                                | (0x7013U == (0x707fU 
                                               & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                               | (0x2013U == (0x707fU 
                                              & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                              | (0x3013U == (0x707fU 
                                             & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                             | (0x40005013U == (0xfe00707fU 
                                                & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))))) 
                   && ((0x5013U != (0xfe00707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D)) 
                       && ((0x1013U != (0xfe00707fU 
                                        & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D)) 
                           && ((0x37U != (0x7fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D)) 
                               && (0x17U == (0x7fU 
                                             & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))))))));
    vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__wb_result_sel_D 
        = (((((((((0x13U == vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D) 
                  | (0x33U == (0xfe00707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                 | (0x2003U == (0x707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                | (0x2023U == (0x707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
               | (0x1063U == (0x707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
              | (0x2073U == (0x707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
             | (0x1073U == (0x707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
            | (0x40000033U == (0xfe00707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
           && ((0x13U != vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D) 
               && ((0x33U != (0xfe00707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D)) 
                   && (0x2003U == (0x707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D)))));
    vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__b_mux_sel = 0U;
    vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__a_mux_sel = 0U;
    vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__result_en = 1U;
    vlSelf->stats_en = (0U != vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__stats_en_W);
    vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vcellinp__b_mux__in0 
        = ((0U == (0x1fU & (vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D 
                            >> 0xfU))) ? 0U : vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile
           [(0x1fU & (vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D 
                      >> 0xfU))]);
    vlSelf->proc2mngr_msg = ((IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)
                              ? vlSelf->ProcBase_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore
                              : ((IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)
                                  ? 0U : vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__wb_result_W));
    ProcBase_noparam__DOT__v__DOT__ctrl__DOT__csrw_D 
        = (((((((((0x13U == vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D) 
                  | (0x33U == (0xfe00707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                 | (0x2003U == (0x707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                | (0x2023U == (0x707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
               | (0x1063U == (0x707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
              | (0x2073U == (0x707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
             | (0x1073U == (0x707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
            | (0x40000033U == (0xfe00707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
           && ((0x13U != vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D) 
               && ((0x33U != (0xfe00707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D)) 
                   && ((0x2003U != (0x707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D)) 
                       && ((0x2023U != (0x707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D)) 
                           && ((0x1063U != (0x707fU 
                                            & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D)) 
                               && ((0x2073U != (0x707fU 
                                                & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D)) 
                                   && (0x1073U == (0x707fU 
                                                   & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D)))))))));
    vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__rf_rdata1_D 
        = ((0U == (0x1fU & (vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D 
                            >> 0x14U))) ? 0U : vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile
           [(0x1fU & (vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D 
                      >> 0x14U))]);
    vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__mul_D 
        = ((1U & (~ ((((((((0x13U == vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D) 
                           | (0x33U == (0xfe00707fU 
                                        & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                          | (0x2003U == (0x707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                         | (0x2023U == (0x707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                        | (0x1063U == (0x707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                       | (0x2073U == (0x707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                      | (0x1073U == (0x707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                     | (0x40000033U == (0xfe00707fU 
                                        & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))))) 
           && (((((((((0x2000033U == (0xfe00707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D)) 
                      | (0x7033U == (0xfe00707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                     | (0x6033U == (0xfe00707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                    | (0x4033U == (0xfe00707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                   | (0x2033U == (0xfe00707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                  | (0x3033U == (0xfe00707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                 | (0x40005033U == (0xfe00707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                | (0x5033U == (0xfe00707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
               && (0x2000033U == (0xfe00707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))));
    ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding 
        = (((0U == vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg) 
            << 0x1fU) | (((0U == (0x7fffffffU & vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)) 
                          << 0x1eU) | (((0U == (0x3fffffffU 
                                                & vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)) 
                                        << 0x1dU) | 
                                       (((0U == (0x1fffffffU 
                                                 & vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)) 
                                         << 0x1cU) 
                                        | (((0U == 
                                             (0xfffffffU 
                                              & vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)) 
                                            << 0x1bU) 
                                           | (((0U 
                                                == 
                                                (0x7ffffffU 
                                                 & vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)) 
                                               << 0x1aU) 
                                              | (((0U 
                                                   == 
                                                   (0x3ffffffU 
                                                    & vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)) 
                                                  << 0x19U) 
                                                 | (((0U 
                                                      == 
                                                      (0x1ffffffU 
                                                       & vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)) 
                                                     << 0x18U) 
                                                    | (((0U 
                                                         == 
                                                         (0xffffffU 
                                                          & vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)) 
                                                        << 0x17U) 
                                                       | (((0U 
                                                            == 
                                                            (0x7fffffU 
                                                             & vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)) 
                                                           << 0x16U) 
                                                          | (((0U 
                                                               == 
                                                               (0x3fffffU 
                                                                & vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)) 
                                                              << 0x15U) 
                                                             | (((0U 
                                                                  == 
                                                                  (0x1fffffU 
                                                                   & vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)) 
                                                                 << 0x14U) 
                                                                | (((0U 
                                                                     == 
                                                                     (0xfffffU 
                                                                      & vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)) 
                                                                    << 0x13U) 
                                                                   | (((0U 
                                                                        == 
                                                                        (0x7ffffU 
                                                                         & vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)) 
                                                                       << 0x12U) 
                                                                      | (((0U 
                                                                           == 
                                                                           (0x3ffffU 
                                                                            & vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)) 
                                                                          << 0x11U) 
                                                                         | (((0U 
                                                                              == 
                                                                              (0x1ffffU 
                                                                               & vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)) 
                                                                             << 0x10U) 
                                                                            | (((0U 
                                                                                == 
                                                                                (0xffffU 
                                                                                & vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)) 
                                                                                << 0xfU) 
                                                                               | (((0U 
                                                                                == 
                                                                                (0x7fffU 
                                                                                & vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)) 
                                                                                << 0xeU) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0x3fffU 
                                                                                & vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)) 
                                                                                << 0xdU) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0x1fffU 
                                                                                & vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)) 
                                                                                << 0xcU) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0xfffU 
                                                                                & vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)) 
                                                                                << 0xbU) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0x7ffU 
                                                                                & vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)) 
                                                                                << 0xaU) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)) 
                                                                                << 9U) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0x1ffU 
                                                                                & vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)) 
                                                                                << 8U) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0xffU 
                                                                                & vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)) 
                                                                                << 7U) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)) 
                                                                                << 6U) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)) 
                                                                                << 5U) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)) 
                                                                                << 4U) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0xfU 
                                                                                & vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)) 
                                                                                << 3U) 
                                                                                | (((0U 
                                                                                == 
                                                                                (7U 
                                                                                & vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)) 
                                                                                << 2U) 
                                                                                | (((0U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (~ vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)))))))))))))))))))))))))))))))));
    if (((IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__val_X) 
         & (1U == (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__br_type_X)))) {
        ProcBase_noparam__DOT__v__DOT__ctrl__DOT__pc_sel_X = 1U;
        vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__pc_redirect_X 
            = (vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__op1_X 
               != vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__op2_X);
    }
    ProcBase_noparam__DOT__v__DOT__ctrl__DOT__pc_sel_X 
        = (((IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__val_X) 
            & (2U == (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__jump_X)))
            ? 3U : 0U);
    vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__alu_result_X 
        = ((8U & (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__alu_fn_X))
            ? ((4U & (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__alu_fn_X))
                ? ((2U & (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__alu_fn_X))
                    ? 0U : ((1U & (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__alu_fn_X))
                             ? 0U : vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__op2_X))
                : ((2U & (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__alu_fn_X))
                    ? ((1U & (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__alu_fn_X))
                        ? vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__op1_X
                        : 0U) : ((1U & (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__alu_fn_X))
                                  ? (vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__op1_X 
                                     << (0x1fU & vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__op2_X))
                                  : (vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__op1_X 
                                     >> (0x1fU & vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__op2_X)))))
            : ((4U & (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__alu_fn_X))
                ? ((2U & (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__alu_fn_X))
                    ? ((1U & (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__alu_fn_X))
                        ? VL_SHIFTRS_III(32,32,5, vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__op1_X, 
                                         (0x1fU & vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__op2_X))
                        : (vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__op1_X 
                           < vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__op2_X))
                    : ((1U & (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__alu_fn_X))
                        ? VL_LTS_III(32, vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__op1_X, vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__op2_X)
                        : (vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__op1_X 
                           ^ vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__op2_X)))
                : ((2U & (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__alu_fn_X))
                    ? ((1U & (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__alu_fn_X))
                        ? (vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__op1_X 
                           | vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__op2_X)
                        : (vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__op1_X 
                           & vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__op2_X))
                    : ((1U & (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__alu_fn_X))
                        ? (vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__op1_X 
                           - vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__op2_X)
                        : (vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__op1_X 
                           + vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__op2_X)))));
    vlSelf->ProcBase_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->ProcBase_noparam__DOT__v__DOT__imul_req_rdy_D = 0U;
    vlSelf->ProcBase_noparam__DOT__v__DOT__rf_wen_W 
        = ((IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__rf_wen_pending_W) 
           & (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__val_W));
    ProcBase_noparam__DOT__v__DOT__ctrl__DOT__csrr_D 
        = (((((((((0x13U == vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D) 
                  | (0x33U == (0xfe00707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                 | (0x2003U == (0x707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
                | (0x2023U == (0x707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
               | (0x1063U == (0x707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
              | (0x2073U == (0x707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
             | (0x1073U == (0x707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
            | (0x40000033U == (0xfe00707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))) 
           && ((0x13U != vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D) 
               && ((0x33U != (0xfe00707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D)) 
                   && ((0x2003U != (0x707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D)) 
                       && ((0x2023U != (0x707fU & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D)) 
                           && ((0x1063U != (0x707fU 
                                            & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D)) 
                               && (0x2073U == (0x707fU 
                                               & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D))))))));
    vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__pc_redirect_X 
        = ((IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__val_X) 
           & (2U == (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__jump_X)));
    vlSelf->ProcBase_noparam__DOT__v__DOT__imul_resp_val_X = 0U;
    ProcBase_noparam__DOT__v__DOT__ctrl__DOT__ostall_M 
        = ((IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__val_M) 
           & ((~ (IData)(vlSelf->dmem_respstream_val)) 
              & (0U != (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__dmem_type_M))));
    vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__ostall_W 
        = ((IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__val_W) 
           & ((IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__proc2mngr_val_W) 
              & (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__proc2mngr_val_D = 0U;
    if (((IData)(ProcBase_noparam__DOT__v__DOT__ctrl__DOT__csrw_D) 
         & (0x7c0U == (vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D 
                       >> 0x14U)))) {
        vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__proc2mngr_val_D = 1U;
    }
    vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__stats_en_wen_D = 0U;
    if (((IData)(ProcBase_noparam__DOT__v__DOT__ctrl__DOT__csrw_D) 
         & (0x7c1U == (vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D 
                       >> 0x14U)))) {
        vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__stats_en_wen_D = 1U;
    }
    vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT____Vcellout__max_extractor__out 
        = (((((((((0x80000000U == (0x80000000U & ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding)) 
                  | (0x40000000U == (0xc0000000U & ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))) 
                 | (0x20000000U == (0xe0000000U & ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))) 
                | (0x10000000U == (0xf0000000U & ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))) 
               | (0x8000000U == (0xf8000000U & ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))) 
              | (0x4000000U == (0xfc000000U & ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))) 
             | (0x2000000U == (0xfe000000U & ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))) 
            | (0x1000000U == (0xff000000U & ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding)))
            ? ((0x80000000U == (0x80000000U & ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                ? 0x1fU : ((0x40000000U == (0xc0000000U 
                                            & ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                            ? 0x1eU : ((0x20000000U 
                                        == (0xe0000000U 
                                            & ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                                        ? 0x1dU : (
                                                   (0x10000000U 
                                                    == 
                                                    (0xf0000000U 
                                                     & ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                                                    ? 0x1cU
                                                    : 
                                                   ((0x8000000U 
                                                     == 
                                                     (0xf8000000U 
                                                      & ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                                                     ? 0x1bU
                                                     : 
                                                    ((0x4000000U 
                                                      == 
                                                      (0xfc000000U 
                                                       & ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                                                      ? 0x1aU
                                                      : 
                                                     ((0x2000000U 
                                                       == 
                                                       (0xfe000000U 
                                                        & ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                                                       ? 0x19U
                                                       : 0x18U)))))))
            : (((((((((0x800000U == (0xff800000U & ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding)) 
                      | (0x400000U == (0xffc00000U 
                                       & ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))) 
                     | (0x200000U == (0xffe00000U & ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))) 
                    | (0x100000U == (0xfff00000U & ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))) 
                   | (0x80000U == (0xfff80000U & ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))) 
                  | (0x40000U == (0xfffc0000U & ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))) 
                 | (0x20000U == (0xfffe0000U & ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))) 
                | (0x10000U == (0xffff0000U & ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding)))
                ? ((0x800000U == (0xff800000U & ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                    ? 0x17U : ((0x400000U == (0xffc00000U 
                                              & ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                                ? 0x16U : ((0x200000U 
                                            == (0xffe00000U 
                                                & ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                                            ? 0x15U
                                            : ((0x100000U 
                                                == 
                                                (0xfff00000U 
                                                 & ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                                                ? 0x14U
                                                : (
                                                   (0x80000U 
                                                    == 
                                                    (0xfff80000U 
                                                     & ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                                                    ? 0x13U
                                                    : 
                                                   ((0x40000U 
                                                     == 
                                                     (0xfffc0000U 
                                                      & ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                                                     ? 0x12U
                                                     : 
                                                    ((0x20000U 
                                                      == 
                                                      (0xfffe0000U 
                                                       & ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                                                      ? 0x11U
                                                      : 0x10U)))))))
                : (((((((((0x8000U == (0xffff8000U 
                                       & ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding)) 
                          | (0x4000U == (0xffffc000U 
                                         & ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))) 
                         | (0x2000U == (0xffffe000U 
                                        & ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))) 
                        | (0x1000U == (0xfffff000U 
                                       & ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))) 
                       | (0x800U == (0xfffff800U & ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))) 
                      | (0x400U == (0xfffffc00U & ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))) 
                     | (0x200U == (0xfffffe00U & ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))) 
                    | (0x100U == (0xffffff00U & ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding)))
                    ? ((0x8000U == (0xffff8000U & ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                        ? 0xfU : ((0x4000U == (0xffffc000U 
                                               & ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                                   ? 0xeU : ((0x2000U 
                                              == (0xffffe000U 
                                                  & ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                                              ? 0xdU
                                              : ((0x1000U 
                                                  == 
                                                  (0xfffff000U 
                                                   & ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                                                  ? 0xcU
                                                  : 
                                                 ((0x800U 
                                                   == 
                                                   (0xfffff800U 
                                                    & ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                                                   ? 0xbU
                                                   : 
                                                  ((0x400U 
                                                    == 
                                                    (0xfffffc00U 
                                                     & ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                                                    ? 0xaU
                                                    : 
                                                   ((0x200U 
                                                     == 
                                                     (0xfffffe00U 
                                                      & ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                                                     ? 9U
                                                     : 8U)))))))
                    : (((((((((0x80U == (0xffffff80U 
                                         & ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding)) 
                              | (0x40U == (0xffffffc0U 
                                           & ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))) 
                             | (0x20U == (0xffffffe0U 
                                          & ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))) 
                            | (0x10U == (0xfffffff0U 
                                         & ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))) 
                           | (8U == (0xfffffff8U & ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))) 
                          | (4U == (0xfffffffcU & ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))) 
                         | (2U == (0xfffffffeU & ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))) 
                        | (1U == ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                        ? ((0x80U == (0xffffff80U & ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                            ? 7U : ((0x40U == (0xffffffc0U 
                                               & ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                                     ? 6U : ((0x20U 
                                              == (0xffffffe0U 
                                                  & ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                                              ? 5U : 
                                             ((0x10U 
                                               == (0xfffffff0U 
                                                   & ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                                               ? 4U
                                               : ((8U 
                                                   == 
                                                   (0xfffffff8U 
                                                    & ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                                                   ? 3U
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0xfffffffcU 
                                                     & ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                                                    ? 2U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0xfffffffeU 
                                                      & ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                                                     ? 1U
                                                     : 0U)))))))
                        : 0U))));
    vlSelf->ProcBase_noparam__DOT__v__DOT____Vcellinp__dmem_queue__enq_msg[0U] 
        = (IData)((QData)((IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__dmem_reqstream_enq_msg_data)));
    vlSelf->ProcBase_noparam__DOT__v__DOT____Vcellinp__dmem_queue__enq_msg[1U] 
        = ((vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__alu_result_X 
            << 2U) | (IData)(((QData)((IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__dmem_reqstream_enq_msg_data)) 
                              >> 0x20U)));
    vlSelf->ProcBase_noparam__DOT__v__DOT____Vcellinp__dmem_queue__enq_msg[2U] 
        = ((((1U == (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__dmem_type_X))
              ? 0U : 1U) << 0xaU) | (vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__alu_result_X 
                                     >> 0x1eU));
    vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imm_D 
        = ((4U & (IData)(ProcBase_noparam__DOT__v__DOT__imm_type_D))
            ? ((2U & (IData)(ProcBase_noparam__DOT__v__DOT__imm_type_D))
                ? 0U : ((1U & (IData)(ProcBase_noparam__DOT__v__DOT__imm_type_D))
                         ? 0U : (((- (IData)((vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D 
                                              >> 0x1fU))) 
                                  << 0x14U) | ((0xff000U 
                                                & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D) 
                                               | ((0x800U 
                                                   & (vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D 
                                                      >> 9U)) 
                                                  | ((0x7e0U 
                                                      & (vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D 
                                                         >> 0x14U)) 
                                                     | (0x1eU 
                                                        & (vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D 
                                                           >> 0x14U))))))))
            : ((2U & (IData)(ProcBase_noparam__DOT__v__DOT__imm_type_D))
                ? ((1U & (IData)(ProcBase_noparam__DOT__v__DOT__imm_type_D))
                    ? (0xfffff000U & vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D)
                    : (((- (IData)((vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D 
                                    >> 0x1fU))) << 0xcU) 
                       | ((0x800U & (vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D 
                                     << 4U)) | ((0x7e0U 
                                                 & (vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D 
                                                    >> 0x14U)) 
                                                | (0x1eU 
                                                   & (vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D 
                                                      >> 7U))))))
                : ((1U & (IData)(ProcBase_noparam__DOT__v__DOT__imm_type_D))
                    ? (((- (IData)((vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D 
                                    >> 0x1fU))) << 0xbU) 
                       | ((0x7e0U & (vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D 
                                     >> 0x14U)) | (0x1fU 
                                                   & (vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D 
                                                      >> 7U))))
                    : (((- (IData)((vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D 
                                    >> 0x1fU))) << 0xbU) 
                       | (0x7ffU & (vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D 
                                    >> 0x14U))))));
    vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hfec34484_0_9 
        = ((IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__val_W) 
           & (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__rf_wen_W));
    vlSelf->ProcBase_noparam__DOT__v__DOT__csrr_sel_D = 0U;
    if (((IData)(ProcBase_noparam__DOT__v__DOT__ctrl__DOT__csrr_D) 
         & (0xfc1U == (vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D 
                       >> 0x14U)))) {
        vlSelf->ProcBase_noparam__DOT__v__DOT__csrr_sel_D = 1U;
    }
    if (((IData)(ProcBase_noparam__DOT__v__DOT__ctrl__DOT__csrr_D) 
         & (0xf14U == (vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D 
                       >> 0x14U)))) {
        vlSelf->ProcBase_noparam__DOT__v__DOT__csrr_sel_D = 2U;
    }
    vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__mngr2proc_rdy_D = 0U;
    if (((IData)(ProcBase_noparam__DOT__v__DOT__ctrl__DOT__csrr_D) 
         & (0xfc0U == (vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D 
                       >> 0x14U)))) {
        vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__mngr2proc_rdy_D = 1U;
    }
    if (((IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__val_D) 
         & (1U == (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__jump_D)))) {
        ProcBase_noparam__DOT__v__DOT__ctrl__DOT__pc_redirect_D = 1U;
        ProcBase_noparam__DOT__v__DOT__ctrl__DOT__pc_sel_D = 2U;
    } else {
        ProcBase_noparam__DOT__v__DOT__ctrl__DOT__pc_redirect_D = 0U;
        ProcBase_noparam__DOT__v__DOT__ctrl__DOT__pc_sel_D = 0U;
    }
    vlSelf->ProcBase_noparam__DOT__v__DOT__imul_resp_rdy_X 
        = ((IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__val_X) 
           & ((~ (IData)(ProcBase_noparam__DOT__v__DOT__ctrl__DOT__ostall_M)) 
              & (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__mul_X)));
    vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__stall_W 
        = ((IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__val_W) 
           & (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__ostall_W));
    vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hfec34484_0_7 
        = ((IData)(ProcBase_noparam__DOT__v__DOT__ctrl__DOT__ostall_M) 
           | (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__ostall_W));
    vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_shift 
        = VL_SHIFTL_III(32,32,6, vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg, 
                        (0x3fU & ((IData)(1U) + (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT____Vcellout__max_extractor__out))));
    vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_shift 
        = VL_SHIFTR_III(32,32,6, vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg, 
                        (0x3fU & ((IData)(1U) + (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT____Vcellout__max_extractor__out))));
    if (vlSelf->ProcBase_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full) {
        vlSelf->ProcBase_noparam__DOT__v__DOT____Vcellout__dmem_queue__deq_msg[0U] 
            = vlSelf->ProcBase_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U];
        vlSelf->ProcBase_noparam__DOT__v__DOT____Vcellout__dmem_queue__deq_msg[1U] 
            = vlSelf->ProcBase_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U];
        vlSelf->ProcBase_noparam__DOT__v__DOT____Vcellout__dmem_queue__deq_msg[2U] 
            = vlSelf->ProcBase_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U];
    } else if (vlSelf->ProcBase_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full) {
        vlSelf->ProcBase_noparam__DOT__v__DOT____Vcellout__dmem_queue__deq_msg[0U] = 0U;
        vlSelf->ProcBase_noparam__DOT__v__DOT____Vcellout__dmem_queue__deq_msg[1U] = 0U;
        vlSelf->ProcBase_noparam__DOT__v__DOT____Vcellout__dmem_queue__deq_msg[2U] = 0U;
    } else {
        vlSelf->ProcBase_noparam__DOT__v__DOT____Vcellout__dmem_queue__deq_msg[0U] 
            = vlSelf->ProcBase_noparam__DOT__v__DOT____Vcellinp__dmem_queue__enq_msg[0U];
        vlSelf->ProcBase_noparam__DOT__v__DOT____Vcellout__dmem_queue__deq_msg[1U] 
            = vlSelf->ProcBase_noparam__DOT__v__DOT____Vcellinp__dmem_queue__enq_msg[1U];
        vlSelf->ProcBase_noparam__DOT__v__DOT____Vcellout__dmem_queue__deq_msg[2U] 
            = vlSelf->ProcBase_noparam__DOT__v__DOT____Vcellinp__dmem_queue__enq_msg[2U];
    }
    vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__jal_target_D 
        = (vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__pc_D 
           + vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imm_D);
    vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__op2_D 
        = ((0U == (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__op2_sel_D))
            ? vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__rf_rdata1_D
            : ((1U == (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__op2_sel_D))
                ? vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imm_D
                : ((2U == (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__op2_sel_D))
                    ? ((0U == (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__csrr_sel_D))
                        ? vlSelf->mngr2proc_msg : (
                                                   (1U 
                                                    == (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__csrr_sel_D))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__csrr_sel_D))
                                                     ? vlSelf->core_id
                                                     : 0U)))
                    : 0U)));
    if ((0U == (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__control_unit__DOT__state))) {
        vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__b_mux_sel = 0U;
        vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__a_mux_sel = 0U;
        vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__result_en = 1U;
        vlSelf->ProcBase_noparam__DOT__v__DOT__imul_req_rdy_D = 1U;
    } else if ((1U == (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__control_unit__DOT__state))) {
        vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__b_mux_sel = 1U;
        vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__a_mux_sel = 1U;
        vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__result_en = 1U;
        vlSelf->ProcBase_noparam__DOT__v__DOT__imul_req_rdy_D = 0U;
    } else if ((2U == (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__control_unit__DOT__state))) {
        vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__b_mux_sel = 1U;
        vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__a_mux_sel = 1U;
        vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__result_en = 1U;
        vlSelf->ProcBase_noparam__DOT__v__DOT__imul_req_rdy_D = 0U;
    }
    ProcBase_noparam__DOT__v__DOT__ctrl__DOT__ostall_D 
        = ((IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__val_D) 
           & (((IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__val_D) 
               & ((~ (IData)(vlSelf->mngr2proc_val)) 
                  & (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__mngr2proc_rdy_D))) 
              | (((IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__rs1_en_D) 
                  & ((IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__rf_wen_X) 
                     & ((IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__val_X) 
                        & (((0x1fU & (vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D 
                                      >> 0xfU)) == (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__rf_waddr_X)) 
                           & (0U != (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__rf_waddr_X)))))) 
                 | (((IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__rs1_en_D) 
                     & ((IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__rf_wen_M) 
                        & ((IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__val_M) 
                           & (((0x1fU & (vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D 
                                         >> 0xfU)) 
                               == (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__rf_waddr_M)) 
                              & (0U != (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__rf_waddr_M)))))) 
                    | (((IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__rs1_en_D) 
                        & ((IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hfec34484_0_9) 
                           & (((0x1fU & (vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D 
                                         >> 0xfU)) 
                               == (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__rf_waddr_W)) 
                              & (0U != (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__rf_waddr_W))))) 
                       | (((IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__rs2_en_D) 
                           & (((IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__rf_wen_X) 
                               & ((IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__val_X) 
                                  & (((0x1fU & (vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D 
                                                >> 0x14U)) 
                                      == (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__rf_waddr_X)) 
                                     & (0U != (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__rf_waddr_X))))) 
                              | (((IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__rf_wen_M) 
                                  & ((IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__val_M) 
                                     & (((0x1fU & (vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D 
                                                   >> 0x14U)) 
                                         == (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__rf_waddr_M)) 
                                        & (0U != (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__rf_waddr_M))))) 
                                 | ((IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hfec34484_0_9) 
                                    & (((0x1fU & (vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D 
                                                  >> 0x14U)) 
                                        == (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__rf_waddr_W)) 
                                       & (0U != (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__rf_waddr_W))))))) 
                          | ((~ (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__imul_req_rdy_D)) 
                             & (2U == (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__ex_result_sel_D)))))))));
    ProcBase_noparam__DOT__v__DOT__pc_sel_F = ((IData)(ProcBase_noparam__DOT__v__DOT__ctrl__DOT__pc_redirect_D)
                                                ? (IData)(ProcBase_noparam__DOT__v__DOT__ctrl__DOT__pc_sel_D)
                                                : ((IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__pc_redirect_X)
                                                    ? (IData)(ProcBase_noparam__DOT__v__DOT__ctrl__DOT__pc_sel_X)
                                                    : 0U));
    vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__result_mux_sel = 1U;
    ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__add_mux_sel = 0U;
    if ((0U == (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__control_unit__DOT__state))) {
        vlSelf->ProcBase_noparam__DOT__v__DOT__imul_resp_val_X = 0U;
        vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__result_mux_sel = 1U;
        ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__add_mux_sel = 0U;
    } else if ((1U == (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__control_unit__DOT__state))) {
        vlSelf->ProcBase_noparam__DOT__v__DOT__imul_resp_val_X = 0U;
        vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__result_mux_sel = 1U;
        vlSelf->__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__control_unit__DOT__cs__110__cs_add_mux_sel 
            = (1U & vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg);
        ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__add_mux_sel 
            = vlSelf->__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__control_unit__DOT__cs__110__cs_add_mux_sel;
    } else if ((2U == (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__control_unit__DOT__state))) {
        vlSelf->ProcBase_noparam__DOT__v__DOT__imul_resp_val_X = 1U;
        vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__result_mux_sel 
            = (1U & (~ (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__imul_resp_rdy_X)));
        if (vlSelf->ProcBase_noparam__DOT__v__DOT__imul_resp_rdy_X) {
            vlSelf->__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__control_unit__DOT__cs__111__cs_add_mux_sel 
                = (1U & vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg);
            ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__add_mux_sel 
                = vlSelf->__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__control_unit__DOT__cs__111__cs_add_mux_sel;
        } else {
            vlSelf->__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__control_unit__DOT__cs__112__cs_add_mux_sel 
                = (1U & vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg);
            ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__add_mux_sel 
                = vlSelf->__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__control_unit__DOT__cs__112__cs_add_mux_sel;
        }
    }
    vlSelf->commit_inst = ((~ (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__stall_W)) 
                           & (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__val_W));
    vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__stall_M 
        = ((IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__val_M) 
           & (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hfec34484_0_7));
    __VdfgRegularize_hd87f99a1_0_0 = (((IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__val_X) 
                                       & (((IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
                                           & (0U != (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__dmem_type_X))) 
                                          | ((~ (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__imul_resp_val_X)) 
                                             & (2U 
                                                == (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ex_result_sel_X))))) 
                                      | (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hfec34484_0_7));
    vlSelf->dmem_reqstream_msg[0U] = vlSelf->ProcBase_noparam__DOT__v__DOT____Vcellout__dmem_queue__deq_msg[0U];
    vlSelf->dmem_reqstream_msg[1U] = vlSelf->ProcBase_noparam__DOT__v__DOT____Vcellout__dmem_queue__deq_msg[1U];
    vlSelf->dmem_reqstream_msg[2U] = vlSelf->ProcBase_noparam__DOT__v__DOT____Vcellout__dmem_queue__deq_msg[2U];
    vlSelf->ProcBase_noparam__DOT__v__DOT__imul_req_val_D 
        = ((~ ((IData)(ProcBase_noparam__DOT__v__DOT__ctrl__DOT__ostall_D) 
               | (1U == (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__jump_D)))) 
           & (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__mul_D));
    vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__pc_next_F 
        = ((2U & (IData)(ProcBase_noparam__DOT__v__DOT__pc_sel_F))
            ? ((1U & (IData)(ProcBase_noparam__DOT__v__DOT__pc_sel_F))
                ? vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__alu_result_X
                : vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__jal_target_D)
            : ((1U & (IData)(ProcBase_noparam__DOT__v__DOT__pc_sel_F))
                ? vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__br_target_X
                : ((IData)(4U) + vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__pc_F)));
    vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__add_mux_reg 
        = ((IData)(ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__add_mux_sel)
            ? ((IData)(ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__add_mux_sel)
                ? (vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg 
                   + vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg)
                : 0U) : vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg);
    vlSelf->ProcBase_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq 
        = ((~ (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->commit_inst) & (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__proc2mngr_val_W)));
    vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__next_val_M 
        = ((~ (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__stall_M)) 
           & (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__val_M));
    ProcBase_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hfec34484_0_8 
        = ((IData)(ProcBase_noparam__DOT__v__DOT__ctrl__DOT__ostall_D) 
           | (IData)(__VdfgRegularize_hd87f99a1_0_0));
    vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__stall_X 
        = ((IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__val_X) 
           & (IData)(__VdfgRegularize_hd87f99a1_0_0));
    __Vtableidx1 = (((IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__imul_resp_rdy_X) 
                     << 4U) | ((8U & (((IData)(1U) 
                                       + (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT____Vcellout__max_extractor__out)) 
                                      >> 2U)) | (((IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__imul_req_val_D) 
                                                  << 2U) 
                                                 | (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__control_unit__DOT__state))));
    vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__control_unit__DOT__state_next 
        = VProcBase_noparam__ConstPool__TABLE_hcd563ae5_0
        [__Vtableidx1];
    if (vlSelf->ProcBase_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__bypass_mux_sel) {
        vlSelf->ProcBase_noparam__DOT__v__DOT____Vcellout__imem_queue__deq_msg[0U] = 0U;
        if (vlSelf->ProcBase_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__bypass_mux_sel) {
            vlSelf->ProcBase_noparam__DOT__v__DOT____Vcellout__imem_queue__deq_msg[1U] 
                = (vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__pc_next_F 
                   << 2U);
            vlSelf->ProcBase_noparam__DOT__v__DOT____Vcellout__imem_queue__deq_msg[2U] 
                = (vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__pc_next_F 
                   >> 0x1eU);
        } else {
            vlSelf->ProcBase_noparam__DOT__v__DOT____Vcellout__imem_queue__deq_msg[1U] = 0U;
            vlSelf->ProcBase_noparam__DOT__v__DOT____Vcellout__imem_queue__deq_msg[2U] = 0U;
        }
    } else {
        vlSelf->ProcBase_noparam__DOT__v__DOT____Vcellout__imem_queue__deq_msg[0U] 
            = vlSelf->ProcBase_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
            [vlSelf->ProcBase_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
        vlSelf->ProcBase_noparam__DOT__v__DOT____Vcellout__imem_queue__deq_msg[1U] 
            = vlSelf->ProcBase_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
            [vlSelf->ProcBase_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
        vlSelf->ProcBase_noparam__DOT__v__DOT____Vcellout__imem_queue__deq_msg[2U] 
            = vlSelf->ProcBase_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
            [vlSelf->ProcBase_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    }
    vlSelf->proc2mngr_val = ((IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
                             | (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    vlSelf->dmem_respstream_rdy = ((IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__next_val_M) 
                                   & (0U != (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__dmem_type_M)));
    vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__stall_D 
        = ((IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__val_D) 
           & (IData)(ProcBase_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hfec34484_0_8));
    vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__next_val_X 
        = ((~ (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__stall_X)) 
           & (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__val_X));
    vlSelf->imem_reqstream_msg[0U] = vlSelf->ProcBase_noparam__DOT__v__DOT____Vcellout__imem_queue__deq_msg[0U];
    vlSelf->imem_reqstream_msg[1U] = vlSelf->ProcBase_noparam__DOT__v__DOT____Vcellout__imem_queue__deq_msg[1U];
    vlSelf->imem_reqstream_msg[2U] = vlSelf->ProcBase_noparam__DOT__v__DOT____Vcellout__imem_queue__deq_msg[2U];
    ProcBase_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((IData)(vlSelf->proc2mngr_rdy) & (IData)(vlSelf->proc2mngr_val));
    vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hfec34484_0_10 
        = ((~ (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__stall_D)) 
           & (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__val_D));
    ProcBase_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq 
        = ((~ (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__next_val_X) 
              & (0U != (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__dmem_type_X))));
    ProcBase_noparam__DOT__v__DOT__ctrl__DOT__osquash_X 
        = ((IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__next_val_X) 
           & ((IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__pc_redirect_X) 
              | (2U == (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__jump_X))));
    vlSelf->ProcBase_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__write_en 
        = ((~ ((~ (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
               & ((IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
                  & (IData)(ProcBase_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)))) 
           & (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    vlSelf->mngr2proc_rdy = ((IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hfec34484_0_10) 
                             & (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__mngr2proc_rdy_D));
    vlSelf->dmem_reqstream_val = ((IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
                                  | (IData)(ProcBase_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__squash_D 
        = ((IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__val_D) 
           & (IData)(ProcBase_noparam__DOT__v__DOT__ctrl__DOT__osquash_X));
    vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__squash_F 
        = ((IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__val_F) 
           & ((1U == (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__jump_D)) 
              | (IData)(ProcBase_noparam__DOT__v__DOT__ctrl__DOT__osquash_X)));
    vlSelf->ProcBase_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = ((~ (IData)(ProcBase_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
           & ((IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__write_en) 
              | (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    ProcBase_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((IData)(vlSelf->dmem_reqstream_rdy) & (IData)(vlSelf->dmem_reqstream_val));
    vlSelf->ProcBase_noparam__DOT__v__DOT__reg_en_D 
        = (1U & ((~ (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__stall_D)) 
                 | (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__squash_D)));
    ProcBase_noparam__DOT__v__DOT__imem_respstream_drop_val 
        = ((1U & (~ (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__imem_respstream_drop_unit__DOT__state))) 
           && ((IData)(vlSelf->imem_respstream_val) 
               & (~ (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__squash_F))));
    vlSelf->ProcBase_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__write_en 
        = ((~ ((~ (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
               & ((IData)(ProcBase_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
                  & (IData)(ProcBase_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)))) 
           & (IData)(ProcBase_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__stall_F 
        = ((IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__val_F) 
           & (((~ (IData)(ProcBase_noparam__DOT__v__DOT__imem_respstream_drop_val)) 
               & (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__val_F)) 
              | (IData)(ProcBase_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hfec34484_0_8)));
    vlSelf->ProcBase_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = ((~ (IData)(ProcBase_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
           & ((IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__write_en) 
              | (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->ProcBase_noparam__DOT__v__DOT__imem_respstream_drop_rdy 
        = (1U & ((~ (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__stall_F)) 
                 | (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__squash_F)));
    vlSelf->imem_respstream_rdy = ((IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__imem_respstream_drop_unit__DOT__state) 
                                   || (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__imem_respstream_drop_rdy));
    ProcBase_noparam__DOT__v__DOT__imem_reqstream_enq_val 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__imem_respstream_drop_rdy));
    ProcBase_noparam__DOT__v__DOT__imem_respstream_drop_unit__DOT____VdfgExtracted_hff9b16a6__0 
        = (1U & (~ ((IData)(vlSelf->imem_respstream_rdy) 
                    & (IData)(vlSelf->imem_respstream_val))));
    ProcBase_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq 
        = ((~ (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & (IData)(ProcBase_noparam__DOT__v__DOT__imem_reqstream_enq_val));
    vlSelf->imem_reqstream_val = (1U & ((~ (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__bypass_mux_sel)) 
                                        | ((IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__bypass_mux_sel) 
                                           & (IData)(ProcBase_noparam__DOT__v__DOT__imem_reqstream_enq_val))));
    vlSelf->ProcBase_noparam__DOT__v__DOT__imem_respstream_drop_unit__DOT__next_state 
        = ((IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__imem_respstream_drop_unit__DOT__state)
            ? (IData)(ProcBase_noparam__DOT__v__DOT__imem_respstream_drop_unit__DOT____VdfgExtracted_hff9b16a6__0)
            : ((IData)(ProcBase_noparam__DOT__v__DOT__imem_respstream_drop_unit__DOT____VdfgExtracted_hff9b16a6__0) 
               & (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__squash_F)));
    ProcBase_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((IData)(vlSelf->imem_reqstream_rdy) & (IData)(vlSelf->imem_reqstream_val));
    vlSelf->ProcBase_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(ProcBase_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
            & ((~ (IData)(ProcBase_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((1U & ((IData)(1U) + (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(ProcBase_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    ProcBase_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____VdfgRegularize_h1851b5ac_0_0 
        = (1U & (~ ((IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__bypass_mux_sel) 
                    & ((IData)(ProcBase_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
                       & (IData)(ProcBase_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)))));
    vlSelf->ProcBase_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (1U & (((IData)(ProcBase_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____VdfgRegularize_h1851b5ac_0_0) 
                  & (IData)(ProcBase_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq))
                  ? ((IData)(1U) + (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr))
                  : (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)));
    vlSelf->ProcBase_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__write_en 
        = ((IData)(ProcBase_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____VdfgRegularize_h1851b5ac_0_0) 
           & (IData)(ProcBase_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    vlSelf->ProcBase_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (1U & ((IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__write_en)
                  ? ((IData)(1U) + (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                  : (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
}

VL_ATTR_COLD void VProcBase_noparam___024root___eval_triggers__stl(VProcBase_noparam___024root* vlSelf);

VL_ATTR_COLD bool VProcBase_noparam___024root___eval_phase__stl(VProcBase_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VProcBase_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcBase_noparam___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VProcBase_noparam___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VProcBase_noparam___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VProcBase_noparam___024root___dump_triggers__ico(VProcBase_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VProcBase_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcBase_noparam___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void VProcBase_noparam___024root___dump_triggers__act(VProcBase_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VProcBase_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcBase_noparam___024root___dump_triggers__act\n"); );
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
VL_ATTR_COLD void VProcBase_noparam___024root___dump_triggers__nba(VProcBase_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VProcBase_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcBase_noparam___024root___dump_triggers__nba\n"); );
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

VL_ATTR_COLD void VProcBase_noparam___024root___ctor_var_reset(VProcBase_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VProcBase_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcBase_noparam___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->commit_inst = VL_RAND_RESET_I(1);
    vlSelf->core_id = VL_RAND_RESET_I(32);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->stats_en = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(78, vlSelf->dmem_reqstream_msg);
    vlSelf->dmem_reqstream_rdy = VL_RAND_RESET_I(1);
    vlSelf->dmem_reqstream_val = VL_RAND_RESET_I(1);
    vlSelf->dmem_respstream_msg = VL_RAND_RESET_Q(48);
    vlSelf->dmem_respstream_rdy = VL_RAND_RESET_I(1);
    vlSelf->dmem_respstream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(78, vlSelf->imem_reqstream_msg);
    vlSelf->imem_reqstream_rdy = VL_RAND_RESET_I(1);
    vlSelf->imem_reqstream_val = VL_RAND_RESET_I(1);
    vlSelf->imem_respstream_msg = VL_RAND_RESET_Q(48);
    vlSelf->imem_respstream_rdy = VL_RAND_RESET_I(1);
    vlSelf->imem_respstream_val = VL_RAND_RESET_I(1);
    vlSelf->mngr2proc_msg = VL_RAND_RESET_I(32);
    vlSelf->mngr2proc_rdy = VL_RAND_RESET_I(1);
    vlSelf->mngr2proc_val = VL_RAND_RESET_I(1);
    vlSelf->proc2mngr_msg = VL_RAND_RESET_I(32);
    vlSelf->proc2mngr_rdy = VL_RAND_RESET_I(1);
    vlSelf->proc2mngr_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(78, vlSelf->ProcBase_noparam__DOT__v__DOT____Vcellout__imem_queue__deq_msg);
    vlSelf->ProcBase_noparam__DOT__v__DOT__imem_respstream_drop_rdy = VL_RAND_RESET_I(1);
    vlSelf->ProcBase_noparam__DOT__v__DOT__dmem_type_X = VL_RAND_RESET_I(2);
    vlSelf->ProcBase_noparam__DOT__v__DOT__dmem_reqstream_enq_msg_data = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(78, vlSelf->ProcBase_noparam__DOT__v__DOT____Vcellout__dmem_queue__deq_msg);
    VL_RAND_RESET_W(78, vlSelf->ProcBase_noparam__DOT__v__DOT____Vcellinp__dmem_queue__enq_msg);
    vlSelf->ProcBase_noparam__DOT__v__DOT__reg_en_D = VL_RAND_RESET_I(1);
    vlSelf->ProcBase_noparam__DOT__v__DOT__op1_sel_D = VL_RAND_RESET_I(1);
    vlSelf->ProcBase_noparam__DOT__v__DOT__op2_sel_D = VL_RAND_RESET_I(2);
    vlSelf->ProcBase_noparam__DOT__v__DOT__csrr_sel_D = VL_RAND_RESET_I(2);
    vlSelf->ProcBase_noparam__DOT__v__DOT__alu_fn_X = VL_RAND_RESET_I(4);
    vlSelf->ProcBase_noparam__DOT__v__DOT__ex_result_sel_X = VL_RAND_RESET_I(3);
    vlSelf->ProcBase_noparam__DOT__v__DOT__wb_result_sel_M = VL_RAND_RESET_I(1);
    vlSelf->ProcBase_noparam__DOT__v__DOT__rf_waddr_W = VL_RAND_RESET_I(5);
    vlSelf->ProcBase_noparam__DOT__v__DOT__rf_wen_W = VL_RAND_RESET_I(1);
    vlSelf->ProcBase_noparam__DOT__v__DOT__imul_req_val_D = VL_RAND_RESET_I(1);
    vlSelf->ProcBase_noparam__DOT__v__DOT__imul_req_rdy_D = VL_RAND_RESET_I(1);
    vlSelf->ProcBase_noparam__DOT__v__DOT__imul_resp_val_X = VL_RAND_RESET_I(1);
    vlSelf->ProcBase_noparam__DOT__v__DOT__imul_resp_rdy_X = VL_RAND_RESET_I(1);
    vlSelf->ProcBase_noparam__DOT__v__DOT__inst_D = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->ProcBase_noparam__DOT__v__DOT__str);
    vlSelf->ProcBase_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->ProcBase_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->ProcBase_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(1);
    vlSelf->ProcBase_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(1);
    vlSelf->ProcBase_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(1);
    vlSelf->ProcBase_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(1);
    vlSelf->ProcBase_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ProcBase_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(78, vlSelf->ProcBase_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->ProcBase_noparam__DOT__v__DOT__imem_respstream_drop_unit__DOT__state = VL_RAND_RESET_I(1);
    vlSelf->ProcBase_noparam__DOT__v__DOT__imem_respstream_drop_unit__DOT__next_state = VL_RAND_RESET_I(1);
    vlSelf->ProcBase_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->ProcBase_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ProcBase_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(78, vlSelf->ProcBase_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore);
    vlSelf->ProcBase_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->ProcBase_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ProcBase_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->ProcBase_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ProcBase_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore = VL_RAND_RESET_I(32);
    vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__val_F = VL_RAND_RESET_I(1);
    vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__val_D = VL_RAND_RESET_I(1);
    vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__val_X = VL_RAND_RESET_I(1);
    vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__val_M = VL_RAND_RESET_I(1);
    vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__val_W = VL_RAND_RESET_I(1);
    vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__ostall_W = VL_RAND_RESET_I(1);
    vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__stall_F = VL_RAND_RESET_I(1);
    vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__stall_D = VL_RAND_RESET_I(1);
    vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__stall_X = VL_RAND_RESET_I(1);
    vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__stall_M = VL_RAND_RESET_I(1);
    vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__stall_W = VL_RAND_RESET_I(1);
    vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__squash_F = VL_RAND_RESET_I(1);
    vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__squash_D = VL_RAND_RESET_I(1);
    vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__pc_redirect_X = VL_RAND_RESET_I(1);
    vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__br_type_D = VL_RAND_RESET_I(3);
    vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__rs1_en_D = VL_RAND_RESET_I(1);
    vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__rs2_en_D = VL_RAND_RESET_I(1);
    vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__alu_fn_D = VL_RAND_RESET_I(4);
    vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__ex_result_sel_D = VL_RAND_RESET_I(3);
    vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__dmem_type_D = VL_RAND_RESET_I(2);
    vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__wb_result_sel_D = VL_RAND_RESET_I(1);
    vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__rf_wen_D = VL_RAND_RESET_I(1);
    vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__mul_D = VL_RAND_RESET_I(1);
    vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__jump_D = VL_RAND_RESET_I(2);
    vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__proc2mngr_val_D = VL_RAND_RESET_I(1);
    vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__mngr2proc_rdy_D = VL_RAND_RESET_I(1);
    vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__stats_en_wen_D = VL_RAND_RESET_I(1);
    vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__inst_X = VL_RAND_RESET_I(32);
    vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__wb_result_sel_X = VL_RAND_RESET_I(1);
    vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__rf_wen_X = VL_RAND_RESET_I(1);
    vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__rf_waddr_X = VL_RAND_RESET_I(5);
    vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__proc2mngr_val_X = VL_RAND_RESET_I(1);
    vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__stats_en_wen_X = VL_RAND_RESET_I(1);
    vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__br_type_X = VL_RAND_RESET_I(3);
    vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__mul_X = VL_RAND_RESET_I(1);
    vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__jump_X = VL_RAND_RESET_I(2);
    vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__next_val_X = VL_RAND_RESET_I(1);
    vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__inst_M = VL_RAND_RESET_I(32);
    vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__dmem_type_M = VL_RAND_RESET_I(2);
    vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__rf_wen_M = VL_RAND_RESET_I(1);
    vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__rf_waddr_M = VL_RAND_RESET_I(5);
    vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__proc2mngr_val_M = VL_RAND_RESET_I(1);
    vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__stats_en_wen_M = VL_RAND_RESET_I(1);
    vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__next_val_M = VL_RAND_RESET_I(1);
    vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__inst_W = VL_RAND_RESET_I(32);
    vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__proc2mngr_val_W = VL_RAND_RESET_I(1);
    vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__rf_wen_pending_W = VL_RAND_RESET_I(1);
    vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT__stats_en_wen_pending_W = VL_RAND_RESET_I(1);
    vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hfec34484_0_7 = VL_RAND_RESET_I(1);
    vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hfec34484_0_9 = VL_RAND_RESET_I(1);
    vlSelf->ProcBase_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hfec34484_0_10 = VL_RAND_RESET_I(1);
    vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__pc_F = VL_RAND_RESET_I(32);
    vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__pc_next_F = VL_RAND_RESET_I(32);
    vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__br_target_X = VL_RAND_RESET_I(32);
    vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__jal_target_D = VL_RAND_RESET_I(32);
    vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__pc_D = VL_RAND_RESET_I(32);
    vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imm_D = VL_RAND_RESET_I(32);
    vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__rf_rdata1_D = VL_RAND_RESET_I(32);
    vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__op2_D = VL_RAND_RESET_I(32);
    vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__op1_X = VL_RAND_RESET_I(32);
    vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__op2_X = VL_RAND_RESET_I(32);
    vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__pc_X = VL_RAND_RESET_I(32);
    vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__alu_result_X = VL_RAND_RESET_I(32);
    vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__ex_result_M = VL_RAND_RESET_I(32);
    vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__wb_result_W = VL_RAND_RESET_I(32);
    vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__stats_en_W = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__result_en = VL_RAND_RESET_I(1);
    vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__a_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__b_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__result_mux_sel = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(4096, vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__str);
    vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg = VL_RAND_RESET_I(32);
    vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_shift = VL_RAND_RESET_I(32);
    vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg = VL_RAND_RESET_I(32);
    vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_shift = VL_RAND_RESET_I(32);
    vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg = VL_RAND_RESET_I(32);
    vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__add_mux_reg = VL_RAND_RESET_I(32);
    vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT____Vcellinp__b_mux__in0 = VL_RAND_RESET_I(32);
    vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT____Vcellout__max_extractor__out = VL_RAND_RESET_I(5);
    vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__control_unit__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__control_unit__DOT__state_next = VL_RAND_RESET_I(2);
    vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rs1_str = VL_RAND_RESET_I(24);
    vlSelf->ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rs2_str = VL_RAND_RESET_I(24);
    vlSelf->ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rd_str = VL_RAND_RESET_I(24);
    VL_RAND_RESET_W(72, vlSelf->ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__csr_str);
    vlSelf->ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__funct_str = VL_RAND_RESET_I(16);
    vlSelf->ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__csr = VL_RAND_RESET_I(12);
    vlSelf->ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__funct = VL_RAND_RESET_I(7);
    vlSelf->ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__str);
    vlSelf->ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__str);
    vlSelf->ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__str);
    vlSelf->ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__str);
    vlSelf->ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->__Vdpi_export_trigger = 0;
    vlSelf->__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__control_unit__DOT__cs__110__cs_add_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__control_unit__DOT__cs__111__cs_add_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__control_unit__DOT__cs__112__cs_add_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = VL_RAND_RESET_I(1);
}
