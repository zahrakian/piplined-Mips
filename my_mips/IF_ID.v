`timescale 1ns / 1ps

module IF_ID(
	input clk,
	input [15:0] adder_input, instruction_input,
	input hit_fetch_input,
	
	output reg [15:0] addr_output, instruction_output
	);

	initial
	begin
		instruction_output = 0;
	end

	always @ (negedge clk) 
	begin
		if(hit_fetch_input)
		begin
			addr_output 	      <= adder_input;
			instruction_output   <= instruction_input;
		end
	end


endmodule
