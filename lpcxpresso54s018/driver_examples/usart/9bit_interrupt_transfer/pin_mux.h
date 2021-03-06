/*
 * Copyright 2020 ,2021 NXP
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

/* Define the PIO[ANAMODE] bit macro (SDK 2.6.x and older miss this bit macro definition) */
#ifndef IOCON_PIO_ANAMODE_MASK
#define IOCON_PIO_ANAMODE_MASK  (0x40U)
#define IOCON_PIO_ANAMODE_SHIFT (6U)
#define IOCON_PIO_ANAMODE(x)    (((uint32_t)(((uint32_t)(x)) << IOCON_PIO_ANAMODE_SHIFT)) & IOCON_PIO_ANAMODE_MASK)
#endif

/*!
 * @brief Calls initialization functions.
 *
 */
void BOARD_InitBootPins(void);

#define PIO029_DIGIMODE_DIGITAL 0x01u /*!<@brief Select Analog/Digital mode.: Digital mode. */
#define PIO029_FUNC_ALT1 0x01u        /*!<@brief Selects pin function.: Alternative connection 1. */
#define PIO030_DIGIMODE_DIGITAL 0x01u /*!<@brief Select Analog/Digital mode.: Digital mode. */
#define PIO030_FUNC_ALT1 0x01u        /*!<@brief Selects pin function.: Alternative connection 1. */
#define PIO320_DIGIMODE_DIGITAL 0x01u /*!<@brief Select Analog/Digital mode.: Digital mode. */
#define PIO320_FUNC_ALT1 0x01u        /*!<@brief Selects pin function.: Alternative connection 1. */
#define PIO32_DIGIMODE_DIGITAL 0x01u  /*!<@brief Select Analog/Digital mode.: Digital mode. */
#define PIO32_FUNC_ALT2 0x02u         /*!<@brief Selects pin function.: Alternative connection 2. */
#define PIO33_DIGIMODE_DIGITAL 0x01u  /*!<@brief Select Analog/Digital mode.: Digital mode. */
#define PIO33_FUNC_ALT2 0x02u         /*!<@brief Selects pin function.: Alternative connection 2. */

/*! @name PIO0_29 (coord B13), U24[13]/P0_29-ISP_FC0_RXD
  @{ */
#define BOARD_ISP_FC0_RXD_PORT 0U                   /*!<@brief PORT peripheral base pointer */
#define BOARD_ISP_FC0_RXD_PIN 29U                   /*!<@brief PORT pin number */
#define BOARD_ISP_FC0_RXD_PIN_MASK (1U << 29U)      /*!<@brief PORT pin mask */
                                                    /* @} */

/*! @name PIO0_30 (coord A2), U24[12]/P0_30-ISP_FC0_TXD
  @{ */
#define BOARD_ISP_FC0_TXD_PORT 0U                   /*!<@brief PORT peripheral base pointer */
#define BOARD_ISP_FC0_TXD_PIN 30U                   /*!<@brief PORT pin number */
#define BOARD_ISP_FC0_TXD_PIN_MASK (1U << 30U)      /*!<@brief PORT pin mask */
                                                    /* @} */

/*! @name PIO3_3 (coord A13), J9[8]/LED2/P3_3-USR_LED2
  @{ */
#define BOARD_LED2_PORT 3U                  /*!<@brief PORT peripheral base pointer */
#define BOARD_LED2_PIN 3U                   /*!<@brief PORT pin number */
#define BOARD_LED2_PIN_MASK (1U << 3U)      /*!<@brief PORT pin mask */
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
