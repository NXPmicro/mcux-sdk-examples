/*
 * Copyright (c) 2015, Freescale Semiconductor, Inc.
 * Copyright 2016-2018 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "fsl_debug_console.h"
#include "pin_mux.h"
#include "clock_config.h"
#include "board.h"
#include "fsl_adc12.h"

/*******************************************************************************
 * Definitions
 ******************************************************************************/
/* Note that:
 * 1. The ADC instance number in following macros must be same:
 *    1) DEMO_ADC12_BASE;
 *    2) DEMO_ADC12_CLOCK_NAME;
 * 2. The ADC12 has 4 conversion clock source:
 *    1) kADC12_ClockSourceAlt0(ADC_ALTCLK1);
 *    2) kADC12_ClockSourceAlt1(ADC_ALTCLK2);
 *    3) kADC12_ClockSourceAlt2(ADC_ALTCLK3);
 *    4) kADC12_ClockSourceAlt3(ADC_ALTCLK4);
 *    But only kADC12_ClockSourceAlt0(ADC_ALTCLK1) is workable on FRDM-KE15Z. kADC12_ClockSourceAlt0 also has 4
 *    inputs from PCC module, they are:
 *    i) System Oscillator async clock;
 *    ii) Slow IRC async clock;
 *    iii) Fast IRC async clock;
 *    iiii) System FLL async clock;
 */
#define DEMO_ADC12_BASE         ADC0
#define DEMO_ADC12_CLOCK_NAME   kCLOCK_Adc0
#define DEMO_ADC12_CLOCK_SOURCE kADC12_ClockSourceAlt0

/* Channel 0 is PTA0 on the board */
#define DEMO_ADC12_USER_CHANNEL  0U
#define DEMO_ADC12_CHANNEL_GROUP 0U

/*******************************************************************************
 * Prototypes
 ******************************************************************************/

/*******************************************************************************
 * Variables
 ******************************************************************************/
const uint32_t g_Adc12_8bitFullRange = 256U;

/*******************************************************************************
 * Code
 ******************************************************************************/
/*!
 * @brief Main function
 */
int main(void)
{
    adc12_config_t adc12ConfigStruct;
    adc12_channel_config_t adc12ChannelConfigStruct;

    BOARD_InitPins();
    BOARD_BootClockRUN();
    BOARD_InitDebugConsole();

    /* Set ADC12's clock source to be Slow IRC async clock. */
    CLOCK_SetIpSrc(DEMO_ADC12_CLOCK_NAME, kCLOCK_IpSrcSircAsync);

    PRINTF("\r\nADC12 polling Example.\r\n");

    /* Initialize ADC. */
    ADC12_GetDefaultConfig(&adc12ConfigStruct);
    adc12ConfigStruct.clockSource = DEMO_ADC12_CLOCK_SOURCE;
    ADC12_Init(DEMO_ADC12_BASE, &adc12ConfigStruct);
    /* Set to software trigger mode. */
    ADC12_EnableHardwareTrigger(DEMO_ADC12_BASE, false);

    /* Calibrate ADC. */
    if (kStatus_Success != ADC12_DoAutoCalibration(DEMO_ADC12_BASE))
    {
        PRINTF("ADC calibration failed!\r\n");
    }

    PRINTF("ADC Full Range: %d\r\n", g_Adc12_8bitFullRange);
    /* Trigger the conversion. */
    PRINTF("Press any key to get user channel's ADC value ...\r\n");
    adc12ChannelConfigStruct.channelNumber                        = DEMO_ADC12_USER_CHANNEL;
    adc12ChannelConfigStruct.enableInterruptOnConversionCompleted = false;
    while (true)
    {
        GETCHAR();

        /*
         When in software trigger mode, each conversion would be launched once calling the "ADC12_SetChannelConfig()"
         function, which works like writing a conversion command and executing it. For another channel's conversion,
         just to change the "channelNumber" field in channel's configuration structure, and call the
         "ADC12_SetChannelConfig() again.
        */
        ADC12_SetChannelConfig(DEMO_ADC12_BASE, DEMO_ADC12_CHANNEL_GROUP, &adc12ChannelConfigStruct);
        while (0U == (kADC12_ChannelConversionCompletedFlag &
                      ADC12_GetChannelStatusFlags(DEMO_ADC12_BASE, DEMO_ADC12_CHANNEL_GROUP)))
        {
        }
        PRINTF("ADC Value: %d\r\n", ADC12_GetChannelConversionValue(DEMO_ADC12_BASE, DEMO_ADC12_CHANNEL_GROUP));
    }
}
