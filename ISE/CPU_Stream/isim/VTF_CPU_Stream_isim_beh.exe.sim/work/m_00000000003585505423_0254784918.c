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
static const char *ng0 = "D:/OneDrive/Projects/PrinciplesOfComputerComposition/ISE/CPU_Stream/RegFile.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {1, 0};
static int ng4[] = {31, 0};



static void Initial_33_0(char *t0)
{
    char t6[8];
    char t14[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    int t34;
    int t35;

LAB0:    xsi_set_current_line(33, ng0);

LAB2:    xsi_set_current_line(34, ng0);
    xsi_set_current_line(34, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3344);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 3344);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t0 + 472);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    xsi_vlog_signed_leq(t6, 32, t3, 32, t5, 32);
    t4 = (t6 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    xsi_set_current_line(35, ng0);
    t12 = ((char*)((ng2)));
    t13 = (t0 + 3184);
    t16 = (t0 + 3184);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 3184);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 3344);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlog_generic_convert_array_indices(t14, t15, t18, t21, 2, 1, t24, 32, 1);
    t25 = (t14 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(34, ng0);
    t1 = (t0 + 3344);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t3, 32, t4, 32);
    t5 = (t0 + 3344);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 32);
    goto LAB3;

LAB6:    t32 = *((unsigned int *)t14);
    t33 = *((unsigned int *)t15);
    t34 = (t32 - t33);
    t35 = (t34 + 1);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, *((unsigned int *)t15), t35, 0LL);
    goto LAB7;

}

static void Always_44_1(char *t0)
{
    char t6[8];
    char t37[8];
    char t38[8];
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
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    unsigned int t47;
    int t48;
    char *t49;
    unsigned int t50;
    int t51;
    int t52;
    unsigned int t53;
    unsigned int t54;
    int t55;
    int t56;

LAB0:    t1 = (t0 + 4512U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 5080);
    *((int *)t2) = 1;
    t3 = (t0 + 4544);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(47, ng0);

LAB5:    xsi_set_current_line(49, ng0);
    t4 = (t0 + 1344U);
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

LAB11:    xsi_set_current_line(67, ng0);

LAB30:    xsi_set_current_line(68, ng0);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3344);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB31:    t2 = (t0 + 3344);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 472);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    xsi_vlog_signed_leq(t6, 32, t4, 32, t7, 32);
    t5 = (t6 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB32;

LAB33:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(49, ng0);

LAB13:    xsi_set_current_line(50, ng0);
    t28 = (t0 + 1504U);
    t29 = *((char **)t28);
    t28 = (t29 + 4);
    t30 = *((unsigned int *)t28);
    t31 = (~(t30));
    t32 = *((unsigned int *)t29);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(53, ng0);

LAB20:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 3184);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3184);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t21 = (t0 + 3184);
    t22 = (t21 + 64U);
    t28 = *((char **)t22);
    t29 = (t0 + 2144U);
    t35 = *((char **)t29);
    xsi_vlog_generic_get_array_select_value(t6, 32, t4, t8, t28, 2, 1, t35, 5, 2);
    t29 = (t0 + 3184);
    t36 = (t0 + 3184);
    t39 = (t36 + 72U);
    t40 = *((char **)t39);
    t41 = (t0 + 3184);
    t42 = (t41 + 64U);
    t43 = *((char **)t42);
    t44 = (t0 + 2144U);
    t45 = *((char **)t44);
    xsi_vlog_generic_convert_array_indices(t37, t38, t40, t43, 2, 1, t45, 5, 2);
    t44 = (t37 + 4);
    t9 = *((unsigned int *)t44);
    t48 = (!(t9));
    t46 = (t38 + 4);
    t10 = *((unsigned int *)t46);
    t51 = (!(t10));
    t52 = (t48 && t51);
    if (t52 == 1)
        goto LAB21;

LAB22:
LAB16:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1664U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB23;

LAB24:    xsi_set_current_line(61, ng0);

LAB29:
LAB25:    goto LAB12;

LAB14:    xsi_set_current_line(50, ng0);

