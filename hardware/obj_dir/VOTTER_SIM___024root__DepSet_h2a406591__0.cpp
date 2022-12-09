// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VOTTER_SIM.h for the primary calling header

#include "verilated.h"

#include "VOTTER_SIM__Syms.h"
#include "VOTTER_SIM___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VOTTER_SIM___024root___dump_triggers__act(VOTTER_SIM___024root* vlSelf);
#endif  // VL_DEBUG

void VOTTER_SIM___024root___eval_triggers__act(VOTTER_SIM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VOTTER_SIM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_SIM___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->CLK) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__CLK)));
    vlSelf->__VactTriggered.at(1U) = (((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI__DOT__clr) 
                                       & (~ (IData)(vlSelf->__Vtrigrprev__TOP__OTTER_SIM__DOT__Otter__DOT__SPI__DOT__clr))) 
                                      | ((~ (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__spi_clk)) 
                                         & (IData)(vlSelf->__Vtrigrprev__TOP__OTTER_SIM__DOT__Otter__DOT__spi_clk)));
    vlSelf->__VactTriggered.at(2U) = ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__sclk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__OTTER_SIM__DOT__Otter__DOT__sclk)));
    vlSelf->__VactTriggered.at(3U) = ((~ (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__sclk)) 
                                      & (IData)(vlSelf->__Vtrigrprev__TOP__OTTER_SIM__DOT__Otter__DOT__sclk));
    vlSelf->__VactTriggered.at(4U) = ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT__CathMod__DOT__s_clk_500) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT__CathMod__DOT__s_clk_500)));
    vlSelf->__VactTriggered.at(5U) = (((~ (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT____Vcellinp__SPI__rstb)) 
                                       & (IData)(vlSelf->__Vtrigrprev__TOP__OTTER_SIM__DOT__Otter__DOT____Vcellinp__SPI__rstb)) 
                                      | ((~ (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__spi_clk)) 
                                         & (IData)(vlSelf->__Vtrigrprev__TOP__OTTER_SIM__DOT__Otter__DOT__spi_clk)));
    vlSelf->__VactTriggered.at(6U) = (((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI__DOT__clr) 
                                       & (~ (IData)(vlSelf->__Vtrigrprev__TOP__OTTER_SIM__DOT__Otter__DOT__SPI__DOT__clr))) 
                                      | ((IData)(vlSelf->OTTER_SIM__DOT__SPI_SCLK) 
                                         & (~ (IData)(vlSelf->__Vtrigrprev__TOP__OTTER_SIM__DOT__SPI_SCLK))));
    vlSelf->__VactTriggered.at(7U) = (((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI__DOT__clr) 
                                       & (~ (IData)(vlSelf->__Vtrigrprev__TOP__OTTER_SIM__DOT__Otter__DOT__SPI__DOT__clr))) 
                                      | ((~ (IData)(vlSelf->OTTER_SIM__DOT__SPI_SCLK)) 
                                         & (IData)(vlSelf->__Vtrigrprev__TOP__OTTER_SIM__DOT__SPI_SCLK)));
    vlSelf->__VactTriggered.at(8U) = vlSelf->__VdlySched.awaitingCurrentTime();
    vlSelf->__Vtrigrprev__TOP__CLK = vlSelf->CLK;
    vlSelf->__Vtrigrprev__TOP__OTTER_SIM__DOT__Otter__DOT__SPI__DOT__clr 
        = vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI__DOT__clr;
    vlSelf->__Vtrigrprev__TOP__OTTER_SIM__DOT__Otter__DOT__spi_clk 
        = vlSelf->OTTER_SIM__DOT__Otter__DOT__spi_clk;
    vlSelf->__Vtrigrprev__TOP__OTTER_SIM__DOT__Otter__DOT__sclk 
        = vlSelf->OTTER_SIM__DOT__Otter__DOT__sclk;
    vlSelf->__Vtrigrprev__TOP__OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT__CathMod__DOT__s_clk_500 
        = vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT__CathMod__DOT__s_clk_500;
    vlSelf->__Vtrigrprev__TOP__OTTER_SIM__DOT__Otter__DOT____Vcellinp__SPI__rstb 
        = vlSelf->OTTER_SIM__DOT__Otter__DOT____Vcellinp__SPI__rstb;
    vlSelf->__Vtrigrprev__TOP__OTTER_SIM__DOT__SPI_SCLK 
        = vlSelf->OTTER_SIM__DOT__SPI_SCLK;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VOTTER_SIM___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void VOTTER_SIM___024root____Vthread__nba__0(void* voidSelf, bool even_cycle);
