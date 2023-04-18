// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HORIZONUI_EHorizonDialogueSegmentType_generated_h
#error "EHorizonDialogueSegmentType.generated.h already included, missing '#pragma once' in EHorizonDialogueSegmentType.h"
#endif
#define HORIZONUI_EHorizonDialogueSegmentType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID REDStrings_Plugins_Marketplace_HorizonUIPlugin_Source_HorizonUIPlugin_Public_EHorizonDialogueSegmentType_h


#define FOREACH_ENUM_EHORIZONDIALOGUESEGMENTTYPE(op) \
	op(EHorizonDialogueSegmentType::Invalidated) \
	op(EHorizonDialogueSegmentType::Text) \
	op(EHorizonDialogueSegmentType::NewLine) \
	op(EHorizonDialogueSegmentType::Image) \
	op(EHorizonDialogueSegmentType::PaperFlipbook) \
	op(EHorizonDialogueSegmentType::Material) \
	op(EHorizonDialogueSegmentType::HyperText) \
	op(EHorizonDialogueSegmentType::Custom) 

enum class EHorizonDialogueSegmentType : uint8;
template<> HORIZONUI_API UEnum* StaticEnum<EHorizonDialogueSegmentType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
