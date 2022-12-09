// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VOTTER_SIM.h for the primary calling header

#include "verilated.h"

#include "VOTTER_SIM___024root.h"

VL_INLINE_OPT void VOTTER_SIM___024root___act_sequent__TOP__0(VOTTER_SIM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VOTTER_SIM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_SIM___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT__CathMod__DOT__clk_div_counter 
        = (0xfffffU & ((IData)(1U) + vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT__CathMod__DOT__clk_div_counter));
    if ((0x186a0U == vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT__CathMod__DOT__clk_div_counter)) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT__CathMod__DOT__clk_div_counter = 0U;
        vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT__CathMod__DOT__s_clk_500 
            = (1U & (~ (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT__CathMod__DOT__s_clk_500)));
    }
    if ((1U == vlSelf->OTTER_SIM__DOT__Otter__DOT__clkDIv__DOT__div_cnt)) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__sclk = 
            (1U & (~ (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__sclk)));
        vlSelf->OTTER_SIM__DOT__Otter__DOT__clkDIv__DOT__div_cnt = 0U;
    } else {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__clkDIv__DOT__div_cnt 
            = ((IData)(1U) + vlSelf->OTTER_SIM__DOT__Otter__DOT__clkDIv__DOT__div_cnt);
    }
}

VL_INLINE_OPT void VOTTER_SIM___024root___act_sequent__TOP__1(VOTTER_SIM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VOTTER_SIM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_SIM___024root___act_sequent__TOP__1\n"); );
    // Body
    if (vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI__DOT__clr) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI__DOT__cnt = 0U;
        vlSelf->OTTER_SIM__DOT__SPI_SCLK = 1U;
    } else if (vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI__DOT__shift) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI__DOT__cnt 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI__DOT__cnt)));
        if (((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI__DOT__cnt) 
             == (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI__DOT__mid))) {
            vlSelf->OTTER_SIM__DOT__SPI_SCLK = (1U 
                                                & (~ (IData)(vlSelf->OTTER_SIM__DOT__SPI_SCLK)));
            vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI__DOT__cnt = 0U;
        }
    }
}

void VOTTER_SIM___024root___eval_act(VOTTER_SIM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VOTTER_SIM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_SIM___024root___eval_act\n"); );
    // Body
    if (vlSelf->__VactTriggered.at(0U)) {
        VOTTER_SIM___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VOTTER_SIM___024root___act_sequent__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void VOTTER_SIM___024root___nba_sequent__TOP__0(VOTTER_SIM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VOTTER_SIM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_SIM___024root___nba_sequent__TOP__0\n"); );
    // Body
    if ((2U & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT__CathMod__DOT__r_disp_digit))) {
        if ((1U & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT__CathMod__DOT__r_disp_digit))) {
            vlSelf->OTTER_SIM__DOT__ANODES = 7U;
            vlSelf->OTTER_SIM__DOT__CATHODES = ((0x8000U 
                                                 & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__r_SSEG))
                                                 ? 
                                                ((0x4000U 
                                                  & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__r_SSEG))
                                                  ? 
                                                 ((0x2000U 
                                                   & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__r_SSEG))
                                                   ? 
                                                  ((0x1000U 
                                                    & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__r_SSEG))
                                                    ? 0xb8U
                                                    : 0xb0U)
                                                   : 
                                                  ((0x1000U 
                                                    & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__r_SSEG))
                                                    ? 0xc2U
                                                    : 0xb1U))
                                                  : 
                                                 ((0x2000U 
                                                   & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__r_SSEG))
                                                   ? 
                                                  ((0x1000U 
                                                    & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__r_SSEG))
                                                    ? 0xe0U
                                                    : 0x88U)
                                                   : 
                                                  ((0x1000U 
                                                    & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__r_SSEG))
                                                    ? 0x8cU
                                                    : 0x80U)))
                                                 : 
                                                ((0x4000U 
                                                  & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__r_SSEG))
                                                  ? 
                                                 ((0x2000U 
                                                   & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__r_SSEG))
                                                   ? 
                                                  ((0x1000U 
                                                    & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__r_SSEG))
                                                    ? 0x8fU
                                                    : 0xa0U)
                                                   : 
                                                  ((0x1000U 
                                                    & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__r_SSEG))
                                                    ? 0xa4U
                                                    : 0xccU))
                                                  : 
                                                 ((0x2000U 
                                                   & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__r_SSEG))
                                                   ? 
                                                  ((0x1000U 
                                                    & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__r_SSEG))
                                                    ? 0x86U
                                                    : 0x92U)
                                                   : 
                                                  ((0x1000U 
                                                    & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__r_SSEG))
                                                    ? 0xcfU
                                                    : 0x81U))));
        } else {
            vlSelf->OTTER_SIM__DOT__ANODES = 0xbU;
            vlSelf->OTTER_SIM__DOT__CATHODES = ((0x800U 
                                                 & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__r_SSEG))
                                                 ? 
                                                ((0x400U 
                                                  & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__r_SSEG))
                                                  ? 
                                                 ((0x200U 
                                                   & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__r_SSEG))
                                                   ? 
                                                  ((0x100U 
                                                    & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__r_SSEG))
                                                    ? 0xb8U
                                                    : 0xb0U)
                                                   : 
                                                  ((0x100U 
                                                    & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__r_SSEG))
                                                    ? 0xc2U
                                                    : 0xb1U))
                                                  : 
                                                 ((0x200U 
                                                   & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__r_SSEG))
                                                   ? 
                                                  ((0x100U 
                                                    & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__r_SSEG))
                                                    ? 0xe0U
                                                    : 0x88U)
                                                   : 
                                                  ((0x100U 
                                                    & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__r_SSEG))
                                                    ? 0x8cU
                                                    : 0x80U)))
                                                 : 
                                                ((0x400U 
                                                  & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__r_SSEG))
                                                  ? 
                                                 ((0x200U 
                                                   & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__r_SSEG))
                                                   ? 
                                                  ((0x100U 
                                                    & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__r_SSEG))
                                                    ? 0x8fU
                                                    : 0xa0U)
                                                   : 
                                                  ((0x100U 
                                                    & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__r_SSEG))
                                                    ? 0xa4U
                                                    : 0xccU))
                                                  : 
                                                 ((0x200U 
                                                   & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__r_SSEG))
                                                   ? 
                                                  ((0x100U 
                                                    & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__r_SSEG))
                                                    ? 0x86U
                                                    : 0x92U)
                                                   : 
                                                  ((0x100U 
                                                    & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__r_SSEG))
                                                    ? 0xcfU
                                                    : 0x81U))));
        }
    } else if ((1U & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT__CathMod__DOT__r_disp_digit))) {
        vlSelf->OTTER_SIM__DOT__ANODES = 0xdU;
        vlSelf->OTTER_SIM__DOT__CATHODES = ((0x80U 
                                             & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__r_SSEG))
                                             ? ((0x40U 
                                                 & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__r_SSEG))
                                                 ? 
                                                ((0x20U 
                                                  & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__r_SSEG))
                                                  ? 
                                                 ((0x10U 
                                                   & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__r_SSEG))
                                                   ? 0xb8U
                                                   : 0xb0U)
                                                  : 
                                                 ((0x10U 
                                                   & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__r_SSEG))
                                                   ? 0xc2U
                                                   : 0xb1U))
                                                 : 
                                                ((0x20U 
                                                  & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__r_SSEG))
                                                  ? 
                                                 ((0x10U 
                                                   & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__r_SSEG))
                                                   ? 0xe0U
                                                   : 0x88U)
                                                  : 
                                                 ((0x10U 
                                                   & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__r_SSEG))
                                                   ? 0x8cU
                                                   : 0x80U)))
                                             : ((0x40U 
                                                 & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__r_SSEG))
                                                 ? 
                                                ((0x20U 
                                                  & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__r_SSEG))
                                                  ? 
                                                 ((0x10U 
                                                   & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__r_SSEG))
                                                   ? 0x8fU
                                                   : 0xa0U)
                                                  : 
                                                 ((0x10U 
                                                   & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__r_SSEG))
                                                   ? 0xa4U
                                                   : 0xccU))
                                                 : 
                                                ((0x20U 
                                                  & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__r_SSEG))
                                                  ? 
                                                 ((0x10U 
                                                   & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__r_SSEG))
                                                   ? 0x86U
                                                   : 0x92U)
                                                  : 
                                                 ((0x10U 
                                                   & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__r_SSEG))
                                                   ? 0xcfU
                                                   : 0x81U))));
    } else {
        vlSelf->OTTER_SIM__DOT__ANODES = 0xeU;
        vlSelf->OTTER_SIM__DOT__CATHODES = ((8U & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__r_SSEG))
                                             ? ((4U 
                                                 & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__r_SSEG))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__r_SSEG))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__r_SSEG))
                                                   ? 0xb8U
                                                   : 0xb0U)
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__r_SSEG))
                                                   ? 0xc2U
                                                   : 0xb1U))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__r_SSEG))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__r_SSEG))
                                                   ? 0xe0U
                                                   : 0x88U)
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__r_SSEG))
                                                   ? 0x8cU
                                                   : 0x80U)))
                                             : ((4U 
                                                 & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__r_SSEG))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__r_SSEG))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__r_SSEG))
                                                   ? 0x8fU
                                                   : 0xa0U)
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__r_SSEG))
                                                   ? 0xa4U
                                                   : 0xccU))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__r_SSEG))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__r_SSEG))
                                                   ? 0x86U
                                                   : 0x92U)
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__r_SSEG))
                                                   ? 0xcfU
                                                   : 0x81U))));
    }
    vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT__CathMod__DOT__r_disp_digit 
        = (3U & ((IData)(1U) + (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT__CathMod__DOT__r_disp_digit)));
}

VL_INLINE_OPT void VOTTER_SIM___024root___nba_sequent__TOP__1(VOTTER_SIM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VOTTER_SIM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_SIM___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->__Vdly__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__int_state 
        = vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__int_state;
    vlSelf->__Vdly__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mcause 
        = vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mcause;
    vlSelf->__Vdly__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mstatus 
        = vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mstatus;
    vlSelf->__Vdly__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mepc 
        = vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mepc;
    if ((IData)(((0U == (0x18U & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__int_state))) 
                 & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mstatus 
                    >> 3U)))) {
        if (((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__m_ext_int) 
             & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mie 
                >> 0xbU))) {
            vlSelf->__Vdly__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mstatus 
                = ((0xffffff7fU & vlSelf->__Vdly__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mstatus) 
                   | (0x80U & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mstatus 
                               << 4U)));
            vlSelf->__Vdly__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mcause = 0x8000000bU;
            vlSelf->__Vdly__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__int_state = 0xcU;
            vlSelf->__Vdly__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mstatus 
                = (0xfffffff7U & vlSelf->__Vdly__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mstatus);
            vlSelf->__Vdly__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mepc 
                = vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__next_pc;
        } else if (((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__timer_int) 
                    & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mie 
                       >> 7U))) {
            vlSelf->__Vdly__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mstatus 
                = ((0xffffff7fU & vlSelf->__Vdly__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mstatus) 
                   | (0x80U & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mstatus 
                               << 4U)));
            vlSelf->__Vdly__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mcause = 0x80000007U;
            vlSelf->__Vdly__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__int_state = 0xcU;
            vlSelf->__Vdly__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mstatus 
                = (0xfffffff7U & vlSelf->__Vdly__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mstatus);
            vlSelf->__Vdly__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mepc 
                = vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__next_pc;
        }
    } else if ((1U == (3U & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__int_state) 
                             >> 3U)))) {
        if (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__stall) {
            vlSelf->__Vdly__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__int_state 
                = ((0x18U & (IData)(vlSelf->__Vdly__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__int_state)) 
                   | (3U & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__int_state) 
                            >> 1U)));
        }
        if ((0U != (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__pcSource))) {
            vlSelf->__Vdly__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mepc 
                = vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__next_pc;
        }
        if (((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__int_state) 
             & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__stall))) {
            vlSelf->__Vdly__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__int_state 
                = (0x10U | (7U & (IData)(vlSelf->__Vdly__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__int_state)));
        }
    } else if ((IData)(((0x10U == (0x18U & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__int_state))) 
                        & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_mret_EX__DOT__register
                        [0U]))) {
        vlSelf->__Vdly__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mstatus 
            = ((0xfffffff7U & vlSelf->__Vdly__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mstatus) 
               | (8U & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mstatus 
                        >> 4U)));
        vlSelf->__Vdly__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__int_state 
            = (7U & (IData)(vlSelf->__Vdly__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__int_state));
    }
    if (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_csr_en_EX__DOT__register
        [0U]) {
        if ((0x300U != (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                        [0U] >> 0x14U))) {
            if ((0x304U != (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                            [0U] >> 0x14U))) {
                if ((0x305U != (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                                [0U] >> 0x14U))) {
                    if ((0x341U != (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                                    [0U] >> 0x14U))) {
                        if ((0x342U == (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                                        [0U] >> 0x14U))) {
                            if ((1U == (3U & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                                              [0U] 
                                              >> 0xcU)))) {
                                vlSelf->__Vdly__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mcause 
                                    = vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__write_data;
                            } else if ((2U == (3U & 
                                               (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                                                [0U] 
                                                >> 0xcU)))) {
                                vlSelf->__Vdly__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mcause 
                                    = (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mcause 
                                       | vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__write_data);
                            } else if ((3U == (3U & 
                                               (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                                                [0U] 
                                                >> 0xcU)))) {
                                vlSelf->__Vdly__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mcause 
                                    = (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mcause 
                                       & (~ vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__write_data));
                            }
                        }
                    }
                    if ((0x341U == (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                                    [0U] >> 0x14U))) {
                        if ((1U == (3U & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                                          [0U] >> 0xcU)))) {
                            vlSelf->__Vdly__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mepc 
                                = vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__write_data;
                        } else if ((2U == (3U & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                                                 [0U] 
                                                 >> 0xcU)))) {
                            vlSelf->__Vdly__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mepc 
                                = (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mepc 
                                   | vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__write_data);
                        } else if ((3U == (3U & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                                                 [0U] 
                                                 >> 0xcU)))) {
                            vlSelf->__Vdly__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mepc 
                                = (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mepc 
                                   & (~ vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__write_data));
                        }
                    }
                }
            }
        }
        if ((0x300U == (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                        [0U] >> 0x14U))) {
            if ((1U == (3U & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                              [0U] >> 0xcU)))) {
                vlSelf->__Vdly__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mstatus 
                    = vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__write_data;
            } else if ((2U == (3U & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                                     [0U] >> 0xcU)))) {
                vlSelf->__Vdly__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mstatus 
                    = (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mstatus 
                       | vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__write_data);
            } else if ((3U == (3U & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                                     [0U] >> 0xcU)))) {
                vlSelf->__Vdly__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mstatus 
                    = (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mstatus 
                       & (~ vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__write_data));
            }
        }
    }
}

