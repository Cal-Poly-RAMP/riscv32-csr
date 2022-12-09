// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VOTTER_SIM__Syms.h"


VL_ATTR_COLD void VOTTER_SIM___024root__trace_init_sub__TOP__0(VOTTER_SIM___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VOTTER_SIM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_SIM___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+199,"CLK", false,-1);
    tracep->pushNamePrefix("OTTER_SIM ");
    tracep->declBit(c+199,"CLK", false,-1);
    tracep->declBit(c+240,"SCLK", false,-1);
    tracep->declBit(c+241,"BTNL", false,-1);
    tracep->declBit(c+241,"timer_int", false,-1);
    tracep->declBit(c+241,"m_ext_int", false,-1);
    tracep->declBit(c+241,"BTNC", false,-1);
    tracep->declBus(c+242,"SWITCHES", false,-1, 15,0);
    tracep->declBus(c+13,"LEDS", false,-1, 15,0);
    tracep->declBus(c+7,"CATHODES", false,-1, 7,0);
    tracep->declBus(c+8,"ANODES", false,-1, 3,0);
    tracep->declBit(c+243,"SPI_SDI", false,-1);
    tracep->declBit(c+200,"SPI_SCLK", false,-1);
    tracep->declBit(c+201,"SPI_SD_CS", false,-1);
    tracep->declBit(c+202,"SPI_TFT_CS", false,-1);
    tracep->declBit(c+203,"SPI_SDO", false,-1);
    tracep->declBit(c+33,"TFT_DC", false,-1);
    tracep->pushNamePrefix("Otter ");
    tracep->declBit(c+199,"CLK", false,-1);
    tracep->declBit(c+241,"BTNL", false,-1);
    tracep->declBit(c+241,"BTNC", false,-1);
    tracep->declBus(c+242,"SWITCHES", false,-1, 15,0);
    tracep->declBit(c+243,"SPI_SDI", false,-1);
    tracep->declBus(c+13,"LEDS", false,-1, 15,0);
    tracep->declBus(c+7,"CATHODES", false,-1, 7,0);
    tracep->declBus(c+8,"ANODES", false,-1, 3,0);
    tracep->declBit(c+200,"SPI_SCLK", false,-1);
    tracep->declBit(c+202,"SPI_TFT_CS", false,-1);
    tracep->declBit(c+201,"SPI_SD_CS", false,-1);
    tracep->declBit(c+33,"TFT_DC", false,-1);
    tracep->declBit(c+203,"SPI_SDO", false,-1);
    tracep->declBus(c+244,"SWITCHES_AD", false,-1, 31,0);
    tracep->declBus(c+245,"SPI_RECEIVE_AD", false,-1, 31,0);
    tracep->declBus(c+246,"SPI_DONE_AD", false,-1, 31,0);
    tracep->declBus(c+247,"MTIME_L_AD", false,-1, 31,0);
    tracep->declBus(c+248,"MTIME_H_AD", false,-1, 31,0);
    tracep->declBus(c+249,"LEDS_AD", false,-1, 31,0);
    tracep->declBus(c+250,"SSEG_AD", false,-1, 31,0);
    tracep->declBus(c+251,"SPI_TRANSMIT_AD", false,-1, 31,0);
    tracep->declBus(c+252,"SPI_START_AD", false,-1, 31,0);
    tracep->declBus(c+253,"SPI_CS_AD", false,-1, 31,0);
    tracep->declBus(c+254,"TFT_DC_AD", false,-1, 31,0);
    tracep->declBus(c+255,"MTIMECMP_L_AD", false,-1, 31,0);
    tracep->declBus(c+256,"MTIMECMP_H_AD", false,-1, 31,0);
    tracep->declBit(c+10,"s_interrupt", false,-1);
    tracep->declBit(c+10,"btn_int", false,-1);
    tracep->declBit(c+241,"s_reset", false,-1);
    tracep->declBit(c+257,"s_load", false,-1);
    tracep->declBit(c+3,"sclk", false,-1);
    tracep->declBus(c+204,"r_SSEG", false,-1, 15,0);
    tracep->declBus(c+205,"IOBUS_out", false,-1, 31,0);
    tracep->declBus(c+206,"IOBUS_in", false,-1, 31,0);
    tracep->declBus(c+184,"IOBUS_addr", false,-1, 31,0);
    tracep->declBit(c+188,"IOBUS_wr", false,-1);
    tracep->declBit(c+185,"timer_int", false,-1);
    tracep->declBit(c+172,"m_ext_int", false,-1);
    tracep->declBus(c+34,"mtime_h", false,-1, 31,0);
    tracep->declBus(c+35,"mtime_l", false,-1, 31,0);
    tracep->declBus(c+189,"mtimecmp_set", false,-1, 1,0);
    tracep->declBit(c+207,"spi_clk", false,-1);
    tracep->declBus(c+36,"SPI_CS_MEM", false,-1, 1,0);
    tracep->declBit(c+208,"SPI_CS", false,-1);
    tracep->declBit(c+14,"SPI_START", false,-1);
    tracep->declBit(c+209,"SPI_DONE", false,-1);
    tracep->declBus(c+37,"SPI_TDATA", false,-1, 7,0);
    tracep->declBus(c+210,"SPI_RDATA", false,-1, 7,0);
    tracep->pushNamePrefix("DB ");
    tracep->declBit(c+3,"CLK", false,-1);
    tracep->declBit(c+241,"BTN", false,-1);
    tracep->declBit(c+10,"DB_BTN", false,-1);
    tracep->declBus(c+258,"c_LOW_GOING_HIGH_CLOCKS", false,-1, 7,0);
    tracep->declBus(c+259,"c_HIGH_GOING_LOW_CLOCKS", false,-1, 7,0);
    tracep->declBus(c+260,"c_ONE_SHOT_CLOCKS", false,-1, 7,0);
    tracep->declBus(c+211,"NS", false,-1, 31,0);
    tracep->declBus(c+212,"PS", false,-1, 31,0);
    tracep->declBus(c+213,"s_db_count", false,-1, 7,0);
    tracep->declBit(c+11,"s_count_rst", false,-1);
    tracep->declBit(c+12,"s_count_inc", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MCU ");
    tracep->declBit(c+3,"CLK", false,-1);
    tracep->declBit(c+185,"timer_int", false,-1);
    tracep->declBit(c+172,"m_ext_int", false,-1);
    tracep->declBit(c+241,"RST", false,-1);
    tracep->declBus(c+206,"IOBUS_IN", false,-1, 31,0);
    tracep->declBus(c+205,"IOBUS_OUT", false,-1, 31,0);
    tracep->declBus(c+184,"IOBUS_ADDR", false,-1, 31,0);
    tracep->declBit(c+188,"IOBUS_WR", false,-1);
    tracep->declBus(c+15,"squash", false,-1, 3,0);
    tracep->declBit(c+193,"stall", false,-1);
    tracep->declBus(c+42,"IR", false,-1, 31,0);
    tracep->declBus(c+214,"rs1", false,-1, 31,0);
    tracep->declBus(c+215,"rs2", false,-1, 31,0);
    tracep->declBus(c+156,"pcSource", false,-1, 2,0);
    tracep->declBit(c+261,"pcWrite", false,-1);
    tracep->declBus(c+70,"pc", false,-1, 31,0);
    tracep->declBus(c+194,"next_pc", false,-1, 31,0);
    tracep->declBus(c+195,"next_pc_updated", false,-1, 31,0);
    tracep->declBus(c+196,"pcPlus4", false,-1, 31,0);
    tracep->declBus(c+216,"jalr", false,-1, 31,0);
    tracep->declBus(c+217,"branch", false,-1, 31,0);
    tracep->declBus(c+218,"jal", false,-1, 31,0);
    tracep->declBus(c+64,"MEM_DOUT2", false,-1, 31,0);
    tracep->declBit(c+262,"memRead1", false,-1);
    tracep->declBit(c+128,"memRead2", false,-1);
    tracep->declBit(c+129,"memWrite", false,-1);
    tracep->declBus(c+130,"pc_DE", false,-1, 31,0);
    tracep->declBus(c+43,"funct3", false,-1, 2,0);
    tracep->declBus(c+125,"alu_fun", false,-1, 3,0);
    tracep->declBit(c+139,"alu_srcA", false,-1);
    tracep->declBus(c+131,"alu_srcB", false,-1, 1,0);
    tracep->declBus(c+140,"rf_wr_sel", false,-1, 1,0);
    tracep->declBit(c+141,"regWrite", false,-1);
    tracep->declBit(c+142,"csr_en", false,-1);
    tracep->declBit(c+126,"mret", false,-1);
    tracep->declBus(c+263,"CSR_REG", false,-1, 31,0);
    tracep->declBit(c+219,"ERR", false,-1);
    tracep->declBus(c+44,"UType", false,-1, 31,0);
    tracep->declBus(c+127,"IType", false,-1, 31,0);
    tracep->declBus(c+45,"SType", false,-1, 31,0);
    tracep->declBus(c+220,"A", false,-1, 31,0);
    tracep->declBus(c+221,"B", false,-1, 31,0);
    tracep->declBit(c+160,"mret_EX", false,-1);
    tracep->declBit(c+77,"memWrite_EX", false,-1);
    tracep->declBit(c+78,"memRead2_EX", false,-1);
    tracep->declBus(c+79,"pc_EX", false,-1, 31,0);
    tracep->declBus(c+143,"IR_EX", false,-1, 31,0);
    tracep->declBus(c+222,"alu_out", false,-1, 31,0);
    tracep->declBus(c+16,"rs2_EX", false,-1, 31,0);
    tracep->declBus(c+144,"rs2_EX_fw", false,-1, 31,0);
    tracep->declBus(c+46,"A_EX", false,-1, 31,0);
    tracep->declBus(c+145,"A_EX_fw", false,-1, 31,0);
    tracep->declBus(c+47,"B_EX", false,-1, 31,0);
    tracep->declBus(c+146,"B_EX_fw", false,-1, 31,0);
    tracep->declBus(c+71,"alu_fun_EX", false,-1, 3,0);
    tracep->declBus(c+80,"IType_EX", false,-1, 31,0);
    tracep->declBit(c+17,"regWrite_EX", false,-1);
    tracep->declBit(c+18,"alu_srcA_EX", false,-1);
    tracep->declBus(c+72,"alu_srcB_EX", false,-1, 1,0);
    tracep->declBus(c+173,"rf_wr_sel_EX", false,-1, 1,0);
    tracep->declBit(c+161,"csr_en_EX", false,-1);
    tracep->declBus(c+162,"csr_out_EX", false,-1, 31,0);
    tracep->declBit(c+163,"flush", false,-1);
    tracep->declBit(c+164,"flush_DE", false,-1);
    tracep->declBus(c+184,"alu_out_MEM", false,-1, 31,0);
    tracep->declBus(c+205,"rs2_MEM", false,-1, 31,0);
    tracep->declBus(c+174,"IR_MEM", false,-1, 31,0);
    tracep->declBit(c+81,"memWrite_MEM", false,-1);
    tracep->declBit(c+132,"memRead2_MEM", false,-1);
    tracep->declBus(c+175,"memDIn2", false,-1, 31,0);
    tracep->declBus(c+176,"rf_wr_sel_WB", false,-1, 1,0);
    tracep->declBit(c+133,"regWrite_WB", false,-1);
    tracep->declBus(c+19,"alu_out_WB", false,-1, 31,0);
    tracep->declBus(c+20,"IR_WB", false,-1, 31,0);
    tracep->declBus(c+82,"pc_WB", false,-1, 31,0);
    tracep->declBus(c+56,"csr_out_WB", false,-1, 31,0);
    tracep->declBus(c+83,"pcPlus4_WB", false,-1, 31,0);
    tracep->declBus(c+223,"wd", false,-1, 31,0);
    tracep->declBit(c+21,"EX_VALID", false,-1);
    tracep->declBit(c+224,"FAIL", false,-1);
    tracep->declBit(c+225,"FINISH", false,-1);
    tracep->pushNamePrefix("ALU_A ");
    tracep->declBus(c+264,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+214,"ZERO", false,-1, 31,0);
    tracep->declBus(c+44,"ONE", false,-1, 31,0);
    tracep->declBit(c+139,"SEL", false,-1);
    tracep->declBus(c+220,"MUX_OUT", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_B ");
    tracep->declBus(c+264,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+215,"A", false,-1, 31,0);
    tracep->declBus(c+127,"B", false,-1, 31,0);
    tracep->declBus(c+45,"C", false,-1, 31,0);
    tracep->declBus(c+130,"D", false,-1, 31,0);
    tracep->declBus(c+131,"sel", false,-1, 1,0);
    tracep->declBus(c+221,"MUX_OUT", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("BCG ");
    tracep->declBus(c+145,"rs1", false,-1, 31,0);
    tracep->declBus(c+146,"rs2", false,-1, 31,0);
    tracep->declBus(c+147,"funct3", false,-1, 2,0);
    tracep->declBus(c+148,"op", false,-1, 6,0);
    tracep->declBit(c+22,"squash_EX", false,-1);
    tracep->declBus(c+156,"pcSource", false,-1, 2,0);
    tracep->declBus(c+148,"OPCODE", false,-1, 6,0);
    tracep->declBit(c+157,"br_eq", false,-1);
    tracep->declBit(c+158,"br_lt", false,-1);
    tracep->declBit(c+159,"br_ltu", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CSR ");
    tracep->declBit(c+3,"CLK", false,-1);
    tracep->declBit(c+161,"enable", false,-1);
    tracep->declBus(c+149,"addr", false,-1, 11,0);
    tracep->declBus(c+150,"mode_sel", false,-1, 1,0);
    tracep->declBus(c+151,"immediate", false,-1, 4,0);
    tracep->declBit(c+152,"immediate_sel", false,-1);
    tracep->declBus(c+145,"rs1", false,-1, 31,0);
    tracep->declBit(c+185,"timer_int", false,-1);
    tracep->declBit(c+172,"m_ext_int", false,-1);
    tracep->declBit(c+197,"stall", false,-1);
    tracep->declBit(c+160,"mret", false,-1);
    tracep->declBus(c+156,"pcSource", false,-1, 2,0);
    tracep->declBus(c+194,"next_pc", false,-1, 31,0);
    tracep->declBit(c+163,"flush", false,-1);
    tracep->declBus(c+162,"read_data", false,-1, 31,0);
    tracep->declBus(c+195,"next_pc_updated", false,-1, 31,0);
    tracep->declBus(c+165,"int_state", false,-1, 4,0);
    tracep->declBus(c+166,"mstatus", false,-1, 31,0);
    tracep->declBus(c+167,"mie", false,-1, 31,0);
    tracep->declBus(c+73,"mtvec", false,-1, 31,0);
    tracep->declBus(c+168,"mepc", false,-1, 31,0);
    tracep->declBus(c+169,"mcause", false,-1, 31,0);
    tracep->declBus(c+190,"write_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CUD ");
    tracep->declBus(c+48,"op", false,-1, 6,0);
    tracep->declBus(c+43,"funct3", false,-1, 2,0);
    tracep->declBus(c+49,"funct7", false,-1, 6,0);
    tracep->declBus(c+125,"alu_fun", false,-1, 3,0);
    tracep->declBit(c+139,"alu_srcA", false,-1);
    tracep->declBus(c+131,"alu_srcB", false,-1, 1,0);
    tracep->declBus(c+140,"rf_wr_sel", false,-1, 1,0);
    tracep->declBit(c+129,"memWrite", false,-1);
    tracep->declBit(c+141,"regWrite", false,-1);
    tracep->declBit(c+128,"memRead2", false,-1);
    tracep->declBit(c+142,"csr_en", false,-1);
    tracep->declBit(c+126,"mret", false,-1);
    tracep->declBus(c+48,"OPCODE", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("HzHr ");
    tracep->declBit(c+3,"CLK", false,-1);
    tracep->declBit(c+17,"regWrite", false,-1);
    tracep->declBit(c+18,"alu_srcA", false,-1);
    tracep->declBus(c+148,"op", false,-1, 6,0);
    tracep->declBus(c+156,"pcSource", false,-1, 2,0);
    tracep->declBus(c+72,"alu_srcB", false,-1, 1,0);
    tracep->declBus(c+151,"addr1", false,-1, 4,0);
    tracep->declBus(c+153,"addr2", false,-1, 4,0);
    tracep->declBus(c+154,"wr_addr", false,-1, 4,0);
    tracep->declBus(c+46,"alu_A", false,-1, 31,0);
    tracep->declBus(c+47,"alu_B", false,-1, 31,0);
    tracep->declBus(c+16,"rs2", false,-1, 31,0);
    tracep->declBus(c+222,"alu_out", false,-1, 31,0);
    tracep->declBus(c+64,"mem_out", false,-1, 31,0);
    tracep->declBus(c+162,"csr_out", false,-1, 31,0);
    tracep->declBit(c+161,"csr_en", false,-1);
    tracep->declBit(c+163,"flush", false,-1);
    tracep->declBit(c+160,"mret", false,-1);
    tracep->declBus(c+145,"alu_A_fw", false,-1, 31,0);
    tracep->declBus(c+146,"alu_B_fw", false,-1, 31,0);
    tracep->declBus(c+144,"rs2_fw", false,-1, 31,0);
    tracep->declBit(c+193,"stall", false,-1);
    tracep->declBus(c+15,"squash", false,-1, 3,0);
    tracep->declBus(c+148,"OPCODE", false,-1, 6,0);
    tracep->declQuad(c+23,"fw_1", false,-1, 37,0);
    tracep->declQuad(c+226,"fw_1_next", false,-1, 37,0);
    tracep->declQuad(c+25,"fw_2", false,-1, 37,0);
    tracep->declQuad(c+23,"fw_2_next", false,-1, 37,0);
    tracep->declBus(c+198,"squash_next", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IG ");
    tracep->declBus(c+50,"IR", false,-1, 31,7);
    tracep->declBus(c+44,"UType", false,-1, 31,0);
    tracep->declBus(c+127,"IType", false,-1, 31,0);
    tracep->declBus(c+45,"SType", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Mem ");
    tracep->declBus(c+265,"ACTUAL_WIDTH", false,-1, 31,0);
    tracep->declBus(c+266,"NUM_COL", false,-1, 31,0);
    tracep->declBus(c+267,"COL_WIDTH", false,-1, 31,0);
    tracep->declBus(c+70,"MEM_ADDR1", false,-1, 31,0);
    tracep->declBus(c+184,"MEM_ADDR2", false,-1, 31,0);
    tracep->declBit(c+3,"MEM_CLK", false,-1);
    tracep->declBus(c+175,"MEM_DIN2", false,-1, 31,0);
    tracep->declBit(c+84,"MEM_WRITE2", false,-1);
    tracep->declBit(c+193,"MEM_READ1", false,-1);
    tracep->declBit(c+132,"MEM_READ2", false,-1);
    tracep->declBus(c+206,"IO_IN", false,-1, 31,0);
    tracep->declBit(c+219,"ERR", false,-1);
    tracep->declBus(c+177,"MEM_SIZE", false,-1, 1,0);
    tracep->declBit(c+178,"MEM_SIGN", false,-1);
    tracep->declBus(c+42,"MEM_DOUT1", false,-1, 31,0);
    tracep->declBus(c+64,"MEM_DOUT2", false,-1, 31,0);
    tracep->declBit(c+188,"IO_WR", false,-1);
    tracep->declBit(c+65,"saved_mem_sign", false,-1);
    tracep->declBus(c+66,"saved_mem_size", false,-1, 1,0);
    tracep->declBus(c+67,"saved_mem_addr2", false,-1, 31,0);
    tracep->declBus(c+74,"memAddr1", false,-1, 17,0);
    tracep->declBus(c+186,"memAddr2", false,-1, 17,0);
    tracep->declBit(c+191,"memWrite2", false,-1);
    tracep->declBus(c+51,"memOut2", false,-1, 31,0);
    tracep->declBus(c+68,"ioIn_buffer", false,-1, 31,0);
    tracep->declBus(c+192,"weA", false,-1, 3,0);
    tracep->declBus(c+85,"i", false,-1, 31,0);
    tracep->declBus(c+228,"j", false,-1, 31,0);
    tracep->declBus(c+69,"memOut2_sliced", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PC ");
    tracep->declBit(c+3,"clk", false,-1);
    tracep->declBit(c+241,"reset", false,-1);
    tracep->declBit(c+193,"pcWrite", false,-1);
    tracep->declBus(c+195,"next_pc", false,-1, 31,0);
    tracep->declBus(c+70,"pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PR_IR_EX ");
    tracep->declBus(c+268,"CYCLES", false,-1, 31,0);
    tracep->declBus(c+264,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+3,"CLK", false,-1);
    tracep->declBit(c+193,"EN", false,-1);
    tracep->declBus(c+42,"in", false,-1, 31,0);
    tracep->declBus(c+143,"out", false,-1, 31,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+155+i*1,"register", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PR_IR_MEM ");
    tracep->declBus(c+268,"CYCLES", false,-1, 31,0);
    tracep->declBus(c+264,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+3,"CLK", false,-1);
    tracep->declBit(c+240,"EN", false,-1);
    tracep->declBus(c+143,"in", false,-1, 31,0);
    tracep->declBus(c+174,"out", false,-1, 31,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+179+i*1,"register", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PR_IR_WB ");
    tracep->declBus(c+268,"CYCLES", false,-1, 31,0);
    tracep->declBus(c+264,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+3,"CLK", false,-1);
    tracep->declBit(c+240,"EN", false,-1);
    tracep->declBus(c+174,"in", false,-1, 31,0);
    tracep->declBus(c+20,"out", false,-1, 31,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+27+i*1,"register", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PR_IType_EX ");
    tracep->declBus(c+268,"CYCLES", false,-1, 31,0);
    tracep->declBus(c+264,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+3,"CLK", false,-1);
    tracep->declBit(c+193,"EN", false,-1);
    tracep->declBus(c+127,"in", false,-1, 31,0);
    tracep->declBus(c+80,"out", false,-1, 31,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+86+i*1,"register", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PR_alu_A_EX ");
    tracep->declBus(c+268,"CYCLES", false,-1, 31,0);
    tracep->declBus(c+264,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+3,"CLK", false,-1);
    tracep->declBit(c+193,"EN", false,-1);
    tracep->declBus(c+220,"in", false,-1, 31,0);
    tracep->declBus(c+46,"out", false,-1, 31,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+52+i*1,"register", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PR_alu_B_EX ");
    tracep->declBus(c+268,"CYCLES", false,-1, 31,0);
    tracep->declBus(c+264,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+3,"CLK", false,-1);
    tracep->declBit(c+193,"EN", false,-1);
    tracep->declBus(c+221,"in", false,-1, 31,0);
    tracep->declBus(c+47,"out", false,-1, 31,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+53+i*1,"register", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PR_alu_fun_EX ");
    tracep->declBus(c+268,"CYCLES", false,-1, 31,0);
    tracep->declBus(c+266,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+3,"CLK", false,-1);
    tracep->declBit(c+193,"EN", false,-1);
    tracep->declBus(c+125,"in", false,-1, 3,0);
    tracep->declBus(c+71,"out", false,-1, 3,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+75+i*1,"register", true,(i+0), 3,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PR_alu_out_MEM ");
    tracep->declBus(c+268,"CYCLES", false,-1, 31,0);
    tracep->declBus(c+264,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+3,"CLK", false,-1);
    tracep->declBit(c+240,"EN", false,-1);
    tracep->declBus(c+222,"in", false,-1, 31,0);
    tracep->declBus(c+184,"out", false,-1, 31,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+187+i*1,"register", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PR_alu_out_WB ");
    tracep->declBus(c+268,"CYCLES", false,-1, 31,0);
    tracep->declBus(c+264,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+3,"CLK", false,-1);
    tracep->declBit(c+240,"EN", false,-1);
    tracep->declBus(c+184,"in", false,-1, 31,0);
    tracep->declBus(c+19,"out", false,-1, 31,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+28+i*1,"register", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PR_alu_srcA_EX ");
    tracep->declBus(c+268,"CYCLES", false,-1, 31,0);
    tracep->declBus(c+268,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+3,"CLK", false,-1);
    tracep->declBit(c+193,"EN", false,-1);
    tracep->declBus(c+139,"in", false,-1, 0,0);
    tracep->declBus(c+18,"out", false,-1, 0,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+29+i*1,"register", true,(i+0), 0,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PR_alu_srcB_EX ");
    tracep->declBus(c+268,"CYCLES", false,-1, 31,0);
    tracep->declBus(c+269,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+3,"CLK", false,-1);
    tracep->declBit(c+193,"EN", false,-1);
    tracep->declBus(c+131,"in", false,-1, 1,0);
    tracep->declBus(c+72,"out", false,-1, 1,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+76+i*1,"register", true,(i+0), 1,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PR_csr_en_EX ");
    tracep->declBus(c+268,"CYCLES", false,-1, 31,0);
    tracep->declBus(c+268,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+3,"CLK", false,-1);
    tracep->declBit(c+193,"EN", false,-1);
    tracep->declBus(c+142,"in", false,-1, 0,0);
    tracep->declBus(c+161,"out", false,-1, 0,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+170+i*1,"register", true,(i+0), 0,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PR_csr_out_WB ");
    tracep->declBus(c+269,"CYCLES", false,-1, 31,0);
    tracep->declBus(c+264,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+3,"CLK", false,-1);
    tracep->declBit(c+240,"EN", false,-1);
    tracep->declBus(c+162,"in", false,-1, 31,0);
    tracep->declBus(c+56,"out", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+57+i*1,"register", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PR_memDIn2_MEM ");
    tracep->declBus(c+268,"CYCLES", false,-1, 31,0);
    tracep->declBus(c+264,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+3,"CLK", false,-1);
    tracep->declBit(c+240,"EN", false,-1);
    tracep->declBus(c+144,"in", false,-1, 31,0);
    tracep->declBus(c+175,"out", false,-1, 31,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+180+i*1,"register", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PR_memRead2_EX ");
    tracep->declBus(c+268,"CYCLES", false,-1, 31,0);
    tracep->declBus(c+268,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+3,"CLK", false,-1);
    tracep->declBit(c+193,"EN", false,-1);
    tracep->declBus(c+128,"in", false,-1, 0,0);
    tracep->declBus(c+78,"out", false,-1, 0,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+87+i*1,"register", true,(i+0), 0,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PR_memRead2_MEM ");
    tracep->declBus(c+269,"CYCLES", false,-1, 31,0);
    tracep->declBus(c+268,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+3,"CLK", false,-1);
    tracep->declBit(c+240,"EN", false,-1);
    tracep->declBus(c+128,"in", false,-1, 0,0);
    tracep->declBus(c+132,"out", false,-1, 0,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+134+i*1,"register", true,(i+0), 0,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PR_memWrite_EX ");
    tracep->declBus(c+268,"CYCLES", false,-1, 31,0);
    tracep->declBus(c+268,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+3,"CLK", false,-1);
    tracep->declBit(c+193,"EN", false,-1);
    tracep->declBus(c+129,"in", false,-1, 0,0);
    tracep->declBus(c+77,"out", false,-1, 0,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+88+i*1,"register", true,(i+0), 0,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PR_memWrite_MEM ");
    tracep->declBus(c+268,"CYCLES", false,-1, 31,0);
    tracep->declBus(c+268,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+3,"CLK", false,-1);
    tracep->declBit(c+240,"EN", false,-1);
    tracep->declBus(c+77,"in", false,-1, 0,0);
    tracep->declBus(c+81,"out", false,-1, 0,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+89+i*1,"register", true,(i+0), 0,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PR_mret_EX ");
    tracep->declBus(c+268,"CYCLES", false,-1, 31,0);
    tracep->declBus(c+268,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+3,"CLK", false,-1);
    tracep->declBit(c+193,"EN", false,-1);
    tracep->declBus(c+126,"in", false,-1, 0,0);
    tracep->declBus(c+160,"out", false,-1, 0,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+171+i*1,"register", true,(i+0), 0,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PR_pc_DE ");
    tracep->declBus(c+268,"CYCLES", false,-1, 31,0);
    tracep->declBus(c+264,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+3,"CLK", false,-1);
    tracep->declBit(c+193,"EN", false,-1);
    tracep->declBus(c+70,"in", false,-1, 31,0);
    tracep->declBus(c+130,"out", false,-1, 31,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+136+i*1,"register", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PR_pc_EX ");
    tracep->declBus(c+268,"CYCLES", false,-1, 31,0);
    tracep->declBus(c+264,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+3,"CLK", false,-1);
    tracep->declBit(c+193,"EN", false,-1);
    tracep->declBus(c+130,"in", false,-1, 31,0);
    tracep->declBus(c+79,"out", false,-1, 31,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+90+i*1,"register", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PR_pc_WB ");
    tracep->declBus(c+269,"CYCLES", false,-1, 31,0);
    tracep->declBus(c+264,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+3,"CLK", false,-1);
    tracep->declBit(c+240,"EN", false,-1);
    tracep->declBus(c+79,"in", false,-1, 31,0);
    tracep->declBus(c+82,"out", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+91+i*1,"register", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PR_regWrite_EX ");
    tracep->declBus(c+268,"CYCLES", false,-1, 31,0);
    tracep->declBus(c+268,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+3,"CLK", false,-1);
    tracep->declBit(c+193,"EN", false,-1);
    tracep->declBus(c+141,"in", false,-1, 0,0);
    tracep->declBus(c+17,"out", false,-1, 0,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+30+i*1,"register", true,(i+0), 0,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PR_regWrite_WB ");
    tracep->declBus(c+269,"CYCLES", false,-1, 31,0);
    tracep->declBus(c+268,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+3,"CLK", false,-1);
    tracep->declBit(c+240,"EN", false,-1);
    tracep->declBus(c+17,"in", false,-1, 0,0);
    tracep->declBus(c+133,"out", false,-1, 0,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+137+i*1,"register", true,(i+0), 0,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PR_rf_wr_sel_EX ");
    tracep->declBus(c+268,"CYCLES", false,-1, 31,0);
    tracep->declBus(c+269,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+3,"CLK", false,-1);
    tracep->declBit(c+193,"EN", false,-1);
    tracep->declBus(c+140,"in", false,-1, 1,0);
    tracep->declBus(c+173,"out", false,-1, 1,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+181+i*1,"register", true,(i+0), 1,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PR_rf_wr_sel_WB ");
    tracep->declBus(c+269,"CYCLES", false,-1, 31,0);
    tracep->declBus(c+269,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+3,"CLK", false,-1);
    tracep->declBit(c+240,"EN", false,-1);
    tracep->declBus(c+173,"in", false,-1, 1,0);
    tracep->declBus(c+176,"out", false,-1, 1,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+182+i*1,"register", true,(i+0), 1,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PR_rs2_EX ");
    tracep->declBus(c+268,"CYCLES", false,-1, 31,0);
    tracep->declBus(c+264,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+3,"CLK", false,-1);
    tracep->declBit(c+193,"EN", false,-1);
    tracep->declBus(c+215,"in", false,-1, 31,0);
    tracep->declBus(c+16,"out", false,-1, 31,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+31+i*1,"register", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PR_rs2_MEM ");
    tracep->declBus(c+268,"CYCLES", false,-1, 31,0);
    tracep->declBus(c+264,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+3,"CLK", false,-1);
    tracep->declBit(c+240,"EN", false,-1);
    tracep->declBus(c+144,"in", false,-1, 31,0);
    tracep->declBus(c+205,"out", false,-1, 31,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+229+i*1,"register", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RegF ");
    tracep->declBit(c+3,"clk", false,-1);
    tracep->declBus(c+54,"adr1", false,-1, 4,0);
    tracep->declBus(c+55,"adr2", false,-1, 4,0);
    tracep->declBus(c+32,"wa", false,-1, 4,0);
    tracep->declBit(c+230,"en", false,-1);
    tracep->declBus(c+223,"wd", false,-1, 31,0);
    tracep->declBus(c+214,"rs1", false,-1, 31,0);
    tracep->declBus(c+215,"rs2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+93+i*1,"ram", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RegMux ");
    tracep->declBus(c+264,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+83,"A", false,-1, 31,0);
    tracep->declBus(c+263,"B", false,-1, 31,0);
    tracep->declBus(c+64,"C", false,-1, 31,0);
    tracep->declBus(c+19,"D", false,-1, 31,0);
    tracep->declBus(c+176,"sel", false,-1, 1,0);
    tracep->declBus(c+223,"MUX_OUT", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RiscAlu ");
    tracep->declBus(c+145,"A", false,-1, 31,0);
    tracep->declBus(c+146,"B", false,-1, 31,0);
    tracep->declBus(c+71,"alu_fun", false,-1, 3,0);
    tracep->declBus(c+222,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("TG ");
    tracep->declBus(c+79,"pc", false,-1, 31,0);
    tracep->declBus(c+143,"IR", false,-1, 31,0);
    tracep->declBus(c+145,"rs1", false,-1, 31,0);
    tracep->declBus(c+80,"IType", false,-1, 31,0);
    tracep->declBus(c+216,"jalr", false,-1, 31,0);
    tracep->declBus(c+217,"branch", false,-1, 31,0);
    tracep->declBus(c+218,"jal", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("MTIMER ");
    tracep->declBit(c+3,"CLK", false,-1);
    tracep->declBus(c+205,"mtimecmp_in", false,-1, 31,0);
    tracep->declBus(c+189,"mtimecmp_set", false,-1, 1,0);
    tracep->declBus(c+34,"mtime_h", false,-1, 31,0);
    tracep->declBus(c+35,"mtime_l", false,-1, 31,0);
    tracep->declBit(c+185,"timer_int", false,-1);
    tracep->declQuad(c+38,"mtime", false,-1, 63,0);
    tracep->declQuad(c+40,"mtimecmp", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SPI ");
    tracep->declBit(c+1,"rstb", false,-1);
    tracep->declBit(c+207,"clk", false,-1);
    tracep->declBit(c+240,"mlb", false,-1);
    tracep->declBit(c+14,"start", false,-1);
    tracep->declBus(c+37,"tdat", false,-1, 7,0);
    tracep->declBus(c+270,"cdiv", false,-1, 1,0);
    tracep->declBit(c+243,"din", false,-1);
    tracep->declBit(c+208,"ss", false,-1);
    tracep->declBit(c+200,"sck", false,-1);
    tracep->declBit(c+203,"dout", false,-1);
    tracep->declBit(c+209,"done", false,-1);
    tracep->declBus(c+210,"rdata", false,-1, 7,0);
    tracep->declBus(c+270,"idle", false,-1, 1,0);
    tracep->declBus(c+271,"send", false,-1, 1,0);
    tracep->declBus(c+272,"finish", false,-1, 1,0);
    tracep->declBus(c+231,"cur", false,-1, 1,0);
    tracep->declBus(c+232,"nxt", false,-1, 1,0);
    tracep->declBus(c+233,"treg", false,-1, 7,0);
    tracep->declBus(c+234,"rreg", false,-1, 7,0);
    tracep->declBus(c+235,"nbit", false,-1, 3,0);
    tracep->declBus(c+2,"mid", false,-1, 4,0);
    tracep->declBus(c+236,"cnt", false,-1, 4,0);
    tracep->declBit(c+237,"shift", false,-1);
    tracep->declBit(c+238,"clr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SPIClockGen ");
    tracep->declBus(c+273,"FREQ", false,-1, 31,0);
    tracep->declBit(c+199,"CLK", false,-1);
    tracep->declBit(c+207,"SCLK", false,-1);
    tracep->declBus(c+274,"COUNT", false,-1, 31,0);
    tracep->declBus(c+239,"count", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SSG_DISP ");
    tracep->declBit(c+199,"CLK", false,-1);
    tracep->declBit(c+241,"MODE", false,-1);
    tracep->declBus(c+204,"DATA_IN", false,-1, 15,0);
    tracep->declBus(c+7,"CATHODES", false,-1, 7,0);
    tracep->declBus(c+8,"ANODES", false,-1, 3,0);
    tracep->declBus(c+59,"BCD_Val", false,-1, 15,0);
    tracep->declBus(c+204,"Hex_Val", false,-1, 15,0);
    tracep->pushNamePrefix("BCDMod ");
    tracep->declBus(c+204,"HEX", false,-1, 15,0);
    tracep->declBus(c+60,"THOUSANDS", false,-1, 3,0);
    tracep->declBus(c+61,"HUNDREDS", false,-1, 3,0);
    tracep->declBus(c+62,"TENS", false,-1, 3,0);
    tracep->declBus(c+63,"ONES", false,-1, 3,0);
    tracep->declBus(c+275,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CathMod ");
    tracep->declBit(c+199,"CLK", false,-1);
    tracep->declBus(c+204,"HEX", false,-1, 15,0);
    tracep->declBus(c+7,"CATHODES", false,-1, 7,0);
    tracep->declBus(c+8,"ANODES", false,-1, 3,0);
    tracep->declBit(c+4,"s_clk_500", false,-1);
    tracep->declBus(c+9,"r_disp_digit", false,-1, 1,0);
    tracep->declBus(c+5,"clk_div_counter", false,-1, 19,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("clkDIv ");
    tracep->declBit(c+199,"clk", false,-1);
    tracep->declBit(c+3,"sclk", false,-1);
    tracep->declBus(c+268,"MAX_COUNT", false,-1, 31,0);
    tracep->declBus(c+6,"div_cnt", false,-1, 31,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void VOTTER_SIM___024root__trace_init_top(VOTTER_SIM___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VOTTER_SIM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_SIM___024root__trace_init_top\n"); );
    // Body
    VOTTER_SIM___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VOTTER_SIM___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VOTTER_SIM___024root__trace_full_top_1(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VOTTER_SIM___024root__trace_full_top_2(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VOTTER_SIM___024root__trace_full_top_3(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VOTTER_SIM___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VOTTER_SIM___024root__trace_chg_top_1(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VOTTER_SIM___024root__trace_chg_top_2(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VOTTER_SIM___024root__trace_chg_top_3(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VOTTER_SIM___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VOTTER_SIM___024root__trace_register(VOTTER_SIM___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VOTTER_SIM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_SIM___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VOTTER_SIM___024root__trace_full_top_0, vlSelf);
    tracep->addFullCb(&VOTTER_SIM___024root__trace_full_top_1, vlSelf);
    tracep->addFullCb(&VOTTER_SIM___024root__trace_full_top_2, vlSelf);
    tracep->addFullCb(&VOTTER_SIM___024root__trace_full_top_3, vlSelf);
    tracep->addChgCb(&VOTTER_SIM___024root__trace_chg_top_0, vlSelf);
    tracep->addChgCb(&VOTTER_SIM___024root__trace_chg_top_1, vlSelf);
    tracep->addChgCb(&VOTTER_SIM___024root__trace_chg_top_2, vlSelf);
    tracep->addChgCb(&VOTTER_SIM___024root__trace_chg_top_3, vlSelf);
    tracep->addCleanupCb(&VOTTER_SIM___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VOTTER_SIM___024root__trace_full_sub_0(VOTTER_SIM___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VOTTER_SIM___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_SIM___024root__trace_full_top_0\n"); );
    // Init
    VOTTER_SIM___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VOTTER_SIM___024root*>(voidSelf);
    VOTTER_SIM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VOTTER_SIM___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VOTTER_SIM___024root__trace_full_sub_0(VOTTER_SIM___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VOTTER_SIM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_SIM___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->OTTER_SIM__DOT__Otter__DOT____Vcellinp__SPI__rstb));
    bufp->fullCData(oldp+2,(vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI__DOT__mid),5);
    bufp->fullBit(oldp+3,(vlSelf->OTTER_SIM__DOT__Otter__DOT__sclk));
    bufp->fullBit(oldp+4,(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT__CathMod__DOT__s_clk_500));
    bufp->fullIData(oldp+5,(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT__CathMod__DOT__clk_div_counter),20);
    bufp->fullIData(oldp+6,(vlSelf->OTTER_SIM__DOT__Otter__DOT__clkDIv__DOT__div_cnt),32);
    bufp->fullCData(oldp+7,(vlSelf->OTTER_SIM__DOT__CATHODES),8);
    bufp->fullCData(oldp+8,(vlSelf->OTTER_SIM__DOT__ANODES),4);
    bufp->fullCData(oldp+9,(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT__CathMod__DOT__r_disp_digit),2);
    bufp->fullBit(oldp+10,(vlSelf->OTTER_SIM__DOT__Otter__DOT__btn_int));
    bufp->fullBit(oldp+11,(vlSelf->OTTER_SIM__DOT__Otter__DOT__DB__DOT__s_count_rst));
    bufp->fullBit(oldp+12,(vlSelf->OTTER_SIM__DOT__Otter__DOT__DB__DOT__s_count_inc));
    bufp->fullSData(oldp+13,(vlSelf->OTTER_SIM__DOT__LEDS),16);
    bufp->fullBit(oldp+14,(vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI_START));
    bufp->fullCData(oldp+15,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__squash),4);
    bufp->fullIData(oldp+16,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_rs2_EX__DOT__register
                             [0U]),32);
    bufp->fullBit(oldp+17,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_regWrite_EX__DOT__register
                           [0U]));
    bufp->fullBit(oldp+18,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_srcA_EX__DOT__register
                           [0U]));
    bufp->fullIData(oldp+19,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_out_WB__DOT__register
                             [0U]),32);
    bufp->fullIData(oldp+20,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_WB__DOT__register
                             [0U]),32);
    bufp->fullBit(oldp+21,((1U & (~ ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__squash) 
                                     >> 1U)))));
    bufp->fullBit(oldp+22,((1U & ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__squash) 
                                  >> 1U))));
    bufp->fullQData(oldp+23,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__HzHr__DOT__fw_1),38);
    bufp->fullQData(oldp+25,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__HzHr__DOT__fw_2),38);
    bufp->fullIData(oldp+27,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_WB__DOT__register[0]),32);
    bufp->fullIData(oldp+28,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_out_WB__DOT__register[0]),32);
    bufp->fullBit(oldp+29,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_srcA_EX__DOT__register[0]));
    bufp->fullBit(oldp+30,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_regWrite_EX__DOT__register[0]));
    bufp->fullIData(oldp+31,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_rs2_EX__DOT__register[0]),32);
    bufp->fullCData(oldp+32,((0x1fU & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_WB__DOT__register
                                       [0U] >> 7U))),5);
    bufp->fullBit(oldp+33,(vlSelf->OTTER_SIM__DOT__TFT_DC));
    bufp->fullIData(oldp+34,((IData)((vlSelf->OTTER_SIM__DOT__Otter__DOT__MTIMER__DOT__mtime 
                                      >> 0x20U))),32);
    bufp->fullIData(oldp+35,((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MTIMER__DOT__mtime)),32);
    bufp->fullCData(oldp+36,(vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI_CS_MEM),2);
    bufp->fullCData(oldp+37,(vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI_TDATA),8);
    bufp->fullQData(oldp+38,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MTIMER__DOT__mtime),64);
    bufp->fullQData(oldp+40,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MTIMER__DOT__mtimecmp),64);
    bufp->fullIData(oldp+42,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR),32);
    bufp->fullCData(oldp+43,((7U & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR 
                                    >> 0xcU))),3);
    bufp->fullIData(oldp+44,((0xfffff000U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR)),32);
    bufp->fullIData(oldp+45,((((- (IData)((vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR 
                                           >> 0x1fU))) 
                               << 0xcU) | ((0xfe0U 
                                            & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR 
                                                 >> 7U))))),32);
    bufp->fullIData(oldp+46,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_A_EX__DOT__register
                             [0U]),32);
    bufp->fullIData(oldp+47,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_B_EX__DOT__register
                             [0U]),32);
    bufp->fullCData(oldp+48,((0x7fU & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR)),7);
    bufp->fullCData(oldp+49,((vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR 
                              >> 0x19U)),7);
    bufp->fullIData(oldp+50,((vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR 
                              >> 7U)),25);
    bufp->fullIData(oldp+51,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memOut2),32);
    bufp->fullIData(oldp+52,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_A_EX__DOT__register[0]),32);
    bufp->fullIData(oldp+53,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_B_EX__DOT__register[0]),32);
    bufp->fullCData(oldp+54,((0x1fU & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+55,((0x1fU & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR 
                                       >> 0x14U))),5);
    bufp->fullIData(oldp+56,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_csr_out_WB__DOT__register
                             [0U]),32);
    bufp->fullIData(oldp+57,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_csr_out_WB__DOT__register[0]),32);
    bufp->fullIData(oldp+58,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_csr_out_WB__DOT__register[1]),32);
    bufp->fullSData(oldp+59,((((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS) 
                               << 0xcU) | (((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS) 
                                            << 8U) 
                                           | (((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS) 
                                               << 4U) 
                                              | (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES))))),16);
    bufp->fullCData(oldp+60,(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__THOUSANDS),4);
    bufp->fullCData(oldp+61,(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__HUNDREDS),4);
    bufp->fullCData(oldp+62,(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__TENS),4);
    bufp->fullCData(oldp+63,(vlSelf->OTTER_SIM__DOT__Otter__DOT__SSG_DISP__DOT____Vcellout__BCDMod__ONES),4);
    bufp->fullIData(oldp+64,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__MEM_DOUT2),32);
    bufp->fullBit(oldp+65,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__saved_mem_sign));
    bufp->fullCData(oldp+66,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__saved_mem_size),2);
    bufp->fullIData(oldp+67,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__saved_mem_addr2),32);
    bufp->fullIData(oldp+68,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__ioIn_buffer),32);
    bufp->fullIData(oldp+69,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memOut2_sliced),32);
}

VL_ATTR_COLD void VOTTER_SIM___024root__trace_full_sub_1(VOTTER_SIM___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VOTTER_SIM___024root__trace_full_top_1(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_SIM___024root__trace_full_top_1\n"); );
    // Init
    VOTTER_SIM___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VOTTER_SIM___024root*>(voidSelf);
    VOTTER_SIM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VOTTER_SIM___024root__trace_full_sub_1((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VOTTER_SIM___024root__trace_full_sub_1(VOTTER_SIM___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VOTTER_SIM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_SIM___024root__trace_full_sub_1\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+70,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__pc),32);
    bufp->fullCData(oldp+71,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_fun_EX__DOT__register
                             [0U]),4);
    bufp->fullCData(oldp+72,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_srcB_EX__DOT__register
                             [0U]),2);
    bufp->fullIData(oldp+73,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mtvec),32);
    bufp->fullIData(oldp+74,((0x3ffffU & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__pc 
                                          >> 2U))),18);
    bufp->fullCData(oldp+75,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_fun_EX__DOT__register[0]),4);
    bufp->fullCData(oldp+76,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_srcB_EX__DOT__register[0]),2);
    bufp->fullBit(oldp+77,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memWrite_EX__DOT__register
                           [0U]));
    bufp->fullBit(oldp+78,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memRead2_EX__DOT__register
                           [0U]));
    bufp->fullIData(oldp+79,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_pc_EX__DOT__register
                             [0U]),32);
    bufp->fullIData(oldp+80,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IType_EX__DOT__register
                             [0U]),32);
    bufp->fullBit(oldp+81,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memWrite_MEM__DOT__register
                           [0U]));
    bufp->fullIData(oldp+82,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_pc_WB__DOT__register
                             [0U]),32);
    bufp->fullIData(oldp+83,(((IData)(4U) + vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_pc_WB__DOT__register
                              [0U])),32);
    bufp->fullBit(oldp+84,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT____Vcellinp__Mem__MEM_WRITE2));
    bufp->fullIData(oldp+85,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__i),32);
    bufp->fullIData(oldp+86,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IType_EX__DOT__register[0]),32);
    bufp->fullBit(oldp+87,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memRead2_EX__DOT__register[0]));
    bufp->fullBit(oldp+88,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memWrite_EX__DOT__register[0]));
    bufp->fullBit(oldp+89,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memWrite_MEM__DOT__register[0]));
    bufp->fullIData(oldp+90,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_pc_EX__DOT__register[0]),32);
    bufp->fullIData(oldp+91,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_pc_WB__DOT__register[0]),32);
    bufp->fullIData(oldp+92,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_pc_WB__DOT__register[1]),32);
    bufp->fullIData(oldp+93,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__RegF__DOT__ram[0]),32);
    bufp->fullIData(oldp+94,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__RegF__DOT__ram[1]),32);
    bufp->fullIData(oldp+95,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__RegF__DOT__ram[2]),32);
    bufp->fullIData(oldp+96,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__RegF__DOT__ram[3]),32);
    bufp->fullIData(oldp+97,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__RegF__DOT__ram[4]),32);
    bufp->fullIData(oldp+98,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__RegF__DOT__ram[5]),32);
    bufp->fullIData(oldp+99,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__RegF__DOT__ram[6]),32);
    bufp->fullIData(oldp+100,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__RegF__DOT__ram[7]),32);
    bufp->fullIData(oldp+101,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__RegF__DOT__ram[8]),32);
    bufp->fullIData(oldp+102,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__RegF__DOT__ram[9]),32);
    bufp->fullIData(oldp+103,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__RegF__DOT__ram[10]),32);
    bufp->fullIData(oldp+104,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__RegF__DOT__ram[11]),32);
    bufp->fullIData(oldp+105,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__RegF__DOT__ram[12]),32);
    bufp->fullIData(oldp+106,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__RegF__DOT__ram[13]),32);
    bufp->fullIData(oldp+107,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__RegF__DOT__ram[14]),32);
    bufp->fullIData(oldp+108,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__RegF__DOT__ram[15]),32);
    bufp->fullIData(oldp+109,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__RegF__DOT__ram[16]),32);
    bufp->fullIData(oldp+110,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__RegF__DOT__ram[17]),32);
    bufp->fullIData(oldp+111,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__RegF__DOT__ram[18]),32);
    bufp->fullIData(oldp+112,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__RegF__DOT__ram[19]),32);
    bufp->fullIData(oldp+113,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__RegF__DOT__ram[20]),32);
    bufp->fullIData(oldp+114,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__RegF__DOT__ram[21]),32);
    bufp->fullIData(oldp+115,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__RegF__DOT__ram[22]),32);
    bufp->fullIData(oldp+116,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__RegF__DOT__ram[23]),32);
    bufp->fullIData(oldp+117,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__RegF__DOT__ram[24]),32);
    bufp->fullIData(oldp+118,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__RegF__DOT__ram[25]),32);
    bufp->fullIData(oldp+119,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__RegF__DOT__ram[26]),32);
    bufp->fullIData(oldp+120,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__RegF__DOT__ram[27]),32);
    bufp->fullIData(oldp+121,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__RegF__DOT__ram[28]),32);
    bufp->fullIData(oldp+122,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__RegF__DOT__ram[29]),32);
    bufp->fullIData(oldp+123,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__RegF__DOT__ram[30]),32);
    bufp->fullIData(oldp+124,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__RegF__DOT__ram[31]),32);
    bufp->fullCData(oldp+125,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__alu_fun),4);
    bufp->fullBit(oldp+126,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__mret));
    bufp->fullIData(oldp+127,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IType),32);
    bufp->fullBit(oldp+128,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__memRead2));
    bufp->fullBit(oldp+129,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__memWrite));
    bufp->fullIData(oldp+130,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_pc_DE__DOT__register
                              [0U]),32);
    bufp->fullCData(oldp+131,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__alu_srcB),2);
    bufp->fullBit(oldp+132,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memRead2_MEM__DOT__register
                            [0U]));
    bufp->fullBit(oldp+133,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_regWrite_WB__DOT__register
                            [0U]));
    bufp->fullBit(oldp+134,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memRead2_MEM__DOT__register[0]));
    bufp->fullBit(oldp+135,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memRead2_MEM__DOT__register[1]));
    bufp->fullIData(oldp+136,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_pc_DE__DOT__register[0]),32);
    bufp->fullBit(oldp+137,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_regWrite_WB__DOT__register[0]));
    bufp->fullBit(oldp+138,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_regWrite_WB__DOT__register[1]));
}

