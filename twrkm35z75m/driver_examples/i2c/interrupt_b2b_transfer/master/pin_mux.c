/*
 * Copyright 2019 NXP
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
product: Pins v7.0
processor: MKM35Z512xxx7
package_id: MKM35Z512VLQ7
mcu_data: ksdk2_0
processor_version: 0.0.1
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
  - {pin_num: '6', peripheral: UART2, signal: RX, pin_signal: LCD_P46/PTI6/UART2_RX}
  - {pin_num: '7', peripheral: UART2, signal: TX, pin_signal: LCD_P47/PTI7/UART2_TX}
  - {pin_num: '106', peripheral: I2C0, signal: SDA, pin_signal: LCD_P53/PTL0/I2C0_SDA, slew_rate: fast, open_drain: enable, pull_select: up, pull_enable: enable}
  - {pin_num: '105', peripheral: I2C0, signal: SCL, pin_signal: LCD_P52/PTK7/I2C0_SCL/XBAR_OUT9, slew_rate: fast, open_drain: enable, pull_select: up, pull_enable: enable}
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
    /* PCTLI Clock Gate Control: Clock enabled */
    CLOCK_EnableClock(kCLOCK_PortI);
    /* PCTLK Clock Gate Control: Clock enabled */
    CLOCK_EnableClock(kCLOCK_PortK);
    /* PCTLL Clock Gate Control: Clock enabled */
    CLOCK_EnableClock(kCLOCK_PortL);

    /* PORTI6 (pin 6) is configured as UART2_RX */
    PORT_SetPinMux(PORTI, 6U, kPORT_MuxAlt2);

    /* PORTI7 (pin 7) is configured as UART2_TX */
    PORT_SetPinMux(PORTI, 7U, kPORT_MuxAlt2);

    const port_pin_config_t portk7_pin105_config = {/* Internal pull-up resistor is enabled */
                                                    kPORT_PullUp,
                                                    /* Fast slew rate is configured */
                                                    kPORT_FastSlewRate,
                                                    /* Open drain is enabled */
                                                    kPORT_OpenDrainEnable,
                                                    /* Pin is configured as I2C0_SCL */
                                                    kPORT_MuxAlt2,
                                                    /* Pin Control Register fields [15:0] are not locked */
                                                    kPORT_UnlockRegister};
    /* PORTK7 (pin 105) is configured as I2C0_SCL */
    PORT_SetPinConfig(PORTK, 7U, &portk7_pin105_config);

    const port_pin_config_t portl0_pin106_config = {/* Internal pull-up resistor is enabled */
                                                    kPORT_PullUp,
                                                    /* Fast slew rate is configured */
                                                    kPORT_FastSlewRate,
                                                    /* Open drain is enabled */
                                                    kPORT_OpenDrainEnable,
                                                    /* Pin is configured as I2C0_SDA */
                                                    kPORT_MuxAlt2,
                                                    /* Pin Control Register fields [15:0] are not locked */
                                                    kPORT_UnlockRegister};
    /* PORTL0 (pin 106) is configured as I2C0_SDA */
    PORT_SetPinConfig(PORTL, 0U, &portl0_pin106_config);

    SIM->MISC_CTL = ((SIM->MISC_CTL &
                      /* Mask bits to zero which are setting */
                      (~(SIM_MISC_CTL_UART2IRSEL_MASK)))

                     /* UART2 IrDA Select: Pad RX input PTI[6] or PTE[6] selected for RX input of UART2 and UART2
                      * TX signal is not used for modulation. */
                     | SIM_MISC_CTL_UART2IRSEL(MISC_CTL_UART2IRSEL_0b0));
}
/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