VL_INLINE_OPT void VOTTER_SIM___024root___nba_sequent__TOP__2(VOTTER_SIM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VOTTER_SIM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_SIM___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v0 = 0U;
    vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v1 = 0U;
    vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v2 = 0U;
    vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v3 = 0U;
    vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v4 = 0U;
    vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v5 = 0U;
    vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v6 = 0U;
    vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v7 = 0U;
    vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v8 = 0U;
    vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v9 = 0U;
    vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v10 = 0U;
    vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v11 = 0U;
    if (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memWrite2) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__j = 0U;
        if ((1U & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__weA))) {
            if ((0U == (3U & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_MEM__DOT__register
                              [0U] >> 0xcU)))) {
                vlSelf->__Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v0 
                    = (0xffU & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memDIn2_MEM__DOT__register
                       [0U]);
                vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v0 = 1U;
                vlSelf->__Vdlyvlsb__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v0 = 0U;
                vlSelf->__Vdlyvdim0__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v0 
                    = (0x3ffffU & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_out_MEM__DOT__register
                                   [0U] >> 2U));
            } else if ((1U == (3U & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_MEM__DOT__register
                                     [0U] >> 0xcU)))) {
                vlSelf->__Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v1 
                    = (0xffU & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memDIn2_MEM__DOT__register
                                [0U] >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__j))));
                vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v1 = 1U;
                vlSelf->__Vdlyvlsb__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v1 = 0U;
                vlSelf->__Vdlyvdim0__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v1 
                    = (0x3ffffU & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_out_MEM__DOT__register
                                   [0U] >> 2U));
                vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__j 
                    = ((IData)(1U) + vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__j);
            } else {
                vlSelf->__Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v2 
                    = (0xffU & ((2U == (3U & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_MEM__DOT__register
                                              [0U] 
                                              >> 0xcU)))
                                 ? vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memDIn2_MEM__DOT__register
                                [0U] : vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memDIn2_MEM__DOT__register
                                [0U]));
                vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v2 = 1U;
                vlSelf->__Vdlyvlsb__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v2 = 0U;
                vlSelf->__Vdlyvdim0__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v2 
                    = (0x3ffffU & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_out_MEM__DOT__register
                                   [0U] >> 2U));
            }
        }
        if ((2U & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__weA))) {
            if ((0U == (3U & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_MEM__DOT__register
                              [0U] >> 0xcU)))) {
                vlSelf->__Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v3 
                    = (0xffU & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memDIn2_MEM__DOT__register
                       [0U]);
                vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v3 = 1U;
                vlSelf->__Vdlyvlsb__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v3 = 8U;
                vlSelf->__Vdlyvdim0__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v3 
                    = (0x3ffffU & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_out_MEM__DOT__register
                                   [0U] >> 2U));
            } else if ((1U == (3U & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_MEM__DOT__register
                                     [0U] >> 0xcU)))) {
                vlSelf->__Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v4 
                    = (0xffU & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memDIn2_MEM__DOT__register
                                [0U] >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__j))));
                vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v4 = 1U;
                vlSelf->__Vdlyvlsb__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v4 = 8U;
                vlSelf->__Vdlyvdim0__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v4 
                    = (0x3ffffU & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_out_MEM__DOT__register
                                   [0U] >> 2U));
                vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__j 
                    = ((IData)(1U) + vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__j);
            } else {
                vlSelf->__Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v5 
                    = (0xffU & ((2U == (3U & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_MEM__DOT__register
                                              [0U] 
                                              >> 0xcU)))
                                 ? (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memDIn2_MEM__DOT__register
                                    [0U] >> 8U) : (
                                                   vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memDIn2_MEM__DOT__register
                                                   [0U] 
                                                   >> 8U)));
                vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v5 = 1U;
                vlSelf->__Vdlyvlsb__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v5 = 8U;
                vlSelf->__Vdlyvdim0__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v5 
                    = (0x3ffffU & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_out_MEM__DOT__register
                                   [0U] >> 2U));
            }
        }
        if ((4U & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__weA))) {
            if ((0U == (3U & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_MEM__DOT__register
                              [0U] >> 0xcU)))) {
                vlSelf->__Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v6 
                    = (0xffU & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memDIn2_MEM__DOT__register
                       [0U]);
                vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v6 = 1U;
                vlSelf->__Vdlyvlsb__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v6 = 0x10U;
                vlSelf->__Vdlyvdim0__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v6 
                    = (0x3ffffU & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_out_MEM__DOT__register
                                   [0U] >> 2U));
            } else if ((1U == (3U & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_MEM__DOT__register
                                     [0U] >> 0xcU)))) {
                vlSelf->__Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v7 
                    = (0xffU & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memDIn2_MEM__DOT__register
                                [0U] >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__j))));
                vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v7 = 1U;
                vlSelf->__Vdlyvlsb__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v7 = 0x10U;
                vlSelf->__Vdlyvdim0__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v7 
                    = (0x3ffffU & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_out_MEM__DOT__register
                                   [0U] >> 2U));
                vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__j 
                    = ((IData)(1U) + vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__j);
            } else {
                vlSelf->__Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v8 
                    = (0xffU & ((2U == (3U & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_MEM__DOT__register
                                              [0U] 
                                              >> 0xcU)))
                                 ? (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memDIn2_MEM__DOT__register
                                    [0U] >> 0x10U) : 
                                (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memDIn2_MEM__DOT__register
                                 [0U] >> 0x10U)));
                vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v8 = 1U;
                vlSelf->__Vdlyvlsb__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v8 = 0x10U;
                vlSelf->__Vdlyvdim0__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v8 
                    = (0x3ffffU & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_out_MEM__DOT__register
                                   [0U] >> 2U));
            }
        }
        if ((8U & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__weA))) {
            if ((0U == (3U & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_MEM__DOT__register
                              [0U] >> 0xcU)))) {
                vlSelf->__Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v9 
                    = (0xffU & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memDIn2_MEM__DOT__register
                       [0U]);
                vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v9 = 1U;
                vlSelf->__Vdlyvlsb__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v9 = 0x18U;
                vlSelf->__Vdlyvdim0__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v9 
                    = (0x3ffffU & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_out_MEM__DOT__register
                                   [0U] >> 2U));
            } else if ((1U == (3U & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_MEM__DOT__register
                                     [0U] >> 0xcU)))) {
                vlSelf->__Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v10 
                    = (0xffU & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memDIn2_MEM__DOT__register
                                [0U] >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__j))));
                vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v10 = 1U;
                vlSelf->__Vdlyvlsb__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v10 = 0x18U;
                vlSelf->__Vdlyvdim0__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v10 
                    = (0x3ffffU & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_out_MEM__DOT__register
                                   [0U] >> 2U));
                vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__j 
                    = ((IData)(1U) + vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__j);
            } else {
                vlSelf->__Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v11 
                    = (0xffU & ((2U == (3U & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_MEM__DOT__register
                                              [0U] 
                                              >> 0xcU)))
                                 ? (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memDIn2_MEM__DOT__register
                                    [0U] >> 0x18U) : 
                                (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memDIn2_MEM__DOT__register
                                 [0U] >> 0x18U)));
                vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v11 = 1U;
                vlSelf->__Vdlyvlsb__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v11 = 0x18U;
                vlSelf->__Vdlyvdim0__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v11 
                    = (0x3ffffU & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_out_MEM__DOT__register
                                   [0U] >> 2U));
            }
        }
    }
}

VL_INLINE_OPT void VOTTER_SIM___024root___nba_sequent__TOP__3(VOTTER_SIM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VOTTER_SIM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_SIM___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->OTTER_SIM__DOT__Otter__DOT__DB__DOT__PS 
        = vlSelf->OTTER_SIM__DOT__Otter__DOT__DB__DOT__NS;
    if (vlSelf->OTTER_SIM__DOT__Otter__DOT__DB__DOT__s_count_rst) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__DB__DOT__s_db_count = 0U;
    } else if (vlSelf->OTTER_SIM__DOT__Otter__DOT__DB__DOT__s_count_inc) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__DB__DOT__s_db_count 
            = (0xffU & ((IData)(1U) + (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__DB__DOT__s_db_count)));
    }
}

VL_INLINE_OPT void VOTTER_SIM___024root___nba_sequent__TOP__4(VOTTER_SIM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VOTTER_SIM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_SIM___024root___nba_sequent__TOP__4\n"); );
    // Body
    if (vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI__DOT__clr) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI__DOT__rreg = 0xffU;
        vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI__DOT__nbit = 0U;
    } else {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI__DOT__rreg 
            = ((0xfeU & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI__DOT__rreg) 
                         << 1U)) | (IData)(vlSelf->OTTER_SIM__DOT__SPI_SDI));
        vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI__DOT__nbit 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI__DOT__nbit)));
    }
}

