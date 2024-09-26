`timescale 1ns / 1ps

module Adder_Subtractor(
	input [1:0] Sig_Add_Sub,
	input rst,
	input signed [15:0] in,
	output signed [31:0] result
    );
		
	reg signed [31:0] tmp = 0;
	
	always @ (Sig_Add_Sub or rst) 
	begin
		if (rst)
			tmp <= 0;
		else begin
			case (Sig_Add_Sub)
				2'b01 : tmp <= in + tmp;
				2'b10 : tmp <= (~in + 1) + tmp;
			endcase
		end
	end
	
	assign result = tmp;
	
endmodule
