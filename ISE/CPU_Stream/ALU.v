`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:36:40 03/02/2020 
// Design Name: 
// Module Name:    ALU 
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
module ALU(
    input CLK,
    input regShouldWrite_EXEtoMEM,regShouldWrite_MEMtoWB,
            isRtype_EXEtoMEM,isRtype_MEMtoWB,
    input [5:1] regReadAddress1,regReadAddress2,regWriteAddress_EXEtoMEM,regWriteAddress_MEMtoWB,
	input [32:1] inputA_reg,inputB_IDtoEXE,inputB_EXEtoMEM,inputB_MEMtoWB,
    input [6:1] aluOpCode,
    output reg [32:1] out
	);
    parameter N=32;
    parameter 
		ADD=6'b100000,
        ADDU=6'b100001,
		SUB=6'b100010,
        SUBU=6'b100011,
		AND=6'b100100,
		OR =6'b100101,
		XOR=6'b100110,
		NOR=6'b100111,
        SLT=6'b101010,
        SLTU=6'b101011,

        SLL=6'b000000,
        SRL=6'b000010,
        SRA=6'b000011,
		SLLV=6'b000100,
		SRLV=6'b000110,
		SRAV=6'b000111,

        LUI=6'b001111
    ;

    reg signed [32:1] inputA;
    reg signed [32:1] inputB;

    always @(regReadAddress1 or regReadAddress2 or regWriteAddress_EXEtoMEM or regShouldWrite_EXEtoMEM 
            or inputB_IDtoEXE or inputB_EXEtoMEM or inputB_MEMtoWB
            or regWriteAddress_MEMtoWB or regShouldWrite_MEMtoWB)begin

            //$display($time, "inputB_IDtoEXE:%b \ninputB_EXEtoMEM:%b \ninputB_MEMtoWB:%b",inputB_IDtoEXE,inputB_EXEtoMEM,inputB_MEMtoWB);
            //$display($time, "inputB_IDtoEXE_addr:%b \ninputB_EXEtoMEM_addr:%b \ninputB_MEMtoWB_addr:%b",regReadAddress2,regWriteAddress_EXEtoMEM,regWriteAddress_MEMtoWB);

            if(1) inputA = inputA_reg;
            if(1) inputB = inputB_IDtoEXE;

            if(regShouldWrite_EXEtoMEM == 1)begin
                if(regWriteAddress_EXEtoMEM == regReadAddress1)  inputA = inputB_EXEtoMEM;
                else    inputA = inputA;
                if(regWriteAddress_EXEtoMEM == regReadAddress2 && isRtype_EXEtoMEM)  inputB = inputB_EXEtoMEM;
                else    inputB = inputB;
            end
            else begin inputA = inputA;inputB = inputB;end
            //////  have the Sequence !(EXEtoMEM_Bypass is priority than MEMtoWB_Bypass)
            if(regShouldWrite_MEMtoWB == 1)begin
                if(regWriteAddress_MEMtoWB == regReadAddress1 && (regWriteAddress_EXEtoMEM!=regWriteAddress_MEMtoWB || !regShouldWrite_EXEtoMEM))  
                        inputA = inputB_MEMtoWB;

                else inputA = inputA;
                if(regWriteAddress_MEMtoWB == regReadAddress2 && (regWriteAddress_EXEtoMEM!=regWriteAddress_MEMtoWB || !regShouldWrite_EXEtoMEM) && isRtype_MEMtoWB)  
                        inputB = inputB_MEMtoWB;

                else inputB = inputB;
            end
            else begin inputA = inputA;inputB = inputB;end                

            //$display($time, "inputB:%b \n",inputB);
    end

    
    always @(aluOpCode or inputA or inputB) begin
            case(aluOpCode)
                ADD:    out=$signed(inputA)+$signed(inputB);
                ADDU:   begin
                        out=$unsigned(inputA)+$unsigned(inputB);
                        out=$unsigned(out);
                        end
                SUB:    out=inputA-inputB;
                SUBU:   begin
                        out=$unsigned(inputA)-$unsigned(inputB);
                        out=$unsigned(out);
                        end
                AND:    out=inputA&inputB;
                OR:     out=inputA|inputB;
                XOR:    out=inputA^inputB;
                NOR:    out=~(inputA|inputB);
                SLT:    begin
                        if(inputA<inputB) out=1;
                        else out=0;
                        end
                SLTU:   begin
                        if($unsigned(inputA)<$unsigned(inputB)) out=1;
                        else out=0;
                        end


                SLL:    out=inputA<<inputB;
                SRL:    begin
                        out=inputA>>inputB;
                        out=$unsigned(out);
                        end
                SRA:    begin
                        out=inputA>>inputB;
                        out=$signed(out);
                        end
				SLLV:   out=inputB<<inputA;
				SRLV:   begin
                        out=inputB>>inputA;
                        out=$unsigned(out);
                        end
				SRAV:   begin
                        out=inputB>>inputA;
                        out=$signed(out);
                        end

                LUI:    out=inputB<<16;


                default:begin
                    out=-1;
                    $display ($time," aluCode no match.\n");
                end
			endcase
            //$display($time,"inputA:%b  inputB:%b",inputA,inputB);
        end


endmodule