VL_ATTR_COLD void VOTTER_SIM___024root__trace_full_sub_2(VOTTER_SIM___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VOTTER_SIM___024root__trace_full_top_2(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_SIM___024root__trace_full_top_2\n"); );
    // Init
    VOTTER_SIM___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VOTTER_SIM___024root*>(voidSelf);
    VOTTER_SIM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VOTTER_SIM___024root__trace_full_sub_2((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VOTTER_SIM___024root__trace_full_sub_2(VOTTER_SIM___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VOTTER_SIM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_SIM___024root__trace_full_sub_2\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+139,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__alu_srcA));
    bufp->fullCData(oldp+140,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__rf_wr_sel),2);
    bufp->fullBit(oldp+141,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__regWrite));
    bufp->fullBit(oldp+142,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__csr_en));
    bufp->fullIData(oldp+143,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                              [0U]),32);
    bufp->fullIData(oldp+144,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__rs2_EX_fw),32);
    bufp->fullIData(oldp+145,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__A_EX_fw),32);
    bufp->fullIData(oldp+146,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__B_EX_fw),32);
    bufp->fullCData(oldp+147,((7U & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                                     [0U] >> 0xcU))),3);
    bufp->fullCData(oldp+148,((0x7fU & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                               [0U])),7);
    bufp->fullSData(oldp+149,((vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                               [0U] >> 0x14U)),12);
    bufp->fullCData(oldp+150,((3U & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                                     [0U] >> 0xcU))),2);
    bufp->fullCData(oldp+151,((0x1fU & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                                        [0U] >> 0xfU))),5);
    bufp->fullBit(oldp+152,((1U & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                                   [0U] >> 0xeU))));
    bufp->fullCData(oldp+153,((0x1fU & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                                        [0U] >> 0x14U))),5);
    bufp->fullCData(oldp+154,((0x1fU & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                                        [0U] >> 7U))),5);
    bufp->fullIData(oldp+155,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register[0]),32);
    bufp->fullCData(oldp+156,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__pcSource),3);
    bufp->fullBit(oldp+157,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__BCG__DOT__br_eq));
    bufp->fullBit(oldp+158,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__BCG__DOT__br_lt));
    bufp->fullBit(oldp+159,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__BCG__DOT__br_ltu));
    bufp->fullBit(oldp+160,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_mret_EX__DOT__register
                            [0U]));
    bufp->fullBit(oldp+161,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_csr_en_EX__DOT__register
                            [0U]));
    bufp->fullIData(oldp+162,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__csr_out_EX),32);
    bufp->fullBit(oldp+163,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__flush));
    bufp->fullBit(oldp+164,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__flush_DE));
    bufp->fullCData(oldp+165,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__int_state),5);
    bufp->fullIData(oldp+166,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mstatus),32);
    bufp->fullIData(oldp+167,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mie),32);
    bufp->fullIData(oldp+168,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mepc),32);
    bufp->fullIData(oldp+169,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__mcause),32);
    bufp->fullBit(oldp+170,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_csr_en_EX__DOT__register[0]));
    bufp->fullBit(oldp+171,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_mret_EX__DOT__register[0]));
    bufp->fullBit(oldp+172,(vlSelf->OTTER_SIM__DOT__Otter__DOT__m_ext_int));
    bufp->fullCData(oldp+173,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_rf_wr_sel_EX__DOT__register
                              [0U]),2);
    bufp->fullIData(oldp+174,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_MEM__DOT__register
                              [0U]),32);
    bufp->fullIData(oldp+175,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memDIn2_MEM__DOT__register
                              [0U]),32);
    bufp->fullCData(oldp+176,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_rf_wr_sel_WB__DOT__register
                              [0U]),2);
    bufp->fullCData(oldp+177,((3U & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_MEM__DOT__register
                                     [0U] >> 0xcU))),2);
    bufp->fullBit(oldp+178,((1U & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_MEM__DOT__register
                                   [0U] >> 0xeU))));
    bufp->fullIData(oldp+179,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_MEM__DOT__register[0]),32);
    bufp->fullIData(oldp+180,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_memDIn2_MEM__DOT__register[0]),32);
    bufp->fullCData(oldp+181,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_rf_wr_sel_EX__DOT__register[0]),2);
    bufp->fullCData(oldp+182,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_rf_wr_sel_WB__DOT__register[0]),2);
    bufp->fullCData(oldp+183,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_rf_wr_sel_WB__DOT__register[1]),2);
    bufp->fullIData(oldp+184,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_out_MEM__DOT__register
                              [0U]),32);
    bufp->fullBit(oldp+185,(vlSelf->OTTER_SIM__DOT__Otter__DOT__timer_int));
    bufp->fullIData(oldp+186,((0x3ffffU & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_out_MEM__DOT__register
                                           [0U] >> 2U))),18);
    bufp->fullIData(oldp+187,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_out_MEM__DOT__register[0]),32);
    bufp->fullBit(oldp+188,(vlSelf->OTTER_SIM__DOT__Otter__DOT__IOBUS_wr));
    bufp->fullCData(oldp+189,(vlSelf->OTTER_SIM__DOT__Otter__DOT__mtimecmp_set),2);
    bufp->fullIData(oldp+190,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR__DOT__write_data),32);
    bufp->fullBit(oldp+191,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__memWrite2));
    bufp->fullCData(oldp+192,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__weA),4);
    bufp->fullBit(oldp+193,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__stall));
    bufp->fullIData(oldp+194,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__next_pc),32);
    bufp->fullIData(oldp+195,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__next_pc_updated),32);
    bufp->fullIData(oldp+196,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__pcPlus4),32);
    bufp->fullBit(oldp+197,((1U & (~ (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__stall)))));
    bufp->fullCData(oldp+198,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__HzHr__DOT__squash_next),4);
    bufp->fullBit(oldp+199,(vlSelf->CLK));
    bufp->fullBit(oldp+200,(vlSelf->OTTER_SIM__DOT__SPI_SCLK));
    bufp->fullBit(oldp+201,((1U & ((~ ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI_CS_MEM) 
                                       >> 1U)) | (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI_CS)))));
    bufp->fullBit(oldp+202,((1U & ((~ (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI_CS_MEM)) 
                                   | (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI_CS)))));
    bufp->fullBit(oldp+203,(vlSelf->OTTER_SIM__DOT__SPI_SDO));
    bufp->fullSData(oldp+204,(vlSelf->OTTER_SIM__DOT__Otter__DOT__r_SSEG),16);
    bufp->fullIData(oldp+205,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_rs2_MEM__DOT__register
                              [0U]),32);
    bufp->fullIData(oldp+206,(vlSelf->OTTER_SIM__DOT__Otter__DOT__IOBUS_in),32);
    bufp->fullBit(oldp+207,(vlSelf->OTTER_SIM__DOT__Otter__DOT__spi_clk));
}

