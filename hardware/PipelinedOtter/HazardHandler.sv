`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 10/17/2022 09:59:23 PM
// Design Name: 
// Module Name: HazardHandler
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



module HazardHandler(
    input CLK,
    input regWrite,
    input alu_srcA,
    input [6:0] op,
    input [2:0] pcSource,
    input [1:0] alu_srcB,
    input [4:0] addr1,
    input [4:0] addr2,
    input [4:0] wr_addr,
    input [31:0] alu_A,
    input [31:0] alu_B,
    input [31:0] rs2,
    input [31:0] alu_out,
    input [31:0] mem_out,
    input [31:0] csr_out,
    input csr_en,
    input flush,
    input mret,
    output logic [31:0] alu_A_fw,
    output logic [31:0] alu_B_fw,  
    output logic [31:0] rs2_fw,
    output logic stall,
    output logic [3:0] squash
    );
    
    typedef enum logic [6:0] {
        LUI = 7'b0110111,
        AUIPC = 7'b0010111,
        JAL = 7'b1101111,
        JALR = 7'b1100111,
        BRANCH = 7'b1100011,
        LOAD = 7'b0000011,
        STORE = 7'b0100011,
        OP_IMM = 7'b0010011,
        OP = 7'b0110011,
        CSR = 7'b1110011
    } opcode_t;
    opcode_t OPCODE;
    assign OPCODE = opcode_t'(op);
    
    // Forwarding Struct
    typedef struct packed
    {
        logic [31:0]    data;
        logic [4:0]     addr;
        logic           is_load;
    } fw_t;
    
    //Declare Forwarding Structs
    fw_t fw_1;
    fw_t fw_1_next;
    fw_t fw_2;
    fw_t fw_2_next;
   
    logic [3:0] squash_next = 0;
    // Bits of Squash:
    // 0: DE, 1: EX, 2: MEM, 3: WB
    
    // Sequentially update squash registers and forwarding
    always_ff @ (posedge CLK)
    begin
        fw_1 <= fw_1_next;
        fw_2 <= fw_2_next;
        squash <= squash_next;
//        pcWrite <= pcWrite_next;
//        memRead1 <= memRead1_next;
    end
    
    // Combinatorially assign logic 
    always_comb
    begin
        stall = 1;

        // Forwarding Register Logic
        // Default values
        fw_2_next = fw_1;
        fw_1_next.is_load = 0;
        
        // If the operation would write to a register (not x0), 
        // save it for forwarding
        if ( regWrite == 1 && wr_addr != 0 && squash[1] == 0 && stall == 1)
            begin
            fw_1_next.data = alu_out;
            fw_1_next.addr = wr_addr;
            // If op was a load, mark load flag and ignore alu data
            if ( OPCODE == LOAD )
                begin
                fw_1_next.is_load = 1;
                fw_1_next.data = 0;
                end
            // If csr instruction, store csr out
            if ( csr_en == 1'b1 )
            begin
                fw_1_next.data = csr_out;
                fw_1_next.addr = wr_addr;
            end
            end
        // Set data to 0 for no forward if op doesnt write
        else
            begin
            fw_1_next.is_load = 0;
            fw_1_next.data = 0;
            fw_1_next.addr = 0;
            end
        
        

        // Control Logic
        alu_A_fw = alu_A;
        alu_B_fw = alu_B;
        rs2_fw = rs2;
        // STALL IS ACTIVE LOW
        
        // Left shift squash to make stage 0 bit move to stage 1, etc
        // Squash is effectively a shift register to track insturctions through stages
        squash_next = squash << 1;

        

        
        // Forward alu source A only if it is coming from rs1
        if ( alu_srcA == 0 )
        begin
            if ( addr1 == fw_1.addr)
            begin
                if ( fw_1.is_load)
                begin
                    // Enable active low stall
                    stall = 0;
                    // Squash next mem stage
                    squash_next[2] = 1;
                    // Don't forward current ex stage data
                    fw_1_next.data = 0;
                    fw_1_next.addr = 0;
                end
                // If not load, forward
                else alu_A_fw = fw_1.data;
            end
            // If 2nd most recent forward is a load, no stalls needed
            else if ( addr1 == fw_2.addr)
            begin
                if ( fw_2.is_load)
                begin
                    alu_A_fw = mem_out;
                end  
                else alu_A_fw = fw_2.data;
            end
        end
        
        // Same logic as above
        // FW RS2
        if ( addr2 == fw_1.addr)
        begin
            if ( fw_1.is_load)
            begin
                stall = 0;
                squash_next[2] = 1;
                fw_1_next.data = 0;
                fw_1_next.addr = 0;
            end
            else rs2_fw = fw_1.data;
        end
        else if ( addr2 == fw_2.addr)
        begin
            if ( fw_2.is_load)
            begin
                rs2_fw = mem_out;
            end  
            else rs2_fw = fw_2.data;
        end
        
        
        // Set B to forwardwed RS2 if relevant
        if ( alu_srcB == 0 ) alu_B_fw = rs2_fw;
        
        // On any operation that changes PC, put squash in decode and execute
        if ((pcSource != 0 || mret) && stall == 1)
        begin
            // Enables bits 0 and 1 for de and ex
            squash_next = squash_next | 4'h3;
        end

        if (~stall) squash_next[1:0] = squash[1:0];
        if (stall == 0 ) fw_1_next.is_load = 0;
        if (flush && stall) squash_next[0] = 1;
       
    end
    
endmodule
