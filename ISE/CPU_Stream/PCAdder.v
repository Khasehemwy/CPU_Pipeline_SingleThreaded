`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:46:55 03/02/2020 
// Design Name: 
// Module Name:    PCAdder 
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
module PCAdder(
    input [32:1] currentAddress,
    output reg [32:1] newAddress
    );

    parameter Gap = 4;//  32/8=4;

    always @(currentAddress)begin
        newAddress = currentAddress + Gap;
    end

endmodule
