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

#ifndef _PIN_MUX_H_
#define _PIN_MUX_H_

/*!
 * @addtogroup pin_mux
 * @{
 */

/***********************************************************************************************************************
 * API
 **********************************************************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif

/*!
 * @brief Calls initialization functions.
 *
 */
void BOARD_InitBootPins(void);

#define IOCON_PIO_DIGITAL_EN 0x0100u    /*!<@brief Enables digital function */
#define IOCON_PIO_FUNC0 0x00u           /*!<@brief Selects pin function 0 */
#define IOCON_PIO_FUNC1 0x01u           /*!<@brief Selects pin function 1 */
#define IOCON_PIO_FUNC6 0x06u           /*!<@brief Selects pin function 6 */
#define IOCON_PIO_I2CDRIVE_HIGH 0x0400u /*!<@brief High drive: 20 mA */
#define IOCON_PIO_I2CFILTER_EN 0x00u    /*!<@brief I2C 50 ns glitch filter enabled */
#define IOCON_PIO_I2CSLEW_I2C 0x00u     /*!<@brief I2C mode */
#define IOCON_PIO_INPFILT_OFF 0x0200u   /*!<@brief Input filter disabled */
#define IOCON_PIO_INV_DI 0x00u          /*!<@brief Input function is not inverted */
#define IOCON_PIO_MODE_INACT 0x00u      /*!<@brief No addition pin function */
#define IOCON_PIO_MODE_PULLUP 0x20u     /*!<@brief Selects pull-up function */
#define IOCON_PIO_OPENDRAIN_DI 0x00u    /*!<@brief Open drain is disabled */
#define IOCON_PIO_SLEW_STANDARD 0x00u   /*!<@brief Standard mode, output slew rate control is enabled */

/*! @name PIO0_30 (coord A2), U24[12]/P0_30-ISP_FC0_TXD
  @{ */
#define BOARD_ISP_FC0_TXD_PORT 0U                   /*!<@brief PORT peripheral base pointer */
#define BOARD_ISP_FC0_TXD_PIN 30U                   /*!<@brief PORT pin number */
#define BOARD_ISP_FC0_TXD_PIN_MASK (1U << 30U)      /*!<@brief PORT pin mask */
                                                    /* @} */

/*! @name PIO0_29 (coord B13), U24[13]/P0_29-ISP_FC0_RXD
  @{ */
#define BOARD_ISP_FC0_RXD_PORT 0U                   /*!<@brief PORT peripheral base pointer */
#define BOARD_ISP_FC0_RXD_PIN 29U                   /*!<@brief PORT pin number */
#define BOARD_ISP_FC0_RXD_PIN_MASK (1U << 29U)      /*!<@brief PORT pin mask */
                                                    /* @} */

/*! @name PIO2_21 (coord L10), J16[8]/P2_21-LCD_VD3
  @{ */
#define BOARD_LCD_VD3_PORT 2U                   /*!<@brief PORT peripheral base pointer */
#define BOARD_LCD_VD3_PIN 21U                   /*!<@brief PORT pin number */
#define BOARD_LCD_VD3_PIN_MASK (1U << 21U)      /*!<@brief PORT pin mask */
                                                /* @} */

/*! @name PIO2_22 (coord K10), J16[9]/P2_22-LCD_VD4
  @{ */
#define BOARD_LCD_VD4_PORT 2U                   /*!<@brief PORT peripheral base pointer */
#define BOARD_LCD_VD4_PIN 22U                   /*!<@brief PORT pin number */
#define BOARD_LCD_VD4_PIN_MASK (1U << 22U)      /*!<@brief PORT pin mask */
                                                /* @} */

/*! @name PIO2_23 (coord M14), J16[10]/P2_23-LCD_VD5
  @{ */
#define BOARD_LCD_VD5_PORT 2U                   /*!<@brief PORT peripheral base pointer */
#define BOARD_LCD_VD5_PIN 23U                   /*!<@brief PORT pin number */
#define BOARD_LCD_VD5_PIN_MASK (1U << 23U)      /*!<@brief PORT pin mask */
                                                /* @} */

/*! @name PIO2_24 (coord K14), J16[11]/P2_24-LCD_VD6
  @{ */
#define BOARD_LCD_VD6_PORT 2U                   /*!<@brief PORT peripheral base pointer */
#define BOARD_LCD_VD6_PIN 24U                   /*!<@brief PORT pin number */
#define BOARD_LCD_VD6_PIN_MASK (1U << 24U)      /*!<@brief PORT pin mask */
                                                /* @} */

/*! @name PIO2_25 (coord J11), J16[12]/P2_25-LCD_VD7
  @{ */
