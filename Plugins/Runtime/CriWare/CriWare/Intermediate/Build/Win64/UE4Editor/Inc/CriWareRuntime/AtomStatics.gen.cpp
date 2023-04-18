// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Classes/AtomStatics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomStatics() {}
// Cross Module References
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomComponentParams();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomLoopSetting();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomSelectorParam();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomAisacControlParam();
	ENGINE_API UClass* Z_Construct_UClass_USoundAttenuation_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomSoundObject_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomStatics_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomStatics();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomComponent_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_AAtomAudioVolume_NoRegister();
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomAudioVolumeType();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomListenerFocusPointInfo();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtom3dRegion_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomConfig_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCue_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCueSheet_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundConcurrency_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAttachLocation();
// End Cross Module References
class UScriptStruct* FAtomComponentParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAtomComponentParams_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomComponentParams, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomComponentParams"), sizeof(FAtomComponentParams), Get_Z_Construct_UScriptStruct_FAtomComponentParams_Hash());
	}
	return Singleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomComponentParams>()
{
	return FAtomComponentParams::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtomComponentParams(FAtomComponentParams::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("AtomComponentParams"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomComponentParams
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomComponentParams()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtomComponentParams")),new UScriptStruct::TCppStructOps<FAtomComponentParams>);
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomComponentParams;
	struct Z_Construct_UScriptStruct_FAtomComponentParams_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoopSetting_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LoopSetting;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoopSetting_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultSelectorLabel_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DefaultSelectorLabel;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultSelectorLabel_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultAisacControl_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DefaultAisacControl;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultAisacControl_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultBlockIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DefaultBlockIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttenuationSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttenuationSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseAreaSoundVolume_MetaData[];
#endif
		static void NewProp_bUseAreaSoundVolume_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseAreaSoundVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseAudioVolume_MetaData[];
#endif
		static void NewProp_bUseAudioVolume_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseAudioVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanStraddleAudioVolume_MetaData[];
#endif
		static void NewProp_bCanStraddleAudioVolume_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanStraddleAudioVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsMovable_MetaData[];
#endif
		static void NewProp_bIsMovable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsMovable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsePlaylist_MetaData[];
#endif
		static void NewProp_bUsePlaylist_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsePlaylist;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableMultipleSoundPlayback_MetaData[];
#endif
		static void NewProp_bEnableMultipleSoundPlayback_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableMultipleSoundPlayback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultPitchMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultPitchMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultVolume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomComponentParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/AtomStatics.h" },
		{ "ToolTip", "AtomComponentParams struct." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomComponentParams>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/* \xe5\x9b\x9e\xe8\xbb\xa2\xe3\x80\x82\xe3\x83\x87\xe3\x83\x95\xe3\x82\xa9\xe3\x83\xab\xe3\x83\x88\xe5\x80\xa4\xe3\x81\xaf""FRotator::ZeroRotator */" },
		{ "DisplayName", "Rotation" },
		{ "ModuleRelativePath", "Classes/AtomStatics.h" },
		{ "ToolTip", "\xe5\x9b\x9e\xe8\xbb\xa2\xe3\x80\x82\xe3\x83\x87\xe3\x83\x95\xe3\x82\xa9\xe3\x83\xab\xe3\x83\x88\xe5\x80\xa4\xe3\x81\xaf""FRotator::ZeroRotator" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomComponentParams, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_LoopSetting_MetaData[] = {
		{ "Category", "Atom" },
		{ "DisplayName", "Loop Setting" },
		{ "ModuleRelativePath", "Classes/AtomStatics.h" },
		{ "ToolTip", "If Inherited, uses Loop Setting from AtomSoundCue Asset." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_LoopSetting = { "LoopSetting", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomComponentParams, LoopSetting), Z_Construct_UEnum_CriWareRuntime_EAtomLoopSetting, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_LoopSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_LoopSetting_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_LoopSetting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_DefaultSelectorLabel_MetaData[] = {
		{ "Category", "Atom" },
		{ "DisplayName", "Selector Label" },
		{ "ModuleRelativePath", "Classes/AtomStatics.h" },
		{ "ToolTip", "Initial selector label." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_DefaultSelectorLabel = { "DefaultSelectorLabel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomComponentParams, DefaultSelectorLabel), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_DefaultSelectorLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_DefaultSelectorLabel_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_DefaultSelectorLabel_Inner = { "DefaultSelectorLabel", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAtomSelectorParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_DefaultAisacControl_MetaData[] = {
		{ "Category", "Atom" },
		{ "DisplayName", "AISAC Control" },
		{ "ModuleRelativePath", "Classes/AtomStatics.h" },
		{ "ToolTip", "Initial AISAC control." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_DefaultAisacControl = { "DefaultAisacControl", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomComponentParams, DefaultAisacControl), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_DefaultAisacControl_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_DefaultAisacControl_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_DefaultAisacControl_Inner = { "DefaultAisacControl", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAtomAisacControlParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_DefaultBlockIndex_MetaData[] = {
		{ "Category", "Atom" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Block Index" },
		{ "ModuleRelativePath", "Classes/AtomStatics.h" },
		{ "ToolTip", "Initial block index." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_DefaultBlockIndex = { "DefaultBlockIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomComponentParams, DefaultBlockIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_DefaultBlockIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_DefaultBlockIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_AttenuationSettings_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "ModuleRelativePath", "Classes/AtomStatics.h" },
		{ "ToolTip", "Enable attenuation settings." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_AttenuationSettings = { "AttenuationSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomComponentParams, AttenuationSettings), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_AttenuationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_AttenuationSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_SoundObject_MetaData[] = {
		{ "Category", "Atom" },
		{ "DisplayName", "Sound Object" },
		{ "ModuleRelativePath", "Classes/AtomStatics.h" },
		{ "ToolTip", "Sound object." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_SoundObject = { "SoundObject", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomComponentParams, SoundObject), Z_Construct_UClass_UAtomSoundObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_SoundObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_SoundObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bUseAreaSoundVolume_MetaData[] = {
		{ "Category", "AreaSoundVolume" },
		{ "ModuleRelativePath", "Classes/AtomStatics.h" },
		{ "ToolTip", "Use AreaSoundVolume." },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bUseAreaSoundVolume_SetBit(void* Obj)
	{
		((FAtomComponentParams*)Obj)->bUseAreaSoundVolume = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bUseAreaSoundVolume = { "bUseAreaSoundVolume", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAtomComponentParams), &Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bUseAreaSoundVolume_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bUseAreaSoundVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bUseAreaSoundVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bUseAudioVolume_MetaData[] = {
		{ "Category", "AudioVolume" },
		{ "ModuleRelativePath", "Classes/AtomStatics.h" },
		{ "ToolTip", "Use AudioVolume." },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bUseAudioVolume_SetBit(void* Obj)
	{
		((FAtomComponentParams*)Obj)->bUseAudioVolume = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bUseAudioVolume = { "bUseAudioVolume", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAtomComponentParams), &Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bUseAudioVolume_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bUseAudioVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bUseAudioVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bCanStraddleAudioVolume_MetaData[] = {
		{ "Category", "AudioVolume" },
		{ "ModuleRelativePath", "Classes/AtomStatics.h" },
		{ "ToolTip", "Use AudioVolume." },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bCanStraddleAudioVolume_SetBit(void* Obj)
	{
		((FAtomComponentParams*)Obj)->bCanStraddleAudioVolume = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bCanStraddleAudioVolume = { "bCanStraddleAudioVolume", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAtomComponentParams), &Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bCanStraddleAudioVolume_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bCanStraddleAudioVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bCanStraddleAudioVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bIsMovable_MetaData[] = {
		{ "Category", "AudioVolume" },
		{ "ModuleRelativePath", "Classes/AtomStatics.h" },
		{ "ToolTip", "Use AudioVolume." },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bIsMovable_SetBit(void* Obj)
	{
		((FAtomComponentParams*)Obj)->bIsMovable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bIsMovable = { "bIsMovable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAtomComponentParams), &Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bIsMovable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bIsMovable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bIsMovable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bUsePlaylist_MetaData[] = {
		{ "Category", "Atom" },
		{ "ModuleRelativePath", "Classes/AtomStatics.h" },
		{ "ToolTip", "Use playlist." },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bUsePlaylist_SetBit(void* Obj)
	{
		((FAtomComponentParams*)Obj)->bUsePlaylist = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bUsePlaylist = { "bUsePlaylist", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAtomComponentParams), &Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bUsePlaylist_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bUsePlaylist_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bUsePlaylist_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bEnableMultipleSoundPlayback_MetaData[] = {
		{ "Category", "Atom" },
		{ "ModuleRelativePath", "Classes/AtomStatics.h" },
		{ "ToolTip", "Enable multiple sound playback." },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bEnableMultipleSoundPlayback_SetBit(void* Obj)
	{
		((FAtomComponentParams*)Obj)->bEnableMultipleSoundPlayback = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bEnableMultipleSoundPlayback = { "bEnableMultipleSoundPlayback", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAtomComponentParams), &Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bEnableMultipleSoundPlayback_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bEnableMultipleSoundPlayback_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bEnableMultipleSoundPlayback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_StartTime_MetaData[] = {
		{ "Category", "Sound" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Start Time" },
		{ "ModuleRelativePath", "Classes/AtomStatics.h" },
		{ "ToolTip", "Start Time." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomComponentParams, StartTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_StartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_StartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_DefaultPitchMultiplier_MetaData[] = {
		{ "Category", "Sound" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Pitch Multiplier" },
		{ "ModuleRelativePath", "Classes/AtomStatics.h" },
		{ "ToolTip", "Pitch multiplier." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_DefaultPitchMultiplier = { "DefaultPitchMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomComponentParams, DefaultPitchMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_DefaultPitchMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_DefaultPitchMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_DefaultVolume_MetaData[] = {
		{ "Category", "Sound" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Volume Multiplier" },
		{ "ModuleRelativePath", "Classes/AtomStatics.h" },
		{ "ToolTip", "Volume multiplier." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_DefaultVolume = { "DefaultVolume", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomComponentParams, DefaultVolume), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_DefaultVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_DefaultVolume_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomComponentParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_LoopSetting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_LoopSetting_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_DefaultSelectorLabel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_DefaultSelectorLabel_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_DefaultAisacControl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_DefaultAisacControl_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_DefaultBlockIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_AttenuationSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_SoundObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bUseAreaSoundVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bUseAudioVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bCanStraddleAudioVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bIsMovable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bUsePlaylist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bEnableMultipleSoundPlayback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_StartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_DefaultPitchMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_DefaultVolume,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomComponentParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"AtomComponentParams",
		sizeof(FAtomComponentParams),
		alignof(FAtomComponentParams),
		Z_Construct_UScriptStruct_FAtomComponentParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomComponentParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomComponentParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomComponentParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomComponentParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtomComponentParams_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtomComponentParams"), sizeof(FAtomComponentParams), Get_Z_Construct_UScriptStruct_FAtomComponentParams_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtomComponentParams_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtomComponentParams_Hash() { return 2759596216U; }
	DEFINE_FUNCTION(UAtomStatics::execSpawnAtomSoundAttachedByName)
	{
		P_GET_OBJECT(USoundAtomCueSheet,Z_Param_CueSheet);
		P_GET_PROPERTY(FStrProperty,Z_Param_CueName);
		P_GET_OBJECT(USceneComponent,Z_Param_AttachToComponent);
		P_GET_STRUCT_REF(FAtomComponentParams,Z_Param_Out_Params);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttachPointName);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_PROPERTY(FByteProperty,Z_Param_LocationType);
		P_GET_UBOOL(Z_Param_bStopWhenAttachedToDestroyed);
		P_GET_UBOOL(Z_Param_bAutoDestroy);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAtomComponent**)Z_Param__Result=UAtomStatics::SpawnAtomSoundAttachedByName(Z_Param_CueSheet,Z_Param_CueName,Z_Param_AttachToComponent,Z_Param_Out_Params,Z_Param_AttachPointName,Z_Param_Location,EAttachLocation::Type(Z_Param_LocationType),Z_Param_bStopWhenAttachedToDestroyed,Z_Param_bAutoDestroy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomStatics::execSpawnAtomSoundAttached)
	{
		P_GET_OBJECT(USoundAtomCue,Z_Param_Sound);
		P_GET_OBJECT(USceneComponent,Z_Param_AttachToComponent);
		P_GET_STRUCT_REF(FAtomComponentParams,Z_Param_Out_Params);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttachPointName);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_PROPERTY(FByteProperty,Z_Param_LocationType);
		P_GET_UBOOL(Z_Param_bStopWhenAttachedToDestroyed);
		P_GET_UBOOL(Z_Param_bAutoDestroy);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAtomComponent**)Z_Param__Result=UAtomStatics::SpawnAtomSoundAttached(Z_Param_Sound,Z_Param_AttachToComponent,Z_Param_Out_Params,Z_Param_AttachPointName,Z_Param_Location,EAttachLocation::Type(Z_Param_LocationType),Z_Param_bStopWhenAttachedToDestroyed,Z_Param_bAutoDestroy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomStatics::execSpawnAtomSoundAtLocationByName)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundAtomCueSheet,Z_Param_CueSheet);
		P_GET_PROPERTY(FStrProperty,Z_Param_CueName);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT_REF(FAtomComponentParams,Z_Param_Out_Params);
		P_GET_UBOOL(Z_Param_bAutoDestroy);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAtomComponent**)Z_Param__Result=UAtomStatics::SpawnAtomSoundAtLocationByName(Z_Param_WorldContextObject,Z_Param_CueSheet,Z_Param_CueName,Z_Param_Location,Z_Param_Out_Params,Z_Param_bAutoDestroy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomStatics::execSpawnAtomSoundAtLocation)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundAtomCue,Z_Param_Sound);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT_REF(FAtomComponentParams,Z_Param_Out_Params);
		P_GET_UBOOL(Z_Param_bAutoDestroy);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAtomComponent**)Z_Param__Result=UAtomStatics::SpawnAtomSoundAtLocation(Z_Param_WorldContextObject,Z_Param_Sound,Z_Param_Location,Z_Param_Out_Params,Z_Param_bAutoDestroy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomStatics::execSpawnAtomSound2DByName)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundAtomCueSheet,Z_Param_CueSheet);
		P_GET_PROPERTY(FStrProperty,Z_Param_CueName);
		P_GET_STRUCT_REF(FAtomComponentParams,Z_Param_Out_Params);
		P_GET_UBOOL(Z_Param_bPersistAcrossLevelTransition);
		P_GET_UBOOL(Z_Param_bAutoDestroy);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAtomComponent**)Z_Param__Result=UAtomStatics::SpawnAtomSound2DByName(Z_Param_WorldContextObject,Z_Param_CueSheet,Z_Param_CueName,Z_Param_Out_Params,Z_Param_bPersistAcrossLevelTransition,Z_Param_bAutoDestroy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomStatics::execSpawnAtomSound2D)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundAtomCue,Z_Param_Sound);
		P_GET_STRUCT_REF(FAtomComponentParams,Z_Param_Out_Params);
		P_GET_UBOOL(Z_Param_bPersistAcrossLevelTransition);
		P_GET_UBOOL(Z_Param_bAutoDestroy);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAtomComponent**)Z_Param__Result=UAtomStatics::SpawnAtomSound2D(Z_Param_WorldContextObject,Z_Param_Sound,Z_Param_Out_Params,Z_Param_bPersistAcrossLevelTransition,Z_Param_bAutoDestroy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomStatics::execPlayAtomSoundAtLocationByName)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundAtomCueSheet,Z_Param_CueSheet);
		P_GET_PROPERTY(FStrProperty,Z_Param_CueName);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT_REF(FAtomComponentParams,Z_Param_Out_Params);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomStatics::PlayAtomSoundAtLocationByName(Z_Param_WorldContextObject,Z_Param_CueSheet,Z_Param_CueName,Z_Param_Location,Z_Param_Out_Params);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomStatics::execPlayAtomSoundAtLocation)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundAtomCue,Z_Param_Sound);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT_REF(FAtomComponentParams,Z_Param_Out_Params);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomStatics::PlayAtomSoundAtLocation(Z_Param_WorldContextObject,Z_Param_Sound,Z_Param_Location,Z_Param_Out_Params);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomStatics::execGetListeningPoint)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UAtomStatics::GetListeningPoint(Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomStatics::execSetListenerFocusPointDirectionLevel)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DirectionLevel);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomStatics::SetListenerFocusPointDirectionLevel(Z_Param_DirectionLevel,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomStatics::execSetListenerFocusPointDistanceLevel)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DistanceLevel);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomStatics::SetListenerFocusPointDistanceLevel(Z_Param_DistanceLevel,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomStatics::execSetListenerFocusPointTargetComponent)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_TargetComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomStatics::SetListenerFocusPointTargetComponent(Z_Param_TargetComponent,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomStatics::execSetListenerFocusPointTargetActor)
	{
		P_GET_OBJECT(AActor,Z_Param_TargetActor);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomStatics::SetListenerFocusPointTargetActor(Z_Param_TargetActor,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomStatics::execSetListenerFocusPointInfo)
	{
		P_GET_STRUCT(FAtomListenerFocusPointInfo,Z_Param_FocusPointInfo);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomStatics::SetListenerFocusPointInfo(Z_Param_FocusPointInfo,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomStatics::execGetListenerFocusPointInfo)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomListenerFocusPointInfo*)Z_Param__Result=UAtomStatics::GetListenerFocusPointInfo(Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomStatics::execSetListenerRegion)
	{
		P_GET_OBJECT(UAtom3dRegion,Z_Param_Region);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomStatics::SetListenerRegion(Z_Param_Region,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomStatics::execGetListenerRegion)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAtom3dRegion**)Z_Param__Result=UAtomStatics::GetListenerRegion(Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomStatics::execGetAudioVolumeAffectingListener)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_GET_ENUM(EAtomAudioVolumeType,Z_Param_TypeNum);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AAtomAudioVolume**)Z_Param__Result=UAtomStatics::GetAudioVolumeAffectingListener(Z_Param_PlayerIndex,EAtomAudioVolumeType(Z_Param_TypeNum));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomStatics::execStopAllSoundsForKeyFromAtomComponentIds)
	{
		P_GET_OBJECT(UObject,Z_Param_AtomPlayGateRef);
		P_GET_OBJECT(UObject,Z_Param_SkeltalMeshComponentRef);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomStatics::StopAllSoundsForKeyFromAtomComponentIds(Z_Param_AtomPlayGateRef,Z_Param_SkeltalMeshComponentRef);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomStatics::execAddToAtomComponentIds)
	{
		P_GET_OBJECT(UObject,Z_Param_AtomPlayGateRef);
		P_GET_OBJECT(UObject,Z_Param_SkeltalMeshComponentRef);
		P_GET_PROPERTY(FIntProperty,Z_Param_AtomComponentId);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomStatics::AddToAtomComponentIds(Z_Param_AtomPlayGateRef,Z_Param_SkeltalMeshComponentRef,Z_Param_AtomComponentId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomStatics::execUpdateDistanceFactorForAllSounds)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ArgDistanceFactor);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomStatics::UpdateDistanceFactorForAllSounds(Z_Param_ArgDistanceFactor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomStatics::execLoadAtomConfig)
	{
		P_GET_OBJECT(USoundAtomConfig,Z_Param_AcfObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAtomStatics::LoadAtomConfig(Z_Param_AcfObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomStatics::execSetAtomGameVariable)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_GameVariableName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomStatics::SetAtomGameVariable(Z_Param_GameVariableName,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomStatics::execGetAtomGameVariable)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_GameVariableName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UAtomStatics::GetAtomGameVariable(Z_Param_GameVariableName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomStatics::execStopAllSounds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomStatics::StopAllSounds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomStatics::execPauseAudioOutput)
	{
		P_GET_UBOOL(Z_Param_bPause);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomStatics::PauseAudioOutput(Z_Param_bPause);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomStatics::execPlaySoundForAnimNotify)
	{
		P_GET_OBJECT(USoundAtomCue,Z_Param_Sound);
		P_GET_OBJECT(USceneComponent,Z_Param_AttachToComponent);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttachPointName);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_UBOOL(Z_Param_bStopWhenAttachedToDestroyed);
		P_GET_PROPERTY(FFloatProperty,Z_Param_VolumeMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PitchMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
		P_GET_OBJECT(USoundAttenuation,Z_Param_AttenuationSettings);
		P_GET_UBOOL(Z_Param_bFollow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAtomComponent**)Z_Param__Result=UAtomStatics::PlaySoundForAnimNotify(Z_Param_Sound,Z_Param_AttachToComponent,Z_Param_AttachPointName,Z_Param_Location,Z_Param_bStopWhenAttachedToDestroyed,Z_Param_VolumeMultiplier,Z_Param_PitchMultiplier,Z_Param_StartTime,Z_Param_AttenuationSettings,Z_Param_bFollow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomStatics::execPlaySoundAttached)
	{
		P_GET_OBJECT(USoundAtomCue,Z_Param_Sound);
		P_GET_OBJECT(USceneComponent,Z_Param_AttachToComponent);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttachPointName);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_UBOOL(Z_Param_bStopWhenAttachedToDestroyed);
		P_GET_PROPERTY(FFloatProperty,Z_Param_VolumeMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PitchMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
		P_GET_OBJECT(USoundAttenuation,Z_Param_AttenuationSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAtomComponent**)Z_Param__Result=UAtomStatics::PlaySoundAttached(Z_Param_Sound,Z_Param_AttachToComponent,Z_Param_AttachPointName,Z_Param_Location,Z_Param_bStopWhenAttachedToDestroyed,Z_Param_VolumeMultiplier,Z_Param_PitchMultiplier,Z_Param_StartTime,Z_Param_AttenuationSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomStatics::execSpawnSoundAttached)
	{
		P_GET_OBJECT(USoundAtomCue,Z_Param_Sound);
		P_GET_OBJECT(USceneComponent,Z_Param_AttachToComponent);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttachPointName);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FRotator,Z_Param_Rotation);
		P_GET_PROPERTY(FByteProperty,Z_Param_LocationType);
		P_GET_UBOOL(Z_Param_bStopWhenAttachedToDestroyed);
		P_GET_PROPERTY(FFloatProperty,Z_Param_VolumeMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PitchMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
		P_GET_OBJECT(USoundAttenuation,Z_Param_AttenuationSettings);
		P_GET_OBJECT(USoundConcurrency,Z_Param_ConcurrencySettings);
		P_GET_UBOOL(Z_Param_bAutoDestroy);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAtomComponent**)Z_Param__Result=UAtomStatics::SpawnSoundAttached(Z_Param_Sound,Z_Param_AttachToComponent,Z_Param_AttachPointName,Z_Param_Location,Z_Param_Rotation,EAttachLocation::Type(Z_Param_LocationType),Z_Param_bStopWhenAttachedToDestroyed,Z_Param_VolumeMultiplier,Z_Param_PitchMultiplier,Z_Param_StartTime,Z_Param_AttenuationSettings,Z_Param_ConcurrencySettings,Z_Param_bAutoDestroy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomStatics::execSpawnSoundAtLocation)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundAtomCue,Z_Param_Sound);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FRotator,Z_Param_Rotation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_VolumeMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PitchMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
		P_GET_OBJECT(USoundAttenuation,Z_Param_AttenuationSettings);
		P_GET_OBJECT(USoundConcurrency,Z_Param_ConcurrencySettings);
		P_GET_UBOOL(Z_Param_bAutoDestroy);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAtomComponent**)Z_Param__Result=UAtomStatics::SpawnSoundAtLocation(Z_Param_WorldContextObject,Z_Param_Sound,Z_Param_Location,Z_Param_Rotation,Z_Param_VolumeMultiplier,Z_Param_PitchMultiplier,Z_Param_StartTime,Z_Param_AttenuationSettings,Z_Param_ConcurrencySettings,Z_Param_bAutoDestroy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomStatics::execCreateRootedAtomComponent)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_UBOOL(Z_Param_bAutoDestroy);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAtomComponent**)Z_Param__Result=UAtomStatics::CreateRootedAtomComponent(Z_Param_WorldContextObject,Z_Param_bAutoDestroy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomStatics::execSpawnSound2D)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundAtomCue,Z_Param_Sound);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PitchMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
		P_GET_UBOOL(Z_Param_bPersistAcrossLevelTransition);
		P_GET_UBOOL(Z_Param_bAutoDestroy);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAtomComponent**)Z_Param__Result=UAtomStatics::SpawnSound2D(Z_Param_WorldContextObject,Z_Param_Sound,Z_Param_PitchMultiplier,Z_Param_StartTime,Z_Param_bPersistAcrossLevelTransition,Z_Param_bAutoDestroy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomStatics::execPlaySoundAtLocation)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USoundAtomCue,Z_Param_Sound);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FRotator,Z_Param_Rotation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_VolumeMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PitchMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
		P_GET_OBJECT(USoundAttenuation,Z_Param_AttenuationSettings);
		P_GET_OBJECT(USoundConcurrency,Z_Param_ConcurrencySettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomStatics::PlaySoundAtLocation(Z_Param_WorldContextObject,Z_Param_Sound,Z_Param_Location,Z_Param_Rotation,Z_Param_VolumeMultiplier,Z_Param_PitchMultiplier,Z_Param_StartTime,Z_Param_AttenuationSettings,Z_Param_ConcurrencySettings);
		P_NATIVE_END;
	}
	void UAtomStatics::StaticRegisterNativesUAtomStatics()
	{
		UClass* Class = UAtomStatics::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddToAtomComponentIds", &UAtomStatics::execAddToAtomComponentIds },
			{ "CreateRootedAtomComponent", &UAtomStatics::execCreateRootedAtomComponent },
			{ "GetAtomGameVariable", &UAtomStatics::execGetAtomGameVariable },
			{ "GetAudioVolumeAffectingListener", &UAtomStatics::execGetAudioVolumeAffectingListener },
			{ "GetListenerFocusPointInfo", &UAtomStatics::execGetListenerFocusPointInfo },
			{ "GetListenerRegion", &UAtomStatics::execGetListenerRegion },
			{ "GetListeningPoint", &UAtomStatics::execGetListeningPoint },
			{ "LoadAtomConfig", &UAtomStatics::execLoadAtomConfig },
			{ "PauseAudioOutput", &UAtomStatics::execPauseAudioOutput },
			{ "PlayAtomSoundAtLocation", &UAtomStatics::execPlayAtomSoundAtLocation },
			{ "PlayAtomSoundAtLocationByName", &UAtomStatics::execPlayAtomSoundAtLocationByName },
			{ "PlaySoundAtLocation", &UAtomStatics::execPlaySoundAtLocation },
			{ "PlaySoundAttached", &UAtomStatics::execPlaySoundAttached },
			{ "PlaySoundForAnimNotify", &UAtomStatics::execPlaySoundForAnimNotify },
			{ "SetAtomGameVariable", &UAtomStatics::execSetAtomGameVariable },
			{ "SetListenerFocusPointDirectionLevel", &UAtomStatics::execSetListenerFocusPointDirectionLevel },
			{ "SetListenerFocusPointDistanceLevel", &UAtomStatics::execSetListenerFocusPointDistanceLevel },
			{ "SetListenerFocusPointInfo", &UAtomStatics::execSetListenerFocusPointInfo },
			{ "SetListenerFocusPointTargetActor", &UAtomStatics::execSetListenerFocusPointTargetActor },
			{ "SetListenerFocusPointTargetComponent", &UAtomStatics::execSetListenerFocusPointTargetComponent },
			{ "SetListenerRegion", &UAtomStatics::execSetListenerRegion },
			{ "SpawnAtomSound2D", &UAtomStatics::execSpawnAtomSound2D },
			{ "SpawnAtomSound2DByName", &UAtomStatics::execSpawnAtomSound2DByName },
			{ "SpawnAtomSoundAtLocation", &UAtomStatics::execSpawnAtomSoundAtLocation },
			{ "SpawnAtomSoundAtLocationByName", &UAtomStatics::execSpawnAtomSoundAtLocationByName },
			{ "SpawnAtomSoundAttached", &UAtomStatics::execSpawnAtomSoundAttached },
			{ "SpawnAtomSoundAttachedByName", &UAtomStatics::execSpawnAtomSoundAttachedByName },
			{ "SpawnSound2D", &UAtomStatics::execSpawnSound2D },
			{ "SpawnSoundAtLocation", &UAtomStatics::execSpawnSoundAtLocation },
			{ "SpawnSoundAttached", &UAtomStatics::execSpawnSoundAttached },
			{ "StopAllSounds", &UAtomStatics::execStopAllSounds },
			{ "StopAllSoundsForKeyFromAtomComponentIds", &UAtomStatics::execStopAllSoundsForKeyFromAtomComponentIds },
			{ "UpdateDistanceFactorForAllSounds", &UAtomStatics::execUpdateDistanceFactorForAllSounds },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomStatics_AddToAtomComponentIds_Statics
	{
		struct AtomStatics_eventAddToAtomComponentIds_Parms
		{
			UObject* AtomPlayGateRef;
			UObject* SkeltalMeshComponentRef;
			int32 AtomComponentId;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AtomComponentId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeltalMeshComponentRef;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AtomPlayGateRef;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomStatics_AddToAtomComponentIds_Statics::NewProp_AtomComponentId = { "AtomComponentId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventAddToAtomComponentIds_Parms, AtomComponentId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_AddToAtomComponentIds_Statics::NewProp_SkeltalMeshComponentRef = { "SkeltalMeshComponentRef", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventAddToAtomComponentIds_Parms, SkeltalMeshComponentRef), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_AddToAtomComponentIds_Statics::NewProp_AtomPlayGateRef = { "AtomPlayGateRef", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventAddToAtomComponentIds_Parms, AtomPlayGateRef), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomStatics_AddToAtomComponentIds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_AddToAtomComponentIds_Statics::NewProp_AtomComponentId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_AddToAtomComponentIds_Statics::NewProp_SkeltalMeshComponentRef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_AddToAtomComponentIds_Statics::NewProp_AtomPlayGateRef,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_AddToAtomComponentIds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom" },
		{ "Comment", "/**\n\x09 * AtomPlayGate \xe3\x81\xa7\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x95\xe3\x82\x8c\xe3\x81\x9f AtomComponent \xe3\x81\xae ID \xe3\x82\x92\xe3\x80\x81""AtomPlayGate \xe3\x81\xa8 MeshComponent \xe3\x81\xae\xe8\xad\x98\xe5\x88\xa5\xe5\xad\x90\xe3\x81\xab\xe7\xb4\x90\xe3\x81\xa5\xe3\x81\x91\xe3\x81\xa6\xe8\xbe\x9e\xe6\x9b\xb8\xe3\x81\xab\xe8\xbf\xbd\xe5\x8a\xa0\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * \xe3\x81\x93\xe3\x81\xae\xe9\x96\xa2\xe6\x95\xb0\xe3\x81\xaf AnimNotifyState_AtomPlayGate \xe3\x83\x96\xe3\x83\xab\xe3\x83\xbc\xe3\x83\x97\xe3\x83\xaa\xe3\x83\xb3\xe3\x83\x88\xe5\x86\x85\xe3\x81\xa7\xe3\x81\xae\xe3\x81\xbf\xe4\xbd\xbf\xe7\x94\xa8\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x93\xe3\x81\xa8\xe3\x82\x92\xe6\x83\xb3\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xa6\xe3\x81\x84\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * CRIWARE UE4 Plugin \xe3\x81\xae\xe3\x83\xa6\xe3\x83\xbc\xe3\x82\xb6\xe3\x81\x8c\xe6\x9c\xac\xe9\x96\xa2\xe6\x95\xb0\xe3\x82\x92\xe5\x91\xbc\xe3\x81\xb3\xe5\x87\xba\xe3\x81\x99\xe3\x81\x93\xe3\x81\xa8\xe3\x81\xaf\xe4\xb8\x8d\xe6\xad\xa3\xe5\x8b\x95\xe4\xbd\x9c\xe3\x81\xae\xe5\x8e\x9f\xe5\x9b\xa0\xe3\x81\xa8\xe3\x81\xaa\xe3\x82\x8b\xe3\x81\x9f\xe3\x82\x81\xe6\x8e\xa8\xe5\xa5\xa8\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x9b\xe3\x82\x93\n\x09 */" },
		{ "ModuleRelativePath", "Classes/AtomStatics.h" },
		{ "ToolTip", "AtomPlayGate \xe3\x81\xa7\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x95\xe3\x82\x8c\xe3\x81\x9f AtomComponent \xe3\x81\xae ID \xe3\x82\x92\xe3\x80\x81""AtomPlayGate \xe3\x81\xa8 MeshComponent \xe3\x81\xae\xe8\xad\x98\xe5\x88\xa5\xe5\xad\x90\xe3\x81\xab\xe7\xb4\x90\xe3\x81\xa5\xe3\x81\x91\xe3\x81\xa6\xe8\xbe\x9e\xe6\x9b\xb8\xe3\x81\xab\xe8\xbf\xbd\xe5\x8a\xa0\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\xe3\x81\x93\xe3\x81\xae\xe9\x96\xa2\xe6\x95\xb0\xe3\x81\xaf AnimNotifyState_AtomPlayGate \xe3\x83\x96\xe3\x83\xab\xe3\x83\xbc\xe3\x83\x97\xe3\x83\xaa\xe3\x83\xb3\xe3\x83\x88\xe5\x86\x85\xe3\x81\xa7\xe3\x81\xae\xe3\x81\xbf\xe4\xbd\xbf\xe7\x94\xa8\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x93\xe3\x81\xa8\xe3\x82\x92\xe6\x83\xb3\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xa6\xe3\x81\x84\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\nCRIWARE UE4 Plugin \xe3\x81\xae\xe3\x83\xa6\xe3\x83\xbc\xe3\x82\xb6\xe3\x81\x8c\xe6\x9c\xac\xe9\x96\xa2\xe6\x95\xb0\xe3\x82\x92\xe5\x91\xbc\xe3\x81\xb3\xe5\x87\xba\xe3\x81\x99\xe3\x81\x93\xe3\x81\xa8\xe3\x81\xaf\xe4\xb8\x8d\xe6\xad\xa3\xe5\x8b\x95\xe4\xbd\x9c\xe3\x81\xae\xe5\x8e\x9f\xe5\x9b\xa0\xe3\x81\xa8\xe3\x81\xaa\xe3\x82\x8b\xe3\x81\x9f\xe3\x82\x81\xe6\x8e\xa8\xe5\xa5\xa8\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x9b\xe3\x82\x93" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomStatics_AddToAtomComponentIds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomStatics, nullptr, "AddToAtomComponentIds", nullptr, nullptr, sizeof(AtomStatics_eventAddToAtomComponentIds_Parms), Z_Construct_UFunction_UAtomStatics_AddToAtomComponentIds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_AddToAtomComponentIds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_AddToAtomComponentIds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_AddToAtomComponentIds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomStatics_AddToAtomComponentIds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomStatics_AddToAtomComponentIds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomStatics_CreateRootedAtomComponent_Statics
	{
		struct AtomStatics_eventCreateRootedAtomComponent_Parms
		{
			const UObject* WorldContextObject;
			bool bAutoDestroy;
			UAtomComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_bAutoDestroy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_CreateRootedAtomComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_CreateRootedAtomComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventCreateRootedAtomComponent_Parms, ReturnValue), Z_Construct_UClass_UAtomComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_CreateRootedAtomComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_CreateRootedAtomComponent_Statics::NewProp_ReturnValue_MetaData)) };
	void Z_Construct_UFunction_UAtomStatics_CreateRootedAtomComponent_Statics::NewProp_bAutoDestroy_SetBit(void* Obj)
	{
		((AtomStatics_eventCreateRootedAtomComponent_Parms*)Obj)->bAutoDestroy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomStatics_CreateRootedAtomComponent_Statics::NewProp_bAutoDestroy = { "bAutoDestroy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtomStatics_eventCreateRootedAtomComponent_Parms), &Z_Construct_UFunction_UAtomStatics_CreateRootedAtomComponent_Statics::NewProp_bAutoDestroy_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_CreateRootedAtomComponent_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_CreateRootedAtomComponent_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventCreateRootedAtomComponent_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_CreateRootedAtomComponent_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_CreateRootedAtomComponent_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomStatics_CreateRootedAtomComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_CreateRootedAtomComponent_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_CreateRootedAtomComponent_Statics::NewProp_bAutoDestroy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_CreateRootedAtomComponent_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_CreateRootedAtomComponent_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "Atom" },
		{ "Comment", "/**\n\x09 * \xe3\x83\xac\xe3\x83\x99\xe3\x83\xab\xe3\x81\x8c\xe3\x82\xa2\xe3\x83\xb3\xe3\x83\xad\xe3\x83\xbc\xe3\x83\x89\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xa6\xe3\x82\x82\xe7\xa0\xb4\xe6\xa3\x84\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xaa\xe3\x81\x84""AtomComponent\xe3\x82\x92\xe4\xbd\x9c\xe6\x88\x90\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * AtomComponent\xe3\x81\xae\xe4\xbd\x9c\xe6\x88\x90\xe3\x81\xae\xe3\x81\xbf\xe3\x82\x92\xe8\xa1\x8c\xe3\x81\x84\xe3\x80\x81\xe7\x99\xba\xe9\x9f\xb3\xe3\x81\xaf\xe8\xa1\x8c\xe3\x81\x84\xe3\x81\xbe\xe3\x81\x9b\xe3\x82\x93\xe3\x80\x82\n\x09 * \xe4\xbb\xbb\xe6\x84\x8f\xe3\x81\xae\xe3\x82\xbf\xe3\x82\xa4\xe3\x83\x9f\xe3\x83\xb3\xe3\x82\xb0\xe3\x81\xa7\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\x92\xe8\xa8\xad\xe5\xae\x9a\xe3\x81\x97\xe3\x80\x81\xe7\x99\xba\xe9\x9f\xb3\xe3\x82\x92\xe9\x96\x8b\xe5\xa7\x8b\xe3\x81\x97\xe3\x81\xa6\xe3\x81\x8f\xe3\x81\xa0\xe3\x81\x95\xe3\x81\x84\xe3\x80\x82\n\x09 * \xe6\xb4\xbb\xe7\x94\xa8\xe4\xbe\x8b: AISAC\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x88\xe3\x83\xad\xe3\x83\xbc\xe3\x83\xab\xe5\x80\xa4\xe3\x81\xae\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\xaa\xe3\x81\xa9\xe3\x80\x81\xe7\x99\xba\xe9\x9f\xb3\xe9\x96\x8b\xe5\xa7\x8b\xe5\x89\x8d\xe3\x81\xab\xe8\xa8\xad\xe5\xae\x9a\xe3\x81\x8c\xe5\xbf\x85\xe8\xa6\x81\xe3\x81\xaa\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x82\x92\xe3\x83\xac\xe3\x83\x99\xe3\x83\xab\xe3\x82\x92\xe3\x81\xbe\xe3\x81\x9f\xe3\x81\x84\xe3\x81\xa7\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x97\xe3\x81\x9f\xe3\x81\x84\xe5\xa0\xb4\xe5\x90\x88...\xe7\xad\x89\n\x09 *\n\x09 * @param WorldContextObject WorldContextObject\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @param bAutoDestroy \xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x8c\xe5\xae\x8c\xe4\xba\x86\xe3\x81\x97\xe3\x81\x9f\xe3\x81\xa8\xe3\x81\x8d\xe8\x87\xaa\xe5\x8b\x95\xe7\x9a\x84\xe3\x81\xab\xe3\x82\xaa\xe3\x83\x96\xe3\x82\xb8\xe3\x82\xa7\xe3\x82\xaf\xe3\x83\x88\xe3\x82\x92\xe5\x89\x8a\xe9\x99\xa4\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x8b\xe3\x81\xa9\xe3\x81\x86\xe3\x81\x8b\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @return \xe3\x83\xac\xe3\x83\x99\xe3\x83\xab\xe3\x81\x8c\xe3\x82\xa2\xe3\x83\xb3\xe3\x83\xad\xe3\x83\xbc\xe3\x83\x89\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xa6\xe3\x82\x82\xe7\xa0\xb4\xe6\xa3\x84\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xaa\xe3\x81\x84""AtomComponent\xe3\x81\xae\xe3\x83\xaa\xe3\x83\x95\xe3\x82\xa1\xe3\x83\xac\xe3\x83\xb3\xe3\x82\xb9\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 */" },
		{ "CPP_Default_bAutoDestroy", "true" },
		{ "Keywords", "Create" },
		{ "ModuleRelativePath", "Classes/AtomStatics.h" },
		{ "ToolTip", "\xe3\x83\xac\xe3\x83\x99\xe3\x83\xab\xe3\x81\x8c\xe3\x82\xa2\xe3\x83\xb3\xe3\x83\xad\xe3\x83\xbc\xe3\x83\x89\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xa6\xe3\x82\x82\xe7\xa0\xb4\xe6\xa3\x84\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xaa\xe3\x81\x84""AtomComponent\xe3\x82\x92\xe4\xbd\x9c\xe6\x88\x90\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\nAtomComponent\xe3\x81\xae\xe4\xbd\x9c\xe6\x88\x90\xe3\x81\xae\xe3\x81\xbf\xe3\x82\x92\xe8\xa1\x8c\xe3\x81\x84\xe3\x80\x81\xe7\x99\xba\xe9\x9f\xb3\xe3\x81\xaf\xe8\xa1\x8c\xe3\x81\x84\xe3\x81\xbe\xe3\x81\x9b\xe3\x82\x93\xe3\x80\x82\n\xe4\xbb\xbb\xe6\x84\x8f\xe3\x81\xae\xe3\x82\xbf\xe3\x82\xa4\xe3\x83\x9f\xe3\x83\xb3\xe3\x82\xb0\xe3\x81\xa7\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\x92\xe8\xa8\xad\xe5\xae\x9a\xe3\x81\x97\xe3\x80\x81\xe7\x99\xba\xe9\x9f\xb3\xe3\x82\x92\xe9\x96\x8b\xe5\xa7\x8b\xe3\x81\x97\xe3\x81\xa6\xe3\x81\x8f\xe3\x81\xa0\xe3\x81\x95\xe3\x81\x84\xe3\x80\x82\n\xe6\xb4\xbb\xe7\x94\xa8\xe4\xbe\x8b: AISAC\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x88\xe3\x83\xad\xe3\x83\xbc\xe3\x83\xab\xe5\x80\xa4\xe3\x81\xae\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\xaa\xe3\x81\xa9\xe3\x80\x81\xe7\x99\xba\xe9\x9f\xb3\xe9\x96\x8b\xe5\xa7\x8b\xe5\x89\x8d\xe3\x81\xab\xe8\xa8\xad\xe5\xae\x9a\xe3\x81\x8c\xe5\xbf\x85\xe8\xa6\x81\xe3\x81\xaa\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x82\x92\xe3\x83\xac\xe3\x83\x99\xe3\x83\xab\xe3\x82\x92\xe3\x81\xbe\xe3\x81\x9f\xe3\x81\x84\xe3\x81\xa7\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x97\xe3\x81\x9f\xe3\x81\x84\xe5\xa0\xb4\xe5\x90\x88...\xe7\xad\x89\n\n@param WorldContextObject WorldContextObject\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param bAutoDestroy \xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x8c\xe5\xae\x8c\xe4\xba\x86\xe3\x81\x97\xe3\x81\x9f\xe3\x81\xa8\xe3\x81\x8d\xe8\x87\xaa\xe5\x8b\x95\xe7\x9a\x84\xe3\x81\xab\xe3\x82\xaa\xe3\x83\x96\xe3\x82\xb8\xe3\x82\xa7\xe3\x82\xaf\xe3\x83\x88\xe3\x82\x92\xe5\x89\x8a\xe9\x99\xa4\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x8b\xe3\x81\xa9\xe3\x81\x86\xe3\x81\x8b\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@return \xe3\x83\xac\xe3\x83\x99\xe3\x83\xab\xe3\x81\x8c\xe3\x82\xa2\xe3\x83\xb3\xe3\x83\xad\xe3\x83\xbc\xe3\x83\x89\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xa6\xe3\x82\x82\xe7\xa0\xb4\xe6\xa3\x84\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xaa\xe3\x81\x84""AtomComponent\xe3\x81\xae\xe3\x83\xaa\xe3\x83\x95\xe3\x82\xa1\xe3\x83\xac\xe3\x83\xb3\xe3\x82\xb9\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomStatics_CreateRootedAtomComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomStatics, nullptr, "CreateRootedAtomComponent", nullptr, nullptr, sizeof(AtomStatics_eventCreateRootedAtomComponent_Parms), Z_Construct_UFunction_UAtomStatics_CreateRootedAtomComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_CreateRootedAtomComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_CreateRootedAtomComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_CreateRootedAtomComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomStatics_CreateRootedAtomComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomStatics_CreateRootedAtomComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomStatics_GetAtomGameVariable_Statics
	{
		struct AtomStatics_eventGetAtomGameVariable_Parms
		{
			FString GameVariableName;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameVariableName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomStatics_GetAtomGameVariable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventGetAtomGameVariable_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomStatics_GetAtomGameVariable_Statics::NewProp_GameVariableName = { "GameVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventGetAtomGameVariable_Parms, GameVariableName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomStatics_GetAtomGameVariable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_GetAtomGameVariable_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_GetAtomGameVariable_Statics::NewProp_GameVariableName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_GetAtomGameVariable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom" },
		{ "Comment", "/**\n\x09 * AtomCraft\xe4\xb8\x8a\xe3\x81\xa7\xe4\xbd\x9c\xe6\x88\x90\xe3\x81\x97\xe3\x81\x9f\xe3\x82\xb2\xe3\x83\xbc\xe3\x83\xa0\xe5\xa4\x89\xe6\x95\xb0\xe3\x81\xae\xe7\x8f\xbe\xe5\x9c\xa8\xe3\x81\xae\xe5\x80\xa4\xe3\x82\x92\xe5\x8f\x96\xe5\xbe\x97\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 *\n\x09 * @param GameVariableName \xe3\x82\xb2\xe3\x83\xbc\xe3\x83\xa0\xe5\xa4\x89\xe6\x95\xb0\xe5\x90\x8d\xe3\x80\x82\n\x09 * @return \xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x95\xe3\x82\x8c\xe3\x81\x9f\xe5\x90\x8d\xe5\x89\x8d\xe3\x81\xae\xe3\x82\xb2\xe3\x83\xbc\xe3\x83\xa0\xe5\xa4\x89\xe6\x95\xb0\xe3\x81\xae\xe5\x80\xa4\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 */" },
		{ "ModuleRelativePath", "Classes/AtomStatics.h" },
		{ "ToolTip", "AtomCraft\xe4\xb8\x8a\xe3\x81\xa7\xe4\xbd\x9c\xe6\x88\x90\xe3\x81\x97\xe3\x81\x9f\xe3\x82\xb2\xe3\x83\xbc\xe3\x83\xa0\xe5\xa4\x89\xe6\x95\xb0\xe3\x81\xae\xe7\x8f\xbe\xe5\x9c\xa8\xe3\x81\xae\xe5\x80\xa4\xe3\x82\x92\xe5\x8f\x96\xe5\xbe\x97\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\n@param GameVariableName \xe3\x82\xb2\xe3\x83\xbc\xe3\x83\xa0\xe5\xa4\x89\xe6\x95\xb0\xe5\x90\x8d\xe3\x80\x82\n@return \xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x95\xe3\x82\x8c\xe3\x81\x9f\xe5\x90\x8d\xe5\x89\x8d\xe3\x81\xae\xe3\x82\xb2\xe3\x83\xbc\xe3\x83\xa0\xe5\xa4\x89\xe6\x95\xb0\xe3\x81\xae\xe5\x80\xa4\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomStatics_GetAtomGameVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomStatics, nullptr, "GetAtomGameVariable", nullptr, nullptr, sizeof(AtomStatics_eventGetAtomGameVariable_Parms), Z_Construct_UFunction_UAtomStatics_GetAtomGameVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_GetAtomGameVariable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_GetAtomGameVariable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_GetAtomGameVariable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomStatics_GetAtomGameVariable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomStatics_GetAtomGameVariable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomStatics_GetAudioVolumeAffectingListener_Statics
	{
		struct AtomStatics_eventGetAudioVolumeAffectingListener_Parms
		{
			int32 PlayerIndex;
			EAtomAudioVolumeType TypeNum;
			AAtomAudioVolume* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TypeNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TypeNum;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TypeNum_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_GetAudioVolumeAffectingListener_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventGetAudioVolumeAffectingListener_Parms, ReturnValue), Z_Construct_UClass_AAtomAudioVolume_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_GetAudioVolumeAffectingListener_Statics::NewProp_TypeNum_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAtomStatics_GetAudioVolumeAffectingListener_Statics::NewProp_TypeNum = { "TypeNum", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventGetAudioVolumeAffectingListener_Parms, TypeNum), Z_Construct_UEnum_CriWareRuntime_EAtomAudioVolumeType, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_GetAudioVolumeAffectingListener_Statics::NewProp_TypeNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_GetAudioVolumeAffectingListener_Statics::NewProp_TypeNum_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtomStatics_GetAudioVolumeAffectingListener_Statics::NewProp_TypeNum_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_GetAudioVolumeAffectingListener_Statics::NewProp_PlayerIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomStatics_GetAudioVolumeAffectingListener_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventGetAudioVolumeAffectingListener_Parms, PlayerIndex), METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_GetAudioVolumeAffectingListener_Statics::NewProp_PlayerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_GetAudioVolumeAffectingListener_Statics::NewProp_PlayerIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomStatics_GetAudioVolumeAffectingListener_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_GetAudioVolumeAffectingListener_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_GetAudioVolumeAffectingListener_Statics::NewProp_TypeNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_GetAudioVolumeAffectingListener_Statics::NewProp_TypeNum_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_GetAudioVolumeAffectingListener_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_GetAudioVolumeAffectingListener_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom Listener" },
		{ "Comment", "/**\n\x09* \xe3\x83\xaa\xe3\x82\xb9\xe3\x83\x8a\xe3\x83\xbc\xe3\x81\x8c\xe7\x8f\xbe\xe5\x9c\xa8\xe5\xbd\xb1\xe9\x9f\xbf\xe3\x82\x92\xe5\x8f\x97\xe3\x81\x91\xe3\x81\xa6\xe3\x81\x84\xe3\x82\x8b AtomAudioVolume \xe3\x82\x92\xe5\x8f\x96\xe5\xbe\x97\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\n\x09* @param PlayerIndex \xe3\x83\x97\xe3\x83\xac\xe3\x82\xa4\xe3\x83\xa4\xe3\x83\xbc\xe7\x95\xaa\xe5\x8f\xb7\n\x09* @param TypeNum \xe5\x8f\x96\xe5\xbe\x97\xe3\x81\x97\xe3\x81\x9f\xe3\x81\x84 AtomAudioVolume \xe3\x81\xae\xe3\x82\xbf\xe3\x82\xa4\xe3\x83\x97\n\x09* @return \xe3\x83\xaa\xe3\x82\xb9\xe3\x83\x8a\xe3\x83\xbc\xe3\x81\x8c\xe5\xbd\xb1\xe9\x9f\xbf\xe3\x82\x92\xe5\x8f\x97\xe3\x81\x91\xe3\x81\xa6\xe3\x81\x84\xe3\x82\x8b AtomAudioVolume \xe3\x81\xb8\xe3\x81\xae\xe3\x83\x9d\xe3\x82\xa4\xe3\x83\xb3\xe3\x82\xbf\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AtomStatics.h" },
		{ "ToolTip", "\xe3\x83\xaa\xe3\x82\xb9\xe3\x83\x8a\xe3\x83\xbc\xe3\x81\x8c\xe7\x8f\xbe\xe5\x9c\xa8\xe5\xbd\xb1\xe9\x9f\xbf\xe3\x82\x92\xe5\x8f\x97\xe3\x81\x91\xe3\x81\xa6\xe3\x81\x84\xe3\x82\x8b AtomAudioVolume \xe3\x82\x92\xe5\x8f\x96\xe5\xbe\x97\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\n@param PlayerIndex \xe3\x83\x97\xe3\x83\xac\xe3\x82\xa4\xe3\x83\xa4\xe3\x83\xbc\xe7\x95\xaa\xe5\x8f\xb7\n@param TypeNum \xe5\x8f\x96\xe5\xbe\x97\xe3\x81\x97\xe3\x81\x9f\xe3\x81\x84 AtomAudioVolume \xe3\x81\xae\xe3\x82\xbf\xe3\x82\xa4\xe3\x83\x97\n@return \xe3\x83\xaa\xe3\x82\xb9\xe3\x83\x8a\xe3\x83\xbc\xe3\x81\x8c\xe5\xbd\xb1\xe9\x9f\xbf\xe3\x82\x92\xe5\x8f\x97\xe3\x81\x91\xe3\x81\xa6\xe3\x81\x84\xe3\x82\x8b AtomAudioVolume \xe3\x81\xb8\xe3\x81\xae\xe3\x83\x9d\xe3\x82\xa4\xe3\x83\xb3\xe3\x82\xbf" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomStatics_GetAudioVolumeAffectingListener_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomStatics, nullptr, "GetAudioVolumeAffectingListener", nullptr, nullptr, sizeof(AtomStatics_eventGetAudioVolumeAffectingListener_Parms), Z_Construct_UFunction_UAtomStatics_GetAudioVolumeAffectingListener_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_GetAudioVolumeAffectingListener_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_GetAudioVolumeAffectingListener_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_GetAudioVolumeAffectingListener_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomStatics_GetAudioVolumeAffectingListener()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomStatics_GetAudioVolumeAffectingListener_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomStatics_GetListenerFocusPointInfo_Statics
	{
		struct AtomStatics_eventGetListenerFocusPointInfo_Parms
		{
			int32 PlayerIndex;
			FAtomListenerFocusPointInfo ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomStatics_GetListenerFocusPointInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventGetListenerFocusPointInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomListenerFocusPointInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_GetListenerFocusPointInfo_Statics::NewProp_PlayerIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomStatics_GetListenerFocusPointInfo_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventGetListenerFocusPointInfo_Parms, PlayerIndex), METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_GetListenerFocusPointInfo_Statics::NewProp_PlayerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_GetListenerFocusPointInfo_Statics::NewProp_PlayerIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomStatics_GetListenerFocusPointInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_GetListenerFocusPointInfo_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_GetListenerFocusPointInfo_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_GetListenerFocusPointInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom Listener" },
		{ "Comment", "/**\n\x09* \xe3\x83\xaa\xe3\x82\xb9\xe3\x83\x8a\xe3\x83\xbc\xe3\x81\xae\xe3\x83\x95\xe3\x82\xa9\xe3\x83\xbc\xe3\x82\xab\xe3\x82\xb9\xe3\x83\x9d\xe3\x82\xa4\xe3\x83\xb3\xe3\x83\x88\xe6\x83\x85\xe5\xa0\xb1\xe3\x82\x92\xe5\x8f\x96\xe5\xbe\x97\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\n\x09* @param PlayerIndex \xe3\x83\x97\xe3\x83\xac\xe3\x82\xa4\xe3\x83\xa4\xe3\x83\xbc\xe7\x95\xaa\xe5\x8f\xb7\n\x09* @return \xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f\xe3\x83\xaa\xe3\x82\xb9\xe3\x83\x8a\xe3\x83\xbc\xe3\x81\xae\xe3\x83\x95\xe3\x82\xa9\xe3\x83\xbc\xe3\x82\xab\xe3\x82\xb9\xe3\x83\x9d\xe3\x82\xa4\xe3\x83\xb3\xe3\x83\x88\xe6\x83\x85\xe5\xa0\xb1\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\n\x09*/" },
		{ "CPP_Default_PlayerIndex", "0" },
		{ "ModuleRelativePath", "Classes/AtomStatics.h" },
		{ "ToolTip", "\xe3\x83\xaa\xe3\x82\xb9\xe3\x83\x8a\xe3\x83\xbc\xe3\x81\xae\xe3\x83\x95\xe3\x82\xa9\xe3\x83\xbc\xe3\x82\xab\xe3\x82\xb9\xe3\x83\x9d\xe3\x82\xa4\xe3\x83\xb3\xe3\x83\x88\xe6\x83\x85\xe5\xa0\xb1\xe3\x82\x92\xe5\x8f\x96\xe5\xbe\x97\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\n@param PlayerIndex \xe3\x83\x97\xe3\x83\xac\xe3\x82\xa4\xe3\x83\xa4\xe3\x83\xbc\xe7\x95\xaa\xe5\x8f\xb7\n@return \xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f\xe3\x83\xaa\xe3\x82\xb9\xe3\x83\x8a\xe3\x83\xbc\xe3\x81\xae\xe3\x83\x95\xe3\x82\xa9\xe3\x83\xbc\xe3\x82\xab\xe3\x82\xb9\xe3\x83\x9d\xe3\x82\xa4\xe3\x83\xb3\xe3\x83\x88\xe6\x83\x85\xe5\xa0\xb1\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomStatics_GetListenerFocusPointInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomStatics, nullptr, "GetListenerFocusPointInfo", nullptr, nullptr, sizeof(AtomStatics_eventGetListenerFocusPointInfo_Parms), Z_Construct_UFunction_UAtomStatics_GetListenerFocusPointInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_GetListenerFocusPointInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_GetListenerFocusPointInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_GetListenerFocusPointInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomStatics_GetListenerFocusPointInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomStatics_GetListenerFocusPointInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomStatics_GetListenerRegion_Statics
	{
		struct AtomStatics_eventGetListenerRegion_Parms
		{
			int32 PlayerIndex;
			UAtom3dRegion* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_GetListenerRegion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventGetListenerRegion_Parms, ReturnValue), Z_Construct_UClass_UAtom3dRegion_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_GetListenerRegion_Statics::NewProp_PlayerIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomStatics_GetListenerRegion_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventGetListenerRegion_Parms, PlayerIndex), METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_GetListenerRegion_Statics::NewProp_PlayerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_GetListenerRegion_Statics::NewProp_PlayerIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomStatics_GetListenerRegion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_GetListenerRegion_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_GetListenerRegion_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_GetListenerRegion_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom Listener" },
		{ "Comment", "/**\n\x09* \xe3\x83\xaa\xe3\x82\xb9\xe3\x83\x8a\xe3\x83\xbc\xe3\x81\xae\xe3\x83\xaa\xe3\x83\xbc\xe3\x82\xb8\xe3\x83\xa7\xe3\x83\xb3\xe3\x81\xae\xe5\x8f\x96\xe5\xbe\x97\n\x09* @param PlayerIndex \xe3\x83\x97\xe3\x83\xac\xe3\x82\xa4\xe3\x83\xa4\xe3\x83\xbc\xe7\x95\xaa\xe5\x8f\xb7\n\x09* @return \xe3\x83\xaa\xe3\x82\xb9\xe3\x83\x8a\xe3\x83\xbc\xe3\x81\xab\xe8\xa8\xad\xe5\xae\x9a\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xa6\xe3\x81\x84\xe3\x82\x8b\xe3\x83\xaa\xe3\x83\xbc\xe3\x82\xb8\xe3\x83\xa7\xe3\x83\xb3\n\x09*/" },
		{ "CPP_Default_PlayerIndex", "0" },
		{ "ModuleRelativePath", "Classes/AtomStatics.h" },
		{ "ToolTip", "\xe3\x83\xaa\xe3\x82\xb9\xe3\x83\x8a\xe3\x83\xbc\xe3\x81\xae\xe3\x83\xaa\xe3\x83\xbc\xe3\x82\xb8\xe3\x83\xa7\xe3\x83\xb3\xe3\x81\xae\xe5\x8f\x96\xe5\xbe\x97\n@param PlayerIndex \xe3\x83\x97\xe3\x83\xac\xe3\x82\xa4\xe3\x83\xa4\xe3\x83\xbc\xe7\x95\xaa\xe5\x8f\xb7\n@return \xe3\x83\xaa\xe3\x82\xb9\xe3\x83\x8a\xe3\x83\xbc\xe3\x81\xab\xe8\xa8\xad\xe5\xae\x9a\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xa6\xe3\x81\x84\xe3\x82\x8b\xe3\x83\xaa\xe3\x83\xbc\xe3\x82\xb8\xe3\x83\xa7\xe3\x83\xb3" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomStatics_GetListenerRegion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomStatics, nullptr, "GetListenerRegion", nullptr, nullptr, sizeof(AtomStatics_eventGetListenerRegion_Parms), Z_Construct_UFunction_UAtomStatics_GetListenerRegion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_GetListenerRegion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_GetListenerRegion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_GetListenerRegion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomStatics_GetListenerRegion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomStatics_GetListenerRegion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomStatics_GetListeningPoint_Statics
	{
		struct AtomStatics_eventGetListeningPoint_Parms
		{
			int32 PlayerIndex;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomStatics_GetListeningPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventGetListeningPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_GetListeningPoint_Statics::NewProp_PlayerIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomStatics_GetListeningPoint_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventGetListeningPoint_Parms, PlayerIndex), METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_GetListeningPoint_Statics::NewProp_PlayerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_GetListeningPoint_Statics::NewProp_PlayerIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomStatics_GetListeningPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_GetListeningPoint_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_GetListeningPoint_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_GetListeningPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom Listener" },
		{ "Comment", "/**\n\x09* \xe3\x83\xaa\xe3\x82\xb9\xe3\x83\x8b\xe3\x83\xb3\xe3\x82\xb0\xe3\x83\x9d\xe3\x82\xa4\xe3\x83\xb3\xe3\x83\x88\xe3\x81\xae\xe5\x8f\x96\xe5\xbe\x97\n\x09* @param PlayerIndex \xe3\x83\x97\xe3\x83\xac\xe3\x82\xa4\xe3\x83\xa4\xe3\x83\xbc\xe7\x95\xaa\xe5\x8f\xb7\n\x09* @return \xe3\x83\xaa\xe3\x82\xb9\xe3\x83\x8b\xe3\x83\xb3\xe3\x82\xb0\xe3\x83\x9d\xe3\x82\xa4\xe3\x83\xb3\xe3\x83\x88\n\x09*/" },
		{ "CPP_Default_PlayerIndex", "0" },
		{ "ModuleRelativePath", "Classes/AtomStatics.h" },
		{ "ToolTip", "\xe3\x83\xaa\xe3\x82\xb9\xe3\x83\x8b\xe3\x83\xb3\xe3\x82\xb0\xe3\x83\x9d\xe3\x82\xa4\xe3\x83\xb3\xe3\x83\x88\xe3\x81\xae\xe5\x8f\x96\xe5\xbe\x97\n@param PlayerIndex \xe3\x83\x97\xe3\x83\xac\xe3\x82\xa4\xe3\x83\xa4\xe3\x83\xbc\xe7\x95\xaa\xe5\x8f\xb7\n@return \xe3\x83\xaa\xe3\x82\xb9\xe3\x83\x8b\xe3\x83\xb3\xe3\x82\xb0\xe3\x83\x9d\xe3\x82\xa4\xe3\x83\xb3\xe3\x83\x88" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomStatics_GetListeningPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomStatics, nullptr, "GetListeningPoint", nullptr, nullptr, sizeof(AtomStatics_eventGetListeningPoint_Parms), Z_Construct_UFunction_UAtomStatics_GetListeningPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_GetListeningPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_GetListeningPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_GetListeningPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomStatics_GetListeningPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomStatics_GetListeningPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomStatics_LoadAtomConfig_Statics
	{
		struct AtomStatics_eventLoadAtomConfig_Parms
		{
			USoundAtomConfig* AcfObject;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AcfObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtomStatics_LoadAtomConfig_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtomStatics_eventLoadAtomConfig_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomStatics_LoadAtomConfig_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtomStatics_eventLoadAtomConfig_Parms), &Z_Construct_UFunction_UAtomStatics_LoadAtomConfig_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_LoadAtomConfig_Statics::NewProp_AcfObject = { "AcfObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventLoadAtomConfig_Parms, AcfObject), Z_Construct_UClass_USoundAtomConfig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomStatics_LoadAtomConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_LoadAtomConfig_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_LoadAtomConfig_Statics::NewProp_AcfObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_LoadAtomConfig_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom" },
		{ "Comment", "/**\n\x09 * Atom Config\xe3\x82\xa2\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88\xe3\x82\x92\xe3\x83\xad\xe3\x83\xbc\xe3\x83\x89\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * \xe6\x97\xa2\xe3\x81\xab""Atom Config\xe3\x82\xa2\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88\xe3\x81\x8c\xe3\x83\xad\xe3\x83\xbc\xe3\x83\x89\xe6\xb8\x88\xe3\x81\xbf\xe3\x81\xae\xe5\xa0\xb4\xe5\x90\x88\xe3\x80\x81\xe6\x97\xa2\xe5\xad\x98\xe3\x81\xae\xe8\xa8\xad\xe5\xae\x9a\xe3\x82\x92\xe3\x82\xa2\xe3\x83\xb3\xe3\x83\xad\xe3\x83\xbc\xe3\x83\x89\xe3\x81\x97\xe3\x80\x81 [Acf Object] \xe3\x81\xa7\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x95\xe3\x82\x8c\xe3\x81\x9f\xe3\x82\x82\xe3\x81\xae\xe3\x81\xab\xe5\xa4\x89\xe6\x9b\xb4\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 *\n\x09 * @param AcfObject \xe3\x83\xad\xe3\x83\xbc\xe3\x83\x89\xe3\x81\x97\xe3\x81\x9f\xe3\x81\x84 Atom Config \xe3\x82\xa2\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @return \xe6\x88\x90\xe5\x8a\x9f/\xe5\xa4\xb1\xe6\x95\x97\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 */" },
		{ "ModuleRelativePath", "Classes/AtomStatics.h" },
		{ "ToolTip", "Atom Config\xe3\x82\xa2\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88\xe3\x82\x92\xe3\x83\xad\xe3\x83\xbc\xe3\x83\x89\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\xe6\x97\xa2\xe3\x81\xab""Atom Config\xe3\x82\xa2\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88\xe3\x81\x8c\xe3\x83\xad\xe3\x83\xbc\xe3\x83\x89\xe6\xb8\x88\xe3\x81\xbf\xe3\x81\xae\xe5\xa0\xb4\xe5\x90\x88\xe3\x80\x81\xe6\x97\xa2\xe5\xad\x98\xe3\x81\xae\xe8\xa8\xad\xe5\xae\x9a\xe3\x82\x92\xe3\x82\xa2\xe3\x83\xb3\xe3\x83\xad\xe3\x83\xbc\xe3\x83\x89\xe3\x81\x97\xe3\x80\x81 [Acf Object] \xe3\x81\xa7\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x95\xe3\x82\x8c\xe3\x81\x9f\xe3\x82\x82\xe3\x81\xae\xe3\x81\xab\xe5\xa4\x89\xe6\x9b\xb4\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\n@param AcfObject \xe3\x83\xad\xe3\x83\xbc\xe3\x83\x89\xe3\x81\x97\xe3\x81\x9f\xe3\x81\x84 Atom Config \xe3\x82\xa2\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@return \xe6\x88\x90\xe5\x8a\x9f/\xe5\xa4\xb1\xe6\x95\x97\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomStatics_LoadAtomConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomStatics, nullptr, "LoadAtomConfig", nullptr, nullptr, sizeof(AtomStatics_eventLoadAtomConfig_Parms), Z_Construct_UFunction_UAtomStatics_LoadAtomConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_LoadAtomConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_LoadAtomConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_LoadAtomConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomStatics_LoadAtomConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomStatics_LoadAtomConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomStatics_PauseAudioOutput_Statics
	{
		struct AtomStatics_eventPauseAudioOutput_Parms
		{
			bool bPause;
		};
		static void NewProp_bPause_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPause;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtomStatics_PauseAudioOutput_Statics::NewProp_bPause_SetBit(void* Obj)
	{
		((AtomStatics_eventPauseAudioOutput_Parms*)Obj)->bPause = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomStatics_PauseAudioOutput_Statics::NewProp_bPause = { "bPause", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtomStatics_eventPauseAudioOutput_Parms), &Z_Construct_UFunction_UAtomStatics_PauseAudioOutput_Statics::NewProp_bPause_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomStatics_PauseAudioOutput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PauseAudioOutput_Statics::NewProp_bPause,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_PauseAudioOutput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom" },
		{ "Comment", "/**\n\x09 * \xe3\x82\xb2\xe3\x83\xbc\xe3\x83\xa0\xe4\xb8\xad\xe3\x81\xae\xe9\x9f\xb3\xe5\xa3\xb0\xe5\x85\xa8\xe3\x81\xa6\xe4\xb8\x80\xe6\x99\x82\xe5\x81\x9c\xe6\xad\xa2\xe3\x80\x81\xe3\x82\x82\xe3\x81\x97\xe3\x81\x8f\xe3\x81\xaf\xe5\x86\x8d\xe9\x96\x8b\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * \xe3\x83\x9d\xe3\x83\xbc\xe3\x82\xba\xe4\xb8\xad\xe3\x81\xab\xe3\x83\xac\xe3\x83\x99\xe3\x83\xab\xe3\x82\x92\xe7\xa7\xbb\xe5\x8b\x95\xe3\x81\x97\xe3\x81\x9f\xe5\xa0\xb4\xe5\x90\x88\xe3\x80\x81\xe3\x83\xac\xe3\x83\x99\xe3\x83\xab\xe7\xa7\xbb\xe5\x8b\x95\xe6\x99\x82\xe3\x81\xab\xe3\x83\x9d\xe3\x83\xbc\xe3\x82\xba\xe3\x81\x8c\xe8\xa7\xa3\xe9\x99\xa4\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82 \n\x09 *\n\x09 * @param bPause \xe3\x81\x93\xe3\x81\x93\xe3\x81\xabtrue\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x99\xe3\x82\x8b\xe3\x81\xa8\xe4\xb8\x80\xe6\x99\x82\xe5\x81\x9c\xe6\xad\xa2\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82""false\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x99\xe3\x82\x8b\xe3\x81\xa8\xe3\x80\x81\xe5\x86\x8d\xe7\x94\x9f\xe3\x82\x92\xe5\x86\x8d\xe9\x96\x8b\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 */" },
		{ "ModuleRelativePath", "Classes/AtomStatics.h" },
		{ "ToolTip", "\xe3\x82\xb2\xe3\x83\xbc\xe3\x83\xa0\xe4\xb8\xad\xe3\x81\xae\xe9\x9f\xb3\xe5\xa3\xb0\xe5\x85\xa8\xe3\x81\xa6\xe4\xb8\x80\xe6\x99\x82\xe5\x81\x9c\xe6\xad\xa2\xe3\x80\x81\xe3\x82\x82\xe3\x81\x97\xe3\x81\x8f\xe3\x81\xaf\xe5\x86\x8d\xe9\x96\x8b\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\xe3\x83\x9d\xe3\x83\xbc\xe3\x82\xba\xe4\xb8\xad\xe3\x81\xab\xe3\x83\xac\xe3\x83\x99\xe3\x83\xab\xe3\x82\x92\xe7\xa7\xbb\xe5\x8b\x95\xe3\x81\x97\xe3\x81\x9f\xe5\xa0\xb4\xe5\x90\x88\xe3\x80\x81\xe3\x83\xac\xe3\x83\x99\xe3\x83\xab\xe7\xa7\xbb\xe5\x8b\x95\xe6\x99\x82\xe3\x81\xab\xe3\x83\x9d\xe3\x83\xbc\xe3\x82\xba\xe3\x81\x8c\xe8\xa7\xa3\xe9\x99\xa4\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\n@param bPause \xe3\x81\x93\xe3\x81\x93\xe3\x81\xabtrue\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x99\xe3\x82\x8b\xe3\x81\xa8\xe4\xb8\x80\xe6\x99\x82\xe5\x81\x9c\xe6\xad\xa2\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82""false\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x99\xe3\x82\x8b\xe3\x81\xa8\xe3\x80\x81\xe5\x86\x8d\xe7\x94\x9f\xe3\x82\x92\xe5\x86\x8d\xe9\x96\x8b\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomStatics_PauseAudioOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomStatics, nullptr, "PauseAudioOutput", nullptr, nullptr, sizeof(AtomStatics_eventPauseAudioOutput_Parms), Z_Construct_UFunction_UAtomStatics_PauseAudioOutput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_PauseAudioOutput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_PauseAudioOutput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_PauseAudioOutput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomStatics_PauseAudioOutput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomStatics_PauseAudioOutput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocation_Statics
	{
		struct AtomStatics_eventPlayAtomSoundAtLocation_Parms
		{
			const UObject* WorldContextObject;
			USoundAtomCue* Sound;
			FVector Location;
			FAtomComponentParams Params;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Params;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocation_Statics::NewProp_Params_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocation_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventPlayAtomSoundAtLocation_Parms, Params), Z_Construct_UScriptStruct_FAtomComponentParams, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocation_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocation_Statics::NewProp_Params_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventPlayAtomSoundAtLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocation_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventPlayAtomSoundAtLocation_Parms, Sound), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocation_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocation_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventPlayAtomSoundAtLocation_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocation_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocation_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocation_Statics::NewProp_Params,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocation_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocation_Statics::NewProp_Sound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocation_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom" },
		{ "Comment", "/**\n\x09 * \xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x95\xe3\x82\x8c\xe3\x81\x9f\xe4\xbd\x8d\xe7\xbd\xae\xe3\x81\xab\xe9\x9f\xb3\xe6\xba\x90\xe3\x82\x92\xe9\x85\x8d\xe7\xbd\xae\xe3\x81\x97\xe3\x80\x81\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\x92\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * \xe3\x83\xab\xe3\x83\xbc\xe3\x83\x97\xe9\x9f\xb3\xe3\x82\x92\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x99\xe3\x82\x8b\xe3\x81\xa8\xe5\x81\x9c\xe6\xad\xa2\xe3\x81\xa7\xe3\x81\x8d\xe3\x81\xaa\xe3\x81\x84\xe3\x81\x9f\xe3\x82\x81\xe3\x80\x81\xe3\x83\xaf\xe3\x83\xb3\xe3\x82\xb7\xe3\x83\xa7\xe3\x83\x83\xe3\x83\x88\xe9\x9f\xb3\xe3\x81\xab\xe3\x81\xae\xe3\x81\xbf\xe4\xbd\xbf\xe7\x94\xa8\xe3\x81\x97\xe3\x81\xa6\xe3\x81\x8f\xe3\x81\xa0\xe3\x81\x95\xe3\x81\x84\xe3\x80\x82\n\x09 * \xe3\x83\xab\xe3\x83\xbc\xe3\x83\x97\xe9\x9f\xb3\xe3\x81\xae\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\xab\xe3\x81\xaf SpawnAtomSoundAtLocation \xe9\x96\xa2\xe6\x95\xb0\xe3\x82\x92\xe4\xbd\xbf\xe7\x94\xa8\xe3\x81\x97\xe3\x81\xa6\xe3\x81\x8f\xe3\x81\xa0\xe3\x81\x95\xe3\x81\x84\xe3\x80\x82\n\x09 * \xe6\x9c\xac\xe9\x96\xa2\xe6\x95\xb0\xe3\x81\xa7\xe9\x85\x8d\xe7\xbd\xae\xe3\x81\x97\xe3\x81\x9f\xe9\x9f\xb3\xe6\xba\x90\xe3\x81\xaf\xe3\x81\xa9\xe3\x81\xae""Actor\xe3\x81\xab\xe3\x82\x82\xe8\xbf\xbd\xe5\xbe\x93\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x9b\xe3\x82\x93\xe3\x80\x82\n\x09 *\n\x09 * @param WorldContextObject WorldContextObject\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @param Sound Atom\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @param Location \xe9\x9f\xb3\xe6\xba\x90\xe3\x82\x92\xe9\x85\x8d\xe7\xbd\xae\xe3\x81\x99\xe3\x82\x8b\xe5\xba\xa7\xe6\xa8\x99\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @param Params \xe4\xbb\xbb\xe6\x84\x8f\xe3\x81\xae\xe3\x83\x91\xe3\x83\xa9\xe3\x83\xa1\xe3\x83\xbc\xe3\x82\xbf\xe3\x83\xbc\xe3\x82\x92\xe8\xa8\xad\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f""AtomComponentParams\xe6\xa7\x8b\xe9\x80\xa0\xe4\xbd\x93\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 */" },
		{ "ModuleRelativePath", "Classes/AtomStatics.h" },
		{ "ToolTip", "\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x95\xe3\x82\x8c\xe3\x81\x9f\xe4\xbd\x8d\xe7\xbd\xae\xe3\x81\xab\xe9\x9f\xb3\xe6\xba\x90\xe3\x82\x92\xe9\x85\x8d\xe7\xbd\xae\xe3\x81\x97\xe3\x80\x81\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\x92\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\xe3\x83\xab\xe3\x83\xbc\xe3\x83\x97\xe9\x9f\xb3\xe3\x82\x92\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x99\xe3\x82\x8b\xe3\x81\xa8\xe5\x81\x9c\xe6\xad\xa2\xe3\x81\xa7\xe3\x81\x8d\xe3\x81\xaa\xe3\x81\x84\xe3\x81\x9f\xe3\x82\x81\xe3\x80\x81\xe3\x83\xaf\xe3\x83\xb3\xe3\x82\xb7\xe3\x83\xa7\xe3\x83\x83\xe3\x83\x88\xe9\x9f\xb3\xe3\x81\xab\xe3\x81\xae\xe3\x81\xbf\xe4\xbd\xbf\xe7\x94\xa8\xe3\x81\x97\xe3\x81\xa6\xe3\x81\x8f\xe3\x81\xa0\xe3\x81\x95\xe3\x81\x84\xe3\x80\x82\n\xe3\x83\xab\xe3\x83\xbc\xe3\x83\x97\xe9\x9f\xb3\xe3\x81\xae\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\xab\xe3\x81\xaf SpawnAtomSoundAtLocation \xe9\x96\xa2\xe6\x95\xb0\xe3\x82\x92\xe4\xbd\xbf\xe7\x94\xa8\xe3\x81\x97\xe3\x81\xa6\xe3\x81\x8f\xe3\x81\xa0\xe3\x81\x95\xe3\x81\x84\xe3\x80\x82\n\xe6\x9c\xac\xe9\x96\xa2\xe6\x95\xb0\xe3\x81\xa7\xe9\x85\x8d\xe7\xbd\xae\xe3\x81\x97\xe3\x81\x9f\xe9\x9f\xb3\xe6\xba\x90\xe3\x81\xaf\xe3\x81\xa9\xe3\x81\xae""Actor\xe3\x81\xab\xe3\x82\x82\xe8\xbf\xbd\xe5\xbe\x93\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x9b\xe3\x82\x93\xe3\x80\x82\n\n@param WorldContextObject WorldContextObject\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param Sound Atom\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param Location \xe9\x9f\xb3\xe6\xba\x90\xe3\x82\x92\xe9\x85\x8d\xe7\xbd\xae\xe3\x81\x99\xe3\x82\x8b\xe5\xba\xa7\xe6\xa8\x99\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param Params \xe4\xbb\xbb\xe6\x84\x8f\xe3\x81\xae\xe3\x83\x91\xe3\x83\xa9\xe3\x83\xa1\xe3\x83\xbc\xe3\x82\xbf\xe3\x83\xbc\xe3\x82\x92\xe8\xa8\xad\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f""AtomComponentParams\xe6\xa7\x8b\xe9\x80\xa0\xe4\xbd\x93\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomStatics, nullptr, "PlayAtomSoundAtLocation", nullptr, nullptr, sizeof(AtomStatics_eventPlayAtomSoundAtLocation_Parms), Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocationByName_Statics
	{
		struct AtomStatics_eventPlayAtomSoundAtLocationByName_Parms
		{
			const UObject* WorldContextObject;
			USoundAtomCueSheet* CueSheet;
			FString CueName;
			FVector Location;
			FAtomComponentParams Params;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Params;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CueName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CueSheet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocationByName_Statics::NewProp_Params_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocationByName_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventPlayAtomSoundAtLocationByName_Parms, Params), Z_Construct_UScriptStruct_FAtomComponentParams, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocationByName_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocationByName_Statics::NewProp_Params_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocationByName_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventPlayAtomSoundAtLocationByName_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocationByName_Statics::NewProp_CueName = { "CueName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventPlayAtomSoundAtLocationByName_Parms, CueName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocationByName_Statics::NewProp_CueSheet = { "CueSheet", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventPlayAtomSoundAtLocationByName_Parms, CueSheet), Z_Construct_UClass_USoundAtomCueSheet_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocationByName_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocationByName_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventPlayAtomSoundAtLocationByName_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocationByName_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocationByName_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocationByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocationByName_Statics::NewProp_Params,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocationByName_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocationByName_Statics::NewProp_CueName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocationByName_Statics::NewProp_CueSheet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocationByName_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocationByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom" },
		{ "Comment", "/**\n\x09 * \xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x95\xe3\x82\x8c\xe3\x81\x9f\xe4\xbd\x8d\xe7\xbd\xae\xe3\x81\xab\xe9\x9f\xb3\xe6\xba\x90\xe3\x82\x92\xe9\x85\x8d\xe7\xbd\xae\xe3\x81\x97\xe3\x80\x81\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\x92\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * \xe3\x83\xab\xe3\x83\xbc\xe3\x83\x97\xe9\x9f\xb3\xe3\x82\x92\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x99\xe3\x82\x8b\xe3\x81\xa8\xe5\x81\x9c\xe6\xad\xa2\xe3\x81\xa7\xe3\x81\x8d\xe3\x81\xaa\xe3\x81\x84\xe3\x81\x9f\xe3\x82\x81\xe3\x80\x81\xe3\x83\xaf\xe3\x83\xb3\xe3\x82\xb7\xe3\x83\xa7\xe3\x83\x83\xe3\x83\x88\xe9\x9f\xb3\xe3\x81\xab\xe3\x81\xae\xe3\x81\xbf\xe4\xbd\xbf\xe7\x94\xa8\xe3\x81\x97\xe3\x81\xa6\xe3\x81\x8f\xe3\x81\xa0\xe3\x81\x95\xe3\x81\x84\xe3\x80\x82\n\x09 * \xe3\x83\xab\xe3\x83\xbc\xe3\x83\x97\xe9\x9f\xb3\xe3\x81\xae\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\xab\xe3\x81\xaf SpawnAtomSoundAtLocation \xe9\x96\xa2\xe6\x95\xb0\xe3\x82\x92\xe4\xbd\xbf\xe7\x94\xa8\xe3\x81\x97\xe3\x81\xa6\xe3\x81\x8f\xe3\x81\xa0\xe3\x81\x95\xe3\x81\x84\xe3\x80\x82\n\x09 * \xe6\x9c\xac\xe9\x96\xa2\xe6\x95\xb0\xe3\x81\xa7\xe9\x85\x8d\xe7\xbd\xae\xe3\x81\x97\xe3\x81\x9f\xe9\x9f\xb3\xe6\xba\x90\xe3\x81\xaf\xe3\x81\xa9\xe3\x81\xae""Actor\xe3\x81\xab\xe3\x82\x82\xe8\xbf\xbd\xe5\xbe\x93\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x9b\xe3\x82\x93\xe3\x80\x82\n\x09 * \xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\xb7\xe3\x83\xbc\xe3\x83\x88\xe3\x81\xa8\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe5\x90\x8d\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x99\xe3\x82\x8b\xe3\x83\x90\xe3\x83\xbc\xe3\x82\xb8\xe3\x83\xa7\xe3\x83\xb3\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\n\x09 * \xe6\xb3\xa8\xe6\x84\x8f: \xe3\x82\xab\xe3\x83\xaa\xe3\x83\xb3\xe3\x82\xb0\xe6\xa9\x9f\xe8\x83\xbd\xe3\x82\x84""Economic-Tick\xe6\xa9\x9f\xe8\x83\xbd\xe3\x81\xaf\xe9\x81\xa9\xe7\x94\xa8\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xbe\xe3\x81\x9b\xe3\x82\x93\xe3\x80\x82\n\x09 *\n\x09 * @param WorldContextObject WorldContextObject\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @param CueSheet Atom\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\xb7\xe3\x83\xbc\xe3\x83\x88\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @param CueName \xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe5\x90\x8d\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @param Location \xe9\x9f\xb3\xe6\xba\x90\xe3\x82\x92\xe9\x85\x8d\xe7\xbd\xae\xe3\x81\x99\xe3\x82\x8b\xe5\xba\xa7\xe6\xa8\x99\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @param Params \xe4\xbb\xbb\xe6\x84\x8f\xe3\x81\xae\xe3\x83\x91\xe3\x83\xa9\xe3\x83\xa1\xe3\x83\xbc\xe3\x82\xbf\xe3\x83\xbc\xe3\x82\x92\xe8\xa8\xad\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f""AtomComponentParams\xe6\xa7\x8b\xe9\x80\xa0\xe4\xbd\x93\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 */" },
		{ "ModuleRelativePath", "Classes/AtomStatics.h" },
		{ "ToolTip", "\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x95\xe3\x82\x8c\xe3\x81\x9f\xe4\xbd\x8d\xe7\xbd\xae\xe3\x81\xab\xe9\x9f\xb3\xe6\xba\x90\xe3\x82\x92\xe9\x85\x8d\xe7\xbd\xae\xe3\x81\x97\xe3\x80\x81\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\x92\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\xe3\x83\xab\xe3\x83\xbc\xe3\x83\x97\xe9\x9f\xb3\xe3\x82\x92\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x99\xe3\x82\x8b\xe3\x81\xa8\xe5\x81\x9c\xe6\xad\xa2\xe3\x81\xa7\xe3\x81\x8d\xe3\x81\xaa\xe3\x81\x84\xe3\x81\x9f\xe3\x82\x81\xe3\x80\x81\xe3\x83\xaf\xe3\x83\xb3\xe3\x82\xb7\xe3\x83\xa7\xe3\x83\x83\xe3\x83\x88\xe9\x9f\xb3\xe3\x81\xab\xe3\x81\xae\xe3\x81\xbf\xe4\xbd\xbf\xe7\x94\xa8\xe3\x81\x97\xe3\x81\xa6\xe3\x81\x8f\xe3\x81\xa0\xe3\x81\x95\xe3\x81\x84\xe3\x80\x82\n\xe3\x83\xab\xe3\x83\xbc\xe3\x83\x97\xe9\x9f\xb3\xe3\x81\xae\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\xab\xe3\x81\xaf SpawnAtomSoundAtLocation \xe9\x96\xa2\xe6\x95\xb0\xe3\x82\x92\xe4\xbd\xbf\xe7\x94\xa8\xe3\x81\x97\xe3\x81\xa6\xe3\x81\x8f\xe3\x81\xa0\xe3\x81\x95\xe3\x81\x84\xe3\x80\x82\n\xe6\x9c\xac\xe9\x96\xa2\xe6\x95\xb0\xe3\x81\xa7\xe9\x85\x8d\xe7\xbd\xae\xe3\x81\x97\xe3\x81\x9f\xe9\x9f\xb3\xe6\xba\x90\xe3\x81\xaf\xe3\x81\xa9\xe3\x81\xae""Actor\xe3\x81\xab\xe3\x82\x82\xe8\xbf\xbd\xe5\xbe\x93\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x9b\xe3\x82\x93\xe3\x80\x82\n\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\xb7\xe3\x83\xbc\xe3\x83\x88\xe3\x81\xa8\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe5\x90\x8d\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x99\xe3\x82\x8b\xe3\x83\x90\xe3\x83\xbc\xe3\x82\xb8\xe3\x83\xa7\xe3\x83\xb3\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\n\xe6\xb3\xa8\xe6\x84\x8f: \xe3\x82\xab\xe3\x83\xaa\xe3\x83\xb3\xe3\x82\xb0\xe6\xa9\x9f\xe8\x83\xbd\xe3\x82\x84""Economic-Tick\xe6\xa9\x9f\xe8\x83\xbd\xe3\x81\xaf\xe9\x81\xa9\xe7\x94\xa8\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xbe\xe3\x81\x9b\xe3\x82\x93\xe3\x80\x82\n\n@param WorldContextObject WorldContextObject\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param CueSheet Atom\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\xb7\xe3\x83\xbc\xe3\x83\x88\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param CueName \xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe5\x90\x8d\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param Location \xe9\x9f\xb3\xe6\xba\x90\xe3\x82\x92\xe9\x85\x8d\xe7\xbd\xae\xe3\x81\x99\xe3\x82\x8b\xe5\xba\xa7\xe6\xa8\x99\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param Params \xe4\xbb\xbb\xe6\x84\x8f\xe3\x81\xae\xe3\x83\x91\xe3\x83\xa9\xe3\x83\xa1\xe3\x83\xbc\xe3\x82\xbf\xe3\x83\xbc\xe3\x82\x92\xe8\xa8\xad\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f""AtomComponentParams\xe6\xa7\x8b\xe9\x80\xa0\xe4\xbd\x93\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocationByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomStatics, nullptr, "PlayAtomSoundAtLocationByName", nullptr, nullptr, sizeof(AtomStatics_eventPlayAtomSoundAtLocationByName_Parms), Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocationByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocationByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocationByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocationByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocationByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocationByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomStatics_PlaySoundAtLocation_Statics
	{
		struct AtomStatics_eventPlaySoundAtLocation_Parms
		{
			UObject* WorldContextObject;
			USoundAtomCue* Sound;
			FVector Location;
			FRotator Rotation;
			float VolumeMultiplier;
			float PitchMultiplier;
			float StartTime;
			USoundAttenuation* AttenuationSettings;
			USoundConcurrency* ConcurrencySettings;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConcurrencySettings;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttenuationSettings;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchMultiplier;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sound;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_PlaySoundAtLocation_Statics::NewProp_ConcurrencySettings = { "ConcurrencySettings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventPlaySoundAtLocation_Parms, ConcurrencySettings), Z_Construct_UClass_USoundConcurrency_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_PlaySoundAtLocation_Statics::NewProp_AttenuationSettings = { "AttenuationSettings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventPlaySoundAtLocation_Parms, AttenuationSettings), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomStatics_PlaySoundAtLocation_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventPlaySoundAtLocation_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomStatics_PlaySoundAtLocation_Statics::NewProp_PitchMultiplier = { "PitchMultiplier", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventPlaySoundAtLocation_Parms, PitchMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomStatics_PlaySoundAtLocation_Statics::NewProp_VolumeMultiplier = { "VolumeMultiplier", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventPlaySoundAtLocation_Parms, VolumeMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomStatics_PlaySoundAtLocation_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventPlaySoundAtLocation_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomStatics_PlaySoundAtLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventPlaySoundAtLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_PlaySoundAtLocation_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventPlaySoundAtLocation_Parms, Sound), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_PlaySoundAtLocation_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventPlaySoundAtLocation_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomStatics_PlaySoundAtLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlaySoundAtLocation_Statics::NewProp_ConcurrencySettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlaySoundAtLocation_Statics::NewProp_AttenuationSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlaySoundAtLocation_Statics::NewProp_StartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlaySoundAtLocation_Statics::NewProp_PitchMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlaySoundAtLocation_Statics::NewProp_VolumeMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlaySoundAtLocation_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlaySoundAtLocation_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlaySoundAtLocation_Statics::NewProp_Sound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlaySoundAtLocation_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_PlaySoundAtLocation_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "Category", "Atom" },
		{ "Comment", "/**\n\x09 * \xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x95\xe3\x82\x8c\xe3\x81\x9f\xe4\xbd\x8d\xe7\xbd\xae\xe3\x81\xab\xe9\x9f\xb3\xe6\xba\x90\xe3\x82\x92\xe9\x85\x8d\xe7\xbd\xae\xe3\x81\x97\xe3\x80\x81\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\x92\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * \xe3\x83\xab\xe3\x83\xbc\xe3\x83\x97\xe9\x9f\xb3\xe3\x82\x92\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x99\xe3\x82\x8b\xe3\x81\xa8\xe5\x81\x9c\xe6\xad\xa2\xe3\x81\xa7\xe3\x81\x8d\xe3\x81\xaa\xe3\x81\x84\xe3\x81\x9f\xe3\x82\x81\xe3\x80\x81\xe3\x83\xaf\xe3\x83\xb3\xe3\x82\xb7\xe3\x83\xa7\xe3\x83\x83\xe3\x83\x88\xe9\x9f\xb3\xe3\x81\xab\xe3\x81\xae\xe3\x81\xbf\xe4\xbd\xbf\xe7\x94\xa8\xe3\x81\x97\xe3\x81\xa6\xe3\x81\x8f\xe3\x81\xa0\xe3\x81\x95\xe3\x81\x84\xe3\x80\x82\n\x09 * \xe3\x83\xab\xe3\x83\xbc\xe3\x83\x97\xe9\x9f\xb3\xe3\x81\xae\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\xab\xe3\x81\xaf SpawnSoundAtLocation \xe9\x96\xa2\xe6\x95\xb0\xe3\x82\x92\xe4\xbd\xbf\xe7\x94\xa8\xe3\x81\x97\xe3\x81\xa6\xe3\x81\x8f\xe3\x81\xa0\xe3\x81\x95\xe3\x81\x84\xe3\x80\x82\n\x09 * \xe6\x9c\xac\xe9\x96\xa2\xe6\x95\xb0\xe3\x81\xa7\xe9\x85\x8d\xe7\xbd\xae\xe3\x81\x97\xe3\x81\x9f\xe9\x9f\xb3\xe6\xba\x90\xe3\x81\xaf\xe3\x81\xa9\xe3\x81\xae""Actor\xe3\x81\xab\xe3\x82\x82\xe8\xbf\xbd\xe5\xbe\x93\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x9b\xe3\x82\x93\xe3\x80\x82\n\x09 * UE4\xe6\xa8\x99\xe6\xba\x96\xe3\x82\xaa\xe3\x83\xbc\xe3\x83\x87\xe3\x82\xa3\xe3\x82\xaa\xe3\x81\xaeUGameplayStatics::PlaySoundAtLocation\xe4\xba\x92\xe6\x8f\x9b\xe3\x81\xae""API\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\n\x09 * \xef\xbc\x88\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x99\xe3\x82\x8b\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x81\x8c""AtomCue\xe3\x82\xa2\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88\xe3\x81\xa7\xe3\x81\x82\xe3\x82\x8b\xe7\x82\xb9\xe3\x81\x8c\xe7\x95\xb0\xe3\x81\xaa\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\xef\xbc\x89\n\x09 * \xe5\x90\x84\xe5\xbc\x95\xe6\x95\xb0\xe3\x81\xae\xe6\x84\x8f\xe5\x91\xb3\xe3\x81\xafUGamePlayStatics::SpawnSoundAtLocation\xe9\x96\xa2\xe6\x95\xb0\xe3\x81\xab\xe5\xbe\x93\xe3\x81\x84\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 *\n\x09 * @param WorldContextObject WorldContextObject\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @param Sound Atom\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @param Location \xe9\x9f\xb3\xe6\xba\x90\xe3\x82\x92\xe9\x85\x8d\xe7\xbd\xae\xe3\x81\x99\xe3\x82\x8b\xe5\xba\xa7\xe6\xa8\x99\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @param Rotation \xe5\x9b\x9e\xe8\xbb\xa2\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @param VolumeMultiplier \xe9\x9f\xb3\xe9\x87\x8f\xe3\x81\xae\xe5\x80\x8d\xe7\x8e\x87\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @param PitchMultiplier \xe3\x83\x94\xe3\x83\x83\xe3\x83\x81\xe3\x81\xae\xe5\x80\x8d\xe7\x8e\x87\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @param StartTime \xe3\x81\x93\xe3\x81\x93\xe3\x81\xab\xe9\x96\x8b\xe5\xa7\x8b\xe6\x99\x82\xe9\x96\x93(\xe7\xa7\x92)\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x93\xe3\x81\xa8\xe3\x81\xa7\xe3\x80\x81\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf\xe3\x82\x92\xe9\x80\x94\xe4\xb8\xad\xe3\x81\x8b\xe3\x82\x89\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x93\xe3\x81\xa8\xe3\x82\x82\xe5\x8f\xaf\xe8\x83\xbd\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\n\x09 * @param AttenuationSettings Attenuation\xe3\x81\xae\xe8\xa8\xad\xe5\xae\x9a\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @param ConcurrencySettings Concurrency\xe3\x81\xae\xe8\xa8\xad\xe5\xae\x9a\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 */" },
		{ "CPP_Default_AttenuationSettings", "None" },
		{ "CPP_Default_ConcurrencySettings", "None" },
		{ "CPP_Default_PitchMultiplier", "1.000000" },
		{ "CPP_Default_Rotation", "" },
		{ "CPP_Default_StartTime", "0.000000" },
		{ "CPP_Default_VolumeMultiplier", "1.000000" },
		{ "ModuleRelativePath", "Classes/AtomStatics.h" },
		{ "ToolTip", "\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x95\xe3\x82\x8c\xe3\x81\x9f\xe4\xbd\x8d\xe7\xbd\xae\xe3\x81\xab\xe9\x9f\xb3\xe6\xba\x90\xe3\x82\x92\xe9\x85\x8d\xe7\xbd\xae\xe3\x81\x97\xe3\x80\x81\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\x92\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\xe3\x83\xab\xe3\x83\xbc\xe3\x83\x97\xe9\x9f\xb3\xe3\x82\x92\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x99\xe3\x82\x8b\xe3\x81\xa8\xe5\x81\x9c\xe6\xad\xa2\xe3\x81\xa7\xe3\x81\x8d\xe3\x81\xaa\xe3\x81\x84\xe3\x81\x9f\xe3\x82\x81\xe3\x80\x81\xe3\x83\xaf\xe3\x83\xb3\xe3\x82\xb7\xe3\x83\xa7\xe3\x83\x83\xe3\x83\x88\xe9\x9f\xb3\xe3\x81\xab\xe3\x81\xae\xe3\x81\xbf\xe4\xbd\xbf\xe7\x94\xa8\xe3\x81\x97\xe3\x81\xa6\xe3\x81\x8f\xe3\x81\xa0\xe3\x81\x95\xe3\x81\x84\xe3\x80\x82\n\xe3\x83\xab\xe3\x83\xbc\xe3\x83\x97\xe9\x9f\xb3\xe3\x81\xae\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\xab\xe3\x81\xaf SpawnSoundAtLocation \xe9\x96\xa2\xe6\x95\xb0\xe3\x82\x92\xe4\xbd\xbf\xe7\x94\xa8\xe3\x81\x97\xe3\x81\xa6\xe3\x81\x8f\xe3\x81\xa0\xe3\x81\x95\xe3\x81\x84\xe3\x80\x82\n\xe6\x9c\xac\xe9\x96\xa2\xe6\x95\xb0\xe3\x81\xa7\xe9\x85\x8d\xe7\xbd\xae\xe3\x81\x97\xe3\x81\x9f\xe9\x9f\xb3\xe6\xba\x90\xe3\x81\xaf\xe3\x81\xa9\xe3\x81\xae""Actor\xe3\x81\xab\xe3\x82\x82\xe8\xbf\xbd\xe5\xbe\x93\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x9b\xe3\x82\x93\xe3\x80\x82\nUE4\xe6\xa8\x99\xe6\xba\x96\xe3\x82\xaa\xe3\x83\xbc\xe3\x83\x87\xe3\x82\xa3\xe3\x82\xaa\xe3\x81\xaeUGameplayStatics::PlaySoundAtLocation\xe4\xba\x92\xe6\x8f\x9b\xe3\x81\xae""API\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\n\xef\xbc\x88\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x99\xe3\x82\x8b\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x81\x8c""AtomCue\xe3\x82\xa2\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88\xe3\x81\xa7\xe3\x81\x82\xe3\x82\x8b\xe7\x82\xb9\xe3\x81\x8c\xe7\x95\xb0\xe3\x81\xaa\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\xef\xbc\x89\n\xe5\x90\x84\xe5\xbc\x95\xe6\x95\xb0\xe3\x81\xae\xe6\x84\x8f\xe5\x91\xb3\xe3\x81\xafUGamePlayStatics::SpawnSoundAtLocation\xe9\x96\xa2\xe6\x95\xb0\xe3\x81\xab\xe5\xbe\x93\xe3\x81\x84\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\n@param WorldContextObject WorldContextObject\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param Sound Atom\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param Location \xe9\x9f\xb3\xe6\xba\x90\xe3\x82\x92\xe9\x85\x8d\xe7\xbd\xae\xe3\x81\x99\xe3\x82\x8b\xe5\xba\xa7\xe6\xa8\x99\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param Rotation \xe5\x9b\x9e\xe8\xbb\xa2\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param VolumeMultiplier \xe9\x9f\xb3\xe9\x87\x8f\xe3\x81\xae\xe5\x80\x8d\xe7\x8e\x87\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param PitchMultiplier \xe3\x83\x94\xe3\x83\x83\xe3\x83\x81\xe3\x81\xae\xe5\x80\x8d\xe7\x8e\x87\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param StartTime \xe3\x81\x93\xe3\x81\x93\xe3\x81\xab\xe9\x96\x8b\xe5\xa7\x8b\xe6\x99\x82\xe9\x96\x93(\xe7\xa7\x92)\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x93\xe3\x81\xa8\xe3\x81\xa7\xe3\x80\x81\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf\xe3\x82\x92\xe9\x80\x94\xe4\xb8\xad\xe3\x81\x8b\xe3\x82\x89\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x93\xe3\x81\xa8\xe3\x82\x82\xe5\x8f\xaf\xe8\x83\xbd\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\n@param AttenuationSettings Attenuation\xe3\x81\xae\xe8\xa8\xad\xe5\xae\x9a\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param ConcurrencySettings Concurrency\xe3\x81\xae\xe8\xa8\xad\xe5\xae\x9a\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomStatics_PlaySoundAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomStatics, nullptr, "PlaySoundAtLocation", nullptr, nullptr, sizeof(AtomStatics_eventPlaySoundAtLocation_Parms), Z_Construct_UFunction_UAtomStatics_PlaySoundAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_PlaySoundAtLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_PlaySoundAtLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_PlaySoundAtLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomStatics_PlaySoundAtLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomStatics_PlaySoundAtLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomStatics_PlaySoundAttached_Statics
	{
		struct AtomStatics_eventPlaySoundAttached_Parms
		{
			USoundAtomCue* Sound;
			USceneComponent* AttachToComponent;
			FName AttachPointName;
			FVector Location;
			bool bStopWhenAttachedToDestroyed;
			float VolumeMultiplier;
			float PitchMultiplier;
			float StartTime;
			USoundAttenuation* AttenuationSettings;
			UAtomComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttenuationSettings;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchMultiplier;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier;
		static void NewProp_bStopWhenAttachedToDestroyed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStopWhenAttachedToDestroyed;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AttachPointName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachToComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttachToComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_PlaySoundAttached_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_PlaySoundAttached_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventPlaySoundAttached_Parms, ReturnValue), Z_Construct_UClass_UAtomComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_PlaySoundAttached_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_PlaySoundAttached_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_PlaySoundAttached_Statics::NewProp_AttenuationSettings = { "AttenuationSettings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventPlaySoundAttached_Parms, AttenuationSettings), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomStatics_PlaySoundAttached_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventPlaySoundAttached_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomStatics_PlaySoundAttached_Statics::NewProp_PitchMultiplier = { "PitchMultiplier", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventPlaySoundAttached_Parms, PitchMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomStatics_PlaySoundAttached_Statics::NewProp_VolumeMultiplier = { "VolumeMultiplier", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventPlaySoundAttached_Parms, VolumeMultiplier), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAtomStatics_PlaySoundAttached_Statics::NewProp_bStopWhenAttachedToDestroyed_SetBit(void* Obj)
	{
		((AtomStatics_eventPlaySoundAttached_Parms*)Obj)->bStopWhenAttachedToDestroyed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomStatics_PlaySoundAttached_Statics::NewProp_bStopWhenAttachedToDestroyed = { "bStopWhenAttachedToDestroyed", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtomStatics_eventPlaySoundAttached_Parms), &Z_Construct_UFunction_UAtomStatics_PlaySoundAttached_Statics::NewProp_bStopWhenAttachedToDestroyed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomStatics_PlaySoundAttached_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventPlaySoundAttached_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAtomStatics_PlaySoundAttached_Statics::NewProp_AttachPointName = { "AttachPointName", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventPlaySoundAttached_Parms, AttachPointName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_PlaySoundAttached_Statics::NewProp_AttachToComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_PlaySoundAttached_Statics::NewProp_AttachToComponent = { "AttachToComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventPlaySoundAttached_Parms, AttachToComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_PlaySoundAttached_Statics::NewProp_AttachToComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_PlaySoundAttached_Statics::NewProp_AttachToComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_PlaySoundAttached_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventPlaySoundAttached_Parms, Sound), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomStatics_PlaySoundAttached_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlaySoundAttached_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlaySoundAttached_Statics::NewProp_AttenuationSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlaySoundAttached_Statics::NewProp_StartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlaySoundAttached_Statics::NewProp_PitchMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlaySoundAttached_Statics::NewProp_VolumeMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlaySoundAttached_Statics::NewProp_bStopWhenAttachedToDestroyed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlaySoundAttached_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlaySoundAttached_Statics::NewProp_AttachPointName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlaySoundAttached_Statics::NewProp_AttachToComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlaySoundAttached_Statics::NewProp_Sound,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_PlaySoundAttached_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "Atom" },
		{ "Comment", "/**\n\x09 * \xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x95\xe3\x82\x8c\xe3\x81\x9f\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x9d\xe3\x83\xbc\xe3\x83\x8d\xe3\x83\xb3\xe3\x83\x88\xe3\x81\xab\xe8\xbf\xbd\xe5\xbe\x93\xe3\x81\x99\xe3\x82\x8b\xe9\x9f\xb3\xe6\xba\x90\xe3\x82\x92\xe9\x85\x8d\xe7\xbd\xae\xe3\x81\x97\xe3\x80\x81\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\x92\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * \xe5\x90\x84\xe5\xbc\x95\xe6\x95\xb0\xe3\x81\xae\xe6\x84\x8f\xe5\x91\xb3\xe3\x81\xafUGamePlayStatics::SpawnSoundAttached\xe9\x96\xa2\xe6\x95\xb0\xe3\x81\xab\xe5\xbe\x93\xe3\x81\x84\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * \xe2\x80\xbb\xe6\x9c\xac\xe9\x96\xa2\xe6\x95\xb0\xe3\x81\xaf\xe5\xb0\x86\xe6\x9d\xa5\xe3\x81\xae\xe3\x83\x90\xe3\x83\xbc\xe3\x82\xb8\xe3\x83\xa7\xe3\x83\xb3\xe3\x81\xa7\xe5\x89\x8a\xe9\x99\xa4\xe3\x81\x95\xe3\x82\x8c\xe3\x82\x8b\xe4\xba\x88\xe5\xae\x9a\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82SpawnSoundAttached\xe9\x96\xa2\xe6\x95\xb0\xe3\x81\xb8\xe7\xa7\xbb\xe8\xa1\x8c\xe3\x82\x92\xe3\x81\x8a\xe9\xa1\x98\xe3\x81\x84\xe3\x81\x84\xe3\x81\x9f\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 */" },
		{ "CPP_Default_AttachPointName", "None" },
		{ "CPP_Default_AttenuationSettings", "None" },
		{ "CPP_Default_bStopWhenAttachedToDestroyed", "false" },
		{ "CPP_Default_Location", "" },
		{ "CPP_Default_PitchMultiplier", "1.000000" },
		{ "CPP_Default_StartTime", "0.000000" },
		{ "CPP_Default_VolumeMultiplier", "1.000000" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function will be removed in UE4.25. Please use UAtomStatics::SpawnSoundAttached function instead." },
		{ "ModuleRelativePath", "Classes/AtomStatics.h" },
		{ "ToolTip", "\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x95\xe3\x82\x8c\xe3\x81\x9f\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x9d\xe3\x83\xbc\xe3\x83\x8d\xe3\x83\xb3\xe3\x83\x88\xe3\x81\xab\xe8\xbf\xbd\xe5\xbe\x93\xe3\x81\x99\xe3\x82\x8b\xe9\x9f\xb3\xe6\xba\x90\xe3\x82\x92\xe9\x85\x8d\xe7\xbd\xae\xe3\x81\x97\xe3\x80\x81\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\x92\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\xe5\x90\x84\xe5\xbc\x95\xe6\x95\xb0\xe3\x81\xae\xe6\x84\x8f\xe5\x91\xb3\xe3\x81\xafUGamePlayStatics::SpawnSoundAttached\xe9\x96\xa2\xe6\x95\xb0\xe3\x81\xab\xe5\xbe\x93\xe3\x81\x84\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\xe2\x80\xbb\xe6\x9c\xac\xe9\x96\xa2\xe6\x95\xb0\xe3\x81\xaf\xe5\xb0\x86\xe6\x9d\xa5\xe3\x81\xae\xe3\x83\x90\xe3\x83\xbc\xe3\x82\xb8\xe3\x83\xa7\xe3\x83\xb3\xe3\x81\xa7\xe5\x89\x8a\xe9\x99\xa4\xe3\x81\x95\xe3\x82\x8c\xe3\x82\x8b\xe4\xba\x88\xe5\xae\x9a\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82SpawnSoundAttached\xe9\x96\xa2\xe6\x95\xb0\xe3\x81\xb8\xe7\xa7\xbb\xe8\xa1\x8c\xe3\x82\x92\xe3\x81\x8a\xe9\xa1\x98\xe3\x81\x84\xe3\x81\x84\xe3\x81\x9f\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomStatics_PlaySoundAttached_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomStatics, nullptr, "PlaySoundAttached", nullptr, nullptr, sizeof(AtomStatics_eventPlaySoundAttached_Parms), Z_Construct_UFunction_UAtomStatics_PlaySoundAttached_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_PlaySoundAttached_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_PlaySoundAttached_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_PlaySoundAttached_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomStatics_PlaySoundAttached()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomStatics_PlaySoundAttached_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics
	{
		struct AtomStatics_eventPlaySoundForAnimNotify_Parms
		{
			USoundAtomCue* Sound;
			USceneComponent* AttachToComponent;
			FName AttachPointName;
			FVector Location;
			bool bStopWhenAttachedToDestroyed;
			float VolumeMultiplier;
			float PitchMultiplier;
			float StartTime;
			USoundAttenuation* AttenuationSettings;
			bool bFollow;
			UAtomComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_bFollow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFollow;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttenuationSettings;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchMultiplier;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier;
		static void NewProp_bStopWhenAttachedToDestroyed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStopWhenAttachedToDestroyed;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AttachPointName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachToComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttachToComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventPlaySoundForAnimNotify_Parms, ReturnValue), Z_Construct_UClass_UAtomComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics::NewProp_ReturnValue_MetaData)) };
	void Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics::NewProp_bFollow_SetBit(void* Obj)
	{
		((AtomStatics_eventPlaySoundForAnimNotify_Parms*)Obj)->bFollow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics::NewProp_bFollow = { "bFollow", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtomStatics_eventPlaySoundForAnimNotify_Parms), &Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics::NewProp_bFollow_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics::NewProp_AttenuationSettings = { "AttenuationSettings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventPlaySoundForAnimNotify_Parms, AttenuationSettings), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventPlaySoundForAnimNotify_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics::NewProp_PitchMultiplier = { "PitchMultiplier", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventPlaySoundForAnimNotify_Parms, PitchMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics::NewProp_VolumeMultiplier = { "VolumeMultiplier", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventPlaySoundForAnimNotify_Parms, VolumeMultiplier), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics::NewProp_bStopWhenAttachedToDestroyed_SetBit(void* Obj)
	{
		((AtomStatics_eventPlaySoundForAnimNotify_Parms*)Obj)->bStopWhenAttachedToDestroyed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics::NewProp_bStopWhenAttachedToDestroyed = { "bStopWhenAttachedToDestroyed", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtomStatics_eventPlaySoundForAnimNotify_Parms), &Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics::NewProp_bStopWhenAttachedToDestroyed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventPlaySoundForAnimNotify_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics::NewProp_AttachPointName = { "AttachPointName", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventPlaySoundForAnimNotify_Parms, AttachPointName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics::NewProp_AttachToComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics::NewProp_AttachToComponent = { "AttachToComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventPlaySoundForAnimNotify_Parms, AttachToComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics::NewProp_AttachToComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics::NewProp_AttachToComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventPlaySoundForAnimNotify_Parms, Sound), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics::NewProp_bFollow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics::NewProp_AttenuationSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics::NewProp_StartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics::NewProp_PitchMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics::NewProp_VolumeMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics::NewProp_bStopWhenAttachedToDestroyed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics::NewProp_AttachPointName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics::NewProp_AttachToComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics::NewProp_Sound,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "Atom" },
		{ "Comment", "/**\n\x09 * 3D\xe3\x82\xa2\xe3\x83\x8b\xe3\x83\xa1\xe3\x83\xbc\xe3\x82\xb7\xe3\x83\xa7\xe3\x83\xb3\xe3\x81\xab\xe9\x9f\xb3\xe3\x82\x92\xe4\xbb\x98\xe3\x81\x91\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 *\n\x09 * @param Sound Atom\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @param AttachToComponent \xe3\x81\x93\xe3\x81\x93\xe3\x81\xa7\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x9d\xe3\x83\xbc\xe3\x83\x8d\xe3\x83\xb3\xe3\x83\x88\xe3\x81\xab\xe8\xbf\xbd\xe5\xbe\x93\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @param AttachPointName \xe3\x82\xa2\xe3\x82\xbf\xe3\x83\x83\xe3\x83\x81\xe3\x81\x99\xe3\x82\x8b\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xae\xe5\x90\x8d\xe5\x89\x8d\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @param Location \xe9\x9f\xb3\xe6\xba\x90\xe3\x82\x92\xe9\x85\x8d\xe7\xbd\xae\xe3\x81\x99\xe3\x82\x8b\xe5\xba\xa7\xe6\xa8\x99\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @param bStopWhenAttachedToDestroyed \xe8\xbf\xbd\xe5\xbe\x93\xe3\x81\x97\xe3\x81\xa6\xe3\x81\x84\xe3\x82\x8b\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x9d\xe3\x83\xbc\xe3\x83\x8d\xe3\x83\xb3\xe3\x83\x88\xe3\x81\x8c\xe7\xa0\xb4\xe6\xa3\x84\xe3\x81\x95\xe3\x82\x8c\xe3\x81\x9f\xe3\x81\xa8\xe3\x81\x8d\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x82\x92\xe5\x81\x9c\xe6\xad\xa2\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x8b\xe3\x81\xa9\xe3\x81\x86\xe3\x81\x8b\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @param VolumeMultiplier \xe9\x9f\xb3\xe9\x87\x8f\xe3\x81\xae\xe5\x80\x8d\xe7\x8e\x87\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @param PitchMultiplier \xe3\x83\x94\xe3\x83\x83\xe3\x83\x81\xe3\x81\xae\xe5\x80\x8d\xe7\x8e\x87\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @param StartTime \xe3\x81\x93\xe3\x81\x93\xe3\x81\xab\xe9\x96\x8b\xe5\xa7\x8b\xe6\x99\x82\xe9\x96\x93(\xe7\xa7\x92)\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x93\xe3\x81\xa8\xe3\x81\xa7\xe3\x80\x81\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf\xe3\x82\x92\xe9\x80\x94\xe4\xb8\xad\xe3\x81\x8b\xe3\x82\x89\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x93\xe3\x81\xa8\xe3\x82\x82\xe5\x8f\xaf\xe8\x83\xbd\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\n\x09 * @param AttenuationSettings Attenuation\xe3\x81\xae\xe8\xa8\xad\xe5\xae\x9a\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @param bFollow true\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x99\xe3\x82\x8b\xe3\x81\xa8\xe3\x82\xa2\xe3\x83\x8b\xe3\x83\xa1\xe3\x83\xbc\xe3\x82\xb7\xe3\x83\xa7\xe3\x83\xb3\xe3\x81\xab\xe5\xbf\x9c\xe3\x81\x98\xe3\x81\xa6\xe9\x9f\xb3\xe6\xba\x90\xe3\x81\x8c\xe7\xa7\xbb\xe5\x8b\x95\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82""false\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x99\xe3\x82\x8b\xe3\x81\xa8\xe9\x9f\xb3\xe6\xba\x90\xe3\x81\xaf\xe7\x99\xba\xe9\x9f\xb3\xe4\xbd\x8d\xe7\xbd\xae\xe3\x81\xab\xe3\x81\xa8\xe3\x81\xa9\xe3\x81\xbe\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @return \xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\x92\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x99\xe3\x82\x8b""AtomComponent\xe3\x81\xae\xe3\x83\xaa\xe3\x83\x95\xe3\x82\xa1\xe3\x83\xac\xe3\x83\xb3\xe3\x82\xb9\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 */" },
		{ "CPP_Default_AttachPointName", "None" },
		{ "CPP_Default_AttenuationSettings", "None" },
		{ "CPP_Default_bFollow", "false" },
		{ "CPP_Default_bStopWhenAttachedToDestroyed", "false" },
		{ "CPP_Default_Location", "" },
		{ "CPP_Default_PitchMultiplier", "1.000000" },
		{ "CPP_Default_StartTime", "0.000000" },
		{ "CPP_Default_VolumeMultiplier", "1.000000" },
		{ "ModuleRelativePath", "Classes/AtomStatics.h" },
		{ "ToolTip", "3D\xe3\x82\xa2\xe3\x83\x8b\xe3\x83\xa1\xe3\x83\xbc\xe3\x82\xb7\xe3\x83\xa7\xe3\x83\xb3\xe3\x81\xab\xe9\x9f\xb3\xe3\x82\x92\xe4\xbb\x98\xe3\x81\x91\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\n@param Sound Atom\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param AttachToComponent \xe3\x81\x93\xe3\x81\x93\xe3\x81\xa7\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x9d\xe3\x83\xbc\xe3\x83\x8d\xe3\x83\xb3\xe3\x83\x88\xe3\x81\xab\xe8\xbf\xbd\xe5\xbe\x93\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param AttachPointName \xe3\x82\xa2\xe3\x82\xbf\xe3\x83\x83\xe3\x83\x81\xe3\x81\x99\xe3\x82\x8b\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xae\xe5\x90\x8d\xe5\x89\x8d\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param Location \xe9\x9f\xb3\xe6\xba\x90\xe3\x82\x92\xe9\x85\x8d\xe7\xbd\xae\xe3\x81\x99\xe3\x82\x8b\xe5\xba\xa7\xe6\xa8\x99\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param bStopWhenAttachedToDestroyed \xe8\xbf\xbd\xe5\xbe\x93\xe3\x81\x97\xe3\x81\xa6\xe3\x81\x84\xe3\x82\x8b\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x9d\xe3\x83\xbc\xe3\x83\x8d\xe3\x83\xb3\xe3\x83\x88\xe3\x81\x8c\xe7\xa0\xb4\xe6\xa3\x84\xe3\x81\x95\xe3\x82\x8c\xe3\x81\x9f\xe3\x81\xa8\xe3\x81\x8d\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x82\x92\xe5\x81\x9c\xe6\xad\xa2\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x8b\xe3\x81\xa9\xe3\x81\x86\xe3\x81\x8b\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param VolumeMultiplier \xe9\x9f\xb3\xe9\x87\x8f\xe3\x81\xae\xe5\x80\x8d\xe7\x8e\x87\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param PitchMultiplier \xe3\x83\x94\xe3\x83\x83\xe3\x83\x81\xe3\x81\xae\xe5\x80\x8d\xe7\x8e\x87\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param StartTime \xe3\x81\x93\xe3\x81\x93\xe3\x81\xab\xe9\x96\x8b\xe5\xa7\x8b\xe6\x99\x82\xe9\x96\x93(\xe7\xa7\x92)\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x93\xe3\x81\xa8\xe3\x81\xa7\xe3\x80\x81\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf\xe3\x82\x92\xe9\x80\x94\xe4\xb8\xad\xe3\x81\x8b\xe3\x82\x89\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x93\xe3\x81\xa8\xe3\x82\x82\xe5\x8f\xaf\xe8\x83\xbd\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\n@param AttenuationSettings Attenuation\xe3\x81\xae\xe8\xa8\xad\xe5\xae\x9a\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param bFollow true\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x99\xe3\x82\x8b\xe3\x81\xa8\xe3\x82\xa2\xe3\x83\x8b\xe3\x83\xa1\xe3\x83\xbc\xe3\x82\xb7\xe3\x83\xa7\xe3\x83\xb3\xe3\x81\xab\xe5\xbf\x9c\xe3\x81\x98\xe3\x81\xa6\xe9\x9f\xb3\xe6\xba\x90\xe3\x81\x8c\xe7\xa7\xbb\xe5\x8b\x95\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82""false\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x99\xe3\x82\x8b\xe3\x81\xa8\xe9\x9f\xb3\xe6\xba\x90\xe3\x81\xaf\xe7\x99\xba\xe9\x9f\xb3\xe4\xbd\x8d\xe7\xbd\xae\xe3\x81\xab\xe3\x81\xa8\xe3\x81\xa9\xe3\x81\xbe\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@return \xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\x92\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x99\xe3\x82\x8b""AtomComponent\xe3\x81\xae\xe3\x83\xaa\xe3\x83\x95\xe3\x82\xa1\xe3\x83\xac\xe3\x83\xb3\xe3\x82\xb9\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomStatics, nullptr, "PlaySoundForAnimNotify", nullptr, nullptr, sizeof(AtomStatics_eventPlaySoundForAnimNotify_Parms), Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomStatics_SetAtomGameVariable_Statics
	{
		struct AtomStatics_eventSetAtomGameVariable_Parms
		{
			FString GameVariableName;
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameVariableName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomStatics_SetAtomGameVariable_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventSetAtomGameVariable_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomStatics_SetAtomGameVariable_Statics::NewProp_GameVariableName = { "GameVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventSetAtomGameVariable_Parms, GameVariableName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomStatics_SetAtomGameVariable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SetAtomGameVariable_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SetAtomGameVariable_Statics::NewProp_GameVariableName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SetAtomGameVariable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom" },
		{ "Comment", "/**\n\x09 * AtomCraft\xe4\xb8\x8a\xe3\x81\xa7\xe4\xbd\x9c\xe6\x88\x90\xe3\x81\x97\xe3\x81\x9f\xe3\x82\xb2\xe3\x83\xbc\xe3\x83\xa0\xe5\xa4\x89\xe6\x95\xb0\xe3\x81\xae\xe7\x8f\xbe\xe5\x9c\xa8\xe3\x81\xae\xe5\x80\xa4\xe3\x82\x92\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 *\n\x09 * @param GameVariableName \xe3\x82\xb2\xe3\x83\xbc\xe3\x83\xa0\xe5\xa4\x89\xe6\x95\xb0\xe5\x90\x8d\xe3\x80\x82\n\x09 * @param Value \xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f\xe5\x90\x8d\xe5\x89\x8d\xe3\x81\xae\xe3\x82\xb2\xe3\x83\xbc\xe3\x83\xa0\xe5\xa4\x89\xe6\x95\xb0\xe3\x81\xab\xe9\x81\xa9\xe7\x94\xa8\xe3\x81\x99\xe3\x82\x8b\xe6\x96\xb0\xe3\x81\x97\xe3\x81\x84\xe5\x80\xa4\xe3\x80\x82\n\x09 */" },
		{ "ModuleRelativePath", "Classes/AtomStatics.h" },
		{ "ToolTip", "AtomCraft\xe4\xb8\x8a\xe3\x81\xa7\xe4\xbd\x9c\xe6\x88\x90\xe3\x81\x97\xe3\x81\x9f\xe3\x82\xb2\xe3\x83\xbc\xe3\x83\xa0\xe5\xa4\x89\xe6\x95\xb0\xe3\x81\xae\xe7\x8f\xbe\xe5\x9c\xa8\xe3\x81\xae\xe5\x80\xa4\xe3\x82\x92\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\n@param GameVariableName \xe3\x82\xb2\xe3\x83\xbc\xe3\x83\xa0\xe5\xa4\x89\xe6\x95\xb0\xe5\x90\x8d\xe3\x80\x82\n@param Value \xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f\xe5\x90\x8d\xe5\x89\x8d\xe3\x81\xae\xe3\x82\xb2\xe3\x83\xbc\xe3\x83\xa0\xe5\xa4\x89\xe6\x95\xb0\xe3\x81\xab\xe9\x81\xa9\xe7\x94\xa8\xe3\x81\x99\xe3\x82\x8b\xe6\x96\xb0\xe3\x81\x97\xe3\x81\x84\xe5\x80\xa4\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomStatics_SetAtomGameVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomStatics, nullptr, "SetAtomGameVariable", nullptr, nullptr, sizeof(AtomStatics_eventSetAtomGameVariable_Parms), Z_Construct_UFunction_UAtomStatics_SetAtomGameVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SetAtomGameVariable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SetAtomGameVariable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SetAtomGameVariable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomStatics_SetAtomGameVariable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomStatics_SetAtomGameVariable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDirectionLevel_Statics
	{
		struct AtomStatics_eventSetListenerFocusPointDirectionLevel_Parms
		{
			float DirectionLevel;
			int32 PlayerIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirectionLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DirectionLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDirectionLevel_Statics::NewProp_PlayerIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDirectionLevel_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventSetListenerFocusPointDirectionLevel_Parms, PlayerIndex), METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDirectionLevel_Statics::NewProp_PlayerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDirectionLevel_Statics::NewProp_PlayerIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDirectionLevel_Statics::NewProp_DirectionLevel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDirectionLevel_Statics::NewProp_DirectionLevel = { "DirectionLevel", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventSetListenerFocusPointDirectionLevel_Parms, DirectionLevel), METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDirectionLevel_Statics::NewProp_DirectionLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDirectionLevel_Statics::NewProp_DirectionLevel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDirectionLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDirectionLevel_Statics::NewProp_PlayerIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDirectionLevel_Statics::NewProp_DirectionLevel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDirectionLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom Listener" },
		{ "Comment", "/**\n\x09* \xe3\x83\xaa\xe3\x82\xb9\xe3\x83\x8a\xe3\x83\xbc\xe3\x81\xae\xe3\x83\x95\xe3\x82\xa9\xe3\x83\xbc\xe3\x82\xab\xe3\x82\xb9\xe3\x83\x9d\xe3\x82\xa4\xe3\x83\xb3\xe3\x83\x88\xe6\x83\x85\xe5\xa0\xb1\xe3\x81\xae\xe5\x86\x85\xe3\x80\x81\xe5\xae\x9a\xe4\xbd\x8d\xe6\xaf\x94\xe7\x8e\x87\xe3\x82\x92\xe5\xa4\x89\xe6\x9b\xb4\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\n\x09* @param DirectionLevel \xe3\x83\xaa\xe3\x82\xb9\xe3\x83\x8a\xe3\x83\xbc\xe3\x81\xa8\xe3\x83\x95\xe3\x82\xa9\xe3\x83\xbc\xe3\x82\xab\xe3\x82\xb9\xe3\x83\x9d\xe3\x82\xa4\xe3\x83\xb3\xe3\x83\x88\xe3\x81\xa8\xe3\x81\xae\xe5\xae\x9a\xe4\xbd\x8d\xe6\xaf\x94\xe7\x8e\x87\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\n\x09* @param PlayerIndex \xe3\x83\x97\xe3\x83\xac\xe3\x82\xa4\xe3\x83\xa4\xe3\x83\xbc\xe7\x95\xaa\xe5\x8f\xb7\n\x09*/" },
		{ "CPP_Default_PlayerIndex", "0" },
		{ "ModuleRelativePath", "Classes/AtomStatics.h" },
		{ "ToolTip", "\xe3\x83\xaa\xe3\x82\xb9\xe3\x83\x8a\xe3\x83\xbc\xe3\x81\xae\xe3\x83\x95\xe3\x82\xa9\xe3\x83\xbc\xe3\x82\xab\xe3\x82\xb9\xe3\x83\x9d\xe3\x82\xa4\xe3\x83\xb3\xe3\x83\x88\xe6\x83\x85\xe5\xa0\xb1\xe3\x81\xae\xe5\x86\x85\xe3\x80\x81\xe5\xae\x9a\xe4\xbd\x8d\xe6\xaf\x94\xe7\x8e\x87\xe3\x82\x92\xe5\xa4\x89\xe6\x9b\xb4\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\n@param DirectionLevel \xe3\x83\xaa\xe3\x82\xb9\xe3\x83\x8a\xe3\x83\xbc\xe3\x81\xa8\xe3\x83\x95\xe3\x82\xa9\xe3\x83\xbc\xe3\x82\xab\xe3\x82\xb9\xe3\x83\x9d\xe3\x82\xa4\xe3\x83\xb3\xe3\x83\x88\xe3\x81\xa8\xe3\x81\xae\xe5\xae\x9a\xe4\xbd\x8d\xe6\xaf\x94\xe7\x8e\x87\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\n@param PlayerIndex \xe3\x83\x97\xe3\x83\xac\xe3\x82\xa4\xe3\x83\xa4\xe3\x83\xbc\xe7\x95\xaa\xe5\x8f\xb7" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDirectionLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomStatics, nullptr, "SetListenerFocusPointDirectionLevel", nullptr, nullptr, sizeof(AtomStatics_eventSetListenerFocusPointDirectionLevel_Parms), Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDirectionLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDirectionLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDirectionLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDirectionLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDirectionLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDirectionLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDistanceLevel_Statics
	{
		struct AtomStatics_eventSetListenerFocusPointDistanceLevel_Parms
		{
			float DistanceLevel;
			int32 PlayerIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDistanceLevel_Statics::NewProp_PlayerIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDistanceLevel_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventSetListenerFocusPointDistanceLevel_Parms, PlayerIndex), METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDistanceLevel_Statics::NewProp_PlayerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDistanceLevel_Statics::NewProp_PlayerIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDistanceLevel_Statics::NewProp_DistanceLevel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDistanceLevel_Statics::NewProp_DistanceLevel = { "DistanceLevel", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventSetListenerFocusPointDistanceLevel_Parms, DistanceLevel), METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDistanceLevel_Statics::NewProp_DistanceLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDistanceLevel_Statics::NewProp_DistanceLevel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDistanceLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDistanceLevel_Statics::NewProp_PlayerIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDistanceLevel_Statics::NewProp_DistanceLevel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDistanceLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom Listener" },
		{ "Comment", "/**\n\x09* \xe3\x83\xaa\xe3\x82\xb9\xe3\x83\x8a\xe3\x83\xbc\xe3\x81\xae\xe3\x83\x95\xe3\x82\xa9\xe3\x83\xbc\xe3\x82\xab\xe3\x82\xb9\xe3\x83\x9d\xe3\x82\xa4\xe3\x83\xb3\xe3\x83\x88\xe6\x83\x85\xe5\xa0\xb1\xe3\x81\xae\xe5\x86\x85\xe3\x80\x81\xe8\xb7\x9d\xe9\x9b\xa2\xe6\xaf\x94\xe7\x8e\x87\xe3\x82\x92\xe5\xa4\x89\xe6\x9b\xb4\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\n\x09* @param DistanceLevel \xe3\x83\xaa\xe3\x82\xb9\xe3\x83\x8a\xe3\x83\xbc\xe3\x81\xa8\xe3\x83\x95\xe3\x82\xa9\xe3\x83\xbc\xe3\x82\xab\xe3\x82\xb9\xe3\x83\x9d\xe3\x82\xa4\xe3\x83\xb3\xe3\x83\x88\xe3\x81\xa8\xe3\x81\xae\xe8\xb7\x9d\xe9\x9b\xa2\xe6\xaf\x94\xe7\x8e\x87\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\n\x09* @param PlayerIndex \xe3\x83\x97\xe3\x83\xac\xe3\x82\xa4\xe3\x83\xa4\xe3\x83\xbc\xe7\x95\xaa\xe5\x8f\xb7\n\x09*/" },
		{ "CPP_Default_PlayerIndex", "0" },
		{ "ModuleRelativePath", "Classes/AtomStatics.h" },
		{ "ToolTip", "\xe3\x83\xaa\xe3\x82\xb9\xe3\x83\x8a\xe3\x83\xbc\xe3\x81\xae\xe3\x83\x95\xe3\x82\xa9\xe3\x83\xbc\xe3\x82\xab\xe3\x82\xb9\xe3\x83\x9d\xe3\x82\xa4\xe3\x83\xb3\xe3\x83\x88\xe6\x83\x85\xe5\xa0\xb1\xe3\x81\xae\xe5\x86\x85\xe3\x80\x81\xe8\xb7\x9d\xe9\x9b\xa2\xe6\xaf\x94\xe7\x8e\x87\xe3\x82\x92\xe5\xa4\x89\xe6\x9b\xb4\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\n@param DistanceLevel \xe3\x83\xaa\xe3\x82\xb9\xe3\x83\x8a\xe3\x83\xbc\xe3\x81\xa8\xe3\x83\x95\xe3\x82\xa9\xe3\x83\xbc\xe3\x82\xab\xe3\x82\xb9\xe3\x83\x9d\xe3\x82\xa4\xe3\x83\xb3\xe3\x83\x88\xe3\x81\xa8\xe3\x81\xae\xe8\xb7\x9d\xe9\x9b\xa2\xe6\xaf\x94\xe7\x8e\x87\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\n@param PlayerIndex \xe3\x83\x97\xe3\x83\xac\xe3\x82\xa4\xe3\x83\xa4\xe3\x83\xbc\xe7\x95\xaa\xe5\x8f\xb7" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDistanceLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomStatics, nullptr, "SetListenerFocusPointDistanceLevel", nullptr, nullptr, sizeof(AtomStatics_eventSetListenerFocusPointDistanceLevel_Parms), Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDistanceLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDistanceLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDistanceLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDistanceLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDistanceLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDistanceLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointInfo_Statics
	{
		struct AtomStatics_eventSetListenerFocusPointInfo_Parms
		{
			FAtomListenerFocusPointInfo FocusPointInfo;
			int32 PlayerIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FocusPointInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FocusPointInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointInfo_Statics::NewProp_PlayerIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointInfo_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventSetListenerFocusPointInfo_Parms, PlayerIndex), METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointInfo_Statics::NewProp_PlayerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointInfo_Statics::NewProp_PlayerIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointInfo_Statics::NewProp_FocusPointInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointInfo_Statics::NewProp_FocusPointInfo = { "FocusPointInfo", nullptr, (EPropertyFlags)0x0010008000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventSetListenerFocusPointInfo_Parms, FocusPointInfo), Z_Construct_UScriptStruct_FAtomListenerFocusPointInfo, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointInfo_Statics::NewProp_FocusPointInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointInfo_Statics::NewProp_FocusPointInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointInfo_Statics::NewProp_PlayerIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointInfo_Statics::NewProp_FocusPointInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom Listener" },
		{ "Comment", "/**\n\x09* \xe3\x83\xaa\xe3\x82\xb9\xe3\x83\x8a\xe3\x83\xbc\xe3\x81\xae\xe3\x83\x95\xe3\x82\xa9\xe3\x83\xbc\xe3\x82\xab\xe3\x82\xb9\xe3\x83\x9d\xe3\x82\xa4\xe3\x83\xb3\xe3\x83\x88\xe6\x83\x85\xe5\xa0\xb1\xe3\x82\x92\xe5\xa4\x89\xe6\x9b\xb4\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\n\x09* @param FocusPointInfo \xe5\xa4\x89\xe6\x9b\xb4\xe3\x81\x95\xe3\x81\x9b\xe3\x81\x9f\xe3\x81\x84\xe3\x83\x95\xe3\x82\xa9\xe3\x83\xbc\xe3\x82\xab\xe3\x82\xb9\xe3\x83\x9d\xe3\x82\xa4\xe3\x83\xb3\xe3\x83\x88\xe6\x83\x85\xe5\xa0\xb1\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\n\x09* @param PlayerIndex \xe3\x83\x97\xe3\x83\xac\xe3\x82\xa4\xe3\x83\xa4\xe3\x83\xbc\xe7\x95\xaa\xe5\x8f\xb7\n\x09*/" },
		{ "CPP_Default_PlayerIndex", "0" },
		{ "ModuleRelativePath", "Classes/AtomStatics.h" },
		{ "ToolTip", "\xe3\x83\xaa\xe3\x82\xb9\xe3\x83\x8a\xe3\x83\xbc\xe3\x81\xae\xe3\x83\x95\xe3\x82\xa9\xe3\x83\xbc\xe3\x82\xab\xe3\x82\xb9\xe3\x83\x9d\xe3\x82\xa4\xe3\x83\xb3\xe3\x83\x88\xe6\x83\x85\xe5\xa0\xb1\xe3\x82\x92\xe5\xa4\x89\xe6\x9b\xb4\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\n@param FocusPointInfo \xe5\xa4\x89\xe6\x9b\xb4\xe3\x81\x95\xe3\x81\x9b\xe3\x81\x9f\xe3\x81\x84\xe3\x83\x95\xe3\x82\xa9\xe3\x83\xbc\xe3\x82\xab\xe3\x82\xb9\xe3\x83\x9d\xe3\x82\xa4\xe3\x83\xb3\xe3\x83\x88\xe6\x83\x85\xe5\xa0\xb1\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\n@param PlayerIndex \xe3\x83\x97\xe3\x83\xac\xe3\x82\xa4\xe3\x83\xa4\xe3\x83\xbc\xe7\x95\xaa\xe5\x8f\xb7" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomStatics, nullptr, "SetListenerFocusPointInfo", nullptr, nullptr, sizeof(AtomStatics_eventSetListenerFocusPointInfo_Parms), Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointTargetActor_Statics
	{
		struct AtomStatics_eventSetListenerFocusPointTargetActor_Parms
		{
			AActor* TargetActor;
			int32 PlayerIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointTargetActor_Statics::NewProp_PlayerIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointTargetActor_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventSetListenerFocusPointTargetActor_Parms, PlayerIndex), METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointTargetActor_Statics::NewProp_PlayerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointTargetActor_Statics::NewProp_PlayerIndex_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointTargetActor_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventSetListenerFocusPointTargetActor_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointTargetActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointTargetActor_Statics::NewProp_PlayerIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointTargetActor_Statics::NewProp_TargetActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointTargetActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom Listener" },
		{ "Comment", "/**\n\x09* \xe3\x83\xaa\xe3\x82\xb9\xe3\x83\x8a\xe3\x83\xbc\xe3\x81\xae\xe3\x83\x95\xe3\x82\xa9\xe3\x83\xbc\xe3\x82\xab\xe3\x82\xb9\xe3\x83\x9d\xe3\x82\xa4\xe3\x83\xb3\xe3\x83\x88\xe6\x83\x85\xe5\xa0\xb1\xe3\x81\xae\xe5\x86\x85\xe3\x80\x81\xe3\x83\x95\xe3\x82\xa9\xe3\x83\xbc\xe3\x82\xab\xe3\x82\xb9\xe3\x82\x92\xe5\xbd\x93\xe3\x81\xa6\xe3\x82\x8b\xe3\x82\xa2\xe3\x82\xaf\xe3\x82\xbf\xe3\x83\xbc\xe3\x82\x92\xe5\xa4\x89\xe6\x9b\xb4\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\n\x09* @param TargetActor \xe3\x83\x95\xe3\x82\xa9\xe3\x83\xbc\xe3\x82\xab\xe3\x82\xb9\xe3\x82\x92\xe5\xbd\x93\xe3\x81\xa6\xe3\x81\x9f\xe3\x81\x84\xe3\x82\xa2\xe3\x82\xaf\xe3\x82\xbf\xe3\x83\xbc\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\n\x09* @param PlayerIndex \xe3\x83\x97\xe3\x83\xac\xe3\x82\xa4\xe3\x83\xa4\xe3\x83\xbc\xe7\x95\xaa\xe5\x8f\xb7\n\x09*/" },
		{ "CPP_Default_PlayerIndex", "0" },
		{ "ModuleRelativePath", "Classes/AtomStatics.h" },
		{ "ToolTip", "\xe3\x83\xaa\xe3\x82\xb9\xe3\x83\x8a\xe3\x83\xbc\xe3\x81\xae\xe3\x83\x95\xe3\x82\xa9\xe3\x83\xbc\xe3\x82\xab\xe3\x82\xb9\xe3\x83\x9d\xe3\x82\xa4\xe3\x83\xb3\xe3\x83\x88\xe6\x83\x85\xe5\xa0\xb1\xe3\x81\xae\xe5\x86\x85\xe3\x80\x81\xe3\x83\x95\xe3\x82\xa9\xe3\x83\xbc\xe3\x82\xab\xe3\x82\xb9\xe3\x82\x92\xe5\xbd\x93\xe3\x81\xa6\xe3\x82\x8b\xe3\x82\xa2\xe3\x82\xaf\xe3\x82\xbf\xe3\x83\xbc\xe3\x82\x92\xe5\xa4\x89\xe6\x9b\xb4\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\n@param TargetActor \xe3\x83\x95\xe3\x82\xa9\xe3\x83\xbc\xe3\x82\xab\xe3\x82\xb9\xe3\x82\x92\xe5\xbd\x93\xe3\x81\xa6\xe3\x81\x9f\xe3\x81\x84\xe3\x82\xa2\xe3\x82\xaf\xe3\x82\xbf\xe3\x83\xbc\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\n@param PlayerIndex \xe3\x83\x97\xe3\x83\xac\xe3\x82\xa4\xe3\x83\xa4\xe3\x83\xbc\xe7\x95\xaa\xe5\x8f\xb7" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointTargetActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomStatics, nullptr, "SetListenerFocusPointTargetActor", nullptr, nullptr, sizeof(AtomStatics_eventSetListenerFocusPointTargetActor_Parms), Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointTargetActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointTargetActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointTargetActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointTargetActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointTargetActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointTargetActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointTargetComponent_Statics
	{
		struct AtomStatics_eventSetListenerFocusPointTargetComponent_Parms
		{
			USceneComponent* TargetComponent;
			int32 PlayerIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointTargetComponent_Statics::NewProp_PlayerIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointTargetComponent_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventSetListenerFocusPointTargetComponent_Parms, PlayerIndex), METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointTargetComponent_Statics::NewProp_PlayerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointTargetComponent_Statics::NewProp_PlayerIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointTargetComponent_Statics::NewProp_TargetComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointTargetComponent_Statics::NewProp_TargetComponent = { "TargetComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventSetListenerFocusPointTargetComponent_Parms, TargetComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointTargetComponent_Statics::NewProp_TargetComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointTargetComponent_Statics::NewProp_TargetComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointTargetComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointTargetComponent_Statics::NewProp_PlayerIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointTargetComponent_Statics::NewProp_TargetComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointTargetComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom Listener" },
		{ "Comment", "/**\n\x09* \xe3\x83\xaa\xe3\x82\xb9\xe3\x83\x8a\xe3\x83\xbc\xe3\x81\xae\xe3\x83\x95\xe3\x82\xa9\xe3\x83\xbc\xe3\x82\xab\xe3\x82\xb9\xe3\x83\x9d\xe3\x82\xa4\xe3\x83\xb3\xe3\x83\x88\xe6\x83\x85\xe5\xa0\xb1\xe3\x81\xae\xe5\x86\x85\xe3\x80\x81\xe3\x83\x95\xe3\x82\xa9\xe3\x83\xbc\xe3\x82\xab\xe3\x82\xb9\xe3\x82\x92\xe5\xbd\x93\xe3\x81\xa6\xe3\x82\x8b\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x9d\xe3\x83\xbc\xe3\x83\x8d\xe3\x83\xb3\xe3\x83\x88\xe3\x82\x92\xe5\xa4\x89\xe6\x9b\xb4\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\n\x09* @param TargetComponent \xe3\x83\x95\xe3\x82\xa9\xe3\x83\xbc\xe3\x82\xab\xe3\x82\xb9\xe3\x82\x92\xe5\xbd\x93\xe3\x81\xa6\xe3\x81\x9f\xe3\x81\x84\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x9d\xe3\x83\xbc\xe3\x83\x8d\xe3\x83\xb3\xe3\x83\x88\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\n\x09* @param PlayerIndex \xe3\x83\x97\xe3\x83\xac\xe3\x82\xa4\xe3\x83\xa4\xe3\x83\xbc\xe7\x95\xaa\xe5\x8f\xb7\n\x09*/" },
		{ "CPP_Default_PlayerIndex", "0" },
		{ "ModuleRelativePath", "Classes/AtomStatics.h" },
		{ "ToolTip", "\xe3\x83\xaa\xe3\x82\xb9\xe3\x83\x8a\xe3\x83\xbc\xe3\x81\xae\xe3\x83\x95\xe3\x82\xa9\xe3\x83\xbc\xe3\x82\xab\xe3\x82\xb9\xe3\x83\x9d\xe3\x82\xa4\xe3\x83\xb3\xe3\x83\x88\xe6\x83\x85\xe5\xa0\xb1\xe3\x81\xae\xe5\x86\x85\xe3\x80\x81\xe3\x83\x95\xe3\x82\xa9\xe3\x83\xbc\xe3\x82\xab\xe3\x82\xb9\xe3\x82\x92\xe5\xbd\x93\xe3\x81\xa6\xe3\x82\x8b\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x9d\xe3\x83\xbc\xe3\x83\x8d\xe3\x83\xb3\xe3\x83\x88\xe3\x82\x92\xe5\xa4\x89\xe6\x9b\xb4\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\n@param TargetComponent \xe3\x83\x95\xe3\x82\xa9\xe3\x83\xbc\xe3\x82\xab\xe3\x82\xb9\xe3\x82\x92\xe5\xbd\x93\xe3\x81\xa6\xe3\x81\x9f\xe3\x81\x84\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x9d\xe3\x83\xbc\xe3\x83\x8d\xe3\x83\xb3\xe3\x83\x88\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\n@param PlayerIndex \xe3\x83\x97\xe3\x83\xac\xe3\x82\xa4\xe3\x83\xa4\xe3\x83\xbc\xe7\x95\xaa\xe5\x8f\xb7" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointTargetComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomStatics, nullptr, "SetListenerFocusPointTargetComponent", nullptr, nullptr, sizeof(AtomStatics_eventSetListenerFocusPointTargetComponent_Parms), Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointTargetComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointTargetComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointTargetComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointTargetComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointTargetComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointTargetComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomStatics_SetListenerRegion_Statics
	{
		struct AtomStatics_eventSetListenerRegion_Parms
		{
			UAtom3dRegion* Region;
			int32 PlayerIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Region;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SetListenerRegion_Statics::NewProp_PlayerIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomStatics_SetListenerRegion_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventSetListenerRegion_Parms, PlayerIndex), METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SetListenerRegion_Statics::NewProp_PlayerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SetListenerRegion_Statics::NewProp_PlayerIndex_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_SetListenerRegion_Statics::NewProp_Region = { "Region", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventSetListenerRegion_Parms, Region), Z_Construct_UClass_UAtom3dRegion_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomStatics_SetListenerRegion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SetListenerRegion_Statics::NewProp_PlayerIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SetListenerRegion_Statics::NewProp_Region,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SetListenerRegion_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom Listener" },
		{ "Comment", "/**\n\x09* \xe3\x83\xaa\xe3\x82\xb9\xe3\x83\x8a\xe3\x83\xbc\xe3\x81\xae\xe3\x83\xaa\xe3\x83\xbc\xe3\x82\xb8\xe3\x83\xa7\xe3\x83\xb3\xe3\x81\xae\xe8\xa8\xad\xe5\xae\x9a\n\x09* @param Region \xe3\x83\xaa\xe3\x82\xb9\xe3\x83\x8a\xe3\x83\xbc\xe3\x81\xab\xe8\xa8\xad\xe5\xae\x9a\xe3\x81\x99\xe3\x82\x8b\xe3\x83\xaa\xe3\x83\xbc\xe3\x82\xb8\xe3\x83\xa7\xe3\x83\xb3\n\x09* @param PlayerIndex \xe3\x83\x97\xe3\x83\xac\xe3\x82\xa4\xe3\x83\xa4\xe3\x83\xbc\xe7\x95\xaa\xe5\x8f\xb7\n\x09*/" },
		{ "CPP_Default_PlayerIndex", "0" },
		{ "ModuleRelativePath", "Classes/AtomStatics.h" },
		{ "ToolTip", "\xe3\x83\xaa\xe3\x82\xb9\xe3\x83\x8a\xe3\x83\xbc\xe3\x81\xae\xe3\x83\xaa\xe3\x83\xbc\xe3\x82\xb8\xe3\x83\xa7\xe3\x83\xb3\xe3\x81\xae\xe8\xa8\xad\xe5\xae\x9a\n@param Region \xe3\x83\xaa\xe3\x82\xb9\xe3\x83\x8a\xe3\x83\xbc\xe3\x81\xab\xe8\xa8\xad\xe5\xae\x9a\xe3\x81\x99\xe3\x82\x8b\xe3\x83\xaa\xe3\x83\xbc\xe3\x82\xb8\xe3\x83\xa7\xe3\x83\xb3\n@param PlayerIndex \xe3\x83\x97\xe3\x83\xac\xe3\x82\xa4\xe3\x83\xa4\xe3\x83\xbc\xe7\x95\xaa\xe5\x8f\xb7" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomStatics_SetListenerRegion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomStatics, nullptr, "SetListenerRegion", nullptr, nullptr, sizeof(AtomStatics_eventSetListenerRegion_Parms), Z_Construct_UFunction_UAtomStatics_SetListenerRegion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SetListenerRegion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SetListenerRegion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SetListenerRegion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomStatics_SetListenerRegion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomStatics_SetListenerRegion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2D_Statics
	{
		struct AtomStatics_eventSpawnAtomSound2D_Parms
		{
			const UObject* WorldContextObject;
			USoundAtomCue* Sound;
			FAtomComponentParams Params;
			bool bPersistAcrossLevelTransition;
			bool bAutoDestroy;
			UAtomComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_bAutoDestroy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroy;
		static void NewProp_bPersistAcrossLevelTransition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPersistAcrossLevelTransition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Params;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2D_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventSpawnAtomSound2D_Parms, ReturnValue), Z_Construct_UClass_UAtomComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2D_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2D_Statics::NewProp_ReturnValue_MetaData)) };
	void Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2D_Statics::NewProp_bAutoDestroy_SetBit(void* Obj)
	{
		((AtomStatics_eventSpawnAtomSound2D_Parms*)Obj)->bAutoDestroy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2D_Statics::NewProp_bAutoDestroy = { "bAutoDestroy", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtomStatics_eventSpawnAtomSound2D_Parms), &Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2D_Statics::NewProp_bAutoDestroy_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2D_Statics::NewProp_bPersistAcrossLevelTransition_SetBit(void* Obj)
	{
		((AtomStatics_eventSpawnAtomSound2D_Parms*)Obj)->bPersistAcrossLevelTransition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2D_Statics::NewProp_bPersistAcrossLevelTransition = { "bPersistAcrossLevelTransition", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtomStatics_eventSpawnAtomSound2D_Parms), &Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2D_Statics::NewProp_bPersistAcrossLevelTransition_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2D_Statics::NewProp_Params_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2D_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventSpawnAtomSound2D_Parms, Params), Z_Construct_UScriptStruct_FAtomComponentParams, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2D_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2D_Statics::NewProp_Params_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2D_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventSpawnAtomSound2D_Parms, Sound), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2D_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2D_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventSpawnAtomSound2D_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2D_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2D_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2D_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2D_Statics::NewProp_bAutoDestroy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2D_Statics::NewProp_bPersistAcrossLevelTransition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2D_Statics::NewProp_Params,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2D_Statics::NewProp_Sound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2D_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2D_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "Category", "Atom" },
		{ "Comment", "/**\n\x09 * AtomComponent\xe3\x82\x92\xe7\x94\x9f\xe6\x88\x90\xe3\x81\x97\xe3\x80\x81""2D\xe3\x82\xb5\xe3\x82\xa6\xe3\x83\xb3\xe3\x83\x89\xe3\x82\x92\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 *\n\x09 * @param WorldContextObject WorldContextObject\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @param Sound Atom\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @param Params \xe4\xbb\xbb\xe6\x84\x8f\xe3\x81\xae\xe3\x83\x91\xe3\x83\xa9\xe3\x83\xa1\xe3\x83\xbc\xe3\x82\xbf\xe3\x83\xbc\xe3\x82\x92\xe8\xa8\xad\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f""AtomComponentParams\xe6\xa7\x8b\xe9\x80\xa0\xe4\xbd\x93\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @param bPersistAcrossLevelTransition \xe3\x83\x91\xe3\x83\xbc\xe3\x82\xb7\xe3\x82\xb9\xe3\x82\xbf\xe3\x83\xb3\xe3\x83\x88\xe3\x83\xac\xe3\x83\x99\xe3\x83\xab\xe3\x82\x92\xe3\x81\xbe\xe3\x81\x9f\xe3\x81\x84\xe3\x81\xa7\xe7\x94\x9f\xe5\xad\x98\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x8b\xe3\x81\xa9\xe3\x81\x86\xe3\x81\x8b\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @param bAutoDestroy \xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x8c\xe5\xae\x8c\xe4\xba\x86\xe3\x81\x97\xe3\x81\x9f\xe3\x81\xa8\xe3\x81\x8d\xe8\x87\xaa\xe5\x8b\x95\xe7\x9a\x84\xe3\x81\xab\xe3\x82\xaa\xe3\x83\x96\xe3\x82\xb8\xe3\x82\xa7\xe3\x82\xaf\xe3\x83\x88\xe3\x82\x92\xe5\x89\x8a\xe9\x99\xa4\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x8b\xe3\x81\xa9\xe3\x81\x86\xe3\x81\x8b\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @return \xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\x92\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x99\xe3\x82\x8b""AtomComponent\xe3\x81\xae\xe3\x83\xaa\xe3\x83\x95\xe3\x82\xa1\xe3\x83\xac\xe3\x83\xb3\xe3\x82\xb9\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 */" },
		{ "CPP_Default_bAutoDestroy", "true" },
		{ "CPP_Default_bPersistAcrossLevelTransition", "false" },
		{ "Keywords", "Play" },
		{ "ModuleRelativePath", "Classes/AtomStatics.h" },
		{ "ToolTip", "AtomComponent\xe3\x82\x92\xe7\x94\x9f\xe6\x88\x90\xe3\x81\x97\xe3\x80\x81""2D\xe3\x82\xb5\xe3\x82\xa6\xe3\x83\xb3\xe3\x83\x89\xe3\x82\x92\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\n@param WorldContextObject WorldContextObject\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param Sound Atom\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param Params \xe4\xbb\xbb\xe6\x84\x8f\xe3\x81\xae\xe3\x83\x91\xe3\x83\xa9\xe3\x83\xa1\xe3\x83\xbc\xe3\x82\xbf\xe3\x83\xbc\xe3\x82\x92\xe8\xa8\xad\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f""AtomComponentParams\xe6\xa7\x8b\xe9\x80\xa0\xe4\xbd\x93\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param bPersistAcrossLevelTransition \xe3\x83\x91\xe3\x83\xbc\xe3\x82\xb7\xe3\x82\xb9\xe3\x82\xbf\xe3\x83\xb3\xe3\x83\x88\xe3\x83\xac\xe3\x83\x99\xe3\x83\xab\xe3\x82\x92\xe3\x81\xbe\xe3\x81\x9f\xe3\x81\x84\xe3\x81\xa7\xe7\x94\x9f\xe5\xad\x98\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x8b\xe3\x81\xa9\xe3\x81\x86\xe3\x81\x8b\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param bAutoDestroy \xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x8c\xe5\xae\x8c\xe4\xba\x86\xe3\x81\x97\xe3\x81\x9f\xe3\x81\xa8\xe3\x81\x8d\xe8\x87\xaa\xe5\x8b\x95\xe7\x9a\x84\xe3\x81\xab\xe3\x82\xaa\xe3\x83\x96\xe3\x82\xb8\xe3\x82\xa7\xe3\x82\xaf\xe3\x83\x88\xe3\x82\x92\xe5\x89\x8a\xe9\x99\xa4\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x8b\xe3\x81\xa9\xe3\x81\x86\xe3\x81\x8b\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@return \xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\x92\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x99\xe3\x82\x8b""AtomComponent\xe3\x81\xae\xe3\x83\xaa\xe3\x83\x95\xe3\x82\xa1\xe3\x83\xac\xe3\x83\xb3\xe3\x82\xb9\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomStatics, nullptr, "SpawnAtomSound2D", nullptr, nullptr, sizeof(AtomStatics_eventSpawnAtomSound2D_Parms), Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2DByName_Statics
	{
		struct AtomStatics_eventSpawnAtomSound2DByName_Parms
		{
			const UObject* WorldContextObject;
			USoundAtomCueSheet* CueSheet;
			FString CueName;
			FAtomComponentParams Params;
			bool bPersistAcrossLevelTransition;
			bool bAutoDestroy;
			UAtomComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_bAutoDestroy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroy;
		static void NewProp_bPersistAcrossLevelTransition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPersistAcrossLevelTransition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Params;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CueName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CueSheet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2DByName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2DByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventSpawnAtomSound2DByName_Parms, ReturnValue), Z_Construct_UClass_UAtomComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2DByName_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2DByName_Statics::NewProp_ReturnValue_MetaData)) };
	void Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2DByName_Statics::NewProp_bAutoDestroy_SetBit(void* Obj)
	{
		((AtomStatics_eventSpawnAtomSound2DByName_Parms*)Obj)->bAutoDestroy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2DByName_Statics::NewProp_bAutoDestroy = { "bAutoDestroy", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtomStatics_eventSpawnAtomSound2DByName_Parms), &Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2DByName_Statics::NewProp_bAutoDestroy_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2DByName_Statics::NewProp_bPersistAcrossLevelTransition_SetBit(void* Obj)
	{
		((AtomStatics_eventSpawnAtomSound2DByName_Parms*)Obj)->bPersistAcrossLevelTransition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2DByName_Statics::NewProp_bPersistAcrossLevelTransition = { "bPersistAcrossLevelTransition", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtomStatics_eventSpawnAtomSound2DByName_Parms), &Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2DByName_Statics::NewProp_bPersistAcrossLevelTransition_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2DByName_Statics::NewProp_Params_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2DByName_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventSpawnAtomSound2DByName_Parms, Params), Z_Construct_UScriptStruct_FAtomComponentParams, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2DByName_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2DByName_Statics::NewProp_Params_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2DByName_Statics::NewProp_CueName = { "CueName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventSpawnAtomSound2DByName_Parms, CueName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2DByName_Statics::NewProp_CueSheet = { "CueSheet", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventSpawnAtomSound2DByName_Parms, CueSheet), Z_Construct_UClass_USoundAtomCueSheet_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2DByName_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2DByName_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventSpawnAtomSound2DByName_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2DByName_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2DByName_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2DByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2DByName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2DByName_Statics::NewProp_bAutoDestroy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2DByName_Statics::NewProp_bPersistAcrossLevelTransition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2DByName_Statics::NewProp_Params,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2DByName_Statics::NewProp_CueName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2DByName_Statics::NewProp_CueSheet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2DByName_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2DByName_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "4" },
		{ "Category", "Atom" },
		{ "Comment", "/**\n\x09 * AtomComponent\xe3\x82\x92\xe7\x94\x9f\xe6\x88\x90\xe3\x81\x97\xe3\x80\x81""2D\xe3\x82\xb5\xe3\x82\xa6\xe3\x83\xb3\xe3\x83\x89\xe3\x82\x92\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * \xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\xb7\xe3\x83\xbc\xe3\x83\x88\xe3\x81\xa8\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe5\x90\x8d\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x99\xe3\x82\x8b\xe3\x83\x90\xe3\x83\xbc\xe3\x82\xb8\xe3\x83\xa7\xe3\x83\xb3\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\n\x09 *\n\x09 * @param WorldContextObject WorldContextObject\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @param CueSheet Atom\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\xb7\xe3\x83\xbc\xe3\x83\x88\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @param CueName \xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe5\x90\x8d\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @param Params \xe4\xbb\xbb\xe6\x84\x8f\xe3\x81\xae\xe3\x83\x91\xe3\x83\xa9\xe3\x83\xa1\xe3\x83\xbc\xe3\x82\xbf\xe3\x83\xbc\xe3\x82\x92\xe8\xa8\xad\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f""AtomComponentParams\xe6\xa7\x8b\xe9\x80\xa0\xe4\xbd\x93\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @param bPersistAcrossLevelTransition \xe3\x83\x91\xe3\x83\xbc\xe3\x82\xb7\xe3\x82\xb9\xe3\x82\xbf\xe3\x83\xb3\xe3\x83\x88\xe3\x83\xac\xe3\x83\x99\xe3\x83\xab\xe3\x82\x92\xe3\x81\xbe\xe3\x81\x9f\xe3\x81\x84\xe3\x81\xa7\xe7\x94\x9f\xe5\xad\x98\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x8b\xe3\x81\xa9\xe3\x81\x86\xe3\x81\x8b\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @param bAutoDestroy \xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x8c\xe5\xae\x8c\xe4\xba\x86\xe3\x81\x97\xe3\x81\x9f\xe3\x81\xa8\xe3\x81\x8d\xe8\x87\xaa\xe5\x8b\x95\xe7\x9a\x84\xe3\x81\xab\xe3\x82\xaa\xe3\x83\x96\xe3\x82\xb8\xe3\x82\xa7\xe3\x82\xaf\xe3\x83\x88\xe3\x82\x92\xe5\x89\x8a\xe9\x99\xa4\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x8b\xe3\x81\xa9\xe3\x81\x86\xe3\x81\x8b\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @return \xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\x92\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x99\xe3\x82\x8b""AtomComponent\xe3\x81\xae\xe3\x83\xaa\xe3\x83\x95\xe3\x82\xa1\xe3\x83\xac\xe3\x83\xb3\xe3\x82\xb9\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 */" },
		{ "CPP_Default_bAutoDestroy", "true" },
		{ "CPP_Default_bPersistAcrossLevelTransition", "false" },
		{ "Keywords", "Play" },
		{ "ModuleRelativePath", "Classes/AtomStatics.h" },
		{ "ToolTip", "AtomComponent\xe3\x82\x92\xe7\x94\x9f\xe6\x88\x90\xe3\x81\x97\xe3\x80\x81""2D\xe3\x82\xb5\xe3\x82\xa6\xe3\x83\xb3\xe3\x83\x89\xe3\x82\x92\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\xb7\xe3\x83\xbc\xe3\x83\x88\xe3\x81\xa8\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe5\x90\x8d\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x99\xe3\x82\x8b\xe3\x83\x90\xe3\x83\xbc\xe3\x82\xb8\xe3\x83\xa7\xe3\x83\xb3\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\n\n@param WorldContextObject WorldContextObject\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param CueSheet Atom\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\xb7\xe3\x83\xbc\xe3\x83\x88\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param CueName \xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe5\x90\x8d\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param Params \xe4\xbb\xbb\xe6\x84\x8f\xe3\x81\xae\xe3\x83\x91\xe3\x83\xa9\xe3\x83\xa1\xe3\x83\xbc\xe3\x82\xbf\xe3\x83\xbc\xe3\x82\x92\xe8\xa8\xad\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f""AtomComponentParams\xe6\xa7\x8b\xe9\x80\xa0\xe4\xbd\x93\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param bPersistAcrossLevelTransition \xe3\x83\x91\xe3\x83\xbc\xe3\x82\xb7\xe3\x82\xb9\xe3\x82\xbf\xe3\x83\xb3\xe3\x83\x88\xe3\x83\xac\xe3\x83\x99\xe3\x83\xab\xe3\x82\x92\xe3\x81\xbe\xe3\x81\x9f\xe3\x81\x84\xe3\x81\xa7\xe7\x94\x9f\xe5\xad\x98\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x8b\xe3\x81\xa9\xe3\x81\x86\xe3\x81\x8b\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param bAutoDestroy \xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x8c\xe5\xae\x8c\xe4\xba\x86\xe3\x81\x97\xe3\x81\x9f\xe3\x81\xa8\xe3\x81\x8d\xe8\x87\xaa\xe5\x8b\x95\xe7\x9a\x84\xe3\x81\xab\xe3\x82\xaa\xe3\x83\x96\xe3\x82\xb8\xe3\x82\xa7\xe3\x82\xaf\xe3\x83\x88\xe3\x82\x92\xe5\x89\x8a\xe9\x99\xa4\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x8b\xe3\x81\xa9\xe3\x81\x86\xe3\x81\x8b\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@return \xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\x92\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x99\xe3\x82\x8b""AtomComponent\xe3\x81\xae\xe3\x83\xaa\xe3\x83\x95\xe3\x82\xa1\xe3\x83\xac\xe3\x83\xb3\xe3\x82\xb9\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2DByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomStatics, nullptr, "SpawnAtomSound2DByName", nullptr, nullptr, sizeof(AtomStatics_eventSpawnAtomSound2DByName_Parms), Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2DByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2DByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2DByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2DByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2DByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2DByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocation_Statics
	{
		struct AtomStatics_eventSpawnAtomSoundAtLocation_Parms
		{
			const UObject* WorldContextObject;
			USoundAtomCue* Sound;
			FVector Location;
			FAtomComponentParams Params;
			bool bAutoDestroy;
			UAtomComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_bAutoDestroy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Params;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocation_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventSpawnAtomSoundAtLocation_Parms, ReturnValue), Z_Construct_UClass_UAtomComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocation_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocation_Statics::NewProp_ReturnValue_MetaData)) };
	void Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocation_Statics::NewProp_bAutoDestroy_SetBit(void* Obj)
	{
		((AtomStatics_eventSpawnAtomSoundAtLocation_Parms*)Obj)->bAutoDestroy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocation_Statics::NewProp_bAutoDestroy = { "bAutoDestroy", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtomStatics_eventSpawnAtomSoundAtLocation_Parms), &Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocation_Statics::NewProp_bAutoDestroy_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocation_Statics::NewProp_Params_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocation_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventSpawnAtomSoundAtLocation_Parms, Params), Z_Construct_UScriptStruct_FAtomComponentParams, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocation_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocation_Statics::NewProp_Params_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventSpawnAtomSoundAtLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocation_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventSpawnAtomSoundAtLocation_Parms, Sound), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocation_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocation_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventSpawnAtomSoundAtLocation_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocation_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocation_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocation_Statics::NewProp_bAutoDestroy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocation_Statics::NewProp_Params,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocation_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocation_Statics::NewProp_Sound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocation_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocation_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "4" },
		{ "Category", "Atom" },
		{ "Comment", "/**\n\x09 * \xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x95\xe3\x82\x8c\xe3\x81\x9f\xe4\xbd\x8d\xe7\xbd\xae\xe3\x81\xab\xe9\x9f\xb3\xe6\xba\x90\xe3\x82\x92\xe9\x85\x8d\xe7\xbd\xae\xe3\x81\x97\xe3\x80\x81\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\x92\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * \xe5\x86\x8d\xe7\x94\x9f\xe4\xb8\xad\xe3\x81\xae""AtomComponent\xe3\x82\x92\xe8\xbf\x94\xe3\x81\x99\xe3\x81\x9f\xe3\x82\x81\xe3\x80\x81\xe3\x83\xab\xe3\x83\xbc\xe3\x83\x97\xe9\x9f\xb3\xe3\x82\x92\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x97\xe3\x81\xa6\xe3\x82\x82\xe5\x81\x9c\xe6\xad\xa2\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x93\xe3\x81\xa8\xe3\x81\x8c\xe5\x8f\xaf\xe8\x83\xbd\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\n\x09 * \xe6\x9c\xac\xe9\x96\xa2\xe6\x95\xb0\xe3\x81\xa7\xe9\x85\x8d\xe7\xbd\xae\xe3\x81\x97\xe3\x81\x9f\xe9\x9f\xb3\xe6\xba\x90\xe3\x81\xaf\xe3\x81\xa9\xe3\x81\xae""Actor\xe3\x81\xab\xe3\x82\x82\xe8\xbf\xbd\xe5\xbe\x93\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x9b\xe3\x82\x93\xe3\x80\x82\n\x09 *\n\x09 * @param WorldContextObject WorldContextObject\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @param Sound Atom\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @param Location \xe9\x9f\xb3\xe6\xba\x90\xe3\x82\x92\xe9\x85\x8d\xe7\xbd\xae\xe3\x81\x99\xe3\x82\x8b\xe5\xba\xa7\xe6\xa8\x99\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @param Params \xe4\xbb\xbb\xe6\x84\x8f\xe3\x81\xae\xe3\x83\x91\xe3\x83\xa9\xe3\x83\xa1\xe3\x83\xbc\xe3\x82\xbf\xe3\x83\xbc\xe3\x82\x92\xe8\xa8\xad\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f""AtomComponentParams\xe6\xa7\x8b\xe9\x80\xa0\xe4\xbd\x93\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @param bAutoDestroy \xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x8c\xe5\xae\x8c\xe4\xba\x86\xe3\x81\x97\xe3\x81\x9f\xe3\x81\xa8\xe3\x81\x8d\xe8\x87\xaa\xe5\x8b\x95\xe7\x9a\x84\xe3\x81\xab\xe3\x82\xaa\xe3\x83\x96\xe3\x82\xb8\xe3\x82\xa7\xe3\x82\xaf\xe3\x83\x88\xe3\x82\x92\xe5\x89\x8a\xe9\x99\xa4\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x8b\xe3\x81\xa9\xe3\x81\x86\xe3\x81\x8b\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @return \xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\x92\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x99\xe3\x82\x8b""AtomComponent\xe3\x81\xae\xe3\x83\xaa\xe3\x83\x95\xe3\x82\xa1\xe3\x83\xac\xe3\x83\xb3\xe3\x82\xb9\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 */" },
		{ "CPP_Default_bAutoDestroy", "true" },
		{ "Keywords", "play" },
		{ "ModuleRelativePath", "Classes/AtomStatics.h" },
		{ "ToolTip", "\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x95\xe3\x82\x8c\xe3\x81\x9f\xe4\xbd\x8d\xe7\xbd\xae\xe3\x81\xab\xe9\x9f\xb3\xe6\xba\x90\xe3\x82\x92\xe9\x85\x8d\xe7\xbd\xae\xe3\x81\x97\xe3\x80\x81\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\x92\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\xe5\x86\x8d\xe7\x94\x9f\xe4\xb8\xad\xe3\x81\xae""AtomComponent\xe3\x82\x92\xe8\xbf\x94\xe3\x81\x99\xe3\x81\x9f\xe3\x82\x81\xe3\x80\x81\xe3\x83\xab\xe3\x83\xbc\xe3\x83\x97\xe9\x9f\xb3\xe3\x82\x92\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x97\xe3\x81\xa6\xe3\x82\x82\xe5\x81\x9c\xe6\xad\xa2\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x93\xe3\x81\xa8\xe3\x81\x8c\xe5\x8f\xaf\xe8\x83\xbd\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\n\xe6\x9c\xac\xe9\x96\xa2\xe6\x95\xb0\xe3\x81\xa7\xe9\x85\x8d\xe7\xbd\xae\xe3\x81\x97\xe3\x81\x9f\xe9\x9f\xb3\xe6\xba\x90\xe3\x81\xaf\xe3\x81\xa9\xe3\x81\xae""Actor\xe3\x81\xab\xe3\x82\x82\xe8\xbf\xbd\xe5\xbe\x93\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x9b\xe3\x82\x93\xe3\x80\x82\n\n@param WorldContextObject WorldContextObject\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param Sound Atom\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param Location \xe9\x9f\xb3\xe6\xba\x90\xe3\x82\x92\xe9\x85\x8d\xe7\xbd\xae\xe3\x81\x99\xe3\x82\x8b\xe5\xba\xa7\xe6\xa8\x99\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param Params \xe4\xbb\xbb\xe6\x84\x8f\xe3\x81\xae\xe3\x83\x91\xe3\x83\xa9\xe3\x83\xa1\xe3\x83\xbc\xe3\x82\xbf\xe3\x83\xbc\xe3\x82\x92\xe8\xa8\xad\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f""AtomComponentParams\xe6\xa7\x8b\xe9\x80\xa0\xe4\xbd\x93\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param bAutoDestroy \xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x8c\xe5\xae\x8c\xe4\xba\x86\xe3\x81\x97\xe3\x81\x9f\xe3\x81\xa8\xe3\x81\x8d\xe8\x87\xaa\xe5\x8b\x95\xe7\x9a\x84\xe3\x81\xab\xe3\x82\xaa\xe3\x83\x96\xe3\x82\xb8\xe3\x82\xa7\xe3\x82\xaf\xe3\x83\x88\xe3\x82\x92\xe5\x89\x8a\xe9\x99\xa4\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x8b\xe3\x81\xa9\xe3\x81\x86\xe3\x81\x8b\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@return \xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\x92\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x99\xe3\x82\x8b""AtomComponent\xe3\x81\xae\xe3\x83\xaa\xe3\x83\x95\xe3\x82\xa1\xe3\x83\xac\xe3\x83\xb3\xe3\x82\xb9\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomStatics, nullptr, "SpawnAtomSoundAtLocation", nullptr, nullptr, sizeof(AtomStatics_eventSpawnAtomSoundAtLocation_Parms), Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocationByName_Statics
	{
		struct AtomStatics_eventSpawnAtomSoundAtLocationByName_Parms
		{
			const UObject* WorldContextObject;
			USoundAtomCueSheet* CueSheet;
			FString CueName;
			FVector Location;
			FAtomComponentParams Params;
			bool bAutoDestroy;
			UAtomComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_bAutoDestroy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Params;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CueName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CueSheet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocationByName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocationByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventSpawnAtomSoundAtLocationByName_Parms, ReturnValue), Z_Construct_UClass_UAtomComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocationByName_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocationByName_Statics::NewProp_ReturnValue_MetaData)) };
	void Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocationByName_Statics::NewProp_bAutoDestroy_SetBit(void* Obj)
	{
		((AtomStatics_eventSpawnAtomSoundAtLocationByName_Parms*)Obj)->bAutoDestroy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocationByName_Statics::NewProp_bAutoDestroy = { "bAutoDestroy", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtomStatics_eventSpawnAtomSoundAtLocationByName_Parms), &Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocationByName_Statics::NewProp_bAutoDestroy_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocationByName_Statics::NewProp_Params_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocationByName_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventSpawnAtomSoundAtLocationByName_Parms, Params), Z_Construct_UScriptStruct_FAtomComponentParams, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocationByName_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocationByName_Statics::NewProp_Params_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocationByName_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventSpawnAtomSoundAtLocationByName_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocationByName_Statics::NewProp_CueName = { "CueName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventSpawnAtomSoundAtLocationByName_Parms, CueName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocationByName_Statics::NewProp_CueSheet = { "CueSheet", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventSpawnAtomSoundAtLocationByName_Parms, CueSheet), Z_Construct_UClass_USoundAtomCueSheet_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocationByName_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocationByName_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventSpawnAtomSoundAtLocationByName_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocationByName_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocationByName_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocationByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocationByName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocationByName_Statics::NewProp_bAutoDestroy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocationByName_Statics::NewProp_Params,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocationByName_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocationByName_Statics::NewProp_CueName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocationByName_Statics::NewProp_CueSheet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocationByName_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocationByName_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "5" },
		{ "Category", "Atom" },
		{ "Comment", "/**\n\x09 * \xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x95\xe3\x82\x8c\xe3\x81\x9f\xe4\xbd\x8d\xe7\xbd\xae\xe3\x81\xab\xe9\x9f\xb3\xe6\xba\x90\xe3\x82\x92\xe9\x85\x8d\xe7\xbd\xae\xe3\x81\x97\xe3\x80\x81\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\x92\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * \xe5\x86\x8d\xe7\x94\x9f\xe4\xb8\xad\xe3\x81\xae""AtomComponent\xe3\x82\x92\xe8\xbf\x94\xe3\x81\x99\xe3\x81\x9f\xe3\x82\x81\xe3\x80\x81\xe3\x83\xab\xe3\x83\xbc\xe3\x83\x97\xe9\x9f\xb3\xe3\x82\x92\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x97\xe3\x81\xa6\xe3\x82\x82\xe5\x81\x9c\xe6\xad\xa2\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x93\xe3\x81\xa8\xe3\x81\x8c\xe5\x8f\xaf\xe8\x83\xbd\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\n\x09 * \xe6\x9c\xac\xe9\x96\xa2\xe6\x95\xb0\xe3\x81\xa7\xe9\x85\x8d\xe7\xbd\xae\xe3\x81\x97\xe3\x81\x9f\xe9\x9f\xb3\xe6\xba\x90\xe3\x81\xaf\xe3\x81\xa9\xe3\x81\xae""Actor\xe3\x81\xab\xe3\x82\x82\xe8\xbf\xbd\xe5\xbe\x93\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x9b\xe3\x82\x93\xe3\x80\x82\n\x09 * \xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\xb7\xe3\x83\xbc\xe3\x83\x88\xe3\x81\xa8\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe5\x90\x8d\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x99\xe3\x82\x8b\xe3\x83\x90\xe3\x83\xbc\xe3\x82\xb8\xe3\x83\xa7\xe3\x83\xb3\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\n\x09 * \xe6\xb3\xa8\xe6\x84\x8f: \xe3\x82\xab\xe3\x83\xaa\xe3\x83\xb3\xe3\x82\xb0\xe6\xa9\x9f\xe8\x83\xbd\xe3\x82\x84""Economic-Tick\xe6\xa9\x9f\xe8\x83\xbd\xe3\x81\xaf\xe9\x81\xa9\xe7\x94\xa8\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xbe\xe3\x81\x9b\xe3\x82\x93\xe3\x80\x82\n\x09 *\n\x09 * @param WorldContextObject WorldContextObject\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @param CueSheet Atom\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\xb7\xe3\x83\xbc\xe3\x83\x88\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @param CueName \xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe5\x90\x8d\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @param Location \xe9\x9f\xb3\xe6\xba\x90\xe3\x82\x92\xe9\x85\x8d\xe7\xbd\xae\xe3\x81\x99\xe3\x82\x8b\xe5\xba\xa7\xe6\xa8\x99\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @param Params \xe4\xbb\xbb\xe6\x84\x8f\xe3\x81\xae\xe3\x83\x91\xe3\x83\xa9\xe3\x83\xa1\xe3\x83\xbc\xe3\x82\xbf\xe3\x83\xbc\xe3\x82\x92\xe8\xa8\xad\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f""AtomComponentParams\xe6\xa7\x8b\xe9\x80\xa0\xe4\xbd\x93\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @param bAutoDestroy \xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x8c\xe5\xae\x8c\xe4\xba\x86\xe3\x81\x97\xe3\x81\x9f\xe3\x81\xa8\xe3\x81\x8d\xe8\x87\xaa\xe5\x8b\x95\xe7\x9a\x84\xe3\x81\xab\xe3\x82\xaa\xe3\x83\x96\xe3\x82\xb8\xe3\x82\xa7\xe3\x82\xaf\xe3\x83\x88\xe3\x82\x92\xe5\x89\x8a\xe9\x99\xa4\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x8b\xe3\x81\xa9\xe3\x81\x86\xe3\x81\x8b\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @return \xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\x92\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x99\xe3\x82\x8b""AtomComponent\xe3\x81\xae\xe3\x83\xaa\xe3\x83\x95\xe3\x82\xa1\xe3\x83\xac\xe3\x83\xb3\xe3\x82\xb9\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 */" },
		{ "CPP_Default_bAutoDestroy", "true" },
		{ "Keywords", "play" },
		{ "ModuleRelativePath", "Classes/AtomStatics.h" },
		{ "ToolTip", "\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x95\xe3\x82\x8c\xe3\x81\x9f\xe4\xbd\x8d\xe7\xbd\xae\xe3\x81\xab\xe9\x9f\xb3\xe6\xba\x90\xe3\x82\x92\xe9\x85\x8d\xe7\xbd\xae\xe3\x81\x97\xe3\x80\x81\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\x92\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\xe5\x86\x8d\xe7\x94\x9f\xe4\xb8\xad\xe3\x81\xae""AtomComponent\xe3\x82\x92\xe8\xbf\x94\xe3\x81\x99\xe3\x81\x9f\xe3\x82\x81\xe3\x80\x81\xe3\x83\xab\xe3\x83\xbc\xe3\x83\x97\xe9\x9f\xb3\xe3\x82\x92\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x97\xe3\x81\xa6\xe3\x82\x82\xe5\x81\x9c\xe6\xad\xa2\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x93\xe3\x81\xa8\xe3\x81\x8c\xe5\x8f\xaf\xe8\x83\xbd\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\n\xe6\x9c\xac\xe9\x96\xa2\xe6\x95\xb0\xe3\x81\xa7\xe9\x85\x8d\xe7\xbd\xae\xe3\x81\x97\xe3\x81\x9f\xe9\x9f\xb3\xe6\xba\x90\xe3\x81\xaf\xe3\x81\xa9\xe3\x81\xae""Actor\xe3\x81\xab\xe3\x82\x82\xe8\xbf\xbd\xe5\xbe\x93\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x9b\xe3\x82\x93\xe3\x80\x82\n\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\xb7\xe3\x83\xbc\xe3\x83\x88\xe3\x81\xa8\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe5\x90\x8d\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x99\xe3\x82\x8b\xe3\x83\x90\xe3\x83\xbc\xe3\x82\xb8\xe3\x83\xa7\xe3\x83\xb3\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\n\xe6\xb3\xa8\xe6\x84\x8f: \xe3\x82\xab\xe3\x83\xaa\xe3\x83\xb3\xe3\x82\xb0\xe6\xa9\x9f\xe8\x83\xbd\xe3\x82\x84""Economic-Tick\xe6\xa9\x9f\xe8\x83\xbd\xe3\x81\xaf\xe9\x81\xa9\xe7\x94\xa8\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xbe\xe3\x81\x9b\xe3\x82\x93\xe3\x80\x82\n\n@param WorldContextObject WorldContextObject\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param CueSheet Atom\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\xb7\xe3\x83\xbc\xe3\x83\x88\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param CueName \xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe5\x90\x8d\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param Location \xe9\x9f\xb3\xe6\xba\x90\xe3\x82\x92\xe9\x85\x8d\xe7\xbd\xae\xe3\x81\x99\xe3\x82\x8b\xe5\xba\xa7\xe6\xa8\x99\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param Params \xe4\xbb\xbb\xe6\x84\x8f\xe3\x81\xae\xe3\x83\x91\xe3\x83\xa9\xe3\x83\xa1\xe3\x83\xbc\xe3\x82\xbf\xe3\x83\xbc\xe3\x82\x92\xe8\xa8\xad\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f""AtomComponentParams\xe6\xa7\x8b\xe9\x80\xa0\xe4\xbd\x93\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param bAutoDestroy \xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x8c\xe5\xae\x8c\xe4\xba\x86\xe3\x81\x97\xe3\x81\x9f\xe3\x81\xa8\xe3\x81\x8d\xe8\x87\xaa\xe5\x8b\x95\xe7\x9a\x84\xe3\x81\xab\xe3\x82\xaa\xe3\x83\x96\xe3\x82\xb8\xe3\x82\xa7\xe3\x82\xaf\xe3\x83\x88\xe3\x82\x92\xe5\x89\x8a\xe9\x99\xa4\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x8b\xe3\x81\xa9\xe3\x81\x86\xe3\x81\x8b\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@return \xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\x92\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x99\xe3\x82\x8b""AtomComponent\xe3\x81\xae\xe3\x83\xaa\xe3\x83\x95\xe3\x82\xa1\xe3\x83\xac\xe3\x83\xb3\xe3\x82\xb9\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocationByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomStatics, nullptr, "SpawnAtomSoundAtLocationByName", nullptr, nullptr, sizeof(AtomStatics_eventSpawnAtomSoundAtLocationByName_Parms), Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocationByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocationByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocationByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocationByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocationByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocationByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached_Statics
	{
		struct AtomStatics_eventSpawnAtomSoundAttached_Parms
		{
			USoundAtomCue* Sound;
			USceneComponent* AttachToComponent;
			FAtomComponentParams Params;
			FName AttachPointName;
			FVector Location;
			TEnumAsByte<EAttachLocation::Type> LocationType;
			bool bStopWhenAttachedToDestroyed;
			bool bAutoDestroy;
			UAtomComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_bAutoDestroy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroy;
		static void NewProp_bStopWhenAttachedToDestroyed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStopWhenAttachedToDestroyed;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LocationType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AttachPointName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Params;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachToComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttachToComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventSpawnAtomSoundAttached_Parms, ReturnValue), Z_Construct_UClass_UAtomComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached_Statics::NewProp_ReturnValue_MetaData)) };
	void Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached_Statics::NewProp_bAutoDestroy_SetBit(void* Obj)
	{
		((AtomStatics_eventSpawnAtomSoundAttached_Parms*)Obj)->bAutoDestroy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached_Statics::NewProp_bAutoDestroy = { "bAutoDestroy", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtomStatics_eventSpawnAtomSoundAttached_Parms), &Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached_Statics::NewProp_bAutoDestroy_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached_Statics::NewProp_bStopWhenAttachedToDestroyed_SetBit(void* Obj)
	{
		((AtomStatics_eventSpawnAtomSoundAttached_Parms*)Obj)->bStopWhenAttachedToDestroyed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached_Statics::NewProp_bStopWhenAttachedToDestroyed = { "bStopWhenAttachedToDestroyed", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtomStatics_eventSpawnAtomSoundAttached_Parms), &Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached_Statics::NewProp_bStopWhenAttachedToDestroyed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached_Statics::NewProp_LocationType = { "LocationType", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventSpawnAtomSoundAttached_Parms, LocationType), Z_Construct_UEnum_Engine_EAttachLocation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventSpawnAtomSoundAttached_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached_Statics::NewProp_AttachPointName = { "AttachPointName", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventSpawnAtomSoundAttached_Parms, AttachPointName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached_Statics::NewProp_Params_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventSpawnAtomSoundAttached_Parms, Params), Z_Construct_UScriptStruct_FAtomComponentParams, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached_Statics::NewProp_Params_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached_Statics::NewProp_AttachToComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached_Statics::NewProp_AttachToComponent = { "AttachToComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventSpawnAtomSoundAttached_Parms, AttachToComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached_Statics::NewProp_AttachToComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached_Statics::NewProp_AttachToComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventSpawnAtomSoundAttached_Parms, Sound), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached_Statics::NewProp_bAutoDestroy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached_Statics::NewProp_bStopWhenAttachedToDestroyed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached_Statics::NewProp_LocationType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached_Statics::NewProp_AttachPointName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached_Statics::NewProp_Params,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached_Statics::NewProp_AttachToComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached_Statics::NewProp_Sound,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "Category", "Atom" },
		{ "Comment", "/**\n\x09 * \xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x95\xe3\x82\x8c\xe3\x81\x9f\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x9d\xe3\x83\xbc\xe3\x83\x8d\xe3\x83\xb3\xe3\x83\x88\xe3\x81\xab\xe8\xbf\xbd\xe5\xbe\x93\xe3\x81\x99\xe3\x82\x8b\xe9\x9f\xb3\xe6\xba\x90\xe3\x82\x92\xe9\x85\x8d\xe7\xbd\xae\xe3\x81\x97\xe3\x80\x81\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\x92\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 *\n\x09 * @param Sound Atom\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @param AttachToComponent \xe3\x81\x93\xe3\x81\x93\xe3\x81\xa7\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x9d\xe3\x83\xbc\xe3\x83\x8d\xe3\x83\xb3\xe3\x83\x88\xe3\x81\xab\xe8\xbf\xbd\xe5\xbe\x93\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @param Params \xe4\xbb\xbb\xe6\x84\x8f\xe3\x81\xae\xe3\x83\x91\xe3\x83\xa9\xe3\x83\xa1\xe3\x83\xbc\xe3\x82\xbf\xe3\x83\xbc\xe3\x82\x92\xe8\xa8\xad\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f""AtomComponentParams\xe6\xa7\x8b\xe9\x80\xa0\xe4\xbd\x93\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @param AttachPointName \xe3\x82\xa2\xe3\x82\xbf\xe3\x83\x83\xe3\x83\x81\xe3\x81\x99\xe3\x82\x8b\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xae\xe5\x90\x8d\xe5\x89\x8d\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @param Location \xe9\x9f\xb3\xe6\xba\x90\xe3\x82\x92\xe9\x85\x8d\xe7\xbd\xae\xe3\x81\x99\xe3\x82\x8b\xe5\xba\xa7\xe6\xa8\x99\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @param LocationType \xe3\x83\xad\xe3\x82\xb1\xe3\x83\xbc\xe3\x82\xb7\xe3\x83\xa7\xe3\x83\xb3\xe3\x82\xbf\xe3\x82\xa4\xe3\x83\x97\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @param bStopWhenAttachedToDestroyed \xe8\xbf\xbd\xe5\xbe\x93\xe3\x81\x97\xe3\x81\xa6\xe3\x81\x84\xe3\x82\x8b\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x9d\xe3\x83\xbc\xe3\x83\x8d\xe3\x83\xb3\xe3\x83\x88\xe3\x81\x8c\xe7\xa0\xb4\xe6\xa3\x84\xe3\x81\x95\xe3\x82\x8c\xe3\x81\x9f\xe3\x81\xa8\xe3\x81\x8d\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x82\x92\xe5\x81\x9c\xe6\xad\xa2\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x8b\xe3\x81\xa9\xe3\x81\x86\xe3\x81\x8b\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @param bAutoDestroy \xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x8c\xe5\xae\x8c\xe4\xba\x86\xe3\x81\x97\xe3\x81\x9f\xe3\x81\xa8\xe3\x81\x8d\xe8\x87\xaa\xe5\x8b\x95\xe7\x9a\x84\xe3\x81\xab\xe3\x82\xaa\xe3\x83\x96\xe3\x82\xb8\xe3\x82\xa7\xe3\x82\xaf\xe3\x83\x88\xe3\x82\x92\xe5\x89\x8a\xe9\x99\xa4\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x8b\xe3\x81\xa9\xe3\x81\x86\xe3\x81\x8b\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @return \xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\x92\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x99\xe3\x82\x8b""AtomComponent\xe3\x81\xae\xe3\x83\xaa\xe3\x83\x95\xe3\x82\xa1\xe3\x83\xac\xe3\x83\xb3\xe3\x82\xb9\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 */" },
		{ "CPP_Default_AttachPointName", "None" },
		{ "CPP_Default_bAutoDestroy", "true" },
		{ "CPP_Default_bStopWhenAttachedToDestroyed", "false" },
		{ "CPP_Default_Location", "" },
		{ "CPP_Default_LocationType", "KeepRelativeOffset" },
		{ "ModuleRelativePath", "Classes/AtomStatics.h" },
		{ "ToolTip", "\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x95\xe3\x82\x8c\xe3\x81\x9f\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x9d\xe3\x83\xbc\xe3\x83\x8d\xe3\x83\xb3\xe3\x83\x88\xe3\x81\xab\xe8\xbf\xbd\xe5\xbe\x93\xe3\x81\x99\xe3\x82\x8b\xe9\x9f\xb3\xe6\xba\x90\xe3\x82\x92\xe9\x85\x8d\xe7\xbd\xae\xe3\x81\x97\xe3\x80\x81\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\x92\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\n@param Sound Atom\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param AttachToComponent \xe3\x81\x93\xe3\x81\x93\xe3\x81\xa7\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x9d\xe3\x83\xbc\xe3\x83\x8d\xe3\x83\xb3\xe3\x83\x88\xe3\x81\xab\xe8\xbf\xbd\xe5\xbe\x93\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param Params \xe4\xbb\xbb\xe6\x84\x8f\xe3\x81\xae\xe3\x83\x91\xe3\x83\xa9\xe3\x83\xa1\xe3\x83\xbc\xe3\x82\xbf\xe3\x83\xbc\xe3\x82\x92\xe8\xa8\xad\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f""AtomComponentParams\xe6\xa7\x8b\xe9\x80\xa0\xe4\xbd\x93\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param AttachPointName \xe3\x82\xa2\xe3\x82\xbf\xe3\x83\x83\xe3\x83\x81\xe3\x81\x99\xe3\x82\x8b\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xae\xe5\x90\x8d\xe5\x89\x8d\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param Location \xe9\x9f\xb3\xe6\xba\x90\xe3\x82\x92\xe9\x85\x8d\xe7\xbd\xae\xe3\x81\x99\xe3\x82\x8b\xe5\xba\xa7\xe6\xa8\x99\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param LocationType \xe3\x83\xad\xe3\x82\xb1\xe3\x83\xbc\xe3\x82\xb7\xe3\x83\xa7\xe3\x83\xb3\xe3\x82\xbf\xe3\x82\xa4\xe3\x83\x97\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param bStopWhenAttachedToDestroyed \xe8\xbf\xbd\xe5\xbe\x93\xe3\x81\x97\xe3\x81\xa6\xe3\x81\x84\xe3\x82\x8b\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x9d\xe3\x83\xbc\xe3\x83\x8d\xe3\x83\xb3\xe3\x83\x88\xe3\x81\x8c\xe7\xa0\xb4\xe6\xa3\x84\xe3\x81\x95\xe3\x82\x8c\xe3\x81\x9f\xe3\x81\xa8\xe3\x81\x8d\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x82\x92\xe5\x81\x9c\xe6\xad\xa2\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x8b\xe3\x81\xa9\xe3\x81\x86\xe3\x81\x8b\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param bAutoDestroy \xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x8c\xe5\xae\x8c\xe4\xba\x86\xe3\x81\x97\xe3\x81\x9f\xe3\x81\xa8\xe3\x81\x8d\xe8\x87\xaa\xe5\x8b\x95\xe7\x9a\x84\xe3\x81\xab\xe3\x82\xaa\xe3\x83\x96\xe3\x82\xb8\xe3\x82\xa7\xe3\x82\xaf\xe3\x83\x88\xe3\x82\x92\xe5\x89\x8a\xe9\x99\xa4\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x8b\xe3\x81\xa9\xe3\x81\x86\xe3\x81\x8b\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@return \xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\x92\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x99\xe3\x82\x8b""AtomComponent\xe3\x81\xae\xe3\x83\xaa\xe3\x83\x95\xe3\x82\xa1\xe3\x83\xac\xe3\x83\xb3\xe3\x82\xb9\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomStatics, nullptr, "SpawnAtomSoundAttached", nullptr, nullptr, sizeof(AtomStatics_eventSpawnAtomSoundAttached_Parms), Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics
	{
		struct AtomStatics_eventSpawnAtomSoundAttachedByName_Parms
		{
			USoundAtomCueSheet* CueSheet;
			FString CueName;
			USceneComponent* AttachToComponent;
			FAtomComponentParams Params;
			FName AttachPointName;
			FVector Location;
			TEnumAsByte<EAttachLocation::Type> LocationType;
			bool bStopWhenAttachedToDestroyed;
			bool bAutoDestroy;
			UAtomComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_bAutoDestroy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroy;
		static void NewProp_bStopWhenAttachedToDestroyed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStopWhenAttachedToDestroyed;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LocationType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AttachPointName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Params;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachToComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttachToComponent;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CueName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CueSheet;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventSpawnAtomSoundAttachedByName_Parms, ReturnValue), Z_Construct_UClass_UAtomComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::NewProp_ReturnValue_MetaData)) };
	void Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::NewProp_bAutoDestroy_SetBit(void* Obj)
	{
		((AtomStatics_eventSpawnAtomSoundAttachedByName_Parms*)Obj)->bAutoDestroy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::NewProp_bAutoDestroy = { "bAutoDestroy", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtomStatics_eventSpawnAtomSoundAttachedByName_Parms), &Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::NewProp_bAutoDestroy_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::NewProp_bStopWhenAttachedToDestroyed_SetBit(void* Obj)
	{
		((AtomStatics_eventSpawnAtomSoundAttachedByName_Parms*)Obj)->bStopWhenAttachedToDestroyed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::NewProp_bStopWhenAttachedToDestroyed = { "bStopWhenAttachedToDestroyed", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtomStatics_eventSpawnAtomSoundAttachedByName_Parms), &Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::NewProp_bStopWhenAttachedToDestroyed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::NewProp_LocationType = { "LocationType", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventSpawnAtomSoundAttachedByName_Parms, LocationType), Z_Construct_UEnum_Engine_EAttachLocation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventSpawnAtomSoundAttachedByName_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::NewProp_AttachPointName = { "AttachPointName", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventSpawnAtomSoundAttachedByName_Parms, AttachPointName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::NewProp_Params_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010040008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventSpawnAtomSoundAttachedByName_Parms, Params), Z_Construct_UScriptStruct_FAtomComponentParams, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::NewProp_Params_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::NewProp_AttachToComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::NewProp_AttachToComponent = { "AttachToComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventSpawnAtomSoundAttachedByName_Parms, AttachToComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::NewProp_AttachToComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::NewProp_AttachToComponent_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::NewProp_CueName = { "CueName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventSpawnAtomSoundAttachedByName_Parms, CueName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::NewProp_CueSheet = { "CueSheet", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventSpawnAtomSoundAttachedByName_Parms, CueSheet), Z_Construct_UClass_USoundAtomCueSheet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::NewProp_bAutoDestroy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::NewProp_bStopWhenAttachedToDestroyed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::NewProp_LocationType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::NewProp_AttachPointName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::NewProp_Params,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::NewProp_AttachToComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::NewProp_CueName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::NewProp_CueSheet,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "Category", "Atom" },
		{ "Comment", "/**\n\x09 * \xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x95\xe3\x82\x8c\xe3\x81\x9f\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x9d\xe3\x83\xbc\xe3\x83\x8d\xe3\x83\xb3\xe3\x83\x88\xe3\x81\xab\xe8\xbf\xbd\xe5\xbe\x93\xe3\x81\x99\xe3\x82\x8b\xe9\x9f\xb3\xe6\xba\x90\xe3\x82\x92\xe9\x85\x8d\xe7\xbd\xae\xe3\x81\x97\xe3\x80\x81\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\x92\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * \xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\xb7\xe3\x83\xbc\xe3\x83\x88\xe3\x81\xa8\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe5\x90\x8d\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x99\xe3\x82\x8b\xe3\x83\x90\xe3\x83\xbc\xe3\x82\xb8\xe3\x83\xa7\xe3\x83\xb3\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\n\x09 * \xe6\xb3\xa8\xe6\x84\x8f: \xe3\x82\xab\xe3\x83\xaa\xe3\x83\xb3\xe3\x82\xb0\xe6\xa9\x9f\xe8\x83\xbd\xe3\x82\x84""Economic-Tick\xe6\xa9\x9f\xe8\x83\xbd\xe3\x81\xaf\xe9\x81\xa9\xe7\x94\xa8\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xbe\xe3\x81\x9b\xe3\x82\x93\xe3\x80\x82\n\x09 *\n\x09 * @param CueSheet Atom\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\xb7\xe3\x83\xbc\xe3\x83\x88\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @param CueName \xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe5\x90\x8d\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @param AttachToComponent \xe3\x81\x93\xe3\x81\x93\xe3\x81\xa7\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x9d\xe3\x83\xbc\xe3\x83\x8d\xe3\x83\xb3\xe3\x83\x88\xe3\x81\xab\xe8\xbf\xbd\xe5\xbe\x93\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @param Params \xe4\xbb\xbb\xe6\x84\x8f\xe3\x81\xae\xe3\x83\x91\xe3\x83\xa9\xe3\x83\xa1\xe3\x83\xbc\xe3\x82\xbf\xe3\x83\xbc\xe3\x82\x92\xe8\xa8\xad\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f""AtomComponentParams\xe6\xa7\x8b\xe9\x80\xa0\xe4\xbd\x93\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @param AttachPointName \xe3\x82\xa2\xe3\x82\xbf\xe3\x83\x83\xe3\x83\x81\xe3\x81\x99\xe3\x82\x8b\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xae\xe5\x90\x8d\xe5\x89\x8d\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @param Location \xe9\x9f\xb3\xe6\xba\x90\xe3\x82\x92\xe9\x85\x8d\xe7\xbd\xae\xe3\x81\x99\xe3\x82\x8b\xe5\xba\xa7\xe6\xa8\x99\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @param LocationType \xe3\x83\xad\xe3\x82\xb1\xe3\x83\xbc\xe3\x82\xb7\xe3\x83\xa7\xe3\x83\xb3\xe3\x82\xbf\xe3\x82\xa4\xe3\x83\x97\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @param bStopWhenAttachedToDestroyed \xe8\xbf\xbd\xe5\xbe\x93\xe3\x81\x97\xe3\x81\xa6\xe3\x81\x84\xe3\x82\x8b\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x9d\xe3\x83\xbc\xe3\x83\x8d\xe3\x83\xb3\xe3\x83\x88\xe3\x81\x8c\xe7\xa0\xb4\xe6\xa3\x84\xe3\x81\x95\xe3\x82\x8c\xe3\x81\x9f\xe3\x81\xa8\xe3\x81\x8d\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x82\x92\xe5\x81\x9c\xe6\xad\xa2\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x8b\xe3\x81\xa9\xe3\x81\x86\xe3\x81\x8b\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @param bAutoDestroy \xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x8c\xe5\xae\x8c\xe4\xba\x86\xe3\x81\x97\xe3\x81\x9f\xe3\x81\xa8\xe3\x81\x8d\xe8\x87\xaa\xe5\x8b\x95\xe7\x9a\x84\xe3\x81\xab\xe3\x82\xaa\xe3\x83\x96\xe3\x82\xb8\xe3\x82\xa7\xe3\x82\xaf\xe3\x83\x88\xe3\x82\x92\xe5\x89\x8a\xe9\x99\xa4\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x8b\xe3\x81\xa9\xe3\x81\x86\xe3\x81\x8b\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @return \xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\x92\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x99\xe3\x82\x8b""AtomComponent\xe3\x81\xae\xe3\x83\xaa\xe3\x83\x95\xe3\x82\xa1\xe3\x83\xac\xe3\x83\xb3\xe3\x82\xb9\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 */" },
		{ "CPP_Default_AttachPointName", "None" },
		{ "CPP_Default_bAutoDestroy", "true" },
		{ "CPP_Default_bStopWhenAttachedToDestroyed", "false" },
		{ "CPP_Default_Location", "" },
		{ "CPP_Default_LocationType", "KeepRelativeOffset" },
		{ "ModuleRelativePath", "Classes/AtomStatics.h" },
		{ "ToolTip", "\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x95\xe3\x82\x8c\xe3\x81\x9f\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x9d\xe3\x83\xbc\xe3\x83\x8d\xe3\x83\xb3\xe3\x83\x88\xe3\x81\xab\xe8\xbf\xbd\xe5\xbe\x93\xe3\x81\x99\xe3\x82\x8b\xe9\x9f\xb3\xe6\xba\x90\xe3\x82\x92\xe9\x85\x8d\xe7\xbd\xae\xe3\x81\x97\xe3\x80\x81\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\x92\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\xb7\xe3\x83\xbc\xe3\x83\x88\xe3\x81\xa8\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe5\x90\x8d\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x99\xe3\x82\x8b\xe3\x83\x90\xe3\x83\xbc\xe3\x82\xb8\xe3\x83\xa7\xe3\x83\xb3\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\n\xe6\xb3\xa8\xe6\x84\x8f: \xe3\x82\xab\xe3\x83\xaa\xe3\x83\xb3\xe3\x82\xb0\xe6\xa9\x9f\xe8\x83\xbd\xe3\x82\x84""Economic-Tick\xe6\xa9\x9f\xe8\x83\xbd\xe3\x81\xaf\xe9\x81\xa9\xe7\x94\xa8\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xbe\xe3\x81\x9b\xe3\x82\x93\xe3\x80\x82\n\n@param CueSheet Atom\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\xb7\xe3\x83\xbc\xe3\x83\x88\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param CueName \xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe5\x90\x8d\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param AttachToComponent \xe3\x81\x93\xe3\x81\x93\xe3\x81\xa7\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x9d\xe3\x83\xbc\xe3\x83\x8d\xe3\x83\xb3\xe3\x83\x88\xe3\x81\xab\xe8\xbf\xbd\xe5\xbe\x93\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param Params \xe4\xbb\xbb\xe6\x84\x8f\xe3\x81\xae\xe3\x83\x91\xe3\x83\xa9\xe3\x83\xa1\xe3\x83\xbc\xe3\x82\xbf\xe3\x83\xbc\xe3\x82\x92\xe8\xa8\xad\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f""AtomComponentParams\xe6\xa7\x8b\xe9\x80\xa0\xe4\xbd\x93\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param AttachPointName \xe3\x82\xa2\xe3\x82\xbf\xe3\x83\x83\xe3\x83\x81\xe3\x81\x99\xe3\x82\x8b\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xae\xe5\x90\x8d\xe5\x89\x8d\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param Location \xe9\x9f\xb3\xe6\xba\x90\xe3\x82\x92\xe9\x85\x8d\xe7\xbd\xae\xe3\x81\x99\xe3\x82\x8b\xe5\xba\xa7\xe6\xa8\x99\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param LocationType \xe3\x83\xad\xe3\x82\xb1\xe3\x83\xbc\xe3\x82\xb7\xe3\x83\xa7\xe3\x83\xb3\xe3\x82\xbf\xe3\x82\xa4\xe3\x83\x97\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param bStopWhenAttachedToDestroyed \xe8\xbf\xbd\xe5\xbe\x93\xe3\x81\x97\xe3\x81\xa6\xe3\x81\x84\xe3\x82\x8b\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x9d\xe3\x83\xbc\xe3\x83\x8d\xe3\x83\xb3\xe3\x83\x88\xe3\x81\x8c\xe7\xa0\xb4\xe6\xa3\x84\xe3\x81\x95\xe3\x82\x8c\xe3\x81\x9f\xe3\x81\xa8\xe3\x81\x8d\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x82\x92\xe5\x81\x9c\xe6\xad\xa2\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x8b\xe3\x81\xa9\xe3\x81\x86\xe3\x81\x8b\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param bAutoDestroy \xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x8c\xe5\xae\x8c\xe4\xba\x86\xe3\x81\x97\xe3\x81\x9f\xe3\x81\xa8\xe3\x81\x8d\xe8\x87\xaa\xe5\x8b\x95\xe7\x9a\x84\xe3\x81\xab\xe3\x82\xaa\xe3\x83\x96\xe3\x82\xb8\xe3\x82\xa7\xe3\x82\xaf\xe3\x83\x88\xe3\x82\x92\xe5\x89\x8a\xe9\x99\xa4\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x8b\xe3\x81\xa9\xe3\x81\x86\xe3\x81\x8b\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@return \xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\x92\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x99\xe3\x82\x8b""AtomComponent\xe3\x81\xae\xe3\x83\xaa\xe3\x83\x95\xe3\x82\xa1\xe3\x83\xac\xe3\x83\xb3\xe3\x82\xb9\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomStatics, nullptr, "SpawnAtomSoundAttachedByName", nullptr, nullptr, sizeof(AtomStatics_eventSpawnAtomSoundAttachedByName_Parms), Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomStatics_SpawnSound2D_Statics
	{
		struct AtomStatics_eventSpawnSound2D_Parms
		{
			const UObject* WorldContextObject;
			USoundAtomCue* Sound;
			float PitchMultiplier;
			float StartTime;
			bool bPersistAcrossLevelTransition;
			bool bAutoDestroy;
			UAtomComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_bAutoDestroy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroy;
		static void NewProp_bPersistAcrossLevelTransition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPersistAcrossLevelTransition;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchMultiplier;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SpawnSound2D_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnSound2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventSpawnSound2D_Parms, ReturnValue), Z_Construct_UClass_UAtomComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SpawnSound2D_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnSound2D_Statics::NewProp_ReturnValue_MetaData)) };
	void Z_Construct_UFunction_UAtomStatics_SpawnSound2D_Statics::NewProp_bAutoDestroy_SetBit(void* Obj)
	{
		((AtomStatics_eventSpawnSound2D_Parms*)Obj)->bAutoDestroy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnSound2D_Statics::NewProp_bAutoDestroy = { "bAutoDestroy", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtomStatics_eventSpawnSound2D_Parms), &Z_Construct_UFunction_UAtomStatics_SpawnSound2D_Statics::NewProp_bAutoDestroy_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAtomStatics_SpawnSound2D_Statics::NewProp_bPersistAcrossLevelTransition_SetBit(void* Obj)
	{
		((AtomStatics_eventSpawnSound2D_Parms*)Obj)->bPersistAcrossLevelTransition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnSound2D_Statics::NewProp_bPersistAcrossLevelTransition = { "bPersistAcrossLevelTransition", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtomStatics_eventSpawnSound2D_Parms), &Z_Construct_UFunction_UAtomStatics_SpawnSound2D_Statics::NewProp_bPersistAcrossLevelTransition_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnSound2D_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventSpawnSound2D_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnSound2D_Statics::NewProp_PitchMultiplier = { "PitchMultiplier", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventSpawnSound2D_Parms, PitchMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnSound2D_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventSpawnSound2D_Parms, Sound), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SpawnSound2D_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnSound2D_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventSpawnSound2D_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SpawnSound2D_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnSound2D_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomStatics_SpawnSound2D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnSound2D_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnSound2D_Statics::NewProp_bAutoDestroy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnSound2D_Statics::NewProp_bPersistAcrossLevelTransition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnSound2D_Statics::NewProp_StartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnSound2D_Statics::NewProp_PitchMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnSound2D_Statics::NewProp_Sound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnSound2D_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SpawnSound2D_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "Atom" },
		{ "Comment", "/**\n\x09 * UGameplayStatics::SpawnSound2D\xe4\xba\x92\xe6\x8f\x9b\xe3\x81\xae""API\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\n\x09 * \xef\xbc\x88\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x99\xe3\x82\x8b\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x81\x8c""AtomCue\xe3\x82\xa2\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88\xe3\x81\xa7\xe3\x81\x82\xe3\x82\x8b\xe7\x82\xb9\xe3\x81\x8c\xe7\x95\xb0\xe3\x81\xaa\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\xef\xbc\x89\n\x09 *\n\x09 * @param WorldContextObject WorldContextObject\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @param Sound Atom\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @param PitchMultiplier \xe3\x83\x94\xe3\x83\x83\xe3\x83\x81\xe3\x81\xae\xe5\x80\x8d\xe7\x8e\x87\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @param StartTime \xe3\x81\x93\xe3\x81\x93\xe3\x81\xab\xe9\x96\x8b\xe5\xa7\x8b\xe6\x99\x82\xe9\x96\x93(\xe7\xa7\x92)\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x93\xe3\x81\xa8\xe3\x81\xa7\xe3\x80\x81\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf\xe3\x82\x92\xe9\x80\x94\xe4\xb8\xad\xe3\x81\x8b\xe3\x82\x89\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x93\xe3\x81\xa8\xe3\x82\x82\xe5\x8f\xaf\xe8\x83\xbd\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\n\x09 * @param bPersistAcrossLevelTransition \xe3\x83\x91\xe3\x83\xbc\xe3\x82\xb7\xe3\x82\xb9\xe3\x82\xbf\xe3\x83\xb3\xe3\x83\x88\xe3\x83\xac\xe3\x83\x99\xe3\x83\xab\xe3\x82\x92\xe3\x81\xbe\xe3\x81\x9f\xe3\x81\x84\xe3\x81\xa7\xe7\x94\x9f\xe5\xad\x98\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x8b\xe3\x81\xa9\xe3\x81\x86\xe3\x81\x8b\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @param bAutoDestroy \xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x8c\xe5\xae\x8c\xe4\xba\x86\xe3\x81\x97\xe3\x81\x9f\xe3\x81\xa8\xe3\x81\x8d\xe8\x87\xaa\xe5\x8b\x95\xe7\x9a\x84\xe3\x81\xab\xe3\x82\xaa\xe3\x83\x96\xe3\x82\xb8\xe3\x82\xa7\xe3\x82\xaf\xe3\x83\x88\xe3\x82\x92\xe5\x89\x8a\xe9\x99\xa4\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x8b\xe3\x81\xa9\xe3\x81\x86\xe3\x81\x8b\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @return \xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\x92\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x99\xe3\x82\x8b""AtomComponent\xe3\x81\xae\xe3\x83\xaa\xe3\x83\x95\xe3\x82\xa1\xe3\x83\xac\xe3\x83\xb3\xe3\x82\xb9\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 */" },
		{ "CPP_Default_bAutoDestroy", "true" },
		{ "CPP_Default_bPersistAcrossLevelTransition", "false" },
		{ "CPP_Default_PitchMultiplier", "1.000000" },
		{ "CPP_Default_StartTime", "0.000000" },
		{ "Keywords", "Play" },
		{ "ModuleRelativePath", "Classes/AtomStatics.h" },
		{ "ToolTip", "UGameplayStatics::SpawnSound2D\xe4\xba\x92\xe6\x8f\x9b\xe3\x81\xae""API\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\n\xef\xbc\x88\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x99\xe3\x82\x8b\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x81\x8c""AtomCue\xe3\x82\xa2\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88\xe3\x81\xa7\xe3\x81\x82\xe3\x82\x8b\xe7\x82\xb9\xe3\x81\x8c\xe7\x95\xb0\xe3\x81\xaa\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\xef\xbc\x89\n\n@param WorldContextObject WorldContextObject\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param Sound Atom\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param PitchMultiplier \xe3\x83\x94\xe3\x83\x83\xe3\x83\x81\xe3\x81\xae\xe5\x80\x8d\xe7\x8e\x87\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param StartTime \xe3\x81\x93\xe3\x81\x93\xe3\x81\xab\xe9\x96\x8b\xe5\xa7\x8b\xe6\x99\x82\xe9\x96\x93(\xe7\xa7\x92)\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x93\xe3\x81\xa8\xe3\x81\xa7\xe3\x80\x81\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf\xe3\x82\x92\xe9\x80\x94\xe4\xb8\xad\xe3\x81\x8b\xe3\x82\x89\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x93\xe3\x81\xa8\xe3\x82\x82\xe5\x8f\xaf\xe8\x83\xbd\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\n@param bPersistAcrossLevelTransition \xe3\x83\x91\xe3\x83\xbc\xe3\x82\xb7\xe3\x82\xb9\xe3\x82\xbf\xe3\x83\xb3\xe3\x83\x88\xe3\x83\xac\xe3\x83\x99\xe3\x83\xab\xe3\x82\x92\xe3\x81\xbe\xe3\x81\x9f\xe3\x81\x84\xe3\x81\xa7\xe7\x94\x9f\xe5\xad\x98\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x8b\xe3\x81\xa9\xe3\x81\x86\xe3\x81\x8b\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param bAutoDestroy \xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x8c\xe5\xae\x8c\xe4\xba\x86\xe3\x81\x97\xe3\x81\x9f\xe3\x81\xa8\xe3\x81\x8d\xe8\x87\xaa\xe5\x8b\x95\xe7\x9a\x84\xe3\x81\xab\xe3\x82\xaa\xe3\x83\x96\xe3\x82\xb8\xe3\x82\xa7\xe3\x82\xaf\xe3\x83\x88\xe3\x82\x92\xe5\x89\x8a\xe9\x99\xa4\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x8b\xe3\x81\xa9\xe3\x81\x86\xe3\x81\x8b\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@return \xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\x92\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x99\xe3\x82\x8b""AtomComponent\xe3\x81\xae\xe3\x83\xaa\xe3\x83\x95\xe3\x82\xa1\xe3\x83\xac\xe3\x83\xb3\xe3\x82\xb9\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomStatics_SpawnSound2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomStatics, nullptr, "SpawnSound2D", nullptr, nullptr, sizeof(AtomStatics_eventSpawnSound2D_Parms), Z_Construct_UFunction_UAtomStatics_SpawnSound2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnSound2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SpawnSound2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnSound2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomStatics_SpawnSound2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomStatics_SpawnSound2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation_Statics
	{
		struct AtomStatics_eventSpawnSoundAtLocation_Parms
		{
			const UObject* WorldContextObject;
			USoundAtomCue* Sound;
			FVector Location;
			FRotator Rotation;
			float VolumeMultiplier;
			float PitchMultiplier;
			float StartTime;
			USoundAttenuation* AttenuationSettings;
			USoundConcurrency* ConcurrencySettings;
			bool bAutoDestroy;
			UAtomComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_bAutoDestroy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroy;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConcurrencySettings;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttenuationSettings;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchMultiplier;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventSpawnSoundAtLocation_Parms, ReturnValue), Z_Construct_UClass_UAtomComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation_Statics::NewProp_ReturnValue_MetaData)) };
	void Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation_Statics::NewProp_bAutoDestroy_SetBit(void* Obj)
	{
		((AtomStatics_eventSpawnSoundAtLocation_Parms*)Obj)->bAutoDestroy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation_Statics::NewProp_bAutoDestroy = { "bAutoDestroy", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtomStatics_eventSpawnSoundAtLocation_Parms), &Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation_Statics::NewProp_bAutoDestroy_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation_Statics::NewProp_ConcurrencySettings = { "ConcurrencySettings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventSpawnSoundAtLocation_Parms, ConcurrencySettings), Z_Construct_UClass_USoundConcurrency_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation_Statics::NewProp_AttenuationSettings = { "AttenuationSettings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventSpawnSoundAtLocation_Parms, AttenuationSettings), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventSpawnSoundAtLocation_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation_Statics::NewProp_PitchMultiplier = { "PitchMultiplier", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventSpawnSoundAtLocation_Parms, PitchMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation_Statics::NewProp_VolumeMultiplier = { "VolumeMultiplier", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventSpawnSoundAtLocation_Parms, VolumeMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventSpawnSoundAtLocation_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventSpawnSoundAtLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventSpawnSoundAtLocation_Parms, Sound), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventSpawnSoundAtLocation_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation_Statics::NewProp_bAutoDestroy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation_Statics::NewProp_ConcurrencySettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation_Statics::NewProp_AttenuationSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation_Statics::NewProp_StartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation_Statics::NewProp_PitchMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation_Statics::NewProp_VolumeMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation_Statics::NewProp_Sound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "Category", "Atom" },
		{ "Comment", "/**\n\x09 * \xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x95\xe3\x82\x8c\xe3\x81\x9f\xe4\xbd\x8d\xe7\xbd\xae\xe3\x81\xab\xe9\x9f\xb3\xe6\xba\x90\xe3\x82\x92\xe9\x85\x8d\xe7\xbd\xae\xe3\x81\x97\xe3\x80\x81\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\x92\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * \xe5\x86\x8d\xe7\x94\x9f\xe4\xb8\xad\xe3\x81\xae""AtomComponent\xe3\x82\x92\xe8\xbf\x94\xe3\x81\x99\xe3\x81\x9f\xe3\x82\x81\xe3\x80\x81\xe3\x83\xab\xe3\x83\xbc\xe3\x83\x97\xe9\x9f\xb3\xe3\x82\x92\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x97\xe3\x81\xa6\xe3\x82\x82\xe5\x81\x9c\xe6\xad\xa2\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x93\xe3\x81\xa8\xe3\x81\x8c\xe5\x8f\xaf\xe8\x83\xbd\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\n\x09 * \xe6\x9c\xac\xe9\x96\xa2\xe6\x95\xb0\xe3\x81\xa7\xe9\x85\x8d\xe7\xbd\xae\xe3\x81\x97\xe3\x81\x9f\xe9\x9f\xb3\xe6\xba\x90\xe3\x81\xaf\xe3\x81\xa9\xe3\x81\xae""Actor\xe3\x81\xab\xe3\x82\x82\xe8\xbf\xbd\xe5\xbe\x93\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x9b\xe3\x82\x93\xe3\x80\x82\n\x09 * UE4\xe6\xa8\x99\xe6\xba\x96\xe3\x82\xaa\xe3\x83\xbc\xe3\x83\x87\xe3\x82\xa3\xe3\x82\xaa\xe3\x81\xaeUGameplayStatics::SpawnSoundAtLocation\xe4\xba\x92\xe6\x8f\x9b\xe3\x81\xae""API\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\n\x09 * \xef\xbc\x88\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x99\xe3\x82\x8b\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x81\x8c""AtomCue\xe3\x82\xa2\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88\xe3\x81\xa7\xe3\x81\x82\xe3\x82\x8b\xe7\x82\xb9\xe3\x81\x8c\xe7\x95\xb0\xe3\x81\xaa\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\xef\xbc\x89\n\x09 * \xe5\x90\x84\xe5\xbc\x95\xe6\x95\xb0\xe3\x81\xae\xe6\x84\x8f\xe5\x91\xb3\xe3\x81\xafUGamePlayStatics::SpawnSoundAtLocation\xe9\x96\xa2\xe6\x95\xb0\xe3\x81\xab\xe5\xbe\x93\xe3\x81\x84\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 *\n\x09 * @param WorldContextObject WorldContextObject\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @param Sound Atom\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @param Location \xe9\x9f\xb3\xe6\xba\x90\xe3\x82\x92\xe9\x85\x8d\xe7\xbd\xae\xe3\x81\x99\xe3\x82\x8b\xe5\xba\xa7\xe6\xa8\x99\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @param Rotation \xe5\x9b\x9e\xe8\xbb\xa2\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @param VolumeMultiplier \xe9\x9f\xb3\xe9\x87\x8f\xe3\x81\xae\xe5\x80\x8d\xe7\x8e\x87\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @param PitchMultiplier \xe3\x83\x94\xe3\x83\x83\xe3\x83\x81\xe3\x81\xae\xe5\x80\x8d\xe7\x8e\x87\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @param StartTime \xe3\x81\x93\xe3\x81\x93\xe3\x81\xab\xe9\x96\x8b\xe5\xa7\x8b\xe6\x99\x82\xe9\x96\x93(\xe7\xa7\x92)\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x93\xe3\x81\xa8\xe3\x81\xa7\xe3\x80\x81\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf\xe3\x82\x92\xe9\x80\x94\xe4\xb8\xad\xe3\x81\x8b\xe3\x82\x89\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x93\xe3\x81\xa8\xe3\x82\x82\xe5\x8f\xaf\xe8\x83\xbd\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\n\x09 * @param AttenuationSettings Attenuation\xe3\x81\xae\xe8\xa8\xad\xe5\xae\x9a\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @param ConcurrencySettings Concurrency\xe3\x81\xae\xe8\xa8\xad\xe5\xae\x9a\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @param bAutoDestroy \xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x8c\xe5\xae\x8c\xe4\xba\x86\xe3\x81\x97\xe3\x81\x9f\xe3\x81\xa8\xe3\x81\x8d\xe8\x87\xaa\xe5\x8b\x95\xe7\x9a\x84\xe3\x81\xab\xe3\x82\xaa\xe3\x83\x96\xe3\x82\xb8\xe3\x82\xa7\xe3\x82\xaf\xe3\x83\x88\xe3\x82\x92\xe5\x89\x8a\xe9\x99\xa4\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x8b\xe3\x81\xa9\xe3\x81\x86\xe3\x81\x8b\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @return \xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\x92\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x99\xe3\x82\x8b""AtomComponent\xe3\x81\xae\xe3\x83\xaa\xe3\x83\x95\xe3\x82\xa1\xe3\x83\xac\xe3\x83\xb3\xe3\x82\xb9\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 */" },
		{ "CPP_Default_AttenuationSettings", "None" },
		{ "CPP_Default_bAutoDestroy", "true" },
		{ "CPP_Default_ConcurrencySettings", "None" },
		{ "CPP_Default_PitchMultiplier", "1.000000" },
		{ "CPP_Default_Rotation", "" },
		{ "CPP_Default_StartTime", "0.000000" },
		{ "CPP_Default_VolumeMultiplier", "1.000000" },
		{ "Keywords", "play" },
		{ "ModuleRelativePath", "Classes/AtomStatics.h" },
		{ "ToolTip", "\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x95\xe3\x82\x8c\xe3\x81\x9f\xe4\xbd\x8d\xe7\xbd\xae\xe3\x81\xab\xe9\x9f\xb3\xe6\xba\x90\xe3\x82\x92\xe9\x85\x8d\xe7\xbd\xae\xe3\x81\x97\xe3\x80\x81\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\x92\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\xe5\x86\x8d\xe7\x94\x9f\xe4\xb8\xad\xe3\x81\xae""AtomComponent\xe3\x82\x92\xe8\xbf\x94\xe3\x81\x99\xe3\x81\x9f\xe3\x82\x81\xe3\x80\x81\xe3\x83\xab\xe3\x83\xbc\xe3\x83\x97\xe9\x9f\xb3\xe3\x82\x92\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x97\xe3\x81\xa6\xe3\x82\x82\xe5\x81\x9c\xe6\xad\xa2\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x93\xe3\x81\xa8\xe3\x81\x8c\xe5\x8f\xaf\xe8\x83\xbd\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\n\xe6\x9c\xac\xe9\x96\xa2\xe6\x95\xb0\xe3\x81\xa7\xe9\x85\x8d\xe7\xbd\xae\xe3\x81\x97\xe3\x81\x9f\xe9\x9f\xb3\xe6\xba\x90\xe3\x81\xaf\xe3\x81\xa9\xe3\x81\xae""Actor\xe3\x81\xab\xe3\x82\x82\xe8\xbf\xbd\xe5\xbe\x93\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x9b\xe3\x82\x93\xe3\x80\x82\nUE4\xe6\xa8\x99\xe6\xba\x96\xe3\x82\xaa\xe3\x83\xbc\xe3\x83\x87\xe3\x82\xa3\xe3\x82\xaa\xe3\x81\xaeUGameplayStatics::SpawnSoundAtLocation\xe4\xba\x92\xe6\x8f\x9b\xe3\x81\xae""API\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\n\xef\xbc\x88\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x99\xe3\x82\x8b\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x81\x8c""AtomCue\xe3\x82\xa2\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88\xe3\x81\xa7\xe3\x81\x82\xe3\x82\x8b\xe7\x82\xb9\xe3\x81\x8c\xe7\x95\xb0\xe3\x81\xaa\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\xef\xbc\x89\n\xe5\x90\x84\xe5\xbc\x95\xe6\x95\xb0\xe3\x81\xae\xe6\x84\x8f\xe5\x91\xb3\xe3\x81\xafUGamePlayStatics::SpawnSoundAtLocation\xe9\x96\xa2\xe6\x95\xb0\xe3\x81\xab\xe5\xbe\x93\xe3\x81\x84\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\n@param WorldContextObject WorldContextObject\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param Sound Atom\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param Location \xe9\x9f\xb3\xe6\xba\x90\xe3\x82\x92\xe9\x85\x8d\xe7\xbd\xae\xe3\x81\x99\xe3\x82\x8b\xe5\xba\xa7\xe6\xa8\x99\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param Rotation \xe5\x9b\x9e\xe8\xbb\xa2\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param VolumeMultiplier \xe9\x9f\xb3\xe9\x87\x8f\xe3\x81\xae\xe5\x80\x8d\xe7\x8e\x87\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param PitchMultiplier \xe3\x83\x94\xe3\x83\x83\xe3\x83\x81\xe3\x81\xae\xe5\x80\x8d\xe7\x8e\x87\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param StartTime \xe3\x81\x93\xe3\x81\x93\xe3\x81\xab\xe9\x96\x8b\xe5\xa7\x8b\xe6\x99\x82\xe9\x96\x93(\xe7\xa7\x92)\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x93\xe3\x81\xa8\xe3\x81\xa7\xe3\x80\x81\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf\xe3\x82\x92\xe9\x80\x94\xe4\xb8\xad\xe3\x81\x8b\xe3\x82\x89\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x93\xe3\x81\xa8\xe3\x82\x82\xe5\x8f\xaf\xe8\x83\xbd\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\n@param AttenuationSettings Attenuation\xe3\x81\xae\xe8\xa8\xad\xe5\xae\x9a\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param ConcurrencySettings Concurrency\xe3\x81\xae\xe8\xa8\xad\xe5\xae\x9a\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param bAutoDestroy \xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x8c\xe5\xae\x8c\xe4\xba\x86\xe3\x81\x97\xe3\x81\x9f\xe3\x81\xa8\xe3\x81\x8d\xe8\x87\xaa\xe5\x8b\x95\xe7\x9a\x84\xe3\x81\xab\xe3\x82\xaa\xe3\x83\x96\xe3\x82\xb8\xe3\x82\xa7\xe3\x82\xaf\xe3\x83\x88\xe3\x82\x92\xe5\x89\x8a\xe9\x99\xa4\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x8b\xe3\x81\xa9\xe3\x81\x86\xe3\x81\x8b\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@return \xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\x92\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x99\xe3\x82\x8b""AtomComponent\xe3\x81\xae\xe3\x83\xaa\xe3\x83\x95\xe3\x82\xa1\xe3\x83\xac\xe3\x83\xb3\xe3\x82\xb9\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomStatics, nullptr, "SpawnSoundAtLocation", nullptr, nullptr, sizeof(AtomStatics_eventSpawnSoundAtLocation_Parms), Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics
	{
		struct AtomStatics_eventSpawnSoundAttached_Parms
		{
			USoundAtomCue* Sound;
			USceneComponent* AttachToComponent;
			FName AttachPointName;
			FVector Location;
			FRotator Rotation;
			TEnumAsByte<EAttachLocation::Type> LocationType;
			bool bStopWhenAttachedToDestroyed;
			float VolumeMultiplier;
			float PitchMultiplier;
			float StartTime;
			USoundAttenuation* AttenuationSettings;
			USoundConcurrency* ConcurrencySettings;
			bool bAutoDestroy;
			UAtomComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_bAutoDestroy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroy;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConcurrencySettings;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttenuationSettings;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchMultiplier;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier;
		static void NewProp_bStopWhenAttachedToDestroyed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStopWhenAttachedToDestroyed;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LocationType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AttachPointName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachToComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttachToComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventSpawnSoundAttached_Parms, ReturnValue), Z_Construct_UClass_UAtomComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::NewProp_ReturnValue_MetaData)) };
	void Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::NewProp_bAutoDestroy_SetBit(void* Obj)
	{
		((AtomStatics_eventSpawnSoundAttached_Parms*)Obj)->bAutoDestroy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::NewProp_bAutoDestroy = { "bAutoDestroy", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtomStatics_eventSpawnSoundAttached_Parms), &Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::NewProp_bAutoDestroy_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::NewProp_ConcurrencySettings = { "ConcurrencySettings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventSpawnSoundAttached_Parms, ConcurrencySettings), Z_Construct_UClass_USoundConcurrency_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::NewProp_AttenuationSettings = { "AttenuationSettings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventSpawnSoundAttached_Parms, AttenuationSettings), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventSpawnSoundAttached_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::NewProp_PitchMultiplier = { "PitchMultiplier", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventSpawnSoundAttached_Parms, PitchMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::NewProp_VolumeMultiplier = { "VolumeMultiplier", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventSpawnSoundAttached_Parms, VolumeMultiplier), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::NewProp_bStopWhenAttachedToDestroyed_SetBit(void* Obj)
	{
		((AtomStatics_eventSpawnSoundAttached_Parms*)Obj)->bStopWhenAttachedToDestroyed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::NewProp_bStopWhenAttachedToDestroyed = { "bStopWhenAttachedToDestroyed", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtomStatics_eventSpawnSoundAttached_Parms), &Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::NewProp_bStopWhenAttachedToDestroyed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::NewProp_LocationType = { "LocationType", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventSpawnSoundAttached_Parms, LocationType), Z_Construct_UEnum_Engine_EAttachLocation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventSpawnSoundAttached_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventSpawnSoundAttached_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::NewProp_AttachPointName = { "AttachPointName", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventSpawnSoundAttached_Parms, AttachPointName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::NewProp_AttachToComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::NewProp_AttachToComponent = { "AttachToComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventSpawnSoundAttached_Parms, AttachToComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::NewProp_AttachToComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::NewProp_AttachToComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventSpawnSoundAttached_Parms, Sound), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::NewProp_bAutoDestroy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::NewProp_ConcurrencySettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::NewProp_AttenuationSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::NewProp_StartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::NewProp_PitchMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::NewProp_VolumeMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::NewProp_bStopWhenAttachedToDestroyed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::NewProp_LocationType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::NewProp_AttachPointName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::NewProp_AttachToComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::NewProp_Sound,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "Atom" },
		{ "Comment", "/**\n\x09 * \xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x95\xe3\x82\x8c\xe3\x81\x9f\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x9d\xe3\x83\xbc\xe3\x83\x8d\xe3\x83\xb3\xe3\x83\x88\xe3\x81\xab\xe8\xbf\xbd\xe5\xbe\x93\xe3\x81\x99\xe3\x82\x8b\xe9\x9f\xb3\xe6\xba\x90\xe3\x82\x92\xe9\x85\x8d\xe7\xbd\xae\xe3\x81\x97\xe3\x80\x81\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\x92\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * UE4\xe6\xa8\x99\xe6\xba\x96\xe3\x82\xaa\xe3\x83\xbc\xe3\x83\x87\xe3\x82\xa3\xe3\x82\xaa\xe3\x81\xaeUGameplayStatics::SpawnSoundAttached\xe4\xba\x92\xe6\x8f\x9b\xe3\x81\xae""API\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\n\x09 * \xef\xbc\x88\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x99\xe3\x82\x8b\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x81\x8c""AtomCue\xe3\x82\xa2\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88\xe3\x81\xa7\xe3\x81\x82\xe3\x82\x8b\xe7\x82\xb9\xe3\x81\x8c\xe7\x95\xb0\xe3\x81\xaa\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\xef\xbc\x89\n\x09 * \xe5\x90\x84\xe5\xbc\x95\xe6\x95\xb0\xe3\x81\xae\xe6\x84\x8f\xe5\x91\xb3\xe3\x81\xafUGamePlayStatics::SpawnSoundAttached\xe9\x96\xa2\xe6\x95\xb0\xe3\x81\xab\xe5\xbe\x93\xe3\x81\x84\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 *\n\x09 * @param Sound Atom\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @param AttachToComponent \xe3\x81\x93\xe3\x81\x93\xe3\x81\xa7\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x9d\xe3\x83\xbc\xe3\x83\x8d\xe3\x83\xb3\xe3\x83\x88\xe3\x81\xab\xe8\xbf\xbd\xe5\xbe\x93\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @param AttachPointName \xe3\x82\xa2\xe3\x82\xbf\xe3\x83\x83\xe3\x83\x81\xe3\x81\x99\xe3\x82\x8b\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xae\xe5\x90\x8d\xe5\x89\x8d\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @param Location \xe9\x9f\xb3\xe6\xba\x90\xe3\x82\x92\xe9\x85\x8d\xe7\xbd\xae\xe3\x81\x99\xe3\x82\x8b\xe5\xba\xa7\xe6\xa8\x99\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @param Rotation \xe5\x9b\x9e\xe8\xbb\xa2\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @param LocationType \xe3\x83\xad\xe3\x82\xb1\xe3\x83\xbc\xe3\x82\xb7\xe3\x83\xa7\xe3\x83\xb3\xe3\x82\xbf\xe3\x82\xa4\xe3\x83\x97\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82KeepWorldPosition\xe5\x8f\x88\xe3\x81\xafKeepRelativeOffset\xe3\x81\xae\xe3\x81\xbf\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\xa7\xe3\x81\x8d\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @param bStopWhenAttachedToDestroyed \xe8\xbf\xbd\xe5\xbe\x93\xe3\x81\x97\xe3\x81\xa6\xe3\x81\x84\xe3\x82\x8b\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x9d\xe3\x83\xbc\xe3\x83\x8d\xe3\x83\xb3\xe3\x83\x88\xe3\x81\x8c\xe7\xa0\xb4\xe6\xa3\x84\xe3\x81\x95\xe3\x82\x8c\xe3\x81\x9f\xe3\x81\xa8\xe3\x81\x8d\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x82\x92\xe5\x81\x9c\xe6\xad\xa2\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x8b\xe3\x81\xa9\xe3\x81\x86\xe3\x81\x8b\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @param VolumeMultiplier \xe9\x9f\xb3\xe9\x87\x8f\xe3\x81\xae\xe5\x80\x8d\xe7\x8e\x87\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @param PitchMultiplier \xe3\x83\x94\xe3\x83\x83\xe3\x83\x81\xe3\x81\xae\xe5\x80\x8d\xe7\x8e\x87\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @param StartTime \xe3\x81\x93\xe3\x81\x93\xe3\x81\xab\xe9\x96\x8b\xe5\xa7\x8b\xe6\x99\x82\xe9\x96\x93(\xe7\xa7\x92)\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x93\xe3\x81\xa8\xe3\x81\xa7\xe3\x80\x81\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf\xe3\x82\x92\xe9\x80\x94\xe4\xb8\xad\xe3\x81\x8b\xe3\x82\x89\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x93\xe3\x81\xa8\xe3\x82\x82\xe5\x8f\xaf\xe8\x83\xbd\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\n\x09 * @param AttenuationSettings Attenuation\xe3\x81\xae\xe8\xa8\xad\xe5\xae\x9a\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @param ConcurrencySettings \xe5\x88\xa9\xe7\x94\xa8\xe3\x81\xa7\xe3\x81\x8d\xe3\x81\xbe\xe3\x81\x9b\xe3\x82\x93\xef\xbc\x88\xe5\x86\x85\xe9\x83\xa8\xe3\x81\xa7\xe7\x84\xa1\xe8\xa6\x96\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xbe\xe3\x81\x99\xef\xbc\x89\n\x09 * @param bAutoDestroy \xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x8c\xe5\xae\x8c\xe4\xba\x86\xe3\x81\x97\xe3\x81\x9f\xe3\x81\xa8\xe3\x81\x8d\xe8\x87\xaa\xe5\x8b\x95\xe7\x9a\x84\xe3\x81\xab\xe3\x82\xaa\xe3\x83\x96\xe3\x82\xb8\xe3\x82\xa7\xe3\x82\xaf\xe3\x83\x88\xe3\x82\x92\xe5\x89\x8a\xe9\x99\xa4\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x8b\xe3\x81\xa9\xe3\x81\x86\xe3\x81\x8b\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @return \xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\x92\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x99\xe3\x82\x8b""AtomComponent\xe3\x81\xae\xe3\x83\xaa\xe3\x83\x95\xe3\x82\xa1\xe3\x83\xac\xe3\x83\xb3\xe3\x82\xb9\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 */" },
		{ "CPP_Default_AttachPointName", "None" },
		{ "CPP_Default_AttenuationSettings", "None" },
		{ "CPP_Default_bAutoDestroy", "true" },
		{ "CPP_Default_bStopWhenAttachedToDestroyed", "false" },
		{ "CPP_Default_ConcurrencySettings", "None" },
		{ "CPP_Default_Location", "" },
		{ "CPP_Default_LocationType", "KeepRelativeOffset" },
		{ "CPP_Default_PitchMultiplier", "1.000000" },
		{ "CPP_Default_Rotation", "" },
		{ "CPP_Default_StartTime", "0.000000" },
		{ "CPP_Default_VolumeMultiplier", "1.000000" },
		{ "ModuleRelativePath", "Classes/AtomStatics.h" },
		{ "ToolTip", "\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x95\xe3\x82\x8c\xe3\x81\x9f\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x9d\xe3\x83\xbc\xe3\x83\x8d\xe3\x83\xb3\xe3\x83\x88\xe3\x81\xab\xe8\xbf\xbd\xe5\xbe\x93\xe3\x81\x99\xe3\x82\x8b\xe9\x9f\xb3\xe6\xba\x90\xe3\x82\x92\xe9\x85\x8d\xe7\xbd\xae\xe3\x81\x97\xe3\x80\x81\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\x92\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\nUE4\xe6\xa8\x99\xe6\xba\x96\xe3\x82\xaa\xe3\x83\xbc\xe3\x83\x87\xe3\x82\xa3\xe3\x82\xaa\xe3\x81\xaeUGameplayStatics::SpawnSoundAttached\xe4\xba\x92\xe6\x8f\x9b\xe3\x81\xae""API\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\n\xef\xbc\x88\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x99\xe3\x82\x8b\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x81\x8c""AtomCue\xe3\x82\xa2\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88\xe3\x81\xa7\xe3\x81\x82\xe3\x82\x8b\xe7\x82\xb9\xe3\x81\x8c\xe7\x95\xb0\xe3\x81\xaa\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\xef\xbc\x89\n\xe5\x90\x84\xe5\xbc\x95\xe6\x95\xb0\xe3\x81\xae\xe6\x84\x8f\xe5\x91\xb3\xe3\x81\xafUGamePlayStatics::SpawnSoundAttached\xe9\x96\xa2\xe6\x95\xb0\xe3\x81\xab\xe5\xbe\x93\xe3\x81\x84\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\n@param Sound Atom\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param AttachToComponent \xe3\x81\x93\xe3\x81\x93\xe3\x81\xa7\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x9d\xe3\x83\xbc\xe3\x83\x8d\xe3\x83\xb3\xe3\x83\x88\xe3\x81\xab\xe8\xbf\xbd\xe5\xbe\x93\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param AttachPointName \xe3\x82\xa2\xe3\x82\xbf\xe3\x83\x83\xe3\x83\x81\xe3\x81\x99\xe3\x82\x8b\xe3\x83\x9c\xe3\x83\xbc\xe3\x83\xb3\xe3\x81\xae\xe5\x90\x8d\xe5\x89\x8d\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param Location \xe9\x9f\xb3\xe6\xba\x90\xe3\x82\x92\xe9\x85\x8d\xe7\xbd\xae\xe3\x81\x99\xe3\x82\x8b\xe5\xba\xa7\xe6\xa8\x99\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param Rotation \xe5\x9b\x9e\xe8\xbb\xa2\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param LocationType \xe3\x83\xad\xe3\x82\xb1\xe3\x83\xbc\xe3\x82\xb7\xe3\x83\xa7\xe3\x83\xb3\xe3\x82\xbf\xe3\x82\xa4\xe3\x83\x97\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82KeepWorldPosition\xe5\x8f\x88\xe3\x81\xafKeepRelativeOffset\xe3\x81\xae\xe3\x81\xbf\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\xa7\xe3\x81\x8d\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param bStopWhenAttachedToDestroyed \xe8\xbf\xbd\xe5\xbe\x93\xe3\x81\x97\xe3\x81\xa6\xe3\x81\x84\xe3\x82\x8b\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x9d\xe3\x83\xbc\xe3\x83\x8d\xe3\x83\xb3\xe3\x83\x88\xe3\x81\x8c\xe7\xa0\xb4\xe6\xa3\x84\xe3\x81\x95\xe3\x82\x8c\xe3\x81\x9f\xe3\x81\xa8\xe3\x81\x8d\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x82\x92\xe5\x81\x9c\xe6\xad\xa2\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x8b\xe3\x81\xa9\xe3\x81\x86\xe3\x81\x8b\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param VolumeMultiplier \xe9\x9f\xb3\xe9\x87\x8f\xe3\x81\xae\xe5\x80\x8d\xe7\x8e\x87\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param PitchMultiplier \xe3\x83\x94\xe3\x83\x83\xe3\x83\x81\xe3\x81\xae\xe5\x80\x8d\xe7\x8e\x87\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param StartTime \xe3\x81\x93\xe3\x81\x93\xe3\x81\xab\xe9\x96\x8b\xe5\xa7\x8b\xe6\x99\x82\xe9\x96\x93(\xe7\xa7\x92)\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x93\xe3\x81\xa8\xe3\x81\xa7\xe3\x80\x81\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf\xe3\x82\x92\xe9\x80\x94\xe4\xb8\xad\xe3\x81\x8b\xe3\x82\x89\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x93\xe3\x81\xa8\xe3\x82\x82\xe5\x8f\xaf\xe8\x83\xbd\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\n@param AttenuationSettings Attenuation\xe3\x81\xae\xe8\xa8\xad\xe5\xae\x9a\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param ConcurrencySettings \xe5\x88\xa9\xe7\x94\xa8\xe3\x81\xa7\xe3\x81\x8d\xe3\x81\xbe\xe3\x81\x9b\xe3\x82\x93\xef\xbc\x88\xe5\x86\x85\xe9\x83\xa8\xe3\x81\xa7\xe7\x84\xa1\xe8\xa6\x96\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xbe\xe3\x81\x99\xef\xbc\x89\n@param bAutoDestroy \xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x8c\xe5\xae\x8c\xe4\xba\x86\xe3\x81\x97\xe3\x81\x9f\xe3\x81\xa8\xe3\x81\x8d\xe8\x87\xaa\xe5\x8b\x95\xe7\x9a\x84\xe3\x81\xab\xe3\x82\xaa\xe3\x83\x96\xe3\x82\xb8\xe3\x82\xa7\xe3\x82\xaf\xe3\x83\x88\xe3\x82\x92\xe5\x89\x8a\xe9\x99\xa4\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x8b\xe3\x81\xa9\xe3\x81\x86\xe3\x81\x8b\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@return \xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\x92\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x99\xe3\x82\x8b""AtomComponent\xe3\x81\xae\xe3\x83\xaa\xe3\x83\x95\xe3\x82\xa1\xe3\x83\xac\xe3\x83\xb3\xe3\x82\xb9\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomStatics, nullptr, "SpawnSoundAttached", nullptr, nullptr, sizeof(AtomStatics_eventSpawnSoundAttached_Parms), Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomStatics_StopAllSounds_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_StopAllSounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom" },
		{ "Comment", "/**\n\x09 * \xe3\x82\xb2\xe3\x83\xbc\xe3\x83\xa0\xe4\xb8\xad\xe3\x81\xae\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x82\x92\xe5\x85\xa8\xe3\x81\xa6\xe5\x81\x9c\xe6\xad\xa2\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 */" },
		{ "ModuleRelativePath", "Classes/AtomStatics.h" },
		{ "ToolTip", "\xe3\x82\xb2\xe3\x83\xbc\xe3\x83\xa0\xe4\xb8\xad\xe3\x81\xae\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x82\x92\xe5\x85\xa8\xe3\x81\xa6\xe5\x81\x9c\xe6\xad\xa2\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomStatics_StopAllSounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomStatics, nullptr, "StopAllSounds", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_StopAllSounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_StopAllSounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomStatics_StopAllSounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomStatics_StopAllSounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomStatics_StopAllSoundsForKeyFromAtomComponentIds_Statics
	{
		struct AtomStatics_eventStopAllSoundsForKeyFromAtomComponentIds_Parms
		{
			UObject* AtomPlayGateRef;
			UObject* SkeltalMeshComponentRef;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeltalMeshComponentRef;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AtomPlayGateRef;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_StopAllSoundsForKeyFromAtomComponentIds_Statics::NewProp_SkeltalMeshComponentRef = { "SkeltalMeshComponentRef", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventStopAllSoundsForKeyFromAtomComponentIds_Parms, SkeltalMeshComponentRef), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomStatics_StopAllSoundsForKeyFromAtomComponentIds_Statics::NewProp_AtomPlayGateRef = { "AtomPlayGateRef", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventStopAllSoundsForKeyFromAtomComponentIds_Parms, AtomPlayGateRef), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomStatics_StopAllSoundsForKeyFromAtomComponentIds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_StopAllSoundsForKeyFromAtomComponentIds_Statics::NewProp_SkeltalMeshComponentRef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_StopAllSoundsForKeyFromAtomComponentIds_Statics::NewProp_AtomPlayGateRef,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_StopAllSoundsForKeyFromAtomComponentIds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom" },
		{ "Comment", "/**\n\x09 * AtomPlayGate \xe3\x81\xa8 MeshComponent \xe3\x81\xab\xe7\xb4\x90\xe4\xbb\x98\xe3\x81\x84\xe3\x81\x9f\xe5\x85\xa8\xe3\x81\xa6\xe3\x81\xae AtomComponent \xe3\x82\x92\xe5\x81\x9c\xe6\xad\xa2\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * \xe3\x81\x93\xe3\x81\xae\xe9\x96\xa2\xe6\x95\xb0\xe3\x81\xaf AnimNotifyState_AtomPlayGate \xe3\x83\x96\xe3\x83\xab\xe3\x83\xbc\xe3\x83\x97\xe3\x83\xaa\xe3\x83\xb3\xe3\x83\x88\xe5\x86\x85\xe3\x81\xa7\xe3\x81\xae\xe3\x81\xbf\xe4\xbd\xbf\xe7\x94\xa8\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x93\xe3\x81\xa8\xe3\x82\x92\xe6\x83\xb3\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xa6\xe3\x81\x84\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * CRIWARE UE4 Plugin \xe3\x81\xae\xe3\x83\xa6\xe3\x83\xbc\xe3\x82\xb6\xe3\x81\x8c\xe6\x9c\xac\xe9\x96\xa2\xe6\x95\xb0\xe3\x82\x92\xe5\x91\xbc\xe3\x81\xb3\xe5\x87\xba\xe3\x81\x99\xe3\x81\x93\xe3\x81\xa8\xe3\x81\xaf\xe4\xb8\x8d\xe6\xad\xa3\xe5\x8b\x95\xe4\xbd\x9c\xe3\x81\xae\xe5\x8e\x9f\xe5\x9b\xa0\xe3\x81\xa8\xe3\x81\xaa\xe3\x82\x8b\xe3\x81\x9f\xe3\x82\x81\xe6\x8e\xa8\xe5\xa5\xa8\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x9b\xe3\x82\x93\n\x09 */" },
		{ "ModuleRelativePath", "Classes/AtomStatics.h" },
		{ "ToolTip", "AtomPlayGate \xe3\x81\xa8 MeshComponent \xe3\x81\xab\xe7\xb4\x90\xe4\xbb\x98\xe3\x81\x84\xe3\x81\x9f\xe5\x85\xa8\xe3\x81\xa6\xe3\x81\xae AtomComponent \xe3\x82\x92\xe5\x81\x9c\xe6\xad\xa2\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\xe3\x81\x93\xe3\x81\xae\xe9\x96\xa2\xe6\x95\xb0\xe3\x81\xaf AnimNotifyState_AtomPlayGate \xe3\x83\x96\xe3\x83\xab\xe3\x83\xbc\xe3\x83\x97\xe3\x83\xaa\xe3\x83\xb3\xe3\x83\x88\xe5\x86\x85\xe3\x81\xa7\xe3\x81\xae\xe3\x81\xbf\xe4\xbd\xbf\xe7\x94\xa8\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x93\xe3\x81\xa8\xe3\x82\x92\xe6\x83\xb3\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xa6\xe3\x81\x84\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\nCRIWARE UE4 Plugin \xe3\x81\xae\xe3\x83\xa6\xe3\x83\xbc\xe3\x82\xb6\xe3\x81\x8c\xe6\x9c\xac\xe9\x96\xa2\xe6\x95\xb0\xe3\x82\x92\xe5\x91\xbc\xe3\x81\xb3\xe5\x87\xba\xe3\x81\x99\xe3\x81\x93\xe3\x81\xa8\xe3\x81\xaf\xe4\xb8\x8d\xe6\xad\xa3\xe5\x8b\x95\xe4\xbd\x9c\xe3\x81\xae\xe5\x8e\x9f\xe5\x9b\xa0\xe3\x81\xa8\xe3\x81\xaa\xe3\x82\x8b\xe3\x81\x9f\xe3\x82\x81\xe6\x8e\xa8\xe5\xa5\xa8\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x9b\xe3\x82\x93" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomStatics_StopAllSoundsForKeyFromAtomComponentIds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomStatics, nullptr, "StopAllSoundsForKeyFromAtomComponentIds", nullptr, nullptr, sizeof(AtomStatics_eventStopAllSoundsForKeyFromAtomComponentIds_Parms), Z_Construct_UFunction_UAtomStatics_StopAllSoundsForKeyFromAtomComponentIds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_StopAllSoundsForKeyFromAtomComponentIds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_StopAllSoundsForKeyFromAtomComponentIds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_StopAllSoundsForKeyFromAtomComponentIds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomStatics_StopAllSoundsForKeyFromAtomComponentIds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomStatics_StopAllSoundsForKeyFromAtomComponentIds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomStatics_UpdateDistanceFactorForAllSounds_Statics
	{
		struct AtomStatics_eventUpdateDistanceFactorForAllSounds_Parms
		{
			float ArgDistanceFactor;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ArgDistanceFactor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomStatics_UpdateDistanceFactorForAllSounds_Statics::NewProp_ArgDistanceFactor = { "ArgDistanceFactor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomStatics_eventUpdateDistanceFactorForAllSounds_Parms, ArgDistanceFactor), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomStatics_UpdateDistanceFactorForAllSounds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomStatics_UpdateDistanceFactorForAllSounds_Statics::NewProp_ArgDistanceFactor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomStatics_UpdateDistanceFactorForAllSounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom Experimental" },
		{ "ModuleRelativePath", "Classes/AtomStatics.h" },
		{ "ToolTip", "Update Distance Factor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomStatics_UpdateDistanceFactorForAllSounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomStatics, nullptr, "UpdateDistanceFactorForAllSounds", nullptr, nullptr, sizeof(AtomStatics_eventUpdateDistanceFactorForAllSounds_Parms), Z_Construct_UFunction_UAtomStatics_UpdateDistanceFactorForAllSounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_UpdateDistanceFactorForAllSounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomStatics_UpdateDistanceFactorForAllSounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomStatics_UpdateDistanceFactorForAllSounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomStatics_UpdateDistanceFactorForAllSounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomStatics_UpdateDistanceFactorForAllSounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAtomStatics_NoRegister()
	{
		return UAtomStatics::StaticClass();
	}
	struct Z_Construct_UClass_UAtomStatics_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomStatics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomStatics_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomStatics_AddToAtomComponentIds, "AddToAtomComponentIds" }, // 1721674251
		{ &Z_Construct_UFunction_UAtomStatics_CreateRootedAtomComponent, "CreateRootedAtomComponent" }, // 169491517
		{ &Z_Construct_UFunction_UAtomStatics_GetAtomGameVariable, "GetAtomGameVariable" }, // 1584627357
		{ &Z_Construct_UFunction_UAtomStatics_GetAudioVolumeAffectingListener, "GetAudioVolumeAffectingListener" }, // 1546858609
		{ &Z_Construct_UFunction_UAtomStatics_GetListenerFocusPointInfo, "GetListenerFocusPointInfo" }, // 452772911
		{ &Z_Construct_UFunction_UAtomStatics_GetListenerRegion, "GetListenerRegion" }, // 3983797157
		{ &Z_Construct_UFunction_UAtomStatics_GetListeningPoint, "GetListeningPoint" }, // 2594890169
		{ &Z_Construct_UFunction_UAtomStatics_LoadAtomConfig, "LoadAtomConfig" }, // 3109820739
		{ &Z_Construct_UFunction_UAtomStatics_PauseAudioOutput, "PauseAudioOutput" }, // 871775600
		{ &Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocation, "PlayAtomSoundAtLocation" }, // 1357114818
		{ &Z_Construct_UFunction_UAtomStatics_PlayAtomSoundAtLocationByName, "PlayAtomSoundAtLocationByName" }, // 3754413826
		{ &Z_Construct_UFunction_UAtomStatics_PlaySoundAtLocation, "PlaySoundAtLocation" }, // 3587865979
		{ &Z_Construct_UFunction_UAtomStatics_PlaySoundAttached, "PlaySoundAttached" }, // 133762496
		{ &Z_Construct_UFunction_UAtomStatics_PlaySoundForAnimNotify, "PlaySoundForAnimNotify" }, // 2821160262
		{ &Z_Construct_UFunction_UAtomStatics_SetAtomGameVariable, "SetAtomGameVariable" }, // 664035083
		{ &Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDirectionLevel, "SetListenerFocusPointDirectionLevel" }, // 3329014447
		{ &Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointDistanceLevel, "SetListenerFocusPointDistanceLevel" }, // 2651673346
		{ &Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointInfo, "SetListenerFocusPointInfo" }, // 240874900
		{ &Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointTargetActor, "SetListenerFocusPointTargetActor" }, // 3208243502
		{ &Z_Construct_UFunction_UAtomStatics_SetListenerFocusPointTargetComponent, "SetListenerFocusPointTargetComponent" }, // 2450451239
		{ &Z_Construct_UFunction_UAtomStatics_SetListenerRegion, "SetListenerRegion" }, // 92697202
		{ &Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2D, "SpawnAtomSound2D" }, // 2278016507
		{ &Z_Construct_UFunction_UAtomStatics_SpawnAtomSound2DByName, "SpawnAtomSound2DByName" }, // 1493138098
		{ &Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocation, "SpawnAtomSoundAtLocation" }, // 1800336646
		{ &Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAtLocationByName, "SpawnAtomSoundAtLocationByName" }, // 4204295667
		{ &Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttached, "SpawnAtomSoundAttached" }, // 2982601424
		{ &Z_Construct_UFunction_UAtomStatics_SpawnAtomSoundAttachedByName, "SpawnAtomSoundAttachedByName" }, // 1374510982
		{ &Z_Construct_UFunction_UAtomStatics_SpawnSound2D, "SpawnSound2D" }, // 868897291
		{ &Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation, "SpawnSoundAtLocation" }, // 1330704017
		{ &Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached, "SpawnSoundAttached" }, // 234292386
		{ &Z_Construct_UFunction_UAtomStatics_StopAllSounds, "StopAllSounds" }, // 1615567719
		{ &Z_Construct_UFunction_UAtomStatics_StopAllSoundsForKeyFromAtomComponentIds, "StopAllSoundsForKeyFromAtomComponentIds" }, // 3553604445
		{ &Z_Construct_UFunction_UAtomStatics_UpdateDistanceFactorForAllSounds, "UpdateDistanceFactorForAllSounds" }, // 1216282326
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomStatics_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AtomStatics.h" },
		{ "ModuleRelativePath", "Classes/AtomStatics.h" },
		{ "ToolTip", "AtomComponent class." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomStatics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomStatics>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAtomStatics_Statics::ClassParams = {
		&UAtomStatics::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomStatics_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomStatics_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomStatics()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAtomStatics_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAtomStatics, 3058070668);
	template<> CRIWARERUNTIME_API UClass* StaticClass<UAtomStatics>()
	{
		return UAtomStatics::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAtomStatics(Z_Construct_UClass_UAtomStatics, &UAtomStatics::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UAtomStatics"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomStatics);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
