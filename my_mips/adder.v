`timescale 1ns / 1ps

module adder(
	input [15:0] adder_input_1,
	input [15:0] adder_input_2,
	
	output reg [15:0] adder_output
	);
	
	always @ (adder_input_1)
	begin
		adder_output <= adder_input_1 + adder_input_2;
	end

endmodule
