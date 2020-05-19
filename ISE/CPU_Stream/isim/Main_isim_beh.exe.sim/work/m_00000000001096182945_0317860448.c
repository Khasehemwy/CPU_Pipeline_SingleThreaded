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
static const char *ng0 = "D:/OneDrive/Projects/PrinciplesOfComputerComposition/ISE/CPU_Stream/ROM.v";
static const char *ng1 = "D:/OneDrive/Projects/PrinciplesOfComputerComposition/ISE/CPU_Stream_RomData/romData_sw.txt";
static int ng2[] = {0, 0};
static int ng3[] = {32, 0};
static int ng4[] = {25, 0};
static int ng5[] = {1, 0};
static int ng6[] = {24, 0};
static int ng7[] = {17, 0};
static int ng8[] = {2, 0};
static int ng9[] = {16, 0};
static int ng10[] = {9, 0};
static int ng11[] = {3, 0};
static int ng12[] = {8, 0};



static void Initial_29_0(char *t0)
{
    char t4[8];
    char t13[8];
    char t14[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    int t23;
    char *t24;
    unsigned int t25;
    int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    int t36;
    int t37;

LAB0:    xsi_set_current_line(29, ng0);

LAB2:    xsi_set_current_line(30, ng0);
    t1 = (t0 + 1744);
    xsi_vlogfile_readmemb(ng1, 0, t1, 0, 0, 0, 0);
    xsi_set_current_line(31, ng0);
    t1 = (t0 + 1744);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t0 + 1744);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 1744);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng2)));
    xsi_vlog_generic_get_array_select_value(t4, 8, t3, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t0 + 1584);
    t16 = (t0 + 1584);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng3)));
    t20 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t13, t14, t15, ((int*)(t18)), 2, t19, 32, 1, t20, 32, 1);
    t21 = (t13 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (!(t22));
    t24 = (t14 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (!(t25));
    t27 = (t23 && t26);
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB3;

LAB4:    xsi_set_current_line(31, ng0);
    t1 = (t0 + 1744);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t0 + 1744);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 1744);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t4, 8, t3, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t0 + 1584);
    t16 = (t0 + 1584);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng6)));
    t20 = ((char*)((ng7)));
    xsi_vlog_convert_partindices(t13, t14, t15, ((int*)(t18)), 2, t19, 32, 1, t20, 32, 1);
    t21 = (t13 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (!(t22));
    t24 = (t14 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (!(t25));
    t27 = (t23 && t26);
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB5;

LAB6:    xsi_set_current_line(31, ng0);
    t1 = (t0 + 1744);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t0 + 1744);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 1744);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng8)));
    xsi_vlog_generic_get_array_select_value(t4, 8, t3, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t0 + 1584);
    t16 = (t0 + 1584);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng9)));
    t20 = ((char*)((ng10)));
    xsi_vlog_convert_partindices(t13, t14, t15, ((int*)(t18)), 2, t19, 32, 1, t20, 32, 1);
    t21 = (t13 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (!(t22));
    t24 = (t14 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (!(t25));
    t27 = (t23 && t26);
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(31, ng0);
    t1 = (t0 + 1744);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t0 + 1744);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 1744);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng11)));
    xsi_vlog_generic_get_array_select_value(t4, 8, t3, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t0 + 1584);
    t16 = (t0 + 1584);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng12)));
    t20 = ((char*)((ng5)));
    xsi_vlog_convert_partindices(t13, t14, t15, ((int*)(t18)), 2, t19, 32, 1, t20, 32, 1);
    t21 = (t13 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (!(t22));
    t24 = (t14 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (!(t25));
    t27 = (t23 && t26);
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB9;

LAB10:
LAB1:    return;
LAB3:    t32 = *((unsigned int *)t15);
    t33 = (t32 + 0);
    t34 = *((unsigned int *)t13);
    t35 = *((unsigned int *)t14);
    t36 = (t34 - t35);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t12, t4, t33, *((unsigned int *)t14), t37);
    goto LAB4;

LAB5:    t32 = *((unsigned int *)t15);
    t33 = (t32 + 0);
    t34 = *((unsigned int *)t13);
    t35 = *((unsigned int *)t14);
    t36 = (t34 - t35);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t12, t4, t33, *((unsigned int *)t14), t37);
    goto LAB6;

