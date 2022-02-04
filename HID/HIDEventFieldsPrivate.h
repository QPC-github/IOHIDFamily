/*
*
* @APPLE_LICENSE_HEADER_START@
*
* Copyright (c) 2019 Apple Computer, Inc.  All Rights Reserved.
*
* This file contains Original Code and/or Modifications of Original Code
* as defined in and that are subject to the Apple Public Source License
* Version 2.0 (the 'License'). You may not use this file except in
* compliance with the License. Please obtain a copy of the License at
* http://www.opensource.apple.com/apsl/ and read it before using this
* file.
*
* The Original Code and all software distributed under the License are
* distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
* EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
* INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
* Please see the License for the specific language governing rights and
* limitations under the License.
*
* @APPLE_LICENSE_HEADER_END@
*/
//DO NOT EDIT THIS FILE. FILE AUTO-GENERATED


#include <IOKit/hid/IOHIDEvent.h>
#include <HID/HIDEvent.h>


static HIDEventFieldInfo GenericGesturekIOHIDEventFieldGenericGestureTypekIOHIDGenericGestureTypeTapEventField[] = {
	{ kIOHIDEventFieldGenericGestureType, kEventFieldDataType_Integer, 0, 1, "GenericGestureType" },
	{ kIOHIDEventFieldGenericGestureTypeTapCount, kEventFieldDataType_Integer, 0, 0,  "GenericGestureTypeTapCount" },
	{ 0, kEventFieldDataType_None, 0, 0, NULL }
};

static HIDEventFieldInfo GenericGesturekIOHIDEventFieldGenericGestureTypekIOHIDGenericGestureTypeSwipeEventField[] = {
	{ kIOHIDEventFieldGenericGestureType, kEventFieldDataType_Integer, 0, 1, "GenericGestureType" },
	{ kIOHIDEventFieldGenericGestureTypeSwipeProgress, kEventFieldDataType_IOFixed, 0, 0,  "GenericGestureTypeSwipeProgress" },
	{ 0, kEventFieldDataType_None, 0, 0, NULL }
};

static HIDEventFieldDescSelectorTable GenericGesturekIOHIDEventFieldGenericGestureTypeHIDEventFieldSelectorTable[] = {
	{ kIOHIDGenericGestureTypeTap, GenericGesturekIOHIDEventFieldGenericGestureTypekIOHIDGenericGestureTypeTapEventField },
	{ kIOHIDGenericGestureTypeSwipe, GenericGesturekIOHIDEventFieldGenericGestureTypekIOHIDGenericGestureTypeSwipeEventField },
	{ 0, NULL }
};

static HIDSelectorTable GenericGestureHIDSelectorTable[] = {
	{ kIOHIDEventFieldGenericGestureType, GenericGesturekIOHIDEventFieldGenericGestureTypeHIDEventFieldSelectorTable },
	{ 0, NULL }
};

static HIDEventFieldInfo DigitizerkIOHIDEventFieldDigitizerOrientationTypekIOHIDDigitizerOrientationTypePolarEventField[] = {
	{ kIOHIDEventFieldDigitizerCollection, kEventFieldDataType_Integer, 1, 0, "DigitizerCollection" },
	{ kIOHIDEventFieldDigitizerRange, kEventFieldDataType_Integer, 1, 0, "DigitizerRange" },
	{ kIOHIDEventFieldDigitizerTouch, kEventFieldDataType_Integer, 1, 0, "DigitizerTouch" },
	{ kIOHIDEventFieldDigitizerIsDisplayIntegrated, kEventFieldDataType_Integer, 1, 0, "DigitizerIsDisplayIntegrated" },
	{ kIOHIDEventFieldDigitizerX, kEventFieldDataType_IOFixed, 1, 0, "DigitizerX" },
	{ kIOHIDEventFieldDigitizerY, kEventFieldDataType_IOFixed, 1, 0, "DigitizerY" },
	{ kIOHIDEventFieldDigitizerZ, kEventFieldDataType_IOFixed, 1, 0, "DigitizerZ" },
	{ kIOHIDEventFieldDigitizerIndex, kEventFieldDataType_Integer, 1, 0, "DigitizerIndex" },
	{ kIOHIDEventFieldDigitizerType, kEventFieldDataType_Integer, 1, 0, "DigitizerType" },
	{ kIOHIDEventFieldDigitizerIdentity, kEventFieldDataType_Integer, 1, 0, "DigitizerIdentity" },
	{ kIOHIDEventFieldDigitizerEventMask, kEventFieldDataType_Integer, 1, 0, "DigitizerEventMask" },
	{ kIOHIDEventFieldDigitizerChildEventMask, kEventFieldDataType_Integer, 1, 0, "DigitizerChildEventMask" },
	{ kIOHIDEventFieldDigitizerButtonMask, kEventFieldDataType_Integer, 1, 0, "DigitizerButtonMask" },
	{ kIOHIDEventFieldDigitizerPressure, kEventFieldDataType_IOFixed, 1, 0, "DigitizerPressure" },
	{ kIOHIDEventFieldDigitizerAuxiliaryPressure, kEventFieldDataType_IOFixed, 1, 0, "DigitizerAuxiliaryPressure" },
	{ kIOHIDEventFieldDigitizerTwist, kEventFieldDataType_IOFixed, 1, 0, "DigitizerTwist" },
	{ kIOHIDEventFieldDigitizerOrientationType, kEventFieldDataType_Integer, 1, 1, "DigitizerOrientationType" },
	{ kIOHIDEventFieldDigitizerGenerationCount, kEventFieldDataType_Integer, 1, 0, "DigitizerGenerationCount" },
	{ kIOHIDEventFieldDigitizerWillUpdateMask, kEventFieldDataType_Integer, 1, 0, "DigitizerWillUpdateMask" },
	{ kIOHIDEventFieldDigitizerDidUpdateMask, kEventFieldDataType_Integer, 1, 0, "DigitizerDidUpdateMask" },
	{ kIOHIDEventFieldDigitizerAltitude, kEventFieldDataType_IOFixed, 1, 0,  "DigitizerAltitude" },
	{ kIOHIDEventFieldDigitizerAzimuth, kEventFieldDataType_IOFixed, 1, 0,  "DigitizerAzimuth" },
	{ kIOHIDEventFieldDigitizerQuality, kEventFieldDataType_IOFixed, 1, 0,  "DigitizerQuality" },
	{ kIOHIDEventFieldDigitizerDensity, kEventFieldDataType_IOFixed, 1, 0,  "DigitizerDensity" },
	{ kIOHIDEventFieldDigitizerMajorRadius, kEventFieldDataType_IOFixed, 1, 0,  "DigitizerMajorRadius" },
	{ kIOHIDEventFieldDigitizerMinorRadius, kEventFieldDataType_IOFixed, 1, 0,  "DigitizerMinorRadius" },
	{ 0, kEventFieldDataType_None, 0, 0, NULL }
};

