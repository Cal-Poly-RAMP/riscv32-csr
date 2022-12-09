`timescale 1ns / 1ps

module mtimer (
    input CLK,
    input [31:0] mtimecmp_in,
    input [1:0] mtimecmp_set,       // Top Bit sets high, bottom sets low
    output logic [31:0] mtime_h,    // Top 32 of 64 bit timer
    output logic [31:0] mtime_l,    // Bottom 32 of 64 bit timer
    output logic timer_int
    );
    logic [63:0] mtime = 0;
    logic [63:0] mtimecmp = -1;

    always_comb
    begin
        mtime_h = mtime[63:32];
        mtime_l = mtime[31:0];
        timer_int = ( mtime >= mtimecmp ) ? 1 : 0;
    end

    always_ff @ (posedge CLK)
    begin
        if ( mtimecmp_set [0]) mtimecmp [31:0] <= mtimecmp_in;
        if ( mtimecmp_set [1]) mtimecmp [63:32] <= mtimecmp_in;
        mtime <= mtime + 1;
    end

endmodule