VL_INLINE_OPT void VOTTER_SIM___024root___nba_sequent__TOP__6(VOTTER_SIM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VOTTER_SIM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_SIM___024root___nba_sequent__TOP__6\n"); );
    // Body
    vlSelf->OTTER_SIM__DOT__Otter__DOT__DB__DOT__s_count_rst = 0U;
    vlSelf->OTTER_SIM__DOT__Otter__DOT__DB__DOT__s_count_inc = 0U;
    if ((0U != vlSelf->OTTER_SIM__DOT__Otter__DOT__DB__DOT__PS)) {
        if ((1U != vlSelf->OTTER_SIM__DOT__Otter__DOT__DB__DOT__PS)) {
            if ((2U != vlSelf->OTTER_SIM__DOT__Otter__DOT__DB__DOT__PS)) {
                if ((3U == vlSelf->OTTER_SIM__DOT__Otter__DOT__DB__DOT__PS)) {
                    vlSelf->OTTER_SIM__DOT__Otter__DOT__DB__DOT__s_count_inc = 1U;
                } else if ((4U == vlSelf->OTTER_SIM__DOT__Otter__DOT__DB__DOT__PS)) {
                    if ((0x33U != (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__DB__DOT__s_db_count))) {
                        vlSelf->OTTER_SIM__DOT__Otter__DOT__DB__DOT__s_count_inc = 1U;
                    }
                } else if ((5U == vlSelf->OTTER_SIM__DOT__Otter__DOT__DB__DOT__PS)) {
                    if ((3U != (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__DB__DOT__s_db_count))) {
                        vlSelf->OTTER_SIM__DOT__Otter__DOT__DB__DOT__s_count_inc = 1U;
                    }
                } else {
                    vlSelf->OTTER_SIM__DOT__Otter__DOT__DB__DOT__s_count_inc = 0U;
                }
            }
        }
    }
    vlSelf->OTTER_SIM__DOT__Otter__DOT__btn_int = 0U;
    if ((0U == vlSelf->OTTER_SIM__DOT__Otter__DOT__DB__DOT__PS)) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__DB__DOT__s_count_rst = 1U;
        vlSelf->OTTER_SIM__DOT__Otter__DOT__btn_int = 0U;
    } else {
        if ((1U == vlSelf->OTTER_SIM__DOT__Otter__DOT__DB__DOT__PS)) {
            vlSelf->OTTER_SIM__DOT__Otter__DOT__DB__DOT__s_count_rst = 1U;
        } else if ((2U == vlSelf->OTTER_SIM__DOT__Otter__DOT__DB__DOT__PS)) {
            vlSelf->OTTER_SIM__DOT__Otter__DOT__DB__DOT__s_count_rst = 1U;
        } else if ((3U != vlSelf->OTTER_SIM__DOT__Otter__DOT__DB__DOT__PS)) {
            if ((4U == vlSelf->OTTER_SIM__DOT__Otter__DOT__DB__DOT__PS)) {
                if ((0x33U == (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__DB__DOT__s_db_count))) {
                    vlSelf->OTTER_SIM__DOT__Otter__DOT__DB__DOT__s_count_rst = 1U;
                }
            } else if ((5U == vlSelf->OTTER_SIM__DOT__Otter__DOT__DB__DOT__PS)) {
                if ((3U == (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__DB__DOT__s_db_count))) {
                    vlSelf->OTTER_SIM__DOT__Otter__DOT__DB__DOT__s_count_rst = 1U;
                }
            } else {
                vlSelf->OTTER_SIM__DOT__Otter__DOT__DB__DOT__s_count_rst = 1U;
            }
        }
        if ((1U != vlSelf->OTTER_SIM__DOT__Otter__DOT__DB__DOT__PS)) {
            if ((2U != vlSelf->OTTER_SIM__DOT__Otter__DOT__DB__DOT__PS)) {
                if ((3U != vlSelf->OTTER_SIM__DOT__Otter__DOT__DB__DOT__PS)) {
                    if ((4U != vlSelf->OTTER_SIM__DOT__Otter__DOT__DB__DOT__PS)) {
                        vlSelf->OTTER_SIM__DOT__Otter__DOT__btn_int 
                            = ((5U == vlSelf->OTTER_SIM__DOT__Otter__DOT__DB__DOT__PS) 
                               & (3U != (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__DB__DOT__s_db_count)));
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void VOTTER_SIM___024root___nba_sequent__TOP__7(VOTTER_SIM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VOTTER_SIM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_SIM___024root___nba_sequent__TOP__7\n"); );
    // Body
    vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI__DOT__cur 
        = ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT____Vcellinp__SPI__rstb)
            ? (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI__DOT__nxt)
            : 3U);
}

VL_INLINE_OPT void VOTTER_SIM___024root___nba_comb__TOP__0(VOTTER_SIM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VOTTER_SIM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_SIM___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI_RDATA = 0U;
    if ((0U != (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI__DOT__cur))) {
        if ((2U == (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI__DOT__cur))) {
            if ((8U == (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI__DOT__nbit))) {
                vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI_RDATA 
                    = vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI__DOT__rreg;
            }
        }
    }
}

VL_INLINE_OPT void VOTTER_SIM___024root___nba_sequent__TOP__9(VOTTER_SIM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VOTTER_SIM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_SIM___024root___nba_sequent__TOP__9\n"); );
    // Init
    IData/*31:0*/ __Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_rs2_EX__DOT__register__v0;
    CData/*0:0*/ __Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_rs2_EX__DOT__register__v0;
    CData/*0:0*/ __Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_regWrite_EX__DOT__register__v0;
    CData/*0:0*/ __Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_regWrite_EX__DOT__register__v0;
    CData/*0:0*/ __Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_srcA_EX__DOT__register__v0;
    CData/*0:0*/ __Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_srcA_EX__DOT__register__v0;
    IData/*31:0*/ __Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_out_WB__DOT__register__v0;
    IData/*31:0*/ __Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_WB__DOT__register__v0;
    // Body
    vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memWrite_EX__DOT__register__v0 = 0U;
    vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memRead2_EX__DOT__register__v0 = 0U;
    __Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_regWrite_EX__DOT__register__v0 = 0U;
    vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_pc_EX__DOT__register__v0 = 0U;
    __Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_rs2_EX__DOT__register__v0 = 0U;
    __Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_srcA_EX__DOT__register__v0 = 0U;
    vlSelf->__Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memRead2_MEM__DOT__register__v1 
        = vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__memRead2;
    vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memRead2_MEM__DOT__register__v1 = 1U;
    vlSelf->__Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memRead2_MEM__DOT__register__v0 
        = vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memRead2_MEM__DOT__register
        [1U];
    vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memRead2_MEM__DOT__register__v0 = 1U;
    __Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_WB__DOT__register__v0 
        = vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_MEM__DOT__register
        [0U];
    vlSelf->__Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_regWrite_WB__DOT__register__v1 
        = vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_regWrite_EX__DOT__register
        [0U];
    vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_regWrite_WB__DOT__register__v1 = 1U;
    __Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_out_WB__DOT__register__v0 
        = vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_out_MEM__DOT__register
        [0U];
    if (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__stall) {
        vlSelf->__Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memWrite_EX__DOT__register__v0 
            = vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__memWrite;
        vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memWrite_EX__DOT__register__v0 = 1U;
        vlSelf->__Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memRead2_EX__DOT__register__v0 
            = vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__memRead2;
        vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memRead2_EX__DOT__register__v0 = 1U;
        __Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_regWrite_EX__DOT__register__v0 
            = vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__regWrite;
        __Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_regWrite_EX__DOT__register__v0 = 1U;
        vlSelf->__Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_pc_EX__DOT__register__v0 
            = vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_pc_DE__DOT__register
            [0U];
        vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_pc_EX__DOT__register__v0 = 1U;
        __Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_rs2_EX__DOT__register__v0 
            = vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__rs2;
        __Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_rs2_EX__DOT__register__v0 = 1U;
        __Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_srcA_EX__DOT__register__v0 
            = vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__alu_srcA;
        __Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_srcA_EX__DOT__register__v0 = 1U;
    }
    vlSelf->__Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_rs2_MEM__DOT__register__v0 
        = vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__rs2_EX_fw;
    vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_rs2_MEM__DOT__register__v0 = 1U;
    vlSelf->__Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memDIn2_MEM__DOT__register__v0 
        = vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__rs2_EX_fw;
    vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memDIn2_MEM__DOT__register__v0 = 1U;
    if (vlSelf->OTTER_SIM__DOT__Otter__DOT__IOBUS_wr) {
        if ((0x11080000U == vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_out_MEM__DOT__register
             [0U])) {
            vlSelf->OTTER_SIM__DOT__LEDS = (0xffffU 
                                            & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_rs2_MEM__DOT__register
                                            [0U]);
        }
        if ((0x11080000U != vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_out_MEM__DOT__register
             [0U])) {
            if ((0x110c0000U != vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_out_MEM__DOT__register
                 [0U])) {
                if ((0x110e0000U != vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_out_MEM__DOT__register
                     [0U])) {
                    if ((0x11100000U == vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_out_MEM__DOT__register
                         [0U])) {
                        vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI_START 
                            = (1U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_rs2_MEM__DOT__register
                               [0U]);
                    }
                }
            }
        }
    }
    vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__HzHr__DOT__fw_2 
        = vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__HzHr__DOT__fw_1;
    vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__squash 
        = vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__HzHr__DOT__squash_next;
    vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_WB__DOT__register[0U] 
        = __Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_WB__DOT__register__v0;
    vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_out_WB__DOT__register[0U] 
        = __Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_out_WB__DOT__register__v0;
    if (__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_regWrite_EX__DOT__register__v0) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_regWrite_EX__DOT__register[0U] 
            = __Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_regWrite_EX__DOT__register__v0;
    }
    if (__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_rs2_EX__DOT__register__v0) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_rs2_EX__DOT__register[0U] 
            = __Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_rs2_EX__DOT__register__v0;
    }
    if (__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_srcA_EX__DOT__register__v0) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_srcA_EX__DOT__register[0U] 
            = __Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_srcA_EX__DOT__register__v0;
    }
    vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__HzHr__DOT__fw_1 
        = vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__HzHr__DOT__fw_1_next;
}

VL_INLINE_OPT void VOTTER_SIM___024root___nba_sequent__TOP__10(VOTTER_SIM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VOTTER_SIM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_SIM___024root___nba_sequent__TOP__10\n"); );
    // Body
    vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_csr_out_WB__DOT__register__v1 = 0U;
}

VL_INLINE_OPT void VOTTER_SIM___024root___nba_sequent__TOP__11(VOTTER_SIM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VOTTER_SIM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_SIM___024root___nba_sequent__TOP__11\n"); );
    // Body
    if (vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI__DOT__clr) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI__DOT__treg = 0xffU;
        vlSelf->OTTER_SIM__DOT__SPI_SDO = 1U;
    } else if ((0U == (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI__DOT__nbit))) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI__DOT__treg 
            = vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI_TDATA;
        vlSelf->OTTER_SIM__DOT__SPI_SDO = (1U & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI__DOT__treg) 
                                                 >> 7U));
    } else {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI__DOT__treg 
            = (1U | (0xfeU & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI__DOT__treg) 
                              << 1U)));
        vlSelf->OTTER_SIM__DOT__SPI_SDO = (1U & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI__DOT__treg) 
                                                 >> 7U));
    }
}

VL_INLINE_OPT void VOTTER_SIM___024root___nba_sequent__TOP__12(VOTTER_SIM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VOTTER_SIM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_SIM___024root___nba_sequent__TOP__12\n"); );
    // Body
    vlSelf->OTTER_SIM__DOT__Otter__DOT__MTIMER__DOT__mtime 
        = (1ULL + vlSelf->OTTER_SIM__DOT__Otter__DOT__MTIMER__DOT__mtime);
    vlSelf->__Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_csr_out_WB__DOT__register__v1 
        = vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__csr_out_EX;
    vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_csr_out_WB__DOT__register__v1 = 1U;
    if ((1U & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__mtimecmp_set))) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__MTIMER__DOT__mtimecmp 
            = ((0xffffffff00000000ULL & vlSelf->OTTER_SIM__DOT__Otter__DOT__MTIMER__DOT__mtimecmp) 
               | (IData)((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_rs2_MEM__DOT__register
                                 [0U])));
    }
    if ((2U & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__mtimecmp_set))) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__MTIMER__DOT__mtimecmp 
            = ((0xffffffffULL & vlSelf->OTTER_SIM__DOT__Otter__DOT__MTIMER__DOT__mtimecmp) 
               | ((QData)((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_rs2_MEM__DOT__register
                                  [0U])) << 0x20U));
    }
    if (vlSelf->OTTER_SIM__DOT__Otter__DOT__IOBUS_wr) {
        if ((0x11080000U != vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_out_MEM__DOT__register
             [0U])) {
            if ((0x110c0000U != vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_out_MEM__DOT__register
                 [0U])) {
                if ((0x110e0000U != vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_out_MEM__DOT__register
                     [0U])) {
                    if ((0x11100000U != vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_out_MEM__DOT__register
                         [0U])) {
                        if ((0x11110000U == vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_out_MEM__DOT__register
                             [0U])) {
                            vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI_CS_MEM 
                                = (3U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_rs2_MEM__DOT__register
                                   [0U]);
                        }
                        if ((0x11110000U != vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_out_MEM__DOT__register
                             [0U])) {
                            if ((0x11120000U == vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_out_MEM__DOT__register
                                 [0U])) {
                                vlSelf->OTTER_SIM__DOT__TFT_DC 
                                    = (1U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_rs2_MEM__DOT__register
                                       [0U]);
                            }
                        }
                    }
                }
                if ((0x110e0000U == vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_out_MEM__DOT__register
                     [0U])) {
                    vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI_TDATA 
                        = (0xffU & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_rs2_MEM__DOT__register
                           [0U]);
                }
            }
        }
    }
}

VL_INLINE_OPT void VOTTER_SIM___024root___nba_sequent__TOP__13(VOTTER_SIM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VOTTER_SIM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_SIM___024root___nba_sequent__TOP__13\n"); );
    // Body
    if (vlSelf->OTTER_SIM__DOT__Otter__DOT__IOBUS_wr) {
        if ((0x11080000U != vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_out_MEM__DOT__register
             [0U])) {
            if ((0x110c0000U == vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_out_MEM__DOT__register
                 [0U])) {
                vlSelf->OTTER_SIM__DOT__Otter__DOT__r_SSEG 
                    = (0xffffU & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_rs2_MEM__DOT__register
                       [0U]);
            }
        }
    }
}

