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
static const char *ng0 = "D:/data/university/az memari/hws/hw1/all/my_mips/ALU.v";
static int ng1[] = {1, 0};
static unsigned int ng2[] = {9U, 0U};
static unsigned int ng3[] = {8U, 0U};
static unsigned int ng4[] = {0U, 0U};
static unsigned int ng5[] = {1U, 0U};
static unsigned int ng6[] = {2U, 0U};
static unsigned int ng7[] = {3U, 0U};
static unsigned int ng8[] = {4U, 0U};
static unsigned int ng9[] = {5U, 0U};
static unsigned int ng10[] = {6U, 0U};
static unsigned int ng11[] = {7U, 0U};
static int ng12[] = {0, 0};



static void Always_39_0(char *t0)
{
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

LAB0:    t1 = (t0 + 4128U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 5192);
    *((int *)t2) = 1;
    t3 = (t0 + 4160);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(40, ng0);

LAB5:    xsi_set_current_line(41, ng0);
    t4 = (t0 + 2168U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(42, ng0);
    t11 = (t0 + 2488U);
    t12 = *((char **)t11);
    t11 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 32, 0LL);
    goto LAB8;

}

static void Always_45_1(char *t0)
{
    char t13[8];
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
    char *t14;

LAB0:    t1 = (t0 + 4376U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 5208);
    *((int *)t2) = 1;
    t3 = (t0 + 4408);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(46, ng0);

LAB5:    xsi_set_current_line(47, ng0);
    t4 = (t0 + 2328U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(48, ng0);
    t11 = (t0 + 2648U);
    t12 = *((char **)t11);
    t11 = ((char*)((ng1)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_arith_rshift(t13, 32, t12, 32, t11, 32);
    t14 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t14, t13, 0, 0, 32, 0LL);
    goto LAB8;

}

static void Cont_52_2(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t33[8];
    char t49[8];
    char t50[8];
    char t53[8];
    char t80[8];
    char t96[8];
    char t97[8];
    char t100[8];
    char t130[8];
    char t135[8];
    char t136[8];
    char t138[8];
    char t168[8];
    char t173[8];
    char t174[8];
    char t176[8];
    char t203[8];
    char t216[8];
    char t217[8];
    char t220[8];
    char t250[8];
    char t255[8];
    char t256[8];
    char t258[8];
    char t288[8];
    char t293[8];
    char t294[8];
    char t296[8];
    char t326[8];
    char t361[8];
    char t362[8];
    char t365[8];
    char t395[8];
    char t426[8];
    char t427[8];
    char t430[8];
    char t449[8];
    char t452[8];
    char *t1;
    char *t2;
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
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t51;
    char *t52;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
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
    char *t98;
    char *t99;
    char *t101;
    char *t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    char *t115;
    char *t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    char *t122;
    char *t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    char *t127;
    char *t128;
    char *t129;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    char *t137;
    char *t139;
    char *t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    char *t153;
    char *t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    char *t160;
    char *t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    char *t165;
    char *t166;
    char *t167;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    char *t175;
    char *t177;
    char *t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    char *t191;
    char *t192;
    unsigned int t193;
    unsigned int t194;
    unsigned int t195;
    unsigned int t196;
    unsigned int t197;
    char *t198;
    char *t199;
    unsigned int t200;
    unsigned int t201;
    unsigned int t202;
    char *t204;
    char *t205;
    unsigned int t206;
    unsigned int t207;
    unsigned int t208;
    unsigned int t209;
    unsigned int t210;
    char *t211;
    unsigned int t212;
    unsigned int t213;
    unsigned int t214;
    unsigned int t215;
    char *t218;
    char *t219;
    char *t221;
    char *t222;
    unsigned int t223;
    unsigned int t224;
    unsigned int t225;
    unsigned int t226;
    unsigned int t227;
    unsigned int t228;
    unsigned int t229;
    unsigned int t230;
    unsigned int t231;
    unsigned int t232;
    unsigned int t233;
    unsigned int t234;
    char *t235;
    char *t236;
    unsigned int t237;
    unsigned int t238;
    unsigned int t239;
    unsigned int t240;
    unsigned int t241;
    char *t242;
    char *t243;
    unsigned int t244;
    unsigned int t245;
    unsigned int t246;
    char *t247;
    char *t248;
    char *t249;
    unsigned int t251;
    unsigned int t252;
    unsigned int t253;
    unsigned int t254;
    char *t257;
    char *t259;
    char *t260;
    unsigned int t261;
    unsigned int t262;
    unsigned int t263;
    unsigned int t264;
    unsigned int t265;
    unsigned int t266;
    unsigned int t267;
    unsigned int t268;
    unsigned int t269;
    unsigned int t270;
    unsigned int t271;
    unsigned int t272;
    char *t273;
    char *t274;
    unsigned int t275;
    unsigned int t276;
    unsigned int t277;
    unsigned int t278;
    unsigned int t279;
    char *t280;
    char *t281;
    unsigned int t282;
    unsigned int t283;
    unsigned int t284;
    char *t285;
    char *t286;
    char *t287;
    unsigned int t289;
    unsigned int t290;
    unsigned int t291;
    unsigned int t292;
    char *t295;
    char *t297;
    char *t298;
    unsigned int t299;
    unsigned int t300;
    unsigned int t301;
    unsigned int t302;
    unsigned int t303;
    unsigned int t304;
    unsigned int t305;
    unsigned int t306;
    unsigned int t307;
    unsigned int t308;
    unsigned int t309;
    unsigned int t310;
    char *t311;
    char *t312;
    unsigned int t313;
    unsigned int t314;
    unsigned int t315;
    unsigned int t316;
    unsigned int t317;
    char *t318;
    char *t319;
    unsigned int t320;
    unsigned int t321;
    unsigned int t322;
    char *t323;
    char *t324;
    char *t325;
    unsigned int t327;
    unsigned int t328;
    unsigned int t329;
    char *t330;
    char *t331;
    unsigned int t332;
    unsigned int t333;
    unsigned int t334;
    unsigned int t335;
    unsigned int t336;
    unsigned int t337;
    unsigned int t338;
    char *t339;
    char *t340;
    unsigned int t341;
    unsigned int t342;
    unsigned int t343;
    unsigned int t344;
    unsigned int t345;
    unsigned int t346;
    unsigned int t347;
    unsigned int t348;
    int t349;
    int t350;
    unsigned int t351;
    unsigned int t352;
    unsigned int t353;
    unsigned int t354;
    unsigned int t355;
    unsigned int t356;
    unsigned int t357;
    unsigned int t358;
    unsigned int t359;
    unsigned int t360;
    char *t363;
    char *t364;
    char *t366;
    char *t367;
    unsigned int t368;
    unsigned int t369;
    unsigned int t370;
    unsigned int t371;
    unsigned int t372;
    unsigned int t373;
    unsigned int t374;
    unsigned int t375;
    unsigned int t376;
    unsigned int t377;
    unsigned int t378;
    unsigned int t379;
    char *t380;
    char *t381;
    unsigned int t382;
    unsigned int t383;
    unsigned int t384;
    unsigned int t385;
    unsigned int t386;
    char *t387;
    char *t388;
    unsigned int t389;
    unsigned int t390;
    unsigned int t391;
    char *t392;
    char *t393;
    char *t394;
    unsigned int t396;
    unsigned int t397;
    unsigned int t398;
    char *t399;
    char *t400;
    unsigned int t401;
    unsigned int t402;
    unsigned int t403;
    unsigned int t404;
    unsigned int t405;
    unsigned int t406;
    unsigned int t407;
    char *t408;
    char *t409;
    unsigned int t410;
    unsigned int t411;
    unsigned int t412;
    int t413;
    unsigned int t414;
    unsigned int t415;
    unsigned int t416;
    int t417;
    unsigned int t418;
    unsigned int t419;
    unsigned int t420;
    unsigned int t421;
    unsigned int t422;
    unsigned int t423;
    unsigned int t424;
    unsigned int t425;
    char *t428;
    char *t429;
    char *t431;
    char *t432;
    unsigned int t433;
    unsigned int t434;
    unsigned int t435;
    unsigned int t436;
    unsigned int t437;
    unsigned int t438;
    unsigned int t439;
    unsigned int t440;
    unsigned int t441;
    unsigned int t442;
    unsigned int t443;
    unsigned int t444;
    char *t445;
    char *t446;
    char *t447;
    char *t448;
    char *t450;
    char *t451;
    unsigned int t453;
    unsigned int t454;
    unsigned int t455;
    char *t456;
    char *t457;
    char *t458;
    unsigned int t459;
    unsigned int t460;
    unsigned int t461;
    unsigned int t462;
    unsigned int t463;
    unsigned int t464;
    unsigned int t465;
    char *t466;
    char *t467;
    unsigned int t468;
    unsigned int t469;
    unsigned int t470;
    unsigned int t471;
    unsigned int t472;
    unsigned int t473;
    unsigned int t474;
    unsigned int t475;
    int t476;
    int t477;
    unsigned int t478;
    unsigned int t479;
    unsigned int t480;
    unsigned int t481;
    unsigned int t482;
    unsigned int t483;
    char *t484;
    unsigned int t485;
    unsigned int t486;
    unsigned int t487;
    unsigned int t488;
    unsigned int t489;
    char *t490;
    char *t491;
    unsigned int t492;
    unsigned int t493;
    unsigned int t494;
    char *t495;
    unsigned int t496;
    unsigned int t497;
    unsigned int t498;
    unsigned int t499;
    char *t500;
    char *t501;
    char *t502;
    char *t503;
    char *t504;
    char *t505;
    unsigned int t506;
    unsigned int t507;
    char *t508;
    unsigned int t509;
    unsigned int t510;
    char *t511;
    unsigned int t512;
    unsigned int t513;
    char *t514;

LAB0:    t1 = (t0 + 4624U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1688U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t2 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t2);
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
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    memset(t4, 0, 8);
    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t22) != 0)
        goto LAB10;

LAB11:    t29 = (t4 + 4);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB12;

LAB13:    t45 = *((unsigned int *)t4);
    t46 = (~(t45));
    t47 = *((unsigned int *)t29);
    t48 = (t46 || t47);
    if (t48 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t49, 8);

LAB20:    t501 = (t0 + 5320);
    t502 = (t501 + 56U);
    t503 = *((char **)t502);
    t504 = (t503 + 56U);
    t505 = *((char **)t504);
    memset(t505, 0, 8);
    t506 = 65535U;
    t507 = t506;
    t508 = (t3 + 4);
    t509 = *((unsigned int *)t3);
    t506 = (t506 & t509);
    t510 = *((unsigned int *)t508);
    t507 = (t507 & t510);
    t511 = (t505 + 4);
    t512 = *((unsigned int *)t505);
    *((unsigned int *)t505) = (t512 | t506);
    t513 = *((unsigned int *)t511);
    *((unsigned int *)t511) = (t513 | t507);
    xsi_driver_vfirst_trans(t501, 0, 15);
    t514 = (t0 + 5224);
    *((int *)t514) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t28 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB11;

LAB12:    t34 = (t0 + 3048);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    memset(t33, 0, 8);
    t37 = (t33 + 4);
    t38 = (t36 + 4);
    t39 = *((unsigned int *)t36);
    t40 = (t39 >> 0);
    *((unsigned int *)t33) = t40;
    t41 = *((unsigned int *)t38);
    t42 = (t41 >> 0);
    *((unsigned int *)t37) = t42;
    t43 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t43 & 65535U);
    t44 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t44 & 65535U);
    goto LAB13;

