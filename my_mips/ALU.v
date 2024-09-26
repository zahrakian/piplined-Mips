`timescale 1ns / 1ps

module ALU(
	input clk,
	input [2:0] ALU_control,
	input [15:0] ALU_input_1, ALU_input_2,
	input [3:0] func,
	
	output [15:0] ALU_Result,
	output Zero
	);
	
	
	wire division_validity;
	wire multiplier_validity;

	wire [31:0] div_out;
	wire [31:0] mul_out;
	
	reg [31:0] division_temp;
	reg [31:0] multiplier_temp;
	
	divide division (
    .divisor(ALU_input_2), 
    .dividend(ALU_input_1), 
    .clk(clk), 
    .validity(division_validity), 
    .quotient_remainder(div_out)
    );

	Multiplier instance_name (
    .clk(clk), 
    .a(ALU_input_1), 
    .b(ALU_input_2), 
    .result(mul_out), 
    .validity(multiplier_validity)
    );

	always @(*) 
	begin
		if(division_validity) 
			division_temp <= div_out;
	end
	
	always @(*) 
	begin
		if(multiplier_validity) 
			multiplier_temp <= mul_out >>> 1;
	end
	
	
	assign ALU_Result = func == 4'b1001 ? division_temp[15:0]
							: func == 4'b1000 ? multiplier_temp[15:0]
							: ALU_control == 3'b000 ? ALU_input_1 + ALU_input_2
							: ALU_control == 3'b001 ? ALU_input_1 - ALU_input_2
							: ALU_control == 3'b010 ? !ALU_input_1
							: ALU_control == 3'b011 ? ALU_input_1 << ALU_input_2
							: ALU_control == 3'b100 ? ALU_input_1 >> ALU_input_2
							: ALU_control == 3'b101 ? ALU_input_1 & ALU_input_2
							: ALU_control == 3'b110 ? ALU_input_1 | ALU_input_2
							: (ALU_control == 3'b111 & ALU_input_1 < ALU_input_2) ? 1 : 0; 
	
	assign Zero = ALU_Result ? 0 : 1;
endmodule
