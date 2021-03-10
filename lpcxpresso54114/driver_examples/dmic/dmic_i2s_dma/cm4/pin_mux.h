/*
 * Copyright 2018 NXP
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

#define IOCON_PIO_DIGITAL_EN 0x80u      /*!<@brief Enables digital function */
#define IOCON_PIO_FUNC1 0x01u           /*!<@brief Selects pin function 1 */
#define IOCON_PIO_FUNC2 0x02u           /*!<@brief Selects pin function 2 */
#define IOCON_PIO_FUNC4 0x04u           /*!<@brief Selects pin function 4 */
#define IOCON_PIO_I2CDRIVE_HIGH 0x0200u /*!<@brief High drive: 20 mA */
#define IOCON_PIO_I2CFILTER_DI 0x0400u  /*!<@brief I2C 50 ns glitch filter disabled */
#define IOCON_PIO_I2CSLEW_I2C 0x00u     /*!<@brief I2C mode */
#define IOCON_PIO_INPFILT_OFF 0x0100u   /*!<@brief Input filter disabled */
#define IOCON_PIO_INV_DI 0x00u          /*!<@brief Input function is not inverted */
#define IOCON_PIO_MODE_INACT 0x00u      /*!<@brief No addition pin function */
#define IOCON_PIO_MODE_PULLUP 0x10u     /*!<@brief Selects pull-up function */
#define IOCON_PIO_OPENDRAIN_DI 0x00u    /*!<@brief Open drain is disabled */
#define IOCON_PIO_SLEW_FAST 0x0200u     /*!<@brief Fast mode, slew rate control is disabled */
#define IOCON_PIO_SLEW_STANDARD 0x00u   /*!<@brief Standard mode, output slew rate control is enabled */

/*! @name FC0_RXD_SDA_MOSI (number 31), U18[4]/TO_MUX_P0_0-ISP_RX
  @{ */
/* @} */

/*! @name FC0_TXD_SCL_MISO (number 32), U6[4]/U22[3]/P0_1-ISP_TX
  @{ */
/* @} */

/*! @name PDM0_CLK (number 13), J2[17]/J3[2]/P1[7]/U3[4]/SW2/P0_31-PDM0_CLK-ISP0_EN
  @{ */
/* @} */

/*! @name FC4_RTS_SCL_SSEL1 (number 3), J1[1]/JS4[1]/U10[7]/P0_25-FC4_SCLX
  @{ */
/* @} */

/*! @name FC4_CTS_SDA_SSEL0 (number 4), J1[3]/JS5[1]/U10[5]/P0_26-FC4_SDAX
  @{ */
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
