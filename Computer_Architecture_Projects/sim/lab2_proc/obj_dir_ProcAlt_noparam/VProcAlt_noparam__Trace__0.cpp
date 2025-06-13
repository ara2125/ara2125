// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VProcAlt_noparam__Syms.h"


void VProcAlt_noparam___024root__trace_chg_0_sub_0(VProcAlt_noparam___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VProcAlt_noparam___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcAlt_noparam___024root__trace_chg_0\n"); );
    // Init
    VProcAlt_noparam___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VProcAlt_noparam___024root*>(voidSelf);
    VProcAlt_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VProcAlt_noparam___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VProcAlt_noparam___024root__trace_chg_0_sub_0(VProcAlt_noparam___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VProcAlt_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcAlt_noparam___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<3>/*95:0*/ __Vtemp_2;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgWData(oldp+0,(vlSelf->ProcAlt_noparam__DOT__v__DOT__str),4096);
        bufp->chgIData(oldp+128,(vlSelf->ProcAlt_noparam__DOT__v__DOT__tinyrv2__DOT__rs1_str),24);
        bufp->chgIData(oldp+129,(vlSelf->ProcAlt_noparam__DOT__v__DOT__tinyrv2__DOT__rs2_str),24);
        bufp->chgIData(oldp+130,(vlSelf->ProcAlt_noparam__DOT__v__DOT__tinyrv2__DOT__rd_str),24);
        bufp->chgWData(oldp+131,(vlSelf->ProcAlt_noparam__DOT__v__DOT__tinyrv2__DOT__csr_str),72);
        bufp->chgSData(oldp+134,(vlSelf->ProcAlt_noparam__DOT__v__DOT__tinyrv2__DOT__funct_str),16);
        bufp->chgCData(oldp+135,(vlSelf->ProcAlt_noparam__DOT__v__DOT__tinyrv2__DOT__rs1),5);
        bufp->chgCData(oldp+136,(vlSelf->ProcAlt_noparam__DOT__v__DOT__tinyrv2__DOT__rs2),5);
        bufp->chgCData(oldp+137,(vlSelf->ProcAlt_noparam__DOT__v__DOT__tinyrv2__DOT__rd),5);
        bufp->chgSData(oldp+138,(vlSelf->ProcAlt_noparam__DOT__v__DOT__tinyrv2__DOT__csr),12);
        bufp->chgCData(oldp+139,(vlSelf->ProcAlt_noparam__DOT__v__DOT__tinyrv2__DOT__funct),7);
        bufp->chgIData(oldp+140,(vlSelf->ProcAlt_noparam__DOT__v__DOT__vc_trace__DOT__len0),32);
        bufp->chgIData(oldp+141,(vlSelf->ProcAlt_noparam__DOT__v__DOT__vc_trace__DOT__idx0),32);
        bufp->chgIData(oldp+142,(vlSelf->ProcAlt_noparam__DOT__v__DOT__vc_trace__DOT__idx1),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgWData(oldp+143,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__str),4096);
        bufp->chgIData(oldp+271,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0),32);
        bufp->chgIData(oldp+272,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len1),32);
        bufp->chgIData(oldp+273,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0),32);
        bufp->chgIData(oldp+274,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgSData(oldp+275,(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__type_str),16);
        bufp->chgWData(oldp+276,(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__str),4096);
        bufp->chgIData(oldp+404,(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0),32);
        bufp->chgIData(oldp+405,(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len1),32);
        bufp->chgIData(oldp+406,(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0),32);
        bufp->chgIData(oldp+407,(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgSData(oldp+408,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__type_str),16);
        bufp->chgWData(oldp+409,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__str),4096);
        bufp->chgIData(oldp+537,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0),32);
        bufp->chgIData(oldp+538,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len1),32);
        bufp->chgIData(oldp+539,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0),32);
        bufp->chgIData(oldp+540,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgSData(oldp+541,(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_respstream_trace__DOT__type_str),16);
        bufp->chgWData(oldp+542,(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_respstream_trace__DOT__str),4096);
        bufp->chgIData(oldp+670,(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0),32);
        bufp->chgIData(oldp+671,(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len1),32);
        bufp->chgIData(oldp+672,(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0),32);
        bufp->chgIData(oldp+673,(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgSData(oldp+674,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__type_str),16);
        bufp->chgWData(oldp+675,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__str),4096);
        bufp->chgIData(oldp+803,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0),32);
        bufp->chgIData(oldp+804,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len1),32);
        bufp->chgIData(oldp+805,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0),32);
        bufp->chgIData(oldp+806,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[7U] 
                     | vlSelf->__Vm_traceActivity[8U]))) {
        bufp->chgBit(oldp+807,((1U & (~ (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__stall_M)))));
        bufp->chgBit(oldp+808,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__stall_M));
        bufp->chgBit(oldp+809,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__next_val_M));
        bufp->chgIData(oldp+810,(((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__op1_sel_D)
                                   ? ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__op1_sel_D)
                                       ? vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__pc_D
                                       : 0U) : ((2U 
                                                 & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__bypass_sel_1))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__bypass_sel_1))
                                                  ? vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__wb_result_W
                                                  : vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__wb_result_M)
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__bypass_sel_1))
                                                  ? vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__ex_result_X_out
                                                  : vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf_rdata0_D)))),32);
        bufp->chgIData(oldp+811,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op2_D),32);
        bufp->chgIData(oldp+812,(((2U & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__bypass_sel_1))
                                   ? ((1U & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__bypass_sel_1))
                                       ? vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__wb_result_W
                                       : vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__wb_result_M)
                                   : ((1U & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__bypass_sel_1))
                                       ? vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__ex_result_X_out
                                       : vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf_rdata0_D))),32);
        bufp->chgIData(oldp+813,(((2U & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__bypass_sel_2))
                                   ? ((1U & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__bypass_sel_2))
                                       ? vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__wb_result_W
                                       : vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__wb_result_M)
                                   : ((1U & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__bypass_sel_2))
                                       ? vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__ex_result_X_out
                                       : vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf_rdata1_D))),32);
        bufp->chgIData(oldp+814,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__wb_result_M),32);
        bufp->chgQData(oldp+815,((((QData)((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op2_D)) 
                                   << 0x20U) | (QData)((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf_rdata0_D)))),64);
        bufp->chgBit(oldp+817,(vlSelf->ProcAlt_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__write_en));
        bufp->chgBit(oldp+818,(((~ (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
                                & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__write_en) 
                                   | (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)))));
        bufp->chgBit(oldp+819,(vlSelf->ProcAlt_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq));
        bufp->chgBit(oldp+820,(((~ (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
                                & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
                                   & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)))));
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[7U] 
                      | vlSelf->__Vm_traceActivity[8U]) 
                     | vlSelf->__Vm_traceActivity[0xaU]))) {
        bufp->chgBit(oldp+821,(((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__next_val_X) 
                                & (0U != (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_type_X)))));
        bufp->chgBit(oldp+822,(((~ (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_respstream_drop_val)) 
                                & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_F))));
        bufp->chgBit(oldp+823,(((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_F) 
                                & ((~ (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__stall_F)) 
                                   & (~ (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_respstream_drop))))));
        bufp->chgBit(oldp+824,(((~ (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
                                & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__write_en) 
                                   | (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)))));
        bufp->chgBit(oldp+825,(((~ (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
                                & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
                                   & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)))));
        bufp->chgIData(oldp+826,(((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__result_mux_sel)
                                   ? ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__result_mux_sel)
                                       ? ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__add_mux_sel)
                                           ? ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__add_mux_sel)
                                               ? (vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg 
                                                  + vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg)
                                               : 0U)
                                           : vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg)
                                       : 0U) : 0U)),32);
        bufp->chgIData(oldp+827,(((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__add_mux_sel)
                                   ? ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__add_mux_sel)
                                       ? (vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg 
                                          + vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg)
                                       : 0U) : vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg)),32);
        bufp->chgBit(oldp+828,((1U & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__write_en)
                                       ? ((IData)(1U) 
                                          + (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                       : (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)))));
        bufp->chgBit(oldp+829,((1U & (((~ (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass)) 
                                       & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq))
                                       ? ((IData)(1U) 
                                          + (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr))
                                       : (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))));
        bufp->chgBit(oldp+830,((((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
                                 & ((~ (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
                                    & ((1U & ((IData)(1U) 
                                              + (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                                       == (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
                                | ((~ ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                                       & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full))) 
                                   & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full)))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[7U] 
                     | vlSelf->__Vm_traceActivity[0xaU]))) {
        bufp->chgBit(oldp+831,(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_reqstream_enq_val));
        bufp->chgBit(oldp+832,(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_respstream_drop));
        bufp->chgBit(oldp+833,(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_respstream_drop_val));
        bufp->chgBit(oldp+834,(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_respstream_drop_rdy));
        bufp->chgBit(oldp+835,(vlSelf->ProcAlt_noparam__DOT__v__DOT__reg_en_D));
        bufp->chgBit(oldp+836,((1U & (~ (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__stall_X)))));
        bufp->chgBit(oldp+837,(vlSelf->ProcAlt_noparam__DOT__v__DOT__imul_req_val_D));
        bufp->chgBit(oldp+838,(vlSelf->ProcAlt_noparam__DOT__v__DOT__imul_resp_rdy_X));
        bufp->chgBit(oldp+839,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__stall_F));
        bufp->chgBit(oldp+840,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__stall_D));
        bufp->chgBit(oldp+841,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__stall_X));
        bufp->chgBit(oldp+842,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__osquash_X));
        bufp->chgBit(oldp+843,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__squash_D));
        bufp->chgBit(oldp+844,(((~ (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__squash_D)) 
                                & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_14))));
        bufp->chgBit(oldp+845,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__next_val_X));
        bufp->chgBit(oldp+846,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__write_en));
        bufp->chgBit(oldp+847,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
        bufp->chgBit(oldp+848,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq));
        bufp->chgBit(oldp+849,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__result_mux_sel));
        bufp->chgBit(oldp+850,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__add_mux_sel));
        bufp->chgCData(oldp+851,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__control_unit__DOT__state_next),2);
        bufp->chgBit(oldp+852,(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__write_en));
        bufp->chgBit(oldp+853,(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
        bufp->chgBit(oldp+854,(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq));
        bufp->chgBit(oldp+855,(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[8U])) {
        bufp->chgWData(oldp+856,(vlSelf->ProcAlt_noparam__DOT__v__DOT____Vcellout__imem_queue__deq_msg),78);
        bufp->chgWData(oldp+859,(vlSelf->ProcAlt_noparam__DOT__v__DOT____Vcellout__dmem_queue__deq_msg),78);
        bufp->chgCData(oldp+862,(((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full)
                                   ? 0U : ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__bypass_mux_sel)
                                            ? 2U : 
                                           (3U & (((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                                   > (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr))
                                                   ? 
                                                  ((IData)(2U) 
                                                   - 
                                                   ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                                    - (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))
                                                   : 
                                                  (((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                                    > (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                                    ? 
                                                   ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                                    - (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                                    : 0U)))))),2);
        __Vtemp_2[0U] = 0U;
        __Vtemp_2[1U] = (vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__pc_next_F 
                         << 2U);
        __Vtemp_2[2U] = (vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__pc_next_F 
                         >> 0x1eU);
        bufp->chgWData(oldp+863,(__Vtemp_2),78);
        bufp->chgBit(oldp+866,((1U & (~ (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full)))));
        bufp->chgIData(oldp+867,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__pc_next_F),32);
        bufp->chgBit(oldp+868,((1U & (~ (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)))));
        bufp->chgWData(oldp+869,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_reqstream_enq_msg),78);
        bufp->chgCData(oldp+872,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_type_X),2);
        bufp->chgIData(oldp+873,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__alu_result_X),32);
        bufp->chgIData(oldp+874,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_reqstream_enq_msg_data),32);
        bufp->chgBit(oldp+875,((1U & (~ (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)))));
        bufp->chgIData(oldp+876,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__wb_result_W),32);
        bufp->chgCData(oldp+877,(vlSelf->ProcAlt_noparam__DOT__v__DOT__pc_sel_F),2);
        bufp->chgBit(oldp+878,(vlSelf->ProcAlt_noparam__DOT__v__DOT__op1_sel_D));
        bufp->chgCData(oldp+879,(vlSelf->ProcAlt_noparam__DOT__v__DOT__op2_sel_D),2);
        bufp->chgCData(oldp+880,(vlSelf->ProcAlt_noparam__DOT__v__DOT__csrr_sel_D),2);
        bufp->chgCData(oldp+881,(vlSelf->ProcAlt_noparam__DOT__v__DOT__imm_type_D),3);
        bufp->chgCData(oldp+882,(vlSelf->ProcAlt_noparam__DOT__v__DOT__alu_fn_X),4);
        bufp->chgCData(oldp+883,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ex_result_sel_X),3);
        bufp->chgBit(oldp+884,(vlSelf->ProcAlt_noparam__DOT__v__DOT__wb_result_sel_M));
        bufp->chgBit(oldp+885,((1U & (~ (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__stall_W)))));
        bufp->chgCData(oldp+886,(vlSelf->ProcAlt_noparam__DOT__v__DOT__rf_waddr_W),5);
        bufp->chgBit(oldp+887,(vlSelf->ProcAlt_noparam__DOT__v__DOT__rf_wen_W));
        bufp->chgBit(oldp+888,(((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__stats_en_wen_pending_W) 
                                & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_W))));
        bufp->chgIData(oldp+889,(vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D),32);
        bufp->chgBit(oldp+890,((vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op1_X 
                                == vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op2_X)));
        bufp->chgBit(oldp+891,(VL_LTS_III(32, vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op1_X, vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op2_X)));
        bufp->chgBit(oldp+892,((vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op1_X 
                                < vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op2_X)));
        bufp->chgCData(oldp+893,(vlSelf->ProcAlt_noparam__DOT__v__DOT__bypass_sel_1),2);
        bufp->chgCData(oldp+894,(vlSelf->ProcAlt_noparam__DOT__v__DOT__bypass_sel_2),2);
        bufp->chgBit(oldp+895,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_F));
        bufp->chgBit(oldp+896,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_D));
        bufp->chgBit(oldp+897,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_X));
        bufp->chgBit(oldp+898,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_M));
        bufp->chgBit(oldp+899,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_W));
        bufp->chgBit(oldp+900,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__ostall_W));
        bufp->chgBit(oldp+901,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__stall_W));
        bufp->chgBit(oldp+902,(((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_D) 
                                & (1U == (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__jump_D)))));
        bufp->chgCData(oldp+903,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__pc_sel_D),2);
        bufp->chgBit(oldp+904,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__pc_redirect_D));
        bufp->chgBit(oldp+905,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__pc_redirect_X));
        bufp->chgCData(oldp+906,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__pc_sel_X),2);
        bufp->chgCData(oldp+907,((0x1fU & (vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D 
                                           >> 7U))),5);
        bufp->chgCData(oldp+908,((0x1fU & (vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+909,((0x1fU & (vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D 
                                           >> 0x14U))),5);
        bufp->chgSData(oldp+910,((vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D 
                                  >> 0x14U)),12);
        bufp->chgBit(oldp+911,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__inst_val_D));
        bufp->chgCData(oldp+912,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__br_type_D),3);
        bufp->chgBit(oldp+913,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rs1_en_D));
        bufp->chgBit(oldp+914,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rs2_en_D));
        bufp->chgCData(oldp+915,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__alu_fn_D),4);
        bufp->chgCData(oldp+916,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__ex_result_sel_D),3);
        bufp->chgCData(oldp+917,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__dmem_type_D),2);
        bufp->chgBit(oldp+918,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__wb_result_sel_D));
        bufp->chgBit(oldp+919,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rf_wen_D));
        bufp->chgBit(oldp+920,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__csrr_D));
        bufp->chgBit(oldp+921,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__csrw_D));
        bufp->chgBit(oldp+922,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__mul_D));
        bufp->chgCData(oldp+923,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__jump_D),2);
        bufp->chgBit(oldp+924,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__proc2mngr_val_D));
        bufp->chgBit(oldp+925,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__mngr2proc_rdy_D));
        bufp->chgBit(oldp+926,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__stats_en_wen_D));
        bufp->chgBit(oldp+927,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__debug_mul_valid_then_bypass));
        bufp->chgBit(oldp+928,(((~ (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__debug_mul_valid_then_bypass)) 
                                & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__bypass_waddr_X_rs1_D) 
                                   | (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__bypass_waddr_X_rs2_D)))));
        bufp->chgBit(oldp+929,(((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_D) 
                                & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rs1_en_D) 
                                   & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_X) 
                                      & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rf_wen_X) 
                                         & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_2) 
                                            & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_13))))))));
        bufp->chgBit(oldp+930,(((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_D) 
                                & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rs2_en_D) 
                                   & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_X) 
                                      & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rf_wen_X) 
                                         & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_4) 
                                            & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_13))))))));
        bufp->chgBit(oldp+931,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__bypass_waddr_X_rs1_D));
        bufp->chgBit(oldp+932,(((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rs1_en_D) 
                                & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rf_wen_M) 
                                   & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_M) 
                                      & (((0x1fU & 
                                           (vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D 
                                            >> 0xfU)) 
                                          == (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rf_waddr_M)) 
                                         & (0U != (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rf_waddr_M))))))));
        bufp->chgBit(oldp+933,(((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rs1_en_D) 
                                & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_12) 
                                   & (((0x1fU & (vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D 
                                                 >> 0xfU)) 
                                       == (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__rf_waddr_W)) 
                                      & (0U != (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__rf_waddr_W)))))));
        bufp->chgBit(oldp+934,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__bypass_waddr_X_rs2_D));
        bufp->chgBit(oldp+935,(((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rs2_en_D) 
                                & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rf_wen_M) 
                                   & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_M) 
                                      & (((0x1fU & 
                                           (vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D 
                                            >> 0x14U)) 
                                          == (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rf_waddr_M)) 
                                         & (0U != (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rf_waddr_M))))))));
        bufp->chgBit(oldp+936,(((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rs2_en_D) 
                                & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_12) 
                                   & (((0x1fU & (vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D 
                                                 >> 0x14U)) 
                                       == (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__rf_waddr_W)) 
                                      & (0U != (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__rf_waddr_W)))))));
        bufp->chgBit(oldp+937,(((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_D) 
                                & (((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rs1_en_D) 
                                    & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_X) 
                                       & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rf_wen_X) 
                                          & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_2) 
                                             & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_13))))) 
                                   | ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rs2_en_D) 
                                      & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_X) 
                                         & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rf_wen_X) 
                                            & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_4) 
                                               & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_13)))))))));
        bufp->chgIData(oldp+938,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__inst_X),32);
        bufp->chgBit(oldp+939,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__wb_result_sel_X));
        bufp->chgBit(oldp+940,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rf_wen_X));
        bufp->chgCData(oldp+941,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rf_waddr_X),5);
        bufp->chgBit(oldp+942,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__proc2mngr_val_X));
        bufp->chgBit(oldp+943,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__stats_en_wen_X));
        bufp->chgCData(oldp+944,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__br_type_X),3);
        bufp->chgBit(oldp+945,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__mul_X));
        bufp->chgCData(oldp+946,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__jump_X),2);
        bufp->chgIData(oldp+947,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__inst_M),32);
        bufp->chgCData(oldp+948,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__dmem_type_M),2);
        bufp->chgBit(oldp+949,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rf_wen_M));
        bufp->chgCData(oldp+950,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rf_waddr_M),5);
        bufp->chgBit(oldp+951,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__proc2mngr_val_M));
        bufp->chgBit(oldp+952,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__stats_en_wen_M));
        bufp->chgCData(oldp+953,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__ex_result_sel_M),3);
        bufp->chgIData(oldp+954,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__inst_W),32);
        bufp->chgBit(oldp+955,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__proc2mngr_val_W));
        bufp->chgBit(oldp+956,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rf_wen_pending_W));
        bufp->chgBit(oldp+957,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__stats_en_wen_pending_W));
        bufp->chgCData(oldp+958,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__ex_result_sel_W),3);
        bufp->chgCData(oldp+959,((0x7fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)),7);
        bufp->chgCData(oldp+960,((7U & (vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D 
                                        >> 0xcU))),3);
        bufp->chgBit(oldp+961,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full));
        bufp->chgWData(oldp+962,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore),78);
        bufp->chgCData(oldp+965,((0xfU & (vlSelf->ProcAlt_noparam__DOT__v__DOT____Vcellout__dmem_queue__deq_msg[2U] 
                                          >> 0xaU))),4);
        bufp->chgCData(oldp+966,((0xffU & (vlSelf->ProcAlt_noparam__DOT__v__DOT____Vcellout__dmem_queue__deq_msg[2U] 
                                           >> 2U))),8);
        bufp->chgIData(oldp+967,(((vlSelf->ProcAlt_noparam__DOT__v__DOT____Vcellout__dmem_queue__deq_msg[2U] 
                                   << 0x1eU) | (vlSelf->ProcAlt_noparam__DOT__v__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                                                >> 2U))),32);
        bufp->chgCData(oldp+968,((3U & vlSelf->ProcAlt_noparam__DOT__v__DOT____Vcellout__dmem_queue__deq_msg[1U])),2);
        bufp->chgIData(oldp+969,(vlSelf->ProcAlt_noparam__DOT__v__DOT____Vcellout__dmem_queue__deq_msg[0U]),32);
        bufp->chgIData(oldp+970,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__cycles),32);
        bufp->chgIData(oldp+971,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__cycles),32);
        bufp->chgIData(oldp+972,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__pc_F),32);
        bufp->chgIData(oldp+973,(((IData)(4U) + vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__pc_F)),32);
        bufp->chgIData(oldp+974,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__br_target_X),32);
        bufp->chgIData(oldp+975,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__jal_target_D),32);
        bufp->chgIData(oldp+976,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__pc_D),32);
        bufp->chgIData(oldp+977,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imm_D),32);
        bufp->chgIData(oldp+978,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf_rdata0_D),32);
        bufp->chgIData(oldp+979,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf_rdata1_D),32);
        bufp->chgIData(oldp+980,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op1_X),32);
        bufp->chgIData(oldp+981,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op2_X),32);
        bufp->chgIData(oldp+982,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__pc_X),32);
        bufp->chgIData(oldp+983,(((IData)(4U) + vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__pc_X)),32);
        bufp->chgIData(oldp+984,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__ex_result_X_out),32);
        bufp->chgIData(oldp+985,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg),32);
        bufp->chgIData(oldp+986,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__ex_result_M),32);
        bufp->chgIData(oldp+987,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__stats_en_W),32);
        bufp->chgCData(oldp+988,((3U & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ex_result_sel_X))),2);
        bufp->chgBit(oldp+989,((1U & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)));
        bufp->chgBit(oldp+990,((1U & (((IData)(1U) 
                                       + (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT____Vcellout__max_extractor__out)) 
                                      >> 5U))));
        bufp->chgIData(oldp+991,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg),32);
        bufp->chgIData(oldp+992,(VL_SHIFTL_III(32,32,6, vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg, 
                                               (0x3fU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT____Vcellout__max_extractor__out))))),32);
        bufp->chgIData(oldp+993,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg),32);
        bufp->chgIData(oldp+994,(VL_SHIFTR_III(32,32,6, vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg, 
                                               (0x3fU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT____Vcellout__max_extractor__out))))),32);
        bufp->chgIData(oldp+995,((vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg 
                                  + vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg)),32);
        bufp->chgCData(oldp+996,((0x3fU & ((IData)(1U) 
                                           + (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT____Vcellout__max_extractor__out)))),6);
        bufp->chgIData(oldp+997,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding),32);
        bufp->chgCData(oldp+998,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT____Vcellout__max_extractor__out),6);
        bufp->chgBit(oldp+999,((1U & (~ vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg))));
        bufp->chgSData(oldp+1000,((0x7ffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)),11);
        bufp->chgBit(oldp+1001,((0U == (0x7ffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg))));
        bufp->chgSData(oldp+1002,((0xfffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)),12);
        bufp->chgBit(oldp+1003,((0U == (0xfffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg))));
        bufp->chgSData(oldp+1004,((0x1fffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)),13);
        bufp->chgBit(oldp+1005,((0U == (0x1fffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg))));
        bufp->chgSData(oldp+1006,((0x3fffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)),14);
        bufp->chgBit(oldp+1007,((0U == (0x3fffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg))));
        bufp->chgSData(oldp+1008,((0x7fffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)),15);
        bufp->chgBit(oldp+1009,((0U == (0x7fffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg))));
        bufp->chgSData(oldp+1010,((0xffffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)),16);
        bufp->chgBit(oldp+1011,((0U == (0xffffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg))));
        bufp->chgIData(oldp+1012,((0x1ffffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)),17);
        bufp->chgBit(oldp+1013,((0U == (0x1ffffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg))));
        bufp->chgIData(oldp+1014,((0x3ffffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)),18);
        bufp->chgBit(oldp+1015,((0U == (0x3ffffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg))));
        bufp->chgIData(oldp+1016,((0x7ffffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)),19);
        bufp->chgBit(oldp+1017,((0U == (0x7ffffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg))));
        bufp->chgIData(oldp+1018,((0xfffffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)),20);
        bufp->chgBit(oldp+1019,((0U == (0xfffffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg))));
        bufp->chgCData(oldp+1020,((3U & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)),2);
        bufp->chgBit(oldp+1021,((0U == (3U & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg))));
        bufp->chgIData(oldp+1022,((0x1fffffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)),21);
        bufp->chgBit(oldp+1023,((0U == (0x1fffffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg))));
        bufp->chgIData(oldp+1024,((0x3fffffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)),22);
        bufp->chgBit(oldp+1025,((0U == (0x3fffffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg))));
        bufp->chgIData(oldp+1026,((0x7fffffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)),23);
        bufp->chgBit(oldp+1027,((0U == (0x7fffffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg))));
        bufp->chgIData(oldp+1028,((0xffffffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)),24);
        bufp->chgBit(oldp+1029,((0U == (0xffffffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg))));
        bufp->chgIData(oldp+1030,((0x1ffffffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)),25);
        bufp->chgBit(oldp+1031,((0U == (0x1ffffffU 
                                        & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg))));
        bufp->chgIData(oldp+1032,((0x3ffffffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)),26);
        bufp->chgBit(oldp+1033,((0U == (0x3ffffffU 
                                        & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg))));
        bufp->chgIData(oldp+1034,((0x7ffffffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)),27);
        bufp->chgBit(oldp+1035,((0U == (0x7ffffffU 
                                        & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg))));
        bufp->chgIData(oldp+1036,((0xfffffffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)),28);
        bufp->chgBit(oldp+1037,((0U == (0xfffffffU 
                                        & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg))));
        bufp->chgIData(oldp+1038,((0x1fffffffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)),29);
        bufp->chgBit(oldp+1039,((0U == (0x1fffffffU 
                                        & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg))));
        bufp->chgIData(oldp+1040,((0x3fffffffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)),30);
        bufp->chgBit(oldp+1041,((0U == (0x3fffffffU 
                                        & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg))));
        bufp->chgCData(oldp+1042,((7U & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)),3);
        bufp->chgBit(oldp+1043,((0U == (7U & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg))));
        bufp->chgIData(oldp+1044,((0x7fffffffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)),31);
        bufp->chgBit(oldp+1045,((0U == (0x7fffffffU 
                                        & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg))));
        bufp->chgBit(oldp+1046,((0U == vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)));
        bufp->chgCData(oldp+1047,((0xfU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)),4);
        bufp->chgBit(oldp+1048,((0U == (0xfU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg))));
        bufp->chgCData(oldp+1049,((0x1fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)),5);
        bufp->chgBit(oldp+1050,((0U == (0x1fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg))));
        bufp->chgCData(oldp+1051,((0x3fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)),6);
        bufp->chgBit(oldp+1052,((0U == (0x3fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg))));
        bufp->chgCData(oldp+1053,((0x7fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)),7);
        bufp->chgBit(oldp+1054,((0U == (0x7fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg))));
        bufp->chgCData(oldp+1055,((0xffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)),8);
        bufp->chgBit(oldp+1056,((0U == (0xffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg))));
        bufp->chgSData(oldp+1057,((0x1ffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)),9);
        bufp->chgBit(oldp+1058,((0U == (0x1ffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg))));
        bufp->chgSData(oldp+1059,((0x3ffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)),10);
        bufp->chgBit(oldp+1060,((0U == (0x3ffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg))));
        bufp->chgCData(oldp+1061,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT____Vcellout__max_extractor__out),5);
        bufp->chgIData(oldp+1062,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__cycles),32);
        bufp->chgBit(oldp+1063,((1U & (IData)((1ULL 
                                               & (((QData)((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__pc_D)) 
                                                   + (QData)((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imm_D))) 
                                                  >> 0x20U))))));
        bufp->chgIData(oldp+1064,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile
                                  [(0x1fU & (vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D 
                                             >> 0xfU))]),32);
        bufp->chgIData(oldp+1065,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile
                                  [(0x1fU & (vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D 
                                             >> 0x14U))]),32);
        bufp->chgIData(oldp+1066,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[0]),32);
        bufp->chgIData(oldp+1067,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[1]),32);
        bufp->chgIData(oldp+1068,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[2]),32);
        bufp->chgIData(oldp+1069,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[3]),32);
        bufp->chgIData(oldp+1070,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[4]),32);
        bufp->chgIData(oldp+1071,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[5]),32);
        bufp->chgIData(oldp+1072,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[6]),32);
        bufp->chgIData(oldp+1073,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[7]),32);
        bufp->chgIData(oldp+1074,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[8]),32);
        bufp->chgIData(oldp+1075,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[9]),32);
        bufp->chgIData(oldp+1076,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[10]),32);
        bufp->chgIData(oldp+1077,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[11]),32);
        bufp->chgIData(oldp+1078,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[12]),32);
        bufp->chgIData(oldp+1079,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[13]),32);
        bufp->chgIData(oldp+1080,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[14]),32);
        bufp->chgIData(oldp+1081,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[15]),32);
        bufp->chgIData(oldp+1082,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[16]),32);
        bufp->chgIData(oldp+1083,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[17]),32);
        bufp->chgIData(oldp+1084,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[18]),32);
        bufp->chgIData(oldp+1085,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[19]),32);
        bufp->chgIData(oldp+1086,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[20]),32);
        bufp->chgIData(oldp+1087,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[21]),32);
        bufp->chgIData(oldp+1088,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[22]),32);
        bufp->chgIData(oldp+1089,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[23]),32);
        bufp->chgIData(oldp+1090,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[24]),32);
        bufp->chgIData(oldp+1091,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[25]),32);
        bufp->chgIData(oldp+1092,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[26]),32);
        bufp->chgIData(oldp+1093,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[27]),32);
        bufp->chgIData(oldp+1094,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[28]),32);
        bufp->chgIData(oldp+1095,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[29]),32);
        bufp->chgIData(oldp+1096,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[30]),32);
        bufp->chgIData(oldp+1097,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[31]),32);
        bufp->chgBit(oldp+1098,(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__bypass_mux_sel));
        bufp->chgBit(oldp+1099,(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr));
        bufp->chgBit(oldp+1100,(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr));
        bufp->chgBit(oldp+1101,(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full));
        bufp->chgBit(oldp+1102,((1U & ((IData)(1U) 
                                       + (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))));
        bufp->chgBit(oldp+1103,((1U & ((IData)(1U) 
                                       + (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)))));
        bufp->chgWData(oldp+1104,(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                                  [vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr]),78);
        bufp->chgWData(oldp+1107,(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[0]),78);
        bufp->chgWData(oldp+1110,(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[1]),78);
        bufp->chgCData(oldp+1113,((0xfU & (vlSelf->ProcAlt_noparam__DOT__v__DOT____Vcellout__imem_queue__deq_msg[2U] 
                                           >> 0xaU))),4);
        bufp->chgCData(oldp+1114,((0xffU & (vlSelf->ProcAlt_noparam__DOT__v__DOT____Vcellout__imem_queue__deq_msg[2U] 
                                            >> 2U))),8);
        bufp->chgIData(oldp+1115,(((vlSelf->ProcAlt_noparam__DOT__v__DOT____Vcellout__imem_queue__deq_msg[2U] 
                                    << 0x1eU) | (vlSelf->ProcAlt_noparam__DOT__v__DOT____Vcellout__imem_queue__deq_msg[1U] 
                                                 >> 2U))),32);
        bufp->chgCData(oldp+1116,((3U & vlSelf->ProcAlt_noparam__DOT__v__DOT____Vcellout__imem_queue__deq_msg[1U])),2);
        bufp->chgIData(oldp+1117,(vlSelf->ProcAlt_noparam__DOT__v__DOT____Vcellout__imem_queue__deq_msg[0U]),32);
        bufp->chgIData(oldp+1118,(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__cycles),32);
        bufp->chgBit(oldp+1119,(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_respstream_drop_unit__DOT__state));
        bufp->chgIData(oldp+1120,(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__cycles),32);
        bufp->chgBit(oldp+1121,(vlSelf->ProcAlt_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full));
        bufp->chgBit(oldp+1122,(vlSelf->ProcAlt_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
        bufp->chgIData(oldp+1123,(vlSelf->ProcAlt_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore),32);
        bufp->chgIData(oldp+1124,(vlSelf->ProcAlt_noparam__DOT__v__DOT__vc_trace__DOT__cycles),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[9U])) {
        bufp->chgBit(oldp+1125,(vlSelf->ProcAlt_noparam__DOT__v__DOT__imul_req_rdy_D));
        bufp->chgBit(oldp+1126,(vlSelf->ProcAlt_noparam__DOT__v__DOT__imul_resp_val_X));
        bufp->chgBit(oldp+1127,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__result_en));
        bufp->chgBit(oldp+1128,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__a_mux_sel));
        bufp->chgBit(oldp+1129,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__b_mux_sel));
        bufp->chgCData(oldp+1130,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__control_unit__DOT__state),2);
    }
    bufp->chgBit(oldp+1131,(vlSelf->clk));
    bufp->chgBit(oldp+1132,(vlSelf->commit_inst));
    bufp->chgIData(oldp+1133,(vlSelf->core_id),32);
    bufp->chgBit(oldp+1134,(vlSelf->reset));
    bufp->chgBit(oldp+1135,(vlSelf->stats_en));
    bufp->chgWData(oldp+1136,(vlSelf->dmem_reqstream_msg),78);
    bufp->chgBit(oldp+1139,(vlSelf->dmem_reqstream_rdy));
    bufp->chgBit(oldp+1140,(vlSelf->dmem_reqstream_val));
    bufp->chgQData(oldp+1141,(vlSelf->dmem_respstream_msg),48);
    bufp->chgBit(oldp+1143,(vlSelf->dmem_respstream_rdy));
    bufp->chgBit(oldp+1144,(vlSelf->dmem_respstream_val));
    bufp->chgWData(oldp+1145,(vlSelf->imem_reqstream_msg),78);
    bufp->chgBit(oldp+1148,(vlSelf->imem_reqstream_rdy));
    bufp->chgBit(oldp+1149,(vlSelf->imem_reqstream_val));
    bufp->chgQData(oldp+1150,(vlSelf->imem_respstream_msg),48);
    bufp->chgBit(oldp+1152,(vlSelf->imem_respstream_rdy));
    bufp->chgBit(oldp+1153,(vlSelf->imem_respstream_val));
    bufp->chgIData(oldp+1154,(vlSelf->mngr2proc_msg),32);
    bufp->chgBit(oldp+1155,(vlSelf->mngr2proc_rdy));
    bufp->chgBit(oldp+1156,(vlSelf->mngr2proc_val));
    bufp->chgIData(oldp+1157,(vlSelf->proc2mngr_msg),32);
    bufp->chgBit(oldp+1158,(vlSelf->proc2mngr_rdy));
    bufp->chgBit(oldp+1159,(vlSelf->proc2mngr_val));
    bufp->chgBit(oldp+1160,(((IData)(vlSelf->commit_inst) 
                             & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__proc2mngr_val_W))));
    bufp->chgBit(oldp+1161,(((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_D) 
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
                                      & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__mul_D)))))));
    bufp->chgBit(oldp+1162,(((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_X) 
                             & (((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
                                 & (0U != (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_type_X))) 
                                | ((~ (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imul_resp_val_X)) 
                                   & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__mul_X))))));
    bufp->chgBit(oldp+1163,(((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_M) 
                             & ((~ (IData)(vlSelf->dmem_respstream_val)) 
                                & (0U != (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__dmem_type_M))))));
    bufp->chgBit(oldp+1164,(((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_D) 
                             & ((~ (IData)(vlSelf->mngr2proc_val)) 
                                & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__mngr2proc_rdy_D)))));
    bufp->chgCData(oldp+1165,((0xfU & (IData)((vlSelf->dmem_respstream_msg 
                                               >> 0x2cU)))),4);
    bufp->chgCData(oldp+1166,((0xffU & (IData)((vlSelf->dmem_respstream_msg 
                                                >> 0x24U)))),8);
    bufp->chgCData(oldp+1167,((3U & (IData)((vlSelf->dmem_respstream_msg 
                                             >> 0x22U)))),2);
    bufp->chgCData(oldp+1168,((3U & (IData)((vlSelf->dmem_respstream_msg 
                                             >> 0x20U)))),2);
    bufp->chgIData(oldp+1169,((IData)(vlSelf->dmem_respstream_msg)),32);
    bufp->chgIData(oldp+1170,(((0U == (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__csrr_sel_D))
                                ? vlSelf->mngr2proc_msg
                                : ((1U == (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__csrr_sel_D))
                                    ? 1U : ((2U == (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__csrr_sel_D))
                                             ? vlSelf->core_id
                                             : 0U)))),32);
    bufp->chgIData(oldp+1171,(((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__a_mux_sel)
                                ? ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__a_mux_sel)
                                    ? VL_SHIFTL_III(32,32,6, vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg, 
                                                    (0x3fU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT____Vcellout__max_extractor__out))))
                                    : 0U) : vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op2_D)),32);
    bufp->chgIData(oldp+1172,(((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__b_mux_sel)
                                ? ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__b_mux_sel)
                                    ? VL_SHIFTR_III(32,32,6, vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg, 
                                                    (0x3fU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT____Vcellout__max_extractor__out))))
                                    : 0U) : vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf_rdata0_D)),32);
    bufp->chgIData(oldp+1173,((IData)(vlSelf->imem_respstream_msg)),32);
    bufp->chgBit(oldp+1174,((1U & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_respstream_drop_unit__DOT__state)
                                    ? (~ ((IData)(vlSelf->imem_respstream_rdy) 
                                          & (IData)(vlSelf->imem_respstream_val)))
                                    : ((~ ((IData)(vlSelf->imem_respstream_rdy) 
                                           & (IData)(vlSelf->imem_respstream_val))) 
                                       & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_respstream_drop))))));
    bufp->chgBit(oldp+1175,(((IData)(vlSelf->imem_respstream_rdy) 
                             & (IData)(vlSelf->imem_respstream_val))));
    bufp->chgCData(oldp+1176,((0xfU & (IData)((vlSelf->imem_respstream_msg 
                                               >> 0x2cU)))),4);
    bufp->chgCData(oldp+1177,((0xffU & (IData)((vlSelf->imem_respstream_msg 
                                                >> 0x24U)))),8);
    bufp->chgCData(oldp+1178,((3U & (IData)((vlSelf->imem_respstream_msg 
                                             >> 0x22U)))),2);
    bufp->chgCData(oldp+1179,((3U & (IData)((vlSelf->imem_respstream_msg 
                                             >> 0x20U)))),2);
}

void VProcAlt_noparam___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcAlt_noparam___024root__trace_cleanup\n"); );
    // Init
    VProcAlt_noparam___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VProcAlt_noparam___024root*>(voidSelf);
    VProcAlt_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xaU] = 0U;
}
