// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VOTTER_SIM.h for the primary calling header

#include "verilated.h"

#include "VOTTER_SIM__Syms.h"
#include "VOTTER_SIM___024root.h"

void VOTTER_SIM___024root___ctor_var_reset(VOTTER_SIM___024root* vlSelf);

VOTTER_SIM___024root::VOTTER_SIM___024root(VOTTER_SIM__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , __VdlySched{*symsp->_vm_contextp__}
    , __Vm_mtaskstate_10(2U)
    , __Vm_mtaskstate_19(3U)
    , __Vm_mtaskstate_23(1U)
    , __Vm_mtaskstate_13(2U)
    , __Vm_mtaskstate_5(1U)
    , __Vm_mtaskstate_22(3U)
    , __Vm_mtaskstate_18(1U)
    , __Vm_mtaskstate_21(3U)
    , __Vm_mtaskstate_16(4U)
    , __Vm_mtaskstate_20(1U)
    , __Vm_mtaskstate_24(1U)
    , __Vm_mtaskstate_final__nba(4U)
    , vlSymsp{symsp}
 {
    // Reset structure values
    VOTTER_SIM___024root___ctor_var_reset(this);
}

void VOTTER_SIM___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VOTTER_SIM___024root::~VOTTER_SIM___024root() {
}
