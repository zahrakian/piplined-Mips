`timescale 1ns / 1ps

module multiplier_mips_test;

	// Inputs
	reg clk;
	reg [15:0] a;
	reg [15:0] b;

	// Outputs
	wire [31:0] result;
	wire validity;

	// Instantiate the Unit Under Test (UUT)
	Multiplier uut (
		.clk(clk), 
		.a(a), 
		.b(b), 
		.result(result), 
		.validity(validity)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		a = 12;
		b = 43;
        
		// Add stimulus here

	end
      
	always #10 clk = ~clk;
		
endmodule

