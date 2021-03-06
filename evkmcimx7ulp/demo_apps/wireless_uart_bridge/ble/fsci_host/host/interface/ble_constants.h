/*! *********************************************************************************
 * \defgroup BLE_CONFIG BLE Configuration Constants
 * @{
 ********************************************************************************** */
/*
 * Copyright (c) 2014, Freescale Semiconductor, Inc.
 * Copyright 2016 - 2017 , NXP
 * All rights reserved.
 *
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef _BLE_CONSTANTS_H_
#define _BLE_CONSTANTS_H_

/************************************************************************************
*************************************************************************************
* Public macros
*************************************************************************************
************************************************************************************/
/*! Size of a BLE Device Address */
#define gcBleDeviceAddressSize_c (6)

/*! Size of bond data structure for a bonded device  */
#define gBleBondDataSize_c (232)

/*! Maximum number of CCCDs */
#define gcGapMaximumSavedCccds_c (16)

/*! Maximum number of attributes that require authorization */
#define gcGapMaxAuthorizationHandles_c (1)

/*! Maximum number of gapServiceSecurityRequirements_t structures that can be registered
 * with Gap_RegisterDeviceSecurityRequirements() */
#define gcGapMaxServiceSpecificSecurityRequirements_c (3)

/*! Size of long UUIDs */
#define gcBleLongUuidSize_c (16)

/*! Maximum Long Term Key size in bytes */
#define gcSmpMaxLtkSize_c (16)

/*! Identity Resolving Key size in bytes */
#define gcSmpIrkSize_c (16)

/*! Connection Signature Resolving Key size in bytes */
#define gcSmpCsrkSize_c (16)

/*! Maximum Rand size in bytes */
#define gcSmpMaxRandSize_c (8)

/*! SMP OOB size in bytes */
#define gcSmpOobSize_c (16)

/*! SMP LE Secure Connections Pairing Random size in bytes (BLE 4.2 only) */
#define gSmpLeScRandomValueSize_c (16)

/*! SMP LE Secure Connections Pairing Confirm size in bytes (BLE 4.2 only) */
#define gSmpLeScRandomConfirmValueSize_c (16)

/*! Maximum device name size */
#define gcGapMaxDeviceNameSize_c (20)

/*! Maximum size of advertising and scan response data */
#define gcGapMaxAdvertisingDataLength_c (31)

/*! Default value of the ATT_MTU */
#define gAttDefaultMtu_c (23)

/*! Maximum possible value of the ATT_MTU for this device. This is used during the MTU Exchange. */
#define gAttMaxMtu_c (247)

/*! Maximum number of simultaneous GATT Clients allowed to use Prepare Write Queues */
#define gcGattDbMaxPrepareWriteClients_c (1)

/*! Channel the number of the UART hardware module (For example, if UART1 is used, this value should be 1). */
#define gHciTransportUartChannel_c (1)

/*! Number of bytes reserved for storing application-specific information about a device */
#define gcReservedFlashSizeForCustomInformation_c (48)

/*! Size of Controller's Resolving List (BLE 4.2 only). */
#define gcGapControllerResolvingListSize_c (4)

#endif /* _BLE_CONSTANTS_H_ */

/*! *********************************************************************************
 * @}
 ********************************************************************************** */
