`timescale 1ns / 1ps

module ID_EX(
	input clk, hit_in,
	input [15:0] adder_in, sign_extended_input,
	input [15:0] regfile_read_data_1_in, regfile_read_data_2_in,
	input [2:0] rt_in, rd_in,
	input [1:0] ALUOp_in,
	input RegDst_in, ALUSrc_in, MemToReg_in, RegWrite_in, MemRead_in, MemWrite_in, Branch_in,
	
	output reg [15:0] adder_out, sign_extended_output,
	output reg [15:0] regfile_read_data_1_out, regfile_read_data_2_out,
	output reg [2:0] rt_out, rd_out,

	output reg RegDst_out, ALUSrc_out, MemToReg_out, RegWrite_out, MemRead_out, MemWrite_out, Branch_out,
	output reg [1:0] ALUOp_out
	);
	
	initial
	begin
		Branch_out = 0;
		MemToReg_out = 0;
	end
	
	always @ (negedge clk)
	begin
		if(hit_in)
		begin
			adder_out 						 <= adder_in;
			regfile_read_data_1_out		 <= regfile_read_data_1_in;
			regfile_read_data_2_out 	 <= regfile_read_data_2_in;
			sign_extended_output        <= sign_extended_input;
			rt_out 							 <= rt_in; 
			rd_out 							 <= rd_in;
			RegDst_out						 <= RegDst_in;
			ALUSrc_out						 <= ALUSrc_in;
			MemToReg_out					 <= MemToReg_in;
			RegWrite_out				    <= RegWrite_in;
			MemRead_out						 <= MemRead_in;
			MemWrite_out					 <= MemWrite_in;
			Branch_out						 <= Branch_in;
			ALUOp_out						 <= ALUOp_in;
		end
	end
	
endmodule
