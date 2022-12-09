`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 01/20/2022 01:16:26 PM
// Design Name: 
// Module Name: ProgramCounterTop
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


module ProgramCounter(
    input clk,
    input reset,
    input pcWrite,
    input [31:0] next_pc,
    output logic [31:0] pc = 0
    );
    
    always_ff @(posedge clk) begin
        if (reset)   pc <= 0;
        else if (pcWrite) pc <= next_pc;
    end
    
endmodule
