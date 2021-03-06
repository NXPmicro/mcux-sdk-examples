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

#define SOPT5_UART1TXSRC_UART_TX 0x00u /*!<@brief UART 1 transmit data source select: UART1_TX pin */

/*! @name PORTE1 (number 2), DEBUG_UART_RX
  @{ */

/* Symbols to be used with PORT driver */
#define BOARD_DEBUG_UART_RX_PORT PORTE               /*!<@brief PORT peripheral base pointer */
#define BOARD_DEBUG_UART_RX_PIN 1U                   /*!<@brief PORT pin number */
#define BOARD_DEBUG_UART_RX_PIN_MASK (1U << 1U)      /*!<@brief PORT pin mask */
                                                     /* @} */

/*! @name PORTE0 (number 1), DEBUG_UART_TX
  @{ */

/* Symbols to be used with PORT driver */
#define BOARD_DEBUG_UART_TX_PORT PORTE               /*!<@brief PORT peripheral base pointer */
#define BOARD_DEBUG_UART_TX_PIN 0U                   /*!<@brief PORT pin number */
#define BOARD_DEBUG_UART_TX_PIN_MASK (1U << 0U)      /*!<@brief PORT pin mask */
                                                     /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitPins(void);

/*! @name PORTB2 (number 37), ACCEL_SCL
  @{ */

/* Symbols to be used with PORT driver */
#define BOARD_I2C_ACCEL_SCL_PORT PORTB               /*!<@brief PORT peripheral base pointer */
#define BOARD_I2C_ACCEL_SCL_PIN 2U                   /*!<@brief PORT pin number */
#define BOARD_I2C_ACCEL_SCL_PIN_MASK (1U << 2U)      /*!<@brief PORT pin mask */
                                                     /* @} */

/*! @name PORTB3 (number 38), ACCEL_SDA
  @{ */

/* Symbols to be used with PORT driver */
#define BOARD_I2C_ACCEL_SDA_PORT PORTB               /*!<@brief PORT peripheral base pointer */
#define BOARD_I2C_ACCEL_SDA_PIN 3U                   /*!<@brief PORT pin number */
#define BOARD_I2C_ACCEL_SDA_PIN_MASK (1U << 3U)      /*!<@brief PORT pin mask */
                                                     /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_I2C_ConfigurePins(void);

/*! @name PORTB2 (number 37), ACCEL_SCL
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_GPIO_ACCEL_SCL_GPIO GPIOB               /*!<@brief GPIO peripheral base pointer */
#define BOARD_GPIO_ACCEL_SCL_GPIO_PIN_MASK (1U << 2U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define BOARD_GPIO_ACCEL_SCL_PORT PORTB               /*!<@brief PORT peripheral base pointer */
#define BOARD_GPIO_ACCEL_SCL_PIN 2U                   /*!<@brief PORT pin number */
#define BOARD_GPIO_ACCEL_SCL_PIN_MASK (1U << 2U)      /*!<@brief PORT pin mask */
                                                      /* @} */

/*! @name PORTB3 (number 38), ACCEL_SDA
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_GPIO_ACCEL_SDA_GPIO GPIOB               /*!<@brief GPIO peripheral base pointer */
#define BOARD_GPIO_ACCEL_SDA_GPIO_PIN_MASK (1U << 3U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define BOARD_GPIO_ACCEL_SDA_PORT PORTB               /*!<@brief PORT peripheral base pointer */
#define BOARD_GPIO_ACCEL_SDA_PIN 3U                   /*!<@brief PORT pin number */
#define BOARD_GPIO_ACCEL_SDA_PIN_MASK (1U << 3U)      /*!<@brief PORT pin mask */
                                                      /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_GPIO_ConfigurePins(void);

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
