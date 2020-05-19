`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:26:33 02/13/2020
// Design Name:   ALU
// Module Name:   D:/OneDrive/Projects/PrinciplesOfComputerComposition/ISE/CPU/ALU_text.v
// Project Name:  CPU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ALU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ALU_text;

	// Inputs
	reg [32:1] inputA;
	reg [32:1] inputB;
	reg [32:1] aluOpCode;

	// Outputs
	wire [32:1] out;

	// Instantiate the Unit Under Test (UUT)
	ALU uut (
		.inputA(inputA), 
		.inputB(inputB), 
		.aluOpCode(aluOpCode), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		inputA = 1;
		inputB = 2;
		aluOpCode = 4'b0000;

		// Wait 100 ns for global reset to finish
		#100 aluOpCode=4'b0001;
		#100 aluOpCode=4'b0010;
		#100 aluOpCode=4'b0011;
		#100 aluOpCode=4'b0100;
		#100 aluOpCode=4'b0101;
		#100 aluOpCode=4'b0111;

        
		// Add stimulus here

	end
      
endmodule

