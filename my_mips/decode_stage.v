`timescale 1ns / 1ps

module decode_stage(
	input clk,
	input [15:0] instruction, regfile_write_data,
	input [2:0] regfile_write_register,
	input RegWrite_out,
	
	//output [2:0] OpCode;
	output [15:0] regfile_read_data_1, regfile_read_data_2, sign_extended_output,
	output [2:0] rt, rd,
	output [1:0] ALUOp,
	output RegDst, ALUSrc, MemToReg, RegWrite, MemRead, MemWrite, Branch
	);
	
	
	assign rt = instruction[9:7];
	assign rd = instruction[6:4];

	register_file reg_file_module (
    .input_reg_file_read_1(instruction[12:10]), 
    .input_reg_file_read_2(instruction[9:7]), 
    .write_reg(regfile_write_register), 
    .reg_file_write_data(regfile_write_data), 
    .clk(clk), 
    .RegWrite(RegWrite_out), 
    .regfile_read_data_1(regfile_read_data_1), 
    .regfile_read_data_2(regfile_read_data_2)
    );
	 
	sign_extended sign_extend_module (
    .sign_extend_input(instruction[6:0]), 
    .sign_extend_output(sign_extended_output)
    );
	 
	control_unit_decode control_unit (
    .OpCode(instruction[15:13]), 
    .RegDst(RegDst), 
    .ALUSrc(ALUSrc), 
    .MemToReg(MemToReg), 
    .RegWrite(RegWrite), 
    .MemRead(MemRead), 
    .MemWrite(MemWrite), 
    .Branch(Branch), 
    .ALUOp(ALUOp)
    );

endmodule
