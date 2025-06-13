// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VProcAlt_noparam.h for the primary calling header

#include "VProcAlt_noparam__pch.h"
#include "VProcAlt_noparam___024root.h"

VL_ATTR_COLD void VProcAlt_noparam___024root___eval_static__TOP(VProcAlt_noparam___024root* vlSelf);

VL_ATTR_COLD void VProcAlt_noparam___024root___eval_static(VProcAlt_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VProcAlt_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcAlt_noparam___024root___eval_static\n"); );
    // Body
    VProcAlt_noparam___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[0xaU] = 1U;
    vlSelf->__Vm_traceActivity[9U] = 1U;
    vlSelf->__Vm_traceActivity[8U] = 1U;
    vlSelf->__Vm_traceActivity[7U] = 1U;
    vlSelf->__Vm_traceActivity[6U] = 1U;
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void VProcAlt_noparam___024root___eval_static__TOP(VProcAlt_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VProcAlt_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcAlt_noparam___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__cycles = 0U;
    vlSelf->ProcAlt_noparam__DOT__v__DOT__vc_trace__DOT__cycles = 0U;
    vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__cycles = 0U;
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__cycles = 0U;
    vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__cycles = 0U;
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__cycles = 0U;
}

VL_ATTR_COLD void VProcAlt_noparam___024root___eval_initial(VProcAlt_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VProcAlt_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcAlt_noparam___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = vlSelf->reset;
}

VL_ATTR_COLD void VProcAlt_noparam___024root___eval_final(VProcAlt_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VProcAlt_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcAlt_noparam___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VProcAlt_noparam___024root___dump_triggers__stl(VProcAlt_noparam___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VProcAlt_noparam___024root___eval_phase__stl(VProcAlt_noparam___024root* vlSelf);

VL_ATTR_COLD void VProcAlt_noparam___024root___eval_settle(VProcAlt_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VProcAlt_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcAlt_noparam___024root___eval_settle\n"); );
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
            VProcAlt_noparam___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("lab2_proc/ProcAlt.v", 417, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VProcAlt_noparam___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VProcAlt_noparam___024root___dump_triggers__stl(VProcAlt_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VProcAlt_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcAlt_noparam___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VProcAlt_noparam___024root___stl_sequent__TOP__0(VProcAlt_noparam___024root* vlSelf);

VL_ATTR_COLD void VProcAlt_noparam___024root___eval_stl(VProcAlt_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VProcAlt_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcAlt_noparam___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VProcAlt_noparam___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
        vlSelf->__Vm_traceActivity[9U] = 1U;
        vlSelf->__Vm_traceActivity[8U] = 1U;
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

extern const VlUnpacked<CData/*0:0*/, 512> VProcAlt_noparam__ConstPool__TABLE_h59ce1f34_0;
extern const VlUnpacked<CData/*1:0*/, 512> VProcAlt_noparam__ConstPool__TABLE_h24ac40c7_0;
extern const VlUnpacked<CData/*1:0*/, 32> VProcAlt_noparam__ConstPool__TABLE_hcd563ae5_0;

VL_ATTR_COLD void VProcAlt_noparam___024root___stl_sequent__TOP__0(VProcAlt_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VProcAlt_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcAlt_noparam___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_11;
    ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_11 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_1;
    __VdfgRegularize_hd87f99a1_0_1 = 0;
    SData/*8:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*4:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    if (((((((((0x13U == vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D) 
               | (0x33U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
              | (0x2003U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
             | (0x2023U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
            | (0x1063U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
           | (0x63U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
          | (0x4063U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
         | (0x6063U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)))) {
        if ((0x13U == vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) {
            vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__dmem_type_D = 0U;
            vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__br_type_D = 0U;
            vlSelf->ProcAlt_noparam__DOT__v__DOT__op2_sel_D = 0U;
            vlSelf->ProcAlt_noparam__DOT__v__DOT__imm_type_D = 0U;
        } else if ((0x33U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) {
            vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__dmem_type_D = 0U;
            vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__br_type_D = 0U;
            vlSelf->ProcAlt_noparam__DOT__v__DOT__op2_sel_D = 0U;
            vlSelf->ProcAlt_noparam__DOT__v__DOT__imm_type_D = 0U;
        } else if ((0x2003U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) {
            vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__dmem_type_D = 1U;
            vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__br_type_D = 0U;
            vlSelf->ProcAlt_noparam__DOT__v__DOT__op2_sel_D = 1U;
            vlSelf->ProcAlt_noparam__DOT__v__DOT__imm_type_D = 0U;
        } else if ((0x2023U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) {
            vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__dmem_type_D = 2U;
            vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__br_type_D = 0U;
            vlSelf->ProcAlt_noparam__DOT__v__DOT__op2_sel_D = 1U;
            vlSelf->ProcAlt_noparam__DOT__v__DOT__imm_type_D = 1U;
        } else {
            vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__dmem_type_D = 0U;
            vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__br_type_D 
                = ((0x1063U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))
                    ? 1U : ((0x63U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))
                             ? 2U : ((0x4063U == (0x707fU 
                                                  & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))
                                      ? 3U : 4U)));
            vlSelf->ProcAlt_noparam__DOT__v__DOT__op2_sel_D = 0U;
            vlSelf->ProcAlt_noparam__DOT__v__DOT__imm_type_D = 2U;
        }
        vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__ex_result_sel_D = 1U;
        vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__alu_fn_D = 0U;
        vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rf_wen_D 
            = ((0x13U != vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D) 
               && ((0x33U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                   || (0x2003U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))));
        vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rs1_en_D 
            = (0x13U != vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D);
        vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rs2_en_D 
            = ((0x13U != vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D) 
               && ((0x33U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                   || (0x2003U != (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))));
        vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__jump_D = 0U;
    } else {
        vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__dmem_type_D = 0U;
        if (((((((((0x5063U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                   | (0x7063U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                  | (0x2073U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                 | (0x1073U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                | (0x40000033U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
               | (0x2000033U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
              | (0x7033U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
             | (0x6033U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)))) {
            if ((0x5063U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) {
                vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__ex_result_sel_D = 1U;
                vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__alu_fn_D = 0U;
                vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__br_type_D = 5U;
                vlSelf->ProcAlt_noparam__DOT__v__DOT__op2_sel_D = 0U;
                vlSelf->ProcAlt_noparam__DOT__v__DOT__imm_type_D = 2U;
            } else if ((0x7063U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) {
                vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__ex_result_sel_D = 1U;
                vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__alu_fn_D = 0U;
                vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__br_type_D = 6U;
                vlSelf->ProcAlt_noparam__DOT__v__DOT__op2_sel_D = 0U;
                vlSelf->ProcAlt_noparam__DOT__v__DOT__imm_type_D = 2U;
            } else {
                if ((0x2073U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) {
                    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__ex_result_sel_D = 1U;
                    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__alu_fn_D = 0xcU;
                    vlSelf->ProcAlt_noparam__DOT__v__DOT__op2_sel_D = 2U;
                } else {
                    if ((0x1073U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) {
                        vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__ex_result_sel_D = 1U;
                        vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__alu_fn_D = 0xbU;
                    } else if ((0x40000033U == (0xfe00707fU 
                                                & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) {
                        vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__ex_result_sel_D = 1U;
                        vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__alu_fn_D = 1U;
                    } else if ((0x2000033U == (0xfe00707fU 
                                               & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) {
                        vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__ex_result_sel_D = 2U;
                        vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__alu_fn_D = 0U;
                    } else {
                        vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__ex_result_sel_D = 1U;
                        vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__alu_fn_D 
                            = ((0x7033U == (0xfe00707fU 
                                            & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))
                                ? 2U : 3U);
                    }
                    vlSelf->ProcAlt_noparam__DOT__v__DOT__op2_sel_D = 0U;
                }
                vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__br_type_D = 0U;
                vlSelf->ProcAlt_noparam__DOT__v__DOT__imm_type_D = 0U;
            }
            vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rf_wen_D 
                = ((0x5063U != (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                   && ((0x7063U != (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                       && ((0x2073U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                           || (0x1073U != (0x707fU 
                                           & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)))));
            vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rs1_en_D 
                = ((0x5063U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                   || ((0x7063U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                       || (0x2073U != (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))));
            vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rs2_en_D 
                = ((0x5063U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                   || ((0x7063U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                       || ((0x2073U != (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                           && (0x1073U != (0x707fU 
                                           & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)))));
            vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__jump_D = 0U;
        } else {
            if (((((((((0x4033U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                       | (0x2033U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                      | (0x3033U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                     | (0x40005033U == (0xfe00707fU 
                                        & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                    | (0x5033U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                   | (0x1033U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                  | (0x13U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                 | (0x6013U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)))) {
                vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__ex_result_sel_D = 1U;
                if ((0x4033U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) {
                    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__alu_fn_D = 4U;
                    vlSelf->ProcAlt_noparam__DOT__v__DOT__op2_sel_D = 0U;
                } else if ((0x2033U == (0xfe00707fU 
                                        & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) {
                    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__alu_fn_D = 5U;
                    vlSelf->ProcAlt_noparam__DOT__v__DOT__op2_sel_D = 0U;
                } else if ((0x3033U == (0xfe00707fU 
                                        & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) {
                    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__alu_fn_D = 6U;
                    vlSelf->ProcAlt_noparam__DOT__v__DOT__op2_sel_D = 0U;
                } else if ((0x40005033U == (0xfe00707fU 
                                            & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) {
                    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__alu_fn_D = 7U;
                    vlSelf->ProcAlt_noparam__DOT__v__DOT__op2_sel_D = 0U;
                } else if ((0x5033U == (0xfe00707fU 
                                        & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) {
                    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__alu_fn_D = 8U;
                    vlSelf->ProcAlt_noparam__DOT__v__DOT__op2_sel_D = 0U;
                } else if ((0x1033U == (0xfe00707fU 
                                        & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) {
                    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__alu_fn_D = 9U;
                    vlSelf->ProcAlt_noparam__DOT__v__DOT__op2_sel_D = 0U;
                } else {
                    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__alu_fn_D 
                        = ((0x13U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))
                            ? 0U : 3U);
                    vlSelf->ProcAlt_noparam__DOT__v__DOT__op2_sel_D = 1U;
                }
                vlSelf->ProcAlt_noparam__DOT__v__DOT__imm_type_D = 0U;
                vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__jump_D = 0U;
            } else if (((((((((0x4013U == (0x707fU 
                                           & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                              | (0x7013U == (0x707fU 
                                             & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                             | (0x2013U == (0x707fU 
                                            & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                            | (0x3013U == (0x707fU 
                                           & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                           | (0x40005013U == (0xfe00707fU 
                                              & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                          | (0x5013U == (0xfe00707fU 
                                         & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                         | (0x1013U == (0xfe00707fU 
                                        & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                        | (0x37U == (0x7fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)))) {
                vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__ex_result_sel_D = 1U;
                if ((0x4013U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) {
                    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__alu_fn_D = 4U;
                    vlSelf->ProcAlt_noparam__DOT__v__DOT__imm_type_D = 0U;
                } else if ((0x7013U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) {
                    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__alu_fn_D = 2U;
                    vlSelf->ProcAlt_noparam__DOT__v__DOT__imm_type_D = 0U;
                } else if ((0x2013U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) {
                    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__alu_fn_D = 5U;
                    vlSelf->ProcAlt_noparam__DOT__v__DOT__imm_type_D = 0U;
                } else if ((0x3013U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) {
                    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__alu_fn_D = 6U;
                    vlSelf->ProcAlt_noparam__DOT__v__DOT__imm_type_D = 0U;
                } else if ((0x40005013U == (0xfe00707fU 
                                            & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) {
                    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__alu_fn_D = 7U;
                    vlSelf->ProcAlt_noparam__DOT__v__DOT__imm_type_D = 0U;
                } else if ((0x5013U == (0xfe00707fU 
                                        & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) {
                    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__alu_fn_D = 8U;
                    vlSelf->ProcAlt_noparam__DOT__v__DOT__imm_type_D = 0U;
                } else if ((0x1013U == (0xfe00707fU 
                                        & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) {
                    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__alu_fn_D = 9U;
                    vlSelf->ProcAlt_noparam__DOT__v__DOT__imm_type_D = 0U;
                } else {
                    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__alu_fn_D = 0xcU;
                    vlSelf->ProcAlt_noparam__DOT__v__DOT__imm_type_D = 3U;
                }
                vlSelf->ProcAlt_noparam__DOT__v__DOT__op2_sel_D = 1U;
                vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__jump_D = 0U;
            } else {
                if ((0x17U == (0x7fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) {
                    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__ex_result_sel_D = 1U;
                    vlSelf->ProcAlt_noparam__DOT__v__DOT__op2_sel_D = 1U;
                    vlSelf->ProcAlt_noparam__DOT__v__DOT__imm_type_D = 3U;
                    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__jump_D = 0U;
                } else if ((0x6fU == (0x7fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) {
                    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__ex_result_sel_D = 0U;
                    vlSelf->ProcAlt_noparam__DOT__v__DOT__op2_sel_D = 0U;
                    vlSelf->ProcAlt_noparam__DOT__v__DOT__imm_type_D = 4U;
                    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__jump_D = 1U;
                } else {
                    if ((0x67U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) {
                        vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__ex_result_sel_D = 0U;
                        vlSelf->ProcAlt_noparam__DOT__v__DOT__op2_sel_D = 1U;
                        vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__jump_D = 2U;
                    } else {
                        vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__ex_result_sel_D = 1U;
                        vlSelf->ProcAlt_noparam__DOT__v__DOT__op2_sel_D = 0U;
                        vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__jump_D = 0U;
                    }
                    vlSelf->ProcAlt_noparam__DOT__v__DOT__imm_type_D = 0U;
                }
                vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__alu_fn_D = 0U;
            }
            vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__br_type_D = 0U;
            vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rf_wen_D 
                = (((((((((0x4033U == (0xfe00707fU 
                                       & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                          | (0x2033U == (0xfe00707fU 
                                         & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                         | (0x3033U == (0xfe00707fU 
                                        & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                        | (0x40005033U == (0xfe00707fU 
                                           & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                       | (0x5033U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                      | (0x1033U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                     | (0x13U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                    | (0x6013U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                   || (((((((((0x4013U == (0x707fU 
                                           & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                              | (0x7013U == (0x707fU 
                                             & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                             | (0x2013U == (0x707fU 
                                            & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                            | (0x3013U == (0x707fU 
                                           & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                           | (0x40005013U == (0xfe00707fU 
                                              & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                          | (0x5013U == (0xfe00707fU 
                                         & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                         | (0x1013U == (0xfe00707fU 
                                        & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                        | (0x37U == (0x7fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                       || ((0x17U == (0x7fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                           || ((0x6fU == (0x7fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                               || (0x67U == (0x707fU 
                                             & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))))));
            vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rs1_en_D 
                = (((((((((0x4033U == (0xfe00707fU 
                                       & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                          | (0x2033U == (0xfe00707fU 
                                         & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                         | (0x3033U == (0xfe00707fU 
                                        & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                        | (0x40005033U == (0xfe00707fU 
                                           & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                       | (0x5033U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                      | (0x1033U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                     | (0x13U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                    | (0x6013U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                   || (((((((((0x4013U == (0x707fU 
                                           & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                              | (0x7013U == (0x707fU 
                                             & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                             | (0x2013U == (0x707fU 
                                            & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                            | (0x3013U == (0x707fU 
                                           & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                           | (0x40005013U == (0xfe00707fU 
                                              & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                          | (0x5013U == (0xfe00707fU 
                                         & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                         | (0x1013U == (0xfe00707fU 
                                        & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                        | (0x37U == (0x7fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)))
                        ? ((0x4013U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                           || ((0x7013U == (0x707fU 
                                            & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                               || ((0x2013U == (0x707fU 
                                                & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                                   || ((0x3013U == 
                                        (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                                       || ((0x40005013U 
                                            == (0xfe00707fU 
                                                & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                                           || ((0x5013U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                                               || (0x1013U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))))))))
                        : ((0x17U != (0x7fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                           && ((0x6fU != (0x7fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                               && (0x67U == (0x707fU 
                                             & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))))));
            vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rs2_en_D 
                = (((((((((0x4033U == (0xfe00707fU 
                                       & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                          | (0x2033U == (0xfe00707fU 
                                         & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                         | (0x3033U == (0xfe00707fU 
                                        & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                        | (0x40005033U == (0xfe00707fU 
                                           & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                       | (0x5033U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                      | (0x1033U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                     | (0x13U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                    | (0x6013U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                   && ((0x4033U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                       || ((0x2033U == (0xfe00707fU 
                                        & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                           || ((0x3033U == (0xfe00707fU 
                                            & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                               || ((0x40005033U == 
                                    (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                                   || ((0x5033U == 
                                        (0xfe00707fU 
                                         & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                                       || (0x1033U 
                                           == (0xfe00707fU 
                                               & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))))))));
        }
    }
    vlSelf->ProcAlt_noparam__DOT__v__DOT__op1_sel_D 
        = ((1U & (~ ((((((((0x13U == vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D) 
                           | (0x33U == (0xfe00707fU 
                                        & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                          | (0x2003U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                         | (0x2023U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                        | (0x1063U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                       | (0x63U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                      | (0x4063U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                     | (0x6063U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))))) 
           && ((1U & (~ ((((((((0x5063U == (0x707fU 
                                            & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                               | (0x7063U == (0x707fU 
                                              & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                              | (0x2073U == (0x707fU 
                                             & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                             | (0x1073U == (0x707fU 
                                            & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                            | (0x40000033U == (0xfe00707fU 
                                               & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                           | (0x2000033U == (0xfe00707fU 
                                             & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                          | (0x7033U == (0xfe00707fU 
                                         & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                         | (0x6033U == (0xfe00707fU 
                                        & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))))) 
               && ((1U & (~ ((((((((0x4033U == (0xfe00707fU 
                                                & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                                   | (0x2033U == (0xfe00707fU 
                                                  & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                                  | (0x3033U == (0xfe00707fU 
                                                 & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                                 | (0x40005033U == 
                                    (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                                | (0x5033U == (0xfe00707fU 
                                               & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                               | (0x1033U == (0xfe00707fU 
                                              & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                              | (0x13U == (0x707fU 
                                           & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                             | (0x6013U == (0x707fU 
                                            & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))))) 
                   && ((1U & (~ ((((((((0x4013U == 
                                        (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                                       | (0x7013U == 
                                          (0x707fU 
                                           & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                                      | (0x2013U == 
                                         (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                                     | (0x3013U == 
                                        (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                                    | (0x40005013U 
                                       == (0xfe00707fU 
                                           & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                                   | (0x5013U == (0xfe00707fU 
                                                  & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                                  | (0x1013U == (0xfe00707fU 
                                                 & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                                 | (0x37U == (0x7fU 
                                              & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))))) 
                       && (0x17U == (0x7fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))))));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__inst_val_D 
        = (((((((((0x13U == vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D) 
                  | (0x33U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                 | (0x2003U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                | (0x2023U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
               | (0x1063U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
              | (0x63U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
             | (0x4063U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
            | (0x6063U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
           || (((((((((0x5063U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                      | (0x7063U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                     | (0x2073U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                    | (0x1073U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                   | (0x40000033U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                  | (0x2000033U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                 | (0x7033U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                | (0x6033U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
               || (((((((((0x4033U == (0xfe00707fU 
                                       & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                          | (0x2033U == (0xfe00707fU 
                                         & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                         | (0x3033U == (0xfe00707fU 
                                        & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                        | (0x40005033U == (0xfe00707fU 
                                           & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                       | (0x5033U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                      | (0x1033U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                     | (0x13U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                    | (0x6013U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                   || (((((((((0x4013U == (0x707fU 
                                           & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                              | (0x7013U == (0x707fU 
                                             & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                             | (0x2013U == (0x707fU 
                                            & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                            | (0x3013U == (0x707fU 
                                           & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                           | (0x40005013U == (0xfe00707fU 
                                              & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                          | (0x5013U == (0xfe00707fU 
                                         & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                         | (0x1013U == (0xfe00707fU 
                                        & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                        | (0x37U == (0x7fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                       || ((0x17U == (0x7fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                           || ((0x6fU == (0x7fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                               || (0x67U == (0x707fU 
                                             & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))))))));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__wb_result_sel_D 
        = (((((((((0x13U == vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D) 
                  | (0x33U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                 | (0x2003U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                | (0x2023U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
               | (0x1063U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
              | (0x63U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
             | (0x4063U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
            | (0x6063U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
           && ((0x13U != vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D) 
               && ((0x33U != (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                   && (0x2003U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)))));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__b_mux_sel = 0U;
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__a_mux_sel = 0U;
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__result_en = 1U;
    vlSelf->stats_en = (0U != vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__stats_en_W);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf_rdata0_D 
        = ((0U == (0x1fU & (vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D 
                            >> 0xfU))) ? 0U : vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile
           [(0x1fU & (vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D 
                      >> 0xfU))]);
    vlSelf->proc2mngr_msg = ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)
                              ? vlSelf->ProcAlt_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore
                              : ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)
                                  ? 0U : vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__wb_result_W));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__csrw_D 
        = ((1U & (~ ((((((((0x13U == vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D) 
                           | (0x33U == (0xfe00707fU 
                                        & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                          | (0x2003U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                         | (0x2023U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                        | (0x1063U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                       | (0x63U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                      | (0x4063U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                     | (0x6063U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))))) 
           && (((((((((0x5063U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                      | (0x7063U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                     | (0x2073U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                    | (0x1073U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                   | (0x40000033U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                  | (0x2000033U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                 | (0x7033U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                | (0x6033U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
               && ((0x5063U != (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                   && ((0x7063U != (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                       && ((0x2073U != (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                           && (0x1073U == (0x707fU 
                                           & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)))))));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf_rdata1_D 
        = ((0U == (0x1fU & (vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D 
                            >> 0x14U))) ? 0U : vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile
           [(0x1fU & (vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D 
                      >> 0x14U))]);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__wb_result_M 
        = ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__wb_result_sel_M)
            ? ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__wb_result_sel_M)
                ? (IData)(vlSelf->dmem_respstream_msg)
                : 0U) : vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__ex_result_M);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding 
        = (((0U == vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg) 
            << 0x1fU) | (((0U == (0x7fffffffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)) 
                          << 0x1eU) | (((0U == (0x3fffffffU 
                                                & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)) 
                                        << 0x1dU) | 
                                       (((0U == (0x1fffffffU 
                                                 & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)) 
                                         << 0x1cU) 
                                        | (((0U == 
                                             (0xfffffffU 
                                              & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)) 
                                            << 0x1bU) 
                                           | (((0U 
                                                == 
                                                (0x7ffffffU 
                                                 & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)) 
                                               << 0x1aU) 
                                              | (((0U 
                                                   == 
                                                   (0x3ffffffU 
                                                    & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)) 
                                                  << 0x19U) 
                                                 | (((0U 
                                                      == 
                                                      (0x1ffffffU 
                                                       & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)) 
                                                     << 0x18U) 
                                                    | (((0U 
                                                         == 
                                                         (0xffffffU 
                                                          & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)) 
                                                        << 0x17U) 
                                                       | (((0U 
                                                            == 
                                                            (0x7fffffU 
                                                             & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)) 
                                                           << 0x16U) 
                                                          | (((0U 
                                                               == 
                                                               (0x3fffffU 
                                                                & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)) 
                                                              << 0x15U) 
                                                             | (((0U 
                                                                  == 
                                                                  (0x1fffffU 
                                                                   & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)) 
                                                                 << 0x14U) 
                                                                | (((0U 
                                                                     == 
                                                                     (0xfffffU 
                                                                      & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)) 
                                                                    << 0x13U) 
                                                                   | (((0U 
                                                                        == 
                                                                        (0x7ffffU 
                                                                         & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)) 
                                                                       << 0x12U) 
                                                                      | (((0U 
                                                                           == 
                                                                           (0x3ffffU 
                                                                            & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)) 
                                                                          << 0x11U) 
                                                                         | (((0U 
                                                                              == 
                                                                              (0x1ffffU 
                                                                               & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)) 
                                                                             << 0x10U) 
                                                                            | (((0U 
                                                                                == 
                                                                                (0xffffU 
                                                                                & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)) 
                                                                                << 0xfU) 
                                                                               | (((0U 
                                                                                == 
                                                                                (0x7fffU 
                                                                                & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)) 
                                                                                << 0xeU) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0x3fffU 
                                                                                & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)) 
                                                                                << 0xdU) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0x1fffU 
                                                                                & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)) 
                                                                                << 0xcU) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0xfffU 
                                                                                & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)) 
                                                                                << 0xbU) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0x7ffU 
                                                                                & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)) 
                                                                                << 0xaU) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0x3ffU 
                                                                                & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)) 
                                                                                << 9U) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0x1ffU 
                                                                                & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)) 
                                                                                << 8U) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0xffU 
                                                                                & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)) 
                                                                                << 7U) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)) 
                                                                                << 6U) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)) 
                                                                                << 5U) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)) 
                                                                                << 4U) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0xfU 
                                                                                & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)) 
                                                                                << 3U) 
                                                                                | (((0U 
                                                                                == 
                                                                                (7U 
                                                                                & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)) 
                                                                                << 2U) 
                                                                                | (((0U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (~ vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)))))))))))))))))))))))))))))))));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__rf_wen_W 
        = ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rf_wen_pending_W) 
           & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_W));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__alu_result_X 
        = ((8U & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__alu_fn_X))
            ? ((4U & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__alu_fn_X))
                ? ((2U & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__alu_fn_X))
                    ? 0U : ((1U & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__alu_fn_X))
                             ? 0U : vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op2_X))
                : ((2U & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__alu_fn_X))
                    ? ((1U & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__alu_fn_X))
                        ? vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op1_X
                        : 0U) : ((1U & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__alu_fn_X))
                                  ? (vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op1_X 
                                     << (0x1fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op2_X))
                                  : (vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op1_X 
                                     >> (0x1fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op2_X)))))
            : ((4U & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__alu_fn_X))
                ? ((2U & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__alu_fn_X))
                    ? ((1U & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__alu_fn_X))
                        ? VL_SHIFTRS_III(32,32,5, vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op1_X, 
                                         (0x1fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op2_X))
                        : (vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op1_X 
                           < vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op2_X))
                    : ((1U & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__alu_fn_X))
                        ? VL_LTS_III(32, vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op1_X, vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op2_X)
                        : (vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op1_X 
                           ^ vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op2_X)))
                : ((2U & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__alu_fn_X))
                    ? ((1U & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__alu_fn_X))
                        ? (vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op1_X 
                           | vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op2_X)
                        : (vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op1_X 
                           & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op2_X))
                    : ((1U & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__alu_fn_X))
                        ? (vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op1_X 
                           - vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op2_X)
                        : (vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op1_X 
                           + vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op2_X)))));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__imul_req_rdy_D = 0U;
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_13 
        = ((0U != (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rf_waddr_X)) 
           & (1U == (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_type_X)));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__mul_D 
        = ((1U & (~ ((((((((0x13U == vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D) 
                           | (0x33U == (0xfe00707fU 
                                        & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                          | (0x2003U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                         | (0x2023U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                        | (0x1063U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                       | (0x63U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                      | (0x4063U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                     | (0x6063U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))))) 
           && (((((((((0x5063U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                      | (0x7063U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                     | (0x2073U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                    | (0x1073U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                   | (0x40000033U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                  | (0x2000033U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                 | (0x7033U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                | (0x6033U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
               && ((0x5063U != (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                   && ((0x7063U != (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                       && ((0x2073U != (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                           && ((0x1073U != (0x707fU 
                                            & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                               && ((0x40000033U != 
                                    (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                                   && (0x2000033U == 
                                       (0xfe00707fU 
                                        & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)))))))));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_2 
        = ((0x1fU & (vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D 
                     >> 0xfU)) == (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rf_waddr_X));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__csrr_D 
        = ((1U & (~ ((((((((0x13U == vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D) 
                           | (0x33U == (0xfe00707fU 
                                        & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                          | (0x2003U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                         | (0x2023U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                        | (0x1063U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                       | (0x63U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                      | (0x4063U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                     | (0x6063U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))))) 
           && (((((((((0x5063U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                      | (0x7063U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                     | (0x2073U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                    | (0x1073U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                   | (0x40000033U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                  | (0x2000033U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                 | (0x7033U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                | (0x6033U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
               && ((0x5063U != (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                   && ((0x7063U != (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                       && (0x2073U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))))));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_4 
        = ((0x1fU & (vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D 
                     >> 0x14U)) == (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rf_waddr_X));
    __Vtableidx1 = (((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__jump_X) 
                     << 7U) | (((vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op1_X 
                                 < vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op2_X) 
                                << 6U) | ((VL_LTS_III(32, vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op1_X, vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op2_X) 
                                           << 5U) | 
                                          (((vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op1_X 
                                             == vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op2_X) 
                                            << 4U) 
                                           | (((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__br_type_X) 
                                               << 1U) 
                                              | (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_X))))));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__pc_redirect_X 
        = VProcAlt_noparam__ConstPool__TABLE_h59ce1f34_0
        [__Vtableidx1];
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__pc_sel_X 
        = VProcAlt_noparam__ConstPool__TABLE_h24ac40c7_0
        [__Vtableidx1];
    vlSelf->ProcAlt_noparam__DOT__v__DOT__imul_resp_val_X = 0U;
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__ostall_W 
        = ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_W) 
           & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__proc2mngr_val_W) 
              & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__proc2mngr_val_D = 0U;
    if (((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__csrw_D) 
         & (0x7c0U == (vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D 
                       >> 0x14U)))) {
        vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__proc2mngr_val_D = 1U;
    }
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__stats_en_wen_D = 0U;
    if (((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__csrw_D) 
         & (0x7c1U == (vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D 
                       >> 0x14U)))) {
        vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__stats_en_wen_D = 1U;
    }
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT____Vcellout__max_extractor__out 
        = (((((((((0x80000000U == (0x80000000U & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding)) 
                  | (0x40000000U == (0xc0000000U & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))) 
                 | (0x20000000U == (0xe0000000U & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))) 
                | (0x10000000U == (0xf0000000U & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))) 
               | (0x8000000U == (0xf8000000U & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))) 
              | (0x4000000U == (0xfc000000U & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))) 
             | (0x2000000U == (0xfe000000U & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))) 
            | (0x1000000U == (0xff000000U & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding)))
            ? ((0x80000000U == (0x80000000U & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                ? 0x1fU : ((0x40000000U == (0xc0000000U 
                                            & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                            ? 0x1eU : ((0x20000000U 
                                        == (0xe0000000U 
                                            & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                                        ? 0x1dU : (
                                                   (0x10000000U 
                                                    == 
                                                    (0xf0000000U 
                                                     & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                                                    ? 0x1cU
                                                    : 
                                                   ((0x8000000U 
                                                     == 
                                                     (0xf8000000U 
                                                      & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                                                     ? 0x1bU
                                                     : 
                                                    ((0x4000000U 
                                                      == 
                                                      (0xfc000000U 
                                                       & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                                                      ? 0x1aU
                                                      : 
                                                     ((0x2000000U 
                                                       == 
                                                       (0xfe000000U 
                                                        & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                                                       ? 0x19U
                                                       : 0x18U)))))))
            : (((((((((0x800000U == (0xff800000U & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding)) 
                      | (0x400000U == (0xffc00000U 
                                       & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))) 
                     | (0x200000U == (0xffe00000U & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))) 
                    | (0x100000U == (0xfff00000U & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))) 
                   | (0x80000U == (0xfff80000U & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))) 
                  | (0x40000U == (0xfffc0000U & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))) 
                 | (0x20000U == (0xfffe0000U & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))) 
                | (0x10000U == (0xffff0000U & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding)))
                ? ((0x800000U == (0xff800000U & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                    ? 0x17U : ((0x400000U == (0xffc00000U 
                                              & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                                ? 0x16U : ((0x200000U 
                                            == (0xffe00000U 
                                                & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                                            ? 0x15U
                                            : ((0x100000U 
                                                == 
                                                (0xfff00000U 
                                                 & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                                                ? 0x14U
                                                : (
                                                   (0x80000U 
                                                    == 
                                                    (0xfff80000U 
                                                     & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                                                    ? 0x13U
                                                    : 
                                                   ((0x40000U 
                                                     == 
                                                     (0xfffc0000U 
                                                      & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                                                     ? 0x12U
                                                     : 
                                                    ((0x20000U 
                                                      == 
                                                      (0xfffe0000U 
                                                       & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                                                      ? 0x11U
                                                      : 0x10U)))))))
                : (((((((((0x8000U == (0xffff8000U 
                                       & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding)) 
                          | (0x4000U == (0xffffc000U 
                                         & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))) 
                         | (0x2000U == (0xffffe000U 
                                        & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))) 
                        | (0x1000U == (0xfffff000U 
                                       & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))) 
                       | (0x800U == (0xfffff800U & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))) 
                      | (0x400U == (0xfffffc00U & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))) 
                     | (0x200U == (0xfffffe00U & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))) 
                    | (0x100U == (0xffffff00U & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding)))
                    ? ((0x8000U == (0xffff8000U & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                        ? 0xfU : ((0x4000U == (0xffffc000U 
                                               & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                                   ? 0xeU : ((0x2000U 
                                              == (0xffffe000U 
                                                  & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                                              ? 0xdU
                                              : ((0x1000U 
                                                  == 
                                                  (0xfffff000U 
                                                   & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                                                  ? 0xcU
                                                  : 
                                                 ((0x800U 
                                                   == 
                                                   (0xfffff800U 
                                                    & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                                                   ? 0xbU
                                                   : 
                                                  ((0x400U 
                                                    == 
                                                    (0xfffffc00U 
                                                     & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                                                    ? 0xaU
                                                    : 
                                                   ((0x200U 
                                                     == 
                                                     (0xfffffe00U 
                                                      & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                                                     ? 9U
                                                     : 8U)))))))
                    : (((((((((0x80U == (0xffffff80U 
                                         & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding)) 
                              | (0x40U == (0xffffffc0U 
                                           & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))) 
                             | (0x20U == (0xffffffe0U 
                                          & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))) 
                            | (0x10U == (0xfffffff0U 
                                         & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))) 
                           | (8U == (0xfffffff8U & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))) 
                          | (4U == (0xfffffffcU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))) 
                         | (2U == (0xfffffffeU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))) 
                        | (1U == vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                        ? ((0x80U == (0xffffff80U & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                            ? 7U : ((0x40U == (0xffffffc0U 
                                               & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                                     ? 6U : ((0x20U 
                                              == (0xffffffe0U 
                                                  & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                                              ? 5U : 
                                             ((0x10U 
                                               == (0xfffffff0U 
                                                   & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                                               ? 4U
                                               : ((8U 
                                                   == 
                                                   (0xfffffff8U 
                                                    & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                                                   ? 3U
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0xfffffffcU 
                                                     & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                                                    ? 2U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0xfffffffeU 
                                                      & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding))
                                                     ? 1U
                                                     : 0U)))))))
                        : 0U))));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imm_D 
        = ((4U & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imm_type_D))
            ? ((2U & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imm_type_D))
                ? 0U : ((1U & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imm_type_D))
                         ? 0U : (((- (IData)((vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D 
                                              >> 0x1fU))) 
                                  << 0x14U) | ((0xff000U 
                                                & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D) 
                                               | ((0x800U 
                                                   & (vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D 
                                                      >> 9U)) 
                                                  | ((0x7e0U 
                                                      & (vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D 
                                                         >> 0x14U)) 
                                                     | (0x1eU 
                                                        & (vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D 
                                                           >> 0x14U))))))))
            : ((2U & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imm_type_D))
                ? ((1U & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imm_type_D))
                    ? (0xfffff000U & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)
                    : (((- (IData)((vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D 
                                    >> 0x1fU))) << 0xcU) 
                       | ((0x800U & (vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D 
                                     << 4U)) | ((0x7e0U 
                                                 & (vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D 
                                                    >> 0x14U)) 
                                                | (0x1eU 
                                                   & (vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D 
                                                      >> 7U))))))
                : ((1U & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imm_type_D))
                    ? (((- (IData)((vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D 
                                    >> 0x1fU))) << 0xbU) 
                       | ((0x7e0U & (vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D 
                                     >> 0x14U)) | (0x1fU 
                                                   & (vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D 
                                                      >> 7U))))
                    : (((- (IData)((vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D 
                                    >> 0x1fU))) << 0xbU) 
                       | (0x7ffU & (vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D 
                                    >> 0x14U))))));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_12 
        = ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_W) 
           & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__rf_wen_W));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_reqstream_enq_msg[0U] 
        = (IData)((QData)((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_reqstream_enq_msg_data)));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_reqstream_enq_msg[1U] 
        = ((vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__alu_result_X 
            << 2U) | (IData)(((QData)((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_reqstream_enq_msg_data)) 
                              >> 0x20U)));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_reqstream_enq_msg[2U] 
        = ((((1U == (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_type_X))
              ? 0U : 1U) << 0xaU) | (vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__alu_result_X 
                                     >> 0x1eU));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__ex_result_X_out 
        = ((0U == (3U & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ex_result_sel_X)))
            ? ((IData)(4U) + vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__pc_X)
            : ((1U == (3U & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ex_result_sel_X)))
                ? vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__alu_result_X
                : ((2U == (3U & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ex_result_sel_X)))
                    ? vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg
                    : 0U)));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__csrr_sel_D = 0U;
    if (((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__csrr_D) 
         & (0xfc1U == (vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D 
                       >> 0x14U)))) {
        vlSelf->ProcAlt_noparam__DOT__v__DOT__csrr_sel_D = 1U;
    }
    if (((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__csrr_D) 
         & (0xf14U == (vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D 
                       >> 0x14U)))) {
        vlSelf->ProcAlt_noparam__DOT__v__DOT__csrr_sel_D = 2U;
    }
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__mngr2proc_rdy_D = 0U;
    if (((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__csrr_D) 
         & (0xfc0U == (vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D 
                       >> 0x14U)))) {
        vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__mngr2proc_rdy_D = 1U;
    }
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__bypass_waddr_X_rs1_D 
        = ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rs1_en_D) 
           & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rf_wen_X) 
              & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_X) 
                 & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_2) 
                    & (0U != (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rf_waddr_X))))));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__bypass_waddr_X_rs2_D 
        = ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rs2_en_D) 
           & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rf_wen_X) 
              & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_X) 
                 & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_4) 
                    & (0U != (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rf_waddr_X))))));
    if (((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_D) 
         & (1U == (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__jump_D)))) {
        vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__pc_redirect_D = 1U;
        vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__pc_sel_D = 2U;
    } else {
        vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__pc_redirect_D = 0U;
        vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__pc_sel_D = 0U;
    }
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__stall_W 
        = ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_W) 
           & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__ostall_W));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_10 
        = (((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_M) 
            & ((~ (IData)(vlSelf->dmem_respstream_val)) 
               & (0U != (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__dmem_type_M)))) 
           | (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__ostall_W));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_shift 
        = VL_SHIFTL_III(32,32,6, vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg, 
                        (0x3fU & ((IData)(1U) + (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT____Vcellout__max_extractor__out))));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_shift 
        = VL_SHIFTR_III(32,32,6, vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg, 
                        (0x3fU & ((IData)(1U) + (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT____Vcellout__max_extractor__out))));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__jal_target_D 
        = (vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__pc_D 
           + vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imm_D);
    if (vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full) {
        vlSelf->ProcAlt_noparam__DOT__v__DOT____Vcellout__dmem_queue__deq_msg[0U] 
            = vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U];
        vlSelf->ProcAlt_noparam__DOT__v__DOT____Vcellout__dmem_queue__deq_msg[1U] 
            = vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U];
        vlSelf->ProcAlt_noparam__DOT__v__DOT____Vcellout__dmem_queue__deq_msg[2U] 
            = vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U];
    } else if (vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full) {
        vlSelf->ProcAlt_noparam__DOT__v__DOT____Vcellout__dmem_queue__deq_msg[0U] = 0U;
        vlSelf->ProcAlt_noparam__DOT__v__DOT____Vcellout__dmem_queue__deq_msg[1U] = 0U;
        vlSelf->ProcAlt_noparam__DOT__v__DOT____Vcellout__dmem_queue__deq_msg[2U] = 0U;
    } else {
        vlSelf->ProcAlt_noparam__DOT__v__DOT____Vcellout__dmem_queue__deq_msg[0U] 
            = vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_reqstream_enq_msg[0U];
        vlSelf->ProcAlt_noparam__DOT__v__DOT____Vcellout__dmem_queue__deq_msg[1U] 
            = vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_reqstream_enq_msg[1U];
        vlSelf->ProcAlt_noparam__DOT__v__DOT____Vcellout__dmem_queue__deq_msg[2U] 
            = vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_reqstream_enq_msg[2U];
    }
    vlSelf->ProcAlt_noparam__DOT__v__DOT__bypass_sel_1 
        = ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__bypass_waddr_X_rs1_D)
            ? 1U : (((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rs1_en_D) 
                     & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rf_wen_M) 
                        & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_M) 
                           & (((0x1fU & (vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D 
                                         >> 0xfU)) 
                               == (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rf_waddr_M)) 
                              & (0U != (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rf_waddr_M))))))
                     ? 2U : (((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rs1_en_D) 
                              & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_12) 
                                 & (((0x1fU & (vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D 
                                               >> 0xfU)) 
                                     == (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__rf_waddr_W)) 
                                    & (0U != (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__rf_waddr_W)))))
                              ? 3U : 0U)));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__bypass_sel_2 
        = ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__bypass_waddr_X_rs2_D)
            ? 1U : (((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rs2_en_D) 
                     & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rf_wen_M) 
                        & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_M) 
                           & (((0x1fU & (vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D 
                                         >> 0x14U)) 
                               == (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rf_waddr_M)) 
                              & (0U != (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rf_waddr_M))))))
                     ? 2U : (((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rs2_en_D) 
                              & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_12) 
                                 & (((0x1fU & (vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D 
                                               >> 0x14U)) 
                                     == (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__rf_waddr_W)) 
                                    & (0U != (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__rf_waddr_W)))))
                              ? 3U : 0U)));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__pc_sel_F 
        = ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__pc_redirect_D)
            ? (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__pc_sel_D)
            : ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__pc_redirect_X)
                ? (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__pc_sel_X)
                : 0U));
    vlSelf->commit_inst = ((~ (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__stall_W)) 
                           & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_W));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__stall_M 
        = ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_M) 
           & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_10));
    if ((0U == (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__control_unit__DOT__state))) {
        vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__b_mux_sel = 0U;
        vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__a_mux_sel = 0U;
        vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__result_en = 1U;
        vlSelf->ProcAlt_noparam__DOT__v__DOT__imul_req_rdy_D = 1U;
        vlSelf->ProcAlt_noparam__DOT__v__DOT__imul_resp_val_X = 0U;
    } else if ((1U == (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__control_unit__DOT__state))) {
        vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__b_mux_sel = 1U;
        vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__a_mux_sel = 1U;
        vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__result_en = 1U;
        vlSelf->ProcAlt_noparam__DOT__v__DOT__imul_req_rdy_D = 0U;
        vlSelf->ProcAlt_noparam__DOT__v__DOT__imul_resp_val_X = 0U;
    } else if ((2U == (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__control_unit__DOT__state))) {
        vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__b_mux_sel = 1U;
        vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__a_mux_sel = 1U;
        vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__result_en = 1U;
        vlSelf->ProcAlt_noparam__DOT__v__DOT__imul_req_rdy_D = 0U;
        vlSelf->ProcAlt_noparam__DOT__v__DOT__imul_resp_val_X = 1U;
    }
    __VdfgRegularize_hd87f99a1_0_1 = (((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_X) 
                                       & (((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
                                           & (0U != (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_type_X))) 
                                          | ((~ (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imul_resp_val_X)) 
                                             & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__mul_X)))) 
                                      | (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_10));
    vlSelf->dmem_reqstream_msg[0U] = vlSelf->ProcAlt_noparam__DOT__v__DOT____Vcellout__dmem_queue__deq_msg[0U];
    vlSelf->dmem_reqstream_msg[1U] = vlSelf->ProcAlt_noparam__DOT__v__DOT____Vcellout__dmem_queue__deq_msg[1U];
    vlSelf->dmem_reqstream_msg[2U] = vlSelf->ProcAlt_noparam__DOT__v__DOT____Vcellout__dmem_queue__deq_msg[2U];
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op2_D 
        = ((0U == (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__op2_sel_D))
            ? ((2U & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__bypass_sel_2))
                ? ((1U & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__bypass_sel_2))
                    ? vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__wb_result_W
                    : vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__wb_result_M)
                : ((1U & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__bypass_sel_2))
                    ? vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__ex_result_X_out
                    : vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf_rdata1_D))
            : ((1U == (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__op2_sel_D))
                ? vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imm_D
                : ((2U == (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__op2_sel_D))
                    ? ((0U == (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__csrr_sel_D))
                        ? vlSelf->mngr2proc_msg : (
                                                   (1U 
                                                    == (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__csrr_sel_D))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__csrr_sel_D))
                                                     ? vlSelf->core_id
                                                     : 0U)))
                    : 0U)));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__pc_next_F 
        = ((2U & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__pc_sel_F))
            ? ((1U & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__pc_sel_F))
                ? vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__alu_result_X
                : vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__jal_target_D)
            : ((1U & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__pc_sel_F))
                ? vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__br_target_X
                : ((IData)(4U) + vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__pc_F)));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq 
        = ((~ (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->commit_inst) & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__proc2mngr_val_W)));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__next_val_M 
        = ((~ (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__stall_M)) 
           & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_M));
    ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_11 
        = (((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_D) 
            & (((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_D) 
                & ((~ (IData)(vlSelf->mngr2proc_val)) 
                   & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__mngr2proc_rdy_D))) 
               | (((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_D) 
                   & (((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rs1_en_D) 
                       & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_X) 
                          & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rf_wen_X) 
                             & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_2) 
                                & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_13))))) 
                      | ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rs2_en_D) 
                         & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_X) 
                            & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rf_wen_X) 
                               & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_4) 
                                  & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_13))))))) 
                  | ((~ (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imul_req_rdy_D)) 
                     & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__mul_D))))) 
           | (IData)(__VdfgRegularize_hd87f99a1_0_1));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__stall_X 
        = ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_X) 
           & (IData)(__VdfgRegularize_hd87f99a1_0_1));
    if (vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__bypass_mux_sel) {
        vlSelf->ProcAlt_noparam__DOT__v__DOT____Vcellout__imem_queue__deq_msg[0U] = 0U;
        if (vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__bypass_mux_sel) {
            vlSelf->ProcAlt_noparam__DOT__v__DOT____Vcellout__imem_queue__deq_msg[1U] 
                = (vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__pc_next_F 
                   << 2U);
            vlSelf->ProcAlt_noparam__DOT__v__DOT____Vcellout__imem_queue__deq_msg[2U] 
                = (vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__pc_next_F 
                   >> 0x1eU);
        } else {
            vlSelf->ProcAlt_noparam__DOT__v__DOT____Vcellout__imem_queue__deq_msg[1U] = 0U;
            vlSelf->ProcAlt_noparam__DOT__v__DOT____Vcellout__imem_queue__deq_msg[2U] = 0U;
        }
    } else {
        vlSelf->ProcAlt_noparam__DOT__v__DOT____Vcellout__imem_queue__deq_msg[0U] 
            = vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
            [vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
        vlSelf->ProcAlt_noparam__DOT__v__DOT____Vcellout__imem_queue__deq_msg[1U] 
            = vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
            [vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
        vlSelf->ProcAlt_noparam__DOT__v__DOT____Vcellout__imem_queue__deq_msg[2U] 
            = vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
            [vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    }
    vlSelf->proc2mngr_val = ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
                             | (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    vlSelf->dmem_respstream_rdy = ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__next_val_M) 
                                   & (0U != (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__dmem_type_M)));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__stall_D 
        = ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_D) 
           & (IData)(ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_11));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__next_val_X 
        = ((~ (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__stall_X)) 
           & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_X));
    vlSelf->imem_reqstream_msg[0U] = vlSelf->ProcAlt_noparam__DOT__v__DOT____Vcellout__imem_queue__deq_msg[0U];
    vlSelf->imem_reqstream_msg[1U] = vlSelf->ProcAlt_noparam__DOT__v__DOT____Vcellout__imem_queue__deq_msg[1U];
    vlSelf->imem_reqstream_msg[2U] = vlSelf->ProcAlt_noparam__DOT__v__DOT____Vcellout__imem_queue__deq_msg[2U];
    vlSelf->ProcAlt_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((IData)(vlSelf->proc2mngr_rdy) & (IData)(vlSelf->proc2mngr_val));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_14 
        = ((~ (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__stall_D)) 
           & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_D));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__imul_resp_rdy_X 
        = ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__next_val_X) 
           & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__mul_X));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq 
        = ((~ (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__next_val_X) 
              & (0U != (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_type_X))));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__osquash_X 
        = ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__next_val_X) 
           & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__pc_redirect_X));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__write_en 
        = ((~ ((~ (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
               & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
                  & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)))) 
           & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    vlSelf->mngr2proc_rdy = ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_14) 
                             & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__mngr2proc_rdy_D));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__result_mux_sel = 1U;
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__add_mux_sel = 0U;
    if ((0U == (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__control_unit__DOT__state))) {
        vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__result_mux_sel = 1U;
        vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__add_mux_sel = 0U;
    } else if ((1U == (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__control_unit__DOT__state))) {
        vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__result_mux_sel = 1U;
        vlSelf->__Vtask_ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__control_unit__DOT__cs__115__cs_add_mux_sel 
            = (1U & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg);
        vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__add_mux_sel 
            = vlSelf->__Vtask_ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__control_unit__DOT__cs__115__cs_add_mux_sel;
    } else if ((2U == (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__control_unit__DOT__state))) {
        vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__result_mux_sel 
            = (1U & (~ (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imul_resp_rdy_X)));
        if (vlSelf->ProcAlt_noparam__DOT__v__DOT__imul_resp_rdy_X) {
            vlSelf->__Vtask_ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__control_unit__DOT__cs__116__cs_add_mux_sel 
                = (1U & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg);
            vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__add_mux_sel 
                = vlSelf->__Vtask_ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__control_unit__DOT__cs__116__cs_add_mux_sel;
        } else {
            vlSelf->__Vtask_ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__control_unit__DOT__cs__117__cs_add_mux_sel 
                = (1U & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg);
            vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__add_mux_sel 
                = vlSelf->__Vtask_ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__control_unit__DOT__cs__117__cs_add_mux_sel;
        }
    }
    vlSelf->dmem_reqstream_val = ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
                                  | (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__squash_D 
        = ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_D) 
           & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__osquash_X));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_respstream_drop 
        = ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_F) 
           & (((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_D) 
               & (1U == (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__jump_D))) 
              | (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__osquash_X)));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = ((~ (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
           & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__write_en) 
              | (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__add_mux_reg 
        = ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__add_mux_sel)
            ? ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__add_mux_sel)
                ? (vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg 
                   + vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg)
                : 0U) : vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((IData)(vlSelf->dmem_reqstream_rdy) & (IData)(vlSelf->dmem_reqstream_val));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__reg_en_D 
        = (1U & ((~ (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__stall_D)) 
                 | (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__squash_D)));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__imul_req_val_D 
        = ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__mul_D) 
           & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_D) 
              & ((~ (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__stall_D)) 
                 & (~ (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__squash_D)))));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_respstream_drop_val 
        = ((1U & (~ (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_respstream_drop_unit__DOT__state))) 
           && ((IData)(vlSelf->imem_respstream_val) 
               & (~ (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_respstream_drop))));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__write_en 
        = ((~ ((~ (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
               & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
                  & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)))) 
           & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    __Vtableidx2 = (((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imul_resp_rdy_X) 
                     << 4U) | ((8U & (((IData)(1U) 
                                       + (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT____Vcellout__max_extractor__out)) 
                                      >> 2U)) | (((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imul_req_val_D) 
                                                  << 2U) 
                                                 | (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__control_unit__DOT__state))));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__control_unit__DOT__state_next 
        = VProcAlt_noparam__ConstPool__TABLE_hcd563ae5_0
        [__Vtableidx2];
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__stall_F 
        = ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_F) 
           & (((~ (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_respstream_drop_val)) 
               & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_F)) 
              | (IData)(ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_11)));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = ((~ (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
           & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__write_en) 
              | (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_respstream_drop_rdy 
        = (1U & ((~ (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__stall_F)) 
                 | (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_respstream_drop)));
    vlSelf->imem_respstream_rdy = ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_respstream_drop_unit__DOT__state) 
                                   || (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_respstream_drop_rdy));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_reqstream_enq_val 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_respstream_drop_rdy));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_respstream_drop_unit__DOT__next_state 
        = (1U & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_respstream_drop_unit__DOT__state)
                  ? (~ ((IData)(vlSelf->imem_respstream_rdy) 
                        & (IData)(vlSelf->imem_respstream_val)))
                  : ((~ ((IData)(vlSelf->imem_respstream_rdy) 
                         & (IData)(vlSelf->imem_respstream_val))) 
                     & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_respstream_drop))));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq 
        = ((~ (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_reqstream_enq_val));
    vlSelf->imem_reqstream_val = (1U & ((~ (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__bypass_mux_sel)) 
                                        | ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__bypass_mux_sel) 
                                           & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_reqstream_enq_val))));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((IData)(vlSelf->imem_reqstream_rdy) & (IData)(vlSelf->imem_reqstream_val));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
            & ((~ (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((1U & ((IData)(1U) + (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass 
        = ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__bypass_mux_sel) 
           & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
              & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (1U & (((~ (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass)) 
                  & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq))
                  ? ((IData)(1U) + (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr))
                  : (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass)) 
           & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (1U & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__write_en)
                  ? ((IData)(1U) + (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                  : (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
}

VL_ATTR_COLD void VProcAlt_noparam___024root___eval_triggers__stl(VProcAlt_noparam___024root* vlSelf);

VL_ATTR_COLD bool VProcAlt_noparam___024root___eval_phase__stl(VProcAlt_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VProcAlt_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcAlt_noparam___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VProcAlt_noparam___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VProcAlt_noparam___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VProcAlt_noparam___024root___dump_triggers__ico(VProcAlt_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VProcAlt_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcAlt_noparam___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void VProcAlt_noparam___024root___dump_triggers__act(VProcAlt_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VProcAlt_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcAlt_noparam___024root___dump_triggers__act\n"); );
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
VL_ATTR_COLD void VProcAlt_noparam___024root___dump_triggers__nba(VProcAlt_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VProcAlt_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcAlt_noparam___024root___dump_triggers__nba\n"); );
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

VL_ATTR_COLD void VProcAlt_noparam___024root___ctor_var_reset(VProcAlt_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VProcAlt_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcAlt_noparam___024root___ctor_var_reset\n"); );
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
    vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_reqstream_enq_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(78, vlSelf->ProcAlt_noparam__DOT__v__DOT____Vcellout__imem_queue__deq_msg);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_respstream_drop = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_respstream_drop_val = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_respstream_drop_rdy = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(78, vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_reqstream_enq_msg);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_type_X = VL_RAND_RESET_I(2);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_reqstream_enq_msg_data = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(78, vlSelf->ProcAlt_noparam__DOT__v__DOT____Vcellout__dmem_queue__deq_msg);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__pc_sel_F = VL_RAND_RESET_I(2);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__reg_en_D = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__op1_sel_D = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__op2_sel_D = VL_RAND_RESET_I(2);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__csrr_sel_D = VL_RAND_RESET_I(2);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__imm_type_D = VL_RAND_RESET_I(3);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__alu_fn_X = VL_RAND_RESET_I(4);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ex_result_sel_X = VL_RAND_RESET_I(3);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__wb_result_sel_M = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__rf_waddr_W = VL_RAND_RESET_I(5);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__rf_wen_W = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__imul_req_val_D = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__imul_req_rdy_D = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__imul_resp_val_X = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__imul_resp_rdy_X = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D = VL_RAND_RESET_I(32);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__bypass_sel_1 = VL_RAND_RESET_I(2);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__bypass_sel_2 = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(4096, vlSelf->ProcAlt_noparam__DOT__v__DOT__str);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(78, vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_respstream_drop_unit__DOT__state = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_respstream_drop_unit__DOT__next_state = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(78, vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore = VL_RAND_RESET_I(32);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_F = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_D = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_X = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_M = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_W = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__ostall_W = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__stall_F = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__stall_D = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__stall_X = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__stall_M = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__stall_W = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__osquash_X = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__squash_D = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__pc_sel_D = VL_RAND_RESET_I(2);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__pc_redirect_D = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__pc_redirect_X = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__pc_sel_X = VL_RAND_RESET_I(2);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__inst_val_D = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__br_type_D = VL_RAND_RESET_I(3);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rs1_en_D = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rs2_en_D = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__alu_fn_D = VL_RAND_RESET_I(4);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__ex_result_sel_D = VL_RAND_RESET_I(3);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__dmem_type_D = VL_RAND_RESET_I(2);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__wb_result_sel_D = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rf_wen_D = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__csrr_D = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__csrw_D = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__mul_D = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__jump_D = VL_RAND_RESET_I(2);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__proc2mngr_val_D = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__mngr2proc_rdy_D = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__stats_en_wen_D = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__debug_mul_valid_then_bypass = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__bypass_waddr_X_rs1_D = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__bypass_waddr_X_rs2_D = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__inst_X = VL_RAND_RESET_I(32);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__wb_result_sel_X = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rf_wen_X = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rf_waddr_X = VL_RAND_RESET_I(5);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__proc2mngr_val_X = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__stats_en_wen_X = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__br_type_X = VL_RAND_RESET_I(3);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__mul_X = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__jump_X = VL_RAND_RESET_I(2);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__next_val_X = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__inst_M = VL_RAND_RESET_I(32);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__dmem_type_M = VL_RAND_RESET_I(2);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rf_wen_M = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rf_waddr_M = VL_RAND_RESET_I(5);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__proc2mngr_val_M = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__stats_en_wen_M = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__ex_result_sel_M = VL_RAND_RESET_I(3);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__next_val_M = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__inst_W = VL_RAND_RESET_I(32);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__proc2mngr_val_W = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rf_wen_pending_W = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__stats_en_wen_pending_W = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__ex_result_sel_W = VL_RAND_RESET_I(3);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_2 = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_4 = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_10 = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_12 = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_13 = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_14 = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__inst_unpack__DOT__funct7 = VL_RAND_RESET_I(7);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__pc_F = VL_RAND_RESET_I(32);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__pc_next_F = VL_RAND_RESET_I(32);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__br_target_X = VL_RAND_RESET_I(32);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__jal_target_D = VL_RAND_RESET_I(32);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__pc_D = VL_RAND_RESET_I(32);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imm_D = VL_RAND_RESET_I(32);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf_rdata0_D = VL_RAND_RESET_I(32);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf_rdata1_D = VL_RAND_RESET_I(32);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op2_D = VL_RAND_RESET_I(32);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op1_X = VL_RAND_RESET_I(32);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op2_X = VL_RAND_RESET_I(32);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__pc_X = VL_RAND_RESET_I(32);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__alu_result_X = VL_RAND_RESET_I(32);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__ex_result_X_out = VL_RAND_RESET_I(32);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__ex_result_M = VL_RAND_RESET_I(32);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__wb_result_M = VL_RAND_RESET_I(32);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__wb_result_W = VL_RAND_RESET_I(32);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__stats_en_W = VL_RAND_RESET_I(32);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__inst_unpack__DOT__funct7 = VL_RAND_RESET_I(7);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__result_en = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__a_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__b_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__result_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__add_mux_sel = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(4096, vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__str);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg = VL_RAND_RESET_I(32);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_shift = VL_RAND_RESET_I(32);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg = VL_RAND_RESET_I(32);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_shift = VL_RAND_RESET_I(32);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg = VL_RAND_RESET_I(32);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__add_mux_reg = VL_RAND_RESET_I(32);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding = VL_RAND_RESET_I(32);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT____Vcellout__max_extractor__out = VL_RAND_RESET_I(5);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__control_unit__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__control_unit__DOT__state_next = VL_RAND_RESET_I(2);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len1 = VL_RAND_RESET_I(32);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__storage);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__cycles = VL_RAND_RESET_I(32);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__tinyrv2__DOT__rs1_str = VL_RAND_RESET_I(24);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__tinyrv2__DOT__rs2_str = VL_RAND_RESET_I(24);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__tinyrv2__DOT__rd_str = VL_RAND_RESET_I(24);
    VL_RAND_RESET_W(72, vlSelf->ProcAlt_noparam__DOT__v__DOT__tinyrv2__DOT__csr_str);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__tinyrv2__DOT__funct_str = VL_RAND_RESET_I(16);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__tinyrv2__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__tinyrv2__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__tinyrv2__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__tinyrv2__DOT__csr = VL_RAND_RESET_I(12);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__tinyrv2__DOT__funct = VL_RAND_RESET_I(7);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__vc_trace__DOT__len1 = VL_RAND_RESET_I(32);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->ProcAlt_noparam__DOT__v__DOT__vc_trace__DOT__storage);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__vc_trace__DOT__cycles = VL_RAND_RESET_I(32);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__type_str = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(4096, vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__str);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len1 = VL_RAND_RESET_I(32);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__storage);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__cycles = VL_RAND_RESET_I(32);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__type_str = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(4096, vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__str);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len1 = VL_RAND_RESET_I(32);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__storage);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__cycles = VL_RAND_RESET_I(32);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_respstream_trace__DOT__type_str = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(4096, vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_respstream_trace__DOT__str);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len1 = VL_RAND_RESET_I(32);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__storage);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__cycles = VL_RAND_RESET_I(32);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__type_str = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(4096, vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__str);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len1 = VL_RAND_RESET_I(32);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__storage);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__cycles = VL_RAND_RESET_I(32);
    vlSelf->__Vdpi_export_trigger = 0;
    vlSelf->__Vtask_ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__control_unit__DOT__cs__115__cs_add_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__control_unit__DOT__cs__116__cs_add_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__control_unit__DOT__cs__117__cs_add_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 11; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
