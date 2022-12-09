// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VOTTER_SIM.h for the primary calling header

#include "verilated.h"

#include "VOTTER_SIM__Syms.h"
#include "VOTTER_SIM___024root.h"

VL_ATTR_COLD VlCoroutine VOTTER_SIM___024root___eval_initial__TOP__0(VOTTER_SIM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VOTTER_SIM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_SIM___024root___eval_initial__TOP__0\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_hfa15de26__0;
    // Body
    __Vtemp_hfa15de26__0[0U] = 0x2e766364U;
    __Vtemp_hfa15de26__0[1U] = 0x64756d70U;
    __Vtemp_hfa15de26__0[2U] = 0x766c745fU;
    __Vtemp_hfa15de26__0[3U] = 0x6f67732fU;
    __Vtemp_hfa15de26__0[4U] = 0x6cU;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(5, __Vtemp_hfa15de26__0));
    vlSymsp->_traceDumpOpen();
    co_await vlSelf->__VdlySched.delay(0x1e8480U, "PipelinedOtter/OTTER_SIM.sv", 63);
    VL_FINISH_MT("PipelinedOtter/OTTER_SIM.sv", 64, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VOTTER_SIM___024root___dump_triggers__stl(VOTTER_SIM___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VOTTER_SIM___024root___eval_triggers__stl(VOTTER_SIM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VOTTER_SIM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_SIM___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VOTTER_SIM___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
