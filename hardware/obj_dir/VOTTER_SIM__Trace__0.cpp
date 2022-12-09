// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VOTTER_SIM__Syms.h"


void VOTTER_SIM___024root__trace_chg_sub_0(VOTTER_SIM___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VOTTER_SIM___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_SIM___024root__trace_chg_top_0\n"); );
    // Init
    VOTTER_SIM___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VOTTER_SIM___024root*>(voidSelf);
    VOTTER_SIM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VOTTER_SIM___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VOTTER_SIM___024root__trace_chg_sub_0(VOTTER_SIM___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VOTTER_SIM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_SIM___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgBit(oldp+0,(vlSelf->OTTER_SIM__DOT__Otter__DOT____Vcellinp__SPI__rstb));
        bufp->chgCData(oldp+1,(vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI__DOT__mid),5);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+2,(vlSelf->OTTER_SIM__DOT__Otter__DOT__sclk));
        bufp->chgBit(oldp+3,(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT__CathMod__DOT__s_clk_500));
        bufp->chgIData(oldp+4,(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT__CathMod__DOT__clk_div_counter),20);
        bufp->chgIData(oldp+5,(vlSelf->OTTER_SIM__DOT__Otter__DOT__clkDIv__DOT__div_cnt),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgCData(oldp+6,(vlSelf->OTTER_SIM__DOT__CATHODES),8);
        bufp->chgCData(oldp+7,(vlSelf->OTTER_SIM__DOT__ANODES),4);
        bufp->chgCData(oldp+8,(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT__CathMod__DOT__r_disp_digit),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+9,(vlSelf->OTTER_SIM__DOT__Otter__DOT__btn_int));
        bufp->chgBit(oldp+10,(vlSelf->OTTER_SIM__DOT__Otter__DOT__DB__DOT__s_count_rst));
        bufp->chgBit(oldp+11,(vlSelf->OTTER_SIM__DOT__Otter__DOT__DB__DOT__s_count_inc));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgSData(oldp+12,(vlSelf->OTTER_SIM__DOT__LEDS),16);
        bufp->chgBit(oldp+13,(vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI_START));
        bufp->chgCData(oldp+14,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__squash),4);
        bufp->chgIData(oldp+15,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_rs2_EX__DOT__register
                                [0U]),32);
        bufp->chgBit(oldp+16,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_regWrite_EX__DOT__register
                              [0U]));
        bufp->chgBit(oldp+17,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_srcA_EX__DOT__register
                              [0U]));
        bufp->chgIData(oldp+18,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_out_WB__DOT__register
                                [0U]),32);
        bufp->chgIData(oldp+19,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_WB__DOT__register
                                [0U]),32);
        bufp->chgBit(oldp+20,((1U & (~ ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__squash) 
                                        >> 1U)))));
        bufp->chgBit(oldp+21,((1U & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__squash) 
                                     >> 1U))));
        bufp->chgQData(oldp+22,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__HzHr__DOT__fw_1),38);
        bufp->chgQData(oldp+24,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__HzHr__DOT__fw_2),38);
        bufp->chgIData(oldp+26,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_WB__DOT__register[0]),32);
        bufp->chgIData(oldp+27,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_out_WB__DOT__register[0]),32);
        bufp->chgBit(oldp+28,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_srcA_EX__DOT__register[0]));
        bufp->chgBit(oldp+29,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_regWrite_EX__DOT__register[0]));
        bufp->chgIData(oldp+30,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_rs2_EX__DOT__register[0]),32);
        bufp->chgCData(oldp+31,((0x1fU & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_WB__DOT__register
                                          [0U] >> 7U))),5);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgBit(oldp+32,(vlSelf->OTTER_SIM__DOT__TFT_DC));
        bufp->chgIData(oldp+33,((IData)((vlSelf->OTTER_SIM__DOT__Otter__DOT__MTIMER__DOT__mtime 
                                         >> 0x20U))),32);
        bufp->chgIData(oldp+34,((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MTIMER__DOT__mtime)),32);
        bufp->chgCData(oldp+35,(vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI_CS_MEM),2);
        bufp->chgCData(oldp+36,(vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI_TDATA),8);
        bufp->chgQData(oldp+37,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MTIMER__DOT__mtime),64);
        bufp->chgQData(oldp+39,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MTIMER__DOT__mtimecmp),64);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgIData(oldp+41,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR),32);
        bufp->chgCData(oldp+42,((7U & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR 
                                       >> 0xcU))),3);
        bufp->chgIData(oldp+43,((0xfffff000U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR)),32);
        bufp->chgIData(oldp+44,((((- (IData)((vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR 
                                              >> 0x1fU))) 
                                  << 0xcU) | ((0xfe0U 
                                               & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR 
                                                  >> 0x14U)) 
                                              | (0x1fU 
                                                 & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR 
                                                    >> 7U))))),32);
        bufp->chgIData(oldp+45,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_A_EX__DOT__register
                                [0U]),32);
        bufp->chgIData(oldp+46,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_B_EX__DOT__register
                                [0U]),32);
        bufp->chgCData(oldp+47,((0x7fU & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR)),7);
        bufp->chgCData(oldp+48,((vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR 
                                 >> 0x19U)),7);
        bufp->chgIData(oldp+49,((vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR 
                                 >> 7U)),25);
        bufp->chgIData(oldp+50,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memOut2),32);
        bufp->chgIData(oldp+51,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_A_EX__DOT__register[0]),32);
        bufp->chgIData(oldp+52,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_B_EX__DOT__register[0]),32);
        bufp->chgCData(oldp+53,((0x1fU & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+54,((0x1fU & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR 
                                          >> 0x14U))),5);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[7U])) {
        bufp->chgIData(oldp+55,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_csr_out_WB__DOT__register
                                [0U]),32);
        bufp->chgIData(oldp+56,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_csr_out_WB__DOT__register[0]),32);
        bufp->chgIData(oldp+57,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_csr_out_WB__DOT__register[1]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[8U])) {
        bufp->chgSData(oldp+58,((((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS) 
                                  << 0xcU) | (((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS) 
                                               << 8U) 
                                              | (((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS) 
                                                  << 4U) 
                                                 | (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES))))),16);
        bufp->chgCData(oldp+59,(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS),4);
    }
}