static HIDEventFieldInfo DigitizerkIOHIDEventFieldDigitizerOrientationTypekIOHIDDigitizerOrientationTypeQualityEventField[] = {
	{ kIOHIDEventFieldDigitizerCollection, kEventFieldDataType_Integer, 1, 0, "DigitizerCollection" },
	{ kIOHIDEventFieldDigitizerRange, kEventFieldDataType_Integer, 1, 0, "DigitizerRange" },
	{ kIOHIDEventFieldDigitizerTouch, kEventFieldDataType_Integer, 1, 0, "DigitizerTouch" },
	{ kIOHIDEventFieldDigitizerIsDisplayIntegrated, kEventFieldDataType_Integer, 1, 0, "DigitizerIsDisplayIntegrated" },
	{ kIOHIDEventFieldDigitizerX, kEventFieldDataType_IOFixed, 1, 0, "DigitizerX" },
	{ kIOHIDEventFieldDigitizerY, kEventFieldDataType_IOFixed, 1, 0, "DigitizerY" },
	{ kIOHIDEventFieldDigitizerZ, kEventFieldDataType_IOFixed, 1, 0, "DigitizerZ" },
	{ kIOHIDEventFieldDigitizerIndex, kEventFieldDataType_Integer, 1, 0, "DigitizerIndex" },
	{ kIOHIDEventFieldDigitizerType, kEventFieldDataType_Integer, 1, 0, "DigitizerType" },
	{ kIOHIDEventFieldDigitizerIdentity, kEventFieldDataType_Integer, 1, 0, "DigitizerIdentity" },
	{ kIOHIDEventFieldDigitizerEventMask, kEventFieldDataType_Integer, 1, 0, "DigitizerEventMask" },
	{ kIOHIDEventFieldDigitizerChildEventMask, kEventFieldDataType_Integer, 1, 0, "DigitizerChildEventMask" },
	{ kIOHIDEventFieldDigitizerButtonMask, kEventFieldDataType_Integer, 1, 0, "DigitizerButtonMask" },
	{ kIOHIDEventFieldDigitizerPressure, kEventFieldDataType_IOFixed, 1, 0, "DigitizerPressure" },
	{ kIOHIDEventFieldDigitizerAuxiliaryPressure, kEventFieldDataType_IOFixed, 1, 0, "DigitizerAuxiliaryPressure" },
	{ kIOHIDEventFieldDigitizerTwist, kEventFieldDataType_IOFixed, 1, 0, "DigitizerTwist" },
	{ kIOHIDEventFieldDigitizerOrientationType, kEventFieldDataType_Integer, 1, 1, "DigitizerOrientationType" },
	{ kIOHIDEventFieldDigitizerGenerationCount, kEventFieldDataType_Integer, 1, 0, "DigitizerGenerationCount" },
	{ kIOHIDEventFieldDigitizerWillUpdateMask, kEventFieldDataType_Integer, 1, 0, "DigitizerWillUpdateMask" },
	{ kIOHIDEventFieldDigitizerDidUpdateMask, kEventFieldDataType_Integer, 1, 0, "DigitizerDidUpdateMask" },
	{ kIOHIDEventFieldDigitizerQuality, kEventFieldDataType_IOFixed, 1, 0,  "DigitizerQuality" },
	{ kIOHIDEventFieldDigitizerDensity, kEventFieldDataType_IOFixed, 1, 0,  "DigitizerDensity" },
	{ kIOHIDEventFieldDigitizerIrregularity, kEventFieldDataType_IOFixed, 1, 0,  "DigitizerIrregularity" },
	{ kIOHIDEventFieldDigitizerMajorRadius, kEventFieldDataType_IOFixed, 1, 0,  "DigitizerMajorRadius" },
	{ kIOHIDEventFieldDigitizerMinorRadius, kEventFieldDataType_IOFixed, 1, 0,  "DigitizerMinorRadius" },
	{ kIOHIDEventFieldDigitizerQualityRadiiAccuracy, kEventFieldDataType_IOFixed, 1, 0,  "DigitizerQualityRadiiAccuracy" },
	{ 0, kEventFieldDataType_None, 0, 0, NULL }
};

static HIDEventFieldInfo DigitizerkIOHIDEventFieldDigitizerOrientationTypekIOHIDDigitizerOrientationTypeTiltEventField[] = {
	{ kIOHIDEventFieldDigitizerCollection, kEventFieldDataType_Integer, 1, 0, "DigitizerCollection" },
	{ kIOHIDEventFieldDigitizerRange, kEventFieldDataType_Integer, 1, 0, "DigitizerRange" },
	{ kIOHIDEventFieldDigitizerTouch, kEventFieldDataType_Integer, 1, 0, "DigitizerTouch" },
	{ kIOHIDEventFieldDigitizerIsDisplayIntegrated, kEventFieldDataType_Integer, 1, 0, "DigitizerIsDisplayIntegrated" },
	{ kIOHIDEventFieldDigitizerX, kEventFieldDataType_IOFixed, 1, 0, "DigitizerX" },
	{ kIOHIDEventFieldDigitizerY, kEventFieldDataType_IOFixed, 1, 0, "DigitizerY" },
	{ kIOHIDEventFieldDigitizerZ, kEventFieldDataType_IOFixed, 1, 0, "DigitizerZ" },
	{ kIOHIDEventFieldDigitizerIndex, kEventFieldDataType_Integer, 1, 0, "DigitizerIndex" },
	{ kIOHIDEventFieldDigitizerType, kEventFieldDataType_Integer, 1, 0, "DigitizerType" },
	{ kIOHIDEventFieldDigitizerIdentity, kEventFieldDataType_Integer, 1, 0, "DigitizerIdentity" },
	{ kIOHIDEventFieldDigitizerEventMask, kEventFieldDataType_Integer, 1, 0, "DigitizerEventMask" },
	{ kIOHIDEventFieldDigitizerChildEventMask, kEventFieldDataType_Integer, 1, 0, "DigitizerChildEventMask" },
	{ kIOHIDEventFieldDigitizerButtonMask, kEventFieldDataType_Integer, 1, 0, "DigitizerButtonMask" },
	{ kIOHIDEventFieldDigitizerPressure, kEventFieldDataType_IOFixed, 1, 0, "DigitizerPressure" },
	{ kIOHIDEventFieldDigitizerAuxiliaryPressure, kEventFieldDataType_IOFixed, 1, 0, "DigitizerAuxiliaryPressure" },
	{ kIOHIDEventFieldDigitizerTwist, kEventFieldDataType_IOFixed, 1, 0, "DigitizerTwist" },
	{ kIOHIDEventFieldDigitizerOrientationType, kEventFieldDataType_Integer, 1, 1, "DigitizerOrientationType" },
	{ kIOHIDEventFieldDigitizerGenerationCount, kEventFieldDataType_Integer, 1, 0, "DigitizerGenerationCount" },
	{ kIOHIDEventFieldDigitizerWillUpdateMask, kEventFieldDataType_Integer, 1, 0, "DigitizerWillUpdateMask" },
	{ kIOHIDEventFieldDigitizerDidUpdateMask, kEventFieldDataType_Integer, 1, 0, "DigitizerDidUpdateMask" },
	{ kIOHIDEventFieldDigitizerTiltX, kEventFieldDataType_IOFixed, 1, 0,  "DigitizerTiltX" },
	{ kIOHIDEventFieldDigitizerTiltY, kEventFieldDataType_IOFixed, 1, 0,  "DigitizerTiltY" },
	{ 0, kEventFieldDataType_None, 0, 0, NULL }
};

