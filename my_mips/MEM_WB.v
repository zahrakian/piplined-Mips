`timescale 1ns / 1ps

module MEM_WB(
	input clk,
	input [15:0] memory_read_data_in,
	input [15:0] alu_result_in,
	input [2:0] mux_rd_rt_in,
	input MemToReg_in,
	input RegWrite_in,
	input hit_in,
	output reg [15:0] memory_read_data_out,
	output reg [15:0] alu_result_out,
	output reg [2:0] mux_rd_rt_out,
	output reg MemToReg_out,
	output reg RegWrite_out
    );
	
	always @ (negedge clk)
	begin
		if(hit_in)
		begin
			memory_read_data_out 	<= memory_read_data_in;
			alu_result_out		      <= alu_result_in;
			mux_rd_rt_out		      <= mux_rd_rt_in;
			MemToReg_out		   	<= MemToReg_in;
			RegWrite_out		   	<= RegWrite_in;
		end
	end



endmodule
