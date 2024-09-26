`timescale 1ns / 1ps

module sign_extended(
	input [6:0] sign_extend_input,
	output reg [15:0] sign_extend_output
    );

	always@(sign_extend_input)
	begin
		sign_extend_output <= {{9{sign_extend_input[6]}} ,sign_extend_input};
	end

endmodule
