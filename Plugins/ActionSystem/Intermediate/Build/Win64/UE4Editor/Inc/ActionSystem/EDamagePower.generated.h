// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACTIONSYSTEM_EDamagePower_generated_h
#error "EDamagePower.generated.h already included, missing '#pragma once' in EDamagePower.h"
#endif
#define ACTIONSYSTEM_EDamagePower_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_EDamagePower_h


#define FOREACH_ENUM_EDAMAGEPOWER(op) \
	op(EDamagePower::Light) \
	op(EDamagePower::Middle) \
	op(EDamagePower::High) 

enum class EDamagePower : uint8;
template<> ACTIONSYSTEM_API UEnum* StaticEnum<EDamagePower>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
