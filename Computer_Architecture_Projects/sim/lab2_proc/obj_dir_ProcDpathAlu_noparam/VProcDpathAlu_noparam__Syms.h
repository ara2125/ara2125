// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VPROCDPATHALU_NOPARAM__SYMS_H_
#define VERILATED_VPROCDPATHALU_NOPARAM__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VProcDpathAlu_noparam.h"

// INCLUDE MODULE CLASSES
#include "VProcDpathAlu_noparam___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VProcDpathAlu_noparam__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VProcDpathAlu_noparam* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VProcDpathAlu_noparam___024root TOP;

    // CONSTRUCTORS
    VProcDpathAlu_noparam__Syms(VerilatedContext* contextp, const char* namep, VProcDpathAlu_noparam* modelp);
    ~VProcDpathAlu_noparam__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