LAB17:    xsi_set_current_line(51, ng0);
    t35 = (t0 + 2304U);
    t36 = *((char **)t35);
    t35 = (t0 + 3184);
    t39 = (t0 + 3184);
    t40 = (t39 + 72U);
    t41 = *((char **)t40);
    t42 = (t0 + 3184);
    t43 = (t42 + 64U);
    t44 = *((char **)t43);
    t45 = (t0 + 2144U);
    t46 = *((char **)t45);
    xsi_vlog_generic_convert_array_indices(t37, t38, t41, t44, 2, 1, t46, 5, 2);
    t45 = (t37 + 4);
    t47 = *((unsigned int *)t45);
    t48 = (!(t47));
    t49 = (t38 + 4);
    t50 = *((unsigned int *)t49);
    t51 = (!(t50));
    t52 = (t48 && t51);
    if (t52 == 1)
        goto LAB18;

LAB19:    goto LAB16;

LAB18:    t53 = *((unsigned int *)t37);
    t54 = *((unsigned int *)t38);
    t55 = (t53 - t54);
    t56 = (t55 + 1);
    xsi_vlogvar_wait_assign_value(t35, t36, 0, *((unsigned int *)t38), t56, 0LL);
    goto LAB19;

LAB21:    t11 = *((unsigned int *)t37);
    t12 = *((unsigned int *)t38);
    t55 = (t11 - t12);
    t56 = (t55 + 1);
    xsi_vlogvar_wait_assign_value(t29, t6, 0, *((unsigned int *)t38), t56, 0LL);
    goto LAB22;

LAB23:    xsi_set_current_line(58, ng0);

LAB26:    xsi_set_current_line(59, ng0);
    t4 = (t0 + 2464U);
    t5 = *((char **)t4);
    t4 = (t0 + 3184);
    t7 = (t0 + 3184);
    t8 = (t7 + 72U);
    t21 = *((char **)t8);
    t22 = (t0 + 3184);
    t28 = (t22 + 64U);
    t29 = *((char **)t28);
    t35 = ((char*)((ng4)));
    xsi_vlog_generic_convert_array_indices(t6, t37, t21, t29, 2, 1, t35, 32, 1);
    t36 = (t6 + 4);
    t14 = *((unsigned int *)t36);
    t48 = (!(t14));
    t39 = (t37 + 4);
    t15 = *((unsigned int *)t39);
    t51 = (!(t15));
    t52 = (t48 && t51);
    if (t52 == 1)
        goto LAB27;

LAB28:    goto LAB25;

LAB27:    t16 = *((unsigned int *)t6);
    t17 = *((unsigned int *)t37);
    t55 = (t16 - t17);
    t56 = (t55 + 1);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, *((unsigned int *)t37), t56, 0LL);
    goto LAB28;

LAB32:    xsi_set_current_line(68, ng0);
    t8 = ((char*)((ng2)));
    t21 = (t0 + 3184);
    t22 = (t0 + 3184);
    t28 = (t22 + 72U);
    t29 = *((char **)t28);
    t35 = (t0 + 3184);
    t36 = (t35 + 64U);
    t39 = *((char **)t36);
    t40 = (t0 + 3344);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    xsi_vlog_generic_convert_array_indices(t37, t38, t29, t39, 2, 1, t42, 32, 1);
    t43 = (t37 + 4);
    t14 = *((unsigned int *)t43);
    t48 = (!(t14));
    t44 = (t38 + 4);
    t15 = *((unsigned int *)t44);
    t51 = (!(t15));
    t52 = (t48 && t51);
    if (t52 == 1)
        goto LAB34;

LAB35:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 3344);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 3344);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB31;

LAB34:    t16 = *((unsigned int *)t37);
    t17 = *((unsigned int *)t38);
    t55 = (t16 - t17);
    t56 = (t55 + 1);
    xsi_vlogvar_wait_assign_value(t21, t8, 0, *((unsigned int *)t38), t56, 0LL);
    goto LAB35;

}

static void Always_72_2(char *t0)
{
    char t4[8];
    char t5[8];
    char t8[8];
    char t43[8];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
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
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;

LAB0:    t1 = (t0 + 4760U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 5096);
    *((int *)t2) = 1;
    t3 = (t0 + 4792);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(72, ng0);

LAB5:    xsi_set_current_line(73, ng0);
    t6 = (t0 + 1824U);
    t7 = *((char **)t6);
    t6 = ((char*)((ng1)));
    memset(t8, 0, 8);
    t9 = (t7 + 4);
    t10 = (t6 + 4);
    t11 = *((unsigned int *)t7);
    t12 = *((unsigned int *)t6);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB9;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t8) = 1;