static HIDEventFieldDescSelectorTable DigitizerkIOHIDEventFieldDigitizerOrientationTypeHIDEventFieldSelectorTable[] = {
	{ kIOHIDDigitizerOrientationTypePolar, DigitizerkIOHIDEventFieldDigitizerOrientationTypekIOHIDDigitizerOrientationTypePolarEventField },
	{ kIOHIDDigitizerOrientationTypeQuality, DigitizerkIOHIDEventFieldDigitizerOrientationTypekIOHIDDigitizerOrientationTypeQualityEventField },
	{ kIOHIDDigitizerOrientationTypeTilt, DigitizerkIOHIDEventFieldDigitizerOrientationTypekIOHIDDigitizerOrientationTypeTiltEventField },
	{ 0, NULL }
};

static HIDSelectorTable DigitizerHIDSelectorTable[] = {
	{ kIOHIDEventFieldDigitizerOrientationType, DigitizerkIOHIDEventFieldDigitizerOrientationTypeHIDEventFieldSelectorTable },
	{ 0, NULL }
};

static HIDEventFieldInfo OrientationkIOHIDEventFieldOrientationOrientationTypekIOHIDOrientationTypeTiltEventField[] = {
	{ kIOHIDEventFieldOrientationOrientationType, kEventFieldDataType_Integer, 0, 1, "OrientationOrientationType" },
	{ kIOHIDEventFieldOrientationTiltX, kEventFieldDataType_IOFixed, 1, 0,  "OrientationTiltX" },
	{ kIOHIDEventFieldOrientationTiltY, kEventFieldDataType_IOFixed, 1, 0,  "OrientationTiltY" },
	{ kIOHIDEventFieldOrientationTiltZ, kEventFieldDataType_IOFixed, 1, 0,  "OrientationTiltZ" },
	{ 0, kEventFieldDataType_None, 0, 0, NULL }
};

static HIDEventFieldInfo OrientationkIOHIDEventFieldOrientationOrientationTypekIOHIDOrientationTypeCMUsageEventField[] = {
	{ kIOHIDEventFieldOrientationOrientationType, kEventFieldDataType_Integer, 0, 1, "OrientationOrientationType" },
	{ kIOHIDEventFieldOrientationDeviceOrientationUsage, kEventFieldDataType_Integer, 1, 0,  "OrientationDeviceOrientationUsage" },
	{ 0, kEventFieldDataType_None, 0, 0, NULL }
};

static HIDEventFieldInfo OrientationkIOHIDEventFieldOrientationOrientationTypekIOHIDOrientationTypePolarEventField[] = {
	{ kIOHIDEventFieldOrientationOrientationType, kEventFieldDataType_Integer, 0, 1, "OrientationOrientationType" },
	{ kIOHIDEventFieldOrientationRadius, kEventFieldDataType_IOFixed, 1, 0,  "OrientationRadius" },
	{ kIOHIDEventFieldOrientationAzimuth, kEventFieldDataType_IOFixed, 1, 0,  "OrientationAzimuth" },
	{ kIOHIDEventFieldOrientationAltitude, kEventFieldDataType_IOFixed, 1, 0,  "OrientationAltitude" },
	{ 0, kEventFieldDataType_None, 0, 0, NULL }
};

static HIDEventFieldInfo OrientationkIOHIDEventFieldOrientationOrientationTypekIOHIDOrientationTypeQuaternionEventField[] = {
	{ kIOHIDEventFieldOrientationOrientationType, kEventFieldDataType_Integer, 0, 1, "OrientationOrientationType" },
	{ kIOHIDEventFieldOrientationQuatW, kEventFieldDataType_IOFixed, 1, 0,  "OrientationQuatW" },
	{ kIOHIDEventFieldOrientationQuatX, kEventFieldDataType_IOFixed, 1, 0,  "OrientationQuatX" },
	{ kIOHIDEventFieldOrientationQuatY, kEventFieldDataType_IOFixed, 1, 0,  "OrientationQuatY" },
	{ kIOHIDEventFieldOrientationQuatZ, kEventFieldDataType_IOFixed, 1, 0,  "OrientationQuatZ" },
	{ 0, kEventFieldDataType_None, 0, 0, NULL }
};

static HIDEventFieldDescSelectorTable OrientationkIOHIDEventFieldOrientationOrientationTypeHIDEventFieldSelectorTable[] = {
	{ kIOHIDOrientationTypeTilt, OrientationkIOHIDEventFieldOrientationOrientationTypekIOHIDOrientationTypeTiltEventField },
	{ kIOHIDOrientationTypeCMUsage, OrientationkIOHIDEventFieldOrientationOrientationTypekIOHIDOrientationTypeCMUsageEventField },
	{ kIOHIDOrientationTypePolar, OrientationkIOHIDEventFieldOrientationOrientationTypekIOHIDOrientationTypePolarEventField },
	{ kIOHIDOrientationTypeQuaternion, OrientationkIOHIDEventFieldOrientationOrientationTypekIOHIDOrientationTypeQuaternionEventField },
	{ 0, NULL }
};

