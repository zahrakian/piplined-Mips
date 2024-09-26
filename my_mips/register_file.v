`timescale 1ns / 1ps

module register_file(

	input [2:0] input_reg_file_read_1, input_reg_file_read_2, write_reg,
	input [15:0] reg_file_write_data,
	input clk, RegWrite,
	output [15:0] regfile_read_data_1, regfile_read_data_2
    );

	reg [15:0] regfile [7:0];
	
	initial 
	begin
		regfile[0] = 16'h0000;
		regfile[1] = 16'h0001;
		regfile[2] = 16'h0002;
		regfile[3] = 16'h0003;
		regfile[4] = 16'h0004;
		regfile[5] = 16'h0005;
		regfile[6] = 16'h0006;
		regfile[7] = 16'h0007;
	end
	
	always@(posedge clk)
	begin
		if (RegWrite && (write_reg != 0))
		begin
			regfile[write_reg] = reg_file_write_data;
		end
	end
	
	assign regfile_read_data_1[15:0] = regfile[input_reg_file_read_1];
	assign regfile_read_data_2[15:0] = regfile[input_reg_file_read_2];	


endmodule
