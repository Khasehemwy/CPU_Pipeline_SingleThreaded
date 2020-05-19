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
static const char *ng0 = "D:/OneDrive/Projects/PrinciplesOfComputerComposition/ISE/CPU/PCAdder.v";
static int ng1[] = {32, 0};
static int ng2[] = {29, 0};
static int ng3[] = {28, 0};
static int ng4[] = {3, 0};
static unsigned int ng5[] = {0U, 0U};
static int ng6[] = {2, 0};
static int ng7[] = {1, 0};
static unsigned int ng8[] = {1U, 0U};
static int ng9[] = {0, 0};
static unsigned int ng10[] = {2U, 0U};
static const char *ng11 = "";
static const char *ng12 = " PCSrc no match.\n";



static void Always_32_0(char *t0)
{
    char t7[8];
    char t9[8];
    char t16[8];
    char t17[8];
    char t68[8];
    char t108[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    int t25;
    char *t26;
    unsigned int t27;
    int t28;
    int t29;
    char *t30;
    unsigned int t31;
    int t32;
    int t33;
    unsigned int t34;
    int t35;
    unsigned int t36;
    unsigned int t37;
    int t38;
    int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;
    char *t105;
    char *t106;
    char *t107;

LAB0:    t1 = (t0 + 3784U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 4104);
    *((int *)t2) = 1;
    t3 = (t0 + 3816);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(32, ng0);

LAB5:    xsi_set_current_line(34, ng0);
    t4 = (t0 + 1504U);
    t5 = *((char **)t4);
    t4 = (t0 + 472);
    t6 = *((char **)t4);
    memset(t7, 0, 8);
    xsi_vlog_unsigned_add(t7, 32, t5, 32, t6, 32);
    t4 = (t0 + 2544);
    xsi_vlogvar_assign_value(t4, t7, 0, 0, 32);
    xsi_set_current_line(36, ng0);
    t2 = (t0 + 2544);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1664U);
    t6 = *((char **)t5);
    t5 = (t0 + 472);
    t8 = *((char **)t5);
    memset(t7, 0, 8);
    xsi_vlog_unsigned_multiply(t7, 32, t6, 32, t8, 32);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 32, t4, 32, t7, 32);
    t5 = (t0 + 2704);
    xsi_vlogvar_assign_value(t5, t9, 0, 0, 32);
    xsi_set_current_line(38, ng0);
    t2 = (t0 + 2544);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t7, 0, 8);
    t5 = (t7 + 4);
    t6 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 28);
    *((unsigned int *)t7) = t11;
    t12 = *((unsigned int *)t6);
    t13 = (t12 >> 28);
    *((unsigned int *)t5) = t13;
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 & 15U);
    t15 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t15 & 15U);
    t8 = (t0 + 2864);
    t18 = (t0 + 2864);
    t19 = (t18 + 72U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng1)));
    t22 = ((char*)((ng2)));
    xsi_vlog_convert_partindices(t9, t16, t17, ((int*)(t20)), 2, t21, 32, 1, t22, 32, 1);
    t23 = (t9 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (!(t24));
    t26 = (t16 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (!(t27));
    t29 = (t25 && t28);
    t30 = (t17 + 4);
    t31 = *((unsigned int *)t30);
    t32 = (!(t31));
    t33 = (t29 && t32);
    if (t33 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1984U);
    t3 = *((char **)t2);
    t2 = (t0 + 2864);
    t4 = (t0 + 2864);
    t5 = (t4 + 72U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng3)));
    t18 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t7, t9, t16, ((int*)(t6)), 2, t8, 32, 1, t18, 32, 1);
    t19 = (t7 + 4);
    t10 = *((unsigned int *)t19);
    t25 = (!(t10));
    t20 = (t9 + 4);
    t11 = *((unsigned int *)t20);
    t28 = (!(t11));
    t29 = (t25 && t28);
    t21 = (t16 + 4);
    t12 = *((unsigned int *)t21);
    t32 = (!(t12));
    t33 = (t29 && t32);
    if (t33 == 1)
        goto LAB8;

