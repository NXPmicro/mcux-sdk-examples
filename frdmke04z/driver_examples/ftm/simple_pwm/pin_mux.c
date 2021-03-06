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
processor: MKE04Z8xxx4
package_id: MKE04Z8VFK4
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
  - {pin_num: '16', peripheral: UART0, signal: RX, pin_signal: PTB0/KBI0_P4/UART0_RX/SPI0_PCS0/PWT_IN1/ADC0_SE4}
  - {pin_num: '15', peripheral: UART0, signal: TX, pin_signal: PTB1/KBI0_P5/UART0_TX/SPI0_MISO/TCLK2/ADC0_SE5}
  - {pin_num: '1', peripheral: FTM2, signal: 'CH, 3', pin_signal: PTC5/KBI1_P1/FTM2_CH3/BUSOUT}
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
    /* pin 16,15 is configured as UART0_RX, UART0_TX */
    PORT_SetPinSelect(kPORT_UART0, kPORT_UART0_RXPTB0_TXPTB1);
    /* pin 1 is configured as FTM2_CH3 */
    PORT_SetPinSelect(kPORT_FTM2CH3, kPORT_FTM2_CH3_PTC5);

    SIM->SOPT = ((SIM->SOPT &
                  /* Mask bits to zero which are setting */
                  (~(SIM_SOPT_CLKOE_MASK)))

                 /* Bus Clock Output Enable: Bus clock output is disabled on PTC5. */
                 | SIM_SOPT_CLKOE(SOPT_CLKOE_0b0));
}
/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
