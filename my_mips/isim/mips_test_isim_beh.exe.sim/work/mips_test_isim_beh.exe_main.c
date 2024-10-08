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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000003568203580_0932324526_init();
    work_m_00000000003573227295_3383896982_init();
    work_m_00000000004072216637_0833183191_init();
    work_m_00000000003667508224_2346201245_init();
    work_m_00000000000508077057_0610666722_init();
    work_m_00000000000882150760_2003765298_init();
    work_m_00000000002569282428_0511376734_init();
    work_m_00000000000634509260_0345418465_init();
    work_m_00000000003941520158_0278921292_init();
    work_m_00000000002368703509_2925281636_init();
    work_m_00000000002999330882_0656657022_init();
    work_m_00000000000190798378_3263087327_init();
    work_m_00000000000611491436_0103510313_init();
    work_m_00000000002714985769_1947578403_init();
    work_m_00000000001568348165_3825569782_init();
    work_m_00000000004123486848_3901337038_init();
    work_m_00000000001239105124_1484779129_init();
    work_m_00000000001456170214_2913649538_init();
    work_m_00000000004037648508_0527389236_init();
    work_m_00000000004166854358_0886308060_init();
    work_m_00000000003263743429_3754155988_init();
    work_m_00000000004049075151_4024466370_init();
    work_m_00000000000240047981_1538524907_init();
    work_m_00000000000353957390_2520395732_init();
    work_m_00000000000054864772_3645532917_init();
    work_m_00000000000129468708_3515808994_init();
    work_m_00000000003111599395_3968679286_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000003111599395_3968679286");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
