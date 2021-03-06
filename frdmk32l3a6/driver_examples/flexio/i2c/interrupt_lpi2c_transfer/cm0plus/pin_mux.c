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
  - {pin_num: N17, peripheral: FLEXIO0, signal: 'D, 3', pin_signal: PTE13/I2S0_TX_BCLK/LPI2C3_SCLS/TPM3_CH0/FXIO0_D3, slew_rate: fast, open_drain: enable, pull_select: up,
    pull_enable: enable}
  - {pin_num: P3, peripheral: LPUART0, signal: TX, pin_signal: LPCMP0_IN1/PTC8/LPSPI0_SCK/LPUART0_TX/LPI2C0_HREQ/TPM0_CH1}
  - {pin_num: N2, peripheral: LPUART0, signal: RX, pin_signal: LPCMP0_IN0/PTC7/LLWU_P15/LPSPI0_PCS3/LPUART0_RX/LPI2C1_HREQ/TPM0_CH0/LPTMR1_ALT1}
  - {pin_num: L16, peripheral: FLEXIO0, signal: 'D, 4', pin_signal: PTE14/I2S0_TX_FS/LPI2C3_HREQ/TPM3_CH1/FXIO0_D4, slew_rate: fast, open_drain: enable, pull_select: up,
    pull_enable: enable}
  - {pin_num: R2, peripheral: LPI2C0, signal: SCL, pin_signal: LPADC0_SE5/PTC10/LPSPI0_PCS2/LPUART0_RTS/LPI2C0_SCL/TPM0_CH3, slew_rate: fast, open_drain: enable,
    pull_select: up, pull_enable: enable}
  - {pin_num: R1, peripheral: LPI2C0, signal: SDA, pin_signal: LPADC0_SE4/LPCMP0_IN2/PTC9/LLWU_P16/LPSPI0_SOUT/LPUART0_CTS/LPI2C0_SDA/TPM0_CH2/LPTMR0_ALT2, slew_rate: fast,
    open_drain: enable, pull_select: up, pull_enable: enable}
  - {pin_num: H5, peripheral: LPI2C3, signal: SDA, pin_signal: PTB16/LLWU_P10/LPUART3_CTS/LPI2C3_SDA/FB_CS4_b/FB_TSIZ0/FB_BE31_24_b/FXIO0_D6, slew_rate: fast, open_drain: enable,
    pull_select: up, pull_enable: enable}
  - {pin_num: G1, peripheral: LPI2C3, signal: SCL, pin_signal: PTB15/LPI2C1_HREQ/LPI2C3_SCL/FB_CS5_b/FB_TSIZ1/FB_BE23_16_b/TPM0_CLKIN/FXIO0_D5, slew_rate: fast, open_drain: enable,
    pull_select: up, pull_enable: enable}
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
    /* Clock Gate Control: Clock enabled. The current clock selection and divider options are locked. */
    CLOCK_EnableClock(kCLOCK_PortE);

    const port_pin_config_t portb15_pinG1_config = {/* Internal pull-up resistor is enabled */
                                                    kPORT_PullUp,
                                                    /* Fast slew rate is configured */
                                                    kPORT_FastSlewRate,
                                                    /* Passive filter is disabled */
                                                    kPORT_PassiveFilterDisable,
                                                    /* Open drain is enabled */
                                                    kPORT_OpenDrainEnable,
                                                    /* Low drive strength is configured */
                                                    kPORT_LowDriveStrength,
                                                    /* Pin is configured as LPI2C3_SCL */
                                                    kPORT_MuxAlt4,
                                                    /* Pin Control Register fields [15:0] are not locked */
                                                    kPORT_UnlockRegister};
    /* PORTB15 (pin G1) is configured as LPI2C3_SCL */
    PORT_SetPinConfig(PORTB, 15U, &portb15_pinG1_config);

    const port_pin_config_t portb16_pinH5_config = {/* Internal pull-up resistor is enabled */
                                                    kPORT_PullUp,
                                                    /* Fast slew rate is configured */
                                                    kPORT_FastSlewRate,
                                                    /* Passive filter is disabled */
                                                    kPORT_PassiveFilterDisable,
                                                    /* Open drain is enabled */
                                                    kPORT_OpenDrainEnable,
                                                    /* Low drive strength is configured */
                                                    kPORT_LowDriveStrength,
                                                    /* Pin is configured as LPI2C3_SDA */
                                                    kPORT_MuxAlt4,
                                                    /* Pin Control Register fields [15:0] are not locked */
                                                    kPORT_UnlockRegister};
    /* PORTB16 (pin H5) is configured as LPI2C3_SDA */
    PORT_SetPinConfig(PORTB, 16U, &portb16_pinH5_config);

    /* PORTC10 (pin R2) is configured as LPI2C0_SCL */
    PORT_SetPinMux(PORTC, 10U, kPORT_MuxAlt4);

    PORTC->PCR[10] =
        ((PORTC->PCR[10] &
          /* Mask bits to zero which are setting */
          (~(PORT_PCR_PS_MASK | PORT_PCR_PE_MASK | PORT_PCR_SRE_MASK | PORT_PCR_ODE_MASK | PORT_PCR_ISF_MASK)))

         /* Pull Select: Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE
          * field is set. */
         | (uint32_t)(kPORT_PullUp)

         /* Slew Rate Enable: Fast slew rate is configured on the corresponding pin, if the pin is configured as
          * a digital output. */
         | PORT_PCR_SRE(kPORT_FastSlewRate)

         /* Open Drain Enable: Open drain output is enabled on the corresponding pin, if the pin is configured as
          * a digital output. */
         | PORT_PCR_ODE(kPORT_OpenDrainEnable));

    /* PORTC7 (pin N2) is configured as LPUART0_RX */
    PORT_SetPinMux(PORTC, 7U, kPORT_MuxAlt3);

    /* PORTC8 (pin P3) is configured as LPUART0_TX */
    PORT_SetPinMux(PORTC, 8U, kPORT_MuxAlt3);

    /* PORTC9 (pin R1) is configured as LPI2C0_SDA */
    PORT_SetPinMux(PORTC, 9U, kPORT_MuxAlt4);

    PORTC->PCR[9] =
        ((PORTC->PCR[9] &
          /* Mask bits to zero which are setting */
          (~(PORT_PCR_PS_MASK | PORT_PCR_PE_MASK | PORT_PCR_SRE_MASK | PORT_PCR_ODE_MASK | PORT_PCR_ISF_MASK)))

         /* Pull Select: Internal pullup resistor is enabled on the corresponding pin, if the corresponding PE
          * field is set. */
         | (uint32_t)(kPORT_PullUp)

         /* Slew Rate Enable: Fast slew rate is configured on the corresponding pin, if the pin is configured as
          * a digital output. */
         | PORT_PCR_SRE(kPORT_FastSlewRate)

         /* Open Drain Enable: Open drain output is enabled on the corresponding pin, if the pin is configured as
          * a digital output. */
         | PORT_PCR_ODE(kPORT_OpenDrainEnable));

    const port_pin_config_t porte13_pinN17_config = {/* Internal pull-up resistor is enabled */
                                                     kPORT_PullUp,
                                                     /* Fast slew rate is configured */
                                                     kPORT_FastSlewRate,
                                                     /* Passive filter is disabled */
                                                     kPORT_PassiveFilterDisable,
                                                     /* Open drain is enabled */
                                                     kPORT_OpenDrainEnable,
                                                     /* Low drive strength is configured */
                                                     kPORT_LowDriveStrength,
                                                     /* Pin is configured as FXIO0_D3 */
                                                     kPORT_MuxAlt7,
                                                     /* Pin Control Register fields [15:0] are not locked */
                                                     kPORT_UnlockRegister};
    /* PORTE13 (pin N17) is configured as FXIO0_D3 */
    PORT_SetPinConfig(PORTE, 13U, &porte13_pinN17_config);

    const port_pin_config_t porte14_pinL16_config = {/* Internal pull-up resistor is enabled */
                                                     kPORT_PullUp,
                                                     /* Fast slew rate is configured */
                                                     kPORT_FastSlewRate,
                                                     /* Passive filter is disabled */
                                                     kPORT_PassiveFilterDisable,
                                                     /* Open drain is enabled */
                                                     kPORT_OpenDrainEnable,
                                                     /* Low drive strength is configured */
                                                     kPORT_LowDriveStrength,
                                                     /* Pin is configured as FXIO0_D4 */
                                                     kPORT_MuxAlt7,
                                                     /* Pin Control Register fields [15:0] are not locked */
                                                     kPORT_UnlockRegister};
    /* PORTE14 (pin L16) is configured as FXIO0_D4 */
    PORT_SetPinConfig(PORTE, 14U, &porte14_pinL16_config);
}
/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
