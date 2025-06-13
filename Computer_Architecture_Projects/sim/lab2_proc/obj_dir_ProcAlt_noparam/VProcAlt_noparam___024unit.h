// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VProcAlt_noparam.h for the primary calling header

#ifndef VERILATED_VPROCALT_NOPARAM___024UNIT_H_
#define VERILATED_VPROCALT_NOPARAM___024UNIT_H_  // guard

#include "verilated.h"


class VProcAlt_noparam__Syms;

class alignas(VL_CACHE_LINE_BYTES) VProcAlt_noparam___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    VProcAlt_noparam__Syms* const vlSymsp;

    // CONSTRUCTORS
    VProcAlt_noparam___024unit(VProcAlt_noparam__Syms* symsp, const char* v__name);
    ~VProcAlt_noparam___024unit();
    VL_UNCOPYABLE(VProcAlt_noparam___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
