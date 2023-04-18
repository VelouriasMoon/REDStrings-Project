// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Classes/AtomAudioVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomAudioVolume() {}
// Cross Module References
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomAudioVolumeType();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomAudioVolumeParameters();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAisacControlInterpolationSettings();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FBusSendInterpolationSettings();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSnapshotSwitchSettings();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_AAtomEntranceVolume_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_AAtomEntranceVolume();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_AAtomAudioVolume_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_AAtomAudioVolume();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomAudioVolumeSettings_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomAudioVolumeSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* EAtomAudioVolumeType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CriWareRuntime_EAtomAudioVolumeType, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("EAtomAudioVolumeType"));
		}
		return Singleton;
	}
	template<> CRIWARERUNTIME_API UEnum* StaticEnum<EAtomAudioVolumeType>()
	{
		return EAtomAudioVolumeType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAtomAudioVolumeType(EAtomAudioVolumeType_StaticEnum, TEXT("/Script/CriWareRuntime"), TEXT("EAtomAudioVolumeType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CriWareRuntime_EAtomAudioVolumeType_Hash() { return 2849009471U; }
	UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomAudioVolumeType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAtomAudioVolumeType"), 0, Get_Z_Construct_UEnum_CriWareRuntime_EAtomAudioVolumeType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAtomAudioVolumeType::UseSnapshot", (int64)EAtomAudioVolumeType::UseSnapshot },
				{ "EAtomAudioVolumeType::UseBus", (int64)EAtomAudioVolumeType::UseBus },
				{ "EAtomAudioVolumeType::UseAisacControl", (int64)EAtomAudioVolumeType::UseAisacControl },
				{ "EAtomAudioVolumeType::UseEntranceVolume", (int64)EAtomAudioVolumeType::UseEntranceVolume },
				{ "EAtomAudioVolumeType::Num", (int64)EAtomAudioVolumeType::Num },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/****************************************************************************\n *      \xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf\xe5\x9e\x8b\xe5\xae\xa3\xe8\xa8\x80\n *      Data Type Declarations\n ****************************************************************************/" },
				{ "ModuleRelativePath", "Classes/AtomAudioVolume.h" },
				{ "Num.Name", "EAtomAudioVolumeType::Num" },
				{ "ToolTip", "\xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf\xe5\x9e\x8b\xe5\xae\xa3\xe8\xa8\x80\nData Type Declarations" },
				{ "UseAisacControl.Name", "EAtomAudioVolumeType::UseAisacControl" },
				{ "UseBus.Name", "EAtomAudioVolumeType::UseBus" },
				{ "UseEntranceVolume.Name", "EAtomAudioVolumeType::UseEntranceVolume" },
				{ "UseSnapshot.Name", "EAtomAudioVolumeType::UseSnapshot" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime,
				nullptr,
				"EAtomAudioVolumeType",
				"EAtomAudioVolumeType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FAtomAudioVolumeParameters::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomAudioVolumeParameters, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomAudioVolumeParameters"), sizeof(FAtomAudioVolumeParameters), Get_Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Hash());
	}
	return Singleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomAudioVolumeParameters>()
{
	return FAtomAudioVolumeParameters::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtomAudioVolumeParameters(FAtomAudioVolumeParameters::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("AtomAudioVolumeParameters"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomAudioVolumeParameters
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomAudioVolumeParameters()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtomAudioVolumeParameters")),new UScriptStruct::TCppStructOps<FAtomAudioVolumeParameters>);
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomAudioVolumeParameters;
	struct Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AisacControlInterpolateSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AisacControlInterpolateSettings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AisacControlInterpolateSettings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BusSendInterpolateSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BusSendInterpolateSettings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BusSendInterpolateSettings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnapshotSwitchSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SnapshotSwitchSettings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SnapshotSwitchSettings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSwitchIntepolationInsideForAisac_MetaData[];
#endif
		static void NewProp_bSwitchIntepolationInsideForAisac_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSwitchIntepolationInsideForAisac;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSwitchIntepolationInsideForBus_MetaData[];
#endif
		static void NewProp_bSwitchIntepolationInsideForBus_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSwitchIntepolationInsideForBus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDistanceForEntranceVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDistanceForEntranceVolume;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtomAudioVolumeWireFrameColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AtomAudioVolumeWireFrameColor;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseAisacControlSettings_MetaData[];
#endif
		static void NewProp_bUseAisacControlSettings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseAisacControlSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseBusSendSettings_MetaData[];
#endif
		static void NewProp_bUseBusSendSettings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseBusSendSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseSnapshotSettings_MetaData[];
#endif
		static void NewProp_bUseSnapshotSettings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseSnapshotSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/AtomAudioVolume.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomAudioVolumeParameters>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_AisacControlInterpolateSettings_MetaData[] = {
		{ "Category", "AisacControlInterpolateSettings" },
		{ "Comment", "/** \xe3\x83\x90\xe3\x82\xb9\xe3\x82\xbb\xe3\x83\xb3\xe3\x83\x89\xe3\x83\xac\xe3\x83\x99\xe3\x83\xab\xe8\xa8\xad\xe5\xae\x9a\xe6\xa7\x8b\xe9\x80\xa0\xe4\xbd\x93\xe3\x80\x82 */" },
		{ "EditCondition", "bUseAisacControlSettings" },
		{ "ModuleRelativePath", "Classes/AtomAudioVolume.h" },
		{ "ToolTip", "\xe3\x83\x90\xe3\x82\xb9\xe3\x82\xbb\xe3\x83\xb3\xe3\x83\x89\xe3\x83\xac\xe3\x83\x99\xe3\x83\xab\xe8\xa8\xad\xe5\xae\x9a\xe6\xa7\x8b\xe9\x80\xa0\xe4\xbd\x93\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_AisacControlInterpolateSettings = { "AisacControlInterpolateSettings", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomAudioVolumeParameters, AisacControlInterpolateSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_AisacControlInterpolateSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_AisacControlInterpolateSettings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_AisacControlInterpolateSettings_Inner = { "AisacControlInterpolateSettings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAisacControlInterpolationSettings, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_BusSendInterpolateSettings_MetaData[] = {
		{ "Category", "Bus" },
		{ "Comment", "/** \xe3\x83\x90\xe3\x82\xb9\xe3\x82\xbb\xe3\x83\xb3\xe3\x83\x89\xe3\x83\xac\xe3\x83\x99\xe3\x83\xab\xe8\xa8\xad\xe5\xae\x9a\xe6\xa7\x8b\xe9\x80\xa0\xe4\xbd\x93\xe3\x80\x82 */" },
		{ "EditCondition", "bUseBusSendSettings" },
		{ "ModuleRelativePath", "Classes/AtomAudioVolume.h" },
		{ "ToolTip", "\xe3\x83\x90\xe3\x82\xb9\xe3\x82\xbb\xe3\x83\xb3\xe3\x83\x89\xe3\x83\xac\xe3\x83\x99\xe3\x83\xab\xe8\xa8\xad\xe5\xae\x9a\xe6\xa7\x8b\xe9\x80\xa0\xe4\xbd\x93\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_BusSendInterpolateSettings = { "BusSendInterpolateSettings", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomAudioVolumeParameters, BusSendInterpolateSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_BusSendInterpolateSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_BusSendInterpolateSettings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_BusSendInterpolateSettings_Inner = { "BusSendInterpolateSettings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBusSendInterpolationSettings, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_SnapshotSwitchSettings_MetaData[] = {
		{ "Category", "Snapshot" },
		{ "Comment", "/** Dsp\xe3\x83\x90\xe3\x82\xb9\xe8\xa8\xad\xe5\xae\x9a\xe6\xa7\x8b\xe9\x80\xa0\xe4\xbd\x93\xe3\x80\x82 */" },
		{ "EditCondition", "bUseSnapshotSettings" },
		{ "ModuleRelativePath", "Classes/AtomAudioVolume.h" },
		{ "ToolTip", "Dsp\xe3\x83\x90\xe3\x82\xb9\xe8\xa8\xad\xe5\xae\x9a\xe6\xa7\x8b\xe9\x80\xa0\xe4\xbd\x93\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_SnapshotSwitchSettings = { "SnapshotSwitchSettings", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomAudioVolumeParameters, SnapshotSwitchSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_SnapshotSwitchSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_SnapshotSwitchSettings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_SnapshotSwitchSettings_Inner = { "SnapshotSwitchSettings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSnapshotSwitchSettings, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bSwitchIntepolationInsideForAisac_MetaData[] = {
		{ "Category", "AudioVolume" },
		{ "ModuleRelativePath", "Classes/AtomAudioVolume.h" },
		{ "Tooltip", "Switch the interpolation area from outside to inside this volume for AISAC control values." },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bSwitchIntepolationInsideForAisac_SetBit(void* Obj)
	{
		((FAtomAudioVolumeParameters*)Obj)->bSwitchIntepolationInsideForAisac = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bSwitchIntepolationInsideForAisac = { "bSwitchIntepolationInsideForAisac", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAtomAudioVolumeParameters), &Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bSwitchIntepolationInsideForAisac_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bSwitchIntepolationInsideForAisac_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bSwitchIntepolationInsideForAisac_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bSwitchIntepolationInsideForBus_MetaData[] = {
		{ "Category", "AudioVolume" },
		{ "ModuleRelativePath", "Classes/AtomAudioVolume.h" },
		{ "Tooltip", "Switch the interpolation area from outside to inside this volume for bus send levels." },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bSwitchIntepolationInsideForBus_SetBit(void* Obj)
	{
		((FAtomAudioVolumeParameters*)Obj)->bSwitchIntepolationInsideForBus = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bSwitchIntepolationInsideForBus = { "bSwitchIntepolationInsideForBus", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAtomAudioVolumeParameters), &Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bSwitchIntepolationInsideForBus_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bSwitchIntepolationInsideForBus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bSwitchIntepolationInsideForBus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_MaxDistanceForEntranceVolume_MetaData[] = {
		{ "Category", "AudioVolume" },
		{ "ModuleRelativePath", "Classes/AtomAudioVolume.h" },
		{ "Tooltip", "Set the distance at which EntranceVolume is not performed." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_MaxDistanceForEntranceVolume = { "MaxDistanceForEntranceVolume", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomAudioVolumeParameters, MaxDistanceForEntranceVolume), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_MaxDistanceForEntranceVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_MaxDistanceForEntranceVolume_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_AtomAudioVolumeWireFrameColor_MetaData[] = {
		{ "Category", "AudioVolume" },
		{ "Comment", "// Volume Color.\n" },
		{ "ModuleRelativePath", "Classes/AtomAudioVolume.h" },
		{ "ToolTip", "Volume Color." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_AtomAudioVolumeWireFrameColor = { "AtomAudioVolumeWireFrameColor", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomAudioVolumeParameters, AtomAudioVolumeWireFrameColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_AtomAudioVolumeWireFrameColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_AtomAudioVolumeWireFrameColor_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bUseAisacControlSettings_MetaData[] = {
		{ "Category", "AudioVolume" },
		{ "EditCondition", "!IsActiveEntranceVolumeFlag" },
		{ "ModuleRelativePath", "Classes/AtomAudioVolume.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bUseAisacControlSettings_SetBit(void* Obj)
	{
		((FAtomAudioVolumeParameters*)Obj)->bUseAisacControlSettings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bUseAisacControlSettings = { "bUseAisacControlSettings", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAtomAudioVolumeParameters), &Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bUseAisacControlSettings_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bUseAisacControlSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bUseAisacControlSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bUseBusSendSettings_MetaData[] = {
		{ "Category", "AudioVolume" },
		{ "EditCondition", "!IsActiveEntranceVolumeFlag" },
		{ "ModuleRelativePath", "Classes/AtomAudioVolume.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bUseBusSendSettings_SetBit(void* Obj)
	{
		((FAtomAudioVolumeParameters*)Obj)->bUseBusSendSettings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bUseBusSendSettings = { "bUseBusSendSettings", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAtomAudioVolumeParameters), &Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bUseBusSendSettings_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bUseBusSendSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bUseBusSendSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bUseSnapshotSettings_MetaData[] = {
		{ "Category", "AudioVolume" },
		{ "EditCondition", "!IsActiveEntranceVolumeFlag" },
		{ "ModuleRelativePath", "Classes/AtomAudioVolume.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bUseSnapshotSettings_SetBit(void* Obj)
	{
		((FAtomAudioVolumeParameters*)Obj)->bUseSnapshotSettings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bUseSnapshotSettings = { "bUseSnapshotSettings", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAtomAudioVolumeParameters), &Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bUseSnapshotSettings_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bUseSnapshotSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bUseSnapshotSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_AisacControlInterpolateSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_AisacControlInterpolateSettings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_BusSendInterpolateSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_BusSendInterpolateSettings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_SnapshotSwitchSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_SnapshotSwitchSettings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bSwitchIntepolationInsideForAisac,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bSwitchIntepolationInsideForBus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_MaxDistanceForEntranceVolume,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_AtomAudioVolumeWireFrameColor,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bUseAisacControlSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bUseBusSendSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bUseSnapshotSettings,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"AtomAudioVolumeParameters",
		sizeof(FAtomAudioVolumeParameters),
		alignof(FAtomAudioVolumeParameters),
		Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomAudioVolumeParameters()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtomAudioVolumeParameters"), sizeof(FAtomAudioVolumeParameters), Get_Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Hash() { return 2523543925U; }
class UScriptStruct* FBusSendInterpolationSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBusSendInterpolationSettings, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("BusSendInterpolationSettings"), sizeof(FBusSendInterpolationSettings), Get_Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Hash());
	}
	return Singleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FBusSendInterpolationSettings>()
{
	return FBusSendInterpolationSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBusSendInterpolationSettings(FBusSendInterpolationSettings::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("BusSendInterpolationSettings"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFBusSendInterpolationSettings
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFBusSendInterpolationSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BusSendInterpolationSettings")),new UScriptStruct::TCppStructOps<FBusSendInterpolationSettings>);
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFBusSendInterpolationSettings;
	struct Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Width;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BusSendLevelForOutside_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BusSendLevelForOutside;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BusSendLevelForInside_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BusSendLevelForInside;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BusName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BusName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BusID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BusID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DspBusSettingsName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DspBusSettingsName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DspBusSettingsID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DspBusSettingsID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Structure encapsulating settings for bus send level. */" },
		{ "ModuleRelativePath", "Classes/AtomAudioVolume.h" },
		{ "ToolTip", "Structure encapsulating settings for bus send level." },
	};
#endif
	void* Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBusSendInterpolationSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_Width_MetaData[] = {
		{ "Category", "DspBusSettings" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Area Width" },
		{ "ModuleRelativePath", "Classes/AtomAudioVolume.h" },
		{ "ToolTip", "Width to volume border where interporlation applies. Value can be positive only." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBusSendInterpolationSettings, Width), METADATA_PARAMS(Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_Width_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_BusSendLevelForOutside_MetaData[] = {
		{ "Category", "DspBusSettings" },
		{ "DisplayName", "Bus Send level for AudioVolume Outside" },
		{ "ModuleRelativePath", "Classes/AtomAudioVolume.h" },
		{ "ToolTip", "Target level for the current bus outside the audio volume." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_BusSendLevelForOutside = { "BusSendLevelForOutside", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBusSendInterpolationSettings, BusSendLevelForOutside), METADATA_PARAMS(Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_BusSendLevelForOutside_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_BusSendLevelForOutside_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_BusSendLevelForInside_MetaData[] = {
		{ "Category", "DspBusSettings" },
		{ "DisplayName", "Bus Send level for AudioVolume Inside" },
		{ "ModuleRelativePath", "Classes/AtomAudioVolume.h" },
		{ "ToolTip", "Target level for the current bus inside the audio volume." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_BusSendLevelForInside = { "BusSendLevelForInside", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBusSendInterpolationSettings, BusSendLevelForInside), METADATA_PARAMS(Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_BusSendLevelForInside_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_BusSendLevelForInside_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_BusName_MetaData[] = {
		{ "Category", "DspBusSettings" },
		{ "Comment", "/** BusSettings\xe5\x90\x8d. */" },
		{ "ModuleRelativePath", "Classes/AtomAudioVolume.h" },
		{ "ToolTip", "BusSettings\xe5\x90\x8d." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_BusName = { "BusName", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBusSendInterpolationSettings, BusName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_BusName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_BusName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_BusID_MetaData[] = {
		{ "Category", "DspBusSettings" },
		{ "Comment", "/** DspBusSettings\xe6\x8c\x87\xe5\xae\x9a\xe7\x94\xa8ID. */" },
		{ "ModuleRelativePath", "Classes/AtomAudioVolume.h" },
		{ "ToolTip", "DspBusSettings\xe6\x8c\x87\xe5\xae\x9a\xe7\x94\xa8ID." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_BusID = { "BusID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBusSendInterpolationSettings, BusID), METADATA_PARAMS(Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_BusID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_BusID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_DspBusSettingsName_MetaData[] = {
		{ "Category", "DspBusSettings" },
		{ "Comment", "/** DspBusSettings\xe5\x90\x8d. */" },
		{ "ModuleRelativePath", "Classes/AtomAudioVolume.h" },
		{ "ToolTip", "DspBusSettings\xe5\x90\x8d." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_DspBusSettingsName = { "DspBusSettingsName", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBusSendInterpolationSettings, DspBusSettingsName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_DspBusSettingsName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_DspBusSettingsName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_DspBusSettingsID_MetaData[] = {
		{ "Category", "DspBusSettings" },
		{ "Comment", "/** DspBusSettings\xe6\x8c\x87\xe5\xae\x9a\xe7\x94\xa8ID. */" },
		{ "ModuleRelativePath", "Classes/AtomAudioVolume.h" },
		{ "ToolTip", "DspBusSettings\xe6\x8c\x87\xe5\xae\x9a\xe7\x94\xa8ID." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_DspBusSettingsID = { "DspBusSettingsID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBusSendInterpolationSettings, DspBusSettingsID), METADATA_PARAMS(Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_DspBusSettingsID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_DspBusSettingsID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_Width,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_BusSendLevelForOutside,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_BusSendLevelForInside,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_BusName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_BusID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_DspBusSettingsName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_DspBusSettingsID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"BusSendInterpolationSettings",
		sizeof(FBusSendInterpolationSettings),
		alignof(FBusSendInterpolationSettings),
		Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBusSendInterpolationSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BusSendInterpolationSettings"), sizeof(FBusSendInterpolationSettings), Get_Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Hash() { return 1813003430U; }
class UScriptStruct* FAisacControlInterpolationSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAisacControlInterpolationSettings, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AisacControlInterpolationSettings"), sizeof(FAisacControlInterpolationSettings), Get_Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Hash());
	}
	return Singleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAisacControlInterpolationSettings>()
{
	return FAisacControlInterpolationSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAisacControlInterpolationSettings(FAisacControlInterpolationSettings::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("AisacControlInterpolationSettings"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFAisacControlInterpolationSettings
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFAisacControlInterpolationSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AisacControlInterpolationSettings")),new UScriptStruct::TCppStructOps<FAisacControlInterpolationSettings>);
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFAisacControlInterpolationSettings;
	struct Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Width;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AisacControlValueForOutside_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AisacControlValueForOutside;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AisacControlValueForInside_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AisacControlValueForInside;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AisacControlName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AisacControlName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AisacControlID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AisacControlID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Struct encapsulating settings for reverb effects. */" },
		{ "ModuleRelativePath", "Classes/AtomAudioVolume.h" },
		{ "ToolTip", "Struct encapsulating settings for reverb effects." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAisacControlInterpolationSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_Width_MetaData[] = {
		{ "Category", "AisacControl" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Area Width" },
		{ "ModuleRelativePath", "Classes/AtomAudioVolume.h" },
		{ "ToolTip", "Distance to volume body border where Interporlation applies. Value can be positive or negative." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAisacControlInterpolationSettings, Width), METADATA_PARAMS(Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_Width_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_AisacControlValueForOutside_MetaData[] = {
		{ "Category", "AisacControl" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Aisac Value for Outside" },
		{ "ModuleRelativePath", "Classes/AtomAudioVolume.h" },
		{ "ToolTip", "Target value for outside the audio volume" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_AisacControlValueForOutside = { "AisacControlValueForOutside", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAisacControlInterpolationSettings, AisacControlValueForOutside), METADATA_PARAMS(Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_AisacControlValueForOutside_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_AisacControlValueForOutside_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_AisacControlValueForInside_MetaData[] = {
		{ "Category", "AisacControl" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Aisac Value for Inside" },
		{ "ModuleRelativePath", "Classes/AtomAudioVolume.h" },
		{ "ToolTip", "Target value for inside the audio volume." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_AisacControlValueForInside = { "AisacControlValueForInside", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAisacControlInterpolationSettings, AisacControlValueForInside), METADATA_PARAMS(Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_AisacControlValueForInside_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_AisacControlValueForInside_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_AisacControlName_MetaData[] = {
		{ "Category", "AisacControl" },
		{ "Comment", "/** AisacControl\xe5\x90\x8d. */" },
		{ "ModuleRelativePath", "Classes/AtomAudioVolume.h" },
		{ "ToolTip", "AisacControl\xe5\x90\x8d." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_AisacControlName = { "AisacControlName", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAisacControlInterpolationSettings, AisacControlName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_AisacControlName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_AisacControlName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_AisacControlID_MetaData[] = {
		{ "Category", "AisacControl" },
		{ "Comment", "/** DspBusSettings\xe6\x8c\x87\xe5\xae\x9a\xe7\x94\xa8ID. */" },
		{ "ModuleRelativePath", "Classes/AtomAudioVolume.h" },
		{ "ToolTip", "DspBusSettings\xe6\x8c\x87\xe5\xae\x9a\xe7\x94\xa8ID." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_AisacControlID = { "AisacControlID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAisacControlInterpolationSettings, AisacControlID), METADATA_PARAMS(Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_AisacControlID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_AisacControlID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_Width,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_AisacControlValueForOutside,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_AisacControlValueForInside,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_AisacControlName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_AisacControlID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"AisacControlInterpolationSettings",
		sizeof(FAisacControlInterpolationSettings),
		alignof(FAisacControlInterpolationSettings),
		Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAisacControlInterpolationSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AisacControlInterpolationSettings"), sizeof(FAisacControlInterpolationSettings), Get_Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Hash() { return 3789021060U; }
class UScriptStruct* FSnapshotSwitchSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSnapshotSwitchSettings, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("SnapshotSwitchSettings"), sizeof(FSnapshotSwitchSettings), Get_Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Hash());
	}
	return Singleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FSnapshotSwitchSettings>()
{
	return FSnapshotSwitchSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSnapshotSwitchSettings(FSnapshotSwitchSettings::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("SnapshotSwitchSettings"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFSnapshotSwitchSettings
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFSnapshotSwitchSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SnapshotSwitchSettings")),new UScriptStruct::TCppStructOps<FSnapshotSwitchSettings>);
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFSnapshotSwitchSettings;
	struct Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FadeTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnapshotName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SnapshotName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnapshotID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SnapshotID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DspBusSettingsName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DspBusSettingsName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DspBusSettingsID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DspBusSettingsID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AsrRackID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AsrRackID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Struct encapsulating settings for reverb effects. */" },
		{ "ModuleRelativePath", "Classes/AtomAudioVolume.h" },
		{ "ToolTip", "Struct encapsulating settings for reverb effects." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSnapshotSwitchSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::NewProp_FadeTime_MetaData[] = {
		{ "Category", "DspBusSettings" },
		{ "Comment", "/** Time to fade from the current reverb settings into this setting, in seconds. */" },
		{ "ModuleRelativePath", "Classes/AtomAudioVolume.h" },
		{ "ToolTip", "Time to fade from the current reverb settings into this setting, in seconds." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::NewProp_FadeTime = { "FadeTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSnapshotSwitchSettings, FadeTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::NewProp_FadeTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::NewProp_FadeTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::NewProp_SnapshotName_MetaData[] = {
		{ "Category", "DspBusSettings" },
		{ "Comment", "/* Snapshot\xe5\x90\x8d. */" },
		{ "ModuleRelativePath", "Classes/AtomAudioVolume.h" },
		{ "ToolTip", "Snapshot\xe5\x90\x8d." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::NewProp_SnapshotName = { "SnapshotName", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSnapshotSwitchSettings, SnapshotName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::NewProp_SnapshotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::NewProp_SnapshotName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::NewProp_SnapshotID_MetaData[] = {
		{ "Category", "DspBusSettings" },
		{ "Comment", "/* Snapshot\xe6\x8c\x87\xe5\xae\x9a\xe7\x94\xa8ID. */" },
		{ "ModuleRelativePath", "Classes/AtomAudioVolume.h" },
		{ "ToolTip", "Snapshot\xe6\x8c\x87\xe5\xae\x9a\xe7\x94\xa8ID." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::NewProp_SnapshotID = { "SnapshotID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSnapshotSwitchSettings, SnapshotID), METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::NewProp_SnapshotID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::NewProp_SnapshotID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::NewProp_DspBusSettingsName_MetaData[] = {
		{ "Category", "DspBusSettings" },
		{ "Comment", "/* DspBusSettings\xe5\x90\x8d. */" },
		{ "ModuleRelativePath", "Classes/AtomAudioVolume.h" },
		{ "ToolTip", "DspBusSettings\xe5\x90\x8d." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::NewProp_DspBusSettingsName = { "DspBusSettingsName", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSnapshotSwitchSettings, DspBusSettingsName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::NewProp_DspBusSettingsName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::NewProp_DspBusSettingsName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::NewProp_DspBusSettingsID_MetaData[] = {
		{ "Category", "DspBusSettings" },
		{ "Comment", "/* DspBusSettings\xe6\x8c\x87\xe5\xae\x9a\xe7\x94\xa8ID. */" },
		{ "ModuleRelativePath", "Classes/AtomAudioVolume.h" },
		{ "ToolTip", "DspBusSettings\xe6\x8c\x87\xe5\xae\x9a\xe7\x94\xa8ID." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::NewProp_DspBusSettingsID = { "DspBusSettingsID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSnapshotSwitchSettings, DspBusSettingsID), METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::NewProp_DspBusSettingsID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::NewProp_DspBusSettingsID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::NewProp_AsrRackID_MetaData[] = {
		{ "Category", "DspBusSettings" },
		{ "Comment", "/** The reverb asset to employ. */" },
		{ "ModuleRelativePath", "Classes/AtomAudioVolume.h" },
		{ "ToolTip", "The reverb asset to employ." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::NewProp_AsrRackID = { "AsrRackID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSnapshotSwitchSettings, AsrRackID), METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::NewProp_AsrRackID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::NewProp_AsrRackID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::NewProp_FadeTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::NewProp_SnapshotName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::NewProp_SnapshotID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::NewProp_DspBusSettingsName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::NewProp_DspBusSettingsID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::NewProp_AsrRackID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"SnapshotSwitchSettings",
		sizeof(FSnapshotSwitchSettings),
		alignof(FSnapshotSwitchSettings),
		Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSnapshotSwitchSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SnapshotSwitchSettings"), sizeof(FSnapshotSwitchSettings), Get_Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Hash() { return 3928031616U; }
	DEFINE_FUNCTION(AAtomEntranceVolume::execOnRep_bEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_bEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAtomEntranceVolume::execSetEnabled)
	{
		P_GET_UBOOL(Z_Param_bNewEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnabled(Z_Param_bNewEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAtomEntranceVolume::execGetEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAtomEntranceVolume::execSetPriority)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewPriority);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPriority(Z_Param_NewPriority);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAtomEntranceVolume::execGetPriority)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPriority();
		P_NATIVE_END;
	}
	void AAtomEntranceVolume::StaticRegisterNativesAAtomEntranceVolume()
	{
		UClass* Class = AAtomEntranceVolume::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEnabled", &AAtomEntranceVolume::execGetEnabled },
			{ "GetPriority", &AAtomEntranceVolume::execGetPriority },
			{ "OnRep_bEnabled", &AAtomEntranceVolume::execOnRep_bEnabled },
			{ "SetEnabled", &AAtomEntranceVolume::execSetEnabled },
			{ "SetPriority", &AAtomEntranceVolume::execSetPriority },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAtomEntranceVolume_GetEnabled_Statics
	{
		struct AtomEntranceVolume_eventGetEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AAtomEntranceVolume_GetEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtomEntranceVolume_eventGetEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAtomEntranceVolume_GetEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtomEntranceVolume_eventGetEnabled_Parms), &Z_Construct_UFunction_AAtomEntranceVolume_GetEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAtomEntranceVolume_GetEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtomEntranceVolume_GetEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAtomEntranceVolume_GetEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomEntranceVolume" },
		{ "ModuleRelativePath", "Classes/AtomAudioVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtomEntranceVolume_GetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtomEntranceVolume, nullptr, "GetEnabled", nullptr, nullptr, sizeof(AtomEntranceVolume_eventGetEnabled_Parms), Z_Construct_UFunction_AAtomEntranceVolume_GetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomEntranceVolume_GetEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAtomEntranceVolume_GetEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomEntranceVolume_GetEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAtomEntranceVolume_GetEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAtomEntranceVolume_GetEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAtomEntranceVolume_GetPriority_Statics
	{
		struct AtomEntranceVolume_eventGetPriority_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAtomEntranceVolume_GetPriority_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomEntranceVolume_eventGetPriority_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAtomEntranceVolume_GetPriority_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtomEntranceVolume_GetPriority_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAtomEntranceVolume_GetPriority_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomEntranceVolume" },
		{ "ModuleRelativePath", "Classes/AtomAudioVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtomEntranceVolume_GetPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtomEntranceVolume, nullptr, "GetPriority", nullptr, nullptr, sizeof(AtomEntranceVolume_eventGetPriority_Parms), Z_Construct_UFunction_AAtomEntranceVolume_GetPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomEntranceVolume_GetPriority_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAtomEntranceVolume_GetPriority_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomEntranceVolume_GetPriority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAtomEntranceVolume_GetPriority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAtomEntranceVolume_GetPriority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAtomEntranceVolume_OnRep_bEnabled_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAtomEntranceVolume_OnRep_bEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/AtomAudioVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtomEntranceVolume_OnRep_bEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtomEntranceVolume, nullptr, "OnRep_bEnabled", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAtomEntranceVolume_OnRep_bEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomEntranceVolume_OnRep_bEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAtomEntranceVolume_OnRep_bEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAtomEntranceVolume_OnRep_bEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAtomEntranceVolume_SetEnabled_Statics
	{
		struct AtomEntranceVolume_eventSetEnabled_Parms
		{
			bool bNewEnabled;
		};
		static void NewProp_bNewEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AAtomEntranceVolume_SetEnabled_Statics::NewProp_bNewEnabled_SetBit(void* Obj)
	{
		((AtomEntranceVolume_eventSetEnabled_Parms*)Obj)->bNewEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAtomEntranceVolume_SetEnabled_Statics::NewProp_bNewEnabled = { "bNewEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtomEntranceVolume_eventSetEnabled_Parms), &Z_Construct_UFunction_AAtomEntranceVolume_SetEnabled_Statics::NewProp_bNewEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAtomEntranceVolume_SetEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtomEntranceVolume_SetEnabled_Statics::NewProp_bNewEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAtomEntranceVolume_SetEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomEntranceVolume" },
		{ "ModuleRelativePath", "Classes/AtomAudioVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtomEntranceVolume_SetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtomEntranceVolume, nullptr, "SetEnabled", nullptr, nullptr, sizeof(AtomEntranceVolume_eventSetEnabled_Parms), Z_Construct_UFunction_AAtomEntranceVolume_SetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomEntranceVolume_SetEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAtomEntranceVolume_SetEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomEntranceVolume_SetEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAtomEntranceVolume_SetEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAtomEntranceVolume_SetEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAtomEntranceVolume_SetPriority_Statics
	{
		struct AtomEntranceVolume_eventSetPriority_Parms
		{
			float NewPriority;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewPriority;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAtomEntranceVolume_SetPriority_Statics::NewProp_NewPriority = { "NewPriority", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomEntranceVolume_eventSetPriority_Parms, NewPriority), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAtomEntranceVolume_SetPriority_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtomEntranceVolume_SetPriority_Statics::NewProp_NewPriority,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAtomEntranceVolume_SetPriority_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomEntranceVolume" },
		{ "ModuleRelativePath", "Classes/AtomAudioVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtomEntranceVolume_SetPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtomEntranceVolume, nullptr, "SetPriority", nullptr, nullptr, sizeof(AtomEntranceVolume_eventSetPriority_Parms), Z_Construct_UFunction_AAtomEntranceVolume_SetPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomEntranceVolume_SetPriority_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAtomEntranceVolume_SetPriority_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomEntranceVolume_SetPriority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAtomEntranceVolume_SetPriority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAtomEntranceVolume_SetPriority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAtomEntranceVolume_NoRegister()
	{
		return AAtomEntranceVolume::StaticClass();
	}
	struct Z_Construct_UClass_AAtomEntranceVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NeighbourhoodAudioVolumeArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NeighbourhoodAudioVolumeArray;
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_NeighbourhoodAudioVolumeArray_Inner;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtomBrushColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AtomBrushColor;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Priority;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAtomEntranceVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAtomEntranceVolume_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAtomEntranceVolume_GetEnabled, "GetEnabled" }, // 2880143513
		{ &Z_Construct_UFunction_AAtomEntranceVolume_GetPriority, "GetPriority" }, // 3800146362
		{ &Z_Construct_UFunction_AAtomEntranceVolume_OnRep_bEnabled, "OnRep_bEnabled" }, // 2564481854
		{ &Z_Construct_UFunction_AAtomEntranceVolume_SetEnabled, "SetEnabled" }, // 3298260717
		{ &Z_Construct_UFunction_AAtomEntranceVolume_SetPriority, "SetPriority" }, // 3461215169
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtomEntranceVolume_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Advanced Attachment Collision Volume Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "AtomAudioVolume.h" },
		{ "ModuleRelativePath", "Classes/AtomAudioVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtomEntranceVolume_Statics::NewProp_NeighbourhoodAudioVolumeArray_MetaData[] = {
		{ "Category", "AtomEntranceVolume" },
		{ "ModuleRelativePath", "Classes/AtomAudioVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAtomEntranceVolume_Statics::NewProp_NeighbourhoodAudioVolumeArray = { "NeighbourhoodAudioVolumeArray", "OnRep_bEnabled", (EPropertyFlags)0x0014000100020021, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAtomEntranceVolume, NeighbourhoodAudioVolumeArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AAtomEntranceVolume_Statics::NewProp_NeighbourhoodAudioVolumeArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtomEntranceVolume_Statics::NewProp_NeighbourhoodAudioVolumeArray_MetaData)) };
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AAtomEntranceVolume_Statics::NewProp_NeighbourhoodAudioVolumeArray_Inner = { "NeighbourhoodAudioVolumeArray", nullptr, (EPropertyFlags)0x0004000000020000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AAtomAudioVolume_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtomEntranceVolume_Statics::NewProp_AtomBrushColor_MetaData[] = {
		{ "Category", "AudioVolume" },
		{ "Comment", "// Volume Color.\n" },
		{ "ModuleRelativePath", "Classes/AtomAudioVolume.h" },
		{ "ToolTip", "Volume Color." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAtomEntranceVolume_Statics::NewProp_AtomBrushColor = { "AtomBrushColor", nullptr, (EPropertyFlags)0x0040000800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAtomEntranceVolume, AtomBrushColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_AAtomEntranceVolume_Statics::NewProp_AtomBrushColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtomEntranceVolume_Statics::NewProp_AtomBrushColor_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtomEntranceVolume_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "AtomEntranceVolume" },
		{ "ModuleRelativePath", "Classes/AtomAudioVolume.h" },
	};
#endif
	void Z_Construct_UClass_AAtomEntranceVolume_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((AAtomEntranceVolume*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAtomEntranceVolume_Statics::NewProp_bEnabled = { "bEnabled", "OnRep_bEnabled", (EPropertyFlags)0x0040000100000021, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AAtomEntranceVolume), &Z_Construct_UClass_AAtomEntranceVolume_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAtomEntranceVolume_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtomEntranceVolume_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtomEntranceVolume_Statics::NewProp_Priority_MetaData[] = {
		{ "Category", "AtomEntranceVolume" },
		{ "ModuleRelativePath", "Classes/AtomAudioVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAtomEntranceVolume_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAtomEntranceVolume, Priority), METADATA_PARAMS(Z_Construct_UClass_AAtomEntranceVolume_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtomEntranceVolume_Statics::NewProp_Priority_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAtomEntranceVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtomEntranceVolume_Statics::NewProp_NeighbourhoodAudioVolumeArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtomEntranceVolume_Statics::NewProp_NeighbourhoodAudioVolumeArray_Inner,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtomEntranceVolume_Statics::NewProp_AtomBrushColor,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtomEntranceVolume_Statics::NewProp_bEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtomEntranceVolume_Statics::NewProp_Priority,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAtomEntranceVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAtomEntranceVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAtomEntranceVolume_Statics::ClassParams = {
		&AAtomEntranceVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAtomEntranceVolume_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAtomEntranceVolume_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAtomEntranceVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAtomEntranceVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAtomEntranceVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAtomEntranceVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAtomEntranceVolume, 4158379152);
	template<> CRIWARERUNTIME_API UClass* StaticClass<AAtomEntranceVolume>()
	{
		return AAtomEntranceVolume::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAtomEntranceVolume(Z_Construct_UClass_AAtomEntranceVolume, &AAtomEntranceVolume::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("AAtomEntranceVolume"), false, nullptr, nullptr, nullptr);

	void AAtomEntranceVolume::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bEnabled(TEXT("bEnabled"));
		static const FName Name_NeighbourhoodAudioVolumeArray(TEXT("NeighbourhoodAudioVolumeArray"));

		const bool bIsValid = true
			&& Name_bEnabled == ClassReps[(int32)ENetFields_Private::bEnabled].Property->GetFName()
			&& Name_NeighbourhoodAudioVolumeArray == ClassReps[(int32)ENetFields_Private::NeighbourhoodAudioVolumeArray].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AAtomEntranceVolume"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAtomEntranceVolume);
	DEFINE_FUNCTION(AAtomAudioVolume::execEnableAllAudioVolume)
	{
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		AAtomAudioVolume::EnableAllAudioVolume(Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAtomAudioVolume::execSetReverbSettings)
	{
		P_GET_STRUCT_REF(FSnapshotSwitchSettings,Z_Param_Out_NewReverbSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetReverbSettings(Z_Param_Out_NewReverbSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAtomAudioVolume::execSetEnabled)
	{
		P_GET_UBOOL(Z_Param_bNewEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnabled(Z_Param_bNewEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAtomAudioVolume::execGetEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAtomAudioVolume::execSetPriority)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewPriority);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPriority(Z_Param_NewPriority);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAtomAudioVolume::execGetPriority)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPriority();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAtomAudioVolume::execOnRep_bEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_bEnabled();
		P_NATIVE_END;
	}
	void AAtomAudioVolume::StaticRegisterNativesAAtomAudioVolume()
	{
		UClass* Class = AAtomAudioVolume::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnableAllAudioVolume", &AAtomAudioVolume::execEnableAllAudioVolume },
			{ "GetEnabled", &AAtomAudioVolume::execGetEnabled },
			{ "GetPriority", &AAtomAudioVolume::execGetPriority },
			{ "OnRep_bEnabled", &AAtomAudioVolume::execOnRep_bEnabled },
			{ "SetEnabled", &AAtomAudioVolume::execSetEnabled },
			{ "SetPriority", &AAtomAudioVolume::execSetPriority },
			{ "SetReverbSettings", &AAtomAudioVolume::execSetReverbSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAtomAudioVolume_EnableAllAudioVolume_Statics
	{
		struct AtomAudioVolume_eventEnableAllAudioVolume_Parms
		{
			bool bEnable;
		};
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AAtomAudioVolume_EnableAllAudioVolume_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((AtomAudioVolume_eventEnableAllAudioVolume_Parms*)Obj)->bEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAtomAudioVolume_EnableAllAudioVolume_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtomAudioVolume_eventEnableAllAudioVolume_Parms), &Z_Construct_UFunction_AAtomAudioVolume_EnableAllAudioVolume_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAtomAudioVolume_EnableAllAudioVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtomAudioVolume_EnableAllAudioVolume_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAtomAudioVolume_EnableAllAudioVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "AudioVolume" },
		{ "Comment", "/**\n\x09 * \xe3\x83\xac\xe3\x83\x99\xe3\x83\xab\xe4\xb8\x8a\xe3\x81\xab\xe5\xad\x98\xe5\x9c\xa8\xe3\x81\x97\xe3\x81\xa6\xe3\x81\x84\xe3\x82\x8b\xe3\x81\x99\xe3\x81\xb9\xe3\x81\xa6\xe3\x81\xae""AtomAudioVolume\xe3\x81\xab\xe5\xaf\xbe\xe3\x81\x97\xe3\x81\xa6\xe4\xb8\x80\xe6\x8b\xac\xe3\x81\xa7\xe6\x9c\x89\xe5\x8a\xb9\xe3\x83\xbb\xe7\x84\xa1\xe5\x8a\xb9\xe5\x8c\x96\xe3\x81\x95\xe3\x81\x9b\xe3\x82\x8b\xe3\x81\x93\xe3\x81\xa8\xe3\x81\x8c\xe3\x81\xa7\xe3\x81\x8d\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * true\xe3\x82\x92\xe5\xbc\x95\xe6\x95\xb0\xe3\x81\xab\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x99\xe3\x82\x8b\xe3\x81\xa8\xe3\x81\x99\xe3\x81\xb9\xe3\x81\xa6\xe3\x81\xae""AtomAudioVolume\xe3\x81\x8c\xe6\x9c\x89\xe5\x8a\xb9\xe3\x81\xa8\xe3\x81\xaa\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 *\n\x09 * @param bEnable \xe6\x96\xb0\xe3\x81\x97\xe3\x81\x84\xe6\x9c\x89\xe5\x8a\xb9\xe3\x83\x95\xe3\x83\xa9\xe3\x82\xb0\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 */" },
		{ "ModuleRelativePath", "Classes/AtomAudioVolume.h" },
		{ "ToolTip", "\xe3\x83\xac\xe3\x83\x99\xe3\x83\xab\xe4\xb8\x8a\xe3\x81\xab\xe5\xad\x98\xe5\x9c\xa8\xe3\x81\x97\xe3\x81\xa6\xe3\x81\x84\xe3\x82\x8b\xe3\x81\x99\xe3\x81\xb9\xe3\x81\xa6\xe3\x81\xae""AtomAudioVolume\xe3\x81\xab\xe5\xaf\xbe\xe3\x81\x97\xe3\x81\xa6\xe4\xb8\x80\xe6\x8b\xac\xe3\x81\xa7\xe6\x9c\x89\xe5\x8a\xb9\xe3\x83\xbb\xe7\x84\xa1\xe5\x8a\xb9\xe5\x8c\x96\xe3\x81\x95\xe3\x81\x9b\xe3\x82\x8b\xe3\x81\x93\xe3\x81\xa8\xe3\x81\x8c\xe3\x81\xa7\xe3\x81\x8d\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\ntrue\xe3\x82\x92\xe5\xbc\x95\xe6\x95\xb0\xe3\x81\xab\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x99\xe3\x82\x8b\xe3\x81\xa8\xe3\x81\x99\xe3\x81\xb9\xe3\x81\xa6\xe3\x81\xae""AtomAudioVolume\xe3\x81\x8c\xe6\x9c\x89\xe5\x8a\xb9\xe3\x81\xa8\xe3\x81\xaa\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\n@param bEnable \xe6\x96\xb0\xe3\x81\x97\xe3\x81\x84\xe6\x9c\x89\xe5\x8a\xb9\xe3\x83\x95\xe3\x83\xa9\xe3\x82\xb0\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtomAudioVolume_EnableAllAudioVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtomAudioVolume, nullptr, "EnableAllAudioVolume", nullptr, nullptr, sizeof(AtomAudioVolume_eventEnableAllAudioVolume_Parms), Z_Construct_UFunction_AAtomAudioVolume_EnableAllAudioVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomAudioVolume_EnableAllAudioVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAtomAudioVolume_EnableAllAudioVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomAudioVolume_EnableAllAudioVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAtomAudioVolume_EnableAllAudioVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAtomAudioVolume_EnableAllAudioVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAtomAudioVolume_GetEnabled_Statics
	{
		struct AtomAudioVolume_eventGetEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AAtomAudioVolume_GetEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtomAudioVolume_eventGetEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAtomAudioVolume_GetEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtomAudioVolume_eventGetEnabled_Parms), &Z_Construct_UFunction_AAtomAudioVolume_GetEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAtomAudioVolume_GetEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtomAudioVolume_GetEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAtomAudioVolume_GetEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomAudioVolume" },
		{ "Comment", "/**\n\x09 * AtomAudioVolume\xe3\x81\x8c\xe6\x9c\x89\xe5\x8a\xb9\xe3\x81\xab\xe3\x81\xaa\xe3\x81\xa3\xe3\x81\xa6\xe3\x81\x84\xe3\x82\x8b\xe3\x81\x8b\xe3\x81\xa9\xe3\x81\x86\xe3\x81\x8b\xe7\xa2\xba\xe8\xaa\x8d\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * true\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8b\xe3\x81\xa8\xe3\x80\x81""AtomAudioVolume\xe3\x81\xaf\xe6\x9c\x89\xe5\x8a\xb9\xe3\x81\xa8\xe3\x81\xaa\xe3\x81\xa3\xe3\x81\xa6\xe3\x81\x84\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 *\n\x09 * @return bEnabled AtomAudioVolume\xe3\x81\xae\xe6\x9c\x89\xe5\x8a\xb9\xe3\x83\x95\xe3\x83\xa9\xe3\x82\xb0\xe3\x82\x92\xe8\xbf\x94\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 */" },
		{ "ModuleRelativePath", "Classes/AtomAudioVolume.h" },
		{ "ToolTip", "AtomAudioVolume\xe3\x81\x8c\xe6\x9c\x89\xe5\x8a\xb9\xe3\x81\xab\xe3\x81\xaa\xe3\x81\xa3\xe3\x81\xa6\xe3\x81\x84\xe3\x82\x8b\xe3\x81\x8b\xe3\x81\xa9\xe3\x81\x86\xe3\x81\x8b\xe7\xa2\xba\xe8\xaa\x8d\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\ntrue\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8b\xe3\x81\xa8\xe3\x80\x81""AtomAudioVolume\xe3\x81\xaf\xe6\x9c\x89\xe5\x8a\xb9\xe3\x81\xa8\xe3\x81\xaa\xe3\x81\xa3\xe3\x81\xa6\xe3\x81\x84\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\n@return bEnabled AtomAudioVolume\xe3\x81\xae\xe6\x9c\x89\xe5\x8a\xb9\xe3\x83\x95\xe3\x83\xa9\xe3\x82\xb0\xe3\x82\x92\xe8\xbf\x94\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtomAudioVolume_GetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtomAudioVolume, nullptr, "GetEnabled", nullptr, nullptr, sizeof(AtomAudioVolume_eventGetEnabled_Parms), Z_Construct_UFunction_AAtomAudioVolume_GetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomAudioVolume_GetEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAtomAudioVolume_GetEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomAudioVolume_GetEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAtomAudioVolume_GetEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAtomAudioVolume_GetEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAtomAudioVolume_GetPriority_Statics
	{
		struct AtomAudioVolume_eventGetPriority_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAtomAudioVolume_GetPriority_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomAudioVolume_eventGetPriority_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAtomAudioVolume_GetPriority_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtomAudioVolume_GetPriority_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAtomAudioVolume_GetPriority_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomAudioVolume" },
		{ "Comment", "/**\n\x09 * AtomAudioVolume\xe3\x81\xaePriority\xe3\x82\x92\xe8\xbf\x94\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 *\n\x09 * @return Priority AudioVolume\xe3\x81\xaePritority\xe3\x82\x92\xe8\xbf\x94\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\n\x09 */" },
		{ "ModuleRelativePath", "Classes/AtomAudioVolume.h" },
		{ "ToolTip", "AtomAudioVolume\xe3\x81\xaePriority\xe3\x82\x92\xe8\xbf\x94\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\n@return Priority AudioVolume\xe3\x81\xaePritority\xe3\x82\x92\xe8\xbf\x94\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtomAudioVolume_GetPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtomAudioVolume, nullptr, "GetPriority", nullptr, nullptr, sizeof(AtomAudioVolume_eventGetPriority_Parms), Z_Construct_UFunction_AAtomAudioVolume_GetPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomAudioVolume_GetPriority_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAtomAudioVolume_GetPriority_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomAudioVolume_GetPriority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAtomAudioVolume_GetPriority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAtomAudioVolume_GetPriority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAtomAudioVolume_OnRep_bEnabled_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAtomAudioVolume_OnRep_bEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/AtomAudioVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtomAudioVolume_OnRep_bEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtomAudioVolume, nullptr, "OnRep_bEnabled", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAtomAudioVolume_OnRep_bEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomAudioVolume_OnRep_bEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAtomAudioVolume_OnRep_bEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAtomAudioVolume_OnRep_bEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAtomAudioVolume_SetEnabled_Statics
	{
		struct AtomAudioVolume_eventSetEnabled_Parms
		{
			bool bNewEnabled;
		};
		static void NewProp_bNewEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AAtomAudioVolume_SetEnabled_Statics::NewProp_bNewEnabled_SetBit(void* Obj)
	{
		((AtomAudioVolume_eventSetEnabled_Parms*)Obj)->bNewEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAtomAudioVolume_SetEnabled_Statics::NewProp_bNewEnabled = { "bNewEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtomAudioVolume_eventSetEnabled_Parms), &Z_Construct_UFunction_AAtomAudioVolume_SetEnabled_Statics::NewProp_bNewEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAtomAudioVolume_SetEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtomAudioVolume_SetEnabled_Statics::NewProp_bNewEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAtomAudioVolume_SetEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomAudioVolume" },
		{ "Comment", "/**\n\x09 * AtomAudioVolume\xe3\x82\x92\xe5\x8b\x95\xe7\x9a\x84\xe3\x81\xab\xe6\x9c\x89\xe5\x8a\xb9\xe3\x83\xbb\xe7\x84\xa1\xe5\x8a\xb9\xe3\x81\xab\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * true\xe3\x82\x92\xe5\xbc\x95\xe6\x95\xb0\xe3\x81\xab\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x99\xe3\x82\x8b\xe3\x81\xa8""AtomAudioVolume\xe3\x81\x8c\xe6\x9c\x89\xe5\x8a\xb9\xe3\x81\xa8\xe3\x81\xaa\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 *\n\x09 * @param bNewEnabled AtomAudioVolume\xe3\x81\xab\xe6\x96\xb0\xe3\x81\x97\xe3\x81\x84\xe6\x9c\x89\xe5\x8a\xb9\xe3\x83\x95\xe3\x83\xa9\xe3\x82\xb0\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 */" },
		{ "ModuleRelativePath", "Classes/AtomAudioVolume.h" },
		{ "ToolTip", "AtomAudioVolume\xe3\x82\x92\xe5\x8b\x95\xe7\x9a\x84\xe3\x81\xab\xe6\x9c\x89\xe5\x8a\xb9\xe3\x83\xbb\xe7\x84\xa1\xe5\x8a\xb9\xe3\x81\xab\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\ntrue\xe3\x82\x92\xe5\xbc\x95\xe6\x95\xb0\xe3\x81\xab\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x99\xe3\x82\x8b\xe3\x81\xa8""AtomAudioVolume\xe3\x81\x8c\xe6\x9c\x89\xe5\x8a\xb9\xe3\x81\xa8\xe3\x81\xaa\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\n@param bNewEnabled AtomAudioVolume\xe3\x81\xab\xe6\x96\xb0\xe3\x81\x97\xe3\x81\x84\xe6\x9c\x89\xe5\x8a\xb9\xe3\x83\x95\xe3\x83\xa9\xe3\x82\xb0\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtomAudioVolume_SetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtomAudioVolume, nullptr, "SetEnabled", nullptr, nullptr, sizeof(AtomAudioVolume_eventSetEnabled_Parms), Z_Construct_UFunction_AAtomAudioVolume_SetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomAudioVolume_SetEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAtomAudioVolume_SetEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomAudioVolume_SetEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAtomAudioVolume_SetEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAtomAudioVolume_SetEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAtomAudioVolume_SetPriority_Statics
	{
		struct AtomAudioVolume_eventSetPriority_Parms
		{
			float NewPriority;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewPriority;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAtomAudioVolume_SetPriority_Statics::NewProp_NewPriority = { "NewPriority", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomAudioVolume_eventSetPriority_Parms, NewPriority), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAtomAudioVolume_SetPriority_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtomAudioVolume_SetPriority_Statics::NewProp_NewPriority,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAtomAudioVolume_SetPriority_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomAudioVolume" },
		{ "Comment", "/**\n\x09 * AtomAudioVolume\xe3\x81\xaePriority\xe3\x82\x92\xe5\x8b\x95\xe7\x9a\x84\xe3\x81\xab\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 *\n\x09 * @param NewPriority AtomAudioVolume\xe3\x81\xab\xe9\x81\xa9\xe7\x94\xa8\xe3\x81\x97\xe3\x81\x9f\xe3\x81\x84Priority\xe5\x80\xa4\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 */" },
		{ "ModuleRelativePath", "Classes/AtomAudioVolume.h" },
		{ "ToolTip", "AtomAudioVolume\xe3\x81\xaePriority\xe3\x82\x92\xe5\x8b\x95\xe7\x9a\x84\xe3\x81\xab\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\n@param NewPriority AtomAudioVolume\xe3\x81\xab\xe9\x81\xa9\xe7\x94\xa8\xe3\x81\x97\xe3\x81\x9f\xe3\x81\x84Priority\xe5\x80\xa4\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtomAudioVolume_SetPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtomAudioVolume, nullptr, "SetPriority", nullptr, nullptr, sizeof(AtomAudioVolume_eventSetPriority_Parms), Z_Construct_UFunction_AAtomAudioVolume_SetPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomAudioVolume_SetPriority_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAtomAudioVolume_SetPriority_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomAudioVolume_SetPriority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAtomAudioVolume_SetPriority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAtomAudioVolume_SetPriority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAtomAudioVolume_SetReverbSettings_Statics
	{
		struct AtomAudioVolume_eventSetReverbSettings_Parms
		{
			FSnapshotSwitchSettings NewReverbSettings;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewReverbSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewReverbSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAtomAudioVolume_SetReverbSettings_Statics::NewProp_NewReverbSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAtomAudioVolume_SetReverbSettings_Statics::NewProp_NewReverbSettings = { "NewReverbSettings", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomAudioVolume_eventSetReverbSettings_Parms, NewReverbSettings), Z_Construct_UScriptStruct_FSnapshotSwitchSettings, METADATA_PARAMS(Z_Construct_UFunction_AAtomAudioVolume_SetReverbSettings_Statics::NewProp_NewReverbSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomAudioVolume_SetReverbSettings_Statics::NewProp_NewReverbSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAtomAudioVolume_SetReverbSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtomAudioVolume_SetReverbSettings_Statics::NewProp_NewReverbSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAtomAudioVolume_SetReverbSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomAudioVolume" },
		{ "Comment", "/**\n\x09 * AtomAudioVolume\xe3\x81\xaeReverbSettings\xe3\x82\x92\xe5\x8b\x95\xe7\x9a\x84\xe3\x81\xab\xe5\xa4\x89\xe6\x9b\xb4\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * \xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88\xe3\x81\x99\xe3\x82\x8b\xe5\xbc\x95\xe6\x95\xb0\xe3\x81\xaeNewReverbSettings\xe3\x81\xaf\xe3\x82\xa2\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88\xe3\x81\xa7\xe4\xba\x8b\xe5\x89\x8d\xe3\x81\xab\xe4\xbd\x9c\xe6\x88\x90\xe3\x81\x97\xe3\x81\xa6\xe3\x81\x8a\xe3\x81\x8f\xe3\x81\x8b\xe3\x80\x81\n\x09 * BP\xe4\xb8\x8a\xe3\x81\xaa\xe3\x81\xa9\xe3\x81\xa7\xe4\xba\x8b\xe5\x89\x8d\xe3\x81\xab\xe4\xbd\x9c\xe6\x88\x90\xe3\x81\x97\xe3\x81\xa6\xe3\x81\x8a\xe3\x81\x8f\xe5\xbf\x85\xe8\xa6\x81\xe3\x81\x8c\xe3\x81\x82\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 *\n\x09 * @param NewReverbSettings \xe6\x96\xb0\xe3\x81\x97\xe3\x81\x8fReverbSettings\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 */" },
		{ "ModuleRelativePath", "Classes/AtomAudioVolume.h" },
		{ "ToolTip", "AtomAudioVolume\xe3\x81\xaeReverbSettings\xe3\x82\x92\xe5\x8b\x95\xe7\x9a\x84\xe3\x81\xab\xe5\xa4\x89\xe6\x9b\xb4\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88\xe3\x81\x99\xe3\x82\x8b\xe5\xbc\x95\xe6\x95\xb0\xe3\x81\xaeNewReverbSettings\xe3\x81\xaf\xe3\x82\xa2\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88\xe3\x81\xa7\xe4\xba\x8b\xe5\x89\x8d\xe3\x81\xab\xe4\xbd\x9c\xe6\x88\x90\xe3\x81\x97\xe3\x81\xa6\xe3\x81\x8a\xe3\x81\x8f\xe3\x81\x8b\xe3\x80\x81\nBP\xe4\xb8\x8a\xe3\x81\xaa\xe3\x81\xa9\xe3\x81\xa7\xe4\xba\x8b\xe5\x89\x8d\xe3\x81\xab\xe4\xbd\x9c\xe6\x88\x90\xe3\x81\x97\xe3\x81\xa6\xe3\x81\x8a\xe3\x81\x8f\xe5\xbf\x85\xe8\xa6\x81\xe3\x81\x8c\xe3\x81\x82\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\n@param NewReverbSettings \xe6\x96\xb0\xe3\x81\x97\xe3\x81\x8fReverbSettings\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtomAudioVolume_SetReverbSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtomAudioVolume, nullptr, "SetReverbSettings", nullptr, nullptr, sizeof(AtomAudioVolume_eventSetReverbSettings_Parms), Z_Construct_UFunction_AAtomAudioVolume_SetReverbSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomAudioVolume_SetReverbSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAtomAudioVolume_SetReverbSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomAudioVolume_SetReverbSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAtomAudioVolume_SetReverbSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAtomAudioVolume_SetReverbSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAtomAudioVolume_NoRegister()
	{
		return AAtomAudioVolume::StaticClass();
	}
	struct Z_Construct_UClass_AAtomAudioVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntranceVolumes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EntranceVolumes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EntranceVolumes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtomAudioVolumeSettingsOverrides_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AtomAudioVolumeSettingsOverrides;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtomAudioVolumeSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AtomAudioVolumeSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideAtomAudioVolume_MetaData[];
#endif
		static void NewProp_bOverrideAtomAudioVolume_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideAtomAudioVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioVolumeTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AudioVolumeTags;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AudioVolumeTags_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoSettingNeighbourAudioVolumeToEntranceVolume_MetaData[];
#endif
		static void NewProp_bAutoSettingNeighbourAudioVolumeToEntranceVolume_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoSettingNeighbourAudioVolumeToEntranceVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoSettingEntranceVolume_MetaData[];
#endif
		static void NewProp_bAutoSettingEntranceVolume_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoSettingEntranceVolume;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionProfileForDetectingEntranceVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CollisionProfileForDetectingEntranceVolume;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionProfile_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CollisionProfile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Priority;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAtomAudioVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAtomAudioVolume_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAtomAudioVolume_EnableAllAudioVolume, "EnableAllAudioVolume" }, // 3962763920
		{ &Z_Construct_UFunction_AAtomAudioVolume_GetEnabled, "GetEnabled" }, // 703597580
		{ &Z_Construct_UFunction_AAtomAudioVolume_GetPriority, "GetPriority" }, // 493672901
		{ &Z_Construct_UFunction_AAtomAudioVolume_OnRep_bEnabled, "OnRep_bEnabled" }, // 1426062810
		{ &Z_Construct_UFunction_AAtomAudioVolume_SetEnabled, "SetEnabled" }, // 2296249382
		{ &Z_Construct_UFunction_AAtomAudioVolume_SetPriority, "SetPriority" }, // 2036097773
		{ &Z_Construct_UFunction_AAtomAudioVolume_SetReverbSettings, "SetReverbSettings" }, // 2288950521
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtomAudioVolume_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Advanced Attachment Collision Volume Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "AtomAudioVolume.h" },
		{ "ModuleRelativePath", "Classes/AtomAudioVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_EntranceVolumes_MetaData[] = {
		{ "Category", "Entrance" },
		{ "Comment", "/** \xe4\xbe\xb5\xe5\x85\xa5\xe5\x8f\xa3\xe5\xba\xa7\xe6\xa8\x99. */" },
		{ "ModuleRelativePath", "Classes/AtomAudioVolume.h" },
		{ "ToolTip", "\xe4\xbe\xb5\xe5\x85\xa5\xe5\x8f\xa3\xe5\xba\xa7\xe6\xa8\x99." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_EntranceVolumes = { "EntranceVolumes", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAtomAudioVolume, EntranceVolumes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_EntranceVolumes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_EntranceVolumes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_EntranceVolumes_Inner = { "EntranceVolumes", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AAtomEntranceVolume_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_AtomAudioVolumeSettingsOverrides_MetaData[] = {
		{ "Category", "AudioVolume" },
		{ "EditCondition", "bOverrideAtomAudioVolume" },
		{ "ModuleRelativePath", "Classes/AtomAudioVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_AtomAudioVolumeSettingsOverrides = { "AtomAudioVolumeSettingsOverrides", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAtomAudioVolume, AtomAudioVolumeSettingsOverrides), Z_Construct_UScriptStruct_FAtomAudioVolumeParameters, METADATA_PARAMS(Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_AtomAudioVolumeSettingsOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_AtomAudioVolumeSettingsOverrides_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_AtomAudioVolumeSettings_MetaData[] = {
		{ "Category", "AudioVolume" },
		{ "EditCondition", "!bOverrideAtomAudioVolume" },
		{ "ModuleRelativePath", "Classes/AtomAudioVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_AtomAudioVolumeSettings = { "AtomAudioVolumeSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAtomAudioVolume, AtomAudioVolumeSettings), Z_Construct_UClass_UAtomAudioVolumeSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_AtomAudioVolumeSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_AtomAudioVolumeSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_bOverrideAtomAudioVolume_MetaData[] = {
		{ "Category", "AudioVolume" },
		{ "ModuleRelativePath", "Classes/AtomAudioVolume.h" },
	};
#endif
	void Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_bOverrideAtomAudioVolume_SetBit(void* Obj)
	{
		((AAtomAudioVolume*)Obj)->bOverrideAtomAudioVolume = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_bOverrideAtomAudioVolume = { "bOverrideAtomAudioVolume", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAtomAudioVolume), &Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_bOverrideAtomAudioVolume_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_bOverrideAtomAudioVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_bOverrideAtomAudioVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_AudioVolumeTags_MetaData[] = {
		{ "Category", "AudioVolume" },
		{ "Comment", "// achetype\n" },
		{ "ModuleRelativePath", "Classes/AtomAudioVolume.h" },
		{ "ToolTip", "achetype" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_AudioVolumeTags = { "AudioVolumeTags", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAtomAudioVolume, AudioVolumeTags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_AudioVolumeTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_AudioVolumeTags_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_AudioVolumeTags_Inner = { "AudioVolumeTags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_bAutoSettingNeighbourAudioVolumeToEntranceVolume_MetaData[] = {
		{ "Category", "Entrance" },
		{ "ModuleRelativePath", "Classes/AtomAudioVolume.h" },
	};
#endif
	void Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_bAutoSettingNeighbourAudioVolumeToEntranceVolume_SetBit(void* Obj)
	{
		((AAtomAudioVolume*)Obj)->bAutoSettingNeighbourAudioVolumeToEntranceVolume = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_bAutoSettingNeighbourAudioVolumeToEntranceVolume = { "bAutoSettingNeighbourAudioVolumeToEntranceVolume", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAtomAudioVolume), &Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_bAutoSettingNeighbourAudioVolumeToEntranceVolume_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_bAutoSettingNeighbourAudioVolumeToEntranceVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_bAutoSettingNeighbourAudioVolumeToEntranceVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_bAutoSettingEntranceVolume_MetaData[] = {
		{ "Category", "Entrance" },
		{ "ModuleRelativePath", "Classes/AtomAudioVolume.h" },
	};
#endif
	void Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_bAutoSettingEntranceVolume_SetBit(void* Obj)
	{
		((AAtomAudioVolume*)Obj)->bAutoSettingEntranceVolume = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_bAutoSettingEntranceVolume = { "bAutoSettingEntranceVolume", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAtomAudioVolume), &Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_bAutoSettingEntranceVolume_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_bAutoSettingEntranceVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_bAutoSettingEntranceVolume_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_CollisionProfileForDetectingEntranceVolume_MetaData[] = {
		{ "Category", "AudioVolume" },
		{ "ModuleRelativePath", "Classes/AtomAudioVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_CollisionProfileForDetectingEntranceVolume = { "CollisionProfileForDetectingEntranceVolume", nullptr, (EPropertyFlags)0x0040040800000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAtomAudioVolume, CollisionProfileForDetectingEntranceVolume), METADATA_PARAMS(Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_CollisionProfileForDetectingEntranceVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_CollisionProfileForDetectingEntranceVolume_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_CollisionProfile_MetaData[] = {
		{ "Category", "AudioVolume" },
		{ "ModuleRelativePath", "Classes/AtomAudioVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_CollisionProfile = { "CollisionProfile", nullptr, (EPropertyFlags)0x0040040000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAtomAudioVolume, CollisionProfile), METADATA_PARAMS(Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_CollisionProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_CollisionProfile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "AudioVolume" },
		{ "Comment", "/** whether this volume is currently enabled and able to affect sounds */" },
		{ "ModuleRelativePath", "Classes/AtomAudioVolume.h" },
		{ "ToolTip", "whether this volume is currently enabled and able to affect sounds" },
	};
#endif
	void Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((AAtomAudioVolume*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_bEnabled = { "bEnabled", "OnRep_bEnabled", (EPropertyFlags)0x0040000100000021, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AAtomAudioVolume), &Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_Priority_MetaData[] = {
		{ "Category", "AudioVolume" },
		{ "Comment", "/**\n\x09 * Priority of this volume. In the case of overlapping volumes the one with the highest priority\n\x09 * is chosen. The order is undefined if two or more overlapping volumes have the same priority.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/AtomAudioVolume.h" },
		{ "ToolTip", "Priority of this volume. In the case of overlapping volumes the one with the highest priority\nis chosen. The order is undefined if two or more overlapping volumes have the same priority." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAtomAudioVolume, Priority), METADATA_PARAMS(Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_Priority_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAtomAudioVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_EntranceVolumes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_EntranceVolumes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_AtomAudioVolumeSettingsOverrides,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_AtomAudioVolumeSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_bOverrideAtomAudioVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_AudioVolumeTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_AudioVolumeTags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_bAutoSettingNeighbourAudioVolumeToEntranceVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_bAutoSettingEntranceVolume,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_CollisionProfileForDetectingEntranceVolume,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_CollisionProfile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_bEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtomAudioVolume_Statics::NewProp_Priority,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAtomAudioVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAtomAudioVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAtomAudioVolume_Statics::ClassParams = {
		&AAtomAudioVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAtomAudioVolume_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAtomAudioVolume_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAtomAudioVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAtomAudioVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAtomAudioVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAtomAudioVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAtomAudioVolume, 4206466020);
	template<> CRIWARERUNTIME_API UClass* StaticClass<AAtomAudioVolume>()
	{
		return AAtomAudioVolume::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAtomAudioVolume(Z_Construct_UClass_AAtomAudioVolume, &AAtomAudioVolume::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("AAtomAudioVolume"), false, nullptr, nullptr, nullptr);

	void AAtomAudioVolume::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bEnabled(TEXT("bEnabled"));

		const bool bIsValid = true
			&& Name_bEnabled == ClassReps[(int32)ENetFields_Private::bEnabled].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AAtomAudioVolume"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAtomAudioVolume);
	void UAtomAudioVolumeSettings::StaticRegisterNativesUAtomAudioVolumeSettings()
	{
	}
	UClass* Z_Construct_UClass_UAtomAudioVolumeSettings_NoRegister()
	{
		return UAtomAudioVolumeSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAtomAudioVolumeSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtomAudioVolumeParameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AtomAudioVolumeParameters;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomAudioVolumeSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomAudioVolumeSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Defines how a sound changes volume with distance to the listener\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AtomAudioVolume.h" },
		{ "ModuleRelativePath", "Classes/AtomAudioVolume.h" },
		{ "ToolTip", "Defines how a sound changes volume with distance to the listener" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomAudioVolumeSettings_Statics::NewProp_AtomAudioVolumeParameters_MetaData[] = {
		{ "Category", "Settings" },
		{ "CustomizeProperty", "" },
		{ "ModuleRelativePath", "Classes/AtomAudioVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomAudioVolumeSettings_Statics::NewProp_AtomAudioVolumeParameters = { "AtomAudioVolumeParameters", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtomAudioVolumeSettings, AtomAudioVolumeParameters), Z_Construct_UScriptStruct_FAtomAudioVolumeParameters, METADATA_PARAMS(Z_Construct_UClass_UAtomAudioVolumeSettings_Statics::NewProp_AtomAudioVolumeParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomAudioVolumeSettings_Statics::NewProp_AtomAudioVolumeParameters_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomAudioVolumeSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomAudioVolumeSettings_Statics::NewProp_AtomAudioVolumeParameters,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomAudioVolumeSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomAudioVolumeSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAtomAudioVolumeSettings_Statics::ClassParams = {
		&UAtomAudioVolumeSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAtomAudioVolumeSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomAudioVolumeSettings_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomAudioVolumeSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomAudioVolumeSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomAudioVolumeSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAtomAudioVolumeSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAtomAudioVolumeSettings, 2025396707);
	template<> CRIWARERUNTIME_API UClass* StaticClass<UAtomAudioVolumeSettings>()
	{
		return UAtomAudioVolumeSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAtomAudioVolumeSettings(Z_Construct_UClass_UAtomAudioVolumeSettings, &UAtomAudioVolumeSettings::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UAtomAudioVolumeSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomAudioVolumeSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
