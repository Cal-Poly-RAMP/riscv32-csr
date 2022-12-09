`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 10/04/2022 08:41:29 AM
// Design Name: 
// Module Name: PipelineReg
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


module PipelineReg #(parameter CYCLES = 1, parameter WIDTH = 32) (
    input   CLK,
    input   EN,
    input   [WIDTH-1:0] in,
    output logic  [WIDTH-1:0] out
    );
    
    logic   [WIDTH-1:0] register [CYCLES-1:0];
    assign out = register [0];
  
    genvar i;
    generate for (i = 1; i < CYCLES; i++)
        begin
            always_ff @ (posedge CLK)
            begin
                if (EN) register [ i-1 ] <= register [i] ;
            end
        end
    endgenerate
    
    always_ff @ (posedge CLK)
    begin
    if (EN) register [CYCLES - 1] <= in;   
    end
    
endmodule
