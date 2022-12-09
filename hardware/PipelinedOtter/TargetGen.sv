`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 10/04/2022 10:02:47 AM
// Design Name: 
// Module Name: TargetGen
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


module TargetGen(
    input [31:0] pc,
    input [31:0] IR,
    input [31:0] rs1,
    input [31:0] IType,
    output logic [31:0] jalr,
    output logic [31:0] branch,
    output logic [31:0] jal
    );
    
    always_comb
    begin
    jal = pc + {{12{IR[31]}}, IR[19:12], IR[20], IR[30:21],1'b0};
    branch = pc + {{20{IR[31]}},IR[7], IR[30:25], IR[11:8], 1'b0};
    jalr = rs1 + IType;
    end
endmodule