LAB14:    t51 = (t0 + 1688U);
    t52 = *((char **)t51);
    t51 = ((char*)((ng3)));
    memset(t53, 0, 8);
    t54 = (t52 + 4);
    t55 = (t51 + 4);
    t56 = *((unsigned int *)t52);
    t57 = *((unsigned int *)t51);
    t58 = (t56 ^ t57);
    t59 = *((unsigned int *)t54);
    t60 = *((unsigned int *)t55);
    t61 = (t59 ^ t60);
    t62 = (t58 | t61);
    t63 = *((unsigned int *)t54);
    t64 = *((unsigned int *)t55);
    t65 = (t63 | t64);
    t66 = (~(t65));
    t67 = (t62 & t66);
    if (t67 != 0)
        goto LAB24;

LAB21:    if (t65 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t53) = 1;

LAB24:    memset(t50, 0, 8);
    t69 = (t53 + 4);
    t70 = *((unsigned int *)t69);
    t71 = (~(t70));
    t72 = *((unsigned int *)t53);
    t73 = (t72 & t71);
    t74 = (t73 & 1U);
    if (t74 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t69) != 0)
        goto LAB27;

LAB28:    t76 = (t50 + 4);
    t77 = *((unsigned int *)t50);
    t78 = *((unsigned int *)t76);
    t79 = (t77 || t78);
    if (t79 > 0)
        goto LAB29;

