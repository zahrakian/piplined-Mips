`timescale 1ns / 1ps

module multiplexer2_1(
 	input [15:0] mux_input_line0,
	input [15:0] mux_input_line1,
	
	input select_line,
	
	output [15:0] mux_output
    );
	 
	assign mux_output = select_line ? mux_input_line1 : mux_input_line0;
	
endmodule