LAB9:    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2864);
    t4 = (t0 + 2864);
    t5 = (t4 + 72U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng6)));
    t18 = ((char*)((ng7)));
    xsi_vlog_convert_partindices(t7, t9, t16, ((int*)(t6)), 2, t8, 32, 1, t18, 32, 1);
    t19 = (t7 + 4);
    t10 = *((unsigned int *)t19);
    t25 = (!(t10));
    t20 = (t9 + 4);
    t11 = *((unsigned int *)t20);
    t28 = (!(t11));
    t29 = (t25 && t28);
    t21 = (t16 + 4);
    t12 = *((unsigned int *)t21);
    t32 = (!(t12));
    t33 = (t29 && t32);
    if (t33 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1344U);
    t3 = *((char **)t2);

LAB12:    t2 = ((char*)((ng5)));
    t25 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t25 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng8)));
    t25 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t25 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng10)));
    t25 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t25 == 1)
        goto LAB17;

LAB18:
LAB20:
LAB19:    xsi_set_current_line(63, ng0);

LAB78:    xsi_set_current_line(64, ng0);
    t2 = xsi_vlog_time(t108, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(0, 0, 0, ng11, 2, t0, (char)118, t108, 64);
    xsi_vlogfile_write(1, 0, 0, ng12, 1, t0);

LAB21:    goto LAB2;

LAB6:    t34 = *((unsigned int *)t17);
    t35 = (t34 + 0);
    t36 = *((unsigned int *)t9);
    t37 = *((unsigned int *)t16);
    t38 = (t36 - t37);
    t39 = (t38 + 1);
    xsi_vlogvar_assign_value(t8, t7, t35, *((unsigned int *)t16), t39);
    goto LAB7;

LAB8:    t13 = *((unsigned int *)t16);
    t35 = (t13 + 0);
    t14 = *((unsigned int *)t7);
    t15 = *((unsigned int *)t9);
    t38 = (t14 - t15);
    t39 = (t38 + 1);
    xsi_vlogvar_assign_value(t2, t3, t35, *((unsigned int *)t9), t39);
    goto LAB9;

LAB10:    t13 = *((unsigned int *)t16);
    t35 = (t13 + 0);
    t14 = *((unsigned int *)t7);
    t15 = *((unsigned int *)t9);
    t38 = (t14 - t15);
    t39 = (t38 + 1);
    xsi_vlogvar_assign_value(t3, t2, t35, *((unsigned int *)t9), t39);
    goto LAB11;

LAB13:    xsi_set_current_line(43, ng0);

LAB22:    xsi_set_current_line(44, ng0);
    t4 = (t0 + 2544);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t0 + 2384);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 32);
    goto LAB21;

LAB15:    xsi_set_current_line(47, ng0);

LAB23:    xsi_set_current_line(48, ng0);
    t4 = (t0 + 1184U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng9)));
    memset(t7, 0, 8);
    t6 = (t5 + 4);
    t8 = (t4 + 4);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t4);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t8);
    t15 = (t13 ^ t14);
    t24 = (t12 | t15);
    t27 = *((unsigned int *)t6);
    t31 = *((unsigned int *)t8);
    t34 = (t27 | t31);
    t36 = (~(t34));
    t37 = (t24 & t36);
    if (t37 != 0)
        goto LAB27;

LAB24:    if (t34 != 0)
        goto LAB26;

LAB25:    *((unsigned int *)t7) = 1;

LAB27:    memset(t9, 0, 8);
    t19 = (t7 + 4);
    t40 = *((unsigned int *)t19);
    t41 = (~(t40));
    t42 = *((unsigned int *)t7);
    t43 = (t42 & t41);
    t44 = (t43 & 1U);
    if (t44 != 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t19) != 0)
        goto LAB30;

LAB31:    t21 = (t9 + 4);
    t45 = *((unsigned int *)t9);
    t46 = *((unsigned int *)t21);
    t47 = (t45 || t46);
    if (t47 > 0)
        goto LAB32;

LAB33:    memcpy(t68, t9, 8);

LAB34:    t98 = (t68 + 4);
    t99 = *((unsigned int *)t98);
    t100 = (~(t99));
    t101 = *((unsigned int *)t68);
    t102 = (t101 & t100);
    t103 = (t102 != 0);
    if (t103 > 0)
        goto LAB46;

LAB47:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1184U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng7)));
    memset(t7, 0, 8);
    t5 = (t4 + 4);
    t6 = (t2 + 4);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t5);
    t14 = *((unsigned int *)t6);
    t15 = (t13 ^ t14);
    t24 = (t12 | t15);
    t27 = *((unsigned int *)t5);
    t31 = *((unsigned int *)t6);
    t34 = (t27 | t31);
    t36 = (~(t34));
    t37 = (t24 & t36);
    if (t37 != 0)
        goto LAB53;