LAB9:    memset(t5, 0, 8);
    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t24) != 0)
        goto LAB12;

LAB13:    t31 = (t5 + 4);
    t32 = *((unsigned int *)t5);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB14;

LAB15:    t36 = *((unsigned int *)t5);
    t37 = (~(t36));
    t38 = *((unsigned int *)t31);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t31) > 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t5) > 0)
        goto LAB20;

LAB21:    memcpy(t4, t43, 8);

LAB22:    t50 = (t0 + 2864);
    xsi_vlogvar_wait_assign_value(t50, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 1984U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t8, 0, 8);
    t6 = (t3 + 4);
    t7 = (t2 + 4);
    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t2);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB26;

LAB23:    if (t20 != 0)
        goto LAB25;

LAB24:    *((unsigned int *)t8) = 1;

LAB26:    memset(t5, 0, 8);
    t10 = (t8 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t10) != 0)
        goto LAB29;

LAB30:    t24 = (t5 + 4);
    t32 = *((unsigned int *)t5);
    t33 = *((unsigned int *)t24);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB31;

LAB32:    t36 = *((unsigned int *)t5);
    t37 = (~(t36));
    t38 = *((unsigned int *)t24);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t24) > 0)
        goto LAB35;

LAB36:    if (*((unsigned int *)t5) > 0)
        goto LAB37;

LAB38:    memcpy(t4, t43, 8);

LAB39:    t48 = (t0 + 3024);
    xsi_vlogvar_wait_assign_value(t48, t4, 0, 0, 32, 0LL);
    goto LAB2;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    *((unsigned int *)t5) = 1;
    goto LAB13;

LAB12:    t30 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB13;

LAB14:    t35 = ((char*)((ng1)));
    goto LAB15;

LAB16:    t40 = (t0 + 3184);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    t44 = (t0 + 3184);
    t45 = (t44 + 72U);
    t46 = *((char **)t45);
    t47 = (t0 + 3184);
    t48 = (t47 + 64U);
    t49 = *((char **)t48);
    t50 = (t0 + 1824U);
    t51 = *((char **)t50);
    xsi_vlog_generic_get_array_select_value(t43, 32, t42, t46, t49, 2, 1, t51, 5, 2);
    goto LAB17;

LAB18:    xsi_vlog_unsigned_bit_combine(t4, 32, t35, 32, t43, 32);
    goto LAB22;

LAB20:    memcpy(t4, t35, 8);
    goto LAB22;

LAB25:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB26;

LAB27:    *((unsigned int *)t5) = 1;
    goto LAB30;

LAB29:    t23 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB30;

LAB31:    t30 = ((char*)((ng1)));
    goto LAB32;

LAB33:    t31 = (t0 + 3184);
    t35 = (t31 + 56U);
    t40 = *((char **)t35);
    t41 = (t0 + 3184);
    t42 = (t41 + 72U);
    t44 = *((char **)t42);
    t45 = (t0 + 3184);
    t46 = (t45 + 64U);
    t47 = *((char **)t46);
    t48 = (t0 + 1984U);
    t49 = *((char **)t48);
    xsi_vlog_generic_get_array_select_value(t43, 32, t40, t44, t47, 2, 1, t49, 5, 2);
    goto LAB34;

LAB35:    xsi_vlog_unsigned_bit_combine(t4, 32, t30, 32, t43, 32);
    goto LAB39;

LAB37:    memcpy(t4, t30, 8);
    goto LAB39;

}


extern void work_m_00000000003585505423_0254784918_init()
{
	static char *pe[] = {(void *)Initial_33_0,(void *)Always_44_1,(void *)Always_72_2};
	xsi_register_didat("work_m_00000000003585505423_0254784918", "isim/VTF_CPU_Stream_isim_beh.exe.sim/work/m_00000000003585505423_0254784918.didat");
	xsi_register_executes(pe);
}
