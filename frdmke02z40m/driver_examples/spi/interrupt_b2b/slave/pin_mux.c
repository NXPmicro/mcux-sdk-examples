/*
 * Copyright 2017 NXP
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
product: Pins v4.0
processor: MKE02Z64xxx4
package_id: MKE02Z64VQH4
mcu_data: ksdk2_0
processor_version: 0.0.9
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

#include "fsl_common.h"
#include "fsl_port.h"
#include "pin_mux.h"

/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitPins:
- options: {callFromInitBoot: 'true', coreID: core0, enableClock: 'true'}
- pin_list:
  - {pin_num: '52', peripheral: UART1, signal: RX, pin_signal: PTC6/UART1_RX}
  - {pin_num: '51', peripheral: UART1, signal: TX, pin_signal: PTC7/UART1_TX}
  - {pin_num: '54', peripheral: SPI0, signal: MISO, pin_signal: PTE2/SPI0_MISO}
  - {pin_num: '59', peripheral: SPI0, signal: MOSI, pin_signal: PTE1/SPI0_MOSI}
  - {pin_num: '53', peripheral: SPI0, signal: PCS, pin_signal: PTE3/SPI0_PCS0}
  - {pin_num: '60', peripheral: SPI0, signal: SCK, pin_signal: PTE0/SPI0_SCK/FTM1_CLK}
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
    /* pin 60,59,54,53 is configured as SPI0_SCK, SPI0_MOSI, SPI0_MISO, SPI0_PCS0 */
    PORT_SetPinSelect(kPORT_SPI0, kPORT_SPI0_SCKPTE0_MOSIPTE1_MISOPTE2_PCSPTE3);
}
/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
