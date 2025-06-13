// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VProcAlt_noparam__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VProcAlt_noparam::VProcAlt_noparam(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VProcAlt_noparam__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , commit_inst{vlSymsp->TOP.commit_inst}
    , stats_en{vlSymsp->TOP.stats_en}
    , dmem_reqstream_rdy{vlSymsp->TOP.dmem_reqstream_rdy}
    , dmem_reqstream_val{vlSymsp->TOP.dmem_reqstream_val}
    , dmem_respstream_rdy{vlSymsp->TOP.dmem_respstream_rdy}
    , dmem_respstream_val{vlSymsp->TOP.dmem_respstream_val}
    , imem_reqstream_rdy{vlSymsp->TOP.imem_reqstream_rdy}
    , imem_reqstream_val{vlSymsp->TOP.imem_reqstream_val}
    , imem_respstream_rdy{vlSymsp->TOP.imem_respstream_rdy}
    , imem_respstream_val{vlSymsp->TOP.imem_respstream_val}
    , mngr2proc_rdy{vlSymsp->TOP.mngr2proc_rdy}
    , mngr2proc_val{vlSymsp->TOP.mngr2proc_val}
    , proc2mngr_rdy{vlSymsp->TOP.proc2mngr_rdy}
    , proc2mngr_val{vlSymsp->TOP.proc2mngr_val}
    , core_id{vlSymsp->TOP.core_id}
    , dmem_reqstream_msg{vlSymsp->TOP.dmem_reqstream_msg}
    , imem_reqstream_msg{vlSymsp->TOP.imem_reqstream_msg}
    , mngr2proc_msg{vlSymsp->TOP.mngr2proc_msg}
    , proc2mngr_msg{vlSymsp->TOP.proc2mngr_msg}
    , dmem_respstream_msg{vlSymsp->TOP.dmem_respstream_msg}
    , imem_respstream_msg{vlSymsp->TOP.imem_respstream_msg}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VProcAlt_noparam::VProcAlt_noparam(const char* _vcname__)
    : VProcAlt_noparam(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VProcAlt_noparam::~VProcAlt_noparam() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VProcAlt_noparam___024root___eval_debug_assertions(VProcAlt_noparam___024root* vlSelf);
#endif  // VL_DEBUG
void VProcAlt_noparam___024root___eval_static(VProcAlt_noparam___024root* vlSelf);
void VProcAlt_noparam___024root___eval_initial(VProcAlt_noparam___024root* vlSelf);
void VProcAlt_noparam___024root___eval_settle(VProcAlt_noparam___024root* vlSelf);
void VProcAlt_noparam___024root___eval(VProcAlt_noparam___024root* vlSelf);

void VProcAlt_noparam::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VProcAlt_noparam::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VProcAlt_noparam___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VProcAlt_noparam___024root___eval_static(&(vlSymsp->TOP));
        VProcAlt_noparam___024root___eval_initial(&(vlSymsp->TOP));
        VProcAlt_noparam___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VProcAlt_noparam___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VProcAlt_noparam::eventsPending() { return false; }

uint64_t VProcAlt_noparam::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VProcAlt_noparam::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VProcAlt_noparam___024root___eval_final(VProcAlt_noparam___024root* vlSelf);

VL_ATTR_COLD void VProcAlt_noparam::final() {
    VProcAlt_noparam___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VProcAlt_noparam::hierName() const { return vlSymsp->name(); }
const char* VProcAlt_noparam::modelName() const { return "VProcAlt_noparam"; }
unsigned VProcAlt_noparam::threads() const { return 1; }
void VProcAlt_noparam::prepareClone() const { contextp()->prepareClone(); }
void VProcAlt_noparam::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VProcAlt_noparam::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VProcAlt_noparam___024root__trace_decl_types(VerilatedVcd* tracep);

void VProcAlt_noparam___024root__trace_init_top(VProcAlt_noparam___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VProcAlt_noparam___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VProcAlt_noparam___024root*>(voidSelf);
    VProcAlt_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VProcAlt_noparam___024root__trace_decl_types(tracep);
    VProcAlt_noparam___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VProcAlt_noparam___024root__trace_register(VProcAlt_noparam___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VProcAlt_noparam::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VProcAlt_noparam::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VProcAlt_noparam___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
