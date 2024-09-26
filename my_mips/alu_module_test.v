`timescale 1ns / 1ps



module alu_module_test;

	// Inputs
	reg clk;
	reg [2:0] ALU_control;
	reg [15:0] ALU_input_1;
	reg [15:0] ALU_input_2;
	reg [3:0] func;

	// Outputs
	wire [15:0] ALU_Result;
	wire Zero;

	// Instantiate the Unit Under Test (UUT)
	ALU uut (
		.clk(clk), 
		.ALU_control(ALU_control), 
		.ALU_input_1(ALU_input_1), 
		.ALU_input_2(ALU_input_2), 
		.func(func), 
		.ALU_Result(ALU_Result), 
		.Zero(Zero)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		ALU_control = 0;
		ALU_input_1 = 12;
		ALU_input_2 = 43;
		func = 4'b1000;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
	always #10 clk = ~clk;
      
endmodule

