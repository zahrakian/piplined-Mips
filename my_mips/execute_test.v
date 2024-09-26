`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:24:46 02/01/2021
// Design Name:   execute_stage
// Module Name:   D:/data/university/az memari/hws/hw1/all/my_mips/execute_test.v
// Project Name:  my_mips
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: execute_stage
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module execute_test;

	// Inputs
	reg clk;
	reg [15:0] adder_in;
	reg [15:0] regfile_read_data_1_in;
	reg [15:0] regfile_read_data_2_in;
	reg [15:0] sign_extended_input;
	reg [2:0] rt_in;
	reg [2:0] rd_in;
	reg RegDst_in;
	reg ALUSrc_in;
	reg [1:0] ALUOp_in;

	// Outputs
	wire [15:0] ALU_Result;
	wire [15:0] adder_out;
	wire Zero;
	wire [2:0] mux_rd_rt_output;

	// Instantiate the Unit Under Test (UUT)
	execute_stage uut (
		.clk(clk), 
		.adder_in(adder_in), 
		.regfile_read_data_1_in(regfile_read_data_1_in), 
		.regfile_read_data_2_in(regfile_read_data_2_in), 
		.sign_extended_input(sign_extended_input), 
		.rt_in(rt_in), 
		.rd_in(rd_in), 
		.RegDst_in(RegDst_in), 
		.ALUSrc_in(ALUSrc_in), 
		.ALUOp_in(ALUOp_in), 
		.ALU_Result(ALU_Result), 
		.adder_out(adder_out), 
		.Zero(Zero), 
		.mux_rd_rt_output(mux_rd_rt_output)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		adder_in = 0;
		regfile_read_data_1_in = 0;
		regfile_read_data_2_in = 0;
		sign_extended_input = 0;
		rt_in = 0;
		rd_in = 0;
		RegDst_in = 0;
		ALUSrc_in = 0;
		ALUOp_in = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

