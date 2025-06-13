// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VProcBase_noparam.h for the primary calling header

#ifndef VERILATED_VPROCBASE_NOPARAM___024UNIT_H_
#define VERILATED_VPROCBASE_NOPARAM___024UNIT_H_  // guard

#include "verilated.h"


class VProcBase_noparam__Syms;

class alignas(VL_CACHE_LINE_BYTES) VProcBase_noparam___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    VProcBase_noparam__Syms* const vlSymsp;

    // CONSTRUCTORS
    VProcBase_noparam___024unit(VProcBase_noparam__Syms* symsp, const char* v__name);
    ~VProcBase_noparam___024unit();
    VL_UNCOPYABLE(VProcBase_noparam___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
