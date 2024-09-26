`timescale 1ns / 1ps

module fetch_stage(	
	input [15:0] branch_target,
	input PcSrc,
	input clk,
	output [15:0] instruction_fetch_output,
	output [15:0] fetch_adderess_output,
	output hit_fetch_output
    );
	 
	 wire [15:0] mux_output_wire;
	 wire [15:0] pc_output_wire;
	 wire [63:0] instruction_memory_output_wire; 

	pc pc_module (
    .next_instruction_address(mux_output_wire), 
    .clk(clk), 
    .hit(hit_fetch_output), 
    .current_instruction_address(pc_output_wire)
    );
	 
	adder adder_module (
    .adder_input_1(pc_output_wire), 
    .adder_input_2(16'h0002), 
    .adder_output(fetch_adderess_output)
    );
	 
	multiplexer2_1 mux_module (
    .mux_input_line0(fetch_adderess_output), 
    .mux_input_line1(branch_target), 
    .select_line(PcSrc), 
    .mux_output(mux_output_wire)
    );

	instruction_memory instruction_memory_module (
    .instruction_memory_input_address(pc_output_wire), 
    .clk(clk), 
    .instruction_memory_output(instruction_memory_output_wire)
    );
	 
	instruction_cache instruction_cache_module (
    .cache_instruction_input(pc_output_wire), 
    .cache_dataline_input(instruction_memory_output_wire), 
    .clk(clk), 
    .cache_instruction_output(instruction_fetch_output), 
    .hit(hit_fetch_output)
    ); 

endmodule
