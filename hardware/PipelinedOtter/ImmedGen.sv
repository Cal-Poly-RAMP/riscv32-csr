`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 02/06/2022 09:25:43 PM
// Design Name: 
// Module Name: ImmedGen
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


module ImmedGen(
    input [31:7] IR,
    output logic [31:0] UType,
    output logic [31:0] IType,
    output logic [31:0] SType
    );
    
    always_comb
    begin
    UType = {IR[31:12], 12'b0};
    IType = {{20{IR[31]}},IR[31:20]};
    SType = {{20{IR[31]}}, IR[31:25], IR[11:7]};    
    end
    
endmodule