VL_ATTR_COLD void VOTTER_SIM___024root__trace_full_sub_3(VOTTER_SIM___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VOTTER_SIM___024root__trace_full_top_3(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_SIM___024root__trace_full_top_3\n"); );
    // Init
    VOTTER_SIM___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VOTTER_SIM___024root*>(voidSelf);
    VOTTER_SIM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VOTTER_SIM___024root__trace_full_sub_3((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VOTTER_SIM___024root__trace_full_sub_3(VOTTER_SIM___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VOTTER_SIM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOTTER_SIM___024root__trace_full_sub_3\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+208,(vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI_CS));
    bufp->fullBit(oldp+209,(vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI_DONE));
    bufp->fullCData(oldp+210,(vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI_RDATA),8);
    bufp->fullIData(oldp+211,(vlSelf->OTTER_SIM__DOT__Otter__DOT__DB__DOT__NS),32);
    bufp->fullIData(oldp+212,(vlSelf->OTTER_SIM__DOT__Otter__DOT__DB__DOT__PS),32);
    bufp->fullCData(oldp+213,(vlSelf->OTTER_SIM__DOT__Otter__DOT__DB__DOT__s_db_count),8);
    bufp->fullIData(oldp+214,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__rs1),32);
    bufp->fullIData(oldp+215,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__rs2),32);
    bufp->fullIData(oldp+216,((vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__A_EX_fw 
                               + vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IType_EX__DOT__register
                               [0U])),32);
    bufp->fullIData(oldp+217,((vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_pc_EX__DOT__register
                               [0U] + (((- (IData)(
                                                   (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                                                    [0U] 
                                                    >> 0x1fU))) 
                                        << 0xcU) | 
                                       ((0x800U & (
                                                   vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
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
    bufp->fullIData(oldp+218,((vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_pc_EX__DOT__register
                               [0U] + (((- (IData)(
                                                   (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                                                    [0U] 
                                                    >> 0x1fU))) 
                                        << 0x14U) | 
                                       ((0xff000U & 
                                         vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                                         [0U]) | ((0x800U 
                                                   & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                                                      [0U] 
                                                      >> 9U)) 
                                                  | (0x7feU 
                                                     & (vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_IR_EX__DOT__register
                                                        [0U] 
                                                        >> 0x14U))))))),32);
    bufp->fullBit(oldp+219,(((0x40000U <= vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__pc) 
                             | ((0x40000U <= vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_out_MEM__DOT__register
                                 [0U]) | ((0U != (3U 
                                                  & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__pc)) 
                                          | (0U != 
                                             (3U & 
                                              vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_out_MEM__DOT__register
                                              [0U])))))));
    bufp->fullIData(oldp+220,(((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__alu_srcA)
                                ? (0xfffff000U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__IR)
                                : vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__rs1)),32);
    bufp->fullIData(oldp+221,(((2U & (IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__alu_srcB))
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
    bufp->fullIData(oldp+222,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__alu_out),32);
    bufp->fullIData(oldp+223,(((2U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_rf_wr_sel_WB__DOT__register
                                [0U]) ? ((1U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_rf_wr_sel_WB__DOT__register
                                          [0U]) ? vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_alu_out_WB__DOT__register
                                         [0U] : vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__MEM_DOUT2)
                                : ((1U & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_rf_wr_sel_WB__DOT__register
                                    [0U]) ? vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR_REG
                                    : ((IData)(4U) 
                                       + vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_pc_WB__DOT__register
                                       [0U])))),32);
    bufp->fullBit(oldp+224,(((~ ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__squash) 
                                 >> 1U)) & (0x2bcU 
                                            == vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_pc_EX__DOT__register
                                            [0U]))));
    bufp->fullBit(oldp+225,(((~ ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__squash) 
                                 >> 1U)) & (0xc8U == 
                                            vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_pc_EX__DOT__register
                                            [0U]))));
    bufp->fullQData(oldp+226,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__HzHr__DOT__fw_1_next),38);
    bufp->fullIData(oldp+228,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__Mem__DOT__j),32);
    bufp->fullIData(oldp+229,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_rs2_MEM__DOT__register[0]),32);
    bufp->fullBit(oldp+230,(((~ ((IData)(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__squash) 
                                 >> 3U)) & vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__PR_regWrite_WB__DOT__register
                             [0U])));
    bufp->fullCData(oldp+231,(vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI__DOT__cur),2);
    bufp->fullCData(oldp+232,(vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI__DOT__nxt),2);
    bufp->fullCData(oldp+233,(vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI__DOT__treg),8);
    bufp->fullCData(oldp+234,(vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI__DOT__rreg),8);
    bufp->fullCData(oldp+235,(vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI__DOT__nbit),4);
    bufp->fullCData(oldp+236,(vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI__DOT__cnt),5);
    bufp->fullBit(oldp+237,(vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI__DOT__shift));
    bufp->fullBit(oldp+238,(vlSelf->OTTER_SIM__DOT__Otter__DOT__SPI__DOT__clr));
    bufp->fullIData(oldp+239,(vlSelf->OTTER_SIM__DOT__Otter__DOT__SPIClockGen__DOT__count),32);
    bufp->fullBit(oldp+240,(1U));
    bufp->fullBit(oldp+241,(0U));
    bufp->fullSData(oldp+242,(0U),16);
    bufp->fullBit(oldp+243,(vlSelf->OTTER_SIM__DOT__SPI_SDI));
    bufp->fullIData(oldp+244,(0x11000000U),32);
    bufp->fullIData(oldp+245,(0x110d0000U),32);
    bufp->fullIData(oldp+246,(0x110f0000U),32);
    bufp->fullIData(oldp+247,(0x21000000U),32);
    bufp->fullIData(oldp+248,(0x21000004U),32);
    bufp->fullIData(oldp+249,(0x11080000U),32);
    bufp->fullIData(oldp+250,(0x110c0000U),32);
    bufp->fullIData(oldp+251,(0x110e0000U),32);
    bufp->fullIData(oldp+252,(0x11100000U),32);
    bufp->fullIData(oldp+253,(0x11110000U),32);
    bufp->fullIData(oldp+254,(0x11120000U),32);
    bufp->fullIData(oldp+255,(0x22000000U),32);
    bufp->fullIData(oldp+256,(0x22000004U),32);
    bufp->fullBit(oldp+257,(vlSelf->OTTER_SIM__DOT__Otter__DOT__s_load));
    bufp->fullCData(oldp+258,(0x19U),8);
    bufp->fullCData(oldp+259,(0x33U),8);
    bufp->fullCData(oldp+260,(3U),8);
    bufp->fullBit(oldp+261,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__pcWrite));
    bufp->fullBit(oldp+262,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__memRead1));
    bufp->fullIData(oldp+263,(vlSelf->OTTER_SIM__DOT__Otter__DOT__MCU__DOT__CSR_REG),32);
    bufp->fullIData(oldp+264,(0x20U),32);
    bufp->fullIData(oldp+265,(0x12U),32);
    bufp->fullIData(oldp+266,(4U),32);
    bufp->fullIData(oldp+267,(8U),32);
    bufp->fullIData(oldp+268,(1U),32);
    bufp->fullIData(oldp+269,(2U),32);
    bufp->fullCData(oldp+270,(0U),2);
    bufp->fullCData(oldp+271,(2U),2);
    bufp->fullCData(oldp+272,(3U),2);
    bufp->fullIData(oldp+273,(0xd59f80U),32);
    bufp->fullIData(oldp+274,(6U),32);
    bufp->fullIData(oldp+275,(0xffffffffU),32);
}
