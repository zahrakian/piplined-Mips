`timescale 1ns / 1ps

module control_unit_decode(OpCode, RegDst, ALUSrc, MemToReg, RegWrite, MemRead, MemWrite, Branch, ALUOp);
	
	input [2:0] OpCode;
	
	output RegDst, ALUSrc, MemToReg, RegWrite, MemRead, MemWrite, Branch;
	output [1:0] ALUOp;
	
	wire [8:0] out;
	
	assign out = OpCode == 3'b000 ? 9'b100100000 :
					 OpCode == 3'b100 ? 9'b011110011 :
					 OpCode == 3'b101 ? 9'b010001011 :
					 OpCode == 3'b111 ? 9'b010100011 :
					 OpCode == 3'b110 ? 9'b000000101 :
					 OpCode == 3'b001 ? 9'b010100010 : 9'bxxxxxxxxx;

	assign RegDst   = out[8];
	assign ALUSrc	 = out[7];
	assign MemToReg = out[6];
	assign RegWrite = out[5];
	assign MemRead  = out[4];
	assign MemWrite = out[3];
	assign Branch	 = out[2];
	assign ALUOp 	 = out[1:0];
	
endmodule
