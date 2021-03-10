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

/*! @name PORTB1 (number 26), UART0_TX_TGTMCU
  @{ */
#define BOARD_DEBUG_UART_TX_PORT PORTB /*!<@brief PORT device name: PORTB */
#define BOARD_DEBUG_UART_TX_PIN 1U     /*!<@brief PORTB pin index: 1 */
                                       /* @} */

/*! @name PORTB0 (number 27), UART0_RX_TGTMCU
  @{ */
#define BOARD_DEBUG_UART_RX_PORT PORTB /*!<@brief PORT device name: PORTB */
#define BOARD_DEBUG_UART_RX_PIN 0U     /*!<@brief PORTB pin index: 0 */
                                       /* @} */

/*! @name PORTB5 (number 15), D4[1]/RGB_RED
  @{ */
#define BOARD_LED_RED_PORT PORTB /*!<@brief PORT device name: PORTB */
#define BOARD_LED_RED_PIN 5U     /*!<@brief PORTB pin index: 5 */
                                 /* @} */

/*! @name PORTD2 (number 34), J1[6]/BUTTON_1/SW3/Arduino_D2
  @{ */
#define BOARD_SW3_GPIO GPIOD /*!<@brief GPIO device name: GPIOD */
#define BOARD_SW3_PORT PORTD /*!<@brief PORT device name: PORTD */
#define BOARD_SW3_PIN 2U     /*!<@brief PORTD pin index: 2 */
                             /* @} */

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