LAB30:    t92 = *((unsigned int *)t50);
    t93 = (~(t92));
    t94 = *((unsigned int *)t76);
    t95 = (t93 || t94);
    if (t95 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t76) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t50) > 0)
        goto LAB35;

LAB36:    memcpy(t49, t96, 8);

LAB37:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t33, 32, t49, 32);
    goto LAB20;

LAB18:    memcpy(t3, t33, 8);
    goto LAB20;

LAB23:    t68 = (t53 + 4);
    *((unsigned int *)t53) = 1;
    *((unsigned int *)t68) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t50) = 1;
    goto LAB28;

LAB27:    t75 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t75) = 1;
    goto LAB28;

LAB29:    t81 = (t0 + 3208);
    t82 = (t81 + 56U);
    t83 = *((char **)t82);
    memset(t80, 0, 8);
    t84 = (t80 + 4);
    t85 = (t83 + 4);
    t86 = *((unsigned int *)t83);
    t87 = (t86 >> 0);
    *((unsigned int *)t80) = t87;
    t88 = *((unsigned int *)t85);
    t89 = (t88 >> 0);
    *((unsigned int *)t84) = t89;
    t90 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t90 & 65535U);
    t91 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t91 & 65535U);
    goto LAB30;

LAB31:    t98 = (t0 + 1208U);
    t99 = *((char **)t98);
    t98 = ((char*)((ng4)));
    memset(t100, 0, 8);
    t101 = (t99 + 4);
    t102 = (t98 + 4);
    t103 = *((unsigned int *)t99);
    t104 = *((unsigned int *)t98);
    t105 = (t103 ^ t104);
    t106 = *((unsigned int *)t101);
    t107 = *((unsigned int *)t102);
    t108 = (t106 ^ t107);
    t109 = (t105 | t108);
    t110 = *((unsigned int *)t101);
    t111 = *((unsigned int *)t102);
    t112 = (t110 | t111);
    t113 = (~(t112));
    t114 = (t109 & t113);
    if (t114 != 0)
        goto LAB41;

LAB38:    if (t112 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t100) = 1;

LAB41:    memset(t97, 0, 8);
    t116 = (t100 + 4);
    t117 = *((unsigned int *)t116);
    t118 = (~(t117));
    t119 = *((unsigned int *)t100);
    t120 = (t119 & t118);
    t121 = (t120 & 1U);
    if (t121 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t116) != 0)
        goto LAB44;

LAB45:    t123 = (t97 + 4);
    t124 = *((unsigned int *)t97);
    t125 = *((unsigned int *)t123);
    t126 = (t124 || t125);
    if (t126 > 0)
        goto LAB46;

LAB47:    t131 = *((unsigned int *)t97);
    t132 = (~(t131));
    t133 = *((unsigned int *)t123);
    t134 = (t132 || t133);
    if (t134 > 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t123) > 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t97) > 0)
        goto LAB52;

LAB53:    memcpy(t96, t135, 8);

LAB54:    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t49, 32, t80, 32, t96, 32);
    goto LAB37;

LAB35:    memcpy(t49, t80, 8);
    goto LAB37;

LAB40:    t115 = (t100 + 4);
    *((unsigned int *)t100) = 1;
    *((unsigned int *)t115) = 1;
    goto LAB41;

LAB42:    *((unsigned int *)t97) = 1;
    goto LAB45;

LAB44:    t122 = (t97 + 4);
    *((unsigned int *)t97) = 1;
    *((unsigned int *)t122) = 1;
    goto LAB45;

