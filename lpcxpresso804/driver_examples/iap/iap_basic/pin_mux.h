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
    kPIN_MUX_DirectionInput = 0U,        /* Input direction */
    kPIN_MUX_DirectionOutput = 1U,       /* Output direction */
    kPIN_MUX_DirectionInputOrOutput = 2U /* Input or output direction */
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

/*! @name PIO0_0 (number 22), CN7[3]/CN8[8]/JP2/PIO0_0
  @{ */
#define BOARD_INITPINS_DEBUG_UART_RX_PERIPHERAL USART0                /*!<@brief Device name: USART0 */
#define BOARD_INITPINS_DEBUG_UART_RX_SIGNAL RXD                       /*!<@brief USART0 signal: RXD */
#define BOARD_INITPINS_DEBUG_UART_RX_PORT 0U                          /*!<@brief PORT device name: 0U */
#define BOARD_INITPINS_DEBUG_UART_RX_PIN 0U                           /*!<@brief 0U pin index: 0 */
#define BOARD_INITPINS_DEBUG_UART_RX_PIN_NAME PIO0_0                  /*!<@brief Pin name */
#define BOARD_INITPINS_DEBUG_UART_RX_LABEL "CN7[3]/CN8[8]/JP2/PIO0_0" /*!<@brief Label */
#define BOARD_INITPINS_DEBUG_UART_RX_NAME "DEBUG_UART_RX"             /*!<@brief Identifier name */
                                                                      /* @} */

/*! @name PIO0_4 (number 7), CN6[7]/CN8[7]/CN5[5]/JP24/PIO0_4
  @{ */
/*!
 * @brief Device name: USART0 */
#define BOARD_INITPINS_DEBUG_UART_TX_PERIPHERAL USART0
/*!
 * @brief USART0 signal: TXD */
#define BOARD_INITPINS_DEBUG_UART_TX_SIGNAL TXD
/*!
 * @brief PORT device name: 0U */
#define BOARD_INITPINS_DEBUG_UART_TX_PORT 0U
/*!
 * @brief 0U pin index: 4 */
#define BOARD_INITPINS_DEBUG_UART_TX_PIN 4U
/*!
 * @brief Pin name */
#define BOARD_INITPINS_DEBUG_UART_TX_PIN_NAME PIO0_4
/*!
 * @brief Label */
#define BOARD_INITPINS_DEBUG_UART_TX_LABEL "CN6[7]/CN8[7]/CN5[5]/JP24/PIO0_4"
/*!
 * @brief Identifier name */
#define BOARD_INITPINS_DEBUG_UART_TX_NAME "DEBUG_UART_TX"
/* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitPins(void); /* Function assigned for the Cortex-M0P */

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
