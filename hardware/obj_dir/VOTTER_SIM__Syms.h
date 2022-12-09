// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VOTTER_SIM__SYMS_H_
#define VERILATED_VOTTER_SIM__SYMS_H_  // guard

#include "verilated.h"
#include "verilated_vcd_c.h"

// INCLUDE MODEL CLASS

#include "VOTTER_SIM.h"

// INCLUDE MODULE CLASSES
#include "VOTTER_SIM___024root.h"

// SYMS CLASS (contains all model state)
class VOTTER_SIM__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VOTTER_SIM* const __Vm_modelp;
    bool __Vm_dumping = false;  // Dumping is active
    VerilatedMutex __Vm_dumperMutex;  // Protect __Vm_dumperp
    VerilatedVcdC* __Vm_dumperp VL_GUARDED_BY(__Vm_dumperMutex) = nullptr;  /// Trace class for $dump*
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MULTI-THREADING
    VlThreadPool* const __Vm_threadPoolp;
    bool __Vm_even_cycle__ico = false;
    bool __Vm_even_cycle__act = false;
    bool __Vm_even_cycle__nba = false;

    // MODULE INSTANCE STATE
    VOTTER_SIM___024root           TOP;

    // CONSTRUCTORS
    VOTTER_SIM__Syms(VerilatedContext* contextp, const char* namep, VOTTER_SIM* modelp);
    ~VOTTER_SIM__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
    void _traceDump();
    void _traceDumpOpen();
    void _traceDumpClose();
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