void VOTTER_SIM___024root__trace_chg_sub_1(VOTTER_SIM___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VOTTER_SIM___024root__trace_chg_top_1(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_SIM___024root__trace_chg_top_1\n"); );
    // Init
    VOTTER_SIM___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VOTTER_SIM___024root*>(voidSelf);
    VOTTER_SIM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VOTTER_SIM___024root__trace_chg_sub_1((&vlSymsp->TOP), bufp);
}

void VOTTER_SIM___024root__trace_chg_sub_1(VOTTER_SIM___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VOTTER_SIM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_SIM___024root__trace_chg_sub_1\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 61);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[8U])) {
        bufp->chgCData(oldp+0,(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS),4);
        bufp->chgCData(oldp+1,(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS),4);
        bufp->chgCData(oldp+2,(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[9U])) {
        bufp->chgIData(oldp+3,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__MEM_DOUT2),32);
        bufp->chgBit(oldp+4,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__saved_mem_sign));
        bufp->chgCData(oldp+5,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__saved_mem_size),2);
        bufp->chgIData(oldp+6,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__saved_mem_addr2),32);
        bufp->chgIData(oldp+7,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__ioIn_buffer),32);
        bufp->chgIData(oldp+8,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memOut2_sliced),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xaU])) {
        bufp->chgIData(oldp+9,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__pc),32);
        bufp->chgCData(oldp+10,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_fun_EX__DOT__register
                                [0U]),4);
        bufp->chgCData(oldp+11,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_srcB_EX__DOT__register
                                [0U]),2);
        bufp->chgIData(oldp+12,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mtvec),32);
        bufp->chgIData(oldp+13,((0x3ffffU & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__pc 
                                             >> 2U))),18);
        bufp->chgCData(oldp+14,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_fun_EX__DOT__register[0]),4);
        bufp->chgCData(oldp+15,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_srcB_EX__DOT__register[0]),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xbU])) {
        bufp->chgBit(oldp+16,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memWrite_EX__DOT__register
                              [0U]));
        bufp->chgBit(oldp+17,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memRead2_EX__DOT__register
                              [0U]));
        bufp->chgIData(oldp+18,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_pc_EX__DOT__register
                                [0U]),32);
        bufp->chgIData(oldp+19,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IType_EX__DOT__register
                                [0U]),32);
        bufp->chgBit(oldp+20,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memWrite_MEM__DOT__register
                              [0U]));
        bufp->chgIData(oldp+21,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_pc_WB__DOT__register
                                [0U]),32);
        bufp->chgIData(oldp+22,(((IData)(4U) + vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_pc_WB__DOT__register
                                 [0U])),32);
        bufp->chgBit(oldp+23,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT____Vcellinp__Mem__MEM_WRITE2));
        bufp->chgIData(oldp+24,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__i),32);
        bufp->chgIData(oldp+25,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IType_EX__DOT__register[0]),32);
        bufp->chgBit(oldp+26,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memRead2_EX__DOT__register[0]));
        bufp->chgBit(oldp+27,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memWrite_EX__DOT__register[0]));
        bufp->chgBit(oldp+28,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memWrite_MEM__DOT__register[0]));
        bufp->chgIData(oldp+29,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_pc_EX__DOT__register[0]),32);
        bufp->chgIData(oldp+30,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_pc_WB__DOT__register[0]),32);
        bufp->chgIData(oldp+31,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_pc_WB__DOT__register[1]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xcU])) {
        bufp->chgIData(oldp+32,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__RegF__DOT__ram[0]),32);
        bufp->chgIData(oldp+33,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__RegF__DOT__ram[1]),32);
        bufp->chgIData(oldp+34,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__RegF__DOT__ram[2]),32);
        bufp->chgIData(oldp+35,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__RegF__DOT__ram[3]),32);
        bufp->chgIData(oldp+36,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__RegF__DOT__ram[4]),32);
        bufp->chgIData(oldp+37,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__RegF__DOT__ram[5]),32);
        bufp->chgIData(oldp+38,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__RegF__DOT__ram[6]),32);
        bufp->chgIData(oldp+39,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__RegF__DOT__ram[7]),32);
        bufp->chgIData(oldp+40,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__RegF__DOT__ram[8]),32);
        bufp->chgIData(oldp+41,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__RegF__DOT__ram[9]),32);
        bufp->chgIData(oldp+42,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__RegF__DOT__ram[10]),32);
        bufp->chgIData(oldp+43,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__RegF__DOT__ram[11]),32);
        bufp->chgIData(oldp+44,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__RegF__DOT__ram[12]),32);
        bufp->chgIData(oldp+45,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__RegF__DOT__ram[13]),32);
        bufp->chgIData(oldp+46,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__RegF__DOT__ram[14]),32);
        bufp->chgIData(oldp+47,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__RegF__DOT__ram[15]),32);
        bufp->chgIData(oldp+48,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__RegF__DOT__ram[16]),32);
        bufp->chgIData(oldp+49,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__RegF__DOT__ram[17]),32);
        bufp->chgIData(oldp+50,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__RegF__DOT__ram[18]),32);
        bufp->chgIData(oldp+51,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__RegF__DOT__ram[19]),32);
        bufp->chgIData(oldp+52,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__RegF__DOT__ram[20]),32);
        bufp->chgIData(oldp+53,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__RegF__DOT__ram[21]),32);
        bufp->chgIData(oldp+54,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__RegF__DOT__ram[22]),32);
        bufp->chgIData(oldp+55,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__RegF__DOT__ram[23]),32);
        bufp->chgIData(oldp+56,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__RegF__DOT__ram[24]),32);
        bufp->chgIData(oldp+57,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__RegF__DOT__ram[25]),32);
        bufp->chgIData(oldp+58,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__RegF__DOT__ram[26]),32);
        bufp->chgIData(oldp+59,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__RegF__DOT__ram[27]),32);
        bufp->chgIData(oldp+60,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__RegF__DOT__ram[28]),32);
        bufp->chgIData(oldp+61,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__RegF__DOT__ram[29]),32);
        bufp->chgIData(oldp+62,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__RegF__DOT__ram[30]),32);
        bufp->chgIData(oldp+63,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__RegF__DOT__ram[31]),32);
    }
}

