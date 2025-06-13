// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VPROCALT_NOPARAM__SYMS_H_
#define VERILATED_VPROCALT_NOPARAM__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VProcAlt_noparam.h"

// INCLUDE MODULE CLASSES
#include "VProcAlt_noparam___024root.h"
#include "VProcAlt_noparam___024unit.h"

// DPI TYPES for DPI Export callbacks (Internal use)
using VProcAlt_noparam__Vcb_line_trace_t = void (*) (VProcAlt_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str);

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VProcAlt_noparam__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VProcAlt_noparam* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VProcAlt_noparam___024root     TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_ProcAlt_noparam__v;
    VerilatedScope __Vscope_ProcAlt_noparam__v__dmem_reqstream_trace;
    VerilatedScope __Vscope_ProcAlt_noparam__v__dmem_respstream_trace;
    VerilatedScope __Vscope_ProcAlt_noparam__v__dpath__imul;
    VerilatedScope __Vscope_ProcAlt_noparam__v__imem_reqstream_trace;
    VerilatedScope __Vscope_ProcAlt_noparam__v__imem_respstream_trace;

    // CONSTRUCTORS
    VProcAlt_noparam__Syms(VerilatedContext* contextp, const char* namep, VProcAlt_noparam* modelp);
    ~VProcAlt_noparam__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
