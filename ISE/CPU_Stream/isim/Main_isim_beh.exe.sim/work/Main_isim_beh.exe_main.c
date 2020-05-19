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
    work_m_00000000002272342233_1733832700_init();
    work_m_00000000002788476953_1463177816_init();
    work_m_00000000001096182945_0317860448_init();
    work_m_00000000003257334440_3149663989_init();
    work_m_00000000003293837817_1938225339_init();
    work_m_00000000000629925333_1536036516_init();
    work_m_00000000003585505423_0254784918_init();
    work_m_00000000003354999967_2834421104_init();
    work_m_00000000001253333090_2632176132_init();
    work_m_00000000000200607584_0886308060_init();
    work_m_00000000000564321338_3606965220_init();
    work_m_00000000000639242692_2356217838_init();
    work_m_00000000004039044744_2431476469_init();
    work_m_00000000000268029898_2973510161_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000000268029898_2973510161");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
