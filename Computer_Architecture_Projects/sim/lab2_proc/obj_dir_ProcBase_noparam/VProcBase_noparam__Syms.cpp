// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VProcBase_noparam__pch.h"
#include "VProcBase_noparam.h"
#include "VProcBase_noparam___024root.h"
#include "VProcBase_noparam___024unit.h"

void VProcBase_noparam___024root____Vdpiexp_ProcBase_noparam__DOT__v__DOT__line_trace_TOP(VProcBase_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str);
void VProcBase_noparam___024root____Vdpiexp_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__line_trace_TOP(VProcBase_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str);
void VProcBase_noparam___024root____Vdpiexp_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__line_trace_TOP(VProcBase_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str);
void VProcBase_noparam___024root____Vdpiexp_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__line_trace_TOP(VProcBase_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str);
void VProcBase_noparam___024root____Vdpiexp_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__line_trace_TOP(VProcBase_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str);
void VProcBase_noparam___024root____Vdpiexp_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__line_trace_TOP(VProcBase_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str);

// FUNCTIONS
VProcBase_noparam__Syms::~VProcBase_noparam__Syms()
{
}

VProcBase_noparam__Syms::VProcBase_noparam__Syms(VerilatedContext* contextp, const char* namep, VProcBase_noparam* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(73329);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_ProcBase_noparam__v.configure(this, name(), "ProcBase_noparam.v", "v", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ProcBase_noparam__v__dmem_reqstream_trace.configure(this, name(), "ProcBase_noparam.v.dmem_reqstream_trace", "dmem_reqstream_trace", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ProcBase_noparam__v__dmem_respstream_trace.configure(this, name(), "ProcBase_noparam.v.dmem_respstream_trace", "dmem_respstream_trace", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ProcBase_noparam__v__dpath__imul.configure(this, name(), "ProcBase_noparam.v.dpath.imul", "imul", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ProcBase_noparam__v__imem_reqstream_trace.configure(this, name(), "ProcBase_noparam.v.imem_reqstream_trace", "imem_reqstream_trace", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ProcBase_noparam__v__imem_respstream_trace.configure(this, name(), "ProcBase_noparam.v.imem_respstream_trace", "imem_respstream_trace", -12, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_ProcBase_noparam__v.exportInsert(__Vfinal, "line_trace", (void*)(&VProcBase_noparam___024root____Vdpiexp_ProcBase_noparam__DOT__v__DOT__line_trace_TOP));
        __Vscope_ProcBase_noparam__v__dmem_reqstream_trace.exportInsert(__Vfinal, "line_trace", (void*)(&VProcBase_noparam___024root____Vdpiexp_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__line_trace_TOP));
        __Vscope_ProcBase_noparam__v__dmem_respstream_trace.exportInsert(__Vfinal, "line_trace", (void*)(&VProcBase_noparam___024root____Vdpiexp_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__line_trace_TOP));
        __Vscope_ProcBase_noparam__v__dpath__imul.exportInsert(__Vfinal, "line_trace", (void*)(&VProcBase_noparam___024root____Vdpiexp_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__line_trace_TOP));
        __Vscope_ProcBase_noparam__v__imem_reqstream_trace.exportInsert(__Vfinal, "line_trace", (void*)(&VProcBase_noparam___024root____Vdpiexp_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__line_trace_TOP));
        __Vscope_ProcBase_noparam__v__imem_respstream_trace.exportInsert(__Vfinal, "line_trace", (void*)(&VProcBase_noparam___024root____Vdpiexp_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__line_trace_TOP));
    }
}
