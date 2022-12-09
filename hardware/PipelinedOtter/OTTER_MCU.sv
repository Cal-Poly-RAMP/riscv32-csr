`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 02/06/2022 09:56:08 PM
// Design Name: 
// Module Name: OTTER_MCU
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


module OTTER_MCU(
    input CLK,
    input timer_int,
    input m_ext_int,
    input RST,
    input [31:0] IOBUS_IN,
    output [31:0] IOBUS_OUT,
    output [31:0] IOBUS_ADDR,
    output IOBUS_WR
    );
    
    // NAMING CONVENTIONS:
    // Signal Name:             signal_name_STAGE or signalName_STAGE
    // Pipeline REgister Name:  PR_signal_name_STAGE or PR_signalName_STAGE
    
    ////////////////////////////////////////////////////////////////////////////
    // Fetch Stage
    logic [3:0] squash;
    logic stall;
    //instruction
    
    logic [31:0] IR;
    logic [31:0] rs1;
    logic [31:0] rs2;
    //Start with PC and all its needs
    logic [2:0] pcSource;
    logic pcWrite;
    logic [31:0] pc;
    logic [31:0] next_pc;
    logic [31:0] next_pc_updated;
    logic [31:0] pcPlus4;
    logic [31:0] jalr;
    logic [31:0] branch;
    logic [31:0] jal;
 
    // PC Mux
    always_comb
    begin 
    pcPlus4 = pc + 4;
    case (pcSource)
        3'd0:       next_pc = pcPlus4;
        3'd1:       next_pc = jalr;
        3'd2:       next_pc = branch;
        3'd3:       next_pc = jal;
        default:    next_pc = pcPlus4;
    endcase
    end
    ProgramCounter PC(.clk(CLK), .pc(pc), .next_pc(next_pc_updated), .reset(RST), .pcWrite(stall));
    
    // Declare Mem Signals
    logic [31:0] MEM_DOUT2;
    logic memRead1;
    logic memRead2;
    logic memWrite;
    // Mem actually declared in MEM stage, but signals set up here to be used throughout

       
    //////////////////////////////////////////////////////////////////////////////////
    // Decode Stage

    // Decoder
    logic [31:0] pc_DE;
    PipelineReg PR_pc_DE (.in(pc), .out(pc_DE), .CLK(CLK), .EN(stall));
        
    logic [2:0] funct3;
    assign funct3 = IR[14:12];
    logic [3:0] alu_fun;
    logic alu_srcA;
    logic [1:0] alu_srcB;
    logic [1:0] rf_wr_sel;
    logic regWrite;
    logic csr_en;
    logic mret;
    CU_Decoder CUD (.op(IR[6:0]), .funct7(IR[31:25]), .*); 

    //Register File Inputs
    logic [31:0] CSR_REG;
    logic ERR;
    // Register file actually defined in writeback, signals needed earlier   
    
    //Immediate Gen
     logic [31:0] UType;
     logic [31:0] IType;
     logic [31:0] SType;
    ImmedGen IG (.IR(IR[31:7]), .*);
    
    //ALU Mux Setup
    logic [31:0] A;
    logic [31:0] B;
    Mux2_1 #(32) ALU_A (.ZERO(rs1), .ONE(UType), .SEL(alu_srcA), .MUX_OUT(A));
    Mux4_1 #(32) ALU_B (.A(rs2), .B(IType), .C(SType), .D(pc_DE), .sel(alu_srcB), .MUX_OUT(B));

              
    ///////////////////////////////////////////////////////////////////////
    // Execute Stage
    logic mret_EX;
    PipelineReg #(.CYCLES(1), .WIDTH(1)) PR_mret_EX (.in(mret), .out(mret_EX), .CLK(CLK), .EN(stall));
    logic memWrite_EX;
    PipelineReg #(.CYCLES(1), .WIDTH(1)) PR_memWrite_EX (.in(memWrite), .out(memWrite_EX), .CLK(CLK), .EN(stall));
    logic memRead2_EX;
    PipelineReg #(.CYCLES(1), .WIDTH(1)) PR_memRead2_EX (.in(memRead2), .out(memRead2_EX), .CLK(CLK), .EN(stall));
    logic [31:0] pc_EX;
    PipelineReg PR_pc_EX (.in(pc_DE), .out(pc_EX), .CLK(CLK), .EN(stall));
    logic [31:0] IR_EX;
    PipelineReg PR_IR_EX (.in(IR), .out(IR_EX), .CLK(CLK), .EN(stall));  
    logic [31:0] alu_out;
    logic [31:0] rs2_EX;
    logic [31:0] rs2_EX_fw;
    PipelineReg PR_rs2_EX (.in(rs2), .out(rs2_EX), .CLK(CLK), .EN(stall));
    logic [31:0] A_EX;
    logic [31:0] A_EX_fw;
    PipelineReg PR_alu_A_EX (.in(A), .out(A_EX), .CLK(CLK), .EN(stall));
    logic [31:0] B_EX;
     logic [31:0] B_EX_fw;
    PipelineReg PR_alu_B_EX (.in(B), .out(B_EX), .CLK(CLK), .EN(stall));
    logic [3:0] alu_fun_EX;  
    PipelineReg #(.CYCLES(1), .WIDTH(4)) PR_alu_fun_EX (.in(alu_fun), .out(alu_fun_EX), .CLK(CLK), .EN(stall));
    logic [31:0] IType_EX;
    PipelineReg PR_IType_EX (.in(IType), .out(IType_EX), .CLK(CLK), .EN(stall));
    logic regWrite_EX;
    PipelineReg #(.WIDTH(1)) PR_regWrite_EX (.in(regWrite), .out(regWrite_EX), .CLK(CLK), .EN(stall));
    logic alu_srcA_EX;
    logic [1:0] alu_srcB_EX;
    PipelineReg #(.WIDTH(1)) PR_alu_srcA_EX (.in(alu_srcA), .out(alu_srcA_EX), .CLK(CLK), .EN(stall));
    PipelineReg #(.WIDTH(2)) PR_alu_srcB_EX (.in(alu_srcB), .out(alu_srcB_EX), .CLK(CLK), .EN(stall));
    logic [1:0] rf_wr_sel_EX;
    PipelineReg #(.WIDTH(2)) PR_rf_wr_sel_EX (.in(rf_wr_sel), .out(rf_wr_sel_EX), .CLK(CLK), .EN(stall));
    logic csr_en_EX;
    PipelineReg #(.WIDTH(1)) PR_csr_en_EX (.in(csr_en), .out(csr_en_EX), .CLK(CLK), .EN(stall));
    
    // ALU and Generator Logic
    HazardHandler HzHr ( .CLK(CLK), .regWrite(regWrite_EX), .alu_srcA(alu_srcA_EX), .op(IR_EX[6:0]), 
        .pcSource(pcSource), .alu_srcB(alu_srcB_EX), .addr1(IR_EX[19:15]), .addr2(IR_EX[24:20]), .wr_addr(IR_EX[11:7]),
        .alu_A(A_EX), .alu_B(B_EX), .rs2(rs2_EX), .alu_out(alu_out), .mem_out(MEM_DOUT2), .alu_A_fw(A_EX_fw), .alu_B_fw(B_EX_fw),
        .rs2_fw(rs2_EX_fw), .stall(stall), .squash(squash), .csr_out(csr_out_EX), .csr_en(csr_en_EX), .flush(flush), .mret(mret_EX));
        
    ALU RiscAlu (.out(alu_out), .A(A_EX_fw), .B(B_EX_fw), .alu_fun(alu_fun_EX));
    TargetGen     TG (.IType(IType_EX), .pc(pc_EX), .IR(IR_EX), .rs1(A_EX_fw), .jalr(jalr), .branch(branch), .jal(jal));
    BranchCondGen BCG (.op(IR_EX[6:0]), .funct3(IR_EX[14:12]),  .rs1(A_EX_fw), .rs2(B_EX_fw),.squash_EX(squash[1]), .pcSource(pcSource));
    
    // CSR Definition
    logic [31:0] csr_out_EX;
    logic flush;
    CSR_rv32 CSR (.CLK(CLK), .enable(csr_en_EX), .addr(IR_EX[31:20]), .mode_sel(IR_EX[13:12]), .immediate(IR_EX[19:15]), 
        .immediate_sel(IR_EX[14]), .rs1(A_EX_fw), .read_data(csr_out_EX), .timer_int(timer_int), 
        .m_ext_int(m_ext_int), .stall(~stall), .pcSource(pcSource), .next_pc(next_pc), .next_pc_updated(next_pc_updated),
        .flush(flush), .mret(mret_EX));

    logic flush_DE;
    always_ff @ (posedge CLK)
    begin
        flush_DE <= flush;
    end
    

    /////////////////////////////////////////////////////////////////
    // Mem Stage
    logic [31:0] alu_out_MEM;
    PipelineReg PR_alu_out_MEM (.in(alu_out), .out(alu_out_MEM), .CLK(CLK), .EN(1'd1));
    logic [31:0] rs2_MEM;
    PipelineReg PR_rs2_MEM (.in(rs2_EX_fw), .out(rs2_MEM), .CLK(CLK), .EN(1'd1));
    logic [31:0] IR_MEM;
    PipelineReg PR_IR_MEM (.in(IR_EX), .out(IR_MEM), .CLK(CLK), .EN(1'd1));
    logic memWrite_MEM;
    // stall?
    PipelineReg #(.CYCLES(1), .WIDTH(1)) PR_memWrite_MEM (.in(memWrite_EX), .out(memWrite_MEM), .CLK(CLK), .EN(1'd1));
    logic memRead2_MEM;
    PipelineReg #(.CYCLES(2), .WIDTH(1)) PR_memRead2_MEM (.in(memRead2), .out(memRead2_MEM), .CLK(CLK), .EN(1'd1));
    logic [31:0] memDIn2;
    PipelineReg PR_memDIn2_MEM (.in(rs2_EX_fw), .out(memDIn2), .CLK(CLK), .EN(1'd1));
    
    OTTER_mem_byte Mem(.MEM_CLK(CLK), .MEM_SIGN(IR_MEM[14]), .MEM_DOUT1(IR),
        .MEM_READ1(stall), .MEM_READ2(memRead2_MEM), .MEM_WRITE2(memWrite_MEM & (~squash[2])),
        .MEM_ADDR1(pc),.MEM_SIZE(IR_MEM[13:12]), .MEM_ADDR2(alu_out_MEM), .IO_IN(IOBUS_IN), 
        .IO_WR(IOBUS_WR), .MEM_DIN2(memDIn2), .*);
        
    //Misc Output Signals - TO BE UPDATED
    assign IOBUS_OUT = rs2_MEM;
    assign IOBUS_ADDR = alu_out_MEM;

    ////////////////////////////////////////////////////////////////////
    // Writeback Stage

    // Pipeline Registers for Incoming Signals
    logic [1:0] rf_wr_sel_WB;
    PipelineReg #(.CYCLES(2), .WIDTH(2)) PR_rf_wr_sel_WB (.in(rf_wr_sel_EX), .out(rf_wr_sel_WB), .CLK(CLK), .EN(1'd1));
    logic regWrite_WB;
    PipelineReg #(.CYCLES(2), .WIDTH(1)) PR_regWrite_WB (.in(regWrite_EX), .out(regWrite_WB), .CLK(CLK), .EN(1'd1));
    logic [31:0] alu_out_WB;
    PipelineReg PR_alu_out_WB (.in(alu_out_MEM), .out(alu_out_WB), .CLK(CLK), .EN(1'd1));
    logic [31:0] IR_WB;
    PipelineReg PR_IR_WB (.in(IR_MEM), .out(IR_WB), .CLK(CLK), .EN(1'd1));
    logic [31:0] pc_WB;
    PipelineReg #(.CYCLES(2)) PR_pc_WB (.in(pc_EX), .out(pc_WB), .CLK(CLK), .EN(1'd1));
    logic [31:0] csr_out_WB;
    PipelineReg #(.CYCLES(2)) PR_csr_out_WB (.in(csr_out_EX), .out(csr_out_WB), .CLK(CLK), .EN(1'd1));

    logic [31:0] pcPlus4_WB;
    assign pcPlus4_WB = pc_WB + 32'd4;
    
    logic [31:0] wd;
    Mux4_1 #(32) RegMux (.A(pcPlus4_WB), .B(CSR_REG), .C(MEM_DOUT2), .D(alu_out_WB),
            .sel(rf_wr_sel_WB), .MUX_OUT(wd));
    RegFile RegF (.clk(CLK), .en(regWrite_WB & (~squash[3])), .adr1(IR[19:15]),
            .adr2(IR[24:20]), .wa(IR_WB[11:7]), .*); 
        
    //    // CSR/INTR
    //    logic intTaken;
    //    logic csrWrite; 
    //    logic [31:0] mepc;
    //    logic [31:0] mtvec;   
    //    logic mie;      
    //    CSR OTTER_CSR (.ADDR(IR[31:20]), .WD(alu_out), .WR_EN(csrWrite), .RD(CSR_REG), .PC(pc),
    //        .CSR_MEPC(mepc), .CSR_MTVEC(mtvec), .CSR_MIE(mie), .INT_TAKEN(intTaken), .*);
    //    logic interrupt;
    //    assign interrupt = INTR & mie; 
    
    // DEBUG
    logic EX_VALID, FAIL, FINISH;
    assign EX_VALID = ~squash[1];
    assign FAIL = EX_VALID & (pc_EX == 32'h2bc);
    assign FINISH = EX_VALID & (pc_EX == 32'hc8);

endmodule
