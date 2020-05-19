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
static const char *ng0 = "D:/OneDrive/Projects/PrinciplesOfComputerComposition/ISE/CPU/Extend.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {16, 0};
static int ng3[] = {1, 0};
static int ng4[] = {32, 0};
static int ng5[] = {17, 0};
static unsigned int ng6[] = {1U, 0U};
static int ng7[] = {15, 0};
static int ng8[] = {0, 0};
static const char *ng9 = "";
static const char *ng10 = " extendSelect no match .\n";



static void Always_27_0(char *t0)
{
    char t9[8];
    char t10[8];
    char t11[8];
    char t34[8];
    char t47[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    int t19;
    char *t20;
    unsigned int t21;
    int t22;
    int t23;
    char *t24;
    unsigned int t25;
    int t26;
    int t27;
    unsigned int t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    int t32;
    int t33;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;

LAB0:    t1 = (t0 + 2528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 2848);
    *((int *)t2) = 1;
    t3 = (t0 + 2560);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(27, ng0);

LAB5:    xsi_set_current_line(28, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 1, t4, 1);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 1, t2, 1);
    if (t6 == 1)
        goto LAB9;

LAB10:
LAB12:
LAB11:    xsi_set_current_line(44, ng0);

LAB32:    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(46, ng0);
    t2 = xsi_vlog_time(t47, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(0, 0, 0, ng9, 2, t0, (char)118, t47, 64);
    xsi_vlogfile_write(1, 0, 0, ng10, 1, t0);

LAB13:    goto LAB2;

LAB7:    xsi_set_current_line(29, ng0);

LAB14:    xsi_set_current_line(30, ng0);
    t7 = (t0 + 1048U);
    t8 = *((char **)t7);
    t7 = (t0 + 1608);
    t12 = (t0 + 1608);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng2)));
    t16 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t9, t10, t11, ((int*)(t14)), 2, t15, 32, 1, t16, 32, 1);
    t17 = (t9 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t10 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (!(t21));
    t23 = (t19 && t22);
    t24 = (t11 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (!(t25));
    t27 = (t23 && t26);
    if (t27 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(31, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    t4 = (t0 + 1608);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t12 = ((char*)((ng4)));
    t13 = ((char*)((ng5)));
    xsi_vlog_convert_partindices(t9, t10, t11, ((int*)(t8)), 2, t12, 32, 1, t13, 32, 1);
    t14 = (t9 + 4);
    t18 = *((unsigned int *)t14);
    t6 = (!(t18));
    t15 = (t10 + 4);
    t21 = *((unsigned int *)t15);
    t19 = (!(t21));
    t22 = (t6 && t19);
    t16 = (t11 + 4);
    t25 = *((unsigned int *)t16);
    t23 = (!(t25));
    t26 = (t22 && t23);
    if (t26 == 1)
        goto LAB17;

LAB18:    goto LAB13;

LAB9:    xsi_set_current_line(34, ng0);

LAB19:    xsi_set_current_line(35, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    memset(t9, 0, 8);
    t3 = (t9 + 4);
    t7 = (t4 + 4);
    t18 = *((unsigned int *)t4);
    t21 = (t18 >> 0);
    *((unsigned int *)t9) = t21;
    t25 = *((unsigned int *)t7);
    t28 = (t25 >> 0);
    *((unsigned int *)t3) = t28;
    t30 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t30 & 32767U);
    t31 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t31 & 32767U);
    t8 = (t0 + 1608);
    t12 = (t0 + 1608);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng7)));
    t16 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t10, t11, t34, ((int*)(t14)), 2, t15, 32, 1, t16, 32, 1);
    t17 = (t10 + 4);
    t35 = *((unsigned int *)t17);
    t19 = (!(t35));
    t20 = (t11 + 4);
    t36 = *((unsigned int *)t20);
    t22 = (!(t36));
    t23 = (t19 && t22);
    t24 = (t34 + 4);
    t37 = *((unsigned int *)t24);
    t26 = (!(t37));
    t27 = (t23 && t26);
    if (t27 == 1)
        goto LAB20;

