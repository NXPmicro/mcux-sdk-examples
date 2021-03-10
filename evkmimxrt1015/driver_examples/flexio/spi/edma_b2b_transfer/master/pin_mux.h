/*
 * Copyright 2019 NXP
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

/***********************************************************************************************************************
 * Definitions
 **********************************************************************************************************************/

/*! @brief Direction type  */
typedef enum _pin_mux_direction
{
  kPIN_MUX_DirectionInput = 0U,         /* Input direction */
  kPIN_MUX_DirectionOutput = 1U,        /* Output direction */
  kPIN_MUX_DirectionInputOrOutput = 2U  /* Input or output direction */
} pin_mux_direction_t;

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

/* GPIO_AD_B1_15 (number 52), I2C1_SDA/U10[18]/J18[5]/J19[9]/U26[6] */
#define BOARD_INITPINS_I2C1_SDA_PERIPHERAL                               FLEXIO1   /*!< Device name: FLEXIO1 */
#define BOARD_INITPINS_I2C1_SDA_SIGNAL                                        IO   /*!< FLEXIO1 signal: IO */
#define BOARD_INITPINS_I2C1_SDA_CHANNEL                                       0U   /*!< FLEXIO1 IO channel: 00 */

/* GPIO_AD_B1_14 (number 53), I2C1_SCL/U10[17]/J18[6]/U26[4] */
#define BOARD_INITPINS_I2C1_SCL_PERIPHERAL                               FLEXIO1   /*!< Device name: FLEXIO1 */
#define BOARD_INITPINS_I2C1_SCL_SIGNAL                                        IO   /*!< FLEXIO1 signal: IO */
#define BOARD_INITPINS_I2C1_SCL_CHANNEL                                       1U   /*!< FLEXIO1 IO channel: 01 */

/* GPIO_AD_B0_07 (number 68), LPUART1_RXD */
#define BOARD_INITPINS_UART1_RXD_PERIPHERAL                              LPUART1   /*!< Device name: LPUART1 */
#define BOARD_INITPINS_UART1_RXD_SIGNAL                                       RX   /*!< LPUART1 signal: RX */

/* GPIO_AD_B0_06 (number 72), LPUART1_TXD */
#define BOARD_INITPINS_UART1_TXD_PERIPHERAL                              LPUART1   /*!< Device name: LPUART1 */
#define BOARD_INITPINS_UART1_TXD_SIGNAL                                       TX   /*!< LPUART1 signal: TX */


/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitPins(void);

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
