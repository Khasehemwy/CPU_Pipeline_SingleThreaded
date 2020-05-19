`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:28:12 02/17/2020 
// Design Name: 
// Module Name:    RAM 
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
module RAM(
    input CLK,
    input [32:1] Address,writeData,
    input Read,Write,
    output reg [32:1] dataOut
    );

    parameter N = 63;
    reg [8:1] ram [N:0];

    initial begin
        for(i=0;i<=N;i=i+1)
            ram[i] <= 0;
    end
    integer i;

    always @(Address or Read)begin
        if(Read==1)begin
            dataOut[32:25]=ram[Address];
            dataOut[24:17]=ram[Address+1];
            dataOut[16:9]=ram[Address+2];
            dataOut[8:1]=ram[Address+3];
            end
        else begin
            dataOut=32'bzzzzzzzz;
            end
    end

    always @(negedge CLK)begin
        if(Write==1)begin
            ram[Address] <= writeData[32:25];  
            ram[Address+1] <= writeData[24:17];  
            ram[Address+2] <= writeData[16:9];  
            ram[Address+3] <= writeData[8:1];  
        end
        else ;
    end

endmodule
