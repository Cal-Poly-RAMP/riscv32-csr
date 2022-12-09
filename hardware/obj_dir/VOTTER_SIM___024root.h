// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VOTTER_SIM.h for the primary calling header

#ifndef VERILATED_VOTTER_SIM___024ROOT_H_
#define VERILATED_VOTTER_SIM___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_threads.h"
#include "verilated_timing.h"

class VOTTER_SIM__Syms;

class VOTTER_SIM___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*3:0*/ OTTER_SIM__DOT__Otter__DOT__MCU__DOT__squash;
        CData/*0:0*/ __Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memWrite_EX__DOT__register__v0;
        CData/*0:0*/ __Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memWrite_EX__DOT__register__v0;
        CData/*0:0*/ __Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memRead2_EX__DOT__register__v0;
        CData/*0:0*/ __Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memRead2_EX__DOT__register__v0;
        CData/*0:0*/ __Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_pc_EX__DOT__register__v0;
        IData/*31:0*/ __Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_pc_EX__DOT__register__v0;
        IData/*31:0*/ OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__i;
        VlUnpacked<CData/*0:0*/, 1> OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memWrite_EX__DOT__register;
        VlUnpacked<CData/*0:0*/, 1> OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memRead2_EX__DOT__register;
        VlUnpacked<CData/*0:0*/, 1> OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memWrite_MEM__DOT__register;
        VlUnpacked<IData/*31:0*/, 1> OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_pc_EX__DOT__register;
        VlUnpacked<IData/*31:0*/, 1> OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IType_EX__DOT__register;
        VlUnpacked<IData/*31:0*/, 2> OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_pc_WB__DOT__register;
        IData/*31:0*/ OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR_REG;
        VlUnpacked<IData/*31:0*/, 32> OTTER_SIM__DOT__Otter__DOT__MCU__DOT__RegF__DOT__ram;
        VlUnpacked<CData/*0:0*/, 2> OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_regWrite_WB__DOT__register;
        VlUnpacked<CData/*1:0*/, 2> OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_rf_wr_sel_WB__DOT__register;
        CData/*3:0*/ OTTER_SIM__DOT__Otter__DOT__MCU__DOT__alu_fun;
        CData/*0:0*/ OTTER_SIM__DOT__Otter__DOT__MCU__DOT__mret;
        IData/*31:0*/ OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IType;
        IData/*31:0*/ OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR;
        IData/*31:0*/ OTTER_SIM__DOT__Otter__DOT__MCU__DOT__rs1;
        IData/*31:0*/ OTTER_SIM__DOT__Otter__DOT__MCU__DOT__rs2;
        VlUnpacked<IData/*31:0*/, 1> OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_out_WB__DOT__register;
        VlUnpacked<IData/*31:0*/, 1> OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_WB__DOT__register;
        CData/*0:0*/ __Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_rs2_MEM__DOT__register__v0;
        IData/*31:0*/ __Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_rs2_MEM__DOT__register__v0;
        CData/*0:0*/ OTTER_SIM__DOT__Otter__DOT__SPI_START;
        CData/*0:0*/ __Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memDIn2_MEM__DOT__register__v0;
        SData/*15:0*/ OTTER_SIM__DOT__LEDS;
        IData/*31:0*/ __Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memDIn2_MEM__DOT__register__v0;
        CData/*0:0*/ OTTER_SIM__DOT__Otter__DOT__IOBUS_wr;
        VlUnpacked<IData/*31:0*/, 1> OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_rs2_MEM__DOT__register;
        VlUnpacked<IData/*31:0*/, 262144> OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory;
        CData/*0:0*/ __Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register__v0;
        IData/*31:0*/ __Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register__v0;
        VlUnpacked<IData/*31:0*/, 1> OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_A_EX__DOT__register;
        VlUnpacked<IData/*31:0*/, 1> OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_B_EX__DOT__register;
        IData/*31:0*/ OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memOut2;
        IData/*31:0*/ __Vdly__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mie;
        IData/*31:0*/ OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mie;
        CData/*4:0*/ __Vdly__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__int_state;
        IData/*31:0*/ OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mstatus;
        IData/*31:0*/ OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mcause;
        IData/*31:0*/ __Vdly__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mstatus;
        IData/*31:0*/ __Vdly__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mcause;
        IData/*31:0*/ __Vdly__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mepc;
        CData/*4:0*/ OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__int_state;
        IData/*31:0*/ OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mepc;
        VlUnpacked<CData/*0:0*/, 1> OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_mret_EX__DOT__register;
        CData/*0:0*/ OTTER_SIM__DOT__Otter__DOT__MCU__DOT__flush;
        IData/*31:0*/ OTTER_SIM__DOT__Otter__DOT__MCU__DOT__next_pc;
        CData/*2:0*/ OTTER_SIM__DOT__Otter__DOT__MCU__DOT__pcSource;
        CData/*0:0*/ OTTER_SIM__DOT__Otter__DOT__MCU__DOT__stall;
        IData/*31:0*/ OTTER_SIM__DOT__Otter__DOT__MCU__DOT__pcPlus4;
        CData/*3:0*/ OTTER_SIM__DOT__Otter__DOT__MCU__DOT__HzHr__DOT__squash_next;
        QData/*37:0*/ OTTER_SIM__DOT__Otter__DOT__MCU__DOT__HzHr__DOT__fw_1;
        VlUnpacked<CData/*0:0*/, 1> OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_srcA_EX__DOT__register;
        IData/*31:0*/ OTTER_SIM__DOT__Otter__DOT__MCU__DOT__rs2_EX_fw;
        QData/*37:0*/ OTTER_SIM__DOT__Otter__DOT__MCU__DOT__HzHr__DOT__fw_2;
        VlUnpacked<IData/*31:0*/, 1> OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_rs2_EX__DOT__register;
        VlUnpacked<CData/*1:0*/, 1> OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_srcB_EX__DOT__register;
        CData/*0:0*/ __Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IType_EX__DOT__register__v0;
    };
    struct {
        IData/*31:0*/ __Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IType_EX__DOT__register__v0;
        CData/*0:0*/ __Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_pc_DE__DOT__register__v0;
        IData/*31:0*/ __Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_pc_DE__DOT__register__v0;
        CData/*1:0*/ OTTER_SIM__DOT__Otter__DOT__MCU__DOT__alu_srcB;
        CData/*0:0*/ OTTER_SIM__DOT__Otter__DOT__MCU__DOT__alu_srcA;
        CData/*0:0*/ OTTER_SIM__DOT__Otter__DOT__MCU__DOT__regWrite;
        CData/*1:0*/ OTTER_SIM__DOT__Otter__DOT__MCU__DOT__rf_wr_sel;
        CData/*0:0*/ OTTER_SIM__DOT__Otter__DOT__MCU__DOT__csr_en;
        CData/*0:0*/ OTTER_SIM__DOT__Otter__DOT__MCU__DOT____Vcellinp__Mem__MEM_WRITE2;
        CData/*0:0*/ OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memWrite2;
        VlUnpacked<CData/*0:0*/, 2> OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memRead2_MEM__DOT__register;
        VlUnpacked<IData/*31:0*/, 1> OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_pc_DE__DOT__register;
        CData/*0:0*/ OTTER_SIM__DOT__Otter__DOT__MCU__DOT__memRead2;
        CData/*0:0*/ OTTER_SIM__DOT__Otter__DOT__MCU__DOT__memWrite;
        CData/*0:0*/ __Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memRead2_MEM__DOT__register__v0;
        CData/*0:0*/ __Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memRead2_MEM__DOT__register__v0;
        CData/*0:0*/ __Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memRead2_MEM__DOT__register__v1;
        CData/*0:0*/ __Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memRead2_MEM__DOT__register__v1;
        CData/*0:0*/ __Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_regWrite_WB__DOT__register__v1;
        CData/*0:0*/ __Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_regWrite_WB__DOT__register__v1;
        QData/*37:0*/ OTTER_SIM__DOT__Otter__DOT__MCU__DOT__HzHr__DOT__fw_1_next;
        VlUnpacked<CData/*0:0*/, 1> OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_regWrite_EX__DOT__register;
        IData/*31:0*/ OTTER_SIM__DOT__Otter__DOT__MCU__DOT__alu_out;
        VlUnpacked<CData/*3:0*/, 1> OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_fun_EX__DOT__register;
        IData/*31:0*/ OTTER_SIM__DOT__Otter__DOT__MCU__DOT__pc;
        IData/*31:0*/ OTTER_SIM__DOT__Otter__DOT__MCU__DOT__next_pc_updated;
        IData/*31:0*/ OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mtvec;
        CData/*0:0*/ __Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_mret_EX__DOT__register__v0;
        CData/*0:0*/ __Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_mret_EX__DOT__register__v0;
        CData/*0:0*/ __Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_csr_en_EX__DOT__register__v0;
        CData/*0:0*/ __Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_csr_en_EX__DOT__register__v0;
        CData/*0:0*/ OTTER_SIM__DOT__Otter__DOT__MCU__DOT__flush_DE;
        VlUnpacked<CData/*0:0*/, 1> OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_csr_en_EX__DOT__register;
        VlUnpacked<IData/*31:0*/, 1> OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register;
        IData/*31:0*/ OTTER_SIM__DOT__Otter__DOT__MCU__DOT__A_EX_fw;
        IData/*31:0*/ OTTER_SIM__DOT__Otter__DOT__MCU__DOT__B_EX_fw;
        CData/*0:0*/ OTTER_SIM__DOT__Otter__DOT__MCU__DOT__BCG__DOT__br_eq;
        CData/*0:0*/ OTTER_SIM__DOT__Otter__DOT__MCU__DOT__BCG__DOT__br_lt;
        CData/*0:0*/ OTTER_SIM__DOT__Otter__DOT__MCU__DOT__BCG__DOT__br_ltu;
        CData/*7:0*/ OTTER_SIM__DOT__CATHODES;
        CData/*3:0*/ OTTER_SIM__DOT__ANODES;
        CData/*1:0*/ OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT__CathMod__DOT__r_disp_digit;
        CData/*3:0*/ OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES;
        CData/*3:0*/ OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS;
        CData/*3:0*/ OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS;
        CData/*3:0*/ OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS;
        SData/*15:0*/ OTTER_SIM__DOT__Otter__DOT__r_SSEG;
        CData/*0:0*/ OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__saved_mem_sign;
        CData/*1:0*/ OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__saved_mem_size;
        IData/*31:0*/ OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__saved_mem_addr2;
        IData/*31:0*/ OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__ioIn_buffer;
        IData/*31:0*/ OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memOut2_sliced;
        IData/*31:0*/ OTTER_SIM__DOT__Otter__DOT__MCU__DOT__MEM_DOUT2;
        IData/*31:0*/ OTTER_SIM__DOT__Otter__DOT__MCU__DOT__csr_out_EX;
        CData/*0:0*/ OTTER_SIM__DOT__SPI_SDO;
        CData/*7:0*/ OTTER_SIM__DOT__Otter__DOT__SPI__DOT__treg;
        CData/*1:0*/ OTTER_SIM__DOT__Otter__DOT__mtimecmp_set;
        QData/*63:0*/ OTTER_SIM__DOT__Otter__DOT__MTIMER__DOT__mtime;
        QData/*63:0*/ OTTER_SIM__DOT__Otter__DOT__MTIMER__DOT__mtimecmp;
        CData/*0:0*/ OTTER_SIM__DOT__TFT_DC;
        CData/*1:0*/ OTTER_SIM__DOT__Otter__DOT__SPI_CS_MEM;
        CData/*7:0*/ OTTER_SIM__DOT__Otter__DOT__SPI_TDATA;
        CData/*0:0*/ __Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_csr_out_WB__DOT__register__v1;
        IData/*31:0*/ __Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_csr_out_WB__DOT__register__v1;
    };
    struct {
        CData/*0:0*/ OTTER_SIM__DOT__Otter__DOT__SPI__DOT__clr;
        CData/*3:0*/ OTTER_SIM__DOT__Otter__DOT__SPI__DOT__nbit;
        CData/*1:0*/ OTTER_SIM__DOT__Otter__DOT__SPI__DOT__cur;
        CData/*0:0*/ OTTER_SIM__DOT__Otter__DOT__btn_int;
        CData/*7:0*/ OTTER_SIM__DOT__Otter__DOT__SPI_RDATA;
        CData/*1:0*/ OTTER_SIM__DOT__Otter__DOT__SPI__DOT__nxt;
        CData/*0:0*/ OTTER_SIM__DOT__Otter__DOT____Vcellinp__SPI__rstb;
        CData/*0:0*/ OTTER_SIM__DOT__SPI_SDI;
        CData/*0:0*/ OTTER_SIM__DOT__Otter__DOT__DB__DOT__s_count_rst;
        CData/*0:0*/ OTTER_SIM__DOT__Otter__DOT__DB__DOT__s_count_inc;
        CData/*7:0*/ OTTER_SIM__DOT__Otter__DOT__SPI__DOT__rreg;
        CData/*7:0*/ OTTER_SIM__DOT__Otter__DOT__DB__DOT__s_db_count;
        IData/*31:0*/ OTTER_SIM__DOT__Otter__DOT__DB__DOT__NS;
        IData/*31:0*/ OTTER_SIM__DOT__Otter__DOT__DB__DOT__PS;
        CData/*0:0*/ OTTER_SIM__DOT__Otter__DOT__spi_clk;
        CData/*0:0*/ OTTER_SIM__DOT__Otter__DOT__SPI_CS;
        CData/*0:0*/ OTTER_SIM__DOT__Otter__DOT__SPI__DOT__shift;
        CData/*0:0*/ __Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_csr_out_WB__DOT__register__v0;
        IData/*31:0*/ OTTER_SIM__DOT__Otter__DOT__SPIClockGen__DOT__count;
        IData/*31:0*/ __Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_csr_out_WB__DOT__register__v0;
        IData/*31:0*/ __Vdly__OTTER_SIM__DOT__Otter__DOT__SPIClockGen__DOT__count;
        VlUnpacked<IData/*31:0*/, 2> OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_csr_out_WB__DOT__register;
        CData/*4:0*/ __Vdlyvlsb__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v0;
        CData/*7:0*/ __Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v0;
        CData/*0:0*/ __Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v0;
        CData/*4:0*/ __Vdlyvlsb__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v1;
        CData/*7:0*/ __Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v1;
        CData/*0:0*/ __Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v1;
        CData/*4:0*/ __Vdlyvlsb__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v2;
        CData/*7:0*/ __Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v2;
        CData/*0:0*/ __Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v2;
        CData/*4:0*/ __Vdlyvlsb__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v3;
        CData/*7:0*/ __Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v3;
        CData/*0:0*/ __Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v3;
        CData/*4:0*/ __Vdlyvlsb__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v4;
        CData/*7:0*/ __Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v4;
        CData/*0:0*/ __Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v4;
        CData/*4:0*/ __Vdlyvlsb__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v5;
        CData/*7:0*/ __Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v5;
        CData/*0:0*/ __Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v5;
        CData/*4:0*/ __Vdlyvlsb__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v6;
        CData/*7:0*/ __Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v6;
        CData/*0:0*/ __Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v6;
        CData/*4:0*/ __Vdlyvlsb__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v7;
        CData/*7:0*/ __Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v7;
        CData/*0:0*/ __Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v7;
        CData/*4:0*/ __Vdlyvlsb__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v8;
        CData/*7:0*/ __Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v8;
        CData/*0:0*/ __Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v8;
        CData/*4:0*/ __Vdlyvlsb__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v9;
        CData/*7:0*/ __Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v9;
        CData/*0:0*/ __Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v9;
        CData/*4:0*/ __Vdlyvlsb__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v10;
        CData/*7:0*/ __Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v10;
        CData/*0:0*/ __Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v10;
        CData/*4:0*/ __Vdlyvlsb__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v11;
        CData/*7:0*/ __Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v11;
        CData/*0:0*/ __Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v11;
        IData/*17:0*/ __Vdlyvdim0__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v0;
        IData/*17:0*/ __Vdlyvdim0__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v1;
        IData/*17:0*/ __Vdlyvdim0__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v2;
        IData/*17:0*/ __Vdlyvdim0__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v3;
        IData/*17:0*/ __Vdlyvdim0__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v4;
        IData/*17:0*/ __Vdlyvdim0__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v5;
    };
    struct {
        IData/*17:0*/ __Vdlyvdim0__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v6;
        IData/*17:0*/ __Vdlyvdim0__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v7;
        IData/*17:0*/ __Vdlyvdim0__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v8;
        IData/*17:0*/ __Vdlyvdim0__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v9;
        IData/*17:0*/ __Vdlyvdim0__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v10;
        IData/*17:0*/ __Vdlyvdim0__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memory__v11;
        IData/*31:0*/ OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__j;
        CData/*3:0*/ OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__weA;
        VlUnpacked<IData/*31:0*/, 1> OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memDIn2_MEM__DOT__register;
        CData/*1:0*/ __Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_rf_wr_sel_EX__DOT__register__v0;
        CData/*0:0*/ __Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_rf_wr_sel_EX__DOT__register__v0;
        CData/*0:0*/ __Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_out_MEM__DOT__register__v0;
        IData/*31:0*/ __Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_out_MEM__DOT__register__v0;
        CData/*0:0*/ OTTER_SIM__DOT__Otter__DOT__SPI_DONE;
        VlUnpacked<CData/*1:0*/, 1> OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_rf_wr_sel_EX__DOT__register;
        CData/*0:0*/ OTTER_SIM__DOT__Otter__DOT__timer_int;
        CData/*0:0*/ OTTER_SIM__DOT__Otter__DOT__m_ext_int;
        IData/*31:0*/ OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__write_data;
        CData/*0:0*/ __Vdlyvset__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_MEM__DOT__register__v0;
        IData/*31:0*/ OTTER_SIM__DOT__Otter__DOT__IOBUS_in;
        IData/*31:0*/ __Vdlyvval__OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_MEM__DOT__register__v0;
        VlUnpacked<IData/*31:0*/, 1> OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_MEM__DOT__register;
        VlUnpacked<IData/*31:0*/, 1> OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_out_MEM__DOT__register;
        VL_IN8(CLK,0,0);
        CData/*0:0*/ OTTER_SIM__DOT__SPI_SCLK;
        CData/*0:0*/ OTTER_SIM__DOT__Otter__DOT__sclk;
        CData/*0:0*/ OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT__CathMod__DOT__s_clk_500;
        CData/*0:0*/ OTTER_SIM__DOT__Otter__DOT__s_load;
        CData/*0:0*/ OTTER_SIM__DOT__Otter__DOT__MCU__DOT__pcWrite;
        CData/*0:0*/ OTTER_SIM__DOT__Otter__DOT__MCU__DOT__memRead1;
        CData/*4:0*/ OTTER_SIM__DOT__Otter__DOT__SPI__DOT__mid;
        CData/*4:0*/ OTTER_SIM__DOT__Otter__DOT__SPI__DOT__cnt;
        CData/*0:0*/ __Vtrigrprev__TOP__CLK;
        CData/*0:0*/ __Vtrigrprev__TOP__OTTER_SIM__DOT__Otter__DOT__SPI__DOT__clr;
        CData/*0:0*/ __Vtrigrprev__TOP__OTTER_SIM__DOT__Otter__DOT__spi_clk;
        CData/*0:0*/ __Vtrigrprev__TOP__OTTER_SIM__DOT__Otter__DOT__sclk;
        CData/*0:0*/ __Vtrigrprev__TOP__OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT__CathMod__DOT__s_clk_500;
        CData/*0:0*/ __Vtrigrprev__TOP__OTTER_SIM__DOT__Otter__DOT____Vcellinp__SPI__rstb;
        CData/*0:0*/ __Vtrigrprev__TOP__OTTER_SIM__DOT__SPI_SCLK;
        CData/*0:0*/ __VactContinue;
        IData/*19:0*/ OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT__CathMod__DOT__clk_div_counter;
        IData/*31:0*/ OTTER_SIM__DOT__Otter__DOT__clkDIv__DOT__div_cnt;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*0:0*/, 23> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<9> __VactTriggered;
    VlTriggerVec<9> __VnbaTriggered;
    VlMTaskVertex __Vm_mtaskstate_10;
    VlMTaskVertex __Vm_mtaskstate_19;
    VlMTaskVertex __Vm_mtaskstate_23;
    VlMTaskVertex __Vm_mtaskstate_13;
    VlMTaskVertex __Vm_mtaskstate_5;
    VlMTaskVertex __Vm_mtaskstate_22;
    VlMTaskVertex __Vm_mtaskstate_18;
    VlMTaskVertex __Vm_mtaskstate_21;
    VlMTaskVertex __Vm_mtaskstate_16;
    VlMTaskVertex __Vm_mtaskstate_20;
    VlMTaskVertex __Vm_mtaskstate_24;
    VlMTaskVertex __Vm_mtaskstate_final__nba;

    // INTERNAL VARIABLES
    VOTTER_SIM__Syms* const vlSymsp;

    // CONSTRUCTORS
    VOTTER_SIM___024root(VOTTER_SIM__Syms* symsp, const char* name);
    ~VOTTER_SIM___024root();
    VL_UNCOPYABLE(VOTTER_SIM___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
