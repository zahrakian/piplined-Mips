`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:26:42 12/18/2020
// Design Name:   MIPS
// Module Name:   D:/data/university/az memari/hws/hw1/all/my_mips/mips_test.v
// Project Name:  my_mips
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: MIPS
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module mips_test;

	// Inputs
	reg clock;

	// Instantiate the Unit Under Test (UUT)
	MIPS uut ( 
		.clock(clock)
	);

	initial begin
		// Initialize Inputs
		clock = 0;
        
		// Add stimulus here

	end


	always #10 clock = ~clock;
      
endmodule

