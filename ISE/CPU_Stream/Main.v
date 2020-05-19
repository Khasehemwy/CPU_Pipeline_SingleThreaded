`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:15:13 03/03/2020 
// Design Name: 
// Module Name:    Main 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Main(
    input CLK,Reset,
    output  PCWrite,PCWrite_EXE,PCWrite_MEM,
            extendSelect_ID,
            Reset_EXE,Reset_MEM,
            jumpSrc,
            isRtype_ID,isRtype_EXE,isRtype_MEM,isRtype_WB,
            isJal_ID,isJal_EXE,
    output  regShouldWrite_ID,aluInputBSelect_ID,memWrite_ID,memRead_ID,memToReg_ID,
            regShouldWrite_EXE,memWrite_EXE,memRead_EXE,memToReg_EXE,
            regShouldWrite_MEM,memWrite_MEM,memRead_MEM,memToReg_MEM,
            regShouldWrite_WB,
    output [5:1]    regAddress1_ID,regAddress2_ID,regWriteAddress_ID,
                    regReadAddress1_EXE,regReadAddress2_EXE,regWriteAddress_EXE,
                    regWriteAddress_MEM,
                    regWriteAddress_WB,
    output [6:1]    aluOpCode_ID,aluOpCode_EXE,
    output [16:1]   Immediate_extend,
    output [32:1]   branchAddress,
                    Immediate_ID,Immediate_EXE,
                    newAddress_next_IF,entireOpCode_IF,newAddress_branch,currentAddress,
                    newAddress_next_ID,regReadData1_ID,regReadData2_ID,entireOpCode_ID,
                    newAddress_next_EXE,regReadData1_EXE,regReadData2_EXE,aluInputB,aluOut_EXE,
                    aluOut_MEM,regReadData2_MEM,memReadData_MEM,
                    regWriteData_WB,
                    newAddress_jump_EXE,
    output [26:1] newAddress_jump_ID,
    output [2:1] PCSrc_branch_ID,PCSrc_jump_ID,PCSrc_jump_EXE,PCSrc_branch_EXE,PCSrc_MEM
    );

    PC pc(
        .CLK(CLK),
        .Reset(Reset),
        .PCWrite(PCWrite),
        .newAddress_normal(newAddress_next_IF),
        .newAddress_branch(newAddress_branch),
        .newAddress_jump(newAddress_jump_EXE),
        .PCSrc_branch(PCSrc_MEM),
        .PCSrc_jump(PCSrc_jump_EXE),

        .currentAddress(currentAddress)
    );

    PCAdder pc_adder(
        .currentAddress(currentAddress),

        .newAddress(newAddress_next_IF)
    );

    ROM rom(
        .Address(currentAddress),

        .dataOut(entireOpCode_IF)
    );

    Reg_IFtoID reg_IFtoID(
        .CLK(CLK),
        .entireOpCode_in(entireOpCode_IF),
        .newAddress_in(newAddress_next_IF),

        .entireOpCode_out(entireOpCode_ID),
        .newAddress_out(newAddress_next_ID)
    );

    ControlUnit controlunit(
        .entireOpCode(entireOpCode_ID),
        ///////////////////////////////

        .Reset(Reset),
        .isRtype(isRtype_ID),
        .isJal(isJal_ID),
        .PCWrite(PCWrite),

        .aluOpCode(aluOpCode_ID),
        .aluInputBSelect(aluInputBSelect_ID),

        .memWrite(memWrite_ID),
        .memRead(memRead_ID),
        .memToReg(memToReg_ID),

        .regShouldWrite(regShouldWrite_ID),
        .regAddress1(regAddress1_ID),
        .regAddress2(regAddress2_ID),
        .regWriteAddress(regWriteAddress_ID),

        .Immediate(Immediate_extend),
        .extendSelect(extendSelect_ID),

        .jumpAddress(newAddress_jump_ID),
        .jumpSrc(jumpSrc),
        .PCSrc_jump(PCSrc_jump_ID),
        .PCSrc_branch(PCSrc_branch_ID)
    );

    Extend extend_imm(
        .Immediate(Immediate_extend),
        .extendSelect(extendSelect_ID),

        .outData(Immediate_ID)
    );

    RegFile regfile(
        .CLK(CLK),
        .Reset(Reset),
        .regAddress1(regAddress1_ID),
        .regAddress2(regAddress2_ID),
        .regShouldWrite(regShouldWrite_WB),
        .regWriteAddress(regWriteAddress_WB),
        .isJal(isJal_EXE),
        .regWriteData_jal(newAddress_next_EXE),
        .writeData(regWriteData_WB),

        .readData1(regReadData1_ID),
        .readData2(regReadData2_ID)
    );

    Reg_IDtoEXE reg_IDtoEXE(
        .CLK(CLK),
        .Reset_in(Reset),
        .isRtype_in(isRtype_ID),
        .isJal_in(isJal_ID),
        .PCWrite_in(PCWrite),
        .regShouldWrite_in(regShouldWrite_ID),
        .aluInputBSelect_in(aluInputBSelect_ID),
        .memWrite_in(memWrite_ID),
        .memRead_in(memRead_ID),
        .memToReg_in(memToReg_ID),
        .newAddress_in(newAddress_next_ID),
        .jumpAddress_in_opCode(newAddress_jump_ID),
        .jumpSrc(jumpSrc),
        .regReadData1_in(regReadData1_ID),
        .regReadData2_in(regReadData2_ID),
        .Immediate_in(Immediate_ID),
        .aluOpCode_in(aluOpCode_ID),
        .regReadAddress2_in(regAddress2_ID),
        .regReadAddress1_in(regAddress1_ID),
        .regWriteAddress_in(regWriteAddress_ID),
        .PCSrc_jump_in(PCSrc_jump_ID),
        .PCSrc_branch_in(PCSrc_branch_ID),

        .Reset_out(Reset_EXE),
        .isRtype_out(isRtype_EXE),
        .isJal_out(isJal_EXE),
        .PCWrite_out(PCWrite_EXE),
        .regShouldWrite_out(regShouldWrite_EXE),
        .memWrite_out(memWrite_EXE),
        .memRead_out(memRead_EXE),
        .memToReg_out(memToReg_EXE),
        .newAddress_out(newAddress_next_EXE),
        .jumpAddress_out(newAddress_jump_EXE),
        .regReadData1_out(regReadData1_EXE),
        .regReadData2_out(regReadData2_EXE),
        .aluInputB_out(aluInputB),
        .Immediate_out(Immediate_EXE),
        .aluOpCode_out(aluOpCode_EXE),
        .regWriteAddress_out(regWriteAddress_EXE),
        .regReadAddress1_out(regReadAddress1_EXE),
        .regReadAddress2_out(regReadAddress2_EXE),
        .PCSrc_jump_out(PCSrc_jump_EXE),
        .PCSrc_branch_out(PCSrc_branch_EXE)
    );

    ALU_branch alu_branch(
        .newAddress_next(newAddress_next_EXE),
        .Immediate(Immediate_EXE),

        .newAddress_branch(branchAddress)
    );

    ALU alu(
        .isRtype_EXEtoMEM(isRtype_MEM),
        .isRtype_MEMtoWB(isRtype_WB),
        .inputA_reg(regReadData1_EXE),
        .inputB_IDtoEXE(aluInputB),
        .aluOpCode(aluOpCode_EXE),
        .regReadAddress1(regReadAddress1_EXE),
        .regReadAddress2(regReadAddress2_EXE),
        .regWriteAddress_EXEtoMEM(regWriteAddress_MEM),
        .regShouldWrite_EXEtoMEM(regShouldWrite_MEM),
        .inputB_EXEtoMEM(aluOut_MEM),
        .regWriteAddress_MEMtoWB(regWriteAddress_WB),
        .regShouldWrite_MEMtoWB(regShouldWrite_WB),
        .inputB_MEMtoWB(regWriteData_WB),

        .out(aluOut_EXE)
    );

    Reg_EXEtoMEM reg_EXEtoMEM(
        .CLK(CLK),
        .Reset_in(Reset_EXE),
        .isRtype_in(isRtype_EXE),
        .PCWrite_in(PCWrite_EXE),
        .aluOut_in(aluOut_EXE),
        .regShouldWrite_in(regShouldWrite_EXE),
        .memWrite_in(memWrite_EXE),
        .memRead_in(memRead_EXE),
        .memToReg_in(memToReg_EXE),
        .branchAddress_in(branchAddress),
        .nextAddress_in(newAddress_next_EXE),
        .regReadData2_in(regReadData2_EXE),
        .regWriteAddress_in(regWriteAddress_EXE),
        .PCSrc_in(PCSrc_branch_EXE),

        .PCWrite_out(PCWrite_MEM),
        .Reset_out(Reset_MEM),
        .isRtype_out(isRtype_MEM),
        .regShouldWrite_out(regShouldWrite_MEM),
        .memWrite_out(memWrite_MEM),
        .memRead_out(memRead_MEM),
        .memToReg_out(memToReg_MEM),
        .branchAddress_out(newAddress_branch),
        .aluOut_out(aluOut_MEM),
        .regReadData2_out(regReadData2_MEM),
        .regWriteAddress_out(regWriteAddress_MEM),
        .PCSrc_out(PCSrc_MEM)
    );

    RAM ram(
        .CLK(CLK),
        .Address(aluOut_MEM),
        .writeData(regReadData2_MEM),
        .Read(memRead_MEM),
        .Write(memWrite_MEM),

        .dataOut(memReadData_MEM)
    );

    Reg_MEMtoWB reg_MEMtoWB(
        .CLK(CLK),
        .Reset_in(Reset_MEM),
        .isRtype_in(isRtype_MEM),
        .memToReg_in(memToReg_MEM),
        .regShouldWrite_in(regShouldWrite_MEM),
        .memReadData_in(memReadData_MEM),
        .aluOut_in(aluOut_MEM),
        .regWriteAddress_in(regWriteAddress_MEM),

        .isRtype_out(isRtype_WB),
        .regShouldWrite_out(regShouldWrite_WB),
        .regWriteData(regWriteData_WB),
        .regWriteAddress_out(regWriteAddress_WB)
    );


endmodule
