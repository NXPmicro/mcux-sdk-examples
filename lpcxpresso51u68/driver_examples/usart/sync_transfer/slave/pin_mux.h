/*
 * Copyright 2019 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef _PIN_MUX_H_
#define _PIN_MUX_H_


/*******************************************************************************
 * Definitions
 ******************************************************************************/  

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

/*******************************************************************************
 * API
 ******************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif

/*!
 * @brief Calls initialization functions.
 *
 */
void BOARD_InitBootPins(void);

/* FC0_RXD_SDA_MOSI (number 31), U18[4]/TO_MUX_P0_0-ISP_RX */
#define BOARD_DEBUG_UART_RX_PERIPHERAL                                 FLEXCOMM0   /*!< Device name: FLEXCOMM0 */
#define BOARD_DEBUG_UART_RX_SIGNAL                                  RXD_SDA_MOSI   /*!< FLEXCOMM0 signal: RXD_SDA_MOSI */
#define BOARD_DEBUG_UART_RX_PIN_NAME                            FC0_RXD_SDA_MOSI   /*!< Pin name */
#define BOARD_DEBUG_UART_RX_LABEL                    "U18[4]/TO_MUX_P0_0-ISP_RX"   /*!< Label */
#define BOARD_DEBUG_UART_RX_NAME                                 "DEBUG_UART_RX"   /*!< Identifier name */

/* FC0_TXD_SCL_MISO (number 32), U6[4]/U22[3]/P0_1-ISP_TX */
#define BOARD_DEBUG_UART_TX_PERIPHERAL                                 FLEXCOMM0   /*!< Device name: FLEXCOMM0 */
#define BOARD_DEBUG_UART_TX_SIGNAL                                  TXD_SCL_MISO   /*!< FLEXCOMM0 signal: TXD_SCL_MISO */
#define BOARD_DEBUG_UART_TX_PIN_NAME                            FC0_TXD_SCL_MISO   /*!< Pin name */
#define BOARD_DEBUG_UART_TX_LABEL                     "U6[4]/U22[3]/P0_1-ISP_TX"   /*!< Label */
#define BOARD_DEBUG_UART_TX_NAME                                 "DEBUG_UART_TX"   /*!< Identifier name */

/* FC5_RXD_SDA_MOSI (number 60), J1[13]/U5[5]/P0_20-FC5_RXD_SDA_MOSI */
#define BOARD_SPI_FLASH_MOSI_PERIPHERAL                                FLEXCOMM5   /*!< Device name: FLEXCOMM5 */
#define BOARD_SPI_FLASH_MOSI_SIGNAL                                 RXD_SDA_MOSI   /*!< FLEXCOMM5 signal: RXD_SDA_MOSI */
#define BOARD_SPI_FLASH_MOSI_PIN_NAME                           FC5_RXD_SDA_MOSI   /*!< Pin name */
#define BOARD_SPI_FLASH_MOSI_LABEL         "J1[13]/U5[5]/P0_20-FC5_RXD_SDA_MOSI"   /*!< Label */
#define BOARD_SPI_FLASH_MOSI_NAME                               "SPI_FLASH_MOSI"   /*!< Identifier name */

/* FC5_SCK (number 59), J1[9]/J2[8]/U5[6]/P0_19-FC5_SCK-SPIFI_CSn */
#define BOARD_SPI_FLASH_SCK_PERIPHERAL                                 FLEXCOMM5   /*!< Device name: FLEXCOMM5 */
#define BOARD_SPI_FLASH_SCK_SIGNAL                                           SCK   /*!< FLEXCOMM5 signal: SCK */
#define BOARD_SPI_FLASH_SCK_PIN_NAME                                     FC5_SCK   /*!< Pin name */
#define BOARD_SPI_FLASH_SCK_LABEL    "J1[9]/J2[8]/U5[6]/P0_19-FC5_SCK-SPIFI_CSn"   /*!< Label */
#define BOARD_SPI_FLASH_SCK_NAME                                 "SPI_FLASH_SCK"   /*!< Identifier name */

/* FC5_TXD_SCL_MISO (number 58), J1[11]/U5[2]/P0_18-FC5_TXD_SCL_MISO */
#define BOARD_SPI_FLASH_MISO_PERIPHERAL                                FLEXCOMM5   /*!< Device name: FLEXCOMM5 */
#define BOARD_SPI_FLASH_MISO_SIGNAL                                 TXD_SCL_MISO   /*!< FLEXCOMM5 signal: TXD_SCL_MISO */
#define BOARD_SPI_FLASH_MISO_PIN_NAME                           FC5_TXD_SCL_MISO   /*!< Pin name */
#define BOARD_SPI_FLASH_MISO_LABEL         "J1[11]/U5[2]/P0_18-FC5_TXD_SCL_MISO"   /*!< Label */
#define BOARD_SPI_FLASH_MISO_NAME                               "SPI_FLASH_MISO"   /*!< Identifier name */

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

/*******************************************************************************
 * EOF
 ******************************************************************************/