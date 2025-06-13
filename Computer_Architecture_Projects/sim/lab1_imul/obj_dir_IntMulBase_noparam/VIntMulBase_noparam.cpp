// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VIntMulBase_noparam__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VIntMulBase_noparam::VIntMulBase_noparam(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VIntMulBase_noparam__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , istream_rdy{vlSymsp->TOP.istream_rdy}
    , istream_val{vlSymsp->TOP.istream_val}
    , ostream_rdy{vlSymsp->TOP.ostream_rdy}
    , ostream_val{vlSymsp->TOP.ostream_val}
    , ostream_msg{vlSymsp->TOP.ostream_msg}
    , istream_msg{vlSymsp->TOP.istream_msg}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VIntMulBase_noparam::VIntMulBase_noparam(const char* _vcname__)
    : VIntMulBase_noparam(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VIntMulBase_noparam::~VIntMulBase_noparam() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VIntMulBase_noparam___024root___eval_debug_assertions(VIntMulBase_noparam___024root* vlSelf);
#endif  // VL_DEBUG
void VIntMulBase_noparam___024root___eval_static(VIntMulBase_noparam___024root* vlSelf);
void VIntMulBase_noparam___024root___eval_initial(VIntMulBase_noparam___024root* vlSelf);
void VIntMulBase_noparam___024root___eval_settle(VIntMulBase_noparam___024root* vlSelf);
void VIntMulBase_noparam___024root___eval(VIntMulBase_noparam___024root* vlSelf);

void VIntMulBase_noparam::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VIntMulBase_noparam::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VIntMulBase_noparam___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VIntMulBase_noparam___024root___eval_static(&(vlSymsp->TOP));
        VIntMulBase_noparam___024root___eval_initial(&(vlSymsp->TOP));
        VIntMulBase_noparam___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VIntMulBase_noparam___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VIntMulBase_noparam::eventsPending() { return false; }

uint64_t VIntMulBase_noparam::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VIntMulBase_noparam::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VIntMulBase_noparam___024root___eval_final(VIntMulBase_noparam___024root* vlSelf);

VL_ATTR_COLD void VIntMulBase_noparam::final() {
    VIntMulBase_noparam___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VIntMulBase_noparam::hierName() const { return vlSymsp->name(); }
const char* VIntMulBase_noparam::modelName() const { return "VIntMulBase_noparam"; }
unsigned VIntMulBase_noparam::threads() const { return 1; }
void VIntMulBase_noparam::prepareClone() const { contextp()->prepareClone(); }
void VIntMulBase_noparam::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VIntMulBase_noparam::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VIntMulBase_noparam___024root__trace_decl_types(VerilatedVcd* tracep);

void VIntMulBase_noparam___024root__trace_init_top(VIntMulBase_noparam___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VIntMulBase_noparam___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VIntMulBase_noparam___024root*>(voidSelf);
    VIntMulBase_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VIntMulBase_noparam___024root__trace_decl_types(tracep);
    VIntMulBase_noparam___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VIntMulBase_noparam___024root__trace_register(VIntMulBase_noparam___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VIntMulBase_noparam::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VIntMulBase_noparam::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VIntMulBase_noparam___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
