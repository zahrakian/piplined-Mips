`timescale 1ns / 1ps

module Shift_Register(
	input clk,
	input signed [15:0] b,
	output reg [15:0] shifted_b
    );
	
	reg [15:0] tmp;
	reg PL = 1;
	
	always @ (b)
	begin
		tmp <= 0;
		PL <= 1;
	end
	
	always @ (negedge clk or PL)
	begin
		if (PL) begin
			tmp <= b;
			PL <= 0;
		end
		else begin
			tmp <= tmp << 1;
			shifted_b <= tmp;
		end
	end
	
endmodule