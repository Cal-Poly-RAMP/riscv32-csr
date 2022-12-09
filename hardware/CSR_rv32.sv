`timescale 1ns / 1ps
///////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:  F. Wilken
// 
// Create Date: 02/02/2019 03:01:38 PM
// Design Name: 
// Module Name: CSR
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: RISC-V Control & Status Register
// 
// Dependencies: 
// Revision:
// Revision 
// Additional Comments:
///////////////////////////////////////////////////////////////////////////

module CSR_rv32 (
    input CLK,
    input enable,           // Write       
    input [11:0] addr,      // IR [31:]
    input [1:0] mode_sel,   // IR [13:12]
    input [4:0] immediate,  // IR [19:15]
    input immediate_sel,    // IR [14]
    input [31:0] rs1,
    input timer_int,
    input m_ext_int,
    input stall,            // See if pipeline is stalling
    input mret,
    input [2:0] pcSource,
    input [31:0] next_pc,
    output logic flush,     // Tell Pipeline to Start Flushing
    output logic [31:0] read_data,
    output logic [31:0] next_pc_updated
    );

    typedef enum logic [1:0]
    {
        WRITE   = 2'b01,
        SET     = 2'b10,
        CLEAR   = 2'b11
    } mode_e;

    typedef enum logic [11:0] {
        MSTATUS =   12'h300,
        MIE     =   12'h304,
        MTVEC   =   12'h305,
        MEPC    =   12'h341,
        MCAUSE  =   12'h342,
        MHARTID =   12'hF14
    } addr_e;

    typedef struct packed {
        enum logic [1:0] {INACTIVE = 0, ENTRY, ACTIVE} state;
        logic [2:0] entry_count;
    } int_state_t;

    int_state_t int_state = 0;

    // Register Declarations
    logic [31:0] mstatus;
    logic [31:0] mie;
    logic [31:0] mtvec;
    logic [31:0] mepc;
    logic [31:0] mcause;

    logic [31:0] write_data;
    assign write_data = (immediate_sel)? {27'b0 ,immediate} : rs1;

    always_comb
    begin
        // Default Values
        flush = 0;
        next_pc_updated = next_pc;

        if (int_state.state == ENTRY) 
        begin
            flush = 1;
            // At the end of entry period, jump to interrupt
            if (int_state.entry_count[0]) 
            begin
                next_pc_updated = mtvec;
                // flush = 0;
            end
        end
        // Jump To MEPC when mret occurs
        else if (int_state.state == ACTIVE && mret) next_pc_updated = mepc;
    end

    always_ff @ (posedge CLK) begin
        // Check MIE bit for entry
        if ( int_state.state == INACTIVE && mstatus[3] )
        begin
            // Check Machine External Interrupt and its enable bit
            if (m_ext_int & mie[11])
            begin
                // Set mcause to show mei
                mcause <= {1'b1, 31'd11};
                // Move to entry and set counter to 3
                int_state.state <= ENTRY;
                int_state.entry_count <= 3'b100;
                // Save mie into mpie
                mstatus[7] <= mstatus[3];
                mstatus[3] <= 0;
                // Update mepc
                mepc <= next_pc;
            end
            // Check Timer Interrupt and its Enable Bit
            else if (timer_int & mie[7]) begin
                // Set mcause to show mti
                mcause <= {1'b1, 31'd7};
                // Move to entry and set counter to 3
                int_state.state <= ENTRY;
                int_state.entry_count <= 3'b100;
                // Save mie into mpie
                mstatus[7] <= mstatus[3];
                mstatus[3] <= 0;
                // Update mepc
                mepc <= next_pc;
            end
        end

        else if (int_state.state == ENTRY)
        begin 
            // Shift counter over unless stalled
            if (~stall) int_state.entry_count <= (int_state.entry_count >> 1);
            // Updated mepc on control change
            if ( pcSource != 0) mepc <= next_pc;
            // exit entry
            if (int_state.entry_count[0] == 1 && ~stall) int_state.state <= ACTIVE;
        end
        else if (int_state.state == ACTIVE && mret)
        begin
            mstatus[3] <= mstatus[7];
            int_state.state <= INACTIVE;
        end

    end

    // Asynch Read
    always_comb
    begin
        case (addr)
            MSTATUS:    read_data = mstatus;
            MIE:        read_data = mie;
            MTVEC:      read_data = mtvec;
            MEPC:       read_data = mepc;
            MCAUSE:     read_data = mcause;
            MHARTID:    read_data = 0;
            default:    read_data = 0;
        endcase
    end

    // Macro for Write/Set/Clear
    `define CSR_WSC(register)                           \
        case (mode_sel)                                 \
            WRITE: register <= write_data;              \
            SET:   register <= register | write_data;   \
            CLEAR: register <= register & ~write_data;  \
            default: ;                                  \
        endcase                                         

    // Synchronous Write
    always_ff @ (posedge CLK) begin
        if (enable) begin 
        case (addr)
            // MSTATUS: 
            MSTATUS: begin
                `CSR_WSC(mstatus)
            end
            MIE: begin
                `CSR_WSC(mie)
            end
            MTVEC: begin
                `CSR_WSC(mtvec)
            end
            MEPC: begin
                `CSR_WSC(mepc)
            end
            MCAUSE: begin
                `CSR_WSC(mcause)
            end
            default: begin
            end
        endcase
        end
    end

endmodule