void VOTTER_SIM___024root____Vthread__nba__1(void* voidSelf, bool even_cycle);
void VOTTER_SIM___024root____Vthread__nba__2(void* voidSelf, bool even_cycle);
void VOTTER_SIM___024root____Vthread__nba__3(void* voidSelf, bool even_cycle);

void VOTTER_SIM___024root___eval_nba(VOTTER_SIM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VOTTER_SIM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_SIM___024root___eval_nba\n"); );
    // Body
    vlSymsp->__Vm_even_cycle__nba = !vlSymsp->__Vm_even_cycle__nba;
    vlSymsp->__Vm_threadPoolp->workerp(0)->addTask(&VOTTER_SIM___024root____Vthread__nba__0, vlSelf, vlSymsp->__Vm_even_cycle__nba);
    vlSymsp->__Vm_threadPoolp->workerp(1)->addTask(&VOTTER_SIM___024root____Vthread__nba__1, vlSelf, vlSymsp->__Vm_even_cycle__nba);
    vlSymsp->__Vm_threadPoolp->workerp(2)->addTask(&VOTTER_SIM___024root____Vthread__nba__2, vlSelf, vlSymsp->__Vm_even_cycle__nba);
    VOTTER_SIM___024root____Vthread__nba__3(vlSelf, vlSymsp->__Vm_even_cycle__nba);
    Verilated::mtaskId(0);
    vlSelf->__Vm_mtaskstate_final__nba.waitUntilUpstreamDone(vlSymsp->__Vm_even_cycle__nba);
}

void VOTTER_SIM___024root___nba_sequent__TOP__0(VOTTER_SIM___024root* vlSelf);
void VOTTER_SIM___024root___nba_sequent__TOP__13(VOTTER_SIM___024root* vlSelf);
void VOTTER_SIM___024root___nba_sequent__TOP__25(VOTTER_SIM___024root* vlSelf);

