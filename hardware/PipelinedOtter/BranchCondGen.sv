`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 01/31/2022 05:39:15 PM
// Design Name: 
// Module Name: BranchCondGen
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


module BranchCondGen(
    input [31:0] rs1,
    input [31:0] rs2,
    input [2:0]  funct3,
    input [6:0]  op,
    input squash_EX,
    output logic [2:0] pcSource
    );
    
    typedef enum logic [6:0] {
        JAL = 7'b1101111,
        JALR = 7'b1100111,
        BRANCH = 7'b1100011
    } opcode_t;
    opcode_t OPCODE;
    assign OPCODE = opcode_t'(op);
    
    logic br_eq;
    logic br_lt;
    logic br_ltu;
    
    always_comb 
    begin
    
    pcSource = 3'd0;
    
    case (OPCODE)
        JAL: begin
            pcSource = 3'd3;
            end
        
        JALR: begin
            pcSource = 3'd1;
            end
            
        BRANCH: begin
            br_eq = rs1 == rs2;
            br_lt = $signed(rs1) < $signed(rs2);
            br_ltu = rs1 < rs2;
            if      (  funct3 == 3'b000 && br_eq
                    || funct3 == 3'b001 && !br_eq
                    || funct3 == 3'b100 && br_lt
                    || funct3 == 3'b101 && !br_lt
                    || funct3 == 3'b110 && br_ltu
                    || funct3 == 3'b111 && !br_ltu ) 
                    pcSource = 3'd2; //bgeu
            end
            default:
            begin end
    endcase
    
    if (squash_EX) pcSource = 3'd0;
    
    end
endmodule
