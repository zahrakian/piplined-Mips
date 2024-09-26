`timescale 1ns / 1ps

module execute_stage(
	input clk,
	input [15:0] adder_in,
	input [15:0] regfile_read_data_1_in, regfile_read_data_2_in,
	input [15:0] sign_extended_input,
	input [2:0] rt_in, rd_in,
	input RegDst_in, ALUSrc_in,
	input [1:0] ALUOp_in,
	
	output [15:0] ALU_Result,
	output [15:0] adder_out,
	output Zero,
	output [2:0] mux_rd_rt_output
	);
	
	wire [2:0] ALUOp_out_reg;
	wire [15:0] mux_output_before_alu;

	adder adder_module (
    .adder_input_1(adder_in), 
    .adder_input_2(sign_extended_input << 1), 
    .adder_output(adder_out)
    );
	
	ALU_control ALU_control_module (
    .current_function(sign_extended_input[3:0]), 
    .ALUOp(ALUOp_in), 
    .ALUOp_out(ALUOp_out_reg)
    );
	 
	multiplexer2_1 mux_module (
    .mux_input_line0(regfile_read_data_2_in), 
    .mux_input_line1(sign_extended_input), 
    .select_line(ALUSrc_in), 
    .mux_output(mux_output_before_alu)
    );
	 
	 
	ALU alu_mudole (
    .clk(clk), 
    .ALU_control(ALUOp_out_reg), 
    .ALU_input_1(regfile_read_data_1_in), 
    .ALU_input_2(mux_output_before_alu), 
    .func(sign_extended_input[3:0]), 
    .ALU_Result(ALU_Result), 
    .Zero(Zero)
    );

	 	 
	assign mux_rd_rt_output = RegDst_in ? rd_in : rt_in;
	
endmodule