VL_INLINE_OPT void VOTTER_SIM___024root___nba_sequent__TOP__14(VOTTER_SIM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VOTTER_SIM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_SIM___024root___nba_sequent__TOP__14\n"); );
    // Init
    IData/*31:0*/ __Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_A_EX__DOT__register__v0;
    CData/*0:0*/ __Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_A_EX__DOT__register__v0;
    IData/*31:0*/ __Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_B_EX__DOT__register__v0;
    CData/*0:0*/ __Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_B_EX__DOT__register__v0;
    // Body
    __Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_B_EX__DOT__register__v0 = 0U;
    __Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_A_EX__DOT__register__v0 = 0U;
    vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register__v0 = 0U;
    if (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__stall) {
        __Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_B_EX__DOT__register__v0 
            = ((2U & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__alu_srcB))
                ? ((1U & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__alu_srcB))
                    ? vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_pc_DE__DOT__register
                   [0U] : (((- (IData)((vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR 
                                        >> 0x1fU))) 
                            << 0xcU) | ((0xfe0U & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR 
                                                   >> 0x14U)) 
                                        | (0x1fU & 
                                           (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR 
                                            >> 7U)))))
                : ((1U & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__alu_srcB))
                    ? vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IType
                    : vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__rs2));
        __Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_B_EX__DOT__register__v0 = 1U;
        __Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_A_EX__DOT__register__v0 
            = ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__alu_srcA)
                ? (0xfffff000U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR)
                : vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__rs1);
        __Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_A_EX__DOT__register__v0 = 1U;
        vlSelf->__Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register__v0 
            = vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR;
        vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register__v0 = 1U;
        vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR 
            = vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory
            [(0x3ffffU & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__pc 
                          >> 2U))];
    }
    if (__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_B_EX__DOT__register__v0) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_B_EX__DOT__register[0U] 
            = __Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_B_EX__DOT__register__v0;
    }
    if (__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_A_EX__DOT__register__v0) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_A_EX__DOT__register[0U] 
            = __Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_A_EX__DOT__register__v0;
    }
    if (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memRead2_MEM__DOT__register
        [0U]) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memOut2 
            = vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory
            [(0x3ffffU & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_out_MEM__DOT__register
                          [0U] >> 2U))];
    }
}

VL_INLINE_OPT void VOTTER_SIM___024root___nba_sequent__TOP__16(VOTTER_SIM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VOTTER_SIM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_SIM___024root___nba_sequent__TOP__16\n"); );
    // Body
    vlSelf->__Vdly__OTTER_SIM__DOT__Otter__DOT__SPIClockGen__DOT__count 
        = vlSelf->OTTER_SIM__DOT__Otter__DOT__SPIClockGen__DOT__count;
}

VL_INLINE_OPT void VOTTER_SIM___024root___nba_sequent__TOP__17(VOTTER_SIM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VOTTER_SIM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_SIM___024root___nba_sequent__TOP__17\n"); );
    // Body
    vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_csr_out_WB__DOT__register__v0 = 0U;
}

VL_INLINE_OPT void VOTTER_SIM___024root___nba_sequent__TOP__18(VOTTER_SIM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VOTTER_SIM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_SIM___024root___nba_sequent__TOP__18\n"); );
    // Body
    if ((5U == vlSelf->OTTER_SIM__DOT__Otter__DOT__SPIClockGen__DOT__count)) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__spi_clk 
            = (1U & (~ (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__spi_clk)));
        vlSelf->__Vdly__OTTER_SIM__DOT__Otter__DOT__SPIClockGen__DOT__count = 0U;
    } else {
        vlSelf->__Vdly__OTTER_SIM__DOT__Otter__DOT__SPIClockGen__DOT__count 
            = ((IData)(1U) + vlSelf->OTTER_SIM__DOT__Otter__DOT__SPIClockGen__DOT__count);
    }
}

VL_INLINE_OPT void VOTTER_SIM___024root___nba_sequent__TOP__19(VOTTER_SIM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VOTTER_SIM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_SIM___024root___nba_sequent__TOP__19\n"); );
    // Body
    vlSelf->__Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_csr_out_WB__DOT__register__v0 
        = vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_csr_out_WB__DOT__register
        [1U];
    vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_csr_out_WB__DOT__register__v0 = 1U;
    vlSelf->OTTER_SIM__DOT__Otter__DOT__DB__DOT__NS 
        = ((0U == vlSelf->OTTER_SIM__DOT__Otter__DOT__DB__DOT__PS)
            ? 1U : ((1U == vlSelf->OTTER_SIM__DOT__Otter__DOT__DB__DOT__PS)
                     ? 1U : ((2U == vlSelf->OTTER_SIM__DOT__Otter__DOT__DB__DOT__PS)
                              ? 1U : ((3U == vlSelf->OTTER_SIM__DOT__Otter__DOT__DB__DOT__PS)
                                       ? 4U : ((4U 
                                                == vlSelf->OTTER_SIM__DOT__Otter__DOT__DB__DOT__PS)
                                                ? (
                                                   (0x33U 
                                                    == (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__DB__DOT__s_db_count))
                                                    ? 5U
                                                    : 4U)
                                                : (
                                                   (5U 
                                                    == vlSelf->OTTER_SIM__DOT__Otter__DOT__DB__DOT__PS)
                                                    ? 
                                                   ((3U 
                                                     == (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__DB__DOT__s_db_count))
                                                     ? 0U
                                                     : 5U)
                                                    : 0U))))));
}

VL_INLINE_OPT void VOTTER_SIM___024root___nba_sequent__TOP__20(VOTTER_SIM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VOTTER_SIM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_SIM___024root___nba_sequent__TOP__20\n"); );
    // Body
    vlSelf->OTTER_SIM__DOT__Otter__DOT__SPIClockGen__DOT__count 
        = vlSelf->__Vdly__OTTER_SIM__DOT__Otter__DOT__SPIClockGen__DOT__count;
}

VL_INLINE_OPT void VOTTER_SIM___024root___nba_sequent__TOP__21(VOTTER_SIM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VOTTER_SIM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_SIM___024root___nba_sequent__TOP__21\n"); );
    // Body
    if (vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_csr_out_WB__DOT__register__v0) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_csr_out_WB__DOT__register[0U] 
            = vlSelf->__Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_csr_out_WB__DOT__register__v0;
    }
    if (vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_csr_out_WB__DOT__register__v1) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_csr_out_WB__DOT__register[1U] 
            = vlSelf->__Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_csr_out_WB__DOT__register__v1;
    }
}

VL_INLINE_OPT void VOTTER_SIM___024root___nba_comb__TOP__1(VOTTER_SIM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VOTTER_SIM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_SIM___024root___nba_comb__TOP__1\n"); );
    // Body
    vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI__DOT__shift = 0U;
    if ((0U == (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI__DOT__cur))) {
        if (vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI_START) {
            vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI__DOT__shift = 1U;
        }
    } else if ((2U == (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI__DOT__cur))) {
        if ((8U != (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI__DOT__nbit))) {
            vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI__DOT__shift = 1U;
        }
    } else if ((3U == (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI__DOT__cur))) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI__DOT__shift = 0U;
    }
}

VL_INLINE_OPT void VOTTER_SIM___024root___nba_sequent__TOP__22(VOTTER_SIM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VOTTER_SIM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_SIM___024root___nba_sequent__TOP__22\n"); );
    // Body
    if (vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_rs2_MEM__DOT__register__v0) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_rs2_MEM__DOT__register[0U] 
            = vlSelf->__Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_rs2_MEM__DOT__register__v0;
    }
}

VL_INLINE_OPT void VOTTER_SIM___024root___nba_sequent__TOP__23(VOTTER_SIM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VOTTER_SIM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_SIM___024root___nba_sequent__TOP__23\n"); );
    // Body
    vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI_CS = 1U;
    vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI__DOT__clr = 0U;
    if ((0U != (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI__DOT__cur))) {
        if ((2U == (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI__DOT__cur))) {
            vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI_CS = 0U;
        } else if ((3U == (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI__DOT__cur))) {
            vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI_CS = 1U;
        }
        if ((2U != (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI__DOT__cur))) {
            if ((3U == (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI__DOT__cur))) {
                vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI__DOT__clr = 1U;
            }
        }
    }
}

VL_INLINE_OPT void VOTTER_SIM___024root___nba_sequent__TOP__24(VOTTER_SIM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VOTTER_SIM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_SIM___024root___nba_sequent__TOP__24\n"); );
    // Body
    if (vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v0) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory[vlSelf->__Vdlyvdim0__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v0] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v0))) 
                & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory
                [vlSelf->__Vdlyvdim0__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v0]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v0) 
                                   << (IData)(vlSelf->__Vdlyvlsb__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v0))));
    }
    if (vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v1) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory[vlSelf->__Vdlyvdim0__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v1] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v1))) 
                & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory
                [vlSelf->__Vdlyvdim0__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v1]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v1) 
                                   << (IData)(vlSelf->__Vdlyvlsb__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v1))));
    }
    if (vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v2) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory[vlSelf->__Vdlyvdim0__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v2] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v2))) 
                & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory
                [vlSelf->__Vdlyvdim0__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v2]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v2) 
                                   << (IData)(vlSelf->__Vdlyvlsb__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v2))));
    }
    if (vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v3) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory[vlSelf->__Vdlyvdim0__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v3] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v3))) 
                & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory
                [vlSelf->__Vdlyvdim0__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v3]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v3) 
                                   << (IData)(vlSelf->__Vdlyvlsb__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v3))));
    }
    if (vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v4) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory[vlSelf->__Vdlyvdim0__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v4] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v4))) 
                & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory
                [vlSelf->__Vdlyvdim0__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v4]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v4) 
                                   << (IData)(vlSelf->__Vdlyvlsb__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v4))));
    }
    if (vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v5) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory[vlSelf->__Vdlyvdim0__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v5] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v5))) 
                & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory
                [vlSelf->__Vdlyvdim0__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v5]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v5) 
                                   << (IData)(vlSelf->__Vdlyvlsb__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v5))));
    }
    if (vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v6) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory[vlSelf->__Vdlyvdim0__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v6] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v6))) 
                & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory
                [vlSelf->__Vdlyvdim0__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v6]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v6) 
                                   << (IData)(vlSelf->__Vdlyvlsb__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v6))));
    }
    if (vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v7) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory[vlSelf->__Vdlyvdim0__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v7] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v7))) 
                & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory
                [vlSelf->__Vdlyvdim0__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v7]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v7) 
                                   << (IData)(vlSelf->__Vdlyvlsb__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v7))));
    }
    if (vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v8) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory[vlSelf->__Vdlyvdim0__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v8] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v8))) 
                & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory
                [vlSelf->__Vdlyvdim0__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v8]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v8) 
                                   << (IData)(vlSelf->__Vdlyvlsb__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v8))));
    }
    if (vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v9) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory[vlSelf->__Vdlyvdim0__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v9] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v9))) 
                & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory
                [vlSelf->__Vdlyvdim0__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v9]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v9) 
                                   << (IData)(vlSelf->__Vdlyvlsb__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v9))));
    }
    if (vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v10) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory[vlSelf->__Vdlyvdim0__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v10] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v10))) 
                & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory
                [vlSelf->__Vdlyvdim0__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v10]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v10) 
                                   << (IData)(vlSelf->__Vdlyvlsb__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v10))));
    }
    if (vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v11) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory[vlSelf->__Vdlyvdim0__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v11] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v11))) 
                & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory
                [vlSelf->__Vdlyvdim0__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v11]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v11) 
                                   << (IData)(vlSelf->__Vdlyvlsb__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v11))));
    }
}