static HIDSelectorTable OrientationHIDSelectorTable[] = {
	{ kIOHIDEventFieldOrientationOrientationType, OrientationkIOHIDEventFieldOrientationOrientationTypeHIDEventFieldSelectorTable },
	{ 0, NULL }
};


static HIDEventFieldInfo VendorDefinedEventFields[] = {
	{ kIOHIDEventFieldVendorDefinedUsagePage, kEventFieldDataType_Integer, 1, 0, "VendorDefinedUsagePage" },
	{ kIOHIDEventFieldVendorDefinedUsage, kEventFieldDataType_Integer, 1, 0, "VendorDefinedUsage" },
	{ kIOHIDEventFieldVendorDefinedVersion, kEventFieldDataType_Integer, 1, 0, "VendorDefinedVersion" },
	{ kIOHIDEventFieldVendorDefinedDataLength, kEventFieldDataType_Integer, 1, 1, "VendorDefinedDataLength" },
	{ kIOHIDEventFieldVendorDefinedData, kEventFieldDataType_Integer, 1, 1, "VendorDefinedData" },
	{ 0, kEventFieldDataType_None,  0, 0, NULL }
};


static HIDEventFieldInfo ScaleEventFields[] = {
	{ kIOHIDEventFieldScaleX, kEventFieldDataType_IOFixed, 1, 0, "ScaleX" },
	{ kIOHIDEventFieldScaleY, kEventFieldDataType_IOFixed, 1, 0, "ScaleY" },
	{ kIOHIDEventFieldScaleZ, kEventFieldDataType_IOFixed, 1, 0, "ScaleZ" },
	{ 0, kEventFieldDataType_None,  0, 0, NULL }
};


static HIDEventFieldInfo SymbolicHotKeyEventFields[] = {
	{ kIOHIDEventFieldSymbolicHotKeyIsCGSEvent, kEventFieldDataType_Integer, 1, 0, "SymbolicHotKeyIsCGSEvent" },
	{ kIOHIDEventFieldSymbolicHotKeyValue, kEventFieldDataType_Integer, 1, 0, "SymbolicHotKeyValue" },
	{ 0, kEventFieldDataType_None,  0, 0, NULL }
};


static HIDEventFieldInfo TemperatureEventFields[] = {
	{ kIOHIDEventFieldTemperatureLevel, kEventFieldDataType_IOFixed, 1, 0, "TemperatureLevel" },
	{ 0, kEventFieldDataType_None,  0, 0, NULL }
};


static HIDEventFieldInfo AccelerometerEventFields[] = {
	{ kIOHIDEventFieldAccelerometerX, kEventFieldDataType_IOFixed, 1, 0, "AccelerometerX" },
	{ kIOHIDEventFieldAccelerometerY, kEventFieldDataType_IOFixed, 1, 0, "AccelerometerY" },
	{ kIOHIDEventFieldAccelerometerZ, kEventFieldDataType_IOFixed, 1, 0, "AccelerometerZ" },
	{ kIOHIDEventFieldAccelerometerType, kEventFieldDataType_Integer, 1, 0, "AccelerometerType" },
	{ kIOHIDEventFieldAccelerometerSubType, kEventFieldDataType_Integer, 1, 0, "AccelerometerSubType" },
	{ kIOHIDEventFieldAccelerometerSequence, kEventFieldDataType_Integer, 1, 0, "AccelerometerSequence" },
	{ 0, kEventFieldDataType_None,  0, 0, NULL }
};


static HIDEventFieldInfo ProgressEventFields[] = {
	{ kIOHIDEventFieldProgressEventType, kEventFieldDataType_Integer, 1, 0, "ProgressEventType" },
	{ kIOHIDEventFieldProgressLevel, kEventFieldDataType_IOFixed, 1, 0, "ProgressLevel" },
	{ 0, kEventFieldDataType_None,  0, 0, NULL }
};


static HIDEventFieldInfo NULLEventFields[] = {
	{ kIOHIDEventFieldIsRelative, kEventFieldDataType_Integer, 1, 0, "IsRelative" },
	{ kIOHIDEventFieldIsCollection, kEventFieldDataType_Integer, 1, 0, "IsCollection" },
	{ kIOHIDEventFieldIsPixelUnits, kEventFieldDataType_Integer, 1, 0, "IsPixelUnits" },
	{ kIOHIDEventFieldIsCenterOrigin, kEventFieldDataType_Integer, 1, 0, "IsCenterOrigin" },
	{ kIOHIDEventFieldIsBuiltIn, kEventFieldDataType_Integer, 1, 0, "IsBuiltIn" },
	{ kIOHIDEventFieldInterpolated, kEventFieldDataType_Integer, 1, 0, "Interpolated" },
	{ kIOHIDEventFieldInjected, kEventFieldDataType_Integer, 1, 0, "Injected" },
	{ 0, kEventFieldDataType_None,  0, 0, NULL }
};


static HIDEventFieldInfo AmbientLightSensorEventFields[] = {
	{ kIOHIDEventFieldAmbientLightSensorLevel, kEventFieldDataType_Integer, 1, 0, "AmbientLightSensorLevel" },
	{ kIOHIDEventFieldAmbientLightSensorRawChannel0, kEventFieldDataType_Integer, 1, 0, "AmbientLightSensorRawChannel0" },
	{ kIOHIDEventFieldAmbientLightSensorRawChannel1, kEventFieldDataType_Integer, 1, 0, "AmbientLightSensorRawChannel1" },
	{ kIOHIDEventFieldAmbientLightSensorRawChannel2, kEventFieldDataType_Integer, 1, 0, "AmbientLightSensorRawChannel2" },
	{ kIOHIDEventFieldAmbientLightSensorRawChannel3, kEventFieldDataType_Integer, 1, 0, "AmbientLightSensorRawChannel3" },
	{ kIOHIDEventFieldAmbientLightDisplayBrightnessChanged, kEventFieldDataType_Integer, 1, 0, "AmbientLightDisplayBrightnessChanged" },
	{ kIOHIDEventFieldAmbientLightColorSpace, kEventFieldDataType_Integer, 1, 0, "AmbientLightColorSpace" },
	{ kIOHIDEventFieldAmbientLightColorComponent0, kEventFieldDataType_Double, 1, 0, "AmbientLightColorComponent0" },
	{ kIOHIDEventFieldAmbientLightColorComponent1, kEventFieldDataType_Double, 1, 0, "AmbientLightColorComponent1" },
	{ kIOHIDEventFieldAmbientLightColorComponent2, kEventFieldDataType_Double, 1, 0, "AmbientLightColorComponent2" },
	{ kIOHIDEventFieldAmbientLightSensorColorTemperature, kEventFieldDataType_Double, 0, 0, "AmbientLightSensorColorTemperature" },
	{ kIOHIDEventFieldAmbientLightSensorIlluminance, kEventFieldDataType_Double, 0, 0, "AmbientLightSensorIlluminance" },
	{ 0, kEventFieldDataType_None,  0, 0, NULL }
};