#define BOARD_LCD_VD7_PORT 2U                   /*!<@brief PORT peripheral base pointer */
#define BOARD_LCD_VD7_PIN 25U                   /*!<@brief PORT pin number */
#define BOARD_LCD_VD7_PIN_MASK (1U << 25U)      /*!<@brief PORT pin mask */
                                                /* @} */

/*! @name PIO2_28 (coord G13), J16[15]/P2_28-LCD_VD10
  @{ */
#define BOARD_LCD_VD10_PORT 2U                   /*!<@brief PORT peripheral base pointer */
#define BOARD_LCD_VD10_PIN 28U                   /*!<@brief PORT pin number */
#define BOARD_LCD_VD10_PIN_MASK (1U << 28U)      /*!<@brief PORT pin mask */
                                                 /* @} */

/*! @name PIO2_29 (coord G11), J16[16]/P2_29-LCD_VD11
  @{ */
#define BOARD_LCD_VD11_PORT 2U                   /*!<@brief PORT peripheral base pointer */
#define BOARD_LCD_VD11_PIN 29U                   /*!<@brief PORT pin number */
#define BOARD_LCD_VD11_PIN_MASK (1U << 29U)      /*!<@brief PORT pin mask */
                                                 /* @} */

/*! @name PIO2_30 (coord F12), J16[17]/P2_30-LCD_VD12
  @{ */
#define BOARD_LCD_VD12_PORT 2U                   /*!<@brief PORT peripheral base pointer */
#define BOARD_LCD_VD12_PIN 30U                   /*!<@brief PORT pin number */
#define BOARD_LCD_VD12_PIN_MASK (1U << 30U)      /*!<@brief PORT pin mask */
                                                 /* @} */

/*! @name PIO2_31 (coord D14), J16[18]/P2_31-LCD_VD13
  @{ */
#define BOARD_LCD_VD13_PORT 2U                   /*!<@brief PORT peripheral base pointer */
#define BOARD_LCD_VD13_PIN 31U                   /*!<@brief PORT pin number */
#define BOARD_LCD_VD13_PIN_MASK (1U << 31U)      /*!<@brief PORT pin mask */
                                                 /* @} */

/*! @name PIO3_0 (coord D12), J16[19]/JS36[1]/P3_0-LCD_VD14
  @{ */
#define BOARD_LCD_VD14_PORT 3U                  /*!<@brief PORT peripheral base pointer */
#define BOARD_LCD_VD14_PIN 0U                   /*!<@brief PORT pin number */
#define BOARD_LCD_VD14_PIN_MASK (1U << 0U)      /*!<@brief PORT pin mask */
                                                /* @} */

/*! @name PIO3_1 (coord D11), J16[20]/JS33[1]/P3_1-LCD_VD15
  @{ */
#define BOARD_LCD_VD15_PORT 3U                  /*!<@brief PORT peripheral base pointer */
#define BOARD_LCD_VD15_PIN 1U                   /*!<@brief PORT pin number */
#define BOARD_LCD_VD15_PIN_MASK (1U << 1U)      /*!<@brief PORT pin mask */
                                                /* @} */

/*! @name PIO3_5 (coord B10), J16[24]/P3_5-LCD_VD19
  @{ */
#define BOARD_LCD_VD19_PORT 3U                  /*!<@brief PORT peripheral base pointer */
#define BOARD_LCD_VD19_PIN 5U                   /*!<@brief PORT pin number */
#define BOARD_LCD_VD19_PIN_MASK (1U << 5U)      /*!<@brief PORT pin mask */
                                                /* @} */

/*! @name PIO3_6 (coord C9), J16[25]/P3_6-LCD_VD20
  @{ */
#define BOARD_LCD_VD20_PORT 3U                  /*!<@brief PORT peripheral base pointer */
#define BOARD_LCD_VD20_PIN 6U                   /*!<@brief PORT pin number */
#define BOARD_LCD_VD20_PIN_MASK (1U << 6U)      /*!<@brief PORT pin mask */
                                                /* @} */

/*! @name PIO3_7 (coord B8), J16[26]/P3_7-LCD_VD21
  @{ */
#define BOARD_LCD_VD21_PORT 3U                  /*!<@brief PORT peripheral base pointer */
#define BOARD_LCD_VD21_PIN 7U                   /*!<@brief PORT pin number */
#define BOARD_LCD_VD21_PIN_MASK (1U << 7U)      /*!<@brief PORT pin mask */
                                                /* @} */

/*! @name PIO3_8 (coord A7), J16[27]/P3_8-LCD_VD22
  @{ */