void VOTTER_SIM___024root__trace_chg_sub_2(VOTTER_SIM___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VOTTER_SIM___024root__trace_chg_top_2(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_SIM___024root__trace_chg_top_2\n"); );
    // Init
    VOTTER_SIM___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VOTTER_SIM___024root*>(voidSelf);
    VOTTER_SIM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VOTTER_SIM___024root__trace_chg_sub_2((&vlSymsp->TOP), bufp);
}

void VOTTER_SIM___024root__trace_chg_sub_2(VOTTER_SIM___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VOTTER_SIM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_SIM___024root__trace_chg_sub_2\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 125);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xdU])) {
        bufp->chgCData(oldp+0,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__alu_fun),4);
        bufp->chgBit(oldp+1,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__mret));
        bufp->chgIData(oldp+2,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IType),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xeU])) {
        bufp->chgBit(oldp+3,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__memRead2));
        bufp->chgBit(oldp+4,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__memWrite));
        bufp->chgIData(oldp+5,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_pc_DE__DOT__register
                               [0U]),32);
        bufp->chgCData(oldp+6,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__alu_srcB),2);
        bufp->chgBit(oldp+7,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memRead2_MEM__DOT__register
                             [0U]));
        bufp->chgBit(oldp+8,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_regWrite_WB__DOT__register
                             [0U]));
        bufp->chgBit(oldp+9,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memRead2_MEM__DOT__register[0]));
        bufp->chgBit(oldp+10,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memRead2_MEM__DOT__register[1]));
        bufp->chgIData(oldp+11,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_pc_DE__DOT__register[0]),32);
        bufp->chgBit(oldp+12,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_regWrite_WB__DOT__register[0]));
        bufp->chgBit(oldp+13,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_regWrite_WB__DOT__register[1]));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xfU])) {
        bufp->chgBit(oldp+14,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__alu_srcA));
        bufp->chgCData(oldp+15,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__rf_wr_sel),2);
        bufp->chgBit(oldp+16,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__regWrite));
        bufp->chgBit(oldp+17,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__csr_en));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x10U])) {
        bufp->chgIData(oldp+18,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                                [0U]),32);
        bufp->chgIData(oldp+19,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__rs2_EX_fw),32);
        bufp->chgIData(oldp+20,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__A_EX_fw),32);
        bufp->chgIData(oldp+21,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__B_EX_fw),32);
        bufp->chgCData(oldp+22,((7U & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                                       [0U] >> 0xcU))),3);
        bufp->chgCData(oldp+23,((0x7fU & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                                 [0U])),7);
        bufp->chgSData(oldp+24,((vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                                 [0U] >> 0x14U)),12);
        bufp->chgCData(oldp+25,((3U & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                                       [0U] >> 0xcU))),2);
        bufp->chgCData(oldp+26,((0x1fU & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                                          [0U] >> 0xfU))),5);
        bufp->chgBit(oldp+27,((1U & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                                     [0U] >> 0xeU))));
        bufp->chgCData(oldp+28,((0x1fU & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                                          [0U] >> 0x14U))),5);
        bufp->chgCData(oldp+29,((0x1fU & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                                          [0U] >> 7U))),5);
        bufp->chgIData(oldp+30,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register[0]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x11U])) {
        bufp->chgCData(oldp+31,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__pcSource),3);
        bufp->chgBit(oldp+32,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__BCG__DOT__br_eq));
        bufp->chgBit(oldp+33,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__BCG__DOT__br_lt));
        bufp->chgBit(oldp+34,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__BCG__DOT__br_ltu));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x12U])) {
        bufp->chgBit(oldp+35,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_mret_EX__DOT__register
                              [0U]));
        bufp->chgBit(oldp+36,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_csr_en_EX__DOT__register
                              [0U]));
        bufp->chgIData(oldp+37,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__csr_out_EX),32);
        bufp->chgBit(oldp+38,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__flush));
        bufp->chgBit(oldp+39,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__flush_DE));
        bufp->chgCData(oldp+40,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__int_state),5);
        bufp->chgIData(oldp+41,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mstatus),32);
        bufp->chgIData(oldp+42,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mie),32);
        bufp->chgIData(oldp+43,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mepc),32);
        bufp->chgIData(oldp+44,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mcause),32);
        bufp->chgBit(oldp+45,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_csr_en_EX__DOT__register[0]));
        bufp->chgBit(oldp+46,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_mret_EX__DOT__register[0]));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x13U])) {
        bufp->chgBit(oldp+47,(vlSelf->OTTER_SIM__DOT__Otter__DOT__m_ext_int));
        bufp->chgCData(oldp+48,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_rf_wr_sel_EX__DOT__register
                                [0U]),2);
        bufp->chgIData(oldp+49,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_MEM__DOT__register
                                [0U]),32);
        bufp->chgIData(oldp+50,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memDIn2_MEM__DOT__register
                                [0U]),32);
        bufp->chgCData(oldp+51,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_rf_wr_sel_WB__DOT__register
                                [0U]),2);
        bufp->chgCData(oldp+52,((3U & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_MEM__DOT__register
                                       [0U] >> 0xcU))),2);
        bufp->chgBit(oldp+53,((1U & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_MEM__DOT__register
                                     [0U] >> 0xeU))));
        bufp->chgIData(oldp+54,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_MEM__DOT__register[0]),32);
        bufp->chgIData(oldp+55,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memDIn2_MEM__DOT__register[0]),32);
        bufp->chgCData(oldp+56,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_rf_wr_sel_EX__DOT__register[0]),2);
        bufp->chgCData(oldp+57,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_rf_wr_sel_WB__DOT__register[0]),2);
        bufp->chgCData(oldp+58,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_rf_wr_sel_WB__DOT__register[1]),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x14U])) {
        bufp->chgIData(oldp+59,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_out_MEM__DOT__register
                                [0U]),32);
    }
}