static HIDEventFieldInfo PowerEventFields[] = {
	{ kIOHIDEventFieldPowerMeasurement, kEventFieldDataType_IOFixed, 1, 0, "PowerMeasurement" },
	{ kIOHIDEventFieldPowerType, kEventFieldDataType_Integer, 1, 0, "PowerType" },
	{ kIOHIDEventFieldPowerSubType, kEventFieldDataType_Integer, 1, 0, "PowerSubType" },
	{ 0, kEventFieldDataType_None,  0, 0, NULL }
};


static HIDEventFieldInfo ForceEventFields[] = {
	{ kIOHIDEventFieldForceBehavior, kEventFieldDataType_Integer, 1, 0, "ForceBehavior" },
	{ kIOHIDEventFieldForceProgress, kEventFieldDataType_IOFixed, 1, 0, "ForceProgress" },
	{ kIOHIDEventFieldForceStage, kEventFieldDataType_Integer, 1, 0, "ForceStage" },
	{ kIOHIDEventFieldForceStagePressure, kEventFieldDataType_IOFixed, 1, 0, "ForceStagePressure" },
	{ 0, kEventFieldDataType_None,  0, 0, NULL }
};


static HIDEventFieldInfo MotionGestureEventFields[] = {
	{ kIOHIDEventFieldMotionGestureGestureType, kEventFieldDataType_Integer, 1, 0, "MotionGestureGestureType" },
	{ kIOHIDEventFieldMotionGestureProgress, kEventFieldDataType_IOFixed, 1, 0, "MotionGestureProgress" },
	{ 0, kEventFieldDataType_None,  0, 0, NULL }
};


static HIDEventFieldInfo GameControllerEventFields[] = {
	{ kIOHIDEventFieldGameControllerType, kEventFieldDataType_Integer, 1, 0, "GameControllerType" },
	{ kIOHIDEventFieldGameControllerDirectionPadUp, kEventFieldDataType_IOFixed, 1, 0, "GameControllerDirectionPadUp" },
	{ kIOHIDEventFieldGameControllerDirectionPadDown, kEventFieldDataType_IOFixed, 1, 0, "GameControllerDirectionPadDown" },
	{ kIOHIDEventFieldGameControllerDirectionPadLeft, kEventFieldDataType_IOFixed, 1, 0, "GameControllerDirectionPadLeft" },
	{ kIOHIDEventFieldGameControllerDirectionPadRight, kEventFieldDataType_IOFixed, 1, 0, "GameControllerDirectionPadRight" },
	{ kIOHIDEventFieldGameControllerFaceButtonX, kEventFieldDataType_IOFixed, 1, 0, "GameControllerFaceButtonX" },
	{ kIOHIDEventFieldGameControllerFaceButtonY, kEventFieldDataType_IOFixed, 1, 0, "GameControllerFaceButtonY" },
	{ kIOHIDEventFieldGameControllerFaceButtonA, kEventFieldDataType_IOFixed, 1, 0, "GameControllerFaceButtonA" },
	{ kIOHIDEventFieldGameControllerFaceButtonB, kEventFieldDataType_IOFixed, 1, 0, "GameControllerFaceButtonB" },
	{ kIOHIDEventFieldGameControllerJoyStickAxisX, kEventFieldDataType_IOFixed, 1, 0, "GameControllerJoyStickAxisX" },
	{ kIOHIDEventFieldGameControllerJoyStickAxisY, kEventFieldDataType_IOFixed, 1, 0, "GameControllerJoyStickAxisY" },
	{ kIOHIDEventFieldGameControllerJoyStickAxisZ, kEventFieldDataType_IOFixed, 1, 0, "GameControllerJoyStickAxisZ" },
	{ kIOHIDEventFieldGameControllerJoyStickAxisRz, kEventFieldDataType_IOFixed, 1, 0, "GameControllerJoyStickAxisRz" },
	{ kIOHIDEventFieldGameControllerShoulderButtonL1, kEventFieldDataType_IOFixed, 1, 0, "GameControllerShoulderButtonL1" },
	{ kIOHIDEventFieldGameControllerShoulderButtonL2, kEventFieldDataType_IOFixed, 1, 0, "GameControllerShoulderButtonL2" },
	{ kIOHIDEventFieldGameControllerShoulderButtonR1, kEventFieldDataType_IOFixed, 1, 0, "GameControllerShoulderButtonR1" },
	{ kIOHIDEventFieldGameControllerShoulderButtonR2, kEventFieldDataType_IOFixed, 1, 0, "GameControllerShoulderButtonR2" },
	{ kIOHIDEventFieldGameControllerThumbstickButtonLeft, kEventFieldDataType_Integer, 0, 0, "GameControllerThumbstickButtonLeft" },
	{ kIOHIDEventFieldGameControllerThumbstickButtonRight, kEventFieldDataType_Integer, 0, 0, "GameControllerThumbstickButtonRight" },
	{ 0, kEventFieldDataType_None,  0, 0, NULL }
};


static HIDEventFieldInfo TranslationEventFields[] = {
	{ kIOHIDEventFieldTranslationX, kEventFieldDataType_IOFixed, 1, 0, "TranslationX" },
	{ kIOHIDEventFieldTranslationY, kEventFieldDataType_IOFixed, 1, 0, "TranslationY" },
	{ kIOHIDEventFieldTranslationZ, kEventFieldDataType_IOFixed, 1, 0, "TranslationZ" },
	{ 0, kEventFieldDataType_None,  0, 0, NULL }
};


static HIDEventFieldInfo CompassEventFields[] = {
	{ kIOHIDEventFieldCompassX, kEventFieldDataType_IOFixed, 1, 0, "CompassX" },
	{ kIOHIDEventFieldCompassY, kEventFieldDataType_IOFixed, 1, 0, "CompassY" },
	{ kIOHIDEventFieldCompassZ, kEventFieldDataType_IOFixed, 1, 0, "CompassZ" },
	{ kIOHIDEventFieldCompassType, kEventFieldDataType_Integer, 1, 0, "CompassType" },
	{ kIOHIDEventFieldCompassSubType, kEventFieldDataType_Integer, 1, 0, "CompassSubType" },
	{ kIOHIDEventFieldCompassSequence, kEventFieldDataType_Integer, 1, 0, "CompassSequence" },
	{ 0, kEventFieldDataType_None,  0, 0, NULL }
};


