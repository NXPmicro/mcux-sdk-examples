/*
 * Copyright  2018 NXP
 * All rights reserved.
 *
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
product: Pins v4.1
processor: LPC824
package_id: LPC824M201JHI33
mcu_data: ksdk2_0
processor_version: 0.0.1
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

#include "fsl_common.h"
#include "fsl_iocon.h"
#include "fsl_swm.h"
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
  - {pin_num: '22', peripheral: USART0, signal: TXD, pin_signal: PIO0_7, mode: pullUp, invert: disabled, hysteresis: enabled, opendrain: disabled, smode: bypass,
    clkdiv: div0}
  - {pin_num: '31', peripheral: USART0, signal: RXD, pin_signal: PIO0_18, mode: pullUp, invert: disabled, hysteresis: enabled, opendrain: disabled, smode: bypass,
    clkdiv: div0}
  - {pin_num: '10', peripheral: GPIO, signal: 'PIO0, 16', pin_signal: PIO0_16, mode: pullUp, invert: disabled, hysteresis: enabled, opendrain: disabled, smode: bypass,
    clkdiv: div0}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
/* Function assigned for the Cortex-M0P */
void BOARD_InitPins(void)
{
    /* Enables clock for IOCON block.: 0x01u */
    CLOCK_EnableClock(kCLOCK_Iocon);
    /* Enables clock for switch matrix.: 0x01u */
    CLOCK_EnableClock(kCLOCK_Swm);

    const uint32_t pio15_config = (/* Selects pull-up function */
                                   IOCON_PIO_MODE_PULLUP |
                                   /* Enable hysteresis */
                                   IOCON_PIO_HYS_EN |
                                   /* Input not invert */
                                   IOCON_PIO_INV_DI |
                                   /* Disables Open-drain function */
                                   IOCON_PIO_OD_DI |
                                   /* Bypass input filter */
                                   IOCON_PIO_SMODE_BYPASS |
                                   /* IOCONCLKDIV0 */
                                   IOCON_PIO_CLKDIV0);
    /* PORT1 PIN5 (coords: ) is configured as  */
    IOCON_PinMuxSet(IOCON, 15, pio15_config);

    const uint32_t pio30_config = (/* Selects pull-up function */
                                   IOCON_PIO_MODE_PULLUP |
                                   /* Enable hysteresis */
                                   IOCON_PIO_HYS_EN |
                                   /* Input not invert */
                                   IOCON_PIO_INV_DI |
                                   /* Disables Open-drain function */
                                   IOCON_PIO_OD_DI |
                                   /* Bypass input filter */
                                   IOCON_PIO_SMODE_BYPASS |
                                   /* IOCONCLKDIV0 */
                                   IOCON_PIO_CLKDIV0);
    /* PORT3 PIN0 (coords: ) is configured as  */
    IOCON_PinMuxSet(IOCON, 30, pio30_config);

    const uint32_t pio9_config = (/* Selects pull-up function */
                                  IOCON_PIO_MODE_PULLUP |
                                  /* Enable hysteresis */
                                  IOCON_PIO_HYS_EN |
                                  /* Input not invert */
                                  IOCON_PIO_INV_DI |
                                  /* Disables Open-drain function */
                                  IOCON_PIO_OD_DI |
                                  /* Bypass input filter */
                                  IOCON_PIO_SMODE_BYPASS |
                                  /* IOCONCLKDIV0 */
                                  IOCON_PIO_CLKDIV0);
    /* PORT9 PIN (coords: ) is configured as  */
    IOCON_PinMuxSet(IOCON, 9, pio9_config);

    /* USART0_TXD connect to P0_7 */
    SWM_SetMovablePinSelect(SWM0, kSWM_USART0_TXD, kSWM_PortPin_P0_7);

    /* USART0_RXD connect to P0_18 */
    SWM_SetMovablePinSelect(SWM0, kSWM_USART0_RXD, kSWM_PortPin_P0_18);

    /* Disable clock for switch matrix. */
    CLOCK_DisableClock(kCLOCK_Swm);
}
/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