void VOTTER_SIM___024root__trace_chg_sub_3(VOTTER_SIM___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VOTTER_SIM___024root__trace_chg_top_3(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_SIM___024root__trace_chg_top_3\n"); );
    // Init
    VOTTER_SIM___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VOTTER_SIM___024root*>(voidSelf);
    VOTTER_SIM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VOTTER_SIM___024root__trace_chg_sub_3((&vlSymsp->TOP), bufp);
}

void VOTTER_SIM___024root__trace_chg_sub_3(VOTTER_SIM___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VOTTER_SIM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_SIM___024root__trace_chg_sub_3\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 185);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x14U])) {
        bufp->chgBit(oldp+0,(vlSelf->OTTER_SIM__DOT__Otter__DOT__timer_int));
        bufp->chgIData(oldp+1,((0x3ffffU & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_out_MEM__DOT__register
                                            [0U] >> 2U))),18);
        bufp->chgIData(oldp+2,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_out_MEM__DOT__register[0]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x15U])) {
        bufp->chgBit(oldp+3,(vlSelf->OTTER_SIM__DOT__Otter__DOT__IOBUS_wr));
        bufp->chgCData(oldp+4,(vlSelf->OTTER_SIM__DOT__Otter__DOT__mtimecmp_set),2);
        bufp->chgIData(oldp+5,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__write_data),32);
        bufp->chgBit(oldp+6,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memWrite2));
        bufp->chgCData(oldp+7,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__weA),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x16U])) {
        bufp->chgBit(oldp+8,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__stall));
        bufp->chgIData(oldp+9,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__next_pc),32);
        bufp->chgIData(oldp+10,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__next_pc_updated),32);
        bufp->chgIData(oldp+11,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__pcPlus4),32);
        bufp->chgBit(oldp+12,((1U & (~ (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__stall)))));
        bufp->chgCData(oldp+13,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__HzHr__DOT__squash_next),4);
    }
    bufp->chgBit(oldp+14,(vlSelf->CLK));
    bufp->chgBit(oldp+15,(vlSelf->OTTER_SIM__DOT__SPI_SCLK));
    bufp->chgBit(oldp+16,((1U & ((~ ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI_CS_MEM) 
                                     >> 1U)) | (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI_CS)))));
    bufp->chgBit(oldp+17,((1U & ((~ (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI_CS_MEM)) 
                                 | (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI_CS)))));
    bufp->chgBit(oldp+18,(vlSelf->OTTER_SIM__DOT__SPI_SDO));
    bufp->chgSData(oldp+19,(vlSelf->OTTER_SIM__DOT__Otter__DOT__r_SSEG),16);
    bufp->chgIData(oldp+20,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_rs2_MEM__DOT__register
                            [0U]),32);
    bufp->chgIData(oldp+21,(vlSelf->OTTER_SIM__DOT__Otter__DOT__IOBUS_in),32);
    bufp->chgBit(oldp+22,(vlSelf->OTTER_SIM__DOT__Otter__DOT__spi_clk));
    bufp->chgBit(oldp+23,(vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI_CS));
    bufp->chgBit(oldp+24,(vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI_DONE));
    bufp->chgCData(oldp+25,(vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI_RDATA),8);
    bufp->chgIData(oldp+26,(vlSelf->OTTER_SIM__DOT__Otter__DOT__DB__DOT__NS),32);
    bufp->chgIData(oldp+27,(vlSelf->OTTER_SIM__DOT__Otter__DOT__DB__DOT__PS),32);
    bufp->chgCData(oldp+28,(vlSelf->OTTER_SIM__DOT__Otter__DOT__DB__DOT__s_db_count),8);
    bufp->chgIData(oldp+29,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__rs1),32);
    bufp->chgIData(oldp+30,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__rs2),32);
    bufp->chgIData(oldp+31,((vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__A_EX_fw 
                             + vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IType_EX__DOT__register
                             [0U])),32);
    bufp->chgIData(oldp+32,((vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_pc_EX__DOT__register
                             [0U] + (((- (IData)((vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                                                  [0U] 
                                                  >> 0x1fU))) 
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
                                                           >> 7U))))))),32);
    bufp->chgIData(oldp+33,((vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_pc_EX__DOT__register
                             [0U] + (((- (IData)((vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                                                  [0U] 
                                                  >> 0x1fU))) 
                                      << 0x14U) | (
                                                   (0xff000U 
                                                    & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                                                    [0U]) 
                                                   | ((0x800U 
                                                       & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                                                          [0U] 
                                                          >> 9U)) 
                                                      | (0x7feU 
                                                         & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                                                            [0U] 
                                                            >> 0x14U))))))),32);
    bufp->chgBit(oldp+34,(((0x40000U <= vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__pc) 
                           | ((0x40000U <= vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_out_MEM__DOT__register
                               [0U]) | ((0U != (3U 
                                                & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__pc)) 
                                        | (0U != (3U 
                                                  & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_out_MEM__DOT__register
                                                  [0U])))))));
    bufp->chgIData(oldp+35,(((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__alu_srcA)
                              ? (0xfffff000U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR)
                              : vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__rs1)),32);
    bufp->chgIData(oldp+36,(((2U & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__alu_srcB))
                              ? ((1U & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__alu_srcB))
                                  ? vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_pc_DE__DOT__register
                                 [0U] : (((- (IData)(
                                                     (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR 
                                                      >> 0x1fU))) 
                                          << 0xcU) 
                                         | ((0xfe0U 
                                             & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR 
                                                  >> 7U)))))
                              : ((1U & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__alu_srcB))
                                  ? vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IType
                                  : vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__rs2))),32);
    bufp->chgIData(oldp+37,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__alu_out),32);
    bufp->chgIData(oldp+38,(((2U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_rf_wr_sel_WB__DOT__register
                              [0U]) ? ((1U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_rf_wr_sel_WB__DOT__register
                                        [0U]) ? vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_out_WB__DOT__register
                                       [0U] : vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__MEM_DOUT2)
                              : ((1U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_rf_wr_sel_WB__DOT__register
                                  [0U]) ? vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR_REG
                                  : ((IData)(4U) + 
                                     vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_pc_WB__DOT__register
                                     [0U])))),32);
    bufp->chgBit(oldp+39,(((~ ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__squash) 
                               >> 1U)) & (0x2bcU == 
                                          vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_pc_EX__DOT__register
                                          [0U]))));
    bufp->chgBit(oldp+40,(((~ ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__squash) 
                               >> 1U)) & (0xc8U == 
                                          vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_pc_EX__DOT__register
                                          [0U]))));
    bufp->chgQData(oldp+41,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__HzHr__DOT__fw_1_next),38);
    bufp->chgIData(oldp+43,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__j),32);
    bufp->chgIData(oldp+44,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_rs2_MEM__DOT__register[0]),32);
    bufp->chgBit(oldp+45,(((~ ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__squash) 
                               >> 3U)) & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_regWrite_WB__DOT__register
                           [0U])));
    bufp->chgCData(oldp+46,(vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI__DOT__cur),2);
    bufp->chgCData(oldp+47,(vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI__DOT__nxt),2);
    bufp->chgCData(oldp+48,(vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI__DOT__treg),8);
    bufp->chgCData(oldp+49,(vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI__DOT__rreg),8);
    bufp->chgCData(oldp+50,(vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI__DOT__nbit),4);
    bufp->chgCData(oldp+51,(vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI__DOT__cnt),5);
    bufp->chgBit(oldp+52,(vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI__DOT__shift));
    bufp->chgBit(oldp+53,(vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI__DOT__clr));
    bufp->chgIData(oldp+54,(vlSelf->OTTER_SIM__DOT__Otter__DOT__SPIClockGen__DOT__count),32);
}

void VOTTER_SIM___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_SIM___024root__trace_cleanup\n"); );
    // Init
    VOTTER_SIM___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VOTTER_SIM___024root*>(voidSelf);
    VOTTER_SIM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xaU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xbU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xcU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xeU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xfU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x10U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x11U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x12U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x13U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x14U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x15U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x16U] = 0U;
}
