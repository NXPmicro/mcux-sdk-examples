/*! *********************************************************************************
 * \addtogroup GATT
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

#ifndef _GATT_TYPES_H_
#define _GATT_TYPES_H_

/************************************************************************************
*************************************************************************************
* Include
*************************************************************************************
************************************************************************************/
#include "att_errors.h"
#include "att_types.h"
#include "gatt_database.h"

/************************************************************************************
*************************************************************************************
* Public type definitions
*************************************************************************************
************************************************************************************/
/*! GATT Attribute structure definition */
typedef struct gattAttribute_tag
{
    uint16_t handle;         /*!< Attribute handle. */
    bleUuidType_t uuidType;  /*!< Type of the UUID. */
    bleUuid_t uuid;          /*!< The attribute's UUID. */
    uint16_t valueLength;    /*!< Length of the attribute value array. */
    uint16_t maxValueLength; /*!< Maximum length of the attribute value array; if this is set to 0, then the attribute's
                                length is fixed and cannot be changed. */
    uint8_t *paValue;        /*!< Attribute value array. */
} gattAttribute_t;

/*! GATT Characteristic structure definition */
typedef struct gattCharacteristic_tag
{
    gattCharacteristicPropertiesBitFields_t properties; /*!< Characteristic Properties as defined by GATT. */
    gattAttribute_t value;                              /*!< Characteristic Value attribute. */
    uint8_t cNumDescriptors;                            /*!< Size of the Characteristic Descriptors array. */
    gattAttribute_t *aDescriptors;                      /*!< Characteristic Descriptors array. */
} gattCharacteristic_t;

/*! GATT Service structure definition */
typedef struct gattService_tag
{
    uint16_t startHandle; /*!< The handle of the Service Declaration attribute. */
    uint16_t endHandle;   /*!< The last handle belonging to this Service (followed by another Service declaration of the
                             end of the database). */
    bleUuidType_t uuidType;                    /*!< Service UUID type. */
    bleUuid_t uuid;                            /*!< Service UUID. */
    uint8_t cNumCharacteristics;               /*!< Size of the Characteristic array. */
    gattCharacteristic_t *aCharacteristics;    /*!< Characteristic array. */
    uint8_t cNumIncludedServices;              /*!< Size of the Included Services array. */
    struct gattService_tag *aIncludedServices; /*!< Included Services array. */
} gattService_t;

/*! Flags for the value of the Client Characteristic Configuration Descriptor. */
typedef enum gattCccdFlags_tag
{
    gCccdEmpty_c        = 0x0000, /*!< Nothing is enabled. */
    gCccdNotification_c = BIT0,   /*!< Enables notifications. */
    gCccdIndication_c   = BIT1    /*!< Enabled indications. */
} gattCccdFlags_t;

/*! Characteristic Presentation Format Descriptor structure */
typedef struct gattDbCharPresFormat_tag
{
    uint8_t format;
    int8_t exponent;
    uint16_t unitUuid16;
    uint8_t ns;
    uint16_t description;
} gattDbCharPresFormat_t;

/*! GATT Handle Range structure definition */
typedef struct gattHandleRange_tag
{
    uint16_t startHandle; /*!< Start Handle. */
    uint16_t endHandle;   /*!< End Handle - shall be greater than or equal to Start Handle. */
} gattHandleRange_t;

#endif /* _GATT_TYPES_H_ */

/*! *********************************************************************************
 * @}
 ********************************************************************************** */