LAB46:    t127 = (t0 + 1368U);
    t128 = *((char **)t127);
    t127 = (t0 + 1528U);
    t129 = *((char **)t127);
    memset(t130, 0, 8);
    xsi_vlog_unsigned_add(t130, 32, t128, 16, t129, 16);
    goto LAB47;

LAB48:    t127 = (t0 + 1208U);
    t137 = *((char **)t127);
    t127 = ((char*)((ng5)));
    memset(t138, 0, 8);
    t139 = (t137 + 4);
    t140 = (t127 + 4);
    t141 = *((unsigned int *)t137);
    t142 = *((unsigned int *)t127);
    t143 = (t141 ^ t142);
    t144 = *((unsigned int *)t139);
    t145 = *((unsigned int *)t140);
    t146 = (t144 ^ t145);
    t147 = (t143 | t146);
    t148 = *((unsigned int *)t139);
    t149 = *((unsigned int *)t140);
    t150 = (t148 | t149);
    t151 = (~(t150));
    t152 = (t147 & t151);
    if (t152 != 0)
        goto LAB58;

LAB55:    if (t150 != 0)
        goto LAB57;

LAB56:    *((unsigned int *)t138) = 1;

LAB58:    memset(t136, 0, 8);
    t154 = (t138 + 4);
    t155 = *((unsigned int *)t154);
    t156 = (~(t155));
    t157 = *((unsigned int *)t138);
    t158 = (t157 & t156);
    t159 = (t158 & 1U);
    if (t159 != 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t154) != 0)
        goto LAB61;

LAB62:    t161 = (t136 + 4);
    t162 = *((unsigned int *)t136);
    t163 = *((unsigned int *)t161);
    t164 = (t162 || t163);
    if (t164 > 0)
        goto LAB63;

LAB64:    t169 = *((unsigned int *)t136);
    t170 = (~(t169));
    t171 = *((unsigned int *)t161);
    t172 = (t170 || t171);
    if (t172 > 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t161) > 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t136) > 0)
        goto LAB69;

LAB70:    memcpy(t135, t173, 8);

LAB71:    goto LAB49;

LAB50:    xsi_vlog_unsigned_bit_combine(t96, 32, t130, 32, t135, 32);
    goto LAB54;

LAB52:    memcpy(t96, t130, 8);
    goto LAB54;

LAB57:    t153 = (t138 + 4);
    *((unsigned int *)t138) = 1;
    *((unsigned int *)t153) = 1;
    goto LAB58;

LAB59:    *((unsigned int *)t136) = 1;
    goto LAB62;

LAB61:    t160 = (t136 + 4);
    *((unsigned int *)t136) = 1;
    *((unsigned int *)t160) = 1;
    goto LAB62;

LAB63:    t165 = (t0 + 1368U);
    t166 = *((char **)t165);
    t165 = (t0 + 1528U);
    t167 = *((char **)t165);
    memset(t168, 0, 8);
    xsi_vlog_unsigned_minus(t168, 32, t166, 16, t167, 16);
    goto LAB64;

LAB65:    t165 = (t0 + 1208U);
    t175 = *((char **)t165);
    t165 = ((char*)((ng6)));
    memset(t176, 0, 8);
    t177 = (t175 + 4);
    t178 = (t165 + 4);
    t179 = *((unsigned int *)t175);
    t180 = *((unsigned int *)t165);
    t181 = (t179 ^ t180);
    t182 = *((unsigned int *)t177);
    t183 = *((unsigned int *)t178);
    t184 = (t182 ^ t183);
    t185 = (t181 | t184);
    t186 = *((unsigned int *)t177);
    t187 = *((unsigned int *)t178);
    t188 = (t186 | t187);
    t189 = (~(t188));
    t190 = (t185 & t189);
    if (t190 != 0)
        goto LAB75;

LAB72:    if (t188 != 0)
        goto LAB74;

LAB73:    *((unsigned int *)t176) = 1;

LAB75:    memset(t174, 0, 8);
    t192 = (t176 + 4);
    t193 = *((unsigned int *)t192);
    t194 = (~(t193));
    t195 = *((unsigned int *)t176);
    t196 = (t195 & t194);
    t197 = (t196 & 1U);
    if (t197 != 0)
        goto LAB76;

LAB77:    if (*((unsigned int *)t192) != 0)
        goto LAB78;

LAB79:    t199 = (t174 + 4);
    t200 = *((unsigned int *)t174);
    t201 = *((unsigned int *)t199);
    t202 = (t200 || t201);
    if (t202 > 0)
        goto LAB80;

LAB81:    t212 = *((unsigned int *)t174);
    t213 = (~(t212));
    t214 = *((unsigned int *)t199);
    t215 = (t213 || t214);
    if (t215 > 0)
        goto LAB82;

LAB83:    if (*((unsigned int *)t199) > 0)
        goto LAB84;

LAB85:    if (*((unsigned int *)t174) > 0)
        goto LAB86;

LAB87:    memcpy(t173, t216, 8);

LAB88:    goto LAB66;

LAB67:    xsi_vlog_unsigned_bit_combine(t135, 32, t168, 32, t173, 32);
    goto LAB71;

LAB69:    memcpy(t135, t168, 8);
    goto LAB71;

LAB74:    t191 = (t176 + 4);
    *((unsigned int *)t176) = 1;
    *((unsigned int *)t191) = 1;
    goto LAB75;

LAB76:    *((unsigned int *)t174) = 1;
    goto LAB79;

LAB78:    t198 = (t174 + 4);
    *((unsigned int *)t174) = 1;
    *((unsigned int *)t198) = 1;
    goto LAB79;