#define BOARD_LCD_VD22_PORT 3U                  /*!<@brief PORT peripheral base pointer */
#define BOARD_LCD_VD22_PIN 8U                   /*!<@brief PORT pin number */
#define BOARD_LCD_VD22_PIN_MASK (1U << 8U)      /*!<@brief PORT pin mask */
                                                /* @} */

/*! @name PIO3_9 (coord C7), J16[28]/P3_9-LCD_VD23
  @{ */
#define BOARD_LCD_VD23_PORT 3U                  /*!<@brief PORT peripheral base pointer */
#define BOARD_LCD_VD23_PIN 9U                   /*!<@brief PORT pin number */
#define BOARD_LCD_VD23_PIN_MASK (1U << 9U)      /*!<@brief PORT pin mask */
                                                /* @} */

/*! @name PIO2_11 (coord K3), J16[31]/P2_11-LCD_PWR
  @{ */
#define BOARD_LCD_PWR_PORT 2U                   /*!<@brief PORT peripheral base pointer */
#define BOARD_LCD_PWR_PIN 11U                   /*!<@brief PORT pin number */
#define BOARD_LCD_PWR_PIN_MASK (1U << 11U)      /*!<@brief PORT pin mask */
                                                /* @} */

/*! @name PIO2_13 (coord P7), J16[30]/P2_13-LCD_DCLK
  @{ */
#define BOARD_LCD_DCLK_PORT 2U                   /*!<@brief PORT peripheral base pointer */
#define BOARD_LCD_DCLK_PIN 13U                   /*!<@brief PORT pin number */
#define BOARD_LCD_DCLK_PIN_MASK (1U << 13U)      /*!<@brief PORT pin mask */
                                                 /* @} */

/*! @name PIO2_14 (coord L7), J16[33]/P2_14-LCD_FP
  @{ */
#define BOARD_LCD_FP_PORT 2U                   /*!<@brief PORT peripheral base pointer */
#define BOARD_LCD_FP_PIN 14U                   /*!<@brief PORT pin number */
#define BOARD_LCD_FP_PIN_MASK (1U << 14U)      /*!<@brief PORT pin mask */
                                               /* @} */

/*! @name PIO2_15 (coord M8), J16[34]/P2_15-LCD_AC_ENAB_M
  @{ */
#define BOARD_LCD_AC_ENAB_M_PORT 2U                   /*!<@brief PORT peripheral base pointer */
#define BOARD_LCD_AC_ENAB_M_PIN 15U                   /*!<@brief PORT pin number */
#define BOARD_LCD_AC_ENAB_M_PIN_MASK (1U << 15U)      /*!<@brief PORT pin mask */
                                                      /* @} */

/*! @name PIO2_16 (coord L8), J16[32]/P2_16-LCD_LP
  @{ */
#define BOARD_LCD_LP_PORT 2U                   /*!<@brief PORT peripheral base pointer */
#define BOARD_LCD_LP_PIN 16U                   /*!<@brief PORT pin number */
#define BOARD_LCD_LP_PIN_MASK (1U << 16U)      /*!<@brief PORT pin mask */
                                               /* @} */

/*! @name PIO3_23 (coord C2), J11[10]/J9[3]/U10[3]/J17[5]/U19[10]/P3_23-FC2_SDAX
  @{ */
#define BOARD_FC2_SDAX_PORT 3U                   /*!<@brief PORT peripheral base pointer */
#define BOARD_FC2_SDAX_PIN 23U                   /*!<@brief PORT pin number */
#define BOARD_FC2_SDAX_PIN_MASK (1U << 23U)      /*!<@brief PORT pin mask */
                                                 /* @} */

/*! @name PIO3_24 (coord E2), J11[9]/J9[1]/U10[2]/J17[4]/U19[2]/P3_24-FC2_SCLX
  @{ */
#define BOARD_FC2_SCLX_PORT 3U                   /*!<@brief PORT peripheral base pointer */
#define BOARD_FC2_SCLX_PIN 24U                   /*!<@brief PORT pin number */
#define BOARD_FC2_SCLX_PIN_MASK (1U << 24U)      /*!<@brief PORT pin mask */
                                                 /* @} */

/*! @name PIO0_10 (coord P2), U16[12]/SWO_TRGT
  @{ */
#define BOARD_SWO_TRGT_PORT 0U                   /*!<@brief PORT peripheral base pointer */
#define BOARD_SWO_TRGT_PIN 10U                   /*!<@brief PORT pin number */
#define BOARD_SWO_TRGT_PIN_MASK (1U << 10U)      /*!<@brief PORT pin mask */
                                                 /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitPins(void); /* Function assigned for the Cortex-M4F */

#if defined(__cplusplus)
}
#endif

/*!
 * @}
 */
#endif /* _PIN_MUX_H_ */

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
