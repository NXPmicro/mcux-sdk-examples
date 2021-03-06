/*
 * Copyright 2019 ,2021 NXP
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
processor: K32L3A60xxx
package_id: K32L3A60VPJ1A
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
- options: {callFromInitBoot: 'true', coreID: cm4, enableClock: 'true'}
- pin_list:
  - {pin_num: N2, peripheral: LPUART0, signal: RX, pin_signal: LPCMP0_IN0/PTC7/LLWU_P15/LPSPI0_PCS3/LPUART0_RX/LPI2C1_HREQ/TPM0_CH0/LPTMR1_ALT1}
  - {pin_num: P3, peripheral: LPUART0, signal: TX, pin_signal: LPCMP0_IN1/PTC8/LPSPI0_SCK/LPUART0_TX/LPI2C0_HREQ/TPM0_CH1}
  - {pin_num: B1, peripheral: TPM0, signal: 'CH, 0', pin_signal: PTB2/LLWU_P5/LPSPI0_PCS1/LPUART1_RX/I2S0_TX_D0/FB_AD11/TPM0_CH0}
  - {pin_num: G3, peripheral: TPM3, signal: 'CH, 0', pin_signal: PTB13/LPUART2_CTS/LPI2C1_SDA/LPI2C0_SDAS/FB_AD25/TPM3_CH0/FXIO0_D3}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
/* Function assigned for the Cortex-M4F */
void BOARD_InitPins(void)
{
    /* Clock Gate Control: Clock enabled. The current clock selection and divider options are locked. */
    CLOCK_EnableClock(kCLOCK_PortB);
    /* Clock Gate Control: Clock enabled. The current clock selection and divider options are locked. */
    CLOCK_EnableClock(kCLOCK_PortC);

    /* PORTB13 (pin G3) is configured as TPM3_CH0 */
    PORT_SetPinMux(PORTB, 13U, kPORT_MuxAlt6);

    /* PORTB2 (pin B1) is configured as TPM0_CH0 */
    PORT_SetPinMux(PORTB, 2U, kPORT_MuxAlt6);

    /* PORTC7 (pin N2) is configured as LPUART0_RX */
    PORT_SetPinMux(PORTC, 7U, kPORT_MuxAlt3);

    /* PORTC8 (pin P3) is configured as LPUART0_TX */
    PORT_SetPinMux(PORTC, 8U, kPORT_MuxAlt3);
}
/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
