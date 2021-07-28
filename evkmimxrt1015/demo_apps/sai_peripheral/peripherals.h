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

#ifndef _PERIPHERALS_H_
#define _PERIPHERALS_H_

/***********************************************************************************************************************
 * Included files
 **********************************************************************************************************************/
#include "fsl_edma.h"
#include "fsl_dmamux.h"
#include "fsl_common.h"
#include "fsl_sai.h"
#include "fsl_sai_edma.h"
#include "fsl_clock.h"

#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus */

/***********************************************************************************************************************
 * Definitions
 **********************************************************************************************************************/
/* Definitions for BOARD_InitPeripherals functional group */
/* Used DMA device. */
#define DEMO_EDMA_DMA_BASEADDR DMA0
/* Associated DMAMUX device that is used for muxing of requests. */
#define DEMO_EDMA_DMAMUX_BASEADDR DMAMUX
/* Definition of peripheral ID */
#define DEMO_SAI_PERIPHERAL SAI1
/* Bit clock source frequency used for calculating the bit clock divider in the TxSetBitClockRate function. */
#define DEMO_SAI_TX_BCLK_SOURCE_CLOCK_HZ 12288750UL
/* Bit clock source frequency used for calculating the bit clock divider in the RxSetBitClockRate function. */
#define DEMO_SAI_RX_BCLK_SOURCE_CLOCK_HZ 12288750UL
/* Sample rate used for calculating the bit clock divider in the TxSetBitClockRate function. */
#define DEMO_SAI_TX_SAMPLE_RATE 16000UL
/* Sample rate used for calculating the bit clock divider in the RxSetBitClockRate function. */
#define DEMO_SAI_RX_SAMPLE_RATE 16000UL
/* Word width used for calculating the bit clock divider in the TxSetBitClockRate function. */
#define DEMO_SAI_TX_WORD_WIDTH 16U
/* Word width used for calculating the bit clock divider in the RxSetBitClockRate function. */
#define DEMO_SAI_RX_WORD_WIDTH 16U
/* Number of words within frame used for calculating the bit clock divider in the TxSetBitClockRate function. */
#define DEMO_SAI_TX_WORDS_PER_FRAME 2U
/* Number of words within frame used for calculating the bit clock divider in the RxSetBitClockRate function. */
#define DEMO_SAI_RX_WORDS_PER_FRAME 2U
/* DEMO_SAI eDMA source request. */
#define DEMO_SAI_TX_DMA_REQUEST kDmaRequestMuxSai1Tx
/* Selected eDMA channel number. */
#define DEMO_SAI_TX_DMA_CHANNEL 0
/* DMAMUX device that is used for muxing of the request. */
#define DEMO_SAI_TX_DMAMUX_BASEADDR DMAMUX
/* Used DMA device. */
#define DEMO_SAI_TX_DMA_BASEADDR DMA0
/* DEMO_SAI eDMA source request. */
#define DEMO_SAI_RX_DMA_REQUEST kDmaRequestMuxSai1Rx
/* Selected eDMA channel number. */
#define DEMO_SAI_RX_DMA_CHANNEL 1
/* DMAMUX device that is used for muxing of the request. */
#define DEMO_SAI_RX_DMAMUX_BASEADDR DMAMUX
/* Used DMA device. */
#define DEMO_SAI_RX_DMA_BASEADDR DMA0

/***********************************************************************************************************************
 * Global variables
 **********************************************************************************************************************/
extern const edma_config_t DEMO_eDMA_config;
extern sai_transceiver_t DEMO_SAI_Tx_config;
extern sai_transceiver_t DEMO_SAI_Rx_config;
extern edma_handle_t dmaTxHandle;
extern edma_handle_t dmaRxHandle;
extern sai_edma_handle_t txHandle;
extern sai_edma_handle_t rxHandle;

/***********************************************************************************************************************
 * Callback functions
 **********************************************************************************************************************/
/* SAI transfer Tx callback function for the DEMO_SAI component (init. function BOARD_InitPeripherals)*/
extern void txCallback(I2S_Type *base, sai_edma_handle_t *handle, status_t status, void *userData);
/* SAI transfer Rx callback function for the DEMO_SAI component (init. function BOARD_InitPeripherals)*/
extern void rxCallback(I2S_Type *base, sai_edma_handle_t *handle, status_t status, void *userData);

/***********************************************************************************************************************
 * Initialization functions
 **********************************************************************************************************************/
void BOARD_InitPeripherals(void);

/***********************************************************************************************************************
 * BOARD_InitBootPeripherals function
 **********************************************************************************************************************/
void BOARD_InitBootPeripherals(void);

#if defined(__cplusplus)
}
#endif

#endif /* _PERIPHERALS_H_ */