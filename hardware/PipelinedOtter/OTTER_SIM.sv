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


module OTTER_SIM(
    input CLK
    );
    // logic CLK = 1;
    logic SCLK = 1;
   logic BTNL = 0;
   logic timer_int = 0;
   logic m_ext_int = 0;
   logic BTNC = 0;
   logic [15:0] SWITCHES = 16'd0;
   logic [15:0] LEDS;
   logic [7:0] CATHODES;
   logic [3:0] ANODES;
   logic SPI_SDI;
   logic SPI_SCLK;
   logic SPI_SD_CS;
   logic SPI_TFT_CS;
   logic SPI_SDO;
   logic TFT_DC;
    
    OTTER_Wrapper Otter(.*);
   
    // always begin

    // #5;
    // CLK = ~CLK;
    // end
    
    // always begin
    // #50;
    // BTNL = 1;
    // #30
    // BTNL = 0;
    // end

    initial 
    begin
    $dumpfile("logs/vlt_dump.vcd");
    $dumpvars();

    #2000
    $finish;
    end
    
    

endmodule
