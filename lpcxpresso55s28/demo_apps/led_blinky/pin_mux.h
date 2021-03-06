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

#define PIO1_4_DIGIMODE_DIGITAL 0x01u /*!<@brief Select Digital mode.: Enable Digital mode. Digital input is enabled. */
#define PIO1_4_FUNC_ALT0 0x00u        /*!<@brief Selects pin function.: Alternative connection 0. */

/*! @name PIO1_4 (number 1), R78/P18[5]/LEDR/PWM_ARD
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITPINS_LED_BULE_GPIO GPIO                /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITPINS_LED_BULE_GPIO_PIN_MASK (1U << 4U) /*!<@brief GPIO pin mask */
#define BOARD_INITPINS_LED_BULE_PORT 1U                  /*!<@brief PORT peripheral base pointer */
#define BOARD_INITPINS_LED_BULE_PIN 4U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_LED_BULE_PIN_MASK (1U << 4U)      /*!<@brief PORT pin mask */
                                                         /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitPins(void); /* Function assigned for the Cortex-M33 (Core #0) */

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
