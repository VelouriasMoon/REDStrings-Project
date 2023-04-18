// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIMPLECONTROLLER_ESimpleControllerForceFeedbackEffectConditionType_generated_h
#error "ESimpleControllerForceFeedbackEffectConditionType.generated.h already included, missing '#pragma once' in ESimpleControllerForceFeedbackEffectConditionType.h"
#endif
#define SIMPLECONTROLLER_ESimpleControllerForceFeedbackEffectConditionType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID REDStrings_Plugins_SimpleController_Source_SimpleController_Public_ESimpleControllerForceFeedbackEffectConditionType_h


#define FOREACH_ENUM_ESIMPLECONTROLLERFORCEFEEDBACKEFFECTCONDITIONTYPE(op) \
	op(ESimpleControllerForceFeedbackEffectConditionType::SPRING) \
	op(ESimpleControllerForceFeedbackEffectConditionType::DAMPER) \
	op(ESimpleControllerForceFeedbackEffectConditionType::INERTIA) \
	op(ESimpleControllerForceFeedbackEffectConditionType::FRICTION) 

enum class ESimpleControllerForceFeedbackEffectConditionType : uint8;
template<> SIMPLECONTROLLER_API UEnum* StaticEnum<ESimpleControllerForceFeedbackEffectConditionType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
