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
static const char *ng0 = "D:/data/university/az memari/hws/hw1/all/my_mips/Adder_Subtractor.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static int ng4[] = {1, 0};



static void Always_12_0(char *t0)
{
    char t14[8];
    char t16[8];
    char t32[8];
    char t36[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    int t13;
    char *t15;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t33;
    char *t34;
    char *t35;
    char *t37;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(12, ng0);
    t2 = (t0 + 3416);
    *((int *)t2) = 1;
    t3 = (t0 + 2880);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(13, ng0);

LAB5:    xsi_set_current_line(14, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(16, ng0);

LAB9:    xsi_set_current_line(17, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);

LAB10:    t2 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t13 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng3)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t13 == 1)
        goto LAB13;

LAB14:
LAB15:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(15, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 32, 0LL);
    goto LAB8;

LAB11:    xsi_set_current_line(18, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t0 + 1928);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    memset(t14, 0, 8);
    xsi_vlog_signed_add(t14, 32, t5, 16, t12, 32);
    t15 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t15, t14, 0, 0, 32, 0LL);
    goto LAB15;

LAB13:    xsi_set_current_line(19, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    memset(t14, 0, 8);
    t4 = (t14 + 4);
    t11 = (t5 + 4);
    memcpy(t16, t5, 8);
    t8 = *((unsigned int *)t5);
    t9 = (t8 & 32768U);
    t6 = t9;
    t12 = (t5 + 4);
    t10 = *((unsigned int *)t12);
    t17 = (t10 & 32768U);
    t7 = t17;
    t18 = (t9 != 0);
    if (t18 == 1)
        goto LAB16;

LAB17:    t20 = (t17 != 0);
    if (t20 == 1)
        goto LAB18;

LAB19:    t22 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t22 & 4294967295U);
    t23 = (t16 + 4);
    t24 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t24 & 4294967295U);
    memcpy(t14, t16, 8);
    t25 = *((unsigned int *)t14);
    t26 = (~(t25));
    t27 = *((unsigned int *)t4);
    t28 = (t26 | t27);
    *((unsigned int *)t14) = t28;
    t29 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t29 & 4294967295U);
    t30 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t30 & 4294967295U);
    t31 = ((char*)((ng4)));
    memset(t32, 0, 8);
    xsi_vlog_signed_add(t32, 32, t14, 32, t31, 32);
    t33 = (t0 + 1928);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    memset(t36, 0, 8);
    xsi_vlog_signed_add(t36, 32, t32, 32, t35, 32);
    t37 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t37, t36, 0, 0, 32, 0LL);
    goto LAB15;

LAB16:    t19 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t19 | 4294901760U);
    goto LAB17;

LAB18:    t15 = (t16 + 4);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t21 | 4294901760U);
    goto LAB19;

}

static void Cont_24_1(char *t0)
{
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

LAB0:    t1 = (t0 + 3096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3512);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 3432);
    *((int *)t10) = 1;

LAB1:    return;
}


extern void work_m_00000000001456170214_2913649538_init()
{
	static char *pe[] = {(void *)Always_12_0,(void *)Cont_24_1};
	xsi_register_didat("work_m_00000000001456170214_2913649538", "isim/mips_test_isim_beh.exe.sim/work/m_00000000001456170214_2913649538.didat");
	xsi_register_executes(pe);
}
