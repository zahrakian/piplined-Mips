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
static const char *ng0 = "D:/data/university/az memari/hws/hw1/all/my_mips/my_dcm.v";
static unsigned int ng1[] = {18U, 0U};
static int ng2[] = {0, 0};
static int ng3[] = {2, 0};
static int ng4[] = {1, 0};



static void Initial_11_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(12, ng0);

LAB2:    xsi_set_current_line(13, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1608);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 5);
    xsi_set_current_line(14, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 1768);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 8);
    xsi_set_current_line(15, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 1448);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_18_1(char *t0)
{
    char t11[8];
    char t13[8];
    char t14[8];
    char t28[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;

LAB0:    t1 = (t0 + 2936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18, ng0);
    t2 = (t0 + 3256);
    *((int *)t2) = 1;
    t3 = (t0 + 2968);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(19, ng0);

LAB5:    xsi_set_current_line(20, ng0);
    t4 = (t0 + 1768);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 1608);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng3)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_divide(t11, 32, t9, 5, t10, 32);
    t12 = ((char*)((ng4)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_minus(t13, 32, t11, 32, t12, 32);
    memset(t14, 0, 8);
    t15 = (t6 + 4);
    if (*((unsigned int *)t15) != 0)
        goto LAB7;

LAB6:    t16 = (t13 + 4);
    if (*((unsigned int *)t16) != 0)
        goto LAB7;

LAB10:    if (*((unsigned int *)t6) < *((unsigned int *)t13))
        goto LAB8;

LAB9:    t18 = (t14 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (~(t19));
    t21 = *((unsigned int *)t14);
    t22 = (t21 & t20);
    t23 = (t22 != 0);
    if (t23 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(25, ng0);

LAB15:    xsi_set_current_line(26, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(27, ng0);
    t2 = (t0 + 1448);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t19 = *((unsigned int *)t5);
    t20 = (~(t19));
    t21 = *((unsigned int *)t4);
    t22 = (t21 & t20);
    t23 = (t22 & 1U);
    if (t23 != 0)
        goto LAB19;

LAB17:    if (*((unsigned int *)t5) == 0)
        goto LAB16;

LAB18:    t6 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t6) = 1;

LAB19:    t7 = (t11 + 4);
    t8 = (t4 + 4);
    t30 = *((unsigned int *)t4);
    t31 = (~(t30));
    *((unsigned int *)t11) = t31;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t8) != 0)
        goto LAB21;

LAB20:    t36 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t36 & 1U);
    t37 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t37 & 1U);
    t9 = (t0 + 1448);
    xsi_vlogvar_assign_value(t9, t11, 0, 0, 1);

LAB13:    goto LAB2;

LAB7:    t17 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB9;

LAB8:    *((unsigned int *)t14) = 1;
    goto LAB9;

LAB11:    xsi_set_current_line(21, ng0);

LAB14:    xsi_set_current_line(22, ng0);
    t24 = (t0 + 1768);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = ((char*)((ng4)));
    memset(t28, 0, 8);
    xsi_vlog_unsigned_add(t28, 32, t26, 8, t27, 32);
    t29 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 8, 0LL);
    goto LAB13;

LAB16:    *((unsigned int *)t11) = 1;
    goto LAB19;

LAB21:    t32 = *((unsigned int *)t11);
    t33 = *((unsigned int *)t8);
    *((unsigned int *)t11) = (t32 | t33);
    t34 = *((unsigned int *)t7);
    t35 = *((unsigned int *)t8);
    *((unsigned int *)t7) = (t34 | t35);
    goto LAB20;

}


extern void work_m_00000000003568203580_0932324526_init()
{
	static char *pe[] = {(void *)Initial_11_0,(void *)Always_18_1};
	xsi_register_didat("work_m_00000000003568203580_0932324526", "isim/mips_test_3_isim_beh.exe.sim/work/m_00000000003568203580_0932324526.didat");
	xsi_register_executes(pe);
}
