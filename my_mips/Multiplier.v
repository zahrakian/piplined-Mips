`timescale 1ns / 1ps

module Multiplier(
	input clk,
	input signed [15:0] a,
	input signed [15:0] b,
	output signed [31:0] result,
	output validity
    );
		
	wire [15:0] Shifted_b;
	wire [1:0] Sig_Add_or_Sub;
	wire reset_adder;
	wire [31:0] tmp;
	
	Control_Unit CU (
    .clk(clk), 
    .a(a), 
    .Sig_AddOrSub(Sig_Add_or_Sub), 
	 .rst(reset_adder),
    .validity(validity)
    );
	 
	Shift_Register SR (
    .clk(clk), 
    .b(b), 
    .shifted_b(Shifted_b)
    );
	
	Adder_Subtractor Adder_Subtractor (
    .Sig_Add_Sub(Sig_Add_or_Sub),
	 .rst(reset_adder),
    .in(Shifted_b), 
    .result(result)
    );
	 
endmodule