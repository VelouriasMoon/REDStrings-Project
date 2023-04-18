// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HorizonUIPlugin/Public/HorizonDialogueSegmentInfoStyle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHorizonDialogueSegmentInfoStyle() {}
// Cross Module References
	HORIZONUI_API UScriptStruct* Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle();
	UPackage* Z_Construct_UPackage__Script_HorizonUI();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSprite_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	HORIZONUI_API UClass* Z_Construct_UClass_UHorizonButton_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo();
// End Cross Module References
class UScriptStruct* FHorizonDialogueSegmentInfoStyle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HORIZONUI_API uint32 Get_Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle, Z_Construct_UPackage__Script_HorizonUI(), TEXT("HorizonDialogueSegmentInfoStyle"), sizeof(FHorizonDialogueSegmentInfoStyle), Get_Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Hash());
	}
	return Singleton;
}
template<> HORIZONUI_API UScriptStruct* StaticStruct<FHorizonDialogueSegmentInfoStyle>()
{
	return FHorizonDialogueSegmentInfoStyle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHorizonDialogueSegmentInfoStyle(FHorizonDialogueSegmentInfoStyle::StaticStruct, TEXT("/Script/HorizonUI"), TEXT("HorizonDialogueSegmentInfoStyle"), false, nullptr, nullptr);
static struct FScriptStruct_HorizonUI_StaticRegisterNativesFHorizonDialogueSegmentInfoStyle
{
	FScriptStruct_HorizonUI_StaticRegisterNativesFHorizonDialogueSegmentInfoStyle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("HorizonDialogueSegmentInfoStyle")),new UScriptStruct::TCppStructOps<FHorizonDialogueSegmentInfoStyle>);
	}
} ScriptStruct_HorizonUI_StaticRegisterNativesFHorizonDialogueSegmentInfoStyle;
	struct Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImageSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ImageSize;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImageSize_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaperFlipbook_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_PaperFlipbook;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogueSoundStartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DialogueSoundStartTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DialogueSoundStartTime_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogueSoundPitchMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DialogueSoundPitchMultiplier;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DialogueSoundPitchMultiplier_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogueSoundVolumeMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DialogueSoundVolumeMultiplier;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DialogueSoundVolumeMultiplier_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogueSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_DialogueSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaperSprite_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_PaperSprite;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Material;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Texture2D_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Texture2D;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackgroundButtonClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BackgroundButtonClass;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BackgroundButtonClass_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HypertextVisitedColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HypertextVisitedColor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HypertextVisitedColor_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HypertextHoveredColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HypertextHoveredColor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HypertextHoveredColor_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HypertextReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HypertextReference;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HypertextReference_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaddingMargin_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PaddingMargin;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PaddingMargin_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogueMsgWait_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DialogueMsgWait;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DialogueMsgWait_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogueMsgSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DialogueMsgSpeed;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DialogueMsgSpeed_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadowColorAndOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ShadowColorAndOpacity;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShadowColorAndOpacity_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadowOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ShadowOffset;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShadowOffset_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TypefaceFontName_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TypefaceFontName;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TypefaceFontName_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FontSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FontSize;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FontSize_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Font_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Font;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Font_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorAndOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ColorAndOpacity;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorAndOpacity_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_text_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_text;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_text_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StyleName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StyleName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HorizonDialogueSegmentInfoStyle.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHorizonDialogueSegmentInfoStyle>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_ImageSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HorizonDialogueSegmentInfoStyle" },
		{ "ModuleRelativePath", "Public/HorizonDialogueSegmentInfoStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_ImageSize = { "ImageSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHorizonDialogueSegmentInfoStyle, ImageSize), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_ImageSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_ImageSize_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_ImageSize_Inner = { "ImageSize", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_PaperFlipbook_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HorizonDialogueSegmentInfoStyle" },
		{ "ModuleRelativePath", "Public/HorizonDialogueSegmentInfoStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_PaperFlipbook = { "PaperFlipbook", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHorizonDialogueSegmentInfoStyle, PaperFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_PaperFlipbook_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_PaperFlipbook_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_DialogueSoundStartTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HorizonDialogueSegmentInfoStyle" },
		{ "ModuleRelativePath", "Public/HorizonDialogueSegmentInfoStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_DialogueSoundStartTime = { "DialogueSoundStartTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHorizonDialogueSegmentInfoStyle, DialogueSoundStartTime), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_DialogueSoundStartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_DialogueSoundStartTime_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_DialogueSoundStartTime_Inner = { "DialogueSoundStartTime", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_DialogueSoundPitchMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HorizonDialogueSegmentInfoStyle" },
		{ "ModuleRelativePath", "Public/HorizonDialogueSegmentInfoStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_DialogueSoundPitchMultiplier = { "DialogueSoundPitchMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHorizonDialogueSegmentInfoStyle, DialogueSoundPitchMultiplier), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_DialogueSoundPitchMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_DialogueSoundPitchMultiplier_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_DialogueSoundPitchMultiplier_Inner = { "DialogueSoundPitchMultiplier", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_DialogueSoundVolumeMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HorizonDialogueSegmentInfoStyle" },
		{ "ModuleRelativePath", "Public/HorizonDialogueSegmentInfoStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_DialogueSoundVolumeMultiplier = { "DialogueSoundVolumeMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHorizonDialogueSegmentInfoStyle, DialogueSoundVolumeMultiplier), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_DialogueSoundVolumeMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_DialogueSoundVolumeMultiplier_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_DialogueSoundVolumeMultiplier_Inner = { "DialogueSoundVolumeMultiplier", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_DialogueSound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HorizonDialogueSegmentInfoStyle" },
		{ "ModuleRelativePath", "Public/HorizonDialogueSegmentInfoStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_DialogueSound = { "DialogueSound", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHorizonDialogueSegmentInfoStyle, DialogueSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_DialogueSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_DialogueSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_PaperSprite_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HorizonDialogueSegmentInfoStyle" },
		{ "ModuleRelativePath", "Public/HorizonDialogueSegmentInfoStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_PaperSprite = { "PaperSprite", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHorizonDialogueSegmentInfoStyle, PaperSprite), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_PaperSprite_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_PaperSprite_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_Material_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HorizonDialogueSegmentInfoStyle" },
		{ "ModuleRelativePath", "Public/HorizonDialogueSegmentInfoStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHorizonDialogueSegmentInfoStyle, Material), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_Material_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_Texture2D_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HorizonDialogueSegmentInfoStyle" },
		{ "ModuleRelativePath", "Public/HorizonDialogueSegmentInfoStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_Texture2D = { "Texture2D", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHorizonDialogueSegmentInfoStyle, Texture2D), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_Texture2D_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_Texture2D_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_BackgroundButtonClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HorizonDialogueSegmentInfoStyle" },
		{ "ModuleRelativePath", "Public/HorizonDialogueSegmentInfoStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_BackgroundButtonClass = { "BackgroundButtonClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHorizonDialogueSegmentInfoStyle, BackgroundButtonClass), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_BackgroundButtonClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_BackgroundButtonClass_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_BackgroundButtonClass_Inner = { "BackgroundButtonClass", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UHorizonButton_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_HypertextVisitedColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HorizonDialogueSegmentInfoStyle" },
		{ "ModuleRelativePath", "Public/HorizonDialogueSegmentInfoStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_HypertextVisitedColor = { "HypertextVisitedColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHorizonDialogueSegmentInfoStyle, HypertextVisitedColor), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_HypertextVisitedColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_HypertextVisitedColor_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_HypertextVisitedColor_Inner = { "HypertextVisitedColor", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_HypertextHoveredColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HorizonDialogueSegmentInfoStyle" },
		{ "ModuleRelativePath", "Public/HorizonDialogueSegmentInfoStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_HypertextHoveredColor = { "HypertextHoveredColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHorizonDialogueSegmentInfoStyle, HypertextHoveredColor), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_HypertextHoveredColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_HypertextHoveredColor_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_HypertextHoveredColor_Inner = { "HypertextHoveredColor", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_HypertextReference_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HorizonDialogueSegmentInfoStyle" },
		{ "ModuleRelativePath", "Public/HorizonDialogueSegmentInfoStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_HypertextReference = { "HypertextReference", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHorizonDialogueSegmentInfoStyle, HypertextReference), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_HypertextReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_HypertextReference_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_HypertextReference_Inner = { "HypertextReference", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_PaddingMargin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HorizonDialogueSegmentInfoStyle" },
		{ "ModuleRelativePath", "Public/HorizonDialogueSegmentInfoStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_PaddingMargin = { "PaddingMargin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHorizonDialogueSegmentInfoStyle, PaddingMargin), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_PaddingMargin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_PaddingMargin_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_PaddingMargin_Inner = { "PaddingMargin", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_DialogueMsgWait_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HorizonDialogueSegmentInfoStyle" },
		{ "ModuleRelativePath", "Public/HorizonDialogueSegmentInfoStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_DialogueMsgWait = { "DialogueMsgWait", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHorizonDialogueSegmentInfoStyle, DialogueMsgWait), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_DialogueMsgWait_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_DialogueMsgWait_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_DialogueMsgWait_Inner = { "DialogueMsgWait", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_DialogueMsgSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HorizonDialogueSegmentInfoStyle" },
		{ "ModuleRelativePath", "Public/HorizonDialogueSegmentInfoStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_DialogueMsgSpeed = { "DialogueMsgSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHorizonDialogueSegmentInfoStyle, DialogueMsgSpeed), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_DialogueMsgSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_DialogueMsgSpeed_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_DialogueMsgSpeed_Inner = { "DialogueMsgSpeed", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_ShadowColorAndOpacity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HorizonDialogueSegmentInfoStyle" },
		{ "ModuleRelativePath", "Public/HorizonDialogueSegmentInfoStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_ShadowColorAndOpacity = { "ShadowColorAndOpacity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHorizonDialogueSegmentInfoStyle, ShadowColorAndOpacity), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_ShadowColorAndOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_ShadowColorAndOpacity_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_ShadowColorAndOpacity_Inner = { "ShadowColorAndOpacity", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_ShadowOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HorizonDialogueSegmentInfoStyle" },
		{ "ModuleRelativePath", "Public/HorizonDialogueSegmentInfoStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_ShadowOffset = { "ShadowOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHorizonDialogueSegmentInfoStyle, ShadowOffset), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_ShadowOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_ShadowOffset_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_ShadowOffset_Inner = { "ShadowOffset", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_TypefaceFontName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HorizonDialogueSegmentInfoStyle" },
		{ "ModuleRelativePath", "Public/HorizonDialogueSegmentInfoStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_TypefaceFontName = { "TypefaceFontName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHorizonDialogueSegmentInfoStyle, TypefaceFontName), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_TypefaceFontName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_TypefaceFontName_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_TypefaceFontName_Inner = { "TypefaceFontName", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_FontSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HorizonDialogueSegmentInfoStyle" },
		{ "ModuleRelativePath", "Public/HorizonDialogueSegmentInfoStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_FontSize = { "FontSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHorizonDialogueSegmentInfoStyle, FontSize), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_FontSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_FontSize_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_FontSize_Inner = { "FontSize", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_Font_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HorizonDialogueSegmentInfoStyle" },
		{ "ModuleRelativePath", "Public/HorizonDialogueSegmentInfoStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_Font = { "Font", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHorizonDialogueSegmentInfoStyle, Font), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_Font_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_Font_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_Font_Inner = { "Font", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_ColorAndOpacity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HorizonDialogueSegmentInfoStyle" },
		{ "ModuleRelativePath", "Public/HorizonDialogueSegmentInfoStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_ColorAndOpacity = { "ColorAndOpacity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHorizonDialogueSegmentInfoStyle, ColorAndOpacity), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_ColorAndOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_ColorAndOpacity_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_ColorAndOpacity_Inner = { "ColorAndOpacity", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_text_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HorizonDialogueSegmentInfoStyle" },
		{ "ModuleRelativePath", "Public/HorizonDialogueSegmentInfoStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_text = { "text", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHorizonDialogueSegmentInfoStyle, text), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_text_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_text_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_text_Inner = { "text", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_StyleName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HorizonDialogueSegmentInfoStyle" },
		{ "ModuleRelativePath", "Public/HorizonDialogueSegmentInfoStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_StyleName = { "StyleName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHorizonDialogueSegmentInfoStyle, StyleName), METADATA_PARAMS(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_StyleName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_StyleName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_ImageSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_ImageSize_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_PaperFlipbook,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_DialogueSoundStartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_DialogueSoundStartTime_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_DialogueSoundPitchMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_DialogueSoundPitchMultiplier_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_DialogueSoundVolumeMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_DialogueSoundVolumeMultiplier_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_DialogueSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_PaperSprite,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_Texture2D,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_BackgroundButtonClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_BackgroundButtonClass_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_HypertextVisitedColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_HypertextVisitedColor_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_HypertextHoveredColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_HypertextHoveredColor_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_HypertextReference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_HypertextReference_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_PaddingMargin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_PaddingMargin_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_DialogueMsgWait,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_DialogueMsgWait_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_DialogueMsgSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_DialogueMsgSpeed_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_ShadowColorAndOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_ShadowColorAndOpacity_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_ShadowOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_ShadowOffset_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_TypefaceFontName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_TypefaceFontName_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_FontSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_FontSize_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_Font,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_Font_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_ColorAndOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_ColorAndOpacity_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_text_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_StyleName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HorizonUI,
		nullptr,
		&NewStructOps,
		"HorizonDialogueSegmentInfoStyle",
		sizeof(FHorizonDialogueSegmentInfoStyle),
		alignof(FHorizonDialogueSegmentInfoStyle),
		Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HorizonUI();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HorizonDialogueSegmentInfoStyle"), sizeof(FHorizonDialogueSegmentInfoStyle), Get_Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Hash() { return 2930454502U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