LAB80:    t204 = (t0 + 1368U);
    t205 = *((char **)t204);
    memset(t203, 0, 8);
    t204 = (t205 + 4);
    t206 = *((unsigned int *)t204);
    t207 = (~(t206));
    t208 = *((unsigned int *)t205);
    t209 = (t208 & t207);
    t210 = (t209 & 65535U);
    if (t210 != 0)
        goto LAB92;

LAB90:    if (*((unsigned int *)t204) == 0)
        goto LAB89;

LAB91:    t211 = (t203 + 4);
    *((unsigned int *)t203) = 1;
    *((unsigned int *)t211) = 1;

LAB92:    goto LAB81;

LAB82:    t218 = (t0 + 1208U);
    t219 = *((char **)t218);
    t218 = ((char*)((ng7)));
    memset(t220, 0, 8);
    t221 = (t219 + 4);
    t222 = (t218 + 4);
    t223 = *((unsigned int *)t219);
    t224 = *((unsigned int *)t218);
    t225 = (t223 ^ t224);
    t226 = *((unsigned int *)t221);
    t227 = *((unsigned int *)t222);
    t228 = (t226 ^ t227);
    t229 = (t225 | t228);
    t230 = *((unsigned int *)t221);
    t231 = *((unsigned int *)t222);
    t232 = (t230 | t231);
    t233 = (~(t232));
    t234 = (t229 & t233);
    if (t234 != 0)
        goto LAB96;

LAB93:    if (t232 != 0)
        goto LAB95;

LAB94:    *((unsigned int *)t220) = 1;

LAB96:    memset(t217, 0, 8);
    t236 = (t220 + 4);
    t237 = *((unsigned int *)t236);
    t238 = (~(t237));
    t239 = *((unsigned int *)t220);
    t240 = (t239 & t238);
    t241 = (t240 & 1U);
    if (t241 != 0)
        goto LAB97;

LAB98:    if (*((unsigned int *)t236) != 0)
        goto LAB99;

LAB100:    t243 = (t217 + 4);
    t244 = *((unsigned int *)t217);
    t245 = *((unsigned int *)t243);
    t246 = (t244 || t245);
    if (t246 > 0)
        goto LAB101;

LAB102:    t251 = *((unsigned int *)t217);
    t252 = (~(t251));
    t253 = *((unsigned int *)t243);
    t254 = (t252 || t253);
    if (t254 > 0)
        goto LAB103;

LAB104:    if (*((unsigned int *)t243) > 0)
        goto LAB105;

LAB106:    if (*((unsigned int *)t217) > 0)
        goto LAB107;

LAB108:    memcpy(t216, t255, 8);

LAB109:    goto LAB83;

LAB84:    xsi_vlog_unsigned_bit_combine(t173, 32, t203, 32, t216, 32);
    goto LAB88;

LAB86:    memcpy(t173, t203, 8);
    goto LAB88;

LAB89:    *((unsigned int *)t203) = 1;
    goto LAB92;

LAB95:    t235 = (t220 + 4);
    *((unsigned int *)t220) = 1;
    *((unsigned int *)t235) = 1;
    goto LAB96;

LAB97:    *((unsigned int *)t217) = 1;
    goto LAB100;

LAB99:    t242 = (t217 + 4);
    *((unsigned int *)t217) = 1;
    *((unsigned int *)t242) = 1;
    goto LAB100;

LAB101:    t247 = (t0 + 1368U);
    t248 = *((char **)t247);
    t247 = (t0 + 1528U);
    t249 = *((char **)t247);
    memset(t250, 0, 8);
    xsi_vlog_unsigned_lshift(t250, 32, t248, 16, t249, 16);
    goto LAB102;

LAB103:    t247 = (t0 + 1208U);
    t257 = *((char **)t247);
    t247 = ((char*)((ng8)));
    memset(t258, 0, 8);
    t259 = (t257 + 4);
    t260 = (t247 + 4);
    t261 = *((unsigned int *)t257);
    t262 = *((unsigned int *)t247);
    t263 = (t261 ^ t262);
    t264 = *((unsigned int *)t259);
    t265 = *((unsigned int *)t260);
    t266 = (t264 ^ t265);
    t267 = (t263 | t266);
    t268 = *((unsigned int *)t259);
    t269 = *((unsigned int *)t260);
    t270 = (t268 | t269);
    t271 = (~(t270));
    t272 = (t267 & t271);
    if (t272 != 0)
        goto LAB113;

LAB110:    if (t270 != 0)
        goto LAB112;

LAB111:    *((unsigned int *)t258) = 1;

LAB113:    memset(t256, 0, 8);
    t274 = (t258 + 4);
    t275 = *((unsigned int *)t274);
    t276 = (~(t275));
    t277 = *((unsigned int *)t258);
    t278 = (t277 & t276);
    t279 = (t278 & 1U);
    if (t279 != 0)
        goto LAB114;

LAB115:    if (*((unsigned int *)t274) != 0)
        goto LAB116;

LAB117:    t281 = (t256 + 4);
    t282 = *((unsigned int *)t256);
    t283 = *((unsigned int *)t281);
    t284 = (t282 || t283);
    if (t284 > 0)
        goto LAB118;

LAB119:    t289 = *((unsigned int *)t256);
    t290 = (~(t289));
    t291 = *((unsigned int *)t281);
    t292 = (t290 || t291);
    if (t292 > 0)
        goto LAB120;

LAB121:    if (*((unsigned int *)t281) > 0)
        goto LAB122;

