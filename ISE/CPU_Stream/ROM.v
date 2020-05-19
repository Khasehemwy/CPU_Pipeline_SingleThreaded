`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:42:19 03/02/2020 
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
module ROM(
    input [32:1] Address,
    output reg[32:1] dataOut
    );

    parameter N = 63;
    reg [8:1] rom[N:0];

    initial begin
        $readmemb ("D:/OneDrive/Projects/PrinciplesOfComputerComposition/ISE/CPU_Stream_RomData/romData_addi.txt",rom);
        dataOut[32:25]=rom[0];dataOut[24:17]=rom[1];dataOut[16:9]=rom[2];dataOut[8:1]=rom[3];
    end

    always @(Address) begin
        dataOut[32:25]=rom[Address];
        dataOut[24:17]=rom[Address+1];
        dataOut[16:9]=rom[Address+2];
        dataOut[8:1]=rom[Address+3];
    end

endmodule
