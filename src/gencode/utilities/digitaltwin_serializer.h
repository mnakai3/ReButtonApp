﻿/************************************************************************************************
 * This code was automatically generated by Digital Twin Code Generator tool 0.6.1.
 * Changes to this file may cause incorrect behavior and will be lost if the code is regenerated.
 *
 * Generated Date: 2019年9月2日
 ***********************************************************************************************/

#ifndef DIGITALTWIN_SERIALIZER
#define DIGITALTWIN_SERIALIZER

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "azure_c_shared_utility/xlogging.h"
#include "parson.h"

#include "../ReButton_impl.h"

#ifdef __cplusplus
extern "C"
{
#endif

bool Battery_SerializeBatteryVoltageTelemetry(char * payloadBuffer, int size);

bool PushButton_SerializeActionNumTelemetry(char * payloadBuffer, int size);

bool PushButton_SerializeMessageTelemetry(char * payloadBuffer, int size);

bool TempHumidSensor_SerializeTemperatureTelemetry(char * payloadBuffer, int size);

bool TempHumidSensor_SerializeHumidityTelemetry(char * payloadBuffer, int size);

bool DeviceInfo_SerializeManufacturerProperty(char * payloadBuffer, int size);

bool DeviceInfo_SerializeModelProperty(char * payloadBuffer, int size);

bool DeviceInfo_SerializeSwVersionProperty(char * payloadBuffer, int size);

bool DeviceInfo_SerializeOsNameProperty(char * payloadBuffer, int size);

bool DeviceInfo_SerializeProcessorArchitectureProperty(char * payloadBuffer, int size);

bool DeviceInfo_SerializeProcessorManufacturerProperty(char * payloadBuffer, int size);

bool DeviceInfo_SerializeTotalStorageProperty(char * payloadBuffer, int size);

bool DeviceInfo_SerializeTotalMemoryProperty(char * payloadBuffer, int size);

#ifdef __cplusplus
}
#endif

#endif // DIGITALTWIN_SERIALIZER