LAB7:    t32 = *((unsigned int *)t15);
    t33 = (t32 + 0);
    t34 = *((unsigned int *)t13);
    t35 = *((unsigned int *)t14);
    t36 = (t34 - t35);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t12, t4, t33, *((unsigned int *)t14), t37);
    goto LAB8;

LAB9:    t32 = *((unsigned int *)t15);
    t33 = (t32 + 0);
    t34 = *((unsigned int *)t13);
    t35 = *((unsigned int *)t14);
    t36 = (t34 - t35);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t12, t4, t33, *((unsigned int *)t14), t37);
    goto LAB10;

}

static void Always_34_1(char *t0)
{
    char t7[8];
    char t16[8];
    char t17[8];
    char t18[8];
    char t41[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t25;
    int t26;
    char *t27;
    unsigned int t28;
    int t29;
    int t30;
    char *t31;
    unsigned int t32;
    int t33;
    int t34;
    unsigned int t35;
    int t36;
    unsigned int t37;
    unsigned int t38;
    int t39;
    int t40;

LAB0:    t1 = (t0 + 2912U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 3232);
    *((int *)t2) = 1;
    t3 = (t0 + 2944);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(34, ng0);

LAB5:    xsi_set_current_line(35, ng0);
    t4 = (t0 + 1744);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t0 + 1744);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 1744);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = (t0 + 1184U);
    t15 = *((char **)t14);
    xsi_vlog_generic_get_array_select_value(t7, 8, t6, t10, t13, 2, 1, t15, 32, 2);
    t14 = (t0 + 1584);
    t19 = (t0 + 1584);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t22 = ((char*)((ng3)));
    t23 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t16, t17, t18, ((int*)(t21)), 2, t22, 32, 1, t23, 32, 1);
    t24 = (t16 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (!(t25));
    t27 = (t17 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (!(t28));
    t30 = (t26 && t29);
    t31 = (t18 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (!(t32));
    t34 = (t30 && t33);
    if (t34 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1744);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1744);
    t6 = (t5 + 72U);
    t8 = *((char **)t6);
    t9 = (t0 + 1744);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 1184U);
    t13 = *((char **)t12);
    t12 = ((char*)((ng5)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 32, t13, 32, t12, 32);
    xsi_vlog_generic_get_array_select_value(t7, 8, t4, t8, t11, 2, 1, t16, 32, 2);
    t14 = (t0 + 1584);
    t15 = (t0 + 1584);
    t19 = (t15 + 72U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng6)));
    t22 = ((char*)((ng7)));
    xsi_vlog_convert_partindices(t17, t18, t41, ((int*)(t20)), 2, t21, 32, 1, t22, 32, 1);
    t23 = (t17 + 4);
    t25 = *((unsigned int *)t23);
    t26 = (!(t25));
    t24 = (t18 + 4);
    t28 = *((unsigned int *)t24);
    t29 = (!(t28));
    t30 = (t26 && t29);
    t27 = (t41 + 4);
    t32 = *((unsigned int *)t27);
    t33 = (!(t32));
    t34 = (t30 && t33);
    if (t34 == 1)
        goto LAB8;

