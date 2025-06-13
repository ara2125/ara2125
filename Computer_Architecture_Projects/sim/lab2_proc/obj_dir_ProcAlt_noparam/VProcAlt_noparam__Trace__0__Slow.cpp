// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VProcAlt_noparam__Syms.h"


VL_ATTR_COLD void VProcAlt_noparam___024root__trace_init_sub__TOP__0(VProcAlt_noparam___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VProcAlt_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcAlt_noparam___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1132,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1133,0,"commit_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1134,0,"core_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1135,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1136,0,"stats_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declArray(c+1137,0,"dmem_reqstream_msg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 77,0);
    tracep->declBus(c+1140,0,"dmem_reqstream_rdy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1141,0,"dmem_reqstream_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declQuad(c+1142,0,"dmem_respstream_msg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+1144,0,"dmem_respstream_rdy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1145,0,"dmem_respstream_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declArray(c+1146,0,"imem_reqstream_msg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 77,0);
    tracep->declBus(c+1149,0,"imem_reqstream_rdy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1150,0,"imem_reqstream_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declQuad(c+1151,0,"imem_respstream_msg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+1153,0,"imem_respstream_rdy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1154,0,"imem_respstream_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1155,0,"mngr2proc_msg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1156,0,"mngr2proc_rdy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1157,0,"mngr2proc_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1158,0,"proc2mngr_msg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1159,0,"proc2mngr_rdy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1160,0,"proc2mngr_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("ProcAlt_noparam", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1132,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1133,0,"commit_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1134,0,"core_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1135,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1136,0,"stats_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declArray(c+1137,0,"dmem_reqstream_msg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 77,0);
    tracep->declBus(c+1140,0,"dmem_reqstream_rdy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1141,0,"dmem_reqstream_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declQuad(c+1142,0,"dmem_respstream_msg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+1144,0,"dmem_respstream_rdy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1145,0,"dmem_respstream_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declArray(c+1146,0,"imem_reqstream_msg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 77,0);
    tracep->declBus(c+1149,0,"imem_reqstream_rdy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1150,0,"imem_reqstream_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declQuad(c+1151,0,"imem_respstream_msg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+1153,0,"imem_respstream_rdy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1154,0,"imem_respstream_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1155,0,"mngr2proc_msg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1156,0,"mngr2proc_rdy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1157,0,"mngr2proc_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1158,0,"proc2mngr_msg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1159,0,"proc2mngr_rdy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1160,0,"proc2mngr_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("v", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1181,0,"p_num_cores",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1132,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1135,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1155,0,"mngr2proc_msg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1157,0,"mngr2proc_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1156,0,"mngr2proc_rdy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1158,0,"proc2mngr_msg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1160,0,"proc2mngr_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1159,0,"proc2mngr_rdy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+857,0,"imem_reqstream_msg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 77,0);
    tracep->declBit(c+1150,0,"imem_reqstream_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1149,0,"imem_reqstream_rdy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1151,0,"imem_respstream_msg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBit(c+1154,0,"imem_respstream_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1153,0,"imem_respstream_rdy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+860,0,"dmem_reqstream_msg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 77,0);
    tracep->declBit(c+1141,0,"dmem_reqstream_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1140,0,"dmem_reqstream_rdy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1142,0,"dmem_respstream_msg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBit(c+1145,0,"dmem_respstream_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1144,0,"dmem_respstream_rdy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1134,0,"core_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1133,0,"commit_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1136,0,"stats_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+863,0,"imem_queue_num_free_entries",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declArray(c+864,0,"imem_reqstream_enq_msg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 77,0);
    tracep->declBit(c+832,0,"imem_reqstream_enq_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"imem_reqstream_enq_rdy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+868,0,"imem_reqstream_enq_msg_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+833,0,"imem_respstream_drop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1151,0,"imem_respstream_drop_msg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBit(c+834,0,"imem_respstream_drop_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+835,0,"imem_respstream_drop_rdy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+869,0,"dmem_queue_num_free_entries",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+870,0,"dmem_reqstream_enq_msg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 77,0);
    tracep->declBit(c+822,0,"dmem_reqstream_enq_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+869,0,"dmem_reqstream_enq_rdy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+873,0,"dmem_type_X",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+874,0,"dmem_reqstream_enq_msg_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+875,0,"dmem_reqstream_enq_msg_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+876,0,"proc2mngr_queue_num_free_entries",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+877,0,"proc2mngr_enq_msg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1161,0,"proc2mngr_enq_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"proc2mngr_enq_rdy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+835,0,"reg_en_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+878,0,"pc_sel_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+836,0,"reg_en_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+879,0,"op1_sel_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+880,0,"op2_sel_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+881,0,"csrr_sel_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+882,0,"imm_type_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+837,0,"reg_en_X",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+883,0,"alu_fn_X",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+884,0,"ex_result_sel_X",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+808,0,"reg_en_M",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+885,0,"wb_result_sel_M",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+886,0,"reg_en_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+887,0,"rf_waddr_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+888,0,"rf_wen_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+889,0,"stats_en_wen_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+838,0,"imul_req_val_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1126,0,"imul_req_rdy_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1127,0,"imul_resp_val_X",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+839,0,"imul_resp_rdy_X",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+890,0,"inst_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+891,0,"br_cond_eq_X",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+892,0,"br_cond_lt_X",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+893,0,"br_cond_ltu_X",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+894,0,"bypass_sel_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+895,0,"bypass_sel_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declArray(c+1,0,"str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4095,0);
    tracep->pushPrefix("ctrl", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1132,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1135,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"imem_reqstream_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"imem_reqstream_rdy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+834,0,"imem_respstream_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+835,0,"imem_respstream_rdy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+833,0,"imem_respstream_drop",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+822,0,"dmem_reqstream_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+869,0,"dmem_reqstream_rdy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1145,0,"dmem_respstream_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1144,0,"dmem_respstream_rdy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1157,0,"mngr2proc_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1156,0,"mngr2proc_rdy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1161,0,"proc2mngr_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"proc2mngr_rdy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+835,0,"reg_en_F",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+878,0,"pc_sel_F",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+836,0,"reg_en_D",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+879,0,"op1_sel_D",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+880,0,"op2_sel_D",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+881,0,"csrr_sel_D",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+882,0,"imm_type_D",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+837,0,"reg_en_X",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+883,0,"alu_fn_X",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+884,0,"ex_result_sel_X",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+873,0,"dmem_type_X",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+808,0,"reg_en_M",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+885,0,"wb_result_sel_M",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+886,0,"reg_en_W",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+887,0,"rf_waddr_W",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+888,0,"rf_wen_W",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+889,0,"stats_en_wen_W",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+838,0,"imul_req_val_D",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1126,0,"imul_req_rdy_D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1127,0,"imul_resp_val_X",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+839,0,"imul_resp_rdy_X",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+890,0,"inst_D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+891,0,"br_cond_eq_X",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+892,0,"br_cond_lt_X",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+893,0,"br_cond_ltu_X",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+894,0,"bypass_sel_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+895,0,"bypass_sel_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1133,0,"commit_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+896,0,"val_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+897,0,"val_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+898,0,"val_X",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+899,0,"val_M",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+900,0,"val_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+823,0,"ostall_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1162,0,"ostall_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1163,0,"ostall_X",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1164,0,"ostall_M",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+901,0,"ostall_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+840,0,"stall_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+841,0,"stall_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+842,0,"stall_X",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+809,0,"stall_M",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+902,0,"stall_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+903,0,"osquash_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+843,0,"osquash_X",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+833,0,"squash_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+844,0,"squash_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+904,0,"pc_sel_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+905,0,"pc_redirect_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+906,0,"pc_redirect_X",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+907,0,"pc_sel_X",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+824,0,"next_val_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+908,0,"inst_rd_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+909,0,"inst_rs1_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+910,0,"inst_rs2_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+911,0,"inst_csr_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+1182,0,"n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1183,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1184,0,"rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1184,0,"r0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1185,0,"rL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1186,0,"br_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1186,0,"br_na",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1187,0,"br_bne",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1188,0,"br_beq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1189,0,"br_blt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1190,0,"br_bltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1191,0,"br_bge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1192,0,"br_bgeu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1193,0,"jna",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1194,0,"jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1195,0,"jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1182,0,"op_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1182,0,"op_rf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1183,0,"op_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1193,0,"bm_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1193,0,"bm_rf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1194,0,"bm_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1195,0,"bm_csr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1196,0,"alu_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1196,0,"alu_add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1197,0,"alu_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1198,0,"alu_and",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1199,0,"alu_or",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1200,0,"alu_xor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1201,0,"alu_slt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1202,0,"alu_sltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1203,0,"alu_sra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1204,0,"alu_srl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1205,0,"alu_sll",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1206,0,"alu_cp0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1207,0,"alu_cp1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1186,0,"imm_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1186,0,"imm_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1187,0,"imm_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1188,0,"imm_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1189,0,"imm_u",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1190,0,"imm_j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1186,0,"res_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1187,0,"res_alu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1188,0,"res_mul",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1193,0,"nr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1194,0,"ld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1195,0,"st",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1182,0,"wm_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1182,0,"wm_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1183,0,"wm_m",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+912,0,"inst_val_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+913,0,"br_type_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+914,0,"rs1_en_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+915,0,"rs2_en_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+916,0,"alu_fn_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+917,0,"ex_result_sel_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+918,0,"dmem_type_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+919,0,"wb_result_sel_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+920,0,"rf_wen_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+921,0,"csrr_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+922,0,"csrw_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+923,0,"mul_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+924,0,"jump_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+925,0,"proc2mngr_val_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+926,0,"mngr2proc_rdy_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+927,0,"stats_en_wen_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+908,0,"rf_waddr_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+928,0,"debug_mul_valid_then_bypass",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+929,0,"debug_bypass_before_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1165,0,"ostall_mngr2proc_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+930,0,"ostall_load_use_X_rs1_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+931,0,"ostall_load_use_X_rs2_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+932,0,"bypass_waddr_X_rs1_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+933,0,"bypass_waddr_M_rs1_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+934,0,"bypass_waddr_W_rs1_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+935,0,"bypass_waddr_X_rs2_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"bypass_waddr_M_rs2_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+937,0,"bypass_waddr_W_rs2_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+938,0,"ostall_loaduse_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+845,0,"next_val_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+939,0,"inst_X",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+940,0,"wb_result_sel_X",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+941,0,"rf_wen_X",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+942,0,"rf_waddr_X",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+943,0,"proc2mngr_val_X",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+944,0,"stats_en_wen_X",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+945,0,"br_type_X",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+946,0,"mul_X",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+947,0,"jump_X",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+846,0,"next_val_X",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+948,0,"inst_M",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+949,0,"dmem_type_M",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+950,0,"rf_wen_M",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+951,0,"rf_waddr_M",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+952,0,"proc2mngr_val_M",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+953,0,"stats_en_wen_M",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+954,0,"ex_result_sel_M",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+810,0,"next_val_M",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+955,0,"inst_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+956,0,"proc2mngr_val_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+957,0,"rf_wen_pending_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+958,0,"stats_en_wen_pending_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+959,0,"ex_result_sel_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("inst_unpack", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+890,0,"inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+960,0,"opcode",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+908,0,"rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+909,0,"rs1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+910,0,"rs2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+961,0,"funct3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1208,0,"funct7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+911,0,"csr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dmem_queue", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1198,0,"p_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1209,0,"p_msg_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1181,0,"p_num_msgs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1210,0,"c_addr_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1132,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1135,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+822,0,"enq_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+869,0,"enq_rdy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+870,0,"enq_msg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 77,0);
    tracep->declBit(c+1141,0,"deq_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1140,0,"deq_rdy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+860,0,"deq_msg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 77,0);
    tracep->declBus(c+869,0,"num_free_entries",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+847,0,"write_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+869,0,"bypass_mux_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ctrl", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1198,0,"p_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1132,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1135,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+822,0,"enq_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+869,0,"enq_rdy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1141,0,"deq_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1140,0,"deq_rdy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+847,0,"write_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+869,0,"bypass_mux_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+869,0,"num_free_entries",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+962,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+825,0,"full_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1182,0,"c_pipe_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1183,0,"c_bypass_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+848,0,"do_enq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+849,0,"do_deq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+869,0,"empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1211,0,"do_pipe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+826,0,"do_bypass",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("dpath", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1198,0,"p_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1209,0,"p_msg_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1132,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1135,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+847,0,"write_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+869,0,"bypass_mux_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+870,0,"enq_msg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 77,0);
    tracep->declArray(c+860,0,"deq_msg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 77,0);
    tracep->declArray(c+963,0,"qstore",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 77,0);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("bypass_mux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1209,0,"p_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+963,0,"in0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 77,0);
    tracep->declArray(c+870,0,"in1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 77,0);
    tracep->declBit(c+869,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+860,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 77,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("qstore_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1209,0,"p_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1132,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1135,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+963,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 77,0);
    tracep->declArray(c+870,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 77,0);
    tracep->declBit(c+847,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dmem_reqstream_trace", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1132,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1135,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1141,0,"val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1140,0,"rdy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+860,0,"msg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 77,0);
    tracep->declBus(c+966,0,"type_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+967,0,"opaque",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+968,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+969,0,"len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+970,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1209,0,"c_msg_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1196,0,"c_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1197,0,"c_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1198,0,"c_write_init",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+409,0,"type_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declArray(c+410,0,"str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4095,0);
    tracep->pushPrefix("vc_trace", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1132,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1135,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+538,0,"len0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+539,0,"len1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+540,0,"idx0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+541,0,"idx1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+1212,0,"nchars",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1213,0,"nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1214,0,"storage",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4095,0);
    tracep->declBus(c+1210,0,"cycles_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+971,0,"cycles",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+1197,0,"level",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dmem_respstream_trace", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1132,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1135,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1145,0,"val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1144,0,"rdy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1142,0,"msg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+1166,0,"type_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1167,0,"opaque",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1168,0,"test",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1169,0,"len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1170,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1342,0,"c_msg_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1196,0,"c_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1197,0,"c_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1198,0,"c_write_init",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+675,0,"type_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declArray(c+676,0,"str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4095,0);
    tracep->pushPrefix("vc_trace", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1132,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1135,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+804,0,"len0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+805,0,"len1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+806,0,"idx0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+807,0,"idx1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+1212,0,"nchars",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1213,0,"nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1343,0,"storage",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4095,0);
    tracep->declBus(c+1210,0,"cycles_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+972,0,"cycles",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+1197,0,"level",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dpath", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1181,0,"p_num_cores",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1132,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1135,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+868,0,"imem_reqstream_msg_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+1151,0,"imem_respstream_msg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+874,0,"dmem_reqstream_msg_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1170,0,"dmem_respstream_msg_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+875,0,"dmem_reqstream_enq_msg_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1155,0,"mngr2proc_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+877,0,"proc2mngr_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+833,0,"imem_respstream_drop",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+835,0,"reg_en_F",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+878,0,"pc_sel_F",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+836,0,"reg_en_D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+879,0,"op1_sel_D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+880,0,"op2_sel_D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+881,0,"csrr_sel_D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+882,0,"imm_type_D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+837,0,"reg_en_X",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+883,0,"alu_fn_X",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+884,0,"ex_result_sel_X",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+808,0,"reg_en_M",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+885,0,"wb_result_sel_M",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+886,0,"reg_en_W",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+887,0,"rf_waddr_W",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+888,0,"rf_wen_W",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+889,0,"stats_en_wen_W",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+838,0,"imul_req_val_D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1126,0,"imul_req_rdy_D",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1127,0,"imul_resp_val_X",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+839,0,"imul_resp_rdy_X",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+890,0,"inst_D",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+891,0,"br_cond_eq_X",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+892,0,"br_cond_lt_X",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+893,0,"br_cond_ltu_X",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+894,0,"bypass_sel_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+895,0,"bypass_sel_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1134,0,"core_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1136,0,"stats_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1471,0,"c_reset_vector",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1472,0,"c_reset_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+973,0,"pc_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+868,0,"pc_next_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+974,0,"pc_plus4_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+975,0,"br_target_X",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+976,0,"jal_target_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+977,0,"pc_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+908,0,"inst_rd_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+909,0,"inst_rs1_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+910,0,"inst_rs2_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+978,0,"imm_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+979,0,"rf_rdata0_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+980,0,"rf_rdata1_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+877,0,"rf_wdata_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+811,0,"op1_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+812,0,"op2_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1171,0,"csrr_data_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1181,0,"num_cores",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+813,0,"bypass_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+814,0,"bypass_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+981,0,"op1_X",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+982,0,"op2_X",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+983,0,"pc_X",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+984,0,"pc_plus4_X",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+874,0,"alu_result_X",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+985,0,"ex_result_X",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+986,0,"imul_result_X",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+985,0,"ex_result_X_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+987,0,"ex_result_M",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1170,0,"dmem_result_M",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+815,0,"wb_result_M",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+877,0,"wb_result_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+988,0,"stats_en_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("alu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+981,0,"in0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+982,0,"in1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+883,0,"fn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+874,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+891,0,"ops_eq",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+892,0,"ops_lt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+893,0,"ops_ltu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("cond_eq_comp", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1473,0,"p_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+981,0,"in0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+982,0,"in1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+891,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("br_target_reg_X", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1473,0,"p_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1210,0,"p_reset_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1132,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1135,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+975,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+976,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+837,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bypass_rs1_mux_D", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1473,0,"p_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+979,0,"in0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+985,0,"in1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+815,0,"in2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+877,0,"in3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+894,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+813,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("bypass_rs2_mux_D", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1473,0,"p_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+980,0,"in0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+985,0,"in1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+815,0,"in2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+877,0,"in3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+895,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+814,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("csrr_sel_mux_D", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1473,0,"p_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1155,0,"in0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1181,0,"in1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1134,0,"in2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+881,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1171,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("dmem_write_data_reg_X", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1473,0,"p_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1210,0,"p_reset_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1132,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1135,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+875,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+980,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+837,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("ex_result_mux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1473,0,"p_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+984,0,"in0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+874,0,"in1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+986,0,"in2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+989,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+985,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("ex_result_reg_M", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1473,0,"p_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1210,0,"p_reset_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1132,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1135,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+987,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+985,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+808,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("imm_gen_D", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+882,0,"imm_type",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+890,0,"inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+978,0,"imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("imul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1132,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1135,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+838,0,"istream_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1126,0,"istream_rdy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+816,0,"istream_msg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1127,0,"ostream_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+839,0,"ostream_rdy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+986,0,"ostream_msg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+990,0,"b_lsb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1128,0,"result_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1129,0,"a_mux_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1130,0,"b_mux_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+850,0,"result_mux_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+851,0,"add_mux_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+991,0,"calc_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+144,0,"str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4095,0);
    tracep->pushPrefix("control_unit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1132,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1135,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+838,0,"istream_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+839,0,"ostream_rdy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+990,0,"b_lsb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+991,0,"calc_done",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1128,0,"result_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1129,0,"a_mux_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1130,0,"b_mux_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+850,0,"result_mux_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+851,0,"add_mux_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1126,0,"istream_rdy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1127,0,"ostream_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1131,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+852,0,"state_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("datapath", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1132,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1135,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+816,0,"istream_msg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1126,0,"istream_rdy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1129,0,"a_mux_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1130,0,"b_mux_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+850,0,"result_mux_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+851,0,"add_mux_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1128,0,"result_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+839,0,"ostream_rdy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+990,0,"b_lsb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+986,0,"ostream_msg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+991,0,"calc_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+992,0,"a_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+993,0,"a_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1172,0,"a_update",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+994,0,"b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+995,0,"b_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1173,0,"b_update",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+986,0,"result_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+827,0,"result_update",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+996,0,"sum_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+828,0,"add_mux_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+997,0,"shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->pushPrefix("a_mux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1473,0,"p_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+812,0,"in0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+993,0,"in1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1129,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1172,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("a_reg_", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1473,0,"p_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1210,0,"p_reset_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1132,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1135,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+992,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1172,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("a_reg_shift_", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1473,0,"p_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1474,0,"p_shamt_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+992,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+997,0,"shamt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+993,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("add_mux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1473,0,"p_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+986,0,"in0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+996,0,"in1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+851,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+828,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("adder", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1473,0,"p_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+992,0,"in0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+986,0,"in1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+996,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("b_mux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1473,0,"p_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+979,0,"in0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+995,0,"in1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1130,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1173,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("b_reg_", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1473,0,"p_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1210,0,"p_reset_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1132,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1135,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+994,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1173,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("b_reg_shift_", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1473,0,"p_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1474,0,"p_shamt_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+994,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+997,0,"shamt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+995,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("bit_shift", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+994,0,"in_",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+997,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+998,0,"zero_interval_encoding",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+999,0,"shift_amount",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->pushPrefix("check", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+994,0,"in_",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+998,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("zero_comparators[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("subset", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1181,0,"p_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+990,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+1000,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("zero_comparators[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("subset", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1475,0,"p_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1001,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+1002,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("zero_comparators[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("subset", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1476,0,"p_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1003,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+1004,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("zero_comparators[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("subset", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1477,0,"p_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1005,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBit(c+1006,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("zero_comparators[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("subset", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1478,0,"p_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1007,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBit(c+1008,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("zero_comparators[14]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("subset", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1479,0,"p_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1009,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBit(c+1010,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("zero_comparators[15]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("subset", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1480,0,"p_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1011,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1012,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("zero_comparators[16]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("subset", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1481,0,"p_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1013,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBit(c+1014,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("zero_comparators[17]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("subset", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1482,0,"p_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1015,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBit(c+1016,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("zero_comparators[18]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("subset", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1483,0,"p_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1017,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBit(c+1018,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("zero_comparators[19]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("subset", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1484,0,"p_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1019,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+1020,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("zero_comparators[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("subset", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1485,0,"p_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1021,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1022,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("zero_comparators[20]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("subset", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1486,0,"p_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1023,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBit(c+1024,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("zero_comparators[21]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("subset", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1487,0,"p_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1025,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBit(c+1026,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("zero_comparators[22]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("subset", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1488,0,"p_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1027,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBit(c+1028,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("zero_comparators[23]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("subset", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1489,0,"p_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1029,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBit(c+1030,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("zero_comparators[24]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("subset", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1490,0,"p_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1031,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBit(c+1032,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("zero_comparators[25]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("subset", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1491,0,"p_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1033,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBit(c+1034,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("zero_comparators[26]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("subset", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1492,0,"p_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1035,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBit(c+1036,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("zero_comparators[27]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("subset", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1493,0,"p_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1037,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBit(c+1038,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("zero_comparators[28]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("subset", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1494,0,"p_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1039,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 28,0);
    tracep->declBit(c+1040,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("zero_comparators[29]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("subset", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1495,0,"p_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1041,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBit(c+1042,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("zero_comparators[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("subset", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1496,0,"p_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1043,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1044,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("zero_comparators[30]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("subset", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1497,0,"p_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1045,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 30,0);
    tracep->declBit(c+1046,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("zero_comparators[31]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("subset", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1473,0,"p_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+994,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1047,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("zero_comparators[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("subset", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1498,0,"p_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1048,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1049,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("zero_comparators[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("subset", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1499,0,"p_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1050,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+1051,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("zero_comparators[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("subset", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1474,0,"p_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1052,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+1053,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("zero_comparators[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("subset", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1500,0,"p_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1054,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+1055,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("zero_comparators[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("subset", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1501,0,"p_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1056,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1057,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("zero_comparators[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("subset", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1502,0,"p_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1058,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+1059,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("zero_comparators[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("subset", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1503,0,"p_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1060,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+1061,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("max_extractor", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+998,0,"in_",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1062,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("result_mux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1473,0,"p_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1472,0,"in0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+828,0,"in1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+850,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+827,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("result_reg_", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1473,0,"p_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1132,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1135,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+986,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+827,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1128,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("vc_trace", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1132,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1135,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+272,0,"len0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+273,0,"len1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+274,0,"idx0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+275,0,"idx1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+1212,0,"nchars",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1213,0,"nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1504,0,"storage",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4095,0);
    tracep->declBus(c+1210,0,"cycles_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+1063,0,"cycles",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+1197,0,"level",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("inst_D_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1473,0,"p_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1472,0,"p_reset_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1132,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1135,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+890,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1174,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+836,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("inst_unpack", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+890,0,"inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+960,0,"opcode",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+908,0,"rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+909,0,"rs1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+910,0,"rs2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+961,0,"funct3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1632,0,"funct7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+911,0,"csr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->popPrefix();
    tracep->pushPrefix("op1_reg_X", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1473,0,"p_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1210,0,"p_reset_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1132,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1135,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+981,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+811,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+837,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("op1_sel_mux_D", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1473,0,"p_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+813,0,"in0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+977,0,"in1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+879,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+811,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("op2_reg_X", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1473,0,"p_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1210,0,"p_reset_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1132,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1135,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+982,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+812,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+837,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("op2_sel_mux_D", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1473,0,"p_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+814,0,"in0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+978,0,"in1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1171,0,"in2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+880,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+812,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("pc_incr_F", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1473,0,"p_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1498,0,"p_inc_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+973,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+974,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("pc_incr_X", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1473,0,"p_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1498,0,"p_inc_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+983,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+984,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("pc_plus_imm_D", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1473,0,"p_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+977,0,"in0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+978,0,"in1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1211,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+976,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1064,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("pc_reg_D", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1473,0,"p_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1210,0,"p_reset_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1132,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1135,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+977,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+973,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+836,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("pc_reg_F", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1473,0,"p_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1633,0,"p_reset_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1132,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1135,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+973,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+868,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+835,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("pc_reg_X", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1473,0,"p_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1210,0,"p_reset_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1132,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1135,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+983,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+977,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+836,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("pc_sel_mux_F", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1473,0,"p_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+974,0,"in0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+975,0,"in1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+976,0,"in2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+874,0,"in3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+878,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+868,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("rf", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1132,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1135,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+909,0,"rd_addr0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+979,0,"rd_data0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+910,0,"rd_addr1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+980,0,"rd_data1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+888,0,"wr_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+887,0,"wr_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+877,0,"wr_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1065,0,"rf_read_data0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1066,0,"rf_read_data1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("rfile", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1473,0,"p_data_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1473,0,"p_num_entries",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1499,0,"c_addr_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1132,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1135,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+909,0,"read_addr0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1065,0,"read_data0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+910,0,"read_addr1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1066,0,"read_data1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+888,0,"write_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+887,0,"write_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+877,0,"write_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("rfile", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1067+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("stats_en_reg_W", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1473,0,"p_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1210,0,"p_reset_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1132,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1135,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+988,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+877,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+889,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("wb_result_reg_W", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1473,0,"p_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1210,0,"p_reset_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1132,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1135,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+877,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+815,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+886,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("wb_result_sel_mux_M", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1473,0,"p_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+987,0,"in0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1170,0,"in1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+885,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+815,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("imem_queue", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1198,0,"p_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1209,0,"p_msg_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1485,0,"p_num_msgs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1181,0,"c_addr_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1132,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1135,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"enq_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"enq_rdy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+864,0,"enq_msg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 77,0);
    tracep->declBit(c+1150,0,"deq_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1149,0,"deq_rdy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+857,0,"deq_msg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 77,0);
    tracep->declBus(c+863,0,"num_free_entries",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+853,0,"write_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1099,0,"bypass_mux_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1100,0,"write_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1101,0,"read_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("ctrl", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1198,0,"p_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1485,0,"p_num_msgs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1181,0,"c_addr_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1132,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1135,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"enq_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"enq_rdy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1150,0,"deq_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1149,0,"deq_rdy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+853,0,"write_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1100,0,"write_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1101,0,"read_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+1099,0,"bypass_mux_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+863,0,"num_free_entries",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1100,0,"enq_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+829,0,"enq_ptr_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1101,0,"deq_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+830,0,"deq_ptr_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+1102,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+831,0,"full_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1182,0,"c_pipe_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1183,0,"c_bypass_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+854,0,"do_enq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+855,0,"do_deq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1099,0,"empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1211,0,"do_pipe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+856,0,"do_bypass",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1103,0,"deq_ptr_plus1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1103,0,"deq_ptr_inc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1104,0,"enq_ptr_plus1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1104,0,"enq_ptr_inc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("deq_ptr_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1181,0,"p_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1210,0,"p_reset_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1132,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1135,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1101,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+830,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->pushPrefix("enq_ptr_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1181,0,"p_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1210,0,"p_reset_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1132,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1135,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1100,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+829,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->pushPrefix("full_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1181,0,"p_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1210,0,"p_reset_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1132,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1135,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1102,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+831,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dpath", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1198,0,"p_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1209,0,"p_msg_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1485,0,"p_num_msgs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1181,0,"c_addr_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1132,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1135,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+853,0,"write_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1099,0,"bypass_mux_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1100,0,"write_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1101,0,"read_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declArray(c+864,0,"enq_msg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 77,0);
    tracep->declArray(c+857,0,"deq_msg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 77,0);
    tracep->declArray(c+1105,0,"read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 77,0);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("bypass_mux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1209,0,"p_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1105,0,"in0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 77,0);
    tracep->declArray(c+864,0,"in1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 77,0);
    tracep->declBit(c+1099,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+857,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 77,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("qstore", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1209,0,"p_data_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1485,0,"p_num_entries",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1181,0,"c_addr_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1132,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1135,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1101,0,"read_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declArray(c+1105,0,"read_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 77,0);
    tracep->declBit(c+853,0,"write_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1100,0,"write_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declArray(c+864,0,"write_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 77,0);
    tracep->pushPrefix("rfile", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declArray(c+1108+i*3,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 77,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("imem_reqstream_trace", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1132,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1135,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1150,0,"val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1149,0,"rdy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+857,0,"msg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 77,0);
    tracep->declBus(c+1114,0,"type_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1115,0,"opaque",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1116,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1117,0,"len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1118,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1209,0,"c_msg_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1196,0,"c_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1197,0,"c_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1198,0,"c_write_init",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+276,0,"type_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declArray(c+277,0,"str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4095,0);
    tracep->pushPrefix("vc_trace", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1132,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1135,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+405,0,"len0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+406,0,"len1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+407,0,"idx0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+408,0,"idx1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+1212,0,"nchars",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1213,0,"nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1634,0,"storage",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4095,0);
    tracep->declBus(c+1210,0,"cycles_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+1119,0,"cycles",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+1197,0,"level",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("imem_respstream_drop_unit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1342,0,"p_msg_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1132,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1135,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+833,0,"drop",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1151,0,"istream_msg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBit(c+1154,0,"istream_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1153,0,"istream_rdy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1151,0,"ostream_msg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBit(c+834,0,"ostream_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+835,0,"ostream_rdy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1182,0,"c_state_pass",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1183,0,"c_state_drop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+1120,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1175,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1176,0,"istream_go",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("imem_respstream_trace", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1132,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1135,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1154,0,"val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1153,0,"rdy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1151,0,"msg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+1177,0,"type_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1178,0,"opaque",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1179,0,"test",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1180,0,"len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1174,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1342,0,"c_msg_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1196,0,"c_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1197,0,"c_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1198,0,"c_write_init",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+542,0,"type_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declArray(c+543,0,"str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4095,0);
    tracep->pushPrefix("vc_trace", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1132,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1135,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+671,0,"len0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+672,0,"len1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+673,0,"idx0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+674,0,"idx1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+1212,0,"nchars",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1213,0,"nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1762,0,"storage",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4095,0);
    tracep->declBus(c+1210,0,"cycles_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+1121,0,"cycles",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+1197,0,"level",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("proc2mngr_queue", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1198,0,"p_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1473,0,"p_msg_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1181,0,"p_num_msgs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1210,0,"c_addr_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1132,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1135,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1161,0,"enq_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"enq_rdy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+877,0,"enq_msg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1160,0,"deq_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1159,0,"deq_rdy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1158,0,"deq_msg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+876,0,"num_free_entries",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+818,0,"write_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"bypass_mux_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ctrl", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1198,0,"p_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1132,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1135,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1161,0,"enq_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"enq_rdy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1160,0,"deq_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1159,0,"deq_rdy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+818,0,"write_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"bypass_mux_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"num_free_entries",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1122,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+819,0,"full_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1182,0,"c_pipe_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1183,0,"c_bypass_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+1123,0,"do_enq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+820,0,"do_deq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1211,0,"do_pipe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+821,0,"do_bypass",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("dpath", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1198,0,"p_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1473,0,"p_msg_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1132,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1135,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+818,0,"write_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"bypass_mux_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+877,0,"enq_msg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1158,0,"deq_msg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1124,0,"qstore",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("bypass_mux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1473,0,"p_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1124,0,"in0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+877,0,"in1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+876,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1158,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("qstore_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1473,0,"p_nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1132,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1135,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1124,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+877,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+818,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("tinyrv2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+129,0,"rs1_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+130,0,"rs2_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+131,0,"rd_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declArray(c+132,0,"csr_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 71,0);
    tracep->declBus(c+135,0,"funct_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+136,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+137,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+138,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+139,0,"csr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+140,0,"funct",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->popPrefix();
    tracep->pushPrefix("vc_trace", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1132,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1135,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+141,0,"len0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+1890,0,"len1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+142,0,"idx0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+143,0,"idx1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+1212,0,"nchars",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1213,0,"nbits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1891,0,"storage",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4095,0);
    tracep->declBus(c+1210,0,"cycles_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+1125,0,"cycles",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+1197,0,"level",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VProcAlt_noparam___024root__trace_init_top(VProcAlt_noparam___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VProcAlt_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcAlt_noparam___024root__trace_init_top\n"); );
    // Body
    VProcAlt_noparam___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VProcAlt_noparam___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VProcAlt_noparam___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VProcAlt_noparam___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VProcAlt_noparam___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VProcAlt_noparam___024root__trace_register(VProcAlt_noparam___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VProcAlt_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcAlt_noparam___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&VProcAlt_noparam___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VProcAlt_noparam___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VProcAlt_noparam___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VProcAlt_noparam___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VProcAlt_noparam___024root__trace_const_0_sub_0(VProcAlt_noparam___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VProcAlt_noparam___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcAlt_noparam___024root__trace_const_0\n"); );
    // Init
    VProcAlt_noparam___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VProcAlt_noparam___024root*>(voidSelf);
    VProcAlt_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VProcAlt_noparam___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VProcAlt_noparam___024root__trace_const_0_sub_0(VProcAlt_noparam___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VProcAlt_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcAlt_noparam___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1181,(1U),32);
    bufp->fullBit(oldp+1182,(0U));
    bufp->fullBit(oldp+1183,(1U));
    bufp->fullCData(oldp+1184,(0U),5);
    bufp->fullCData(oldp+1185,(0x1fU),5);
    bufp->fullCData(oldp+1186,(0U),3);
    bufp->fullCData(oldp+1187,(1U),3);
    bufp->fullCData(oldp+1188,(2U),3);
    bufp->fullCData(oldp+1189,(3U),3);
    bufp->fullCData(oldp+1190,(4U),3);
    bufp->fullCData(oldp+1191,(5U),3);
    bufp->fullCData(oldp+1192,(6U),3);
    bufp->fullCData(oldp+1193,(0U),2);
    bufp->fullCData(oldp+1194,(1U),2);
    bufp->fullCData(oldp+1195,(2U),2);
    bufp->fullCData(oldp+1196,(0U),4);
    bufp->fullCData(oldp+1197,(1U),4);
    bufp->fullCData(oldp+1198,(2U),4);
    bufp->fullCData(oldp+1199,(3U),4);
    bufp->fullCData(oldp+1200,(4U),4);
    bufp->fullCData(oldp+1201,(5U),4);
    bufp->fullCData(oldp+1202,(6U),4);
    bufp->fullCData(oldp+1203,(7U),4);
    bufp->fullCData(oldp+1204,(8U),4);
    bufp->fullCData(oldp+1205,(9U),4);
    bufp->fullCData(oldp+1206,(0xbU),4);
    bufp->fullCData(oldp+1207,(0xcU),4);
    bufp->fullCData(oldp+1208,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__inst_unpack__DOT__funct7),7);
    bufp->fullIData(oldp+1209,(0x4eU),32);
    bufp->fullIData(oldp+1210,(0U),32);
    bufp->fullBit(oldp+1211,(0U));
    bufp->fullIData(oldp+1212,(0x200U),32);
    bufp->fullIData(oldp+1213,(0x1000U),32);
    bufp->fullWData(oldp+1214,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__storage),4096);
    bufp->fullIData(oldp+1342,(0x30U),32);
    bufp->fullWData(oldp+1343,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__storage),4096);
    bufp->fullIData(oldp+1471,(0x200U),32);
    bufp->fullIData(oldp+1472,(0U),32);
    bufp->fullIData(oldp+1473,(0x20U),32);
    bufp->fullIData(oldp+1474,(6U),32);
    bufp->fullIData(oldp+1475,(0xbU),32);
    bufp->fullIData(oldp+1476,(0xcU),32);
    bufp->fullIData(oldp+1477,(0xdU),32);
    bufp->fullIData(oldp+1478,(0xeU),32);
    bufp->fullIData(oldp+1479,(0xfU),32);
    bufp->fullIData(oldp+1480,(0x10U),32);
    bufp->fullIData(oldp+1481,(0x11U),32);
    bufp->fullIData(oldp+1482,(0x12U),32);
    bufp->fullIData(oldp+1483,(0x13U),32);
    bufp->fullIData(oldp+1484,(0x14U),32);
    bufp->fullIData(oldp+1485,(2U),32);
    bufp->fullIData(oldp+1486,(0x15U),32);
    bufp->fullIData(oldp+1487,(0x16U),32);
    bufp->fullIData(oldp+1488,(0x17U),32);
    bufp->fullIData(oldp+1489,(0x18U),32);
    bufp->fullIData(oldp+1490,(0x19U),32);
    bufp->fullIData(oldp+1491,(0x1aU),32);
    bufp->fullIData(oldp+1492,(0x1bU),32);
    bufp->fullIData(oldp+1493,(0x1cU),32);
    bufp->fullIData(oldp+1494,(0x1dU),32);
    bufp->fullIData(oldp+1495,(0x1eU),32);
    bufp->fullIData(oldp+1496,(3U),32);
    bufp->fullIData(oldp+1497,(0x1fU),32);
    bufp->fullIData(oldp+1498,(4U),32);
    bufp->fullIData(oldp+1499,(5U),32);
    bufp->fullIData(oldp+1500,(7U),32);
    bufp->fullIData(oldp+1501,(8U),32);
    bufp->fullIData(oldp+1502,(9U),32);
    bufp->fullIData(oldp+1503,(0xaU),32);
    bufp->fullWData(oldp+1504,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__storage),4096);
    bufp->fullCData(oldp+1632,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__inst_unpack__DOT__funct7),7);
    bufp->fullIData(oldp+1633,(0x1fcU),32);
    bufp->fullWData(oldp+1634,(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__storage),4096);
    bufp->fullWData(oldp+1762,(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__storage),4096);
    bufp->fullIData(oldp+1890,(vlSelf->ProcAlt_noparam__DOT__v__DOT__vc_trace__DOT__len1),32);
    bufp->fullWData(oldp+1891,(vlSelf->ProcAlt_noparam__DOT__v__DOT__vc_trace__DOT__storage),4096);
}

VL_ATTR_COLD void VProcAlt_noparam___024root__trace_full_0_sub_0(VProcAlt_noparam___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VProcAlt_noparam___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcAlt_noparam___024root__trace_full_0\n"); );
    // Init
    VProcAlt_noparam___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VProcAlt_noparam___024root*>(voidSelf);
    VProcAlt_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VProcAlt_noparam___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VProcAlt_noparam___024root__trace_full_0_sub_0(VProcAlt_noparam___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VProcAlt_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcAlt_noparam___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<3>/*95:0*/ __Vtemp_2;
    // Body
    bufp->fullWData(oldp+1,(vlSelf->ProcAlt_noparam__DOT__v__DOT__str),4096);
    bufp->fullIData(oldp+129,(vlSelf->ProcAlt_noparam__DOT__v__DOT__tinyrv2__DOT__rs1_str),24);
    bufp->fullIData(oldp+130,(vlSelf->ProcAlt_noparam__DOT__v__DOT__tinyrv2__DOT__rs2_str),24);
    bufp->fullIData(oldp+131,(vlSelf->ProcAlt_noparam__DOT__v__DOT__tinyrv2__DOT__rd_str),24);
    bufp->fullWData(oldp+132,(vlSelf->ProcAlt_noparam__DOT__v__DOT__tinyrv2__DOT__csr_str),72);
    bufp->fullSData(oldp+135,(vlSelf->ProcAlt_noparam__DOT__v__DOT__tinyrv2__DOT__funct_str),16);
    bufp->fullCData(oldp+136,(vlSelf->ProcAlt_noparam__DOT__v__DOT__tinyrv2__DOT__rs1),5);
    bufp->fullCData(oldp+137,(vlSelf->ProcAlt_noparam__DOT__v__DOT__tinyrv2__DOT__rs2),5);
    bufp->fullCData(oldp+138,(vlSelf->ProcAlt_noparam__DOT__v__DOT__tinyrv2__DOT__rd),5);
    bufp->fullSData(oldp+139,(vlSelf->ProcAlt_noparam__DOT__v__DOT__tinyrv2__DOT__csr),12);
    bufp->fullCData(oldp+140,(vlSelf->ProcAlt_noparam__DOT__v__DOT__tinyrv2__DOT__funct),7);
    bufp->fullIData(oldp+141,(vlSelf->ProcAlt_noparam__DOT__v__DOT__vc_trace__DOT__len0),32);
    bufp->fullIData(oldp+142,(vlSelf->ProcAlt_noparam__DOT__v__DOT__vc_trace__DOT__idx0),32);
    bufp->fullIData(oldp+143,(vlSelf->ProcAlt_noparam__DOT__v__DOT__vc_trace__DOT__idx1),32);
    bufp->fullWData(oldp+144,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__str),4096);
    bufp->fullIData(oldp+272,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0),32);
    bufp->fullIData(oldp+273,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len1),32);
    bufp->fullIData(oldp+274,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0),32);
    bufp->fullIData(oldp+275,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1),32);
    bufp->fullSData(oldp+276,(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__type_str),16);
    bufp->fullWData(oldp+277,(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__str),4096);
    bufp->fullIData(oldp+405,(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0),32);
    bufp->fullIData(oldp+406,(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len1),32);
    bufp->fullIData(oldp+407,(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0),32);
    bufp->fullIData(oldp+408,(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1),32);
    bufp->fullSData(oldp+409,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__type_str),16);
    bufp->fullWData(oldp+410,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__str),4096);
    bufp->fullIData(oldp+538,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0),32);
    bufp->fullIData(oldp+539,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len1),32);
    bufp->fullIData(oldp+540,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0),32);
    bufp->fullIData(oldp+541,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1),32);
    bufp->fullSData(oldp+542,(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_respstream_trace__DOT__type_str),16);
    bufp->fullWData(oldp+543,(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_respstream_trace__DOT__str),4096);
    bufp->fullIData(oldp+671,(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0),32);
    bufp->fullIData(oldp+672,(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len1),32);
    bufp->fullIData(oldp+673,(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0),32);
    bufp->fullIData(oldp+674,(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1),32);
    bufp->fullSData(oldp+675,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__type_str),16);
    bufp->fullWData(oldp+676,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__str),4096);
    bufp->fullIData(oldp+804,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0),32);
    bufp->fullIData(oldp+805,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len1),32);
    bufp->fullIData(oldp+806,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0),32);
    bufp->fullIData(oldp+807,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1),32);
    bufp->fullBit(oldp+808,((1U & (~ (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__stall_M)))));
    bufp->fullBit(oldp+809,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__stall_M));
    bufp->fullBit(oldp+810,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__next_val_M));
    bufp->fullIData(oldp+811,(((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__op1_sel_D)
                                ? ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__op1_sel_D)
                                    ? vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__pc_D
                                    : 0U) : ((2U & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__bypass_sel_1))
                                              ? ((1U 
                                                  & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__bypass_sel_1))
                                                  ? vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__wb_result_W
                                                  : vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__wb_result_M)
                                              : ((1U 
                                                  & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__bypass_sel_1))
                                                  ? vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__ex_result_X_out
                                                  : vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf_rdata0_D)))),32);
    bufp->fullIData(oldp+812,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op2_D),32);
    bufp->fullIData(oldp+813,(((2U & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__bypass_sel_1))
                                ? ((1U & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__bypass_sel_1))
                                    ? vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__wb_result_W
                                    : vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__wb_result_M)
                                : ((1U & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__bypass_sel_1))
                                    ? vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__ex_result_X_out
                                    : vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf_rdata0_D))),32);
    bufp->fullIData(oldp+814,(((2U & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__bypass_sel_2))
                                ? ((1U & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__bypass_sel_2))
                                    ? vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__wb_result_W
                                    : vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__wb_result_M)
                                : ((1U & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__bypass_sel_2))
                                    ? vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__ex_result_X_out
                                    : vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf_rdata1_D))),32);
    bufp->fullIData(oldp+815,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__wb_result_M),32);
    bufp->fullQData(oldp+816,((((QData)((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op2_D)) 
                                << 0x20U) | (QData)((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf_rdata0_D)))),64);
    bufp->fullBit(oldp+818,(vlSelf->ProcAlt_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__write_en));
    bufp->fullBit(oldp+819,(((~ (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
                             & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__write_en) 
                                | (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)))));
    bufp->fullBit(oldp+820,(vlSelf->ProcAlt_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq));
    bufp->fullBit(oldp+821,(((~ (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
                             & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
                                & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)))));
    bufp->fullBit(oldp+822,(((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__next_val_X) 
                             & (0U != (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_type_X)))));
    bufp->fullBit(oldp+823,(((~ (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_respstream_drop_val)) 
                             & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_F))));
    bufp->fullBit(oldp+824,(((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_F) 
                             & ((~ (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__stall_F)) 
                                & (~ (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_respstream_drop))))));
    bufp->fullBit(oldp+825,(((~ (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
                             & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__write_en) 
                                | (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)))));
    bufp->fullBit(oldp+826,(((~ (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
                             & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
                                & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)))));
    bufp->fullIData(oldp+827,(((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__result_mux_sel)
                                ? ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__result_mux_sel)
                                    ? ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__add_mux_sel)
                                        ? ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__add_mux_sel)
                                            ? (vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg 
                                               + vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg)
                                            : 0U) : vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg)
                                    : 0U) : 0U)),32);
    bufp->fullIData(oldp+828,(((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__add_mux_sel)
                                ? ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__add_mux_sel)
                                    ? (vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg 
                                       + vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg)
                                    : 0U) : vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg)),32);
    bufp->fullBit(oldp+829,((1U & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__write_en)
                                    ? ((IData)(1U) 
                                       + (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                    : (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)))));
    bufp->fullBit(oldp+830,((1U & (((~ (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass)) 
                                    & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq))
                                    ? ((IData)(1U) 
                                       + (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr))
                                    : (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))));
    bufp->fullBit(oldp+831,((((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
                              & ((~ (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
                                 & ((1U & ((IData)(1U) 
                                           + (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                                    == (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
                             | ((~ ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                                    & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full))) 
                                & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full)))));
    bufp->fullBit(oldp+832,(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_reqstream_enq_val));
    bufp->fullBit(oldp+833,(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_respstream_drop));
    bufp->fullBit(oldp+834,(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_respstream_drop_val));
    bufp->fullBit(oldp+835,(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_respstream_drop_rdy));
    bufp->fullBit(oldp+836,(vlSelf->ProcAlt_noparam__DOT__v__DOT__reg_en_D));
    bufp->fullBit(oldp+837,((1U & (~ (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__stall_X)))));
    bufp->fullBit(oldp+838,(vlSelf->ProcAlt_noparam__DOT__v__DOT__imul_req_val_D));
    bufp->fullBit(oldp+839,(vlSelf->ProcAlt_noparam__DOT__v__DOT__imul_resp_rdy_X));
    bufp->fullBit(oldp+840,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__stall_F));
    bufp->fullBit(oldp+841,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__stall_D));
    bufp->fullBit(oldp+842,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__stall_X));
    bufp->fullBit(oldp+843,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__osquash_X));
    bufp->fullBit(oldp+844,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__squash_D));
    bufp->fullBit(oldp+845,(((~ (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__squash_D)) 
                             & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_14))));
    bufp->fullBit(oldp+846,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__next_val_X));
    bufp->fullBit(oldp+847,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__write_en));
    bufp->fullBit(oldp+848,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    bufp->fullBit(oldp+849,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq));
    bufp->fullBit(oldp+850,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__result_mux_sel));
    bufp->fullBit(oldp+851,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__add_mux_sel));
    bufp->fullCData(oldp+852,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__control_unit__DOT__state_next),2);
    bufp->fullBit(oldp+853,(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__write_en));
    bufp->fullBit(oldp+854,(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    bufp->fullBit(oldp+855,(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq));
    bufp->fullBit(oldp+856,(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass));
    bufp->fullWData(oldp+857,(vlSelf->ProcAlt_noparam__DOT__v__DOT____Vcellout__imem_queue__deq_msg),78);
    bufp->fullWData(oldp+860,(vlSelf->ProcAlt_noparam__DOT__v__DOT____Vcellout__dmem_queue__deq_msg),78);
    bufp->fullCData(oldp+863,(((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full)
                                ? 0U : ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__bypass_mux_sel)
                                         ? 2U : (3U 
                                                 & (((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
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
    bufp->fullWData(oldp+864,(__Vtemp_2),78);
    bufp->fullBit(oldp+867,((1U & (~ (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full)))));
    bufp->fullIData(oldp+868,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__pc_next_F),32);
    bufp->fullBit(oldp+869,((1U & (~ (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)))));
    bufp->fullWData(oldp+870,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_reqstream_enq_msg),78);
    bufp->fullCData(oldp+873,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_type_X),2);
    bufp->fullIData(oldp+874,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__alu_result_X),32);
    bufp->fullIData(oldp+875,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_reqstream_enq_msg_data),32);
    bufp->fullBit(oldp+876,((1U & (~ (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)))));
    bufp->fullIData(oldp+877,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__wb_result_W),32);
    bufp->fullCData(oldp+878,(vlSelf->ProcAlt_noparam__DOT__v__DOT__pc_sel_F),2);
    bufp->fullBit(oldp+879,(vlSelf->ProcAlt_noparam__DOT__v__DOT__op1_sel_D));
    bufp->fullCData(oldp+880,(vlSelf->ProcAlt_noparam__DOT__v__DOT__op2_sel_D),2);
    bufp->fullCData(oldp+881,(vlSelf->ProcAlt_noparam__DOT__v__DOT__csrr_sel_D),2);
    bufp->fullCData(oldp+882,(vlSelf->ProcAlt_noparam__DOT__v__DOT__imm_type_D),3);
    bufp->fullCData(oldp+883,(vlSelf->ProcAlt_noparam__DOT__v__DOT__alu_fn_X),4);
    bufp->fullCData(oldp+884,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ex_result_sel_X),3);
    bufp->fullBit(oldp+885,(vlSelf->ProcAlt_noparam__DOT__v__DOT__wb_result_sel_M));
    bufp->fullBit(oldp+886,((1U & (~ (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__stall_W)))));
    bufp->fullCData(oldp+887,(vlSelf->ProcAlt_noparam__DOT__v__DOT__rf_waddr_W),5);
    bufp->fullBit(oldp+888,(vlSelf->ProcAlt_noparam__DOT__v__DOT__rf_wen_W));
    bufp->fullBit(oldp+889,(((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__stats_en_wen_pending_W) 
                             & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_W))));
    bufp->fullIData(oldp+890,(vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D),32);
    bufp->fullBit(oldp+891,((vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op1_X 
                             == vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op2_X)));
    bufp->fullBit(oldp+892,(VL_LTS_III(32, vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op1_X, vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op2_X)));
    bufp->fullBit(oldp+893,((vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op1_X 
                             < vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op2_X)));
    bufp->fullCData(oldp+894,(vlSelf->ProcAlt_noparam__DOT__v__DOT__bypass_sel_1),2);
    bufp->fullCData(oldp+895,(vlSelf->ProcAlt_noparam__DOT__v__DOT__bypass_sel_2),2);
    bufp->fullBit(oldp+896,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_F));
    bufp->fullBit(oldp+897,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_D));
    bufp->fullBit(oldp+898,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_X));
    bufp->fullBit(oldp+899,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_M));
    bufp->fullBit(oldp+900,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_W));
    bufp->fullBit(oldp+901,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__ostall_W));
    bufp->fullBit(oldp+902,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__stall_W));
    bufp->fullBit(oldp+903,(((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_D) 
                             & (1U == (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__jump_D)))));
    bufp->fullCData(oldp+904,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__pc_sel_D),2);
    bufp->fullBit(oldp+905,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__pc_redirect_D));
    bufp->fullBit(oldp+906,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__pc_redirect_X));
    bufp->fullCData(oldp+907,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__pc_sel_X),2);
    bufp->fullCData(oldp+908,((0x1fU & (vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D 
                                        >> 7U))),5);
    bufp->fullCData(oldp+909,((0x1fU & (vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+910,((0x1fU & (vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D 
                                        >> 0x14U))),5);
    bufp->fullSData(oldp+911,((vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D 
                               >> 0x14U)),12);
    bufp->fullBit(oldp+912,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__inst_val_D));
    bufp->fullCData(oldp+913,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__br_type_D),3);
    bufp->fullBit(oldp+914,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rs1_en_D));
    bufp->fullBit(oldp+915,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rs2_en_D));
    bufp->fullCData(oldp+916,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__alu_fn_D),4);
    bufp->fullCData(oldp+917,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__ex_result_sel_D),3);
    bufp->fullCData(oldp+918,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__dmem_type_D),2);
    bufp->fullBit(oldp+919,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__wb_result_sel_D));
    bufp->fullBit(oldp+920,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rf_wen_D));
    bufp->fullBit(oldp+921,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__csrr_D));
    bufp->fullBit(oldp+922,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__csrw_D));
    bufp->fullBit(oldp+923,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__mul_D));
    bufp->fullCData(oldp+924,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__jump_D),2);
    bufp->fullBit(oldp+925,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__proc2mngr_val_D));
    bufp->fullBit(oldp+926,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__mngr2proc_rdy_D));
    bufp->fullBit(oldp+927,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__stats_en_wen_D));
    bufp->fullBit(oldp+928,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__debug_mul_valid_then_bypass));
    bufp->fullBit(oldp+929,(((~ (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__debug_mul_valid_then_bypass)) 
                             & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__bypass_waddr_X_rs1_D) 
                                | (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__bypass_waddr_X_rs2_D)))));
    bufp->fullBit(oldp+930,(((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_D) 
                             & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rs1_en_D) 
                                & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_X) 
                                   & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rf_wen_X) 
                                      & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_2) 
                                         & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_13))))))));
    bufp->fullBit(oldp+931,(((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_D) 
                             & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rs2_en_D) 
                                & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_X) 
                                   & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rf_wen_X) 
                                      & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_4) 
                                         & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_13))))))));
    bufp->fullBit(oldp+932,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__bypass_waddr_X_rs1_D));
    bufp->fullBit(oldp+933,(((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rs1_en_D) 
                             & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rf_wen_M) 
                                & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_M) 
                                   & (((0x1fU & (vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D 
                                                 >> 0xfU)) 
                                       == (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rf_waddr_M)) 
                                      & (0U != (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rf_waddr_M))))))));
    bufp->fullBit(oldp+934,(((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rs1_en_D) 
                             & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_12) 
                                & (((0x1fU & (vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D 
                                              >> 0xfU)) 
                                    == (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__rf_waddr_W)) 
                                   & (0U != (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__rf_waddr_W)))))));
    bufp->fullBit(oldp+935,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__bypass_waddr_X_rs2_D));
    bufp->fullBit(oldp+936,(((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rs2_en_D) 
                             & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rf_wen_M) 
                                & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_M) 
                                   & (((0x1fU & (vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D 
                                                 >> 0x14U)) 
                                       == (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rf_waddr_M)) 
                                      & (0U != (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rf_waddr_M))))))));
    bufp->fullBit(oldp+937,(((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rs2_en_D) 
                             & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_12) 
                                & (((0x1fU & (vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D 
                                              >> 0x14U)) 
                                    == (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__rf_waddr_W)) 
                                   & (0U != (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__rf_waddr_W)))))));
    bufp->fullBit(oldp+938,(((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_D) 
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
    bufp->fullIData(oldp+939,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__inst_X),32);
    bufp->fullBit(oldp+940,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__wb_result_sel_X));
    bufp->fullBit(oldp+941,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rf_wen_X));
    bufp->fullCData(oldp+942,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rf_waddr_X),5);
    bufp->fullBit(oldp+943,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__proc2mngr_val_X));
    bufp->fullBit(oldp+944,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__stats_en_wen_X));
    bufp->fullCData(oldp+945,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__br_type_X),3);
    bufp->fullBit(oldp+946,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__mul_X));
    bufp->fullCData(oldp+947,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__jump_X),2);
    bufp->fullIData(oldp+948,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__inst_M),32);
    bufp->fullCData(oldp+949,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__dmem_type_M),2);
    bufp->fullBit(oldp+950,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rf_wen_M));
    bufp->fullCData(oldp+951,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rf_waddr_M),5);
    bufp->fullBit(oldp+952,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__proc2mngr_val_M));
    bufp->fullBit(oldp+953,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__stats_en_wen_M));
    bufp->fullCData(oldp+954,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__ex_result_sel_M),3);
    bufp->fullIData(oldp+955,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__inst_W),32);
    bufp->fullBit(oldp+956,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__proc2mngr_val_W));
    bufp->fullBit(oldp+957,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rf_wen_pending_W));
    bufp->fullBit(oldp+958,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__stats_en_wen_pending_W));
    bufp->fullCData(oldp+959,(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__ex_result_sel_W),3);
    bufp->fullCData(oldp+960,((0x7fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)),7);
    bufp->fullCData(oldp+961,((7U & (vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D 
                                     >> 0xcU))),3);
    bufp->fullBit(oldp+962,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full));
    bufp->fullWData(oldp+963,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore),78);
    bufp->fullCData(oldp+966,((0xfU & (vlSelf->ProcAlt_noparam__DOT__v__DOT____Vcellout__dmem_queue__deq_msg[2U] 
                                       >> 0xaU))),4);
    bufp->fullCData(oldp+967,((0xffU & (vlSelf->ProcAlt_noparam__DOT__v__DOT____Vcellout__dmem_queue__deq_msg[2U] 
                                        >> 2U))),8);
    bufp->fullIData(oldp+968,(((vlSelf->ProcAlt_noparam__DOT__v__DOT____Vcellout__dmem_queue__deq_msg[2U] 
                                << 0x1eU) | (vlSelf->ProcAlt_noparam__DOT__v__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                                             >> 2U))),32);
    bufp->fullCData(oldp+969,((3U & vlSelf->ProcAlt_noparam__DOT__v__DOT____Vcellout__dmem_queue__deq_msg[1U])),2);
    bufp->fullIData(oldp+970,(vlSelf->ProcAlt_noparam__DOT__v__DOT____Vcellout__dmem_queue__deq_msg[0U]),32);
    bufp->fullIData(oldp+971,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__cycles),32);
    bufp->fullIData(oldp+972,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__cycles),32);
    bufp->fullIData(oldp+973,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__pc_F),32);
    bufp->fullIData(oldp+974,(((IData)(4U) + vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__pc_F)),32);
    bufp->fullIData(oldp+975,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__br_target_X),32);
    bufp->fullIData(oldp+976,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__jal_target_D),32);
    bufp->fullIData(oldp+977,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__pc_D),32);
    bufp->fullIData(oldp+978,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imm_D),32);
    bufp->fullIData(oldp+979,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf_rdata0_D),32);
    bufp->fullIData(oldp+980,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf_rdata1_D),32);
    bufp->fullIData(oldp+981,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op1_X),32);
    bufp->fullIData(oldp+982,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op2_X),32);
    bufp->fullIData(oldp+983,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__pc_X),32);
    bufp->fullIData(oldp+984,(((IData)(4U) + vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__pc_X)),32);
    bufp->fullIData(oldp+985,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__ex_result_X_out),32);
    bufp->fullIData(oldp+986,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg),32);
    bufp->fullIData(oldp+987,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__ex_result_M),32);
    bufp->fullIData(oldp+988,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__stats_en_W),32);
    bufp->fullCData(oldp+989,((3U & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ex_result_sel_X))),2);
    bufp->fullBit(oldp+990,((1U & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)));
    bufp->fullBit(oldp+991,((1U & (((IData)(1U) + (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT____Vcellout__max_extractor__out)) 
                                   >> 5U))));
    bufp->fullIData(oldp+992,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg),32);
    bufp->fullIData(oldp+993,(VL_SHIFTL_III(32,32,6, vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg, 
                                            (0x3fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT____Vcellout__max_extractor__out))))),32);
    bufp->fullIData(oldp+994,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg),32);
    bufp->fullIData(oldp+995,(VL_SHIFTR_III(32,32,6, vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg, 
                                            (0x3fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT____Vcellout__max_extractor__out))))),32);
    bufp->fullIData(oldp+996,((vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg 
                               + vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__result_reg)),32);
    bufp->fullCData(oldp+997,((0x3fU & ((IData)(1U) 
                                        + (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT____Vcellout__max_extractor__out)))),6);
    bufp->fullIData(oldp+998,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT__zero_interval_encoding),32);
    bufp->fullCData(oldp+999,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT____Vcellout__max_extractor__out),6);
    bufp->fullBit(oldp+1000,((1U & (~ vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg))));
    bufp->fullSData(oldp+1001,((0x7ffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)),11);
    bufp->fullBit(oldp+1002,((0U == (0x7ffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg))));
    bufp->fullSData(oldp+1003,((0xfffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)),12);
    bufp->fullBit(oldp+1004,((0U == (0xfffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg))));
    bufp->fullSData(oldp+1005,((0x1fffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)),13);
    bufp->fullBit(oldp+1006,((0U == (0x1fffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg))));
    bufp->fullSData(oldp+1007,((0x3fffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)),14);
    bufp->fullBit(oldp+1008,((0U == (0x3fffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg))));
    bufp->fullSData(oldp+1009,((0x7fffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)),15);
    bufp->fullBit(oldp+1010,((0U == (0x7fffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg))));
    bufp->fullSData(oldp+1011,((0xffffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)),16);
    bufp->fullBit(oldp+1012,((0U == (0xffffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg))));
    bufp->fullIData(oldp+1013,((0x1ffffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)),17);
    bufp->fullBit(oldp+1014,((0U == (0x1ffffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg))));
    bufp->fullIData(oldp+1015,((0x3ffffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)),18);
    bufp->fullBit(oldp+1016,((0U == (0x3ffffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg))));
    bufp->fullIData(oldp+1017,((0x7ffffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)),19);
    bufp->fullBit(oldp+1018,((0U == (0x7ffffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg))));
    bufp->fullIData(oldp+1019,((0xfffffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)),20);
    bufp->fullBit(oldp+1020,((0U == (0xfffffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg))));
    bufp->fullCData(oldp+1021,((3U & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)),2);
    bufp->fullBit(oldp+1022,((0U == (3U & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg))));
    bufp->fullIData(oldp+1023,((0x1fffffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)),21);
    bufp->fullBit(oldp+1024,((0U == (0x1fffffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg))));
    bufp->fullIData(oldp+1025,((0x3fffffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)),22);
    bufp->fullBit(oldp+1026,((0U == (0x3fffffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg))));
    bufp->fullIData(oldp+1027,((0x7fffffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)),23);
    bufp->fullBit(oldp+1028,((0U == (0x7fffffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg))));
    bufp->fullIData(oldp+1029,((0xffffffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)),24);
    bufp->fullBit(oldp+1030,((0U == (0xffffffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg))));
    bufp->fullIData(oldp+1031,((0x1ffffffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)),25);
    bufp->fullBit(oldp+1032,((0U == (0x1ffffffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg))));
    bufp->fullIData(oldp+1033,((0x3ffffffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)),26);
    bufp->fullBit(oldp+1034,((0U == (0x3ffffffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg))));
    bufp->fullIData(oldp+1035,((0x7ffffffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)),27);
    bufp->fullBit(oldp+1036,((0U == (0x7ffffffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg))));
    bufp->fullIData(oldp+1037,((0xfffffffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)),28);
    bufp->fullBit(oldp+1038,((0U == (0xfffffffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg))));
    bufp->fullIData(oldp+1039,((0x1fffffffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)),29);
    bufp->fullBit(oldp+1040,((0U == (0x1fffffffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg))));
    bufp->fullIData(oldp+1041,((0x3fffffffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)),30);
    bufp->fullBit(oldp+1042,((0U == (0x3fffffffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg))));
    bufp->fullCData(oldp+1043,((7U & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)),3);
    bufp->fullBit(oldp+1044,((0U == (7U & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg))));
    bufp->fullIData(oldp+1045,((0x7fffffffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)),31);
    bufp->fullBit(oldp+1046,((0U == (0x7fffffffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg))));
    bufp->fullBit(oldp+1047,((0U == vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)));
    bufp->fullCData(oldp+1048,((0xfU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)),4);
    bufp->fullBit(oldp+1049,((0U == (0xfU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg))));
    bufp->fullCData(oldp+1050,((0x1fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)),5);
    bufp->fullBit(oldp+1051,((0U == (0x1fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg))));
    bufp->fullCData(oldp+1052,((0x3fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)),6);
    bufp->fullBit(oldp+1053,((0U == (0x3fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg))));
    bufp->fullCData(oldp+1054,((0x7fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)),7);
    bufp->fullBit(oldp+1055,((0U == (0x7fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg))));
    bufp->fullCData(oldp+1056,((0xffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)),8);
    bufp->fullBit(oldp+1057,((0U == (0xffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg))));
    bufp->fullSData(oldp+1058,((0x1ffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)),9);
    bufp->fullBit(oldp+1059,((0U == (0x1ffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg))));
    bufp->fullSData(oldp+1060,((0x3ffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg)),10);
    bufp->fullBit(oldp+1061,((0U == (0x3ffU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg))));
    bufp->fullCData(oldp+1062,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT____Vcellout__max_extractor__out),5);
    bufp->fullIData(oldp+1063,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__cycles),32);
    bufp->fullBit(oldp+1064,((1U & (IData)((1ULL & 
                                            (((QData)((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__pc_D)) 
                                              + (QData)((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imm_D))) 
                                             >> 0x20U))))));
    bufp->fullIData(oldp+1065,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile
                               [(0x1fU & (vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D 
                                          >> 0xfU))]),32);
    bufp->fullIData(oldp+1066,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile
                               [(0x1fU & (vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D 
                                          >> 0x14U))]),32);
    bufp->fullIData(oldp+1067,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[0]),32);
    bufp->fullIData(oldp+1068,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[1]),32);
    bufp->fullIData(oldp+1069,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[2]),32);
    bufp->fullIData(oldp+1070,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[3]),32);
    bufp->fullIData(oldp+1071,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[4]),32);
    bufp->fullIData(oldp+1072,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[5]),32);
    bufp->fullIData(oldp+1073,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[6]),32);
    bufp->fullIData(oldp+1074,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[7]),32);
    bufp->fullIData(oldp+1075,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[8]),32);
    bufp->fullIData(oldp+1076,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[9]),32);
    bufp->fullIData(oldp+1077,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[10]),32);
    bufp->fullIData(oldp+1078,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[11]),32);
    bufp->fullIData(oldp+1079,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[12]),32);
    bufp->fullIData(oldp+1080,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[13]),32);
    bufp->fullIData(oldp+1081,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[14]),32);
    bufp->fullIData(oldp+1082,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[15]),32);
    bufp->fullIData(oldp+1083,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[16]),32);
    bufp->fullIData(oldp+1084,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[17]),32);
    bufp->fullIData(oldp+1085,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[18]),32);
    bufp->fullIData(oldp+1086,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[19]),32);
    bufp->fullIData(oldp+1087,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[20]),32);
    bufp->fullIData(oldp+1088,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[21]),32);
    bufp->fullIData(oldp+1089,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[22]),32);
    bufp->fullIData(oldp+1090,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[23]),32);
    bufp->fullIData(oldp+1091,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[24]),32);
    bufp->fullIData(oldp+1092,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[25]),32);
    bufp->fullIData(oldp+1093,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[26]),32);
    bufp->fullIData(oldp+1094,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[27]),32);
    bufp->fullIData(oldp+1095,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[28]),32);
    bufp->fullIData(oldp+1096,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[29]),32);
    bufp->fullIData(oldp+1097,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[30]),32);
    bufp->fullIData(oldp+1098,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[31]),32);
    bufp->fullBit(oldp+1099,(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__bypass_mux_sel));
    bufp->fullBit(oldp+1100,(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr));
    bufp->fullBit(oldp+1101,(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr));
    bufp->fullBit(oldp+1102,(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full));
    bufp->fullBit(oldp+1103,((1U & ((IData)(1U) + (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))));
    bufp->fullBit(oldp+1104,((1U & ((IData)(1U) + (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)))));
    bufp->fullWData(oldp+1105,(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                               [vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr]),78);
    bufp->fullWData(oldp+1108,(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[0]),78);
    bufp->fullWData(oldp+1111,(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[1]),78);
    bufp->fullCData(oldp+1114,((0xfU & (vlSelf->ProcAlt_noparam__DOT__v__DOT____Vcellout__imem_queue__deq_msg[2U] 
                                        >> 0xaU))),4);
    bufp->fullCData(oldp+1115,((0xffU & (vlSelf->ProcAlt_noparam__DOT__v__DOT____Vcellout__imem_queue__deq_msg[2U] 
                                         >> 2U))),8);
    bufp->fullIData(oldp+1116,(((vlSelf->ProcAlt_noparam__DOT__v__DOT____Vcellout__imem_queue__deq_msg[2U] 
                                 << 0x1eU) | (vlSelf->ProcAlt_noparam__DOT__v__DOT____Vcellout__imem_queue__deq_msg[1U] 
                                              >> 2U))),32);
    bufp->fullCData(oldp+1117,((3U & vlSelf->ProcAlt_noparam__DOT__v__DOT____Vcellout__imem_queue__deq_msg[1U])),2);
    bufp->fullIData(oldp+1118,(vlSelf->ProcAlt_noparam__DOT__v__DOT____Vcellout__imem_queue__deq_msg[0U]),32);
    bufp->fullIData(oldp+1119,(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__cycles),32);
    bufp->fullBit(oldp+1120,(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_respstream_drop_unit__DOT__state));
    bufp->fullIData(oldp+1121,(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__cycles),32);
    bufp->fullBit(oldp+1122,(vlSelf->ProcAlt_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full));
    bufp->fullBit(oldp+1123,(vlSelf->ProcAlt_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    bufp->fullIData(oldp+1124,(vlSelf->ProcAlt_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore),32);
    bufp->fullIData(oldp+1125,(vlSelf->ProcAlt_noparam__DOT__v__DOT__vc_trace__DOT__cycles),32);
    bufp->fullBit(oldp+1126,(vlSelf->ProcAlt_noparam__DOT__v__DOT__imul_req_rdy_D));
    bufp->fullBit(oldp+1127,(vlSelf->ProcAlt_noparam__DOT__v__DOT__imul_resp_val_X));
    bufp->fullBit(oldp+1128,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__result_en));
    bufp->fullBit(oldp+1129,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__a_mux_sel));
    bufp->fullBit(oldp+1130,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__b_mux_sel));
    bufp->fullCData(oldp+1131,(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__control_unit__DOT__state),2);
    bufp->fullBit(oldp+1132,(vlSelf->clk));
    bufp->fullBit(oldp+1133,(vlSelf->commit_inst));
    bufp->fullIData(oldp+1134,(vlSelf->core_id),32);
    bufp->fullBit(oldp+1135,(vlSelf->reset));
    bufp->fullBit(oldp+1136,(vlSelf->stats_en));
    bufp->fullWData(oldp+1137,(vlSelf->dmem_reqstream_msg),78);
    bufp->fullBit(oldp+1140,(vlSelf->dmem_reqstream_rdy));
    bufp->fullBit(oldp+1141,(vlSelf->dmem_reqstream_val));
    bufp->fullQData(oldp+1142,(vlSelf->dmem_respstream_msg),48);
    bufp->fullBit(oldp+1144,(vlSelf->dmem_respstream_rdy));
    bufp->fullBit(oldp+1145,(vlSelf->dmem_respstream_val));
    bufp->fullWData(oldp+1146,(vlSelf->imem_reqstream_msg),78);
    bufp->fullBit(oldp+1149,(vlSelf->imem_reqstream_rdy));
    bufp->fullBit(oldp+1150,(vlSelf->imem_reqstream_val));
    bufp->fullQData(oldp+1151,(vlSelf->imem_respstream_msg),48);
    bufp->fullBit(oldp+1153,(vlSelf->imem_respstream_rdy));
    bufp->fullBit(oldp+1154,(vlSelf->imem_respstream_val));
    bufp->fullIData(oldp+1155,(vlSelf->mngr2proc_msg),32);
    bufp->fullBit(oldp+1156,(vlSelf->mngr2proc_rdy));
    bufp->fullBit(oldp+1157,(vlSelf->mngr2proc_val));
    bufp->fullIData(oldp+1158,(vlSelf->proc2mngr_msg),32);
    bufp->fullBit(oldp+1159,(vlSelf->proc2mngr_rdy));
    bufp->fullBit(oldp+1160,(vlSelf->proc2mngr_val));
    bufp->fullBit(oldp+1161,(((IData)(vlSelf->commit_inst) 
                              & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__proc2mngr_val_W))));
    bufp->fullBit(oldp+1162,(((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_D) 
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
    bufp->fullBit(oldp+1163,(((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_X) 
                              & (((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
                                  & (0U != (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_type_X))) 
                                 | ((~ (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imul_resp_val_X)) 
                                    & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__mul_X))))));
    bufp->fullBit(oldp+1164,(((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_M) 
                              & ((~ (IData)(vlSelf->dmem_respstream_val)) 
                                 & (0U != (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__dmem_type_M))))));
    bufp->fullBit(oldp+1165,(((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_D) 
                              & ((~ (IData)(vlSelf->mngr2proc_val)) 
                                 & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__mngr2proc_rdy_D)))));
    bufp->fullCData(oldp+1166,((0xfU & (IData)((vlSelf->dmem_respstream_msg 
                                                >> 0x2cU)))),4);
    bufp->fullCData(oldp+1167,((0xffU & (IData)((vlSelf->dmem_respstream_msg 
                                                 >> 0x24U)))),8);
    bufp->fullCData(oldp+1168,((3U & (IData)((vlSelf->dmem_respstream_msg 
                                              >> 0x22U)))),2);
    bufp->fullCData(oldp+1169,((3U & (IData)((vlSelf->dmem_respstream_msg 
                                              >> 0x20U)))),2);
    bufp->fullIData(oldp+1170,((IData)(vlSelf->dmem_respstream_msg)),32);
    bufp->fullIData(oldp+1171,(((0U == (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__csrr_sel_D))
                                 ? vlSelf->mngr2proc_msg
                                 : ((1U == (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__csrr_sel_D))
                                     ? 1U : ((2U == (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__csrr_sel_D))
                                              ? vlSelf->core_id
                                              : 0U)))),32);
    bufp->fullIData(oldp+1172,(((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__a_mux_sel)
                                 ? ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__a_mux_sel)
                                     ? VL_SHIFTL_III(32,32,6, vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__a_reg, 
                                                     (0x3fU 
                                                      & ((IData)(1U) 
                                                         + (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT____Vcellout__max_extractor__out))))
                                     : 0U) : vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op2_D)),32);
    bufp->fullIData(oldp+1173,(((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__b_mux_sel)
                                 ? ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__b_mux_sel)
                                     ? VL_SHIFTR_III(32,32,6, vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__b_reg, 
                                                     (0x3fU 
                                                      & ((IData)(1U) 
                                                         + (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__datapath__DOT__bit_shift__DOT____Vcellout__max_extractor__out))))
                                     : 0U) : vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf_rdata0_D)),32);
    bufp->fullIData(oldp+1174,((IData)(vlSelf->imem_respstream_msg)),32);
    bufp->fullBit(oldp+1175,((1U & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_respstream_drop_unit__DOT__state)
                                     ? (~ ((IData)(vlSelf->imem_respstream_rdy) 
                                           & (IData)(vlSelf->imem_respstream_val)))
                                     : ((~ ((IData)(vlSelf->imem_respstream_rdy) 
                                            & (IData)(vlSelf->imem_respstream_val))) 
                                        & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_respstream_drop))))));
    bufp->fullBit(oldp+1176,(((IData)(vlSelf->imem_respstream_rdy) 
                              & (IData)(vlSelf->imem_respstream_val))));
    bufp->fullCData(oldp+1177,((0xfU & (IData)((vlSelf->imem_respstream_msg 
                                                >> 0x2cU)))),4);
    bufp->fullCData(oldp+1178,((0xffU & (IData)((vlSelf->imem_respstream_msg 
                                                 >> 0x24U)))),8);
    bufp->fullCData(oldp+1179,((3U & (IData)((vlSelf->imem_respstream_msg 
                                              >> 0x22U)))),2);
    bufp->fullCData(oldp+1180,((3U & (IData)((vlSelf->imem_respstream_msg 
                                              >> 0x20U)))),2);
}
