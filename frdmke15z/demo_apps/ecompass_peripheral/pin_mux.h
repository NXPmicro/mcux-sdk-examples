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

/*! @name PORTC6 (number 81), DEBUG_UART_RX
  @{ */

/* Symbols to be used with PORT driver */
#define BOARD_DEBUG_UART_RX_PORT PORTC               /*!<@brief PORT peripheral base pointer */
#define BOARD_DEBUG_UART_RX_PIN 6U                   /*!<@brief PORT pin number */
#define BOARD_DEBUG_UART_RX_PIN_MASK (1U << 6U)      /*!<@brief PORT pin mask */
                                                     /* @} */

/*! @name PORTC7 (number 80), DEBUG_UART_TX
  @{ */

/* Symbols to be used with PORT driver */
#define BOARD_DEBUG_UART_TX_PORT PORTC               /*!<@brief PORT peripheral base pointer */
#define BOARD_DEBUG_UART_TX_PIN 7U                   /*!<@brief PORT pin number */
#define BOARD_DEBUG_UART_TX_PIN_MASK (1U << 7U)      /*!<@brief PORT pin mask */
                                                     /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitPins(void);

/*! @name PORTA3 (number 72), ACCEL_SCL
  @{ */

/* Symbols to be used with PORT driver */
#define BOARD_I2C_ACCEL_SCL_PORT PORTA               /*!<@brief PORT peripheral base pointer */
#define BOARD_I2C_ACCEL_SCL_PIN 3U                   /*!<@brief PORT pin number */
#define BOARD_I2C_ACCEL_SCL_PIN_MASK (1U << 3U)      /*!<@brief PORT pin mask */
                                                     /* @} */

/*! @name PORTA2 (number 73), ACCEL_SDA
  @{ */

/* Symbols to be used with PORT driver */
#define BOARD_I2C_ACCEL_SDA_PORT PORTA               /*!<@brief PORT peripheral base pointer */
#define BOARD_I2C_ACCEL_SDA_PIN 2U                   /*!<@brief PORT pin number */
#define BOARD_I2C_ACCEL_SDA_PIN_MASK (1U << 2U)      /*!<@brief PORT pin mask */
                                                     /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_I2C_ConfigurePins(void);

/*! @name PORTB9 (number 76), ACCEL_RESET
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_ACCEL_RESET_FGPIO FGPIOB             /*!<@brief FGPIO peripheral base pointer */
#define BOARD_ACCEL_RESET_GPIO GPIOB               /*!<@brief GPIO peripheral base pointer */
#define BOARD_ACCEL_RESET_GPIO_PIN_MASK (1U << 9U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define BOARD_ACCEL_RESET_PORT PORTB               /*!<@brief PORT peripheral base pointer */
#define BOARD_ACCEL_RESET_PIN 9U                   /*!<@brief PORT pin number */
#define BOARD_ACCEL_RESET_PIN_MASK (1U << 9U)      /*!<@brief PORT pin mask */
                                                   /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_Init_ACCEL_Reset(void);

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
