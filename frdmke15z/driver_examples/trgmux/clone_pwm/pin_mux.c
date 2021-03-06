/*
 * Copyright (c) 2016, Freescale Semiconductor, Inc.
 * Copyright 2016-2019 ,2021 NXP
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
processor: MKE15Z256xxx7
package_id: MKE15Z256VLL7
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
  - {pin_num: '81', peripheral: LPUART1, signal: RX, pin_signal: ADC1_SE4/TSI0_CH15/PTC6/LPUART1_RX}
  - {pin_num: '80', peripheral: LPUART1, signal: TX, pin_signal: ADC1_SE5/TSI0_CH16/PTC7/LPUART1_TX}
  - {pin_num: '79', peripheral: TRGMUX0, signal: 'OUT, 7', pin_signal: ADC0_SE0/ACMP0_IN0/TSI0_CH17/PTA0/FTM2_CH1/LPI2C0_SCLS/FXIO_D2/FTM2_QD_PHA/LPUART0_CTS/TRGMUX_OUT3}
  - {pin_num: '78', peripheral: TRGMUX0, signal: 'OUT, 4', pin_signal: ADC0_SE1/ACMP0_IN1/TSI0_CH18/PTA1/FTM1_CH1/LPI2C0_SDAS/FXIO_D3/FTM1_QD_PHA/LPUART0_RTS/TRGMUX_OUT0}
  - {pin_num: '4', peripheral: TRGMUX0, signal: 'OUT, 5', pin_signal: TSI0_CH4/PTD0/FTM0_CH2/LPSPI1_SCK/FTM2_CH0/FXIO_D0/TRGMUX_OUT1}
  - {pin_num: '3', peripheral: TRGMUX0, signal: 'OUT, 6', pin_signal: TSI0_CH5/PTD1/FTM0_CH3/LPSPI1_SIN/FTM2_CH1/FXIO_D1/TRGMUX_OUT2}
  - {pin_num: '6', peripheral: TRGMUX0, signal: 'OUT, 8', pin_signal: TSI0_CH2/PTE10/CLKOUT/FXIO_D4/TRGMUX_OUT4}
  - {pin_num: '5', peripheral: TRGMUX0, signal: 'OUT, 9', pin_signal: TSI0_CH3/PTE11/PWT_IN1/LPTMR0_ALT1/FXIO_D5/TRGMUX_OUT5}
  - {pin_num: '2', peripheral: TRGMUX0, signal: 'OUT, 10', pin_signal: PTE15/FXIO_D2/TRGMUX_OUT6}
  - {pin_num: '1', peripheral: TRGMUX0, signal: 'OUT, 11', pin_signal: PTE16/FXIO_D3/TRGMUX_OUT7}
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
    /* Clock Control: Clock enabled */
    CLOCK_EnableClock(kCLOCK_PortA);
    /* Clock Control: Clock enabled */
    CLOCK_EnableClock(kCLOCK_PortC);
    /* Clock Control: Clock enabled */
    CLOCK_EnableClock(kCLOCK_PortD);
    /* Clock Control: Clock enabled */
    CLOCK_EnableClock(kCLOCK_PortE);

    /* PORTA0 (pin 79) is configured as TRGMUX_OUT3 */
    PORT_SetPinMux(PORTA, 0U, kPORT_MuxAlt7);

    /* PORTA1 (pin 78) is configured as TRGMUX_OUT0 */
    PORT_SetPinMux(PORTA, 1U, kPORT_MuxAlt7);

    /* PORTC6 (pin 81) is configured as LPUART1_RX */
    PORT_SetPinMux(PORTC, 6U, kPORT_MuxAlt2);

    /* PORTC7 (pin 80) is configured as LPUART1_TX */
    PORT_SetPinMux(PORTC, 7U, kPORT_MuxAlt2);

    /* PORTD0 (pin 4) is configured as TRGMUX_OUT1 */
    PORT_SetPinMux(PORTD, 0U, kPORT_MuxAlt7);

    /* PORTD1 (pin 3) is configured as TRGMUX_OUT2 */
    PORT_SetPinMux(PORTD, 1U, kPORT_MuxAlt7);

    /* PORTE10 (pin 6) is configured as TRGMUX_OUT4 */
    PORT_SetPinMux(PORTE, 10U, kPORT_MuxAlt7);

    /* PORTE11 (pin 5) is configured as TRGMUX_OUT5 */
    PORT_SetPinMux(PORTE, 11U, kPORT_MuxAlt7);

    /* PORTE15 (pin 2) is configured as TRGMUX_OUT6 */
    PORT_SetPinMux(PORTE, 15U, kPORT_MuxAlt7);

    /* PORTE16 (pin 1) is configured as TRGMUX_OUT7 */
    PORT_SetPinMux(PORTE, 16U, kPORT_MuxAlt7);
}
/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
