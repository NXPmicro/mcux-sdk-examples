/*
 * Copyright 2020 NXP
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

/*!
 * @brief Enables digital function */
#define IOCON_PIO_DIGITAL_EN 0x0100u
/*!
 * @brief Selects pin function 1 */
#define IOCON_PIO_FUNC1 0x01u
/*!
 * @brief Selects pin function 6 */
#define IOCON_PIO_FUNC6 0x06u
/*!
 * @brief Input filter disabled */
#define IOCON_PIO_INPFILT_OFF 0x0200u
/*!
 * @brief Input function is not inverted */
#define IOCON_PIO_INV_DI 0x00u
/*!
 * @brief No addition pin function */
#define IOCON_PIO_MODE_INACT 0x00u
/*!
 * @brief Open drain is disabled */
#define IOCON_PIO_OPENDRAIN_DI 0x00u
/*!
 * @brief Standard mode, output slew rate control is enabled */
#define IOCON_PIO_SLEW_STANDARD 0x00u
/*!
 * @brief Select Analog/Digital mode.: Digital mode. */
#define PIO326_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Selects pin function.: Alternative connection 3. */
#define PIO326_FUNC_ALT3 0x03u
/*!
 * @brief
 * Selects function mode (on-chip pull-up/pull-down resistor control).
 * : Inactive.
 * Inactive (no pull-down/pull-up resistor enabled).
 */
#define PIO326_MODE_INACTIVE 0x00u
/*!
 * @brief Select Analog/Digital mode.: Digital mode. */
#define PIO327_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Selects pin function.: Alternative connection 3. */
#define PIO327_FUNC_ALT3 0x03u
/*!
 * @brief
 * Selects function mode (on-chip pull-up/pull-down resistor control).
 * : Inactive.
 * Inactive (no pull-down/pull-up resistor enabled).
 */
#define PIO327_MODE_INACTIVE 0x00u
/*!
 * @brief Select Analog/Digital mode.: Digital mode. */
#define PIO328_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Selects pin function.: Alternative connection 3. */
#define PIO328_FUNC_ALT3 0x03u
/*!
 * @brief Select Analog/Digital mode.: Digital mode. */
#define PIO329_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Selects pin function.: Alternative connection 3. */
#define PIO329_FUNC_ALT3 0x03u

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
