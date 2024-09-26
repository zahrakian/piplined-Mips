`timescale 1ns / 1ps


module mips_test_3;

	// Inputs
	reg clock;

	// Instantiate the Unit Under Test (UUT)
	MIPS uut (
		.clock(clock)
	);

	initial begin
		// Initialize Inputs
		clock = 0;


	end
   
	always #1 clock = ~clock;
	
endmodule