static HIDEventFieldInfo RotationEventFields[] = {
	{ kIOHIDEventFieldRotationX, kEventFieldDataType_IOFixed, 1, 0, "RotationX" },
	{ kIOHIDEventFieldRotationY, kEventFieldDataType_IOFixed, 1, 0, "RotationY" },
	{ kIOHIDEventFieldRotationZ, kEventFieldDataType_IOFixed, 1, 0, "RotationZ" },
	{ 0, kEventFieldDataType_None,  0, 0, NULL }
};


static HIDEventFieldInfo MotionActivityEventFields[] = {
	{ kIOHIDEventFieldMotionActivityActivityType, kEventFieldDataType_Integer, 1, 0, "MotionActivityActivityType" },
	{ kIOHIDEventFieldMotionActivityConfidence, kEventFieldDataType_IOFixed, 1, 0, "MotionActivityConfidence" },
	{ 0, kEventFieldDataType_None,  0, 0, NULL }
};


static HIDEventFieldInfo MultiAxisPointerEventFields[] = {
	{ kIOHIDEventFieldMultiAxisPointerX, kEventFieldDataType_IOFixed, 1, 0, "MultiAxisPointerX" },
	{ kIOHIDEventFieldMultiAxisPointerY, kEventFieldDataType_IOFixed, 1, 0, "MultiAxisPointerY" },
	{ kIOHIDEventFieldMultiAxisPointerZ, kEventFieldDataType_IOFixed, 1, 0, "MultiAxisPointerZ" },
	{ kIOHIDEventFieldMultiAxisPointerButtonMask, kEventFieldDataType_Integer, 1, 0, "MultiAxisPointerButtonMask" },
	{ kIOHIDEventFieldMultiAxisPointerRx, kEventFieldDataType_IOFixed, 1, 0, "MultiAxisPointerRx" },
	{ kIOHIDEventFieldMultiAxisPointerRy, kEventFieldDataType_IOFixed, 1, 0, "MultiAxisPointerRy" },
	{ kIOHIDEventFieldMultiAxisPointerRz, kEventFieldDataType_IOFixed, 1, 0, "MultiAxisPointerRz" },
	{ 0, kEventFieldDataType_None,  0, 0, NULL }
};


static HIDEventFieldInfo BrightnessEventFields[] = {
	{ kIOHIDEventFieldCurrentBrightness, kEventFieldDataType_IOFixed, 1, 0, "CurrentBrightness" },
	{ kIOHIDEventFieldTargetBrightness, kEventFieldDataType_IOFixed, 1, 0, "TargetBrightness" },
	{ kIOHIDEventFieldTransitionTime, kEventFieldDataType_Integer, 1, 0, "TransitionTime" },
	{ 0, kEventFieldDataType_None,  0, 0, NULL }
};


static HIDEventFieldInfo GyroEventFields[] = {
	{ kIOHIDEventFieldGyroX, kEventFieldDataType_IOFixed, 1, 0, "GyroX" },
	{ kIOHIDEventFieldGyroY, kEventFieldDataType_IOFixed, 1, 0, "GyroY" },
	{ kIOHIDEventFieldGyroZ, kEventFieldDataType_IOFixed, 1, 0, "GyroZ" },
	{ kIOHIDEventFieldGyroType, kEventFieldDataType_Integer, 1, 0, "GyroType" },
	{ kIOHIDEventFieldGyroSubType, kEventFieldDataType_Integer, 1, 0, "GyroSubType" },
	{ kIOHIDEventFieldGyroSequence, kEventFieldDataType_Integer, 1, 0, "GyroSequence" },
	{ 0, kEventFieldDataType_None,  0, 0, NULL }
};


static HIDEventFieldInfo ButtonEventFields[] = {
	{ kIOHIDEventFieldButtonMask, kEventFieldDataType_Integer, 1, 0, "ButtonMask" },
	{ kIOHIDEventFieldButtonPressure, kEventFieldDataType_IOFixed, 1, 0, "ButtonPressure" },
	{ kIOHIDEventFieldButtonNumber, kEventFieldDataType_Integer, 1, 0, "ButtonNumber" },
	{ kIOHIDEventFieldButtonClickCount, kEventFieldDataType_Integer, 1, 0, "ButtonClickCount" },
	{ kIOHIDEventFieldButtonState, kEventFieldDataType_Integer, 1, 0, "ButtonState" },
	{ 0, kEventFieldDataType_None,  0, 0, NULL }
};


static HIDEventFieldInfo NavigationSwipeEventFields[] = {
	{ kIOHIDEventFieldNavigationSwipePositionX, kEventFieldDataType_IOFixed, 1, 0, "NavigationSwipePositionX" },
	{ kIOHIDEventFieldNavigationSwipePositionY, kEventFieldDataType_IOFixed, 1, 0, "NavigationSwipePositionY" },
	{ kIOHIDEventFieldNavigationSwipePositionZ, kEventFieldDataType_IOFixed, 1, 0, "NavigationSwipePositionZ" },
	{ kIOHIDEventFieldNavigationSwipeMask, kEventFieldDataType_Integer, 1, 0, "NavigationSwipeMask" },
	{ kIOHIDEventFieldNavigationSwipeMotion, kEventFieldDataType_Integer, 1, 0, "NavigationSwipeMotion" },
	{ kIOHIDEventFieldNavigationSwipeFlavor, kEventFieldDataType_Integer, 1, 0, "NavigationSwipeFlavor" },
	{ kIOHIDEventFieldNavigationSwipeProgress, kEventFieldDataType_IOFixed, 1, 0, "NavigationSwipeProgress" },
	{ 0, kEventFieldDataType_None,  0, 0, NULL }
};


static HIDEventFieldInfo AtmosphericPressureEventFields[] = {
	{ kIOHIDEventFieldAtmosphericPressureLevel, kEventFieldDataType_IOFixed, 1, 0, "AtmosphericPressureLevel" },
	{ kIOHIDEventFieldAtmosphericSequence, kEventFieldDataType_Integer, 1, 0, "AtmosphericSequence" },
	{ 0, kEventFieldDataType_None,  0, 0, NULL }
};