LAB123:    if (*((unsigned int *)t256) > 0)
        goto LAB124;

LAB125:    memcpy(t255, t293, 8);

LAB126:    goto LAB104;

LAB105:    xsi_vlog_unsigned_bit_combine(t216, 32, t250, 32, t255, 32);
    goto LAB109;

LAB107:    memcpy(t216, t250, 8);
    goto LAB109;

LAB112:    t273 = (t258 + 4);
    *((unsigned int *)t258) = 1;
    *((unsigned int *)t273) = 1;
    goto LAB113;

LAB114:    *((unsigned int *)t256) = 1;
    goto LAB117;

LAB116:    t280 = (t256 + 4);
    *((unsigned int *)t256) = 1;
    *((unsigned int *)t280) = 1;
    goto LAB117;

LAB118:    t285 = (t0 + 1368U);
    t286 = *((char **)t285);
    t285 = (t0 + 1528U);
    t287 = *((char **)t285);
    memset(t288, 0, 8);
    xsi_vlog_unsigned_rshift(t288, 32, t286, 16, t287, 16);
    goto LAB119;

LAB120:    t285 = (t0 + 1208U);
    t295 = *((char **)t285);
    t285 = ((char*)((ng9)));
    memset(t296, 0, 8);
    t297 = (t295 + 4);
    t298 = (t285 + 4);
    t299 = *((unsigned int *)t295);
    t300 = *((unsigned int *)t285);
    t301 = (t299 ^ t300);
    t302 = *((unsigned int *)t297);
    t303 = *((unsigned int *)t298);
    t304 = (t302 ^ t303);
    t305 = (t301 | t304);
    t306 = *((unsigned int *)t297);
    t307 = *((unsigned int *)t298);
    t308 = (t306 | t307);
    t309 = (~(t308));
    t310 = (t305 & t309);
    if (t310 != 0)
        goto LAB130;

LAB127:    if (t308 != 0)
        goto LAB129;

LAB128:    *((unsigned int *)t296) = 1;

LAB130:    memset(t294, 0, 8);
    t312 = (t296 + 4);
    t313 = *((unsigned int *)t312);
    t314 = (~(t313));
    t315 = *((unsigned int *)t296);
    t316 = (t315 & t314);
    t317 = (t316 & 1U);
    if (t317 != 0)
        goto LAB131;

LAB132:    if (*((unsigned int *)t312) != 0)
        goto LAB133;

LAB134:    t319 = (t294 + 4);
    t320 = *((unsigned int *)t294);
    t321 = *((unsigned int *)t319);
    t322 = (t320 || t321);
    if (t322 > 0)
        goto LAB135;

LAB136:    t357 = *((unsigned int *)t294);
    t358 = (~(t357));
    t359 = *((unsigned int *)t319);
    t360 = (t358 || t359);
    if (t360 > 0)
        goto LAB137;

LAB138:    if (*((unsigned int *)t319) > 0)
        goto LAB139;

LAB140:    if (*((unsigned int *)t294) > 0)
        goto LAB141;

LAB142:    memcpy(t293, t361, 8);

LAB143:    goto LAB121;

LAB122:    xsi_vlog_unsigned_bit_combine(t255, 32, t288, 32, t293, 32);
    goto LAB126;

LAB124:    memcpy(t255, t288, 8);
    goto LAB126;

LAB129:    t311 = (t296 + 4);
    *((unsigned int *)t296) = 1;
    *((unsigned int *)t311) = 1;
    goto LAB130;

LAB131:    *((unsigned int *)t294) = 1;
    goto LAB134;

LAB133:    t318 = (t294 + 4);
    *((unsigned int *)t294) = 1;
    *((unsigned int *)t318) = 1;
    goto LAB134;

LAB135:    t323 = (t0 + 1368U);
    t324 = *((char **)t323);
    t323 = (t0 + 1528U);
    t325 = *((char **)t323);
    t327 = *((unsigned int *)t324);
    t328 = *((unsigned int *)t325);
    t329 = (t327 & t328);
    *((unsigned int *)t326) = t329;
    t323 = (t324 + 4);
    t330 = (t325 + 4);
    t331 = (t326 + 4);
    t332 = *((unsigned int *)t323);
    t333 = *((unsigned int *)t330);
    t334 = (t332 | t333);
    *((unsigned int *)t331) = t334;
    t335 = *((unsigned int *)t331);
    t336 = (t335 != 0);
    if (t336 == 1)
        goto LAB144;

LAB145:
LAB146:    goto LAB136;

LAB137:    t363 = (t0 + 1208U);
    t364 = *((char **)t363);
    t363 = ((char*)((ng10)));
    memset(t365, 0, 8);
    t366 = (t364 + 4);
    t367 = (t363 + 4);
    t368 = *((unsigned int *)t364);
    t369 = *((unsigned int *)t363);
    t370 = (t368 ^ t369);
    t371 = *((unsigned int *)t366);
    t372 = *((unsigned int *)t367);
    t373 = (t371 ^ t372);
    t374 = (t370 | t373);
    t375 = *((unsigned int *)t366);
    t376 = *((unsigned int *)t367);
    t377 = (t375 | t376);
    t378 = (~(t377));
    t379 = (t374 & t378);
    if (t379 != 0)
        goto LAB150;

LAB147:    if (t377 != 0)
        goto LAB149;

LAB148:    *((unsigned int *)t365) = 1;

LAB150:    memset(t362, 0, 8);
    t381 = (t365 + 4);
    t382 = *((unsigned int *)t381);
    t383 = (~(t382));
    t384 = *((unsigned int *)t365);
    t385 = (t384 & t383);
    t386 = (t385 & 1U);
    if (t386 != 0)
        goto LAB151;

