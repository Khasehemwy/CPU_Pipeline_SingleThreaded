`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:48:46 03/05/2020
// Design Name:   Main
// Module Name:   D:/OneDrive/Projects/PrinciplesOfComputerComposition/ISE/CPU_Stream/VTF_CPU_Stream.v
// Project Name:  CPU_Stream
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

module VTF_CPU_Stream;

	// Inputs
	reg CLK;
	reg Reset;

	// Outputs
	wire PCWrite;
	wire PCWrite_EXE;
	wire PCWrite_MEM;
	wire extendSelect_ID;
	wire Reset_EXE;
	wire Reset_MEM;
	wire jumpSrc;
	wire regShouldWrite_ID;
	wire aluInputBSelect_ID;
	wire memWrite_ID;
	wire memRead_ID;
	wire memToReg_ID;
	wire regShouldWrite_EXE;
	wire memWrite_EXE;
	wire memRead_EXE;
	wire memToReg_EXE;
	wire regShouldWrite_MEM;
	wire memWrite_MEM;
	wire memRead_MEM;
	wire memToReg_MEM;
	wire regShouldWrite_WB;
	wire [5:1] regAddress1_ID;
	wire [5:1] regAddress2_ID;
	wire [5:1] regWriteAddress_ID;
	wire [5:1] regReadAddress1_EXE;
	wire [5:1] regReadAddress2_EXE;
	wire [5:1] regWriteAddress_EXE;
	wire [5:1] regWriteAddress_MEM;
	wire [5:1] regWriteAddress_WB;
	wire [6:1] aluOpCode_ID;
	wire [6:1] aluOpCode_EXE;
	wire [16:1] Immediate_extend;
	wire [32:1] branchAddress;
	wire [32:1] Immediate_ID;
	wire [32:1] Immediate_EXE;
	wire [32:1] newAddress_next_IF;
	wire [32:1] entireOpCode_IF;
	wire [32:1] newAddress_branch;
	wire [32:1] currentAddress;
	wire [32:1] newAddress_next_ID;
	wire [32:1] regReadData1_ID;
	wire [32:1] regReadData2_ID;
	wire [32:1] entireOpCode_ID;
	wire [32:1] newAddress_next_EXE;
	wire [32:1] regReadData1_EXE;
	wire [32:1] regReadData2_EXE;
	wire [32:1] aluInputB;
	wire [32:1] aluOut_EXE;
	wire [32:1] aluOut_MEM;
	wire [32:1] regReadData2_MEM;
	wire [32:1] memReadData_MEM;
	wire [32:1] regWriteData_WB;
	wire [32:1] newAddress_jump_EXE;
	wire [26:1] newAddress_jump_ID;
	wire [2:1] PCSrc_branch_ID;
	wire [2:1] PCSrc_jump_ID;
	wire [2:1] PCSrc_jump_EXE;
	wire [2:1] PCSrc_branch_EXE;
	wire [2:1] PCSrc_MEM;

	// Instantiate the Unit Under Test (UUT)
	Main uut (
		.CLK(CLK), 
		.Reset(Reset), 
		.PCWrite(PCWrite), 
		.PCWrite_EXE(PCWrite_EXE), 
		.PCWrite_MEM(PCWrite_MEM), 
		.extendSelect_ID(extendSelect_ID), 
		.Reset_EXE(Reset_EXE), 
		.Reset_MEM(Reset_MEM), 
		.jumpSrc(jumpSrc), 
		.regShouldWrite_ID(regShouldWrite_ID), 
		.aluInputBSelect_ID(aluInputBSelect_ID), 
		.memWrite_ID(memWrite_ID), 
		.memRead_ID(memRead_ID), 
		.memToReg_ID(memToReg_ID), 
		.regShouldWrite_EXE(regShouldWrite_EXE), 
		.memWrite_EXE(memWrite_EXE), 
		.memRead_EXE(memRead_EXE), 
		.memToReg_EXE(memToReg_EXE), 
		.regShouldWrite_MEM(regShouldWrite_MEM), 
		.memWrite_MEM(memWrite_MEM), 
		.memRead_MEM(memRead_MEM), 
		.memToReg_MEM(memToReg_MEM), 
		.regShouldWrite_WB(regShouldWrite_WB), 
		.regAddress1_ID(regAddress1_ID), 
		.regAddress2_ID(regAddress2_ID), 
		.regWriteAddress_ID(regWriteAddress_ID), 
		.regReadAddress1_EXE(regReadAddress1_EXE), 
		.regReadAddress2_EXE(regReadAddress2_EXE), 
		.regWriteAddress_EXE(regWriteAddress_EXE), 
		.regWriteAddress_MEM(regWriteAddress_MEM), 
		.regWriteAddress_WB(regWriteAddress_WB), 
		.aluOpCode_ID(aluOpCode_ID), 
		.aluOpCode_EXE(aluOpCode_EXE), 
		.Immediate_extend(Immediate_extend), 
		.branchAddress(branchAddress), 
		.Immediate_ID(Immediate_ID), 
		.Immediate_EXE(Immediate_EXE), 
		.newAddress_next_IF(newAddress_next_IF), 
		.entireOpCode_IF(entireOpCode_IF), 
		.newAddress_branch(newAddress_branch), 
		.currentAddress(currentAddress), 
		.newAddress_next_ID(newAddress_next_ID), 
		.regReadData1_ID(regReadData1_ID), 
		.regReadData2_ID(regReadData2_ID), 
		.entireOpCode_ID(entireOpCode_ID), 
		.newAddress_next_EXE(newAddress_next_EXE), 
		.regReadData1_EXE(regReadData1_EXE), 
		.regReadData2_EXE(regReadData2_EXE), 
		.aluInputB(aluInputB), 
		.aluOut_EXE(aluOut_EXE), 
		.aluOut_MEM(aluOut_MEM), 
		.regReadData2_MEM(regReadData2_MEM), 
		.memReadData_MEM(memReadData_MEM), 
		.regWriteData_WB(regWriteData_WB), 
		.newAddress_jump_EXE(newAddress_jump_EXE), 
		.newAddress_jump_ID(newAddress_jump_ID), 
		.PCSrc_branch_ID(PCSrc_branch_ID), 
		.PCSrc_jump_ID(PCSrc_jump_ID), 
		.PCSrc_jump_EXE(PCSrc_jump_EXE), 
		.PCSrc_branch_EXE(PCSrc_branch_EXE), 
		.PCSrc_MEM(PCSrc_MEM)
	);

	initial begin
		// Initialize Inputs
		CLK = 1;
		Reset = 0;

		// Wait 100 ns for global reset to finish
        
		// Add stimulus here

	end

	always #40 CLK=~CLK;
      
endmodule