LAB9:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1744);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1744);
    t6 = (t5 + 72U);
    t8 = *((char **)t6);
    t9 = (t0 + 1744);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 1184U);
    t13 = *((char **)t12);
    t12 = ((char*)((ng8)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 32, t13, 32, t12, 32);
    xsi_vlog_generic_get_array_select_value(t7, 8, t4, t8, t11, 2, 1, t16, 32, 2);
    t14 = (t0 + 1584);
    t15 = (t0 + 1584);
    t19 = (t15 + 72U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng9)));
    t22 = ((char*)((ng10)));
    xsi_vlog_convert_partindices(t17, t18, t41, ((int*)(t20)), 2, t21, 32, 1, t22, 32, 1);
    t23 = (t17 + 4);
    t25 = *((unsigned int *)t23);
    t26 = (!(t25));
    t24 = (t18 + 4);
    t28 = *((unsigned int *)t24);
    t29 = (!(t28));
    t30 = (t26 && t29);
    t27 = (t41 + 4);
    t32 = *((unsigned int *)t27);
    t33 = (!(t32));
    t34 = (t30 && t33);
    if (t34 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1744);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1744);
    t6 = (t5 + 72U);
    t8 = *((char **)t6);
    t9 = (t0 + 1744);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 1184U);
    t13 = *((char **)t12);
    t12 = ((char*)((ng11)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 32, t13, 32, t12, 32);
    xsi_vlog_generic_get_array_select_value(t7, 8, t4, t8, t11, 2, 1, t16, 32, 2);
    t14 = (t0 + 1584);
    t15 = (t0 + 1584);
    t19 = (t15 + 72U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng12)));
    t22 = ((char*)((ng5)));
    xsi_vlog_convert_partindices(t17, t18, t41, ((int*)(t20)), 2, t21, 32, 1, t22, 32, 1);
    t23 = (t17 + 4);
    t25 = *((unsigned int *)t23);
    t26 = (!(t25));
    t24 = (t18 + 4);
    t28 = *((unsigned int *)t24);
    t29 = (!(t28));
    t30 = (t26 && t29);
    t27 = (t41 + 4);
    t32 = *((unsigned int *)t27);
    t33 = (!(t32));
    t34 = (t30 && t33);
    if (t34 == 1)
        goto LAB12;

LAB13:    goto LAB2;

LAB6:    t35 = *((unsigned int *)t18);
    t36 = (t35 + 0);
    t37 = *((unsigned int *)t16);
    t38 = *((unsigned int *)t17);
    t39 = (t37 - t38);
    t40 = (t39 + 1);
    xsi_vlogvar_assign_value(t14, t7, t36, *((unsigned int *)t17), t40);
    goto LAB7;

LAB8:    t35 = *((unsigned int *)t41);
    t36 = (t35 + 0);
    t37 = *((unsigned int *)t17);
    t38 = *((unsigned int *)t18);
    t39 = (t37 - t38);
    t40 = (t39 + 1);
    xsi_vlogvar_assign_value(t14, t7, t36, *((unsigned int *)t18), t40);
    goto LAB9;

LAB10:    t35 = *((unsigned int *)t41);
    t36 = (t35 + 0);
    t37 = *((unsigned int *)t17);
    t38 = *((unsigned int *)t18);
    t39 = (t37 - t38);
    t40 = (t39 + 1);
    xsi_vlogvar_assign_value(t14, t7, t36, *((unsigned int *)t18), t40);
    goto LAB11;

LAB12:    t35 = *((unsigned int *)t41);
    t36 = (t35 + 0);
    t37 = *((unsigned int *)t17);
    t38 = *((unsigned int *)t18);
    t39 = (t37 - t38);
    t40 = (t39 + 1);
    xsi_vlogvar_assign_value(t14, t7, t36, *((unsigned int *)t18), t40);
    goto LAB13;

}


extern void work_m_00000000001096182945_0317860448_init()
{
	static char *pe[] = {(void *)Initial_29_0,(void *)Always_34_1};
	xsi_register_didat("work_m_00000000001096182945_0317860448", "isim/Main_isim_beh.exe.sim/work/m_00000000001096182945_0317860448.didat");
	xsi_register_executes(pe);
}