LAB152:    if (*((unsigned int *)t381) != 0)
        goto LAB153;

LAB154:    t388 = (t362 + 4);
    t389 = *((unsigned int *)t362);
    t390 = *((unsigned int *)t388);
    t391 = (t389 || t390);
    if (t391 > 0)
        goto LAB155;

LAB156:    t422 = *((unsigned int *)t362);
    t423 = (~(t422));
    t424 = *((unsigned int *)t388);
    t425 = (t423 || t424);
    if (t425 > 0)
        goto LAB157;

LAB158:    if (*((unsigned int *)t388) > 0)
        goto LAB159;

LAB160:    if (*((unsigned int *)t362) > 0)
        goto LAB161;

LAB162:    memcpy(t361, t426, 8);

LAB163:    goto LAB138;

LAB139:    xsi_vlog_unsigned_bit_combine(t293, 32, t326, 32, t361, 32);
    goto LAB143;

LAB141:    memcpy(t293, t326, 8);
    goto LAB143;

LAB144:    t337 = *((unsigned int *)t326);
    t338 = *((unsigned int *)t331);
    *((unsigned int *)t326) = (t337 | t338);
    t339 = (t324 + 4);
    t340 = (t325 + 4);
    t341 = *((unsigned int *)t324);
    t342 = (~(t341));
    t343 = *((unsigned int *)t339);
    t344 = (~(t343));
    t345 = *((unsigned int *)t325);
    t346 = (~(t345));
    t347 = *((unsigned int *)t340);
    t348 = (~(t347));
    t349 = (t342 & t344);
    t350 = (t346 & t348);
    t351 = (~(t349));
    t352 = (~(t350));
    t353 = *((unsigned int *)t331);
    *((unsigned int *)t331) = (t353 & t351);
    t354 = *((unsigned int *)t331);
    *((unsigned int *)t331) = (t354 & t352);
    t355 = *((unsigned int *)t326);
    *((unsigned int *)t326) = (t355 & t351);
    t356 = *((unsigned int *)t326);
    *((unsigned int *)t326) = (t356 & t352);
    goto LAB146;

LAB149:    t380 = (t365 + 4);
    *((unsigned int *)t365) = 1;
    *((unsigned int *)t380) = 1;
    goto LAB150;

LAB151:    *((unsigned int *)t362) = 1;
    goto LAB154;

LAB153:    t387 = (t362 + 4);
    *((unsigned int *)t362) = 1;
    *((unsigned int *)t387) = 1;
    goto LAB154;

LAB155:    t392 = (t0 + 1368U);
    t393 = *((char **)t392);
    t392 = (t0 + 1528U);
    t394 = *((char **)t392);
    t396 = *((unsigned int *)t393);
    t397 = *((unsigned int *)t394);
    t398 = (t396 | t397);
    *((unsigned int *)t395) = t398;
    t392 = (t393 + 4);
    t399 = (t394 + 4);
    t400 = (t395 + 4);
    t401 = *((unsigned int *)t392);
    t402 = *((unsigned int *)t399);
    t403 = (t401 | t402);
    *((unsigned int *)t400) = t403;
    t404 = *((unsigned int *)t400);
    t405 = (t404 != 0);
    if (t405 == 1)
        goto LAB164;

LAB165:
LAB166:    goto LAB156;

LAB157:    t428 = (t0 + 1208U);
    t429 = *((char **)t428);
    t428 = ((char*)((ng11)));
    memset(t430, 0, 8);
    t431 = (t429 + 4);
    t432 = (t428 + 4);
    t433 = *((unsigned int *)t429);
    t434 = *((unsigned int *)t428);
    t435 = (t433 ^ t434);
    t436 = *((unsigned int *)t431);
    t437 = *((unsigned int *)t432);
    t438 = (t436 ^ t437);
    t439 = (t435 | t438);
    t440 = *((unsigned int *)t431);
    t441 = *((unsigned int *)t432);
    t442 = (t440 | t441);
    t443 = (~(t442));
    t444 = (t439 & t443);
    if (t444 != 0)
        goto LAB170;

LAB167:    if (t442 != 0)
        goto LAB169;

LAB168:    *((unsigned int *)t430) = 1;

LAB170:    t446 = (t0 + 1368U);
    t447 = *((char **)t446);
    t446 = (t0 + 1528U);
    t448 = *((char **)t446);
    memset(t449, 0, 8);
    t446 = (t447 + 4);
    if (*((unsigned int *)t446) != 0)
        goto LAB172;

LAB171:    t450 = (t448 + 4);
    if (*((unsigned int *)t450) != 0)
        goto LAB172;

LAB175:    if (*((unsigned int *)t447) < *((unsigned int *)t448))
        goto LAB173;

LAB174:    t453 = *((unsigned int *)t430);
    t454 = *((unsigned int *)t449);
    t455 = (t453 & t454);
    *((unsigned int *)t452) = t455;
    t456 = (t430 + 4);
    t457 = (t449 + 4);
    t458 = (t452 + 4);
    t459 = *((unsigned int *)t456);
    t460 = *((unsigned int *)t457);
    t461 = (t459 | t460);
    *((unsigned int *)t458) = t461;
    t462 = *((unsigned int *)t458);
    t463 = (t462 != 0);
    if (t463 == 1)
        goto LAB176;