static HIDEventFieldInfo HumidityEventFields[] = {
	{ kIOHIDEventFieldHumidityRH, kEventFieldDataType_IOFixed, 1, 0, "HumidityRH" },
	{ kIOHIDEventFieldHumiditySequence, kEventFieldDataType_Integer, 1, 0, "HumiditySequence" },
	{ 0, kEventFieldDataType_None,  0, 0, NULL }
};


static HIDEventFieldInfo VelocityEventFields[] = {
	{ kIOHIDEventFieldVelocityX, kEventFieldDataType_IOFixed, 1, 0, "VelocityX" },
	{ kIOHIDEventFieldVelocityY, kEventFieldDataType_IOFixed, 1, 0, "VelocityY" },
	{ kIOHIDEventFieldVelocityZ, kEventFieldDataType_IOFixed, 1, 0, "VelocityZ" },
	{ 0, kEventFieldDataType_None,  0, 0, NULL }
};


static HIDEventFieldInfo ScrollEventFields[] = {
	{ kIOHIDEventFieldScrollIsPixels, kEventFieldDataType_Integer, 1, 0, "ScrollIsPixels" },
	{ kIOHIDEventFieldScrollX, kEventFieldDataType_IOFixed, 1, 0, "ScrollX" },
	{ kIOHIDEventFieldScrollY, kEventFieldDataType_IOFixed, 1, 0, "ScrollY" },
	{ kIOHIDEventFieldScrollZ, kEventFieldDataType_IOFixed, 1, 0, "ScrollZ" },
	{ 0, kEventFieldDataType_None,  0, 0, NULL }
};


static HIDEventFieldInfo BiometricEventFields[] = {
	{ kIOHIDEventFieldBiometricEventType, kEventFieldDataType_Integer, 1, 0, "BiometricEventType" },
	{ kIOHIDEventFieldBiometricLevel, kEventFieldDataType_IOFixed, 1, 0, "BiometricLevel" },
	{ kIOHIDEventFieldBiometricUsagePage, kEventFieldDataType_Integer, 1, 0, "BiometricUsagePage" },
	{ kIOHIDEventFieldBiometricUsage, kEventFieldDataType_Integer, 1, 0, "BiometricUsage" },
	{ kIOHIDEventFieldBiometricTapCount, kEventFieldDataType_Integer, 1, 0, "BiometricTapCount" },
	{ 0, kEventFieldDataType_None,  0, 0, NULL }
};


static HIDEventFieldInfo BoundaryScrollEventFields[] = {
	{ kIOHIDEventFieldBoundaryScrollPositionX, kEventFieldDataType_IOFixed, 1, 0, "BoundaryScrollPositionX" },
	{ kIOHIDEventFieldBoundaryScrollPositionY, kEventFieldDataType_IOFixed, 1, 0, "BoundaryScrollPositionY" },
	{ kIOHIDEventFieldBoundaryScrollMask, kEventFieldDataType_Integer, 1, 0, "BoundaryScrollMask" },
	{ kIOHIDEventFieldBoundaryScrollMotion, kEventFieldDataType_Integer, 1, 0, "BoundaryScrollMotion" },
	{ kIOHIDEventFieldBoundaryScrollFlavor, kEventFieldDataType_Integer, 1, 0, "BoundaryScrollFlavor" },
	{ kIOHIDEventFieldBoundaryScrollProgress, kEventFieldDataType_IOFixed, 1, 0, "BoundaryScrollProgress" },
	{ 0, kEventFieldDataType_None,  0, 0, NULL }
};


static HIDEventFieldInfo LEDEventFields[] = {
	{ kIOHIDEventFieldLEDMask, kEventFieldDataType_Integer, 1, 0, "LEDMask" },
	{ kIOHIDEventFieldLEDNumber, kEventFieldDataType_Integer, 1, 0, "LEDNumber" },
	{ kIOHIDEventFieldLEDState, kEventFieldDataType_Integer, 1, 0, "LEDState" },
	{ 0, kEventFieldDataType_None,  0, 0, NULL }
};


static HIDEventFieldInfo ProximityEventFields[] = {
	{ kIOHIDEventFieldProximityDetectionMask, kEventFieldDataType_Integer, 1, 0, "ProximityDetectionMask" },
	{ kIOHIDEventFieldProximityLevel, kEventFieldDataType_Integer, 1, 0, "ProximityLevel" },
	{ 0, kEventFieldDataType_None,  0, 0, NULL }
};


static HIDEventFieldInfo FluidTouchGestureEventFields[] = {
	{ kIOHIDEventFieldFluidTouchGesturePositionX, kEventFieldDataType_IOFixed, 1, 0, "FluidTouchGesturePositionX" },
	{ kIOHIDEventFieldFluidTouchGesturePositionY, kEventFieldDataType_IOFixed, 1, 0, "FluidTouchGesturePositionY" },
	{ kIOHIDEventFieldFluidTouchGestureMask, kEventFieldDataType_Integer, 1, 0, "FluidTouchGestureMask" },
	{ kIOHIDEventFieldFluidTouchGestureMotion, kEventFieldDataType_Integer, 1, 0, "FluidTouchGestureMotion" },
	{ kIOHIDEventFieldFluidTouchGestureFlavor, kEventFieldDataType_Integer, 1, 0, "FluidTouchGestureFlavor" },
	{ kIOHIDEventFieldFluidTouchGestureProgress, kEventFieldDataType_IOFixed, 1, 0, "FluidTouchGestureProgress" },
	{ 0, kEventFieldDataType_None,  0, 0, NULL }
};


static HIDEventFieldInfo DockSwipeEventFields[] = {
	{ kIOHIDEventFieldDockSwipePositionX, kEventFieldDataType_IOFixed, 1, 0, "DockSwipePositionX" },
	{ kIOHIDEventFieldDockSwipePositionY, kEventFieldDataType_IOFixed, 1, 0, "DockSwipePositionY" },
	{ kIOHIDEventFieldDockSwipePositionZ, kEventFieldDataType_IOFixed, 1, 0, "DockSwipePositionZ" },
	{ kIOHIDEventFieldDockSwipeMask, kEventFieldDataType_Integer, 1, 0, "DockSwipeMask" },
	{ kIOHIDEventFieldDockSwipeMotion, kEventFieldDataType_Integer, 1, 0, "DockSwipeMotion" },
	{ kIOHIDEventFieldDockSwipeFlavor, kEventFieldDataType_Integer, 1, 0, "DockSwipeFlavor" },
	{ kIOHIDEventFieldDockSwipeProgress, kEventFieldDataType_IOFixed, 1, 0, "DockSwipeProgress" },
	{ 0, kEventFieldDataType_None,  0, 0, NULL }
};