LAB21:    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    t4 = (t0 + 1608);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t12 = ((char*)((ng4)));
    t13 = ((char*)((ng2)));
    xsi_vlog_convert_partindices(t9, t10, t11, ((int*)(t8)), 2, t12, 32, 1, t13, 32, 1);
    t14 = (t9 + 4);
    t18 = *((unsigned int *)t14);
    t6 = (!(t18));
    t15 = (t10 + 4);
    t21 = *((unsigned int *)t15);
    t19 = (!(t21));
    t22 = (t6 && t19);
    t16 = (t11 + 4);
    t25 = *((unsigned int *)t16);
    t23 = (!(t25));
    t26 = (t22 && t23);
    if (t26 == 1)
        goto LAB22;

LAB23:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1008U);
    t4 = (t2 + 72U);
    t7 = *((char **)t4);
    t8 = ((char*)((ng2)));
    xsi_vlog_generic_get_index_select_value(t9, 32, t3, t7, 2, t8, 32, 1);
    t12 = ((char*)((ng3)));
    memset(t10, 0, 8);
    t13 = (t9 + 4);
    t14 = (t12 + 4);
    t18 = *((unsigned int *)t9);
    t21 = *((unsigned int *)t12);
    t25 = (t18 ^ t21);
    t28 = *((unsigned int *)t13);
    t30 = *((unsigned int *)t14);
    t31 = (t28 ^ t30);
    t35 = (t25 | t31);
    t36 = *((unsigned int *)t13);
    t37 = *((unsigned int *)t14);
    t38 = (t36 | t37);
    t39 = (~(t38));
    t40 = (t35 & t39);
    if (t40 != 0)
        goto LAB27;

LAB24:    if (t38 != 0)
        goto LAB26;

LAB25:    *((unsigned int *)t10) = 1;

LAB27:    t16 = (t10 + 4);
    t41 = *((unsigned int *)t16);
    t42 = (~(t41));
    t43 = *((unsigned int *)t10);
    t44 = (t43 & t42);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB28;

LAB29:
LAB30:    goto LAB13;

LAB15:    t28 = *((unsigned int *)t11);
    t29 = (t28 + 0);
    t30 = *((unsigned int *)t9);
    t31 = *((unsigned int *)t10);
    t32 = (t30 - t31);
    t33 = (t32 + 1);
    xsi_vlogvar_assign_value(t7, t8, t29, *((unsigned int *)t10), t33);
    goto LAB16;

LAB17:    t28 = *((unsigned int *)t11);
    t27 = (t28 + 0);
    t30 = *((unsigned int *)t9);
    t31 = *((unsigned int *)t10);
    t29 = (t30 - t31);
    t32 = (t29 + 1);
    xsi_vlogvar_assign_value(t3, t2, t27, *((unsigned int *)t10), t32);
    goto LAB18;

LAB20:    t38 = *((unsigned int *)t34);
    t29 = (t38 + 0);
    t39 = *((unsigned int *)t10);
    t40 = *((unsigned int *)t11);
    t32 = (t39 - t40);
    t33 = (t32 + 1);
    xsi_vlogvar_assign_value(t8, t9, t29, *((unsigned int *)t11), t33);
    goto LAB21;

LAB22:    t28 = *((unsigned int *)t11);
    t27 = (t28 + 0);
    t30 = *((unsigned int *)t9);
    t31 = *((unsigned int *)t10);
    t29 = (t30 - t31);
    t32 = (t29 + 1);
    xsi_vlogvar_assign_value(t3, t2, t27, *((unsigned int *)t10), t32);
    goto LAB23;

LAB26:    t15 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB27;

LAB28:    xsi_set_current_line(37, ng0);

LAB31:    xsi_set_current_line(38, ng0);
    t17 = (t0 + 1608);
    t20 = (t17 + 56U);
    t24 = *((char **)t20);
    memset(t11, 0, 8);
    xsi_vlog_unsigned_unary_minus(t11, 32, t24, 32);
    t46 = (t0 + 1608);
    xsi_vlogvar_assign_value(t46, t11, 0, 0, 32);
    goto LAB30;

}


extern void work_m_00000000000629925333_1536036516_init()
{
	static char *pe[] = {(void *)Always_27_0};
	xsi_register_didat("work_m_00000000000629925333_1536036516", "isim/VTF_CPU_isim_beh.exe.sim/work/m_00000000000629925333_1536036516.didat");
	xsi_register_executes(pe);
}