LAB177:
LAB178:    memset(t427, 0, 8);
    t484 = (t452 + 4);
    t485 = *((unsigned int *)t484);
    t486 = (~(t485));
    t487 = *((unsigned int *)t452);
    t488 = (t487 & t486);
    t489 = (t488 & 1U);
    if (t489 != 0)
        goto LAB179;

LAB180:    if (*((unsigned int *)t484) != 0)
        goto LAB181;

LAB182:    t491 = (t427 + 4);
    t492 = *((unsigned int *)t427);
    t493 = *((unsigned int *)t491);
    t494 = (t492 || t493);
    if (t494 > 0)
        goto LAB183;

LAB184:    t496 = *((unsigned int *)t427);
    t497 = (~(t496));
    t498 = *((unsigned int *)t491);
    t499 = (t497 || t498);
    if (t499 > 0)
        goto LAB185;

LAB186:    if (*((unsigned int *)t491) > 0)
        goto LAB187;

LAB188:    if (*((unsigned int *)t427) > 0)
        goto LAB189;

LAB190:    memcpy(t426, t500, 8);

LAB191:    goto LAB158;

LAB159:    xsi_vlog_unsigned_bit_combine(t361, 32, t395, 32, t426, 32);
    goto LAB163;

LAB161:    memcpy(t361, t395, 8);
    goto LAB163;

LAB164:    t406 = *((unsigned int *)t395);
    t407 = *((unsigned int *)t400);
    *((unsigned int *)t395) = (t406 | t407);
    t408 = (t393 + 4);
    t409 = (t394 + 4);
    t410 = *((unsigned int *)t408);
    t411 = (~(t410));
    t412 = *((unsigned int *)t393);
    t413 = (t412 & t411);
    t414 = *((unsigned int *)t409);
    t415 = (~(t414));
    t416 = *((unsigned int *)t394);
    t417 = (t416 & t415);
    t418 = (~(t413));
    t419 = (~(t417));
    t420 = *((unsigned int *)t400);
    *((unsigned int *)t400) = (t420 & t418);
    t421 = *((unsigned int *)t400);
    *((unsigned int *)t400) = (t421 & t419);
    goto LAB166;

LAB169:    t445 = (t430 + 4);
    *((unsigned int *)t430) = 1;
    *((unsigned int *)t445) = 1;
    goto LAB170;

LAB172:    t451 = (t449 + 4);
    *((unsigned int *)t449) = 1;
    *((unsigned int *)t451) = 1;
    goto LAB174;

LAB173:    *((unsigned int *)t449) = 1;
    goto LAB174;

LAB176:    t464 = *((unsigned int *)t452);
    t465 = *((unsigned int *)t458);
    *((unsigned int *)t452) = (t464 | t465);
    t466 = (t430 + 4);
    t467 = (t449 + 4);
    t468 = *((unsigned int *)t430);
    t469 = (~(t468));
    t470 = *((unsigned int *)t466);
    t471 = (~(t470));
    t472 = *((unsigned int *)t449);
    t473 = (~(t472));
    t474 = *((unsigned int *)t467);
    t475 = (~(t474));
    t476 = (t469 & t471);
    t477 = (t473 & t475);
    t478 = (~(t476));
    t479 = (~(t477));
    t480 = *((unsigned int *)t458);
    *((unsigned int *)t458) = (t480 & t478);
    t481 = *((unsigned int *)t458);
    *((unsigned int *)t458) = (t481 & t479);
    t482 = *((unsigned int *)t452);
    *((unsigned int *)t452) = (t482 & t478);
    t483 = *((unsigned int *)t452);
    *((unsigned int *)t452) = (t483 & t479);
    goto LAB178;

LAB179:    *((unsigned int *)t427) = 1;
    goto LAB182;

LAB181:    t490 = (t427 + 4);
    *((unsigned int *)t427) = 1;
    *((unsigned int *)t490) = 1;
    goto LAB182;

LAB183:    t495 = ((char*)((ng1)));
    goto LAB184;

LAB185:    t500 = ((char*)((ng12)));
    goto LAB186;

LAB187:    xsi_vlog_unsigned_bit_combine(t426, 32, t495, 32, t500, 32);
    goto LAB191;

LAB189:    memcpy(t426, t495, 8);
    goto LAB191;

}

static void Cont_63_3(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;

LAB0:    t1 = (t0 + 4872U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1848U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 65535U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    t17 = *((unsigned int *)t4);
    t18 = (~(t17));
    t19 = *((unsigned int *)t12);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t21, 8);

LAB16:    t22 = (t0 + 5384);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memset(t26, 0, 8);
    t27 = 1U;
    t28 = t27;
    t29 = (t3 + 4);
    t30 = *((unsigned int *)t3);
    t27 = (t27 & t30);
    t31 = *((unsigned int *)t29);
    t28 = (t28 & t31);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t33 | t27);
    t34 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t34 | t28);
    xsi_driver_vfirst_trans(t22, 0, 0);
    t35 = (t0 + 5240);
    *((int *)t35) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = ((char*)((ng12)));
    goto LAB9;

LAB10:    t21 = ((char*)((ng1)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t16, 32, t21, 32);
    goto LAB16;

LAB14:    memcpy(t3, t16, 8);
    goto LAB16;

}


extern void work_m_00000000004166854358_0886308060_init()
{
	static char *pe[] = {(void *)Always_39_0,(void *)Always_45_1,(void *)Cont_52_2,(void *)Cont_63_3};
	xsi_register_didat("work_m_00000000004166854358_0886308060", "isim/mips_test_3_isim_beh.exe.sim/work/m_00000000004166854358_0886308060.didat");
	xsi_register_executes(pe);
}
