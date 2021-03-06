/*

 * Copyright 2017 ,2021 NXP

 * All rights reserved.

 *

 * SPDX-License-Identifier: BSD-3-Clause

 */

/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Pins v9.0
processor: MKE02Z64xxx4
package_id: MKE02Z64VQH4
mcu_data: ksdk2_0
processor_version: 9.0.0
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

#include "fsl_common.h"
#include "fsl_port.h"
#include "pin_mux.h"

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitBootPins
 * Description   : Calls initialization functions.
 *
 * END ****************************************************************************************************************/
void BOARD_InitBootPins(void)
{
    BOARD_InitPins();
}

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitPins:
- options: {callFromInitBoot: 'true', coreID: core0, enableClock: 'true'}
- pin_list:
  - {pin_num: '48', peripheral: UART0, signal: RX, pin_signal: PTA2/KBI0_P2/UART0_RX/I2C0_SDA}
  - {pin_num: '47', peripheral: UART0, signal: TX, pin_signal: PTA3/KBI0_P3/UART0_TX/I2C0_SCL}
  - {pin_num: '50', peripheral: KBI0, signal: 'P, 0', pin_signal: PTA0/KBI0_P0/FTM0_CH0/ACMP0_IN0/ADC0_SE0, pullup_enable: enable, filter_selection: fltdiv1}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitPins(void)
{
    /* Filter Selection for Input from KBI0: 0x01u */
    PORT_SetFilterSelect(PORT, kPORT_FilterKBI0, kPORT_FILTERDIV1); 
    /* Pull Enable for Port A Bit 0: 0x01u */
    PORT_SetPinPullUpEnable(PORT, kPORT_PTA, 0U, true);
    /* pin 48,47 is configured as UART0_RX, UART0_TX */
    PORT_SetPinSelect(kPORT_UART0, kPORT_UART0_RXPTA2_TXPTA3);

    SIM->SOPT = ((SIM->SOPT &
                  /* Mask bits to zero which are setting */
                  (~(SIM_SOPT_RXDFE_MASK)))

                 /* UART0_RX Filter Select: UART0_RX input signal is connected to UART0 module directly. */
                 | SIM_SOPT_RXDFE(SOPT_RXDFE_0b0));
}
/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
