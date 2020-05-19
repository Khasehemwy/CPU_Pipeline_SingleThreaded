`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:58:28 02/17/2020 
// Design Name: 
// Module Name:    RegFile 
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
module RegFile(
    input CLK,Reset,regShouldWrite,regToWrite,
    input [5:1] readReg1,readReg2,readReg3,//address
    input [32:1] writeData,
    output [32:1] readData1,readData2
    );

    parameter N = 32;

    reg [32:1] regFile [N:0];
    reg [5:1] writeReg;

    
    initial begin
        for(i=0;i<=N;i=i+1)
            regFile[i] <= 32'b0;
    end

    integer i;

    always @(regToWrite or readReg2 or readReg3)
    begin
        if(regToWrite==0)
            writeReg=readReg2;
        else
            writeReg=readReg3;
    end

    assign  readData1 = (readReg1==0) ? 0 : regFile[readReg1];
    assign  readData2 = (readReg2==0) ? 0 : regFile[readReg2];

    always @ (negedge CLK or negedge Reset)begin
        if(Reset==1)begin
            for(i=1;i<=32;i=i+1)
                regFile[i]<=0;
        end
        else if(regShouldWrite==1 && writeReg!=0)
            regFile[writeReg]<=writeData;
        else ;
    end

endmodule
