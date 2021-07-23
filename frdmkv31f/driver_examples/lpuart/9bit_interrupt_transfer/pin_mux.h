/*
 * Copyright 2021 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

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

#define SOPT5_UART0TXSRC_UART_TX 0x00u /*!<@brief UART 0 transmit data source select: UART0_TX pin */

/*! @name PORTB16 (number 62), U7[4]/UART0_RX_TGTMCU
  @{ */

/* Symbols to be used with PORT driver */
#define BOARD_DEBUG_UART_RX_PORT PORTB                /*!<@brief PORT peripheral base pointer */
#define BOARD_DEBUG_UART_RX_PIN 16U                   /*!<@brief PORT pin number */
#define BOARD_DEBUG_UART_RX_PIN_MASK (1U << 16U)      /*!<@brief PORT pin mask */
                                                      /* @} */

/*! @name PORTB17 (number 63), U10[1]/UART0_TX_TGTMCU
  @{ */

/* Symbols to be used with PORT driver */
#define BOARD_DEBUG_UART_TX_PORT PORTB                /*!<@brief PORT peripheral base pointer */
#define BOARD_DEBUG_UART_TX_PIN 17U                   /*!<@brief PORT pin number */
#define BOARD_DEBUG_UART_TX_PIN_MASK (1U << 17U)      /*!<@brief PORT pin mask */
                                                      /* @} */

/*! @name PORTA2 (number 36), J9[6]/TRACE_SWO
  @{ */

/* Symbols to be used with PORT driver */
#define BOARD_TRACE_SWO_PORT PORTA               /*!<@brief PORT peripheral base pointer */
#define BOARD_TRACE_SWO_PIN 2U                   /*!<@brief PORT pin number */
#define BOARD_TRACE_SWO_PIN_MASK (1U << 2U)      /*!<@brief PORT pin mask */
                                                 /* @} */

/*! @name PORTB10 (number 58), J2[19]/ADC1_SE14
  @{ */

/* Symbols to be used with PORT driver */
#define BOARD_ADC1_SE14_PORT PORTB                /*!<@brief PORT peripheral base pointer */
#define BOARD_ADC1_SE14_PIN 10U                   /*!<@brief PORT pin number */
#define BOARD_ADC1_SE14_PIN_MASK (1U << 10U)      /*!<@brief PORT pin mask */
                                                  /* @} */

/*! @name PORTB11 (number 59), J4[6]/ADC1_SE15
  @{ */

/* Symbols to be used with PORT driver */
#define BOARD_ADC1_SE15_PORT PORTB                /*!<@brief PORT peripheral base pointer */
#define BOARD_ADC1_SE15_PIN 11U                   /*!<@brief PORT pin number */
#define BOARD_ADC1_SE15_PIN_MASK (1U << 11U)      /*!<@brief PORT pin mask */
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