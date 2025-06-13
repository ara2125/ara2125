// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VProcAlt_noparam__pch.h"
#include "VProcAlt_noparam.h"
#include "VProcAlt_noparam___024root.h"
#include "VProcAlt_noparam___024unit.h"

void VProcAlt_noparam___024root____Vdpiexp_ProcAlt_noparam__DOT__v__DOT__line_trace_TOP(VProcAlt_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str);
void VProcAlt_noparam___024root____Vdpiexp_ProcAlt_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__line_trace_TOP(VProcAlt_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str);
void VProcAlt_noparam___024root____Vdpiexp_ProcAlt_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__line_trace_TOP(VProcAlt_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str);
void VProcAlt_noparam___024root____Vdpiexp_ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__line_trace_TOP(VProcAlt_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str);
void VProcAlt_noparam___024root____Vdpiexp_ProcAlt_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__line_trace_TOP(VProcAlt_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str);
void VProcAlt_noparam___024root____Vdpiexp_ProcAlt_noparam__DOT__v__DOT__imem_respstream_trace__DOT__line_trace_TOP(VProcAlt_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str);

// FUNCTIONS
VProcAlt_noparam__Syms::~VProcAlt_noparam__Syms()
{
}

VProcAlt_noparam__Syms::VProcAlt_noparam__Syms(VerilatedContext* contextp, const char* namep, VProcAlt_noparam* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(73187);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_ProcAlt_noparam__v.configure(this, name(), "ProcAlt_noparam.v", "v", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ProcAlt_noparam__v__dmem_reqstream_trace.configure(this, name(), "ProcAlt_noparam.v.dmem_reqstream_trace", "dmem_reqstream_trace", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ProcAlt_noparam__v__dmem_respstream_trace.configure(this, name(), "ProcAlt_noparam.v.dmem_respstream_trace", "dmem_respstream_trace", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ProcAlt_noparam__v__dpath__imul.configure(this, name(), "ProcAlt_noparam.v.dpath.imul", "imul", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ProcAlt_noparam__v__imem_reqstream_trace.configure(this, name(), "ProcAlt_noparam.v.imem_reqstream_trace", "imem_reqstream_trace", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ProcAlt_noparam__v__imem_respstream_trace.configure(this, name(), "ProcAlt_noparam.v.imem_respstream_trace", "imem_respstream_trace", -12, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_ProcAlt_noparam__v.exportInsert(__Vfinal, "line_trace", (void*)(&VProcAlt_noparam___024root____Vdpiexp_ProcAlt_noparam__DOT__v__DOT__line_trace_TOP));
        __Vscope_ProcAlt_noparam__v__dmem_reqstream_trace.exportInsert(__Vfinal, "line_trace", (void*)(&VProcAlt_noparam___024root____Vdpiexp_ProcAlt_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__line_trace_TOP));
        __Vscope_ProcAlt_noparam__v__dmem_respstream_trace.exportInsert(__Vfinal, "line_trace", (void*)(&VProcAlt_noparam___024root____Vdpiexp_ProcAlt_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__line_trace_TOP));
        __Vscope_ProcAlt_noparam__v__dpath__imul.exportInsert(__Vfinal, "line_trace", (void*)(&VProcAlt_noparam___024root____Vdpiexp_ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__line_trace_TOP));
        __Vscope_ProcAlt_noparam__v__imem_reqstream_trace.exportInsert(__Vfinal, "line_trace", (void*)(&VProcAlt_noparam___024root____Vdpiexp_ProcAlt_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__line_trace_TOP));
        __Vscope_ProcAlt_noparam__v__imem_respstream_trace.exportInsert(__Vfinal, "line_trace", (void*)(&VProcAlt_noparam___024root____Vdpiexp_ProcAlt_noparam__DOT__v__DOT__imem_respstream_trace__DOT__line_trace_TOP));
    }
}