VL_INLINE_OPT void VOTTER_SIM___024root___nba_sequent__TOP__25(VOTTER_SIM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VOTTER_SIM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_SIM___024root___nba_sequent__TOP__25\n"); );
    // Body
    vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS = 0U;
    vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS = 0U;
    vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS = 0U;
    vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES 
        = (1U & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__r_SSEG) 
                 >> 0xfU));
    vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS) 
                                     >> 3U)));
    vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES))) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES)));
    }
    vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS 
        = ((0xeU & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES) 
                                     >> 3U)));
    vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES 
        = ((0xeU & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__r_SSEG) 
                                     >> 0xeU)));
    if ((5U <= (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS))) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS)));
    }
    if ((5U <= (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS))) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS)));
    }
    vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS))) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS)));
    }
    vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES))) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES)));
    }
    vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS 
        = ((0xeU & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES) 
                                     >> 3U)));
    vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES 
        = ((0xeU & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__r_SSEG) 
                                     >> 0xdU)));
    if ((5U <= (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS))) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS)));
    }
    if ((5U <= (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS))) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS)));
    }
    vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS))) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS)));
    }
    vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES))) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES)));
    }
    vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS 
        = ((0xeU & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES) 
                                     >> 3U)));
    vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES 
        = ((0xeU & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__r_SSEG) 
                                     >> 0xcU)));
    if ((5U <= (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS))) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS)));
    }
    if ((5U <= (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS))) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS)));
    }
    vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS))) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS)));
    }
    vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES))) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES)));
    }
    vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS 
        = ((0xeU & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES) 
                                     >> 3U)));
    vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES 
        = ((0xeU & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__r_SSEG) 
                                     >> 0xbU)));
    if ((5U <= (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS))) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS)));
    }
    if ((5U <= (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS))) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS)));
    }
    vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS))) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS)));
    }
    vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES))) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES)));
    }
    vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS 
        = ((0xeU & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES) 
                                     >> 3U)));
    vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES 
        = ((0xeU & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__r_SSEG) 
                                     >> 0xaU)));
    if ((5U <= (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS))) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS)));
    }
    if ((5U <= (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS))) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS)));
    }
    vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS))) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS)));
    }
    vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES))) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES)));
    }
    vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS 
        = ((0xeU & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES) 
                                     >> 3U)));
    vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES 
        = ((0xeU & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__r_SSEG) 
                                     >> 9U)));
    if ((5U <= (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS))) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS)));
    }
    if ((5U <= (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS))) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS)));
    }
    vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS))) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS)));
    }
    vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES))) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES)));
    }
    vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS 
        = ((0xeU & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES) 
                                     >> 3U)));
    vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES 
        = ((0xeU & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__r_SSEG) 
                                     >> 8U)));
    if ((5U <= (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS))) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS)));
    }
    if ((5U <= (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS))) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS)));
    }
    vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS))) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS)));
    }
    vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES))) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES)));
    }
    vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS 
        = ((0xeU & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES) 
                                     >> 3U)));
    vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES 
        = ((0xeU & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__r_SSEG) 
                                     >> 7U)));
    if ((5U <= (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS))) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS)));
    }
    if ((5U <= (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS))) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS)));
    }
    vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS))) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS)));
    }
    vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES))) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES)));
    }
    vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS 
        = ((0xeU & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES) 
                                     >> 3U)));
    vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES 
        = ((0xeU & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__r_SSEG) 
                                     >> 6U)));
    if ((5U <= (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS))) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS)));
    }
    if ((5U <= (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS))) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS)));
    }
    vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS))) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS)));
    }
    vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES))) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES)));
    }
    vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS 
        = ((0xeU & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES) 
                                     >> 3U)));
    vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES 
        = ((0xeU & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__r_SSEG) 
                                     >> 5U)));
    if ((5U <= (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS))) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS)));
    }
    if ((5U <= (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS))) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS)));
    }
    vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS))) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS)));
    }
    vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES))) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES)));
    }
    vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS 
        = ((0xeU & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES) 
                                     >> 3U)));
    vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES 
        = ((0xeU & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__r_SSEG) 
                                     >> 4U)));
    if ((5U <= (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS))) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS)));
    }
    if ((5U <= (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS))) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS)));
    }
    vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS))) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS)));
    }
    vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES))) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES)));
    }
    vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS 
        = ((0xeU & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES) 
                                     >> 3U)));
    vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES 
        = ((0xeU & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__r_SSEG) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS))) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS)));
    }
    if ((5U <= (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS))) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS)));
    }
    vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS))) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS)));
    }
    vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES))) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES)));
    }
    vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS 
        = ((0xeU & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES) 
                                     >> 3U)));
    vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES 
        = ((0xeU & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__r_SSEG) 
                                     >> 2U)));
    if ((5U <= (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS))) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS)));
    }
    if ((5U <= (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS))) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS)));
    }
    vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS))) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS)));
    }
    if ((5U <= (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS))) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS)));
    }
    vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS))) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS)));
    }
    if ((5U <= (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES))) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES)));
    }
    vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS 
        = ((0xeU & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS))) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS)));
    }
    vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES 
        = ((0xeU & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__r_SSEG) 
                                     >> 1U)));
    if ((5U <= (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES))) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES)));
    }
    vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS) 
                                     >> 3U)));
    vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS) 
                                     >> 3U)));
    vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS 
        = ((0xeU & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES) 
                                     >> 3U)));
    vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES 
        = ((0xeU & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES) 
                    << 1U)) | (1U & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__r_SSEG)));
}

VL_INLINE_OPT void VOTTER_SIM___024root___nba_sequent__TOP__26(VOTTER_SIM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VOTTER_SIM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_SIM___024root___nba_sequent__TOP__26\n"); );
    // Body
    vlSelf->__Vdly__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mie 
        = vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mie;
    vlSelf->__Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_MEM__DOT__register__v0 
        = vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
        [0U];
    vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_MEM__DOT__register__v0 = 1U;
    if (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_csr_en_EX__DOT__register
        [0U]) {
        if ((0x300U != (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                        [0U] >> 0x14U))) {
            if ((0x304U == (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                            [0U] >> 0x14U))) {
                if ((1U == (3U & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                                  [0U] >> 0xcU)))) {
                    vlSelf->__Vdly__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mie 
                        = vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__write_data;
                } else if ((2U == (3U & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                                         [0U] >> 0xcU)))) {
                    vlSelf->__Vdly__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mie 
                        = (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mie 
                           | vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__write_data);
                } else if ((3U == (3U & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                                         [0U] >> 0xcU)))) {
                    vlSelf->__Vdly__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mie 
                        = (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mie 
                           & (~ vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__write_data));
                }
            }
        }
    }
    if (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memRead2_MEM__DOT__register
        [0U]) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__ioIn_buffer 
            = vlSelf->OTTER_SIM__DOT__Otter__DOT__IOBUS_in;
    }
    vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__saved_mem_sign 
        = (1U & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_MEM__DOT__register
                 [0U] >> 0xeU));
    vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__saved_mem_size 
        = (3U & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_MEM__DOT__register
                 [0U] >> 0xcU));
    vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__saved_mem_addr2 
        = vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_out_MEM__DOT__register
        [0U];
    vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memOut2_sliced = 0U;
    if ((0U == (((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__saved_mem_sign) 
                 << 2U) | (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__saved_mem_size)))) {
        if ((3U == (3U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__saved_mem_addr2))) {
            vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memOut2_sliced 
                = (((- (IData)((vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memOut2 
                                >> 0x1fU))) << 8U) 
                   | (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memOut2 
                      >> 0x18U));
        } else if ((2U == (3U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__saved_mem_addr2))) {
            vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memOut2_sliced 
                = (((- (IData)((1U & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memOut2 
                                      >> 0x17U)))) 
                    << 8U) | (0xffU & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memOut2 
                                       >> 0x10U)));
        } else if ((1U == (3U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__saved_mem_addr2))) {
            vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memOut2_sliced 
                = (((- (IData)((1U & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memOut2 
                                      >> 0xfU)))) << 8U) 
                   | (0xffU & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memOut2 
                               >> 8U)));
        } else if ((0U == (3U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__saved_mem_addr2))) {
            vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memOut2_sliced 
                = (((- (IData)((1U & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memOut2 
                                      >> 7U)))) << 8U) 
                   | (0xffU & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memOut2));
        }
    } else if ((1U == (((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__saved_mem_sign) 
                        << 2U) | (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__saved_mem_size)))) {
        if ((3U == (3U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__saved_mem_addr2))) {
            vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memOut2_sliced 
                = (((- (IData)((vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memOut2 
                                >> 0x1fU))) << 8U) 
                   | (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memOut2 
                      >> 0x18U));
        } else if ((2U == (3U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__saved_mem_addr2))) {
            vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memOut2_sliced 
                = (((- (IData)((vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memOut2 
                                >> 0x1fU))) << 0x10U) 
                   | (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memOut2 
                      >> 0x10U));
        } else if ((1U == (3U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__saved_mem_addr2))) {
            vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memOut2_sliced 
                = (((- (IData)((1U & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memOut2 
                                      >> 0x17U)))) 
                    << 0x10U) | (0xffffU & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memOut2 
                                            >> 8U)));
        } else if ((0U == (3U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__saved_mem_addr2))) {
            vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memOut2_sliced 
                = (((- (IData)((1U & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memOut2 
                                      >> 0xfU)))) << 0x10U) 
                   | (0xffffU & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memOut2));
        }
    } else if ((2U == (((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__saved_mem_sign) 
                        << 2U) | (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__saved_mem_size)))) {
        if ((0U == (3U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__saved_mem_addr2))) {
            vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memOut2_sliced 
                = vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memOut2;
        }
    } else if ((4U == (((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__saved_mem_sign) 
                        << 2U) | (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__saved_mem_size)))) {
        if ((3U == (3U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__saved_mem_addr2))) {
            vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memOut2_sliced 
                = (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memOut2 
                   >> 0x18U);
        } else if ((2U == (3U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__saved_mem_addr2))) {
            vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memOut2_sliced 
                = (0xffU & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memOut2 
                            >> 0x10U));
        } else if ((1U == (3U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__saved_mem_addr2))) {
            vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memOut2_sliced 
                = (0xffU & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memOut2 
                            >> 8U));
        } else if ((0U == (3U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__saved_mem_addr2))) {
            vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memOut2_sliced 
                = (0xffU & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memOut2);
        }
    } else if ((5U == (((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__saved_mem_sign) 
                        << 2U) | (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__saved_mem_size)))) {
        if ((2U == (3U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__saved_mem_addr2))) {
            vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memOut2_sliced 
                = (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memOut2 
                   >> 0x10U);
        } else if ((1U == (3U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__saved_mem_addr2))) {
            vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memOut2_sliced 
                = (0xffffU & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memOut2 
                              >> 8U));
        } else if ((0U == (3U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__saved_mem_addr2))) {
            vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memOut2_sliced 
                = (0xffffU & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memOut2);
        }
    }
    vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__MEM_DOUT2 
        = ((0x11000000U <= vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__saved_mem_addr2)
            ? vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__ioIn_buffer
            : vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memOut2_sliced);
}

VL_INLINE_OPT void VOTTER_SIM___024root___nba_sequent__TOP__27(VOTTER_SIM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VOTTER_SIM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_SIM___024root___nba_sequent__TOP__27\n"); );
    // Init
    CData/*3:0*/ __Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_fun_EX__DOT__register__v0;
    CData/*0:0*/ __Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_fun_EX__DOT__register__v0;
    CData/*1:0*/ __Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_srcB_EX__DOT__register__v0;
    CData/*0:0*/ __Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_srcB_EX__DOT__register__v0;
    IData/*31:0*/ __Vdly__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mtvec;
    // Body
    vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_rf_wr_sel_EX__DOT__register__v0 = 0U;
    vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_csr_en_EX__DOT__register__v0 = 0U;
    __Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_fun_EX__DOT__register__v0 = 0U;
    vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IType_EX__DOT__register__v0 = 0U;
    vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_mret_EX__DOT__register__v0 = 0U;
    vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_pc_DE__DOT__register__v0 = 0U;
    __Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_srcB_EX__DOT__register__v0 = 0U;
    __Vdly__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mtvec 
        = vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mtvec;
    if (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__stall) {
        vlSelf->__Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_rf_wr_sel_EX__DOT__register__v0 
            = vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__rf_wr_sel;
        vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_rf_wr_sel_EX__DOT__register__v0 = 1U;
        vlSelf->__Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_csr_en_EX__DOT__register__v0 
            = vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__csr_en;
        vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_csr_en_EX__DOT__register__v0 = 1U;
        __Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_fun_EX__DOT__register__v0 
            = vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__alu_fun;
        __Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_fun_EX__DOT__register__v0 = 1U;
        vlSelf->__Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_mret_EX__DOT__register__v0 
            = vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__mret;
        vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_mret_EX__DOT__register__v0 = 1U;
        vlSelf->__Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IType_EX__DOT__register__v0 
            = vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IType;
        vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IType_EX__DOT__register__v0 = 1U;
        vlSelf->__Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_pc_DE__DOT__register__v0 
            = vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__pc;
        vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_pc_DE__DOT__register__v0 = 1U;
        __Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_srcB_EX__DOT__register__v0 
            = vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__alu_srcB;
        __Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_srcB_EX__DOT__register__v0 = 1U;
        vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__pc 
            = vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__next_pc_updated;
    }
    vlSelf->__Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_out_MEM__DOT__register__v0 
        = vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__alu_out;
    vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_out_MEM__DOT__register__v0 = 1U;
    if (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_csr_en_EX__DOT__register
        [0U]) {
        if ((0x300U != (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                        [0U] >> 0x14U))) {
            if ((0x304U != (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                            [0U] >> 0x14U))) {
                if ((0x305U == (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                                [0U] >> 0x14U))) {
                    if ((1U == (3U & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                                      [0U] >> 0xcU)))) {
                        __Vdly__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mtvec 
                            = vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__write_data;
                    } else if ((2U == (3U & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                                             [0U] >> 0xcU)))) {
                        __Vdly__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mtvec 
                            = (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mtvec 
                               | vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__write_data);
                    } else if ((3U == (3U & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                                             [0U] >> 0xcU)))) {
                        __Vdly__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mtvec 
                            = (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mtvec 
                               & (~ vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__write_data));
                    }
                }
            }
        }
    }
    if (__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_fun_EX__DOT__register__v0) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_fun_EX__DOT__register[0U] 
            = __Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_fun_EX__DOT__register__v0;
    }
    vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mtvec 
        = __Vdly__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mtvec;
    if (__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_srcB_EX__DOT__register__v0) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_srcB_EX__DOT__register[0U] 
            = __Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_srcB_EX__DOT__register__v0;
    }
}

