`timescale 1ns / 1ps

module memory_stage(
	input clk,
	input [15:0] memory_input_address,
	input [15:0] memory_write_data_input,
	input MemWrite,
	input MemRead,
	input Branch,
	input Zero,
	
	output reg [15:0] memory_read_data_output,
	output PCSrc_out
    );
	
	reg [7:0] Data_memory [1023:0];
	
	always @ (posedge clk)
	begin
		if (MemRead) begin
			memory_read_data_output[15:8] <= Data_memory[memory_input_address];
			memory_read_data_output[7:0]  <= Data_memory[memory_input_address + 1];
		end
		
		if (MemWrite) begin
			Data_memory[memory_input_address] <= memory_write_data_input[15:8];
			Data_memory[memory_input_address + 1] <= memory_write_data_input[7:0];
		end	
	end
	
	assign PCSrc_out = Branch && Zero;


endmodule
