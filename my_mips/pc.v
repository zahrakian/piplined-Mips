`timescale 1ns / 1ps

module pc(
	input [15:0] next_instruction_address,
	input clk,
	input hit,
	
	output reg[15:0] current_instruction_address
    );

	initial
		current_instruction_address = 16'h0000;

	always @(negedge clk)
	begin
		if(hit == 1)
		begin
			current_instruction_address <= next_instruction_address;
		end
	end

endmodule
