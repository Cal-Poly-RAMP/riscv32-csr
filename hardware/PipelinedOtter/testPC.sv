`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 09/24/2018 08:37:20 AM
// Design Name: 
// Module Name: simTemplate
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


module testPC(
     );
     logic clk=0;
     logic [31:0] in;
     logic [31:0] out1;
     logic [31:0] out2;
     logic [31:0] out3;
     PipelineReg #(1) PR1 (.CLK(clk), .in(in), .out(out1));
     PipelineReg #(2) PR2 (.CLK(clk), .in(in), .out(out2));
     PipelineReg #(3) PR3 (.CLK(clk), .in(in), .out(out3));
    
   always begin
      #5  clk =  ! clk; 
    end

    initial begin
    

    in = 15;
    #10
    in = 20;
    #10;
    in = 25;
    #10;
    in = 0;
    end
    
endmodule
