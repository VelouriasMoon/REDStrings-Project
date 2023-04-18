// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HorizonUIPlugin/Public/HorizonDialogueSegmentInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHorizonDialogueSegmentInfo() {}
// Cross Module References
	HORIZONUI_API UScriptStruct* Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo();
	UPackage* Z_Construct_UPackage__Script_HorizonUI();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	HORIZONUI_API UClass* Z_Construct_UClass_UHorizonButton_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo();
// End Cross Module References
class UScriptStruct* FHorizonDialogueSegmentInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HORIZONUI_API uint32 Get_Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo, Z_Construct_UPackage__Script_HorizonUI(), TEXT("HorizonDialogueSegmentInfo"), sizeof(FHorizonDialogueSegmentInfo), Get_Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Hash());
	}
	return Singleton;
}
template<> HORIZONUI_API UScriptStruct* StaticStruct<FHorizonDialogueSegmentInfo>()
{
	return FHorizonDialogueSegmentInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHorizonDialogueSegmentInfo(FHorizonDialogueSegmentInfo::StaticStruct, TEXT("/Script/HorizonUI"), TEXT("HorizonDialogueSegmentInfo"), false, nullptr, nullptr);
static struct FScriptStruct_HorizonUI_StaticRegisterNativesFHorizonDialogueSegmentInfo
{
	FScriptStruct_HorizonUI_StaticRegisterNativesFHorizonDialogueSegmentInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("HorizonDialogueSegmentInfo")),new UScriptStruct::TCppStructOps<FHorizonDialogueSegmentInfo>);
	}
} ScriptStruct_HorizonUI_StaticRegisterNativesFHorizonDialogueSegmentInfo;
	struct Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventPayload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EventPayload;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogueSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DialogueSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogueSoundStartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DialogueSoundStartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogueSoundPitchMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DialogueSoundPitchMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogueSoundVolumeMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DialogueSoundVolumeMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackgroundButtonClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BackgroundButtonClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HypertextVisitedColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HypertextVisitedColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HypertextHoveredColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HypertextHoveredColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaddingMargin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PaddingMargin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogueMsgWait_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DialogueMsgWait;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogueMsgSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DialogueMsgSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadowColorAndOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShadowColorAndOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadowOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShadowOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Font_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Font;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorAndOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorAndOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_text_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_text;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HorizonDialogueSegmentInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHorizonDialogueSegmentInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::NewProp_EventPayload_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HorizonDialogueSegmentInfo" },
		{ "ModuleRelativePath", "Public/HorizonDialogueSegmentInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::NewProp_EventPayload = { "EventPayload", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHorizonDialogueSegmentInfo, EventPayload), METADATA_PARAMS(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::NewProp_EventPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::NewProp_EventPayload_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::NewProp_DialogueSound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HorizonDialogueSegmentInfo" },
		{ "ModuleRelativePath", "Public/HorizonDialogueSegmentInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::NewProp_DialogueSound = { "DialogueSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHorizonDialogueSegmentInfo, DialogueSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::NewProp_DialogueSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::NewProp_DialogueSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::NewProp_DialogueSoundStartTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HorizonDialogueSegmentInfo" },
		{ "ModuleRelativePath", "Public/HorizonDialogueSegmentInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::NewProp_DialogueSoundStartTime = { "DialogueSoundStartTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHorizonDialogueSegmentInfo, DialogueSoundStartTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::NewProp_DialogueSoundStartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::NewProp_DialogueSoundStartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::NewProp_DialogueSoundPitchMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HorizonDialogueSegmentInfo" },
		{ "ModuleRelativePath", "Public/HorizonDialogueSegmentInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::NewProp_DialogueSoundPitchMultiplier = { "DialogueSoundPitchMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHorizonDialogueSegmentInfo, DialogueSoundPitchMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::NewProp_DialogueSoundPitchMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::NewProp_DialogueSoundPitchMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::NewProp_DialogueSoundVolumeMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HorizonDialogueSegmentInfo" },
		{ "ModuleRelativePath", "Public/HorizonDialogueSegmentInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::NewProp_DialogueSoundVolumeMultiplier = { "DialogueSoundVolumeMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHorizonDialogueSegmentInfo, DialogueSoundVolumeMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::NewProp_DialogueSoundVolumeMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::NewProp_DialogueSoundVolumeMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::NewProp_BackgroundButtonClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HorizonDialogueSegmentInfo" },
		{ "ModuleRelativePath", "Public/HorizonDialogueSegmentInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::NewProp_BackgroundButtonClass = { "BackgroundButtonClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHorizonDialogueSegmentInfo, BackgroundButtonClass), Z_Construct_UClass_UHorizonButton_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::NewProp_BackgroundButtonClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::NewProp_BackgroundButtonClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::NewProp_HypertextVisitedColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HorizonDialogueSegmentInfo" },
		{ "ModuleRelativePath", "Public/HorizonDialogueSegmentInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::NewProp_HypertextVisitedColor = { "HypertextVisitedColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHorizonDialogueSegmentInfo, HypertextVisitedColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::NewProp_HypertextVisitedColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::NewProp_HypertextVisitedColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::NewProp_HypertextHoveredColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HorizonDialogueSegmentInfo" },
		{ "ModuleRelativePath", "Public/HorizonDialogueSegmentInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::NewProp_HypertextHoveredColor = { "HypertextHoveredColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHorizonDialogueSegmentInfo, HypertextHoveredColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::NewProp_HypertextHoveredColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::NewProp_HypertextHoveredColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::NewProp_PaddingMargin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HorizonDialogueSegmentInfo" },
		{ "ModuleRelativePath", "Public/HorizonDialogueSegmentInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::NewProp_PaddingMargin = { "PaddingMargin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHorizonDialogueSegmentInfo, PaddingMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::NewProp_PaddingMargin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::NewProp_PaddingMargin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::NewProp_DialogueMsgWait_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HorizonDialogueSegmentInfo" },
		{ "ModuleRelativePath", "Public/HorizonDialogueSegmentInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::NewProp_DialogueMsgWait = { "DialogueMsgWait", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHorizonDialogueSegmentInfo, DialogueMsgWait), METADATA_PARAMS(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::NewProp_DialogueMsgWait_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::NewProp_DialogueMsgWait_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::NewProp_DialogueMsgSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HorizonDialogueSegmentInfo" },
		{ "ModuleRelativePath", "Public/HorizonDialogueSegmentInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::NewProp_DialogueMsgSpeed = { "DialogueMsgSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHorizonDialogueSegmentInfo, DialogueMsgSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::NewProp_DialogueMsgSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::NewProp_DialogueMsgSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::NewProp_ShadowColorAndOpacity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HorizonDialogueSegmentInfo" },
		{ "ModuleRelativePath", "Public/HorizonDialogueSegmentInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::NewProp_ShadowColorAndOpacity = { "ShadowColorAndOpacity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHorizonDialogueSegmentInfo, ShadowColorAndOpacity), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::NewProp_ShadowColorAndOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::NewProp_ShadowColorAndOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::NewProp_ShadowOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HorizonDialogueSegmentInfo" },
		{ "ModuleRelativePath", "Public/HorizonDialogueSegmentInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::NewProp_ShadowOffset = { "ShadowOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHorizonDialogueSegmentInfo, ShadowOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::NewProp_ShadowOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::NewProp_ShadowOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::NewProp_Font_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HorizonDialogueSegmentInfo" },
		{ "ModuleRelativePath", "Public/HorizonDialogueSegmentInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::NewProp_Font = { "Font", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHorizonDialogueSegmentInfo, Font), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::NewProp_Font_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::NewProp_Font_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::NewProp_ColorAndOpacity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HorizonDialogueSegmentInfo" },
		{ "ModuleRelativePath", "Public/HorizonDialogueSegmentInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::NewProp_ColorAndOpacity = { "ColorAndOpacity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHorizonDialogueSegmentInfo, ColorAndOpacity), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::NewProp_ColorAndOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::NewProp_ColorAndOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::NewProp_text_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HorizonDialogueSegmentInfo" },
		{ "ModuleRelativePath", "Public/HorizonDialogueSegmentInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::NewProp_text = { "text", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHorizonDialogueSegmentInfo, text), METADATA_PARAMS(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::NewProp_text_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::NewProp_text_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::NewProp_EventPayload,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::NewProp_DialogueSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::NewProp_DialogueSoundStartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::NewProp_DialogueSoundPitchMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::NewProp_DialogueSoundVolumeMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::NewProp_BackgroundButtonClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::NewProp_HypertextVisitedColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::NewProp_HypertextHoveredColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::NewProp_PaddingMargin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::NewProp_DialogueMsgWait,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::NewProp_DialogueMsgSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::NewProp_ShadowColorAndOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::NewProp_ShadowOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::NewProp_Font,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::NewProp_ColorAndOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::NewProp_text,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HorizonUI,
		nullptr,
		&NewStructOps,
		"HorizonDialogueSegmentInfo",
		sizeof(FHorizonDialogueSegmentInfo),
		alignof(FHorizonDialogueSegmentInfo),
		Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HorizonUI();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HorizonDialogueSegmentInfo"), sizeof(FHorizonDialogueSegmentInfo), Get_Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Hash() { return 3297365180U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