LAB50:    if (t34 != 0)
        goto LAB52;

LAB51:    *((unsigned int *)t7) = 1;

LAB53:    memset(t9, 0, 8);
    t18 = (t7 + 4);
    t40 = *((unsigned int *)t18);
    t41 = (~(t40));
    t42 = *((unsigned int *)t7);
    t43 = (t42 & t41);
    t44 = (t43 & 1U);
    if (t44 != 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t18) != 0)
        goto LAB56;

LAB57:    t20 = (t9 + 4);
    t45 = *((unsigned int *)t9);
    t46 = *((unsigned int *)t20);
    t47 = (t45 || t46);
    if (t47 > 0)
        goto LAB58;

LAB59:    memcpy(t68, t9, 8);

LAB60:    t83 = (t68 + 4);
    t99 = *((unsigned int *)t83);
    t100 = (~(t99));
    t101 = *((unsigned int *)t68);
    t102 = (t101 & t100);
    t103 = (t102 != 0);
    if (t103 > 0)
        goto LAB72;

LAB73:    xsi_set_current_line(54, ng0);

LAB76:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2544);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 2384);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);

LAB74:
LAB48:    goto LAB21;

LAB17:    xsi_set_current_line(59, ng0);

LAB77:    xsi_set_current_line(60, ng0);
    t4 = (t0 + 2864);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t0 + 2384);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 32);
    goto LAB21;

LAB26:    t18 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB27;

LAB28:    *((unsigned int *)t9) = 1;
    goto LAB31;

LAB30:    t20 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB31;

LAB32:    t22 = (t0 + 1824U);
    t23 = *((char **)t22);
    t22 = ((char*)((ng9)));
    memset(t16, 0, 8);
    t26 = (t23 + 4);
    t30 = (t22 + 4);
    t48 = *((unsigned int *)t23);
    t49 = *((unsigned int *)t22);
    t50 = (t48 ^ t49);
    t51 = *((unsigned int *)t26);
    t52 = *((unsigned int *)t30);
    t53 = (t51 ^ t52);
    t54 = (t50 | t53);
    t55 = *((unsigned int *)t26);
    t56 = *((unsigned int *)t30);
    t57 = (t55 | t56);
    t58 = (~(t57));
    t59 = (t54 & t58);
    if (t59 != 0)
        goto LAB38;

LAB35:    if (t57 != 0)
        goto LAB37;

LAB36:    *((unsigned int *)t16) = 1;

LAB38:    memset(t17, 0, 8);
    t61 = (t16 + 4);
    t62 = *((unsigned int *)t61);
    t63 = (~(t62));
    t64 = *((unsigned int *)t16);
    t65 = (t64 & t63);
    t66 = (t65 & 1U);
    if (t66 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t61) != 0)
        goto LAB41;

LAB42:    t69 = *((unsigned int *)t9);
    t70 = *((unsigned int *)t17);
    t71 = (t69 & t70);
    *((unsigned int *)t68) = t71;
    t72 = (t9 + 4);
    t73 = (t17 + 4);
    t74 = (t68 + 4);
    t75 = *((unsigned int *)t72);
    t76 = *((unsigned int *)t73);
    t77 = (t75 | t76);
    *((unsigned int *)t74) = t77;
    t78 = *((unsigned int *)t74);
    t79 = (t78 != 0);
    if (t79 == 1)
        goto LAB43;

LAB44:
LAB45:    goto LAB34;

LAB37:    t60 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB38;

LAB39:    *((unsigned int *)t17) = 1;
    goto LAB42;

LAB41:    t67 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t67) = 1;
    goto LAB42;

LAB43:    t80 = *((unsigned int *)t68);
    t81 = *((unsigned int *)t74);
    *((unsigned int *)t68) = (t80 | t81);
    t82 = (t9 + 4);
    t83 = (t17 + 4);
    t84 = *((unsigned int *)t9);
    t85 = (~(t84));
    t86 = *((unsigned int *)t82);
    t87 = (~(t86));
    t88 = *((unsigned int *)t17);
    t89 = (~(t88));
    t90 = *((unsigned int *)t83);
    t91 = (~(t90));
    t28 = (t85 & t87);
    t29 = (t89 & t91);
    t92 = (~(t28));
    t93 = (~(t29));
    t94 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t94 & t92);
    t95 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t95 & t93);
    t96 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t96 & t92);
    t97 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t97 & t93);
    goto LAB45;

