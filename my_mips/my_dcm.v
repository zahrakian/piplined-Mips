`timescale 1ns / 1ps

module my_dcm(clock_in, clock_out);

	input clock_in; 
	output reg clock_out; 
	
	reg [4:0] rate = 5'b10010; 
	reg [7:0] counter;
	
	initial 
	begin
		rate = 5'b10010;
		counter = 0;
		clock_out = 0;
	end
	
	always @(posedge clock_in)
	begin
		if(counter < (rate / 2) - 1)
		begin 
			counter <= counter + 1;
		end
		else 
		begin
			counter <= 0;
			clock_out = ~clock_out;
		end
	end

endmodule
