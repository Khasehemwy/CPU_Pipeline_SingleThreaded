`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:18:44 02/16/2020 
// Design Name: 
// Module Name:    ROM 
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

//opCode memory

module ROM(
    input [32:1] Address,
    output reg[32:1] dataOut
    );

    parameter N = 63;
    reg [8:1] rom[N:1];

    initial begin
        $readmemb ("D:/OneDrive/Projects/PrinciplesOfComputerComposition/ISE/CPU_ROM_DATA/romData.txt",rom);
        dataOut=0;
    end

    always @(Address) begin
        dataOut[32:25]=rom[Address];
        dataOut[24:17]=rom[Address+1];
        dataOut[16:9]=rom[Address+2];
        dataOut[8:1]=rom[Address+3];
    end

endmodule