LAB46:    xsi_set_current_line(48, ng0);

LAB49:    xsi_set_current_line(49, ng0);
    t104 = (t0 + 2704);
    t105 = (t104 + 56U);
    t106 = *((char **)t105);
    t107 = (t0 + 2384);
    xsi_vlogvar_assign_value(t107, t106, 0, 0, 32);
    goto LAB48;

LAB52:    t8 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB53;

LAB54:    *((unsigned int *)t9) = 1;
    goto LAB57;

LAB56:    t19 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB57;

LAB58:    t21 = (t0 + 1824U);
    t22 = *((char **)t21);
    t21 = ((char*)((ng9)));
    memset(t16, 0, 8);
    t23 = (t22 + 4);
    t26 = (t21 + 4);
    t48 = *((unsigned int *)t22);
    t49 = *((unsigned int *)t21);
    t50 = (t48 ^ t49);
    t51 = *((unsigned int *)t23);
    t52 = *((unsigned int *)t26);
    t53 = (t51 ^ t52);
    t54 = (t50 | t53);
    t55 = *((unsigned int *)t23);
    t56 = *((unsigned int *)t26);
    t57 = (t55 | t56);
    t58 = (~(t57));
    t59 = (t54 & t58);
    if (t59 != 0)
        goto LAB62;

LAB61:    if (t57 != 0)
        goto LAB63;

LAB64:    memset(t17, 0, 8);
    t60 = (t16 + 4);
    t62 = *((unsigned int *)t60);
    t63 = (~(t62));
    t64 = *((unsigned int *)t16);
    t65 = (t64 & t63);
    t66 = (t65 & 1U);
    if (t66 != 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t60) != 0)
        goto LAB67;

LAB68:    t69 = *((unsigned int *)t9);
    t70 = *((unsigned int *)t17);
    t71 = (t69 & t70);
    *((unsigned int *)t68) = t71;
    t67 = (t9 + 4);
    t72 = (t17 + 4);
    t73 = (t68 + 4);
    t75 = *((unsigned int *)t67);
    t76 = *((unsigned int *)t72);
    t77 = (t75 | t76);
    *((unsigned int *)t73) = t77;
    t78 = *((unsigned int *)t73);
    t79 = (t78 != 0);
    if (t79 == 1)
        goto LAB69;

LAB70:
LAB71:    goto LAB60;

LAB62:    *((unsigned int *)t16) = 1;
    goto LAB64;

LAB63:    t30 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB64;

LAB65:    *((unsigned int *)t17) = 1;
    goto LAB68;

LAB67:    t61 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB68;

LAB69:    t80 = *((unsigned int *)t68);
    t81 = *((unsigned int *)t73);
    *((unsigned int *)t68) = (t80 | t81);
    t74 = (t9 + 4);
    t82 = (t17 + 4);
    t84 = *((unsigned int *)t9);
    t85 = (~(t84));
    t86 = *((unsigned int *)t74);
    t87 = (~(t86));
    t88 = *((unsigned int *)t17);
    t89 = (~(t88));
    t90 = *((unsigned int *)t82);
    t91 = (~(t90));
    t25 = (t85 & t87);
    t28 = (t89 & t91);
    t92 = (~(t25));
    t93 = (~(t28));
    t94 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t94 & t92);
    t95 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t95 & t93);
    t96 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t96 & t92);
    t97 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t97 & t93);
    goto LAB71;

LAB72:    xsi_set_current_line(51, ng0);

LAB75:    xsi_set_current_line(52, ng0);
    t98 = (t0 + 2704);
    t104 = (t98 + 56U);
    t105 = *((char **)t104);
    t106 = (t0 + 2384);
    xsi_vlogvar_assign_value(t106, t105, 0, 0, 32);
    goto LAB74;

}


extern void work_m_00000000002546410484_1463177816_init()
{
	static char *pe[] = {(void *)Always_32_0};
	xsi_register_didat("work_m_00000000002546410484_1463177816", "isim/VTF_CPU_isim_beh.exe.sim/work/m_00000000002546410484_1463177816.didat");
	xsi_register_executes(pe);
}
