// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
// Verilator compiles this file in when DPI functions are used.
// If you have multiple Verilated designs with the same DPI exported
// function names, you will get multiple definition link errors from here.
// This is an unfortunate result of the DPI specification.
// To solve this, either
//    1. Call VProcBase_noparam::{export_function} instead,
//       and do not even bother to compile this file
// or 2. Compile all __Dpi.cpp files in the same compiler run,
//       and #ifdefs already inserted here will sort everything out.

#include "VProcBase_noparam__Dpi.h"
#include "VProcBase_noparam.h"

#ifndef VL_DPIDECL_line_trace_
#define VL_DPIDECL_line_trace_
void line_trace(svBitVecVal* trace_str) {
    // DPI export at lab2_proc/ProcBase.v:297:8
    return VProcBase_noparam::line_trace(trace_str);
}
#endif

