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
static const char *ng0 = "D:/OneDrive/Projects/PrinciplesOfComputerComposition/ISE/CPU_Stream/Reg_IDtoEXE.v";
static int ng1[] = {0, 0};
static int ng2[] = {32, 0};
static int ng3[] = {29, 0};
static int ng4[] = {28, 0};
static int ng5[] = {3, 0};
static unsigned int ng6[] = {0U, 0U};
static int ng7[] = {2, 0};
static int ng8[] = {1, 0};



static void Always_48_0(char *t0)
{
    char t6[8];
    char t30[8];
    char t37[8];
    char t38[8];
    char t39[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    int t47;
    char *t48;
    unsigned int t49;
    int t50;
    int t51;
    char *t52;
    unsigned int t53;
    int t54;
    int t55;
    unsigned int t56;
    int t57;
    unsigned int t58;
    unsigned int t59;
    int t60;
    int t61;

LAB0:    t1 = (t0 + 8768U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 9088);
    *((int *)t2) = 1;
    t3 = (t0 + 8800);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(48, ng0);

LAB5:    xsi_set_current_line(49, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(87, ng0);

LAB36:    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4968);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5448);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5608);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(49, ng0);

LAB13:    xsi_set_current_line(50, ng0);
    t28 = (t0 + 1208U);
    t29 = *((char **)t28);
    t28 = (t0 + 4808);
    xsi_vlogvar_wait_assign_value(t28, t29, 0, 0, 1, 0LL);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 2488U);
    t3 = *((char **)t2);
    t2 = (t0 + 5128);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2648U);
    t3 = *((char **)t2);
    t2 = (t0 + 5288);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 4968);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 4248U);
    t3 = *((char **)t2);
    t2 = (t0 + 7688);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 2, 0LL);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 4408U);
    t3 = *((char **)t2);
    t2 = (t0 + 7848);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 2, 0LL);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 2808U);
    t3 = *((char **)t2);
    t2 = (t0 + 6088);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 5448);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t0 + 5608);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t0 + 5768);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t2 = (t0 + 5928);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 2968U);
    t3 = *((char **)t2);
    t2 = (t0 + 6248);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 3128U);
    t3 = *((char **)t2);
    t2 = (t0 + 6408);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 4088U);
    t3 = *((char **)t2);
    t2 = (t0 + 7528);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 5, 0LL);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 3928U);
    t3 = *((char **)t2);
    t2 = (t0 + 7368);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 5, 0LL);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 3768U);
    t3 = *((char **)t2);
    t2 = (t0 + 7208);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 5, 0LL);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 3288U);
    t3 = *((char **)t2);
    t2 = (t0 + 6728);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 3608U);
    t3 = *((char **)t2);
    t2 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 6, 0LL);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB17;

LAB14:    if (t18 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t6) = 1;

LAB17:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 3288U);
    t3 = *((char **)t2);
    t2 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);

LAB20:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB24;

LAB21:    if (t18 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t6) = 1;

LAB24:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB25;

LAB26:    xsi_set_current_line(80, ng0);

LAB35:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 2968U);
    t3 = *((char **)t2);
    t2 = (t0 + 6888);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);

LAB27:    goto LAB12;

LAB16:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(72, ng0);
    t21 = (t0 + 3128U);
    t22 = *((char **)t21);
    t21 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t21, t22, 0, 0, 32, 0LL);
    goto LAB20;

LAB23:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB24;

LAB25:    xsi_set_current_line(75, ng0);

LAB28:    xsi_set_current_line(76, ng0);
    t21 = (t0 + 2808U);
    t22 = *((char **)t21);
    memset(t30, 0, 8);
    t21 = (t30 + 4);
    t28 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = (t31 >> 28);
    *((unsigned int *)t30) = t32;
    t33 = *((unsigned int *)t28);
    t34 = (t33 >> 28);
    *((unsigned int *)t21) = t34;
    t35 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t35 & 15U);
    t36 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t36 & 15U);
    t29 = (t0 + 6888);
    t40 = (t0 + 6888);
    t41 = (t40 + 72U);
    t42 = *((char **)t41);
    t43 = ((char*)((ng2)));
    t44 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t37, t38, t39, ((int*)(t42)), 2, t43, 32, 1, t44, 32, 1);
    t45 = (t37 + 4);
    t46 = *((unsigned int *)t45);
    t47 = (!(t46));
    t48 = (t38 + 4);
    t49 = *((unsigned int *)t48);
    t50 = (!(t49));
    t51 = (t47 && t50);
    t52 = (t39 + 4);
    t53 = *((unsigned int *)t52);
    t54 = (!(t53));
    t55 = (t51 && t54);
    if (t55 == 1)
        goto LAB29;

LAB30:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 3448U);
    t3 = *((char **)t2);
    t2 = (t0 + 6888);
    t4 = (t0 + 6888);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng4)));
    t21 = ((char*)((ng5)));
    xsi_vlog_convert_partindices(t6, t30, t37, ((int*)(t7)), 2, t8, 32, 1, t21, 32, 1);
    t22 = (t6 + 4);
    t9 = *((unsigned int *)t22);
    t47 = (!(t9));
    t28 = (t30 + 4);
    t10 = *((unsigned int *)t28);
    t50 = (!(t10));
    t51 = (t47 && t50);
    t29 = (t37 + 4);
    t11 = *((unsigned int *)t29);
    t54 = (!(t11));
    t55 = (t51 && t54);
    if (t55 == 1)
        goto LAB31;

LAB32:    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 6888);
    t4 = (t0 + 6888);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng7)));
    t21 = ((char*)((ng8)));
    xsi_vlog_convert_partindices(t6, t30, t37, ((int*)(t7)), 2, t8, 32, 1, t21, 32, 1);
    t22 = (t6 + 4);
    t9 = *((unsigned int *)t22);
    t47 = (!(t9));
    t28 = (t30 + 4);
    t10 = *((unsigned int *)t28);
    t50 = (!(t10));
    t51 = (t47 && t50);
    t29 = (t37 + 4);
    t11 = *((unsigned int *)t29);
    t54 = (!(t11));
    t55 = (t51 && t54);
    if (t55 == 1)
        goto LAB33;

LAB34:    goto LAB27;

LAB29:    t56 = *((unsigned int *)t39);
    t57 = (t56 + 0);
    t58 = *((unsigned int *)t37);
    t59 = *((unsigned int *)t38);
    t60 = (t58 - t59);
    t61 = (t60 + 1);
    xsi_vlogvar_wait_assign_value(t29, t30, t57, *((unsigned int *)t38), t61, 0LL);
    goto LAB30;

LAB31:    t12 = *((unsigned int *)t37);
    t57 = (t12 + 0);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t30);
    t60 = (t13 - t14);
    t61 = (t60 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, t57, *((unsigned int *)t30), t61, 0LL);
    goto LAB32;

LAB33:    t12 = *((unsigned int *)t37);
    t57 = (t12 + 0);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t30);
    t60 = (t13 - t14);
    t61 = (t60 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, t57, *((unsigned int *)t30), t61, 0LL);
    goto LAB34;

}


extern void work_m_00000000003354999967_2834421104_init()
{
	static char *pe[] = {(void *)Always_48_0};
	xsi_register_didat("work_m_00000000003354999967_2834421104", "isim/VTF_CPU_Stream_isim_beh.exe.sim/work/m_00000000003354999967_2834421104.didat");
	xsi_register_executes(pe);
}