VL_INLINE_OPT void VOTTER_SIM___024root___nba_sequent__TOP__28(VOTTER_SIM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VOTTER_SIM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_SIM___024root___nba_sequent__TOP__28\n"); );
    // Init
    CData/*0:0*/ __Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memWrite_MEM__DOT__register__v0;
    IData/*31:0*/ __Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_pc_WB__DOT__register__v0;
    IData/*31:0*/ __Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_pc_WB__DOT__register__v1;
    // Body
    if (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memWrite2) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__i = 4U;
    }
    __Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_pc_WB__DOT__register__v0 
        = vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_pc_WB__DOT__register
        [1U];
    __Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_pc_WB__DOT__register__v1 
        = vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_pc_EX__DOT__register
        [0U];
    __Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memWrite_MEM__DOT__register__v0 
        = vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memWrite_EX__DOT__register
        [0U];
    if (vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memRead2_EX__DOT__register__v0) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memRead2_EX__DOT__register[0U] 
            = vlSelf->__Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memRead2_EX__DOT__register__v0;
    }
    if (vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memWrite_EX__DOT__register__v0) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memWrite_EX__DOT__register[0U] 
            = vlSelf->__Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memWrite_EX__DOT__register__v0;
    }
    vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_pc_WB__DOT__register[0U] 
        = __Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_pc_WB__DOT__register__v0;
    vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_pc_WB__DOT__register[1U] 
        = __Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_pc_WB__DOT__register__v1;
    vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memWrite_MEM__DOT__register[0U] 
        = __Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memWrite_MEM__DOT__register__v0;
    if (vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IType_EX__DOT__register__v0) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IType_EX__DOT__register[0U] 
            = vlSelf->__Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IType_EX__DOT__register__v0;
    }
    if (vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_pc_EX__DOT__register__v0) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_pc_EX__DOT__register[0U] 
            = vlSelf->__Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_pc_EX__DOT__register__v0;
    }
    vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT____Vcellinp__Mem__MEM_WRITE2 
        = ((~ ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__squash) 
               >> 2U)) & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memWrite_MEM__DOT__register
           [0U]);
}

VL_INLINE_OPT void VOTTER_SIM___024root___nba_sequent__TOP__29(VOTTER_SIM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VOTTER_SIM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_SIM___024root___nba_sequent__TOP__29\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__RegF__DOT__ram__v0;
    IData/*31:0*/ __Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__RegF__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__RegF__DOT__ram__v0;
    // Body
    __Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__RegF__DOT__ram__v0 = 0U;
    if (((~ ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__squash) 
             >> 3U)) & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_regWrite_WB__DOT__register
         [0U])) {
        __Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__RegF__DOT__ram__v0 
            = ((2U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_rf_wr_sel_WB__DOT__register
                [0U]) ? ((1U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_rf_wr_sel_WB__DOT__register
                          [0U]) ? vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_out_WB__DOT__register
                         [0U] : vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__MEM_DOUT2)
                : ((1U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_rf_wr_sel_WB__DOT__register
                    [0U]) ? vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR_REG
                    : ((IData)(4U) + vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_pc_WB__DOT__register
                       [0U])));
        __Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__RegF__DOT__ram__v0 = 1U;
        __Vdlyvdim0__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__RegF__DOT__ram__v0 
            = (0x1fU & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_WB__DOT__register
                        [0U] >> 7U));
    }
    if (__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__RegF__DOT__ram__v0) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__RegF__DOT__ram[__Vdlyvdim0__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__RegF__DOT__ram__v0] 
            = __Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__RegF__DOT__ram__v0;
    }
}

VL_INLINE_OPT void VOTTER_SIM___024root___nba_comb__TOP__2(VOTTER_SIM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VOTTER_SIM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_SIM___024root___nba_comb__TOP__2\n"); );
    // Body
    vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__rs2 = 0U;
    if ((0U != (0x1fU & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR 
                         >> 0x14U)))) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__rs2 
            = vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__RegF__DOT__ram
            [(0x1fU & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR 
                       >> 0x14U))];
    }
    vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__rs1 = 0U;
    if ((0U != (0x1fU & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR 
                         >> 0xfU)))) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__rs1 
            = vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__RegF__DOT__ram
            [(0x1fU & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR 
                       >> 0xfU))];
    }
}

VL_INLINE_OPT void VOTTER_SIM___024root___nba_sequent__TOP__30(VOTTER_SIM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VOTTER_SIM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_SIM___024root___nba_sequent__TOP__30\n"); );
    // Body
    vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__mret = 0U;
    if ((0x40U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR)) {
        if ((0x20U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR)) {
            if ((0x10U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR)) {
                if ((1U & (~ (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR 
                                  >> 2U)))) {
                        if ((2U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR)) {
                            if ((1U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR)) {
                                if ((0U == (3U & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR 
                                                  >> 0xcU)))) {
                                    if ((0x18U == (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR 
                                                   >> 0x19U))) {
                                        vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__mret = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__alu_fun = 0U;
    if ((1U & (~ (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR 
                  >> 6U)))) {
        if ((0x20U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR)) {
            if ((0x10U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR)) {
                if ((1U & (~ (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR 
                              >> 3U)))) {
                    if ((4U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR)) {
                        if ((2U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR)) {
                            if ((1U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR)) {
                                vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__alu_fun = 9U;
                            }
                        }
                    } else if ((2U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR)) {
                        if ((1U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR)) {
                            if ((IData)((0U == (0xfe007000U 
                                                & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR)))) {
                                vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__alu_fun = 0U;
                            } else if ((IData)((0x40000000U 
                                                == 
                                                (0xfe007000U 
                                                 & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR)))) {
                                vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__alu_fun = 8U;
                            } else if ((1U == (7U & 
                                               (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR 
                                                >> 0xcU)))) {
                                vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__alu_fun = 1U;
                            } else if ((2U == (7U & 
                                               (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR 
                                                >> 0xcU)))) {
                                vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__alu_fun = 2U;
                            } else if ((3U == (7U & 
                                               (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR 
                                                >> 0xcU)))) {
                                vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__alu_fun = 3U;
                            } else if ((4U == (7U & 
                                               (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR 
                                                >> 0xcU)))) {
                                vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__alu_fun = 4U;
                            } else if ((IData)((0x5000U 
                                                == 
                                                (0xfe007000U 
                                                 & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR)))) {
                                vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__alu_fun = 5U;
                            } else if ((IData)((0x40005000U 
                                                == 
                                                (0xfe007000U 
                                                 & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR)))) {
                                vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__alu_fun = 0xdU;
                            } else if ((6U == (7U & 
                                               (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR 
                                                >> 0xcU)))) {
                                vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__alu_fun = 6U;
                            } else if ((7U == (7U & 
                                               (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR 
                                                >> 0xcU)))) {
                                vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__alu_fun = 7U;
                            }
                        }
                    }
                }
            }
        } else if ((0x10U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR)) {
            if ((1U & (~ (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR 
                          >> 3U)))) {
                if ((1U & (~ (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR 
                              >> 2U)))) {
                    if ((2U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR)) {
                        if ((1U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR)) {
                            if ((0U == (7U & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR 
                                              >> 0xcU)))) {
                                vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__alu_fun = 0U;
                            } else if ((2U == (7U & 
                                               (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR 
                                                >> 0xcU)))) {
                                vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__alu_fun = 2U;
                            } else if ((3U == (7U & 
                                               (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR 
                                                >> 0xcU)))) {
                                vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__alu_fun = 3U;
                            } else if ((4U == (7U & 
                                               (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR 
                                                >> 0xcU)))) {
                                vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__alu_fun = 4U;
                            } else if ((6U == (7U & 
                                               (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR 
                                                >> 0xcU)))) {
                                vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__alu_fun = 6U;
                            } else if ((7U == (7U & 
                                               (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR 
                                                >> 0xcU)))) {
                                vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__alu_fun = 7U;
                            } else if ((IData)((0x5000U 
                                                == 
                                                (0xfe007000U 
                                                 & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR)))) {
                                vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__alu_fun = 5U;
                            } else if ((1U == (7U & 
                                               (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR 
                                                >> 0xcU)))) {
                                vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__alu_fun = 1U;
                            } else if ((IData)((0x40005000U 
                                                == 
                                                (0xfe007000U 
                                                 & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR)))) {
                                vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__alu_fun = 0xdU;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IType 
        = (((- (IData)((vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR 
                        >> 0x1fU))) << 0xcU) | (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR 
                                                >> 0x14U));
}

VL_INLINE_OPT void VOTTER_SIM___024root___nba_sequent__TOP__31(VOTTER_SIM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VOTTER_SIM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_SIM___024root___nba_sequent__TOP__31\n"); );
    // Init
    CData/*0:0*/ __Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_regWrite_WB__DOT__register__v0;
    // Body
    __Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_regWrite_WB__DOT__register__v0 
        = vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_regWrite_WB__DOT__register
        [1U];
    if (vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_pc_DE__DOT__register__v0) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_pc_DE__DOT__register[0U] 
            = vlSelf->__Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_pc_DE__DOT__register__v0;
    }
    vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_regWrite_WB__DOT__register[0U] 
        = __Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_regWrite_WB__DOT__register__v0;
    if (vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_regWrite_WB__DOT__register__v1) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_regWrite_WB__DOT__register[1U] 
            = vlSelf->__Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_regWrite_WB__DOT__register__v1;
    }
    if (vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memRead2_MEM__DOT__register__v0) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memRead2_MEM__DOT__register[0U] 
            = vlSelf->__Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memRead2_MEM__DOT__register__v0;
    }
    if (vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memRead2_MEM__DOT__register__v1) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memRead2_MEM__DOT__register[1U] 
            = vlSelf->__Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memRead2_MEM__DOT__register__v1;
    }
    vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__memWrite = 0U;
    vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__alu_srcB = 0U;
    vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__memRead2 = 0U;
    if ((1U & (~ (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR 
                  >> 6U)))) {
        if ((0x20U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR)) {
            if ((1U & (~ (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR 
                          >> 4U)))) {
                if ((1U & (~ (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR 
                                  >> 2U)))) {
                        if ((2U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR)) {
                            if ((1U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR)) {
                                vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__memWrite = 1U;
                                vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__alu_srcB = 2U;
                            }
                        }
                    }
                }
            }
        } else if ((0x10U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR)) {
            if ((1U & (~ (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR 
                          >> 3U)))) {
                if ((4U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR)) {
                    if ((2U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR)) {
                        if ((1U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR)) {
                            vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__alu_srcB = 3U;
                        }
                    }
                } else if ((2U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR)) {
                    if ((1U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR)) {
                        vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__alu_srcB = 1U;
                    }
                }
            }
        } else if ((1U & (~ (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR 
                             >> 3U)))) {
            if ((1U & (~ (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR 
                          >> 2U)))) {
                if ((2U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR)) {
                    if ((1U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR)) {
                        vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__alu_srcB = 1U;
                    }
                }
            }
        }
        if ((1U & (~ (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR 
                      >> 5U)))) {
            if ((1U & (~ (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR 
                          >> 4U)))) {
                if ((1U & (~ (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR 
                                  >> 2U)))) {
                        if ((2U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR)) {
                            if ((1U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR)) {
                                vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__memRead2 = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void VOTTER_SIM___024root___nba_sequent__TOP__32(VOTTER_SIM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VOTTER_SIM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_SIM___024root___nba_sequent__TOP__32\n"); );
    // Body
    vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__csr_en = 0U;
    vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__regWrite = 0U;
    vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__alu_srcA = 0U;
    if ((1U & (~ (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR 
                  >> 6U)))) {
        if ((0x20U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR)) {
            if ((0x10U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR)) {
                if ((1U & (~ (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR 
                              >> 3U)))) {
                    if ((4U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR)) {
                        if ((2U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR)) {
                            if ((1U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR)) {
                                vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__alu_srcA = 1U;
                            }
                        }
                    }
                }
            }
        } else if ((0x10U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR)) {
            if ((1U & (~ (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR 
                          >> 3U)))) {
                if ((4U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR)) {
                    if ((2U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR)) {
                        if ((1U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR)) {
                            vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__alu_srcA = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__rf_wr_sel = 0U;
    if ((0x40U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR)) {
        if ((0x20U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR)) {
            if ((0x10U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR)) {
                if ((1U & (~ (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR 
                                  >> 2U)))) {
                        if ((2U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR)) {
                            if ((1U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR)) {
                                if ((0U != (3U & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR 
                                                  >> 0xcU)))) {
                                    vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__csr_en = 1U;
                                    vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__regWrite = 1U;
                                    vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__rf_wr_sel = 1U;
                                }
                            }
                        }
                    }
                }
            } else if ((8U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR)) {
                if ((4U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR)) {
                    if ((2U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR)) {
                        if ((1U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR)) {
                            vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__regWrite = 1U;
                            vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__rf_wr_sel = 0U;
                        }
                    }
                }
            } else if ((4U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR)) {
                if ((2U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR)) {
                    if ((1U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR)) {
                        vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__regWrite = 1U;
                        vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__rf_wr_sel = 0U;
                    }
                }
            }
        }
    } else if ((0x20U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR)) {
        if ((0x10U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR)) {
            if ((1U & (~ (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR 
                          >> 3U)))) {
                if ((4U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR)) {
                    if ((2U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR)) {
                        if ((1U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR)) {
                            vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__regWrite = 1U;
                            vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__rf_wr_sel = 3U;
                        }
                    }
                } else if ((2U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR)) {
                    if ((1U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR)) {
                        vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__regWrite = 1U;
                        vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__rf_wr_sel = 3U;
                    }
                }
            }
        }
    } else if ((0x10U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR)) {
        if ((1U & (~ (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR 
                      >> 3U)))) {
            if ((4U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR)) {
                if ((2U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR)) {
                    if ((1U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR)) {
                        vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__regWrite = 1U;
                        vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__rf_wr_sel = 3U;
                    }
                }
            } else if ((2U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR)) {
                if ((1U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR)) {
                    vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__regWrite = 1U;
                    vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__rf_wr_sel = 3U;
                }
            }
        }
    } else if ((1U & (~ (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR 
                         >> 3U)))) {
        if ((1U & (~ (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR 
                      >> 2U)))) {
            if ((2U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR)) {
                if ((1U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR)) {
                    vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__regWrite = 1U;
                    vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__rf_wr_sel = 2U;
                }
            }
        }
    }
}

VL_INLINE_OPT void VOTTER_SIM___024root___nba_sequent__TOP__33(VOTTER_SIM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VOTTER_SIM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_SIM___024root___nba_sequent__TOP__33\n"); );
    // Body
    if (vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register__v0) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register[0U] 
            = vlSelf->__Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register__v0;
    }
    vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__B_EX_fw 
        = vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_B_EX__DOT__register
        [0U];
    vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__rs2_EX_fw 
        = vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_rs2_EX__DOT__register
        [0U];
    if (((0x1fU & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                   [0U] >> 0x14U)) == (0x1fU & (IData)(
                                                       (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__HzHr__DOT__fw_1 
                                                        >> 1U))))) {
        if ((1U & (~ (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__HzHr__DOT__fw_1)))) {
            vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__rs2_EX_fw 
                = (IData)((vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__HzHr__DOT__fw_1 
                           >> 6U));
        }
    } else if (((0x1fU & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                          [0U] >> 0x14U)) == (0x1fU 
                                              & (IData)(
                                                        (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__HzHr__DOT__fw_2 
                                                         >> 1U))))) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__rs2_EX_fw 
            = ((1U & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__HzHr__DOT__fw_2))
                ? vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__MEM_DOUT2
                : (IData)((vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__HzHr__DOT__fw_2 
                           >> 6U)));
    }
    if ((0U == vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_srcB_EX__DOT__register
         [0U])) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__B_EX_fw 
            = vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__rs2_EX_fw;
    }
    vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__A_EX_fw 
        = vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_A_EX__DOT__register
        [0U];
    if ((1U & (~ vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_srcA_EX__DOT__register
               [0U]))) {
        if (((0x1fU & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                       [0U] >> 0xfU)) == (0x1fU & (IData)(
                                                          (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__HzHr__DOT__fw_1 
                                                           >> 1U))))) {
            if ((1U & (~ (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__HzHr__DOT__fw_1)))) {
                vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__A_EX_fw 
                    = (IData)((vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__HzHr__DOT__fw_1 
                               >> 6U));
            }
        } else if (((0x1fU & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                              [0U] >> 0xfU)) == (0x1fU 
                                                 & (IData)(
                                                           (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__HzHr__DOT__fw_2 
                                                            >> 1U))))) {
            vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__A_EX_fw 
                = ((1U & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__HzHr__DOT__fw_2))
                    ? vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__MEM_DOUT2
                    : (IData)((vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__HzHr__DOT__fw_2 
                               >> 6U)));
        }
    }
}

VL_INLINE_OPT void VOTTER_SIM___024root___nba_sequent__TOP__34(VOTTER_SIM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VOTTER_SIM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_SIM___024root___nba_sequent__TOP__34\n"); );
    // Body
    vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__pcSource = 0U;
    if ((0x6fU == (0x7fU & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                   [0U]))) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__pcSource = 3U;
    } else if ((0x67U == (0x7fU & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                          [0U]))) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__pcSource = 1U;
    } else if ((0x63U == (0x7fU & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                          [0U]))) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__BCG__DOT__br_eq 
            = (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__A_EX_fw 
               == vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__B_EX_fw);
        vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__BCG__DOT__br_lt 
            = VL_LTS_III(32, vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__A_EX_fw, vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__B_EX_fw);
        vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__BCG__DOT__br_ltu 
            = (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__A_EX_fw 
               < vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__B_EX_fw);
        if ((((((((0U == (7U & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                                [0U] >> 0xcU))) & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__BCG__DOT__br_eq)) 
                 | ((1U == (7U & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                                  [0U] >> 0xcU))) & 
                    (~ (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__BCG__DOT__br_eq)))) 
                | ((4U == (7U & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                                 [0U] >> 0xcU))) & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__BCG__DOT__br_lt))) 
               | ((5U == (7U & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                                [0U] >> 0xcU))) & (~ (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__BCG__DOT__br_lt)))) 
              | ((6U == (7U & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                               [0U] >> 0xcU))) & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__BCG__DOT__br_ltu))) 
             | ((7U == (7U & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                              [0U] >> 0xcU))) & (~ (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__BCG__DOT__br_ltu))))) {
            vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__pcSource = 2U;
        }
    }
    if ((2U & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__squash))) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__pcSource = 0U;
    }
}

