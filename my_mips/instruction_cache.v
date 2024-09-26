`timescale 1ns / 1ps

module instruction_cache(
	input [15:0] cache_instruction_input,
	input [63:0] cache_dataline_input,
	input clk,
	output reg [15:0] cache_instruction_output,
	output reg hit
    );

	reg [74:0] cache_memory[7:0];
	reg [74:0] current_data;
	reg [3:0] cache_counter;
	
	integer i;
	integer j;

	initial
	begin
		for(i = 0 ; i<8 ; i = i + 1)
		begin 
			cache_memory[i][73:0] = 74'bx;
			cache_memory[i][74] = 0;
		end
		cache_instruction_output = 16'bx;
		hit  = 0;
		current_data = 75'b0;
		cache_counter[3:0] = 0;
	end
	
	
	always@(posedge clk)
	begin
		current_data = cache_memory[cache_instruction_input[5:3]][74:0];
		if(current_data[74] && (cache_instruction_input[15:6] == current_data[73:64]))
		begin
			hit = 1;
			case(cache_instruction_input[2:1])
				2'b00:
					cache_instruction_output = current_data[63:48];
				2'b01:
					cache_instruction_output = current_data[47:32];		
				2'b10:
					cache_instruction_output = current_data[31:16];
				2'b11:
					cache_instruction_output = current_data[15:0];		
			endcase
		end
		else if((current_data[74] == 0 ) || (cache_instruction_input[15:6] != current_data[73:64]))
		begin
			cache_instruction_output = 16'bx;
			hit = 0;
		end
	end

	always @(cache_dataline_input)
	begin
		if(cache_dataline_input !== 64'bx)
			cache_memory[cache_instruction_input[5:3]][63:0] <= cache_dataline_input;
			cache_memory[cache_instruction_input[5:3]][74] <= 1;
			cache_memory[cache_instruction_input[5:3]][73:64] <= cache_instruction_input[15:6];
			cache_counter <= 0;
	end

endmodule
