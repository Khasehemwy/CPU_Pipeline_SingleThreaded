`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:30:17 02/16/2020 
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
	input CLK,
    input Reset,
    output PCWrite,extendData,
    output[6:1] AluOpCode,
    output[32:1] readData1,readData2,readData3,writeData,aluOut,memOut,
                    entireOpCode,currentAddress,newAddress,
    output[2:1] PCSrc,
    output Branch,Jump
    );


    wire    RegToWrite,RegShouldWrite,
            AluInput,
            MemWrite,MemRead,MemToReg;
    wire [32:1] aluInputB;

    ProgramCounter pc(
        .CLK(CLK),
        .Reset(Reset),
        .PCWrite(PCWrite),
        .newAddress(newAddress),

        .currentAddress(currentAddress)
    );

    PCAdder pc_adder(
        .Reg1SubReg2(aluOut),
        .branchSelect(Branch),
        .PCSrc(PCSrc),
        .currentAddress(currentAddress),
        .branchData(readData3),
        .jumpAddress(entireOpCode[26:1]),

        .newAddress(newAddress)
    );

    ROM rom(
        .Address(currentAddress),

        .dataOut(entireOpCode)
    );

    RAM ram(
        .CLK(CLK),
        .Address(aluOut),
        .writeData(readData2),
        .Read(MemRead),
        .Write(MemWrite),

        .dataOut(memOut)
    );

    ControlUnit control_unit(
        .op(entireOpCode),

        .Reset(Reset),
        .PCWrite(PCWrite),
        .RegToWrite(RegToWrite),
        .RegShouldWrite(RegShouldWrite),
        .ExtendSelect(extendData),
        .AluInput(AluInput),
        .Branch(Branch),
        .Jump(Jump),
        .MemWrite(MemWrite),
        .MemRead(MemRead),
        .MemToReg(MemToReg),
        .AluOp(AluOpCode),
        .PCSrc(PCSrc)
    );

    RegFile reg_file(
        .CLK(CLK),
        .Reset(Reset),
        .regShouldWrite(RegShouldWrite),
        .regToWrite(RegToWrite),
        .readReg1(entireOpCode[26:22]),
        .readReg2(entireOpCode[21:17]),
        .readReg3(entireOpCode[16:12]),
        .writeData(writeData),

        .readData1(readData1),
        .readData2(readData2)
    );

    Extend ex(
        .Immediate(entireOpCode[16:1]),
        .extendSelect(extendData),

        .outData(readData3)
    );


    ALU alu(
        .inputA(readData1),
        .inputB(aluInputB),
        .aluOpCode(AluOpCode),
        
        .out(aluOut)
    );


    DataSelect regSelect(
        .inputA(readData2),
        .inputB(readData3),
        .selectCode(AluInput),

        .out(aluInputB)
    );
    DataSelect dataWriteToRegSelect(
        .inputA(aluOut),
        .inputB(memOut),
        .selectCode(MemToReg),

        .out(writeData)
    );


endmodule