VL_INLINE_OPT void VOTTER_SIM___024root___nba_sequent__TOP__35(VOTTER_SIM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VOTTER_SIM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_SIM___024root___nba_sequent__TOP__35\n"); );
    // Body
    vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__flush_DE 
        = vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__flush;
    if (vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_csr_en_EX__DOT__register__v0) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_csr_en_EX__DOT__register[0U] 
            = vlSelf->__Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_csr_en_EX__DOT__register__v0;
    }
    vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mie 
        = vlSelf->__Vdly__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mie;
    vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mcause 
        = vlSelf->__Vdly__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mcause;
    vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mstatus 
        = vlSelf->__Vdly__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mstatus;
    if (vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_mret_EX__DOT__register__v0) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_mret_EX__DOT__register[0U] 
            = vlSelf->__Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_mret_EX__DOT__register__v0;
    }
    vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__int_state 
        = vlSelf->__Vdly__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__int_state;
    vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mepc 
        = vlSelf->__Vdly__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mepc;
    vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__flush = 0U;
    if ((1U == (3U & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__int_state) 
                      >> 3U)))) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__flush = 1U;
    }
    vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__csr_out_EX 
        = ((0x300U == (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                       [0U] >> 0x14U)) ? vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mstatus
            : ((0x304U == (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                           [0U] >> 0x14U)) ? vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mie
                : ((0x305U == (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                               [0U] >> 0x14U)) ? vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mtvec
                    : ((0x341U == (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                                   [0U] >> 0x14U)) ? vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mepc
                        : ((0x342U == (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                                       [0U] >> 0x14U))
                            ? vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mcause
                            : 0U)))));
}

VL_INLINE_OPT void VOTTER_SIM___024root___nba_sequent__TOP__36(VOTTER_SIM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VOTTER_SIM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_SIM___024root___nba_sequent__TOP__36\n"); );
    // Init
    CData/*1:0*/ __Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_rf_wr_sel_WB__DOT__register__v0;
    CData/*1:0*/ __Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_rf_wr_sel_WB__DOT__register__v1;
    // Body
    __Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_rf_wr_sel_WB__DOT__register__v1 
        = vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_rf_wr_sel_EX__DOT__register
        [0U];
    __Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_rf_wr_sel_WB__DOT__register__v0 
        = vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_rf_wr_sel_WB__DOT__register
        [1U];
    if (vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memDIn2_MEM__DOT__register__v0) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memDIn2_MEM__DOT__register[0U] 
            = vlSelf->__Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memDIn2_MEM__DOT__register__v0;
    }
    if (vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_rf_wr_sel_EX__DOT__register__v0) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_rf_wr_sel_EX__DOT__register[0U] 
            = vlSelf->__Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_rf_wr_sel_EX__DOT__register__v0;
    }
    vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_rf_wr_sel_WB__DOT__register[0U] 
        = __Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_rf_wr_sel_WB__DOT__register__v0;
    vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_rf_wr_sel_WB__DOT__register[1U] 
        = __Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_rf_wr_sel_WB__DOT__register__v1;
    vlSelf->OTTER_SIM__DOT__Otter__DOT__m_ext_int = vlSelf->OTTER_SIM__DOT__Otter__DOT__btn_int;
    if (vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_MEM__DOT__register__v0) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_MEM__DOT__register[0U] 
            = vlSelf->__Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_MEM__DOT__register__v0;
    }
}

VL_INLINE_OPT void VOTTER_SIM___024root___nba_comb__TOP__3(VOTTER_SIM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VOTTER_SIM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_SIM___024root___nba_comb__TOP__3\n"); );
    // Body
    vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI__DOT__nxt 
        = vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI__DOT__cur;
    vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI_DONE = 0U;
    if ((0U == (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI__DOT__cur))) {
        if (vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI_START) {
            vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI__DOT__nxt = 2U;
            vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI_DONE = 0U;
        }
    } else if ((2U == (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI__DOT__cur))) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI_DONE = 0U;
        if ((8U == (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI__DOT__nbit))) {
            vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI__DOT__nxt = 3U;
            vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI_DONE = 1U;
        }
    } else if ((3U == (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI__DOT__cur))) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI__DOT__nxt = 3U;
        if ((1U & (~ (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI_START)))) {
            vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI__DOT__nxt = 0U;
        }
        vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI_DONE = 1U;
    } else {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI__DOT__nxt = 3U;
    }
}

VL_INLINE_OPT void VOTTER_SIM___024root___nba_sequent__TOP__37(VOTTER_SIM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VOTTER_SIM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_SIM___024root___nba_sequent__TOP__37\n"); );
    // Body
    vlSelf->OTTER_SIM__DOT__Otter__DOT__timer_int = 
        ((vlSelf->OTTER_SIM__DOT__Otter__DOT__MTIMER__DOT__mtime 
          >= vlSelf->OTTER_SIM__DOT__Otter__DOT__MTIMER__DOT__mtimecmp)
          ? 1U : 0U);
    if (vlSelf->__Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_out_MEM__DOT__register__v0) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_out_MEM__DOT__register[0U] 
            = vlSelf->__Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_out_MEM__DOT__register__v0;
    }
}

VL_INLINE_OPT void VOTTER_SIM___024root___nba_comb__TOP__4(VOTTER_SIM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VOTTER_SIM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_SIM___024root___nba_comb__TOP__4\n"); );
    // Body
    vlSelf->OTTER_SIM__DOT__Otter__DOT__IOBUS_in = 0U;
    vlSelf->OTTER_SIM__DOT__Otter__DOT__IOBUS_in = 
        ((0x11080000U == vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_out_MEM__DOT__register
          [0U]) ? ((0xffff0000U & vlSelf->OTTER_SIM__DOT__Otter__DOT__IOBUS_in) 
                   | (IData)(vlSelf->OTTER_SIM__DOT__LEDS))
          : ((0x11000000U == vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_out_MEM__DOT__register
              [0U]) ? (0xffff0000U & vlSelf->OTTER_SIM__DOT__Otter__DOT__IOBUS_in)
              : ((0x110d0000U == vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_out_MEM__DOT__register
                  [0U]) ? ((0xffffff00U & vlSelf->OTTER_SIM__DOT__Otter__DOT__IOBUS_in) 
                           | (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI_RDATA))
                  : ((0x110f0000U == vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_out_MEM__DOT__register
                      [0U]) ? ((0xfffffffeU & vlSelf->OTTER_SIM__DOT__Otter__DOT__IOBUS_in) 
                               | (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI_DONE))
                      : ((0x21000000U == vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_out_MEM__DOT__register
                          [0U]) ? (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MTIMER__DOT__mtime)
                          : ((0x21000004U == vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_out_MEM__DOT__register
                              [0U]) ? (IData)((vlSelf->OTTER_SIM__DOT__Otter__DOT__MTIMER__DOT__mtime 
                                               >> 0x20U))
                              : 0U))))));
}