static HIDEventFieldInfo UnicodeEventFields[] = {
	{ kIOHIDEventFieldUnicodeEncoding, kEventFieldDataType_Integer, 1, 0, "UnicodeEncoding" },
	{ kIOHIDEventFieldUnicodeQuality, kEventFieldDataType_IOFixed, 1, 0, "UnicodeQuality" },
	{ kIOHIDEventFieldUnicodeLength, kEventFieldDataType_Integer, 1, 0, "UnicodeLength" },
	{ kIOHIDEventFieldUnicodePayload, kEventFieldDataType_Integer, 1, 1, "UnicodePayload" },
	{ 0, kEventFieldDataType_None,  0, 0, NULL }
};


static HIDEventFieldInfo KeyboardEventFields[] = {
	{ kIOHIDEventFieldKeyboardRepeat, kEventFieldDataType_Integer, 1, 0, "KeyboardRepeat" },
	{ kIOHIDEventFieldKeyboardUsagePage, kEventFieldDataType_Integer, 1, 0, "KeyboardUsagePage" },
	{ kIOHIDEventFieldKeyboardUsage, kEventFieldDataType_Integer, 1, 0, "KeyboardUsage" },
	{ kIOHIDEventFieldKeyboardDown, kEventFieldDataType_Integer, 1, 0, "KeyboardDown" },
	{ kIOHIDEventFieldKeyboardLongPress, kEventFieldDataType_Integer, 1, 0, "KeyboardLongPress" },
	{ kIOHIDEventFieldKeyboardClickSpeed, kEventFieldDataType_Integer, 1, 0, "KeyboardClickSpeed" },
	{ kIOHIDEventFieldKeyboardSlowKeyPhase, kEventFieldDataType_Integer, 1, 0, "KeyboardSlowKeyPhase" },
	{ kIOHIDEventFieldKeyboardMouseKeyToggle, kEventFieldDataType_Integer, 1, 0, "KeyboardMouseKeyToggle" },
	{ kIOHIDEventFieldKeyboardStickyKeyPhase, kEventFieldDataType_Integer, 1, 0, "KeyboardStickyKeyPhase" },
	{ kIOHIDEventFieldKeyboardStickyKeyToggle, kEventFieldDataType_Integer, 1, 0, "KeyboardStickyKeyToggle" },
	{ kIOHIDEventFieldKeyboardPressCount, kEventFieldDataType_Integer, 1, 0, "KeyboardPressCount" },
	{ 0, kEventFieldDataType_None,  0, 0, NULL }
};


static HIDEventFieldInfo PointerEventFields[] = {
	{ kIOHIDEventFieldPointerX, kEventFieldDataType_IOFixed, 1, 0, "PointerX" },
	{ kIOHIDEventFieldPointerY, kEventFieldDataType_IOFixed, 1, 0, "PointerY" },
	{ kIOHIDEventFieldPointerZ, kEventFieldDataType_IOFixed, 1, 0, "PointerZ" },
	{ kIOHIDEventFieldPointerButtonMask, kEventFieldDataType_Integer, 1, 0, "PointerButtonMask" },
	{ 0, kEventFieldDataType_None,  0, 0, NULL }
};


static HIDEventFieldDescTableCollection hidEventFieldDescTable[] = {
	{ kIOHIDEventTypeVendorDefined, VendorDefinedEventFields, NULL },
	{ kIOHIDEventTypeScale, ScaleEventFields, NULL },
	{ kIOHIDEventTypeSymbolicHotKey, SymbolicHotKeyEventFields, NULL },
	{ kIOHIDEventTypeTemperature, TemperatureEventFields, NULL },
	{ kIOHIDEventTypeAccelerometer, AccelerometerEventFields, NULL },
	{ kIOHIDEventTypeProgress, ProgressEventFields, NULL },
	{ kIOHIDEventTypeGenericGesture, NULL, GenericGestureHIDSelectorTable },
	{ kIOHIDEventTypeNULL, NULLEventFields, NULL },
	{ kIOHIDEventTypeAmbientLightSensor, AmbientLightSensorEventFields, NULL },
	{ kIOHIDEventTypePower, PowerEventFields, NULL },
	{ kIOHIDEventTypeForce, ForceEventFields, NULL },
	{ kIOHIDEventTypeMotionGesture, MotionGestureEventFields, NULL },
	{ kIOHIDEventTypeGameController, GameControllerEventFields, NULL },
	{ kIOHIDEventTypeTranslation, TranslationEventFields, NULL },
	{ kIOHIDEventTypeDigitizer, NULL, DigitizerHIDSelectorTable },
	{ kIOHIDEventTypeCompass, CompassEventFields, NULL },
	{ kIOHIDEventTypeRotation, RotationEventFields, NULL },
	{ kIOHIDEventTypeMotionActivity, MotionActivityEventFields, NULL },
	{ kIOHIDEventTypeMultiAxisPointer, MultiAxisPointerEventFields, NULL },
	{ kIOHIDEventTypeBrightness, BrightnessEventFields, NULL },
	{ kIOHIDEventTypeGyro, GyroEventFields, NULL },
	{ kIOHIDEventTypeButton, ButtonEventFields, NULL },
	{ kIOHIDEventTypeNavigationSwipe, NavigationSwipeEventFields, NULL },
	{ kIOHIDEventTypeAtmosphericPressure, AtmosphericPressureEventFields, NULL },
	{ kIOHIDEventTypeHumidity, HumidityEventFields, NULL },
	{ kIOHIDEventTypeVelocity, VelocityEventFields, NULL },
	{ kIOHIDEventTypeScroll, ScrollEventFields, NULL },
	{ kIOHIDEventTypeBiometric, BiometricEventFields, NULL },
	{ kIOHIDEventTypeBoundaryScroll, BoundaryScrollEventFields, NULL },
	{ kIOHIDEventTypeLED, LEDEventFields, NULL },
	{ kIOHIDEventTypeOrientation, NULL, OrientationHIDSelectorTable },
	{ kIOHIDEventTypeProximity, ProximityEventFields, NULL },
	{ kIOHIDEventTypeFluidTouchGesture, FluidTouchGestureEventFields, NULL },
	{ kIOHIDEventTypeDockSwipe, DockSwipeEventFields, NULL },
	{ kIOHIDEventTypeUnicode, UnicodeEventFields, NULL },
	{ kIOHIDEventTypeKeyboard, KeyboardEventFields, NULL },
	{ kIOHIDEventTypePointer, PointerEventFields, NULL },
	{ kIOHIDEventTypeCount, NULL, NULL }
};