void VOTTER_SIM___024root____Vthread__nba__0(void* voidSelf, bool even_cycle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_SIM___024root____Vthread__nba__0\n"); );
    // Body
    VOTTER_SIM___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VOTTER_SIM___024root*>(voidSelf);
    VOTTER_SIM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Verilated::mtaskId(2);
    if (vlSelf->__VnbaTriggered.at(4U)) {
        VOTTER_SIM___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(12);
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VOTTER_SIM___024root___nba_sequent__TOP__13(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_16.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_21.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(17);
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VOTTER_SIM___024root___nba_sequent__TOP__25(vlSelf);
        vlSelf->__Vm_traceActivity[8U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_final__nba.signalUpstreamDone(even_cycle);
}

void VOTTER_SIM___024root___nba_sequent__TOP__3(VOTTER_SIM___024root* vlSelf);
void VOTTER_SIM___024root___nba_sequent__TOP__4(VOTTER_SIM___024root* vlSelf);
void VOTTER_SIM___024root___nba_sequent__TOP__6(VOTTER_SIM___024root* vlSelf);
void VOTTER_SIM___024root___nba_sequent__TOP__7(VOTTER_SIM___024root* vlSelf);
void VOTTER_SIM___024root___nba_comb__TOP__0(VOTTER_SIM___024root* vlSelf);
void VOTTER_SIM___024root___nba_sequent__TOP__1(VOTTER_SIM___024root* vlSelf);
void VOTTER_SIM___024root___nba_sequent__TOP__28(VOTTER_SIM___024root* vlSelf);
void VOTTER_SIM___024root___nba_sequent__TOP__31(VOTTER_SIM___024root* vlSelf);
void VOTTER_SIM___024root___nba_sequent__TOP__34(VOTTER_SIM___024root* vlSelf);
void VOTTER_SIM___024root___nba_sequent__TOP__35(VOTTER_SIM___024root* vlSelf);
void VOTTER_SIM___024root___nba_sequent__TOP__40(VOTTER_SIM___024root* vlSelf);

void VOTTER_SIM___024root____Vthread__nba__1(void* voidSelf, bool even_cycle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_SIM___024root____Vthread__nba__1\n"); );
    // Body
    VOTTER_SIM___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VOTTER_SIM___024root*>(voidSelf);
    VOTTER_SIM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Verilated::mtaskId(7);
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VOTTER_SIM___024root___nba_sequent__TOP__3(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(6U)) {
        VOTTER_SIM___024root___nba_sequent__TOP__4(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VOTTER_SIM___024root___nba_sequent__TOP__6(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(5U)) {
        VOTTER_SIM___024root___nba_sequent__TOP__7(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(5U) | vlSelf->__VnbaTriggered.at(6U))) {
        VOTTER_SIM___024root___nba_comb__TOP__0(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_16.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_21.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(3);
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VOTTER_SIM___024root___nba_sequent__TOP__1(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_22.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_10.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(10);
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VOTTER_SIM___024root___nba_sequent__TOP__28(vlSelf);
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_21.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_19.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(19);
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VOTTER_SIM___024root___nba_sequent__TOP__31(vlSelf);
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_23.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(23);
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VOTTER_SIM___024root___nba_sequent__TOP__34(vlSelf);
        vlSelf->__Vm_traceActivity[0x11U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_13.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(13);
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VOTTER_SIM___024root___nba_sequent__TOP__35(vlSelf);
        vlSelf->__Vm_traceActivity[0x12U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_24.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(25);
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VOTTER_SIM___024root___nba_sequent__TOP__40(vlSelf);
        vlSelf->__Vm_traceActivity[0x16U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_final__nba.signalUpstreamDone(even_cycle);
}

void VOTTER_SIM___024root___nba_sequent__TOP__2(VOTTER_SIM___024root* vlSelf);
void VOTTER_SIM___024root___nba_sequent__TOP__10(VOTTER_SIM___024root* vlSelf);
void VOTTER_SIM___024root___nba_sequent__TOP__11(VOTTER_SIM___024root* vlSelf);
void VOTTER_SIM___024root___nba_sequent__TOP__12(VOTTER_SIM___024root* vlSelf);
void VOTTER_SIM___024root___nba_sequent__TOP__27(VOTTER_SIM___024root* vlSelf);
void VOTTER_SIM___024root___nba_sequent__TOP__33(VOTTER_SIM___024root* vlSelf);
void VOTTER_SIM___024root___nba_sequent__TOP__29(VOTTER_SIM___024root* vlSelf);
void VOTTER_SIM___024root___nba_comb__TOP__2(VOTTER_SIM___024root* vlSelf);
void VOTTER_SIM___024root___nba_sequent__TOP__30(VOTTER_SIM___024root* vlSelf);
void VOTTER_SIM___024root___nba_sequent__TOP__36(VOTTER_SIM___024root* vlSelf);
void VOTTER_SIM___024root___nba_comb__TOP__3(VOTTER_SIM___024root* vlSelf);
void VOTTER_SIM___024root___nba_sequent__TOP__37(VOTTER_SIM___024root* vlSelf);
void VOTTER_SIM___024root___nba_comb__TOP__4(VOTTER_SIM___024root* vlSelf);
void VOTTER_SIM___024root___nba_sequent__TOP__38(VOTTER_SIM___024root* vlSelf);

void VOTTER_SIM___024root____Vthread__nba__2(void* voidSelf, bool even_cycle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_SIM___024root____Vthread__nba__2\n"); );
    // Body
    VOTTER_SIM___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VOTTER_SIM___024root*>(voidSelf);
    VOTTER_SIM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Verilated::mtaskId(6);
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VOTTER_SIM___024root___nba_sequent__TOP__2(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_16.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(11);
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VOTTER_SIM___024root___nba_sequent__TOP__10(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(7U)) {
        VOTTER_SIM___024root___nba_sequent__TOP__11(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VOTTER_SIM___024root___nba_sequent__TOP__12(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_16.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_13.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_5.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(5);
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VOTTER_SIM___024root___nba_sequent__TOP__27(vlSelf);
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_10.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_19.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_20.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_22.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(22);
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VOTTER_SIM___024root___nba_sequent__TOP__33(vlSelf);
        vlSelf->__Vm_traceActivity[0x10U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_23.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_13.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_18.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(18);
    if (vlSelf->__VnbaTriggered.at(3U)) {
        VOTTER_SIM___024root___nba_sequent__TOP__29(vlSelf);
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(2U) | vlSelf->__VnbaTriggered.at(3U))) {
        VOTTER_SIM___024root___nba_comb__TOP__2(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VOTTER_SIM___024root___nba_sequent__TOP__30(vlSelf);
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_21.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(21);
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VOTTER_SIM___024root___nba_sequent__TOP__36(vlSelf);
        vlSelf->__Vm_traceActivity[0x13U] = 1U;
    }
    if (((vlSelf->__VnbaTriggered.at(2U) | vlSelf->__VnbaTriggered.at(5U)) 
         | vlSelf->__VnbaTriggered.at(6U))) {
        VOTTER_SIM___024root___nba_comb__TOP__3(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VOTTER_SIM___024root___nba_sequent__TOP__37(vlSelf);
        vlSelf->__Vm_traceActivity[0x14U] = 1U;
    }
    if (((vlSelf->__VnbaTriggered.at(2U) | vlSelf->__VnbaTriggered.at(5U)) 
         | vlSelf->__VnbaTriggered.at(6U))) {
        VOTTER_SIM___024root___nba_comb__TOP__4(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VOTTER_SIM___024root___nba_sequent__TOP__38(vlSelf);
        vlSelf->__Vm_traceActivity[0x15U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_final__nba.signalUpstreamDone(even_cycle);
}

void VOTTER_SIM___024root___nba_sequent__TOP__14(VOTTER_SIM___024root* vlSelf);
void VOTTER_SIM___024root___nba_sequent__TOP__9(VOTTER_SIM___024root* vlSelf);
void VOTTER_SIM___024root___nba_sequent__TOP__26(VOTTER_SIM___024root* vlSelf);
void VOTTER_SIM___024root___nba_sequent__TOP__16(VOTTER_SIM___024root* vlSelf);
void VOTTER_SIM___024root___nba_sequent__TOP__17(VOTTER_SIM___024root* vlSelf);
void VOTTER_SIM___024root___nba_sequent__TOP__18(VOTTER_SIM___024root* vlSelf);
void VOTTER_SIM___024root___nba_sequent__TOP__19(VOTTER_SIM___024root* vlSelf);
void VOTTER_SIM___024root___nba_sequent__TOP__20(VOTTER_SIM___024root* vlSelf);
void VOTTER_SIM___024root___nba_sequent__TOP__21(VOTTER_SIM___024root* vlSelf);
void VOTTER_SIM___024root___nba_comb__TOP__1(VOTTER_SIM___024root* vlSelf);
void VOTTER_SIM___024root___nba_sequent__TOP__22(VOTTER_SIM___024root* vlSelf);
void VOTTER_SIM___024root___nba_sequent__TOP__23(VOTTER_SIM___024root* vlSelf);
void VOTTER_SIM___024root___nba_sequent__TOP__24(VOTTER_SIM___024root* vlSelf);
void VOTTER_SIM___024root___nba_sequent__TOP__32(VOTTER_SIM___024root* vlSelf);
void VOTTER_SIM___024root___nba_sequent__TOP__39(VOTTER_SIM___024root* vlSelf);

void VOTTER_SIM___024root____Vthread__nba__3(void* voidSelf, bool even_cycle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_SIM___024root____Vthread__nba__3\n"); );
    // Body
    VOTTER_SIM___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VOTTER_SIM___024root*>(voidSelf);
    VOTTER_SIM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Verilated::mtaskId(14);
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VOTTER_SIM___024root___nba_sequent__TOP__14(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_5.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(9);
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VOTTER_SIM___024root___nba_sequent__TOP__9(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_10.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_18.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_19.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_22.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(4);
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VOTTER_SIM___024root___nba_sequent__TOP__26(vlSelf);
        vlSelf->__Vm_traceActivity[9U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_19.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_22.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_16.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(16);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VOTTER_SIM___024root___nba_sequent__TOP__16(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VOTTER_SIM___024root___nba_sequent__TOP__17(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VOTTER_SIM___024root___nba_sequent__TOP__18(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VOTTER_SIM___024root___nba_sequent__TOP__19(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VOTTER_SIM___024root___nba_sequent__TOP__20(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VOTTER_SIM___024root___nba_sequent__TOP__21(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
    }
    if (((vlSelf->__VnbaTriggered.at(2U) | vlSelf->__VnbaTriggered.at(5U)) 
         | vlSelf->__VnbaTriggered.at(6U))) {
        VOTTER_SIM___024root___nba_comb__TOP__1(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VOTTER_SIM___024root___nba_sequent__TOP__22(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(5U)) {
        VOTTER_SIM___024root___nba_sequent__TOP__23(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VOTTER_SIM___024root___nba_sequent__TOP__24(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_20.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(20);
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VOTTER_SIM___024root___nba_sequent__TOP__32(vlSelf);
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_24.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(24);
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VOTTER_SIM___024root___nba_sequent__TOP__39(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_final__nba.signalUpstreamDone(even_cycle);
}