VL_INLINE_OPT void VOTTER_SIM___024root___nba_sequent__TOP__38(VOTTER_SIM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VOTTER_SIM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_SIM___024root___nba_sequent__TOP__38\n"); );
    // Body
    vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__weA 
        = (0xfU & ((0U == (3U & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_MEM__DOT__register
                                 [0U] >> 0xcU))) ? 
                   ((IData)(1U) << (3U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_out_MEM__DOT__register
                                    [0U])) : ((1U == 
                                               (3U 
                                                & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_MEM__DOT__register
                                                   [0U] 
                                                   >> 0xcU)))
                                               ? ((IData)(3U) 
                                                  << 
                                                  (3U 
                                                   & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_out_MEM__DOT__register
                                                   [0U]))
                                               : ((2U 
                                                   == 
                                                   (3U 
                                                    & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_MEM__DOT__register
                                                       [0U] 
                                                       >> 0xcU)))
                                                   ? 0xfU
                                                   : 0U))));
    vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memWrite2 
        = ((0x11000000U > vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_out_MEM__DOT__register
            [0U]) & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT____Vcellinp__Mem__MEM_WRITE2));
    vlSelf->OTTER_SIM__DOT__Otter__DOT__IOBUS_wr = 0U;
    if ((0x11000000U <= vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_out_MEM__DOT__register
         [0U])) {
        if (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT____Vcellinp__Mem__MEM_WRITE2) {
            vlSelf->OTTER_SIM__DOT__Otter__DOT__IOBUS_wr = 1U;
        }
    }
    vlSelf->OTTER_SIM__DOT__Otter__DOT__mtimecmp_set 
        = ((((0x22000004U == vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_out_MEM__DOT__register
              [0U]) & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__IOBUS_wr)) 
            << 1U) | ((0x22000000U == vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_out_MEM__DOT__register
                       [0U]) & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__IOBUS_wr)));
    vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__write_data 
        = ((0x4000U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
            [0U]) ? (0x1fU & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                              [0U] >> 0xfU)) : vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__A_EX_fw);
}

VL_INLINE_OPT void VOTTER_SIM___024root___nba_sequent__TOP__39(VOTTER_SIM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VOTTER_SIM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_SIM___024root___nba_sequent__TOP__39\n"); );
    // Body
    vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__alu_out 
        = ((8U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_fun_EX__DOT__register
            [0U]) ? ((4U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_fun_EX__DOT__register
                      [0U]) ? ((2U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_fun_EX__DOT__register
                                [0U]) ? 0xffffffffU
                                : ((1U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_fun_EX__DOT__register
                                    [0U]) ? VL_SHIFTRS_III(32,32,5, vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__A_EX_fw, 
                                                           (0x1fU 
                                                            & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__B_EX_fw))
                                    : 0xffffffffU))
                      : ((2U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_fun_EX__DOT__register
                          [0U]) ? 0xffffffffU : ((1U 
                                                  & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_fun_EX__DOT__register
                                                  [0U])
                                                  ? vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__A_EX_fw
                                                  : 
                                                 (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__A_EX_fw 
                                                  - vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__B_EX_fw))))
            : ((4U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_fun_EX__DOT__register
                [0U]) ? ((2U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_fun_EX__DOT__register
                          [0U]) ? ((1U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_fun_EX__DOT__register
                                    [0U]) ? (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__A_EX_fw 
                                             & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__B_EX_fw)
                                    : (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__A_EX_fw 
                                       | vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__B_EX_fw))
                          : ((1U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_fun_EX__DOT__register
                              [0U]) ? (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__A_EX_fw 
                                       >> (0x1fU & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__B_EX_fw))
                              : (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__A_EX_fw 
                                 ^ vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__B_EX_fw)))
                : ((2U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_fun_EX__DOT__register
                    [0U]) ? ((1U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_fun_EX__DOT__register
                              [0U]) ? ((vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__A_EX_fw 
                                        < vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__B_EX_fw)
                                        ? 1U : 0U) : 
                             (VL_LTS_III(32, vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__A_EX_fw, vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__B_EX_fw)
                               ? 1U : 0U)) : ((1U & 
                                               vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_fun_EX__DOT__register
                                               [0U])
                                               ? (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__A_EX_fw 
                                                  << 
                                                  (0x1fU 
                                                   & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__B_EX_fw))
                                               : (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__A_EX_fw 
                                                  + vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__B_EX_fw)))));
    vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__HzHr__DOT__fw_1_next 
        = (0x3ffffffffeULL & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__HzHr__DOT__fw_1_next);
    if (((vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_regWrite_EX__DOT__register
          [0U] & (0U != (0x1fU & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                                  [0U] >> 7U)))) & 
         (~ ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__squash) 
             >> 1U)))) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__HzHr__DOT__fw_1_next 
            = ((1ULL & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__HzHr__DOT__fw_1_next) 
               | (((QData)((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__alu_out)) 
                   << 6U) | ((QData)((IData)((0x1fU 
                                              & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                                                 [0U] 
                                                 >> 7U)))) 
                             << 1U)));
        if ((3U == (0x7fU & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                    [0U]))) {
            vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__HzHr__DOT__fw_1_next 
                = (1ULL | vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__HzHr__DOT__fw_1_next);
            vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__HzHr__DOT__fw_1_next 
                = (0x3fULL & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__HzHr__DOT__fw_1_next);
        }
        if (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_csr_en_EX__DOT__register
            [0U]) {
            vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__HzHr__DOT__fw_1_next 
                = ((1ULL & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__HzHr__DOT__fw_1_next) 
                   | (((QData)((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__csr_out_EX)) 
                       << 6U) | ((QData)((IData)((0x1fU 
                                                  & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                                                     [0U] 
                                                     >> 7U)))) 
                                 << 1U)));
        }
    } else {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__HzHr__DOT__fw_1_next 
            = (1ULL & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__HzHr__DOT__fw_1_next);
    }
    if ((1U & (~ vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_srcA_EX__DOT__register
               [0U]))) {
        if (((0x1fU & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                       [0U] >> 0xfU)) == (0x1fU & (IData)(
                                                          (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__HzHr__DOT__fw_1 
                                                           >> 1U))))) {
            if ((1U & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__HzHr__DOT__fw_1))) {
                vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__HzHr__DOT__fw_1_next 
                    = (1ULL & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__HzHr__DOT__fw_1_next);
            }
        }
    }
    if (((0x1fU & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                   [0U] >> 0x14U)) == (0x1fU & (IData)(
                                                       (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__HzHr__DOT__fw_1 
                                                        >> 1U))))) {
        if ((1U & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__HzHr__DOT__fw_1))) {
            vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__HzHr__DOT__fw_1_next 
                = (1ULL & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__HzHr__DOT__fw_1_next);
        }
    }
}

VL_INLINE_OPT void VOTTER_SIM___024root___nba_sequent__TOP__40(VOTTER_SIM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VOTTER_SIM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_SIM___024root___nba_sequent__TOP__40\n"); );
    // Body
    vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__stall = 1U;
    vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__HzHr__DOT__squash_next 
        = (0xfU & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__squash) 
                   << 1U));
    if ((1U & (~ vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_srcA_EX__DOT__register
               [0U]))) {
        if (((0x1fU & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                       [0U] >> 0xfU)) == (0x1fU & (IData)(
                                                          (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__HzHr__DOT__fw_1 
                                                           >> 1U))))) {
            if ((1U & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__HzHr__DOT__fw_1))) {
                vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__stall = 0U;
                vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__HzHr__DOT__squash_next 
                    = (4U | (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__HzHr__DOT__squash_next));
            }
        }
    }
    if (((0x1fU & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                   [0U] >> 0x14U)) == (0x1fU & (IData)(
                                                       (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__HzHr__DOT__fw_1 
                                                        >> 1U))))) {
        if ((1U & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__HzHr__DOT__fw_1))) {
            vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__stall = 0U;
            vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__HzHr__DOT__squash_next 
                = (4U | (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__HzHr__DOT__squash_next));
        }
    }
    if ((((0U != (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__pcSource)) 
          | vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_mret_EX__DOT__register
          [0U]) & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__stall))) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__HzHr__DOT__squash_next 
            = (3U | (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__HzHr__DOT__squash_next));
    }
    if ((1U & (~ (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__stall)))) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__HzHr__DOT__squash_next 
            = ((0xcU & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__HzHr__DOT__squash_next)) 
               | (3U & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__squash)));
    }
    if (((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__flush) 
         & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__stall))) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__HzHr__DOT__squash_next 
            = (1U | (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__HzHr__DOT__squash_next));
    }
    vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__pcPlus4 
        = ((IData)(4U) + vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__pc);
    vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__next_pc 
        = ((4U & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__pcSource))
            ? vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__pcPlus4
            : ((2U & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__pcSource))
                ? ((1U & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__pcSource))
                    ? (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_pc_EX__DOT__register
                       [0U] + (((- (IData)((vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                                            [0U] >> 0x1fU))) 
                                << 0x14U) | ((0xff000U 
                                              & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                                              [0U]) 
                                             | ((0x800U 
                                                 & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                                                    [0U] 
                                                    >> 9U)) 
                                                | (0x7feU 
                                                   & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                                                      [0U] 
                                                      >> 0x14U))))))
                    : (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_pc_EX__DOT__register
                       [0U] + (((- (IData)((vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                                            [0U] >> 0x1fU))) 
                                << 0xcU) | ((0x800U 
                                             & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                                                [0U] 
                                                << 4U)) 
                                            | ((0x7e0U 
                                                & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                                                   [0U] 
                                                   >> 0x14U)) 
                                               | (0x1eU 
                                                  & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                                                     [0U] 
                                                     >> 7U)))))))
                : ((1U & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__pcSource))
                    ? (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__A_EX_fw 
                       + vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IType_EX__DOT__register
                       [0U]) : vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__pcPlus4)));
    vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__next_pc_updated 
        = vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__next_pc;
    if ((1U == (3U & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__int_state) 
                      >> 3U)))) {
        if ((1U & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__int_state))) {
            vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__next_pc_updated 
                = vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mtvec;
        }
    } else if ((IData)(((0x10U == (0x18U & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__int_state))) 
                        & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_mret_EX__DOT__register
                        [0U]))) {
        vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__next_pc_updated 
            = vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mepc;
    }
}

void VOTTER_SIM___024root___eval_triggers__act(VOTTER_SIM___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VOTTER_SIM___024root___dump_triggers__act(VOTTER_SIM___024root* vlSelf);
#endif  // VL_DEBUG
void VOTTER_SIM___024root___timing_resume(VOTTER_SIM___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VOTTER_SIM___024root___dump_triggers__nba(VOTTER_SIM___024root* vlSelf);
#endif  // VL_DEBUG
void VOTTER_SIM___024root___eval_nba(VOTTER_SIM___024root* vlSelf);

void VOTTER_SIM___024root___eval(VOTTER_SIM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VOTTER_SIM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_SIM___024root___eval\n"); );
    // Init
    VlTriggerVec<9> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            VOTTER_SIM___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VOTTER_SIM___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("PipelinedOtter/OTTER_SIM.sv", 23, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VOTTER_SIM___024root___timing_resume(vlSelf);
                VOTTER_SIM___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VOTTER_SIM___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("PipelinedOtter/OTTER_SIM.sv", 23, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VOTTER_SIM___024root___eval_nba(vlSelf);
        }
    }
}

void VOTTER_SIM___024root___timing_resume(VOTTER_SIM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VOTTER_SIM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_SIM___024root___timing_resume\n"); );
    // Body
    if (vlSelf->__VactTriggered.at(8U)) {
        vlSelf->__VdlySched.resume();
    }
}

#ifdef VL_DEBUG
void VOTTER_SIM___024root___eval_debug_assertions(VOTTER_SIM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VOTTER_SIM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_SIM___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->CLK & 0xfeU))) {
        Verilated::overWidthError("CLK");}
}
#endif  // VL_DEBUG
