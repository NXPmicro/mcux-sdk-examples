/*
 * Copyright 2019-2020 ,2021 NXP
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

/* GPIO_AD_B0_13 (coord L14), UART1_RXD */
/* Routed pin properties */
#define BOARD_UART1_RXD_PERIPHERAL                                       LPUART1   /*!< Peripheral name */
#define BOARD_UART1_RXD_SIGNAL                                                RX   /*!< Signal name */

/* GPIO_AD_B0_12 (coord K14), UART1_TXD */
/* Routed pin properties */
#define BOARD_UART1_TXD_PERIPHERAL                                       LPUART1   /*!< Peripheral name */
#define BOARD_UART1_TXD_SIGNAL                                                TX   /*!< Signal name */

/* GPIO_AD_B0_09 (coord F14), JTAG_TDI/J21[5]/ENET_RST/J22[5]/USER_LED */
/* Routed pin properties */
#define BOARD_USER_LED_PERIPHERAL                                          GPIO1   /*!< Peripheral name */
#define BOARD_USER_LED_SIGNAL                                            gpio_io   /*!< Signal name */
#define BOARD_USER_LED_CHANNEL                                                9U   /*!< Signal channel */

/* Symbols to be used with GPIO driver */
#define BOARD_USER_LED_GPIO                                                GPIO1   /*!< GPIO peripheral base pointer */
#define BOARD_USER_LED_GPIO_PIN                                               9U   /*!< GPIO pin number */
#define BOARD_USER_LED_GPIO_PIN_MASK                                  (1U << 9U)   /*!< GPIO pin mask */
#define BOARD_USER_LED_PORT                                                GPIO1   /*!< PORT peripheral base pointer */
#define BOARD_USER_LED_PIN                                                    9U   /*!< PORT pin number */
#define BOARD_USER_LED_PIN_MASK                                       (1U << 9U)   /*!< PORT pin mask */

/* GPIO_B0_13 (coord D10), LCDIF_D9/BT_CFG[9] */
/* Routed pin properties */
#define BOARD_LCDIF_D9_PERIPHERAL                                            ARM   /*!< Peripheral name */
#define BOARD_LCDIF_D9_SIGNAL                                      arm_trace_swo   /*!< Signal name */


/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitPins(void);

/* GPIO_AD_B1_00 (coord J11), I2C1_SCL/CSI_I2C_SCL/J35[20]/J23[6]/U13[17]/U32[4] */
/* Routed pin properties */
#define BOARD_I2C1_SCL_PERIPHERAL                                         LPI2C1   /*!< Peripheral name */
#define BOARD_I2C1_SCL_SIGNAL                                                SCL   /*!< Signal name */

/* GPIO_AD_B1_01 (coord K11), I2C1_SDA/CSI_I2C_SDA/J35[22]/J23[5]/U13[18]/U32[6] */
/* Routed pin properties */
#define BOARD_I2C1_SDA_PERIPHERAL                                         LPI2C1   /*!< Peripheral name */
#define BOARD_I2C1_SDA_SIGNAL                                                SDA   /*!< Signal name */


/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_I2C_ConfigurePins(void);

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
