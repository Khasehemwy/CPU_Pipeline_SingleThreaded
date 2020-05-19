`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:06:54 02/18/2020
// Design Name:   Main
// Module Name:   D:/OneDrive/Projects/PrinciplesOfComputerComposition/ISE/CPU/VTF_CPU.v
// Project Name:  CPU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Main
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module VTF_CPU;

	// Inputs
	reg CLK;
	reg Reset;

	// Outputs
	wire PCWrite;
	wire extendData;
	wire Branch;
	wire Jump;
	wire [2:1] PCSrc;
	wire [6:1] AluOpCode;
	wire [32:1] aluOut;
	wire [32:1] readData1;
	wire [32:1] readData2;
	wire [32:1] readData3;
	wire [32:1] writeData;
	wire [32:1] entireOpCode;
	wire [32:1] currentAddress;
	wire [32:1] newAddress;

	// Instantiate the Unit Under Test (UUT)
	Main uut (
		.CLK(CLK), 
		.Reset(Reset), 
		.PCWrite(PCWrite), 
		.PCSrc(PCSrc),
		.Branch(Branch),
		.Jump(Jump),
		.AluOpCode(AluOpCode), 
		.aluOut(aluOut),
		.readData1(readData1), 
		.readData2(readData2), 
		.readData3(readData3), 
		.extendData(extendData), 
		.writeData(writeData), 
		.entireOpCode(entireOpCode), 
		.currentAddress(currentAddress),
		.newAddress(newAddress)
	);

	initial begin
		// Initialize Inputs
		CLK = 0;
		Reset = 1;

		// Wait 100 ns for global reset to finish
		#50 Reset=0;
        
		// Add stimulus here

	end

	always #50 CLK=~CLK;

      
endmodule

