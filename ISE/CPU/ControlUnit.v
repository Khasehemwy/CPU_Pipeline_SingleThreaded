`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:21:35 02/17/2020 
// Design Name: 
// Module Name:    ControlUnit 
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
module ControlUnit(
    input [32:1] op,
    output reg  Reset,PCWrite,
                RegToWrite,RegShouldWrite,
                AluInput,
                Branch,Jump,
                MemWrite,MemRead,MemToReg,ExtendSelect,
    output reg [6:1] AluOp,
    output reg [2:1] PCSrc
    );

    always @(op)begin
        case(op[32:27])
            6'b000000:begin   //R Type
                Reset = 0;
                RegToWrite = 1;
                RegShouldWrite = 1;
                ExtendSelect = 1;
                AluInput = 0;
                AluOp = op[6:1];
                MemWrite = 0;
                MemRead = 0;
                MemToReg = 0;
                Branch = 0;
                Jump = 0;
                PCSrc = 2'b00;
                PCWrite = 1;
            end

            6'b001000:begin //addi
                Reset = 0;
                RegToWrite = 0;
                RegShouldWrite = 1;
                ExtendSelect = 1;
                AluInput = 1;
                AluOp = 6'b100000;
                MemWrite = 0;
                MemRead = 0;
                MemToReg = 0;
                Branch = 0;
                Jump = 0;
                PCSrc = 2'b00;
                PCWrite = 1;
            end

            6'b001101:begin //ori
                Reset = 0;
                RegToWrite = 0;
                RegShouldWrite = 1;
                ExtendSelect = 1;
                AluInput = 1;
                AluOp = 6'b100101;
                MemWrite = 0;
                MemRead = 0;
                MemToReg = 0;
                Branch = 0;
                Jump = 0;
                PCSrc = 2'b00;
                PCWrite = 1;
            end
            6'b100011:begin //lw
                Reset = 0;
                RegToWrite = 0;
                RegShouldWrite = 1;
                ExtendSelect = 1;
                AluInput = 1;
                AluOp = 6'b000000;
                MemWrite = 0;
                MemRead = 1;
                MemToReg = 1;
                Branch = 0;
                Jump = 0;
                PCSrc = 2'b00;
                PCWrite = 1;
            end
            6'b101011:begin //sw
                Reset = 0;
                RegToWrite = 0;
                RegShouldWrite = 0;
                ExtendSelect = 1;
                AluInput = 1;
                AluOp = 6'b000000;
                MemWrite = 1;
                MemRead = 0;
                MemToReg = 1;
                Branch = 0;
                Jump = 0;
                PCSrc = 2'b00;
                PCWrite = 1;
            end
            6'b000100:begin //beq
                Reset = 0;
                RegToWrite = 0;
                RegShouldWrite = 0;
                ExtendSelect = 1;
                AluInput = 0;
                AluOp = 6'b100001;
                MemWrite = 0;
                MemRead = 0;
                MemToReg = 0;
                Branch = 0;//equal
                Jump = 0;
                PCSrc = 2'b01;
                PCWrite = 1;
            end
            6'b000101:begin //bne
                Reset = 0;
                RegToWrite = 0;
                RegShouldWrite = 0;
                ExtendSelect = 1;
                AluInput = 0;
                AluOp = 6'b100001;
                MemWrite = 0;
                MemRead = 0;
                MemToReg = 0;
                Branch = 1;//not equal
                Jump = 0;
                PCSrc = 2'b01;
                PCWrite = 1;
            end
            6'b000010:begin //jump
                Reset = 0;
                RegToWrite = 0;
                RegShouldWrite = 0;
                ExtendSelect = 1;
                AluInput = 0;
                AluOp = 6'b000000;
                MemWrite = 0;
                MemRead = 0;
                MemToReg = 0;
                Branch = 0;//not equal
                Jump = 1;
                PCSrc = 2'b10;
                PCWrite = 1;
            end


            6'b111111:begin //nop
                Reset = 0;
                RegToWrite = 0;
                RegShouldWrite = 0;
                ExtendSelect = 0;
                AluInput = 0;
                AluOp = 6'b000000;
                MemWrite = 0;
                MemRead = 0;
                MemToReg = 0;
                Branch = 0;
                Jump = 0;
                PCSrc = 2'b00;
                PCWrite = 0;
            end

        endcase
    end


endmodule
