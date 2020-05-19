`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:24:26 03/02/2020 
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
    input   CLK,Reset,
            regShouldWrite,isJal,
    input [5:1] regAddress1,regAddress2,regWriteAddress,//address
    input [32:1] writeData,regWriteData_jal,
    output reg [32:1] readData1,readData2
    );

    parameter N = 32;
    reg [32:1] regFile [N:0];
    
    initial begin
        for(i=0;i<=N;i=i+1)
            regFile[i] <= 32'b0;
    end
    integer i;

    always @(isJal or regWriteData_jal)begin
        if(isJal)   regFile[31] = regWriteData_jal;
        else    regFile[31]=regFile[31]; //keep
    end

    always @(regShouldWrite or regWriteAddress or writeData)begin //write
        if(regShouldWrite)begin
            regFile[regWriteAddress] = writeData;
        end
        else begin
            regFile[regWriteAddress] = regFile[regWriteAddress];
        end
    end

    always @ (negedge CLK)begin //read
        readData1 <= (regAddress1==0) ? 0 :regFile[regAddress1];
        readData2 <= (regAddress2==0) ? 0 :regFile[regAddress2];
    end

    always @(Reset)begin
        if(Reset == 1)begin
            for(i=0;i<=N;i=i+1)regFile[i] <= 32'b0;
        end
        else ;
    end

endmodule
