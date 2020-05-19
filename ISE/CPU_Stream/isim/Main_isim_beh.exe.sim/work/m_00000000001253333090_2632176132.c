/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/OneDrive/Projects/PrinciplesOfComputerComposition/ISE/CPU_Stream/ALU_branch.v";



static void Always_29_0(char *t0)
{
    char t8[8];
    char t9[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 2664U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 2984);
    *((int *)t2) = 1;
    t3 = (t0 + 2696);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(29, ng0);

LAB5:    xsi_set_current_line(30, ng0);
    t4 = (t0 + 1184U);
    t5 = *((char **)t4);
    t4 = (t0 + 1344U);
    t6 = *((char **)t4);
    t4 = (t0 + 472);
    t7 = *((char **)t4);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_multiply(t8, 32, t6, 32, t7, 32);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 32, t5, 32, t8, 32);
    t4 = (t0 + 1744);
    xsi_vlogvar_assign_value(t4, t9, 0, 0, 32);
    goto LAB2;

}


extern void work_m_00000000001253333090_2632176132_init()
{
	static char *pe[] = {(void *)Always_29_0};
	xsi_register_didat("work_m_00000000001253333090_2632176132", "isim/Main_isim_beh.exe.sim/work/m_00000000001253333090_2632176132.didat");
	xsi_register_executes(pe);
}
