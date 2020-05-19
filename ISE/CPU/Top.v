`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:55:11 02/18/2020
// Design Name:   ProgramCounter
// Module Name:   D:/OneDrive/Projects/PrinciplesOfComputerComposition/ISE/CPU/Top.v
// Project Name:  CPU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ProgramCounter
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Top;

	// Inputs
	reg CLK;
	reg Reset;
	reg PCWrite;
	reg [32:1] newAddress;

	// Outputs
	wire [32:1] currentAddress;

	// Instantiate the Unit Under Test (UUT)
	ProgramCounter uut (
		.CLK(CLK), 
		.Reset(Reset), 
		.PCWrite(PCWrite), 
		.newAddress(newAddress), 
		.currentAddress(currentAddress)
	);
	ROM uut (
		.CLK
	)

	initial begin
		// Initialize Inputs
		CLK = 0;
		Reset = 1;
		PCWrite = 1;
		newAddress = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		always #50 CLK=~CLK;

	end
      
endmodule

