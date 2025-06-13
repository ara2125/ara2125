// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VPROCBASE_NOPARAM__DPI_H_
#define VERILATED_VPROCBASE_NOPARAM__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI EXPORTS
    // DPI export at lab2_proc/ProcBase.v:297:8
    extern void line_trace(svBitVecVal* trace_str);

#ifdef __cplusplus
}
#endif

#endif  // guard
