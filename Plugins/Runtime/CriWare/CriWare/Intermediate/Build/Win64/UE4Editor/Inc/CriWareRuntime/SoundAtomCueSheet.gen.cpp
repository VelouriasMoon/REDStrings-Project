// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Classes/SoundAtomCueSheet.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundAtomCueSheet() {}
// Cross Module References
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomFormat();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomCueInfo();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCue_NoRegister();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimespan();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomWaveInfo();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCueSheet_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCueSheet();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
// End Cross Module References
	static UEnum* EAtomFormat_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CriWareRuntime_EAtomFormat, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("EAtomFormat"));
		}
		return Singleton;
	}
	template<> CRIWARERUNTIME_API UEnum* StaticEnum<EAtomFormat>()
	{
		return EAtomFormat_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAtomFormat(EAtomFormat_StaticEnum, TEXT("/Script/CriWareRuntime"), TEXT("EAtomFormat"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CriWareRuntime_EAtomFormat_Hash() { return 2993851303U; }
	UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomFormat()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAtomFormat"), 0, Get_Z_Construct_UEnum_CriWareRuntime_EAtomFormat_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAtomFormat::None", (int64)EAtomFormat::None },
				{ "EAtomFormat::ADX", (int64)EAtomFormat::ADX },
				{ "EAtomFormat::HCA", (int64)EAtomFormat::HCA },
				{ "EAtomFormat::HCAMX", (int64)EAtomFormat::HCAMX },
				{ "EAtomFormat::AIFF", (int64)EAtomFormat::AIFF },
				{ "EAtomFormat::Wave", (int64)EAtomFormat::Wave },
				{ "EAtomFormat::RawPCM", (int64)EAtomFormat::RawPCM },
				{ "EAtomFormat::Vibration", (int64)EAtomFormat::Vibration },
				{ "EAtomFormat::AudioBuffer", (int64)EAtomFormat::AudioBuffer },
				{ "EAtomFormat::Instrument", (int64)EAtomFormat::Instrument },
				{ "EAtomFormat::Hardware1", (int64)EAtomFormat::Hardware1 },
				{ "EAtomFormat::Hardware2", (int64)EAtomFormat::Hardware2 },
				{ "EAtomFormat::Num", (int64)EAtomFormat::Num },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ADX.Comment", "/** CRI's Adaptive Differencial Extended sound. */" },
				{ "ADX.Name", "EAtomFormat::ADX" },
				{ "ADX.ToolTip", "CRI's Adaptive Differencial Extended sound." },
				{ "AIFF.Comment", "/** AIFF format sound */" },
				{ "AIFF.Name", "EAtomFormat::AIFF" },
				{ "AIFF.ToolTip", "AIFF format sound" },
				{ "AudioBuffer.Comment", "/** Audio buffer */" },
				{ "AudioBuffer.DisplayName", "Audio Buffer" },
				{ "AudioBuffer.Name", "EAtomFormat::AudioBuffer" },
				{ "AudioBuffer.ToolTip", "Audio buffer" },
				{ "BlueprintType", "true" },
				{ "Hardware1.Comment", "/** Hardware 1 sound (VAG or OPUS) */" },
				{ "Hardware1.Name", "EAtomFormat::Hardware1" },
				{ "Hardware1.ToolTip", "Hardware 1 sound (VAG or OPUS)" },
				{ "Hardware2.Comment", "/** Hardware 2 sound (ATRAC) */" },
				{ "Hardware2.Name", "EAtomFormat::Hardware2" },
				{ "Hardware2.ToolTip", "Hardware 2 sound (ATRAC)" },
				{ "HCA.Comment", "/** CRI's High Compression Audio sound*/" },
				{ "HCA.Name", "EAtomFormat::HCA" },
				{ "HCA.ToolTip", "CRI's High Compression Audio sound" },
				{ "HCAMX.Comment", "/** CRI's High Compression Audio Mix sound*/" },
				{ "HCAMX.DisplayName", "HCA-MX" },
				{ "HCAMX.Name", "EAtomFormat::HCAMX" },
				{ "HCAMX.ToolTip", "CRI's High Compression Audio Mix sound" },
				{ "Instrument.Comment", "/** Synthetizer */" },
				{ "Instrument.Name", "EAtomFormat::Instrument" },
				{ "Instrument.ToolTip", "Synthetizer" },
				{ "ModuleRelativePath", "Classes/SoundAtomCueSheet.h" },
				{ "None.Comment", "/** No Format */" },
				{ "None.Name", "EAtomFormat::None" },
				{ "None.ToolTip", "No Format" },
				{ "Num.hidden", "" },
				{ "Num.Name", "EAtomFormat::Num" },
				{ "RawPCM.Comment", "/** Raw PCM sound */" },
				{ "RawPCM.DisplayName", "Raw PCM" },
				{ "RawPCM.Name", "EAtomFormat::RawPCM" },
				{ "RawPCM.ToolTip", "Raw PCM sound" },
				{ "Vibration.Comment", "/** Haptic vibrations */" },
				{ "Vibration.Name", "EAtomFormat::Vibration" },
				{ "Vibration.ToolTip", "Haptic vibrations" },
				{ "Wave.Comment", "/** Wave format sound */" },
				{ "Wave.Name", "EAtomFormat::Wave" },
				{ "Wave.ToolTip", "Wave format sound" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime,
				nullptr,
				"EAtomFormat",
				"EAtomFormat",
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
class UScriptStruct* FAtomCueInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAtomCueInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomCueInfo, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomCueInfo"), sizeof(FAtomCueInfo), Get_Z_Construct_UScriptStruct_FAtomCueInfo_Hash());
	}
	return Singleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomCueInfo>()
{
	return FAtomCueInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtomCueInfo(FAtomCueInfo::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("AtomCueInfo"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomCueInfo
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomCueInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtomCueInfo")),new UScriptStruct::TCppStructOps<FAtomCueInfo>);
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomCueInfo;
	struct Z_Construct_UScriptStruct_FAtomCueInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundAtomCues_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SoundAtomCues;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_SoundAtomCues_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsParameterPalletAssigned_MetaData[];
#endif
		static void NewProp_bIsParameterPalletAssigned_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsParameterPalletAssigned;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[];
#endif
		static void NewProp_bLooping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLooping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttenuationDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttenuationDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AisacControlNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AisacControlNames;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AisacControlNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CategoryNames;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CategoryNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SoundAtomCueSheet.h" },
		{ "ToolTip", "AtomCueInfo structure." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomCueInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_SoundAtomCues_MetaData[] = {
		{ "Category", "Atom" },
		{ "ModuleRelativePath", "Classes/SoundAtomCueSheet.h" },
		{ "ToolTip", "A list of SoundAtomCue that link to this cue. List is empty if not referenced." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_SoundAtomCues = { "SoundAtomCues", nullptr, (EPropertyFlags)0x0014000000022015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueInfo, SoundAtomCues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_SoundAtomCues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_SoundAtomCues_MetaData)) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_SoundAtomCues_Inner = { "SoundAtomCues", nullptr, (EPropertyFlags)0x0004000000020000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_bIsParameterPalletAssigned_MetaData[] = {
		{ "Category", "Atom" },
		{ "ModuleRelativePath", "Classes/SoundAtomCueSheet.h" },
		{ "ToolTip", "Cue Pallet Parameter is assigned?" },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_bIsParameterPalletAssigned_SetBit(void* Obj)
	{
		((FAtomCueInfo*)Obj)->bIsParameterPalletAssigned = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_bIsParameterPalletAssigned = { "bIsParameterPalletAssigned", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAtomCueInfo), &Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_bIsParameterPalletAssigned_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_bIsParameterPalletAssigned_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_bIsParameterPalletAssigned_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_bLooping_MetaData[] = {
		{ "Category", "Atom" },
		{ "ModuleRelativePath", "Classes/SoundAtomCueSheet.h" },
		{ "ToolTip", "Cue is a loop?" },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_bLooping_SetBit(void* Obj)
	{
		((FAtomCueInfo*)Obj)->bLooping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAtomCueInfo), &Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_bLooping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_bLooping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_AttenuationDistance_MetaData[] = {
		{ "Category", "Atom" },
		{ "ModuleRelativePath", "Classes/SoundAtomCueSheet.h" },
		{ "ToolTip", "Cue Attenuation Distance." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_AttenuationDistance = { "AttenuationDistance", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueInfo, AttenuationDistance), Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_AttenuationDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_AttenuationDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_AisacControlNames_MetaData[] = {
		{ "Category", "Atom" },
		{ "ModuleRelativePath", "Classes/SoundAtomCueSheet.h" },
		{ "ToolTip", "Cue AISAC control names." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_AisacControlNames = { "AisacControlNames", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueInfo, AisacControlNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_AisacControlNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_AisacControlNames_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_AisacControlNames_Inner = { "AisacControlNames", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_CategoryNames_MetaData[] = {
		{ "Category", "Atom" },
		{ "ModuleRelativePath", "Classes/SoundAtomCueSheet.h" },
		{ "ToolTip", "Cue category names." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_CategoryNames = { "CategoryNames", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueInfo, CategoryNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_CategoryNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_CategoryNames_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_CategoryNames_Inner = { "CategoryNames", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_UserData_MetaData[] = {
		{ "Category", "Atom" },
		{ "ModuleRelativePath", "Classes/SoundAtomCueSheet.h" },
		{ "ToolTip", "Cue UserData." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_UserData = { "UserData", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueInfo, UserData), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_UserData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_UserData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "Atom" },
		{ "ModuleRelativePath", "Classes/SoundAtomCueSheet.h" },
		{ "ToolTip", "Cue Duration." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueInfo, Duration), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Atom" },
		{ "ModuleRelativePath", "Classes/SoundAtomCueSheet.h" },
		{ "ToolTip", "Cue Name." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueInfo, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "Atom" },
		{ "ModuleRelativePath", "Classes/SoundAtomCueSheet.h" },
		{ "ToolTip", "Cue Id." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueInfo, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_Id_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomCueInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_SoundAtomCues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_SoundAtomCues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_bIsParameterPalletAssigned,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_bLooping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_AttenuationDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_AisacControlNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_AisacControlNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_CategoryNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_CategoryNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_UserData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfo_Statics::NewProp_Id,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomCueInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"AtomCueInfo",
		sizeof(FAtomCueInfo),
		alignof(FAtomCueInfo),
		Z_Construct_UScriptStruct_FAtomCueInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomCueInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtomCueInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtomCueInfo"), sizeof(FAtomCueInfo), Get_Z_Construct_UScriptStruct_FAtomCueInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtomCueInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtomCueInfo_Hash() { return 3038077127U; }
class UScriptStruct* FAtomAttenuationDistanceParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomAttenuationDistanceParam"), sizeof(FAtomAttenuationDistanceParam), Get_Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Hash());
	}
	return Singleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomAttenuationDistanceParam>()
{
	return FAtomAttenuationDistanceParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtomAttenuationDistanceParam(FAtomAttenuationDistanceParam::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("AtomAttenuationDistanceParam"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomAttenuationDistanceParam
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomAttenuationDistanceParam()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtomAttenuationDistanceParam")),new UScriptStruct::TCppStructOps<FAtomAttenuationDistanceParam>);
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomAttenuationDistanceParam;
	struct Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SoundAtomCueSheet.h" },
		{ "ToolTip", "AtomAttenuationDistanceParam structure." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomAttenuationDistanceParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::NewProp_MaxDistance_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/SoundAtomCueSheet.h" },
		{ "ToolTip", "MaxDistance." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomAttenuationDistanceParam, MaxDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::NewProp_MaxDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::NewProp_MaxDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::NewProp_MinDistance_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/SoundAtomCueSheet.h" },
		{ "ToolTip", "MinDistance." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::NewProp_MinDistance = { "MinDistance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomAttenuationDistanceParam, MinDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::NewProp_MinDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::NewProp_MinDistance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::NewProp_MaxDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::NewProp_MinDistance,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"AtomAttenuationDistanceParam",
		sizeof(FAtomAttenuationDistanceParam),
		alignof(FAtomAttenuationDistanceParam),
		Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtomAttenuationDistanceParam"), sizeof(FAtomAttenuationDistanceParam), Get_Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Hash() { return 1568968795U; }
class UScriptStruct* FAtomWaveInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAtomWaveInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomWaveInfo, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomWaveInfo"), sizeof(FAtomWaveInfo), Get_Z_Construct_UScriptStruct_FAtomWaveInfo_Hash());
	}
	return Singleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomWaveInfo>()
{
	return FAtomWaveInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtomWaveInfo(FAtomWaveInfo::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("AtomWaveInfo"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomWaveInfo
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomWaveInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtomWaveInfo")),new UScriptStruct::TCppStructOps<FAtomWaveInfo>);
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomWaveInfo;
	struct Z_Construct_UScriptStruct_FAtomWaveInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsStreamed_MetaData[];
#endif
		static void NewProp_bIsStreamed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsStreamed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumSamples_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumSamples;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumChannels_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumChannels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SamplingRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SamplingRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Format_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Format;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Format_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SoundAtomCueSheet.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomWaveInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_bIsStreamed_MetaData[] = {
		{ "Category", "Atom" },
		{ "ModuleRelativePath", "Classes/SoundAtomCueSheet.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_bIsStreamed_SetBit(void* Obj)
	{
		((FAtomWaveInfo*)Obj)->bIsStreamed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_bIsStreamed = { "bIsStreamed", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAtomWaveInfo), &Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_bIsStreamed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_bIsStreamed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_bIsStreamed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_NumSamples_MetaData[] = {
		{ "Category", "Atom" },
		{ "ModuleRelativePath", "Classes/SoundAtomCueSheet.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_NumSamples = { "NumSamples", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomWaveInfo, NumSamples), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_NumSamples_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_NumSamples_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_NumChannels_MetaData[] = {
		{ "Category", "Atom" },
		{ "ModuleRelativePath", "Classes/SoundAtomCueSheet.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_NumChannels = { "NumChannels", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomWaveInfo, NumChannels), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_NumChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_NumChannels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_SamplingRate_MetaData[] = {
		{ "Category", "Atom" },
		{ "ModuleRelativePath", "Classes/SoundAtomCueSheet.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_SamplingRate = { "SamplingRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomWaveInfo, SamplingRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_SamplingRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_SamplingRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_Format_MetaData[] = {
		{ "Category", "Atom" },
		{ "ModuleRelativePath", "Classes/SoundAtomCueSheet.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_Format = { "Format", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomWaveInfo, Format), Z_Construct_UEnum_CriWareRuntime_EAtomFormat, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_Format_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_Format_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_Format_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_bIsStreamed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_NumSamples,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_NumChannels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_SamplingRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_Format,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_Format_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"AtomWaveInfo",
		sizeof(FAtomWaveInfo),
		alignof(FAtomWaveInfo),
		Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomWaveInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtomWaveInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtomWaveInfo"), sizeof(FAtomWaveInfo), Get_Z_Construct_UScriptStruct_FAtomWaveInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtomWaveInfo_Hash() { return 3563802632U; }
	DEFINE_FUNCTION(USoundAtomCueSheet::execBP_GetCueInfoFromId)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Id);
		P_GET_STRUCT_REF(FAtomCueInfo,Z_Param_Out_CueInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BP_GetCueInfoFromId(Z_Param_Id,Z_Param_Out_CueInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundAtomCueSheet::execBP_GetCueInfoFromName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_STRUCT_REF(FAtomCueInfo,Z_Param_Out_CueInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BP_GetCueInfoFromName(Z_Param_Name,Z_Param_Out_CueInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundAtomCueSheet::execBP_GetCueInfoFromIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT_REF(FAtomCueInfo,Z_Param_Out_CueInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BP_GetCueInfoFromIndex(Z_Param_Index,Z_Param_Out_CueInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundAtomCueSheet::execGetNumCues)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumCues();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundAtomCueSheet::execGetAtomCueByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_CueName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USoundAtomCue**)Z_Param__Result=P_THIS->GetAtomCueByName(Z_Param_CueName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundAtomCueSheet::execGetAtomCueById)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_CueId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USoundAtomCue**)Z_Param__Result=P_THIS->GetAtomCueById(Z_Param_CueId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundAtomCueSheet::execGetAtomCueByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_CueIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USoundAtomCue**)Z_Param__Result=P_THIS->GetAtomCueByIndex(Z_Param_CueIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundAtomCueSheet::execIsLoaded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLoaded();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundAtomCueSheet::execApplyDspBusSnapshot)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SnapshotName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Milliseconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		USoundAtomCueSheet::ApplyDspBusSnapshot(Z_Param_SnapshotName,Z_Param_Milliseconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundAtomCueSheet::execDetachDspBusSetting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		USoundAtomCueSheet::DetachDspBusSetting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundAtomCueSheet::execAttachDspBusSetting)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SettingName);
		P_FINISH;
		P_NATIVE_BEGIN;
		USoundAtomCueSheet::AttachDspBusSetting(Z_Param_SettingName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundAtomCueSheet::execReleaseAcb)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_AcbName);
		P_FINISH;
		P_NATIVE_BEGIN;
		USoundAtomCueSheet::ReleaseAcb(Z_Param_AcbName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundAtomCueSheet::execLoadAcb)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_AcbName);
		P_GET_UBOOL(Z_Param_bAddToLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USoundAtomCueSheet**)Z_Param__Result=USoundAtomCueSheet::LoadAcb(Z_Param_AcbName,Z_Param_bAddToLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundAtomCueSheet::execLoadAtomCueSheet)
	{
		P_GET_OBJECT(USoundAtomCueSheet,Z_Param_CueSheet);
		P_GET_UBOOL(Z_Param_bAddToLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USoundAtomCueSheet**)Z_Param__Result=USoundAtomCueSheet::LoadAtomCueSheet(Z_Param_CueSheet,Z_Param_bAddToLevel);
		P_NATIVE_END;
	}
	void USoundAtomCueSheet::StaticRegisterNativesUSoundAtomCueSheet()
	{
		UClass* Class = USoundAtomCueSheet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyDspBusSnapshot", &USoundAtomCueSheet::execApplyDspBusSnapshot },
			{ "AttachDspBusSetting", &USoundAtomCueSheet::execAttachDspBusSetting },
			{ "BP_GetCueInfoFromId", &USoundAtomCueSheet::execBP_GetCueInfoFromId },
			{ "BP_GetCueInfoFromIndex", &USoundAtomCueSheet::execBP_GetCueInfoFromIndex },
			{ "BP_GetCueInfoFromName", &USoundAtomCueSheet::execBP_GetCueInfoFromName },
			{ "DetachDspBusSetting", &USoundAtomCueSheet::execDetachDspBusSetting },
			{ "GetAtomCueById", &USoundAtomCueSheet::execGetAtomCueById },
			{ "GetAtomCueByIndex", &USoundAtomCueSheet::execGetAtomCueByIndex },
			{ "GetAtomCueByName", &USoundAtomCueSheet::execGetAtomCueByName },
			{ "GetNumCues", &USoundAtomCueSheet::execGetNumCues },
			{ "IsLoaded", &USoundAtomCueSheet::execIsLoaded },
			{ "LoadAcb", &USoundAtomCueSheet::execLoadAcb },
			{ "LoadAtomCueSheet", &USoundAtomCueSheet::execLoadAtomCueSheet },
			{ "ReleaseAcb", &USoundAtomCueSheet::execReleaseAcb },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USoundAtomCueSheet_ApplyDspBusSnapshot_Statics
	{
		struct SoundAtomCueSheet_eventApplyDspBusSnapshot_Parms
		{
			FString SnapshotName;
			int32 Milliseconds;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Milliseconds;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SnapshotName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_ApplyDspBusSnapshot_Statics::NewProp_Milliseconds = { "Milliseconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundAtomCueSheet_eventApplyDspBusSnapshot_Parms, Milliseconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_ApplyDspBusSnapshot_Statics::NewProp_SnapshotName = { "SnapshotName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundAtomCueSheet_eventApplyDspBusSnapshot_Parms, SnapshotName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCueSheet_ApplyDspBusSnapshot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_ApplyDspBusSnapshot_Statics::NewProp_Milliseconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_ApplyDspBusSnapshot_Statics::NewProp_SnapshotName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCueSheet_ApplyDspBusSnapshot_Statics::Function_MetaDataParams[] = {
		{ "Category", "CRIWARE" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use ApplyDspBusSnapshot for AtomAsrRack instead." },
		{ "ModuleRelativePath", "Classes/SoundAtomCueSheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCueSheet_ApplyDspBusSnapshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCueSheet, nullptr, "ApplyDspBusSnapshot", nullptr, nullptr, sizeof(SoundAtomCueSheet_eventApplyDspBusSnapshot_Parms), Z_Construct_UFunction_USoundAtomCueSheet_ApplyDspBusSnapshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_ApplyDspBusSnapshot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCueSheet_ApplyDspBusSnapshot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_ApplyDspBusSnapshot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundAtomCueSheet_ApplyDspBusSnapshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoundAtomCueSheet_ApplyDspBusSnapshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundAtomCueSheet_AttachDspBusSetting_Statics
	{
		struct SoundAtomCueSheet_eventAttachDspBusSetting_Parms
		{
			FString SettingName;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SettingName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_AttachDspBusSetting_Statics::NewProp_SettingName = { "SettingName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundAtomCueSheet_eventAttachDspBusSetting_Parms, SettingName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCueSheet_AttachDspBusSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_AttachDspBusSetting_Statics::NewProp_SettingName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCueSheet_AttachDspBusSetting_Statics::Function_MetaDataParams[] = {
		{ "Category", "CRIWARE" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use AttachDspBusSetting form AtomAsrRack instead." },
		{ "ModuleRelativePath", "Classes/SoundAtomCueSheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCueSheet_AttachDspBusSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCueSheet, nullptr, "AttachDspBusSetting", nullptr, nullptr, sizeof(SoundAtomCueSheet_eventAttachDspBusSetting_Parms), Z_Construct_UFunction_USoundAtomCueSheet_AttachDspBusSetting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_AttachDspBusSetting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCueSheet_AttachDspBusSetting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_AttachDspBusSetting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundAtomCueSheet_AttachDspBusSetting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoundAtomCueSheet_AttachDspBusSetting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromId_Statics
	{
		struct SoundAtomCueSheet_eventBP_GetCueInfoFromId_Parms
		{
			int32 Id;
			FAtomCueInfo CueInfo;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CueInfo;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromId_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SoundAtomCueSheet_eventBP_GetCueInfoFromId_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SoundAtomCueSheet_eventBP_GetCueInfoFromId_Parms), &Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromId_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromId_Statics::NewProp_CueInfo = { "CueInfo", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundAtomCueSheet_eventBP_GetCueInfoFromId_Parms, CueInfo), Z_Construct_UScriptStruct_FAtomCueInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromId_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundAtomCueSheet_eventBP_GetCueInfoFromId_Parms, Id), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromId_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromId_Statics::NewProp_CueInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromId_Statics::NewProp_Id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom Cue Sheet" },
		{ "Comment", "/** Gets cue information from cue ID. */" },
		{ "DisplayName", "Get Cue Info From Id" },
		{ "ModuleRelativePath", "Classes/SoundAtomCueSheet.h" },
		{ "ScriptName", "GetCueInfoFromId" },
		{ "ToolTip", "Gets cue information from cue ID." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCueSheet, nullptr, "BP_GetCueInfoFromId", nullptr, nullptr, sizeof(SoundAtomCueSheet_eventBP_GetCueInfoFromId_Parms), Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromIndex_Statics
	{
		struct SoundAtomCueSheet_eventBP_GetCueInfoFromIndex_Parms
		{
			int32 Index;
			FAtomCueInfo CueInfo;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CueInfo;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SoundAtomCueSheet_eventBP_GetCueInfoFromIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SoundAtomCueSheet_eventBP_GetCueInfoFromIndex_Parms), &Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromIndex_Statics::NewProp_CueInfo = { "CueInfo", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundAtomCueSheet_eventBP_GetCueInfoFromIndex_Parms, CueInfo), Z_Construct_UScriptStruct_FAtomCueInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundAtomCueSheet_eventBP_GetCueInfoFromIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromIndex_Statics::NewProp_CueInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromIndex_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom Cue Sheet" },
		{ "Comment", "/** Gets cue information from cue index. */" },
		{ "DisplayName", "Get Cue Info From Index" },
		{ "ModuleRelativePath", "Classes/SoundAtomCueSheet.h" },
		{ "ScriptName", "GetCueInfoFromIndex" },
		{ "ToolTip", "Gets cue information from cue index." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCueSheet, nullptr, "BP_GetCueInfoFromIndex", nullptr, nullptr, sizeof(SoundAtomCueSheet_eventBP_GetCueInfoFromIndex_Parms), Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName_Statics
	{
		struct SoundAtomCueSheet_eventBP_GetCueInfoFromName_Parms
		{
			FString Name;
			FAtomCueInfo CueInfo;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CueInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SoundAtomCueSheet_eventBP_GetCueInfoFromName_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SoundAtomCueSheet_eventBP_GetCueInfoFromName_Parms), &Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName_Statics::NewProp_CueInfo = { "CueInfo", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundAtomCueSheet_eventBP_GetCueInfoFromName_Parms, CueInfo), Z_Construct_UScriptStruct_FAtomCueInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundAtomCueSheet_eventBP_GetCueInfoFromName_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName_Statics::NewProp_CueInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom Cue Sheet" },
		{ "Comment", "/** Gets cue information from cue name.*/" },
		{ "DisplayName", "Get Cue Info From Name" },
		{ "ModuleRelativePath", "Classes/SoundAtomCueSheet.h" },
		{ "ScriptName", "GetCueInfoFromName" },
		{ "ToolTip", "Gets cue information from cue name." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCueSheet, nullptr, "BP_GetCueInfoFromName", nullptr, nullptr, sizeof(SoundAtomCueSheet_eventBP_GetCueInfoFromName_Parms), Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundAtomCueSheet_DetachDspBusSetting_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCueSheet_DetachDspBusSetting_Statics::Function_MetaDataParams[] = {
		{ "Category", "CRIWARE" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use DetachDspBusSetting form AtomAsrRack instead." },
		{ "ModuleRelativePath", "Classes/SoundAtomCueSheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCueSheet_DetachDspBusSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCueSheet, nullptr, "DetachDspBusSetting", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCueSheet_DetachDspBusSetting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_DetachDspBusSetting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundAtomCueSheet_DetachDspBusSetting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoundAtomCueSheet_DetachDspBusSetting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueById_Statics
	{
		struct SoundAtomCueSheet_eventGetAtomCueById_Parms
		{
			int32 CueId;
			USoundAtomCue* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CueId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueById_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundAtomCueSheet_eventGetAtomCueById_Parms, ReturnValue), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueById_Statics::NewProp_CueId = { "CueId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundAtomCueSheet_eventGetAtomCueById_Parms, CueId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueById_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueById_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueById_Statics::NewProp_CueId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueById_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom Cue Sheet" },
		{ "Comment", "/**\n\x09* \xe3\x83\xad\xe3\x83\xbc\xe3\x83\x89\xe6\xb8\x88\xe3\x81\xbf\xe3\x81\xae ACB \xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf\xe3\x81\xab\xe5\xaf\xbe\xe3\x81\x97\xe3\x80\x81\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbcID\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xa6 Atom Cue \xe3\x82\xaa\xe3\x83\x96\xe3\x82\xb8\xe3\x82\xa7\xe3\x82\xaf\xe3\x83\x88\xe3\x81\xb8\xe3\x81\xae\xe5\x8f\x82\xe7\x85\xa7\xe3\x82\x92\xe5\x8f\x96\xe5\xbe\x97\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*\n\x09* @param CueId \xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbcID\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* @return USoundAtomCue \xe3\x82\xaa\xe3\x83\x96\xe3\x82\xb8\xe3\x82\xa7\xe3\x82\xaf\xe3\x83\x88\xe3\x81\xb8\xe3\x81\xae\xe5\x8f\x82\xe7\x85\xa7\xe3\x82\x92\xe8\xbf\x94\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82 ACB \xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf\xe3\x81\x8c\xe3\x83\xad\xe3\x83\xbc\xe3\x83\x89\xe6\xb8\x88\xe3\x81\xbf\xe3\x81\xa7\xe7\x84\xa1\xe3\x81\x84\xe5\xa0\xb4\xe5\x90\x88\xe3\x82\x84\xe3\x80\x81\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x81\x8c  ACB \xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf \xe5\x86\x85\xe3\x81\xab\xe5\xad\x98\xe5\x9c\xa8\xe3\x81\x97\xe3\x81\xaa\xe3\x81\x84\xe5\xa0\xb4\xe5\x90\x88\xe3\x81\xaf nullptr \xe3\x82\x92\xe8\xbf\x94\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Classes/SoundAtomCueSheet.h" },
		{ "ToolTip", "\xe3\x83\xad\xe3\x83\xbc\xe3\x83\x89\xe6\xb8\x88\xe3\x81\xbf\xe3\x81\xae ACB \xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf\xe3\x81\xab\xe5\xaf\xbe\xe3\x81\x97\xe3\x80\x81\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbcID\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xa6 Atom Cue \xe3\x82\xaa\xe3\x83\x96\xe3\x82\xb8\xe3\x82\xa7\xe3\x82\xaf\xe3\x83\x88\xe3\x81\xb8\xe3\x81\xae\xe5\x8f\x82\xe7\x85\xa7\xe3\x82\x92\xe5\x8f\x96\xe5\xbe\x97\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\n@param CueId \xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbcID\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@return USoundAtomCue \xe3\x82\xaa\xe3\x83\x96\xe3\x82\xb8\xe3\x82\xa7\xe3\x82\xaf\xe3\x83\x88\xe3\x81\xb8\xe3\x81\xae\xe5\x8f\x82\xe7\x85\xa7\xe3\x82\x92\xe8\xbf\x94\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82 ACB \xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf\xe3\x81\x8c\xe3\x83\xad\xe3\x83\xbc\xe3\x83\x89\xe6\xb8\x88\xe3\x81\xbf\xe3\x81\xa7\xe7\x84\xa1\xe3\x81\x84\xe5\xa0\xb4\xe5\x90\x88\xe3\x82\x84\xe3\x80\x81\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x81\x8c  ACB \xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf \xe5\x86\x85\xe3\x81\xab\xe5\xad\x98\xe5\x9c\xa8\xe3\x81\x97\xe3\x81\xaa\xe3\x81\x84\xe5\xa0\xb4\xe5\x90\x88\xe3\x81\xaf nullptr \xe3\x82\x92\xe8\xbf\x94\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueById_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCueSheet, nullptr, "GetAtomCueById", nullptr, nullptr, sizeof(SoundAtomCueSheet_eventGetAtomCueById_Parms), Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueById_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueById_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueById_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueById_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueById()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueById_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByIndex_Statics
	{
		struct SoundAtomCueSheet_eventGetAtomCueByIndex_Parms
		{
			int32 CueIndex;
			USoundAtomCue* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CueIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundAtomCueSheet_eventGetAtomCueByIndex_Parms, ReturnValue), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByIndex_Statics::NewProp_CueIndex = { "CueIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundAtomCueSheet_eventGetAtomCueByIndex_Parms, CueIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByIndex_Statics::NewProp_CueIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom Cue Sheet" },
		{ "Comment", "/**\n\x09* \xe3\x83\xad\xe3\x83\xbc\xe3\x83\x89\xe6\xb8\x88\xe3\x81\xbf\xe3\x81\xae ACB \xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf\xe3\x81\xab\xe5\xaf\xbe\xe3\x81\x97\xe3\x80\x81\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\xa4\xe3\x83\xb3\xe3\x83\x87\xe3\x83\x83\xe3\x82\xaf\xe3\x82\xb9\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xa6""Atom Cue \xe3\x82\xaa\xe3\x83\x96\xe3\x82\xb8\xe3\x82\xa7\xe3\x82\xaf\xe3\x83\x88\xe3\x81\xb8\xe3\x81\xae\xe5\x8f\x82\xe7\x85\xa7\xe3\x82\x92\xe5\x8f\x96\xe5\xbe\x97\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*\n\x09* @param CueIndex \xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x81\xae\xe3\x82\xa4\xe3\x83\xb3\xe3\x83\x87\xe3\x83\x83\xe3\x82\xaf\xe3\x82\xb9\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* @return USoundAtomCue \xe3\x82\xaa\xe3\x83\x96\xe3\x82\xb8\xe3\x82\xa7\xe3\x82\xaf\xe3\x83\x88\xe3\x81\xb8\xe3\x81\xae\xe5\x8f\x82\xe7\x85\xa7\xe3\x82\x92\xe8\xbf\x94\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82 ACB \xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf\xe3\x81\x8c\xe3\x83\xad\xe3\x83\xbc\xe3\x83\x89\xe6\xb8\x88\xe3\x81\xbf\xe3\x81\xa7\xe7\x84\xa1\xe3\x81\x84\xe5\xa0\xb4\xe5\x90\x88\xe3\x82\x84\xe3\x80\x81\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x81\x8c  ACB \xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf \xe5\x86\x85\xe3\x81\xab\xe5\xad\x98\xe5\x9c\xa8\xe3\x81\x97\xe3\x81\xaa\xe3\x81\x84\xe5\xa0\xb4\xe5\x90\x88\xe3\x81\xaf nullptr \xe3\x82\x92\xe8\xbf\x94\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Classes/SoundAtomCueSheet.h" },
		{ "ToolTip", "\xe3\x83\xad\xe3\x83\xbc\xe3\x83\x89\xe6\xb8\x88\xe3\x81\xbf\xe3\x81\xae ACB \xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf\xe3\x81\xab\xe5\xaf\xbe\xe3\x81\x97\xe3\x80\x81\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\xa4\xe3\x83\xb3\xe3\x83\x87\xe3\x83\x83\xe3\x82\xaf\xe3\x82\xb9\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xa6""Atom Cue \xe3\x82\xaa\xe3\x83\x96\xe3\x82\xb8\xe3\x82\xa7\xe3\x82\xaf\xe3\x83\x88\xe3\x81\xb8\xe3\x81\xae\xe5\x8f\x82\xe7\x85\xa7\xe3\x82\x92\xe5\x8f\x96\xe5\xbe\x97\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\n@param CueIndex \xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x81\xae\xe3\x82\xa4\xe3\x83\xb3\xe3\x83\x87\xe3\x83\x83\xe3\x82\xaf\xe3\x82\xb9\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@return USoundAtomCue \xe3\x82\xaa\xe3\x83\x96\xe3\x82\xb8\xe3\x82\xa7\xe3\x82\xaf\xe3\x83\x88\xe3\x81\xb8\xe3\x81\xae\xe5\x8f\x82\xe7\x85\xa7\xe3\x82\x92\xe8\xbf\x94\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82 ACB \xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf\xe3\x81\x8c\xe3\x83\xad\xe3\x83\xbc\xe3\x83\x89\xe6\xb8\x88\xe3\x81\xbf\xe3\x81\xa7\xe7\x84\xa1\xe3\x81\x84\xe5\xa0\xb4\xe5\x90\x88\xe3\x82\x84\xe3\x80\x81\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x81\x8c  ACB \xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf \xe5\x86\x85\xe3\x81\xab\xe5\xad\x98\xe5\x9c\xa8\xe3\x81\x97\xe3\x81\xaa\xe3\x81\x84\xe5\xa0\xb4\xe5\x90\x88\xe3\x81\xaf nullptr \xe3\x82\x92\xe8\xbf\x94\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCueSheet, nullptr, "GetAtomCueByIndex", nullptr, nullptr, sizeof(SoundAtomCueSheet_eventGetAtomCueByIndex_Parms), Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByName_Statics
	{
		struct SoundAtomCueSheet_eventGetAtomCueByName_Parms
		{
			FString CueName;
			USoundAtomCue* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CueName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundAtomCueSheet_eventGetAtomCueByName_Parms, ReturnValue), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByName_Statics::NewProp_CueName = { "CueName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundAtomCueSheet_eventGetAtomCueByName_Parms, CueName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByName_Statics::NewProp_CueName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom Cue Sheet" },
		{ "Comment", "/**\n\x09* \xe3\x83\xad\xe3\x83\xbc\xe3\x83\x89\xe6\xb8\x88\xe3\x81\xbf\xe3\x81\xae ACB \xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf\xe3\x81\xab\xe5\xaf\xbe\xe3\x81\x97\xe3\x80\x81\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe5\x90\x8d\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xa6 Atom Cue \xe3\x82\xaa\xe3\x83\x96\xe3\x82\xb8\xe3\x82\xa7\xe3\x82\xaf\xe3\x83\x88\xe3\x81\xb8\xe3\x81\xae\xe5\x8f\x82\xe7\x85\xa7\xe3\x82\x92\xe5\x8f\x96\xe5\xbe\x97\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*\n\x09* @param CueName \xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe5\x90\x8d\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* @return USoundAtomCue \xe3\x82\xaa\xe3\x83\x96\xe3\x82\xb8\xe3\x82\xa7\xe3\x82\xaf\xe3\x83\x88\xe3\x81\xb8\xe3\x81\xae\xe5\x8f\x82\xe7\x85\xa7\xe3\x82\x92\xe8\xbf\x94\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82 ACB \xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf\xe3\x81\x8c\xe3\x83\xad\xe3\x83\xbc\xe3\x83\x89\xe6\xb8\x88\xe3\x81\xbf\xe3\x81\xa7\xe7\x84\xa1\xe3\x81\x84\xe5\xa0\xb4\xe5\x90\x88\xe3\x82\x84\xe3\x80\x81\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x81\x8c  ACB \xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf \xe5\x86\x85\xe3\x81\xab\xe5\xad\x98\xe5\x9c\xa8\xe3\x81\x97\xe3\x81\xaa\xe3\x81\x84\xe5\xa0\xb4\xe5\x90\x88\xe3\x81\xaf nullptr \xe3\x82\x92\xe8\xbf\x94\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Classes/SoundAtomCueSheet.h" },
		{ "ToolTip", "\xe3\x83\xad\xe3\x83\xbc\xe3\x83\x89\xe6\xb8\x88\xe3\x81\xbf\xe3\x81\xae ACB \xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf\xe3\x81\xab\xe5\xaf\xbe\xe3\x81\x97\xe3\x80\x81\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe5\x90\x8d\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xa6 Atom Cue \xe3\x82\xaa\xe3\x83\x96\xe3\x82\xb8\xe3\x82\xa7\xe3\x82\xaf\xe3\x83\x88\xe3\x81\xb8\xe3\x81\xae\xe5\x8f\x82\xe7\x85\xa7\xe3\x82\x92\xe5\x8f\x96\xe5\xbe\x97\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\n@param CueName \xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe5\x90\x8d\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@return USoundAtomCue \xe3\x82\xaa\xe3\x83\x96\xe3\x82\xb8\xe3\x82\xa7\xe3\x82\xaf\xe3\x83\x88\xe3\x81\xb8\xe3\x81\xae\xe5\x8f\x82\xe7\x85\xa7\xe3\x82\x92\xe8\xbf\x94\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82 ACB \xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf\xe3\x81\x8c\xe3\x83\xad\xe3\x83\xbc\xe3\x83\x89\xe6\xb8\x88\xe3\x81\xbf\xe3\x81\xa7\xe7\x84\xa1\xe3\x81\x84\xe5\xa0\xb4\xe5\x90\x88\xe3\x82\x84\xe3\x80\x81\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x81\x8c  ACB \xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf \xe5\x86\x85\xe3\x81\xab\xe5\xad\x98\xe5\x9c\xa8\xe3\x81\x97\xe3\x81\xaa\xe3\x81\x84\xe5\xa0\xb4\xe5\x90\x88\xe3\x81\xaf nullptr \xe3\x82\x92\xe8\xbf\x94\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCueSheet, nullptr, "GetAtomCueByName", nullptr, nullptr, sizeof(SoundAtomCueSheet_eventGetAtomCueByName_Parms), Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundAtomCueSheet_GetNumCues_Statics
	{
		struct SoundAtomCueSheet_eventGetNumCues_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_GetNumCues_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundAtomCueSheet_eventGetNumCues_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCueSheet_GetNumCues_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_GetNumCues_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCueSheet_GetNumCues_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom Cue Sheet" },
		{ "Comment", "/** Gets number of cue referenced by this cue sheet. */" },
		{ "ModuleRelativePath", "Classes/SoundAtomCueSheet.h" },
		{ "ToolTip", "Gets number of cue referenced by this cue sheet." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCueSheet_GetNumCues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCueSheet, nullptr, "GetNumCues", nullptr, nullptr, sizeof(SoundAtomCueSheet_eventGetNumCues_Parms), Z_Construct_UFunction_USoundAtomCueSheet_GetNumCues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_GetNumCues_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCueSheet_GetNumCues_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_GetNumCues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundAtomCueSheet_GetNumCues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoundAtomCueSheet_GetNumCues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundAtomCueSheet_IsLoaded_Statics
	{
		struct SoundAtomCueSheet_eventIsLoaded_Parms
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
	void Z_Construct_UFunction_USoundAtomCueSheet_IsLoaded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SoundAtomCueSheet_eventIsLoaded_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_IsLoaded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SoundAtomCueSheet_eventIsLoaded_Parms), &Z_Construct_UFunction_USoundAtomCueSheet_IsLoaded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCueSheet_IsLoaded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_IsLoaded_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCueSheet_IsLoaded_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom Cue Sheet" },
		{ "Comment", "/**\n\x09* Atom Cue Sheet \xe3\x82\xa2\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88\xe5\x86\x85\xe3\x81\xae ACB \xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf\xe3\x81\x8c\xe3\x83\xad\xe3\x83\xbc\xe3\x83\x89\xe6\xb8\x88\xe3\x81\xbf\xe3\x81\x8b\xe3\x81\xa9\xe3\x81\x86\xe3\x81\x8b\xe3\x82\x92\xe3\x83\x81\xe3\x82\xa7\xe3\x83\x83\xe3\x82\xaf\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* \xe6\xb3\xa8\xe6\x84\x8f: UE4 \xe3\x81\xab\xe3\x82\x88\xe3\x82\x8b \xe3\x82\xa2\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88\xe3\x83\xad\xe3\x83\xbc\xe3\x83\x89\xe5\x87\xa6\xe7\x90\x86\xe3\x81\xab\xe3\x82\x88\xe3\x81\xa3\xe3\x81\xa6 Atom Cue Sheet \xe3\x82\xa2\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88\xe8\x87\xaa\xe4\xbd\x93\xe3\x81\x8c\xe3\x83\xa1\xe3\x83\xa2\xe3\x83\xaa\xe4\xb8\x8a\xe3\x81\xab\xe9\x85\x8d\xe7\xbd\xae\xe3\x81\x95\xe3\x82\x8c\xe3\x81\x9f\xe5\xa0\xb4\xe5\x90\x88\xe3\x81\xa7\xe3\x81\x82\xe3\x81\xa3\xe3\x81\xa6\xe3\x82\x82\xe3\x80\x81\n\x09* Atom Cue Sheet \xe3\x82\xa2\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88\xe5\x86\x85\xe3\x81\xae ACB \xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf\xe3\x81\xaf\xe3\x83\xad\xe3\x83\xbc\xe3\x83\x89\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xa6\xe3\x81\x84\xe3\x81\xbe\xe3\x81\x9b\xe3\x82\x93\xe3\x80\x82\n\x09* ACB \xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf\xe3\x82\x92\xe3\x83\xad\xe3\x83\xbc\xe3\x83\x89\xe3\x81\x97\xe3\x81\xa6\xe4\xbd\xbf\xe7\x94\xa8\xe5\x8f\xaf\xe8\x83\xbd\xe3\x81\xaa\xe7\x8a\xb6\xe6\x85\x8b\xe3\x81\xab\xe3\x81\x99\xe3\x82\x8b\xe3\x81\xab\xe3\x81\xaf\xe3\x80\x81USoundAtomCueSheet::LoadAtomCueSheet \xe9\x96\xa2\xe6\x95\xb0\xe3\x82\x92\xe5\x91\xbc\xe3\x81\xb3\xe5\x87\xba\xe3\x81\x97\xe3\x81\xa6\xe3\x83\xad\xe3\x83\xbc\xe3\x83\x89\xe5\xae\x8c\xe4\xba\x86\xe3\x82\x92\xe5\xbe\x85\xe3\x81\xa3\xe3\x81\xa6\xe3\x81\x8f\xe3\x81\xa0\xe3\x81\x95\xe3\x81\x84\xe3\x80\x82\n\x09*\n\x09* @return true \xe3\x81\xae\xe5\xa0\xb4\xe5\x90\x88\xe3\x80\x81 ACB \xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf\xe3\x81\xaf\xe6\x97\xa2\xe3\x81\xab\xe3\x83\xad\xe3\x83\xbc\xe3\x83\x89\xe6\xb8\x88\xe3\x81\xbf\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82""false \xe3\x81\xae\xe5\xa0\xb4\xe5\x90\x88\xe3\x80\x81 ACB \xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf\xe3\x81\xaf\xe3\x81\xbe\xe3\x81\xa0\xe3\x83\xad\xe3\x83\xbc\xe3\x83\x89\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xa6\xe3\x81\x84\xe3\x81\xbe\xe3\x81\x9b\xe3\x82\x93\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Classes/SoundAtomCueSheet.h" },
		{ "ToolTip", "Atom Cue Sheet \xe3\x82\xa2\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88\xe5\x86\x85\xe3\x81\xae ACB \xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf\xe3\x81\x8c\xe3\x83\xad\xe3\x83\xbc\xe3\x83\x89\xe6\xb8\x88\xe3\x81\xbf\xe3\x81\x8b\xe3\x81\xa9\xe3\x81\x86\xe3\x81\x8b\xe3\x82\x92\xe3\x83\x81\xe3\x82\xa7\xe3\x83\x83\xe3\x82\xaf\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\xe6\xb3\xa8\xe6\x84\x8f: UE4 \xe3\x81\xab\xe3\x82\x88\xe3\x82\x8b \xe3\x82\xa2\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88\xe3\x83\xad\xe3\x83\xbc\xe3\x83\x89\xe5\x87\xa6\xe7\x90\x86\xe3\x81\xab\xe3\x82\x88\xe3\x81\xa3\xe3\x81\xa6 Atom Cue Sheet \xe3\x82\xa2\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88\xe8\x87\xaa\xe4\xbd\x93\xe3\x81\x8c\xe3\x83\xa1\xe3\x83\xa2\xe3\x83\xaa\xe4\xb8\x8a\xe3\x81\xab\xe9\x85\x8d\xe7\xbd\xae\xe3\x81\x95\xe3\x82\x8c\xe3\x81\x9f\xe5\xa0\xb4\xe5\x90\x88\xe3\x81\xa7\xe3\x81\x82\xe3\x81\xa3\xe3\x81\xa6\xe3\x82\x82\xe3\x80\x81\nAtom Cue Sheet \xe3\x82\xa2\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88\xe5\x86\x85\xe3\x81\xae ACB \xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf\xe3\x81\xaf\xe3\x83\xad\xe3\x83\xbc\xe3\x83\x89\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xa6\xe3\x81\x84\xe3\x81\xbe\xe3\x81\x9b\xe3\x82\x93\xe3\x80\x82\nACB \xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf\xe3\x82\x92\xe3\x83\xad\xe3\x83\xbc\xe3\x83\x89\xe3\x81\x97\xe3\x81\xa6\xe4\xbd\xbf\xe7\x94\xa8\xe5\x8f\xaf\xe8\x83\xbd\xe3\x81\xaa\xe7\x8a\xb6\xe6\x85\x8b\xe3\x81\xab\xe3\x81\x99\xe3\x82\x8b\xe3\x81\xab\xe3\x81\xaf\xe3\x80\x81USoundAtomCueSheet::LoadAtomCueSheet \xe9\x96\xa2\xe6\x95\xb0\xe3\x82\x92\xe5\x91\xbc\xe3\x81\xb3\xe5\x87\xba\xe3\x81\x97\xe3\x81\xa6\xe3\x83\xad\xe3\x83\xbc\xe3\x83\x89\xe5\xae\x8c\xe4\xba\x86\xe3\x82\x92\xe5\xbe\x85\xe3\x81\xa3\xe3\x81\xa6\xe3\x81\x8f\xe3\x81\xa0\xe3\x81\x95\xe3\x81\x84\xe3\x80\x82\n\n@return true \xe3\x81\xae\xe5\xa0\xb4\xe5\x90\x88\xe3\x80\x81 ACB \xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf\xe3\x81\xaf\xe6\x97\xa2\xe3\x81\xab\xe3\x83\xad\xe3\x83\xbc\xe3\x83\x89\xe6\xb8\x88\xe3\x81\xbf\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82""false \xe3\x81\xae\xe5\xa0\xb4\xe5\x90\x88\xe3\x80\x81 ACB \xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf\xe3\x81\xaf\xe3\x81\xbe\xe3\x81\xa0\xe3\x83\xad\xe3\x83\xbc\xe3\x83\x89\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xa6\xe3\x81\x84\xe3\x81\xbe\xe3\x81\x9b\xe3\x82\x93\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCueSheet_IsLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCueSheet, nullptr, "IsLoaded", nullptr, nullptr, sizeof(SoundAtomCueSheet_eventIsLoaded_Parms), Z_Construct_UFunction_USoundAtomCueSheet_IsLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_IsLoaded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCueSheet_IsLoaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_IsLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundAtomCueSheet_IsLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoundAtomCueSheet_IsLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb_Statics
	{
		struct SoundAtomCueSheet_eventLoadAcb_Parms
		{
			FName AcbName;
			bool bAddToLevel;
			USoundAtomCueSheet* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_bAddToLevel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAddToLevel;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AcbName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundAtomCueSheet_eventLoadAcb_Parms, ReturnValue), Z_Construct_UClass_USoundAtomCueSheet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb_Statics::NewProp_bAddToLevel_SetBit(void* Obj)
	{
		((SoundAtomCueSheet_eventLoadAcb_Parms*)Obj)->bAddToLevel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb_Statics::NewProp_bAddToLevel = { "bAddToLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SoundAtomCueSheet_eventLoadAcb_Parms), &Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb_Statics::NewProp_bAddToLevel_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb_Statics::NewProp_AcbName = { "AcbName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundAtomCueSheet_eventLoadAcb_Parms, AcbName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb_Statics::NewProp_bAddToLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb_Statics::NewProp_AcbName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb_Statics::Function_MetaDataParams[] = {
		{ "Category", "CRIWARE" },
		{ "Comment", "/**\n\x09* Atom Cue Sheet \xe3\x82\xa2\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88\xe3\x81\xae\xe5\x90\x8d\xe5\x89\x8d (\xe3\x83\x91\xe3\x82\xb9) \xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xa6  ACB \xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf\xe3\x82\x92\xe3\x83\xad\xe3\x83\xbc\xe3\x83\x89\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99 (Atom Cue Sheet \xe3\x82\xaa\xe3\x83\x96\xe3\x82\xb8\xe3\x82\xa7\xe3\x82\xaf\xe3\x83\x88\xe3\x82\x92\xe6\x9c\x89\xe5\x8a\xb9\xe5\x8c\x96\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99)\xe3\x80\x82\n\x09* \n\x09* \xe5\x9f\xba\xe6\x9c\xac\xe7\x9a\x84\xe3\x81\xab\xe3\x81\xaf\xe3\x80\x81USoundAtomCueSheet::LoadAtomCueSheet() \xe9\x96\xa2\xe6\x95\xb0\xe3\x81\xa8\xe5\x90\x8c\xe6\xa7\x98\xe3\x81\xae\xe9\x9d\x9e\xe5\x90\x8c\xe6\x9c\x9f\xe5\x87\xa6\xe7\x90\x86\xe3\x82\x92\xe8\xa1\x8c\xe3\x81\x84\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* \xe8\xa9\xb3\xe7\xb4\xb0\xe3\x81\xaf USoundAtomCueSheet::LoadAtomCueSheet() \xe9\x96\xa2\xe6\x95\xb0\xe3\x81\xae\xe8\xaa\xac\xe6\x98\x8e\xe3\x82\x92\xe5\x8f\x82\xe7\x85\xa7\xe3\x81\x97\xe3\x81\xa6\xe3\x81\x8f\xe3\x81\xa0\xe3\x81\x95\xe3\x81\x84\xe3\x80\x82\n\x09*\n\x09* \xe6\xb3\xa8\xe6\x84\x8f:\n\x09* Atom Cue Sheet \xe3\x82\xa2\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88\xe3\x81\x8c\xe3\x83\xa1\xe3\x83\xa2\xe3\x83\xaa\xe4\xb8\x8a\xe3\x81\xab\xe9\x85\x8d\xe7\xbd\xae\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xa6\xe3\x81\x84\xe3\x81\xaa\xe3\x81\x84\xe5\xa0\xb4\xe5\x90\x88\xe3\x80\x81\xe3\x82\xa2\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88\xe3\x83\x95\xe3\x82\xa1\xe3\x82\xa4\xe3\x83\xab\xe3\x81\xae\xe6\xa4\x9c\xe7\xb4\xa2\xe3\x81\xa8\xe8\xaa\xad\xe3\x81\xbf\xe8\xbe\xbc\xe3\x81\xbf\xe3\x82\x92\xe8\xa1\x8c\xe3\x81\x84\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* \xe3\x81\x93\xe3\x81\xae\xe5\x87\xa6\xe7\x90\x86\xe3\x81\xaf\xe9\xab\x98\xe3\x81\x84\xe8\xb2\xa0\xe8\x8d\xb7\xe3\x82\x92\xe7\x94\x9f\xe3\x81\x98\xe3\x82\x8b\xe5\x8f\xaf\xe8\x83\xbd\xe6\x80\xa7\xe3\x81\x8c\xe3\x81\x82\xe3\x82\x8a\xe3\x80\x81\xe3\x81\xbe\xe3\x81\x9f\xe3\x83\x95\xe3\x82\xa1\xe3\x82\xa4\xe3\x83\xab I/O \xe3\x82\x92\xe4\xbc\xb4\xe3\x81\x84\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* \xe3\x82\xa2\xe3\x83\x97\xe3\x83\xaa\xe3\x82\xb1\xe3\x83\xbc\xe3\x82\xb7\xe3\x83\xa7\xe3\x83\xb3\xe3\x82\x84\xe3\x82\xb7\xe3\x82\xb9\xe3\x83\x86\xe3\x83\xa0\xe3\x81\xae\xe5\x8b\x95\xe4\xbd\x9c\xe7\x8a\xb6\xe6\xb3\x81\xe3\x81\xab\xe3\x82\x88\xe3\x81\xa3\xe3\x81\xa6\xe3\x81\xaf\xe3\x80\x81\xe3\x83\x92\xe3\x83\x83\xe3\x83\x81\xe3\x82\x92\xe5\xbc\x95\xe3\x81\x8d\xe8\xb5\xb7\xe3\x81\x93\xe3\x81\x99\xe6\x81\x90\xe3\x82\x8c\xe3\x81\x8c\xe3\x81\x82\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* \xe7\x89\xb9\xe5\x88\xa5\xe3\x81\xaa\xe7\x90\x86\xe7\x94\xb1\xe3\x81\x8c\xe3\x81\xaa\xe3\x81\x91\xe3\x82\x8c\xe3\x81\xb0\xe3\x80\x81USoundAtomCueSheet::LoadAtomCueSheet() \xe9\x96\xa2\xe6\x95\xb0\xe3\x81\xae\xe6\x96\xb9\xe3\x82\x92\xe4\xbd\xbf\xe7\x94\xa8\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x93\xe3\x81\xa8\xe3\x82\x92\xe3\x81\x8a\xe3\x81\x99\xe3\x81\x99\xe3\x82\x81\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*\n\x09* @param AcbName Atom Cue Sheet \xe3\x82\xa2\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88\xe3\x81\xae\xe5\x90\x8d\xe5\x89\x8d(\xe3\x83\x91\xe3\x82\xb9)\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* @param bAddToLevel \xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\xb7\xe3\x83\xbc\xe3\x83\x88\xe3\x82\x92\xe3\x83\x91\xe3\x83\xbc\xe3\x82\xb7\xe3\x82\xb9\xe3\x82\xbf\xe3\x83\xb3\xe3\x83\x88\xe3\x83\xac\xe3\x83\x99\xe3\x83\xab\xe3\x81\xab\xe7\xb4\x90\xe3\x81\xa5\xe3\x81\x91\xe3\x82\x8b\xe3\x81\x8b\xe3\x81\xa9\xe3\x81\x86\xe3\x81\x8b\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* @return USoundAtomCueSheet\xe3\x82\xaa\xe3\x83\x96\xe3\x82\xb8\xe3\x82\xa7\xe3\x82\xaf\xe3\x83\x88\xe3\x81\xae\xe3\x83\xaa\xe3\x83\x95\xe3\x82\xa1\xe3\x83\xac\xe3\x83\xb3\xe3\x82\xb9\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*/" },
		{ "CPP_Default_bAddToLevel", "true" },
		{ "ModuleRelativePath", "Classes/SoundAtomCueSheet.h" },
		{ "ToolTip", "Atom Cue Sheet \xe3\x82\xa2\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88\xe3\x81\xae\xe5\x90\x8d\xe5\x89\x8d (\xe3\x83\x91\xe3\x82\xb9) \xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xa6  ACB \xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf\xe3\x82\x92\xe3\x83\xad\xe3\x83\xbc\xe3\x83\x89\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99 (Atom Cue Sheet \xe3\x82\xaa\xe3\x83\x96\xe3\x82\xb8\xe3\x82\xa7\xe3\x82\xaf\xe3\x83\x88\xe3\x82\x92\xe6\x9c\x89\xe5\x8a\xb9\xe5\x8c\x96\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99)\xe3\x80\x82\n\n\xe5\x9f\xba\xe6\x9c\xac\xe7\x9a\x84\xe3\x81\xab\xe3\x81\xaf\xe3\x80\x81USoundAtomCueSheet::LoadAtomCueSheet() \xe9\x96\xa2\xe6\x95\xb0\xe3\x81\xa8\xe5\x90\x8c\xe6\xa7\x98\xe3\x81\xae\xe9\x9d\x9e\xe5\x90\x8c\xe6\x9c\x9f\xe5\x87\xa6\xe7\x90\x86\xe3\x82\x92\xe8\xa1\x8c\xe3\x81\x84\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\xe8\xa9\xb3\xe7\xb4\xb0\xe3\x81\xaf USoundAtomCueSheet::LoadAtomCueSheet() \xe9\x96\xa2\xe6\x95\xb0\xe3\x81\xae\xe8\xaa\xac\xe6\x98\x8e\xe3\x82\x92\xe5\x8f\x82\xe7\x85\xa7\xe3\x81\x97\xe3\x81\xa6\xe3\x81\x8f\xe3\x81\xa0\xe3\x81\x95\xe3\x81\x84\xe3\x80\x82\n\n\xe6\xb3\xa8\xe6\x84\x8f:\nAtom Cue Sheet \xe3\x82\xa2\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88\xe3\x81\x8c\xe3\x83\xa1\xe3\x83\xa2\xe3\x83\xaa\xe4\xb8\x8a\xe3\x81\xab\xe9\x85\x8d\xe7\xbd\xae\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xa6\xe3\x81\x84\xe3\x81\xaa\xe3\x81\x84\xe5\xa0\xb4\xe5\x90\x88\xe3\x80\x81\xe3\x82\xa2\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88\xe3\x83\x95\xe3\x82\xa1\xe3\x82\xa4\xe3\x83\xab\xe3\x81\xae\xe6\xa4\x9c\xe7\xb4\xa2\xe3\x81\xa8\xe8\xaa\xad\xe3\x81\xbf\xe8\xbe\xbc\xe3\x81\xbf\xe3\x82\x92\xe8\xa1\x8c\xe3\x81\x84\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\xe3\x81\x93\xe3\x81\xae\xe5\x87\xa6\xe7\x90\x86\xe3\x81\xaf\xe9\xab\x98\xe3\x81\x84\xe8\xb2\xa0\xe8\x8d\xb7\xe3\x82\x92\xe7\x94\x9f\xe3\x81\x98\xe3\x82\x8b\xe5\x8f\xaf\xe8\x83\xbd\xe6\x80\xa7\xe3\x81\x8c\xe3\x81\x82\xe3\x82\x8a\xe3\x80\x81\xe3\x81\xbe\xe3\x81\x9f\xe3\x83\x95\xe3\x82\xa1\xe3\x82\xa4\xe3\x83\xab I/O \xe3\x82\x92\xe4\xbc\xb4\xe3\x81\x84\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\xe3\x82\xa2\xe3\x83\x97\xe3\x83\xaa\xe3\x82\xb1\xe3\x83\xbc\xe3\x82\xb7\xe3\x83\xa7\xe3\x83\xb3\xe3\x82\x84\xe3\x82\xb7\xe3\x82\xb9\xe3\x83\x86\xe3\x83\xa0\xe3\x81\xae\xe5\x8b\x95\xe4\xbd\x9c\xe7\x8a\xb6\xe6\xb3\x81\xe3\x81\xab\xe3\x82\x88\xe3\x81\xa3\xe3\x81\xa6\xe3\x81\xaf\xe3\x80\x81\xe3\x83\x92\xe3\x83\x83\xe3\x83\x81\xe3\x82\x92\xe5\xbc\x95\xe3\x81\x8d\xe8\xb5\xb7\xe3\x81\x93\xe3\x81\x99\xe6\x81\x90\xe3\x82\x8c\xe3\x81\x8c\xe3\x81\x82\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\xe7\x89\xb9\xe5\x88\xa5\xe3\x81\xaa\xe7\x90\x86\xe7\x94\xb1\xe3\x81\x8c\xe3\x81\xaa\xe3\x81\x91\xe3\x82\x8c\xe3\x81\xb0\xe3\x80\x81USoundAtomCueSheet::LoadAtomCueSheet() \xe9\x96\xa2\xe6\x95\xb0\xe3\x81\xae\xe6\x96\xb9\xe3\x82\x92\xe4\xbd\xbf\xe7\x94\xa8\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x93\xe3\x81\xa8\xe3\x82\x92\xe3\x81\x8a\xe3\x81\x99\xe3\x81\x99\xe3\x82\x81\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\n@param AcbName Atom Cue Sheet \xe3\x82\xa2\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88\xe3\x81\xae\xe5\x90\x8d\xe5\x89\x8d(\xe3\x83\x91\xe3\x82\xb9)\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param bAddToLevel \xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\xb7\xe3\x83\xbc\xe3\x83\x88\xe3\x82\x92\xe3\x83\x91\xe3\x83\xbc\xe3\x82\xb7\xe3\x82\xb9\xe3\x82\xbf\xe3\x83\xb3\xe3\x83\x88\xe3\x83\xac\xe3\x83\x99\xe3\x83\xab\xe3\x81\xab\xe7\xb4\x90\xe3\x81\xa5\xe3\x81\x91\xe3\x82\x8b\xe3\x81\x8b\xe3\x81\xa9\xe3\x81\x86\xe3\x81\x8b\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@return USoundAtomCueSheet\xe3\x82\xaa\xe3\x83\x96\xe3\x82\xb8\xe3\x82\xa7\xe3\x82\xaf\xe3\x83\x88\xe3\x81\xae\xe3\x83\xaa\xe3\x83\x95\xe3\x82\xa1\xe3\x83\xac\xe3\x83\xb3\xe3\x82\xb9\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCueSheet, nullptr, "LoadAcb", nullptr, nullptr, sizeof(SoundAtomCueSheet_eventLoadAcb_Parms), Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundAtomCueSheet_LoadAtomCueSheet_Statics
	{
		struct SoundAtomCueSheet_eventLoadAtomCueSheet_Parms
		{
			USoundAtomCueSheet* CueSheet;
			bool bAddToLevel;
			USoundAtomCueSheet* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_bAddToLevel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAddToLevel;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CueSheet;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_LoadAtomCueSheet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundAtomCueSheet_eventLoadAtomCueSheet_Parms, ReturnValue), Z_Construct_UClass_USoundAtomCueSheet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USoundAtomCueSheet_LoadAtomCueSheet_Statics::NewProp_bAddToLevel_SetBit(void* Obj)
	{
		((SoundAtomCueSheet_eventLoadAtomCueSheet_Parms*)Obj)->bAddToLevel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_LoadAtomCueSheet_Statics::NewProp_bAddToLevel = { "bAddToLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SoundAtomCueSheet_eventLoadAtomCueSheet_Parms), &Z_Construct_UFunction_USoundAtomCueSheet_LoadAtomCueSheet_Statics::NewProp_bAddToLevel_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_LoadAtomCueSheet_Statics::NewProp_CueSheet = { "CueSheet", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundAtomCueSheet_eventLoadAtomCueSheet_Parms, CueSheet), Z_Construct_UClass_USoundAtomCueSheet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCueSheet_LoadAtomCueSheet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_LoadAtomCueSheet_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_LoadAtomCueSheet_Statics::NewProp_bAddToLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_LoadAtomCueSheet_Statics::NewProp_CueSheet,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCueSheet_LoadAtomCueSheet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom Cue Sheet" },
		{ "Comment", "/**\n\x09* Atom Cue Sheet \xe3\x82\xaa\xe3\x83\x96\xe3\x82\xb8\xe3\x82\xa7\xe3\x82\xaf\xe3\x83\x88\xe3\x81\xae\xe5\x8f\x82\xe7\x85\xa7\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xa6 ACB \xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf\xe3\x82\x92\xe3\x83\xad\xe3\x83\xbc\xe3\x83\x89\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99 (Atom Cue Sheet \xe3\x82\xaa\xe3\x83\x96\xe3\x82\xb8\xe3\x82\xa7\xe3\x82\xaf\xe3\x83\x88\xe3\x82\x92\xe6\x9c\x89\xe5\x8a\xb9\xe5\x8c\x96\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99)\xe3\x80\x82\n\x09*\n\x09* Atom Cue Sheet\xe3\x82\xa2\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88\xe3\x81\xaf\xe9\x9f\xb3\xe5\xa3\xb0\xe5\x86\x8d\xe7\x94\x9f\xe9\x96\x8b\xe5\xa7\x8b\xe6\x99\x82\xe3\x81\xab\xe8\x87\xaa\xe5\x8b\x95\xe3\x81\xa7\xe3\x83\xad\xe3\x83\xbc\xe3\x83\x89\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xbe\xe3\x81\x99\xe3\x81\x8c\xe3\x80\x81\xe6\x9c\xac\xe9\x96\xa2\xe6\x95\xb0\xe3\x82\x92\xe4\xbd\xbf\xe7\x94\xa8\xe3\x81\x97\xe3\x81\xa6\xe6\x98\x8e\xe7\xa4\xba\xe7\x9a\x84\xe3\x81\xab\xe3\x83\xad\xe3\x83\xbc\xe3\x83\x89\xe3\x81\x95\xe3\x81\x9b\xe3\x82\x8b\xe3\x81\x93\xe3\x81\xa8\xe3\x82\x82\xe5\x8f\xaf\xe8\x83\xbd\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\n\x09* \xe6\x9c\xac\xe9\x96\xa2\xe6\x95\xb0\xe3\x81\xa7\xe3\x83\xad\xe3\x83\xbc\xe3\x83\x89\xe3\x81\x97\xe3\x81\x9f""Atom Cue Sheet\xe3\x81\xaf\xe3\x80\x81\xe3\x83\x91\xe3\x83\xbc\xe3\x82\xb7\xe3\x82\xb9\xe3\x82\xbf\xe3\x83\xb3\xe3\x83\x88\xe3\x83\xac\xe3\x83\x99\xe3\x83\xab\xe3\x82\x92\xe6\x8a\x9c\xe3\x81\x91\xe3\x82\x8b\xe9\x9a\x9b\xe3\x81\xab\xe8\x87\xaa\xe5\x8b\x95\xe7\x9a\x84\xe3\x81\xab\xe9\x96\x8b\xe6\x94\xbe\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* \xe4\xbe\x8b\xe5\xa4\x96\xe7\x9a\x84\xe3\x81\xab\xe3\x80\x81\xe4\xbb\xa5\xe4\xb8\x8b\xe3\x81\xab\xe8\xa9\xb2\xe5\xbd\x93\xe3\x81\x99\xe3\x82\x8b\xe5\xa0\xb4\xe5\x90\x88\xe3\x81\xaf\xe3\x83\x91\xe3\x83\xbc\xe3\x82\xb7\xe3\x82\xb9\xe3\x82\xbf\xe3\x83\xb3\xe3\x83\x88\xe3\x83\xac\xe3\x83\x99\xe3\x83\xab\xe3\x82\x92\xe6\x8a\x9c\xe3\x81\x91\xe3\x81\xa6\xe3\x82\x82""Atom Cue Sheet\xe3\x81\xaf\xe8\xa7\xa3\xe6\x94\xbe\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xbe\xe3\x81\x9b\xe3\x82\x93\xe3\x80\x82\n\x09* \xe3\x83\xbb\xe9\x96\xa2\xe6\x95\xb0\xe3\x81\xae\xe6\x88\xbb\xe3\x82\x8a\xe5\x80\xa4\xe3\x82\x92UPROPERTY\xe3\x81\xa8\xe3\x81\x97\xe3\x81\xa6\xe3\x82\xa2\xe3\x83\x97\xe3\x83\xaa\xe3\x82\xb1\xe3\x83\xbc\xe3\x82\xb7\xe3\x83\xa7\xe3\x83\xb3\xe3\x81\xa7\xe4\xbf\x9d\xe6\x8c\x81\xe3\x81\x97\xe3\x81\xa6\xe3\x81\x84\xe3\x82\x8b\xe5\xa0\xb4\xe5\x90\x88\xe3\x80\x82\n\x09* \xe3\x83\xbb\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\xb7\xe3\x83\xbc\xe3\x83\x88\xe3\x81\xab\xe5\x90\xab\xe3\x81\xbe\xe3\x82\x8c\xe3\x82\x8b\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\x92\xe3\x80\x81Persist Across Level Transition\xe3\x82\x92\xe6\x9c\x89\xe5\x8a\xb9\xe3\x81\xab\xe3\x81\x97\xe3\x81\xa6UAtomStatics::SpawnSound2D\xe3\x81\xa7\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x97\xe3\x81\xa6\xe3\x81\x84\xe3\x82\x8b\xe5\xa0\xb4\xe5\x90\x88\xe3\x80\x82\n\x09*\n\x09* \xe4\xbe\x8b\xe3\x81\x88\xe3\x81\xb0\xe4\xbb\xa5\xe4\xb8\x8b\xe3\x81\xae\xe6\x96\xb9\xe6\xb3\x95\xe3\x81\xa7\xe3\x80\x81 USoundAtomCueSheet \xe3\x82\xaa\xe3\x83\x96\xe3\x82\xb8\xe3\x82\xa7\xe3\x82\xaf\xe3\x83\x88\xe3\x81\xae\xe7\x94\x9f\xe5\xad\x98\xe6\x9c\x9f\xe9\x96\x93\xe3\x82\x92\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x88\xe3\x83\xad\xe3\x83\xbc\xe3\x83\xab\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x93\xe3\x81\xa8\xe3\x81\x8c\xe3\x81\xa7\xe3\x81\x8d\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* \xe3\x83\xbb(1)\xe6\x9c\xac\xe9\x96\xa2\xe6\x95\xb0\xe3\x82\x92\xe5\x91\xbc\xe3\x81\xb3\xe5\x87\xba\xe3\x81\x99\xe9\x9a\x9b\xe3\x80\x81\xe5\xbc\x95\xe6\x95\xb0 [ Add to Level ] \xe3\x81\xab""false\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\n\x09* \xe3\x83\xbb(2)\xe6\x9c\xac\xe9\x96\xa2\xe6\x95\xb0\xe3\x81\x8c\xe8\xbf\x94\xe3\x81\x97\xe3\x81\x9f Atom Cue Sheet \xe3\x82\x92UPROPERTY\xe3\x81\xa8\xe3\x81\x97\xe3\x81\xa6\xe3\x82\xa2\xe3\x83\x97\xe3\x83\xaa\xe3\x82\xb1\xe3\x83\xbc\xe3\x82\xb7\xe3\x83\xa7\xe3\x83\xb3\xe3\x81\xa7\xe4\xbf\x9d\xe6\x8c\x81\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\n\x09* \xe3\x83\xbb(3)\xe6\x9c\xac\xe9\x96\xa2\xe6\x95\xb0\xe3\x81\x8c\xe8\xbf\x94\xe3\x81\x97\xe3\x81\x9f Atom Cue Sheet \xe3\x82\x92\xe4\xbb\xbb\xe6\x84\x8f\xe3\x81\xae\xe3\x82\xbf\xe3\x82\xa4\xe3\x83\x9f\xe3\x83\xb3\xe3\x82\xb0\xe3\x81\xa7\xe8\xa7\xa3\xe6\x94\xbe\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\n\x09*\n\x09* \xe6\xb3\xa8\xe6\x84\x8f:\n\x09* \xe6\x9c\xac\xe9\x96\xa2\xe6\x95\xb0\xe3\x81\xaf\xe9\x9d\x9e\xe5\x90\x8c\xe6\x9c\x9f\xe9\x96\xa2\xe6\x95\xb0\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\xe6\x9c\xac\xe9\x96\xa2\xe6\x95\xb0\xe3\x81\xae\xe5\x91\xbc\xe3\x81\xb3\xe5\x87\xba\xe3\x81\x97\xe3\x81\xab\xe6\x88\x90\xe5\x8a\x9f\xe3\x81\x99\xe3\x82\x8b\xe3\x81\xa8 USoundAtomCueSheet \xe3\x83\x9d\xe3\x82\xa4\xe3\x83\xb3\xe3\x82\xbf\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* \xe6\x9c\xac\xe9\x96\xa2\xe6\x95\xb0\xe3\x81\xae\xe5\x91\xbc\xe3\x81\xb3\xe5\x87\xba\xe3\x81\x97\xe7\x9b\xb4\xe5\xbe\x8c\xe3\x81\xa7\xe3\x81\xaf USoundAtomCueSheet \xe3\x83\x9d\xe3\x82\xa4\xe3\x83\xb3\xe3\x82\xbf\xe3\x81\x8c\xe6\x8c\x87\xe3\x81\x99\xe3\x82\xaa\xe3\x83\x96\xe3\x82\xb8\xe3\x82\xa7\xe3\x82\xaf\xe3\x83\x88\xe5\x86\x85\xe3\x81\xaf\xe3\x81\xbe\xe3\x81\xa0\xe6\x9c\x89\xe5\x8a\xb9\xe3\x81\xaa ACB \xe3\x83\x8f\xe3\x83\xb3\xe3\x83\x89\xe3\x83\xab\xe3\x82\x92\xe6\x8c\x81\xe3\x81\xa3\xe3\x81\xa6\xe3\x81\x84\xe3\x81\xbe\xe3\x81\x9b\xe3\x82\x93\xe3\x80\x82\n\x09* \xe5\x86\x85\xe9\x83\xa8\xe3\x81\xa7 ACB \xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf\xe3\x81\xae\xe3\x83\xad\xe3\x83\xbc\xe3\x83\x89\xe3\x81\x8c\xe5\xae\x8c\xe4\xba\x86\xe3\x81\x99\xe3\x82\x8b\xe3\x81\xa8\xe3\x80\x81 ACB \xe3\x83\x8f\xe3\x83\xb3\xe3\x83\x89\xe3\x83\xab\xe3\x81\xab\xe6\x9c\x89\xe5\x8a\xb9\xe3\x81\xaa\xe5\x80\xa4\xe3\x81\x8c\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88\xe3\x81\x95\xe3\x82\x8c\xe3\x80\x81\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x81\xae\xe5\x8f\x82\xe7\x85\xa7\xe3\x81\x8c\xe5\x8f\xaf\xe8\x83\xbd\xe3\x81\xab\xe3\x81\xaa\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* \xe3\x82\xa2\xe3\x83\x97\xe3\x83\xaa\xe3\x82\xb1\xe3\x83\xbc\xe3\x82\xb7\xe3\x83\xa7\xe3\x83\xb3\xe3\x81\x8c ACB \xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf\xe3\x81\xae\xe3\x83\xad\xe3\x83\xbc\xe3\x83\x89\xe5\xae\x8c\xe4\xba\x86\xe3\x81\xae\xe6\xa4\x9c\xe7\x9f\xa5\xe3\x81\xae\xe3\x81\x9f\xe3\x82\x81\xe3\x81\xab\xe3\x80\x81 USoundAtomCueSheet \xe3\x81\xaf OnLoadCompleted \xe3\x83\x87\xe3\x83\xaa\xe3\x82\xb2\xe3\x83\xbc\xe3\x83\x88\xe3\x82\x92\xe6\x8f\x90\xe4\xbe\x9b\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* \xe3\x81\xbe\xe3\x81\x9f\xe3\x81\xaf USoundAtomCueSheet::IsLoaded() \xe9\x96\xa2\xe6\x95\xb0\xe3\x82\x92\xe5\x91\xbc\xe3\x81\xb3\xe5\x87\xba\xe3\x81\x99\xe3\x81\x93\xe3\x81\xa8\xe3\x81\xa7\xe3\x80\x81\xe3\x83\xad\xe3\x83\xbc\xe3\x83\x89\xe3\x81\xae\xe5\xae\x8c\xe4\xba\x86\xe3\x82\x92\xe7\xa2\xba\xe8\xaa\x8d\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x93\xe3\x81\xa8\xe3\x82\x82\xe5\x8f\xaf\xe8\x83\xbd\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\n\x09*\n\x09* @param CueSheet \xe3\x83\xad\xe3\x83\xbc\xe3\x83\x89\xe3\x81\x99\xe3\x82\x8b""Atom Cue Sheet\xe3\x82\xa2\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* @param bAddToLevel \xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\xb7\xe3\x83\xbc\xe3\x83\x88\xe3\x82\x92\xe3\x83\x91\xe3\x83\xbc\xe3\x82\xb7\xe3\x82\xb9\xe3\x82\xbf\xe3\x83\xb3\xe3\x83\x88\xe3\x83\xac\xe3\x83\x99\xe3\x83\xab\xe3\x81\xab\xe7\xb4\x90\xe3\x81\xa5\xe3\x81\x91\xe3\x82\x8b\xe3\x81\x8b\xe3\x81\xa9\xe3\x81\x86\xe3\x81\x8b\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* @return USoundAtomCueSheet\xe3\x82\xaa\xe3\x83\x96\xe3\x82\xb8\xe3\x82\xa7\xe3\x82\xaf\xe3\x83\x88\xe3\x81\xae\xe3\x83\xaa\xe3\x83\x95\xe3\x82\xa1\xe3\x83\xac\xe3\x83\xb3\xe3\x82\xb9\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*/" },
		{ "CPP_Default_bAddToLevel", "true" },
		{ "ModuleRelativePath", "Classes/SoundAtomCueSheet.h" },
		{ "ToolTip", "Atom Cue Sheet \xe3\x82\xaa\xe3\x83\x96\xe3\x82\xb8\xe3\x82\xa7\xe3\x82\xaf\xe3\x83\x88\xe3\x81\xae\xe5\x8f\x82\xe7\x85\xa7\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xa6 ACB \xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf\xe3\x82\x92\xe3\x83\xad\xe3\x83\xbc\xe3\x83\x89\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99 (Atom Cue Sheet \xe3\x82\xaa\xe3\x83\x96\xe3\x82\xb8\xe3\x82\xa7\xe3\x82\xaf\xe3\x83\x88\xe3\x82\x92\xe6\x9c\x89\xe5\x8a\xb9\xe5\x8c\x96\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99)\xe3\x80\x82\n\nAtom Cue Sheet\xe3\x82\xa2\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88\xe3\x81\xaf\xe9\x9f\xb3\xe5\xa3\xb0\xe5\x86\x8d\xe7\x94\x9f\xe9\x96\x8b\xe5\xa7\x8b\xe6\x99\x82\xe3\x81\xab\xe8\x87\xaa\xe5\x8b\x95\xe3\x81\xa7\xe3\x83\xad\xe3\x83\xbc\xe3\x83\x89\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xbe\xe3\x81\x99\xe3\x81\x8c\xe3\x80\x81\xe6\x9c\xac\xe9\x96\xa2\xe6\x95\xb0\xe3\x82\x92\xe4\xbd\xbf\xe7\x94\xa8\xe3\x81\x97\xe3\x81\xa6\xe6\x98\x8e\xe7\xa4\xba\xe7\x9a\x84\xe3\x81\xab\xe3\x83\xad\xe3\x83\xbc\xe3\x83\x89\xe3\x81\x95\xe3\x81\x9b\xe3\x82\x8b\xe3\x81\x93\xe3\x81\xa8\xe3\x82\x82\xe5\x8f\xaf\xe8\x83\xbd\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\n\xe6\x9c\xac\xe9\x96\xa2\xe6\x95\xb0\xe3\x81\xa7\xe3\x83\xad\xe3\x83\xbc\xe3\x83\x89\xe3\x81\x97\xe3\x81\x9f""Atom Cue Sheet\xe3\x81\xaf\xe3\x80\x81\xe3\x83\x91\xe3\x83\xbc\xe3\x82\xb7\xe3\x82\xb9\xe3\x82\xbf\xe3\x83\xb3\xe3\x83\x88\xe3\x83\xac\xe3\x83\x99\xe3\x83\xab\xe3\x82\x92\xe6\x8a\x9c\xe3\x81\x91\xe3\x82\x8b\xe9\x9a\x9b\xe3\x81\xab\xe8\x87\xaa\xe5\x8b\x95\xe7\x9a\x84\xe3\x81\xab\xe9\x96\x8b\xe6\x94\xbe\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\xe4\xbe\x8b\xe5\xa4\x96\xe7\x9a\x84\xe3\x81\xab\xe3\x80\x81\xe4\xbb\xa5\xe4\xb8\x8b\xe3\x81\xab\xe8\xa9\xb2\xe5\xbd\x93\xe3\x81\x99\xe3\x82\x8b\xe5\xa0\xb4\xe5\x90\x88\xe3\x81\xaf\xe3\x83\x91\xe3\x83\xbc\xe3\x82\xb7\xe3\x82\xb9\xe3\x82\xbf\xe3\x83\xb3\xe3\x83\x88\xe3\x83\xac\xe3\x83\x99\xe3\x83\xab\xe3\x82\x92\xe6\x8a\x9c\xe3\x81\x91\xe3\x81\xa6\xe3\x82\x82""Atom Cue Sheet\xe3\x81\xaf\xe8\xa7\xa3\xe6\x94\xbe\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xbe\xe3\x81\x9b\xe3\x82\x93\xe3\x80\x82\n\xe3\x83\xbb\xe9\x96\xa2\xe6\x95\xb0\xe3\x81\xae\xe6\x88\xbb\xe3\x82\x8a\xe5\x80\xa4\xe3\x82\x92UPROPERTY\xe3\x81\xa8\xe3\x81\x97\xe3\x81\xa6\xe3\x82\xa2\xe3\x83\x97\xe3\x83\xaa\xe3\x82\xb1\xe3\x83\xbc\xe3\x82\xb7\xe3\x83\xa7\xe3\x83\xb3\xe3\x81\xa7\xe4\xbf\x9d\xe6\x8c\x81\xe3\x81\x97\xe3\x81\xa6\xe3\x81\x84\xe3\x82\x8b\xe5\xa0\xb4\xe5\x90\x88\xe3\x80\x82\n\xe3\x83\xbb\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\xb7\xe3\x83\xbc\xe3\x83\x88\xe3\x81\xab\xe5\x90\xab\xe3\x81\xbe\xe3\x82\x8c\xe3\x82\x8b\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\x92\xe3\x80\x81Persist Across Level Transition\xe3\x82\x92\xe6\x9c\x89\xe5\x8a\xb9\xe3\x81\xab\xe3\x81\x97\xe3\x81\xa6UAtomStatics::SpawnSound2D\xe3\x81\xa7\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x97\xe3\x81\xa6\xe3\x81\x84\xe3\x82\x8b\xe5\xa0\xb4\xe5\x90\x88\xe3\x80\x82\n\n\xe4\xbe\x8b\xe3\x81\x88\xe3\x81\xb0\xe4\xbb\xa5\xe4\xb8\x8b\xe3\x81\xae\xe6\x96\xb9\xe6\xb3\x95\xe3\x81\xa7\xe3\x80\x81 USoundAtomCueSheet \xe3\x82\xaa\xe3\x83\x96\xe3\x82\xb8\xe3\x82\xa7\xe3\x82\xaf\xe3\x83\x88\xe3\x81\xae\xe7\x94\x9f\xe5\xad\x98\xe6\x9c\x9f\xe9\x96\x93\xe3\x82\x92\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x88\xe3\x83\xad\xe3\x83\xbc\xe3\x83\xab\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x93\xe3\x81\xa8\xe3\x81\x8c\xe3\x81\xa7\xe3\x81\x8d\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\xe3\x83\xbb(1)\xe6\x9c\xac\xe9\x96\xa2\xe6\x95\xb0\xe3\x82\x92\xe5\x91\xbc\xe3\x81\xb3\xe5\x87\xba\xe3\x81\x99\xe9\x9a\x9b\xe3\x80\x81\xe5\xbc\x95\xe6\x95\xb0 [ Add to Level ] \xe3\x81\xab""false\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\n\xe3\x83\xbb(2)\xe6\x9c\xac\xe9\x96\xa2\xe6\x95\xb0\xe3\x81\x8c\xe8\xbf\x94\xe3\x81\x97\xe3\x81\x9f Atom Cue Sheet \xe3\x82\x92UPROPERTY\xe3\x81\xa8\xe3\x81\x97\xe3\x81\xa6\xe3\x82\xa2\xe3\x83\x97\xe3\x83\xaa\xe3\x82\xb1\xe3\x83\xbc\xe3\x82\xb7\xe3\x83\xa7\xe3\x83\xb3\xe3\x81\xa7\xe4\xbf\x9d\xe6\x8c\x81\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\n\xe3\x83\xbb(3)\xe6\x9c\xac\xe9\x96\xa2\xe6\x95\xb0\xe3\x81\x8c\xe8\xbf\x94\xe3\x81\x97\xe3\x81\x9f Atom Cue Sheet \xe3\x82\x92\xe4\xbb\xbb\xe6\x84\x8f\xe3\x81\xae\xe3\x82\xbf\xe3\x82\xa4\xe3\x83\x9f\xe3\x83\xb3\xe3\x82\xb0\xe3\x81\xa7\xe8\xa7\xa3\xe6\x94\xbe\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\n\n\xe6\xb3\xa8\xe6\x84\x8f:\n\xe6\x9c\xac\xe9\x96\xa2\xe6\x95\xb0\xe3\x81\xaf\xe9\x9d\x9e\xe5\x90\x8c\xe6\x9c\x9f\xe9\x96\xa2\xe6\x95\xb0\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\xe6\x9c\xac\xe9\x96\xa2\xe6\x95\xb0\xe3\x81\xae\xe5\x91\xbc\xe3\x81\xb3\xe5\x87\xba\xe3\x81\x97\xe3\x81\xab\xe6\x88\x90\xe5\x8a\x9f\xe3\x81\x99\xe3\x82\x8b\xe3\x81\xa8 USoundAtomCueSheet \xe3\x83\x9d\xe3\x82\xa4\xe3\x83\xb3\xe3\x82\xbf\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\xe6\x9c\xac\xe9\x96\xa2\xe6\x95\xb0\xe3\x81\xae\xe5\x91\xbc\xe3\x81\xb3\xe5\x87\xba\xe3\x81\x97\xe7\x9b\xb4\xe5\xbe\x8c\xe3\x81\xa7\xe3\x81\xaf USoundAtomCueSheet \xe3\x83\x9d\xe3\x82\xa4\xe3\x83\xb3\xe3\x82\xbf\xe3\x81\x8c\xe6\x8c\x87\xe3\x81\x99\xe3\x82\xaa\xe3\x83\x96\xe3\x82\xb8\xe3\x82\xa7\xe3\x82\xaf\xe3\x83\x88\xe5\x86\x85\xe3\x81\xaf\xe3\x81\xbe\xe3\x81\xa0\xe6\x9c\x89\xe5\x8a\xb9\xe3\x81\xaa ACB \xe3\x83\x8f\xe3\x83\xb3\xe3\x83\x89\xe3\x83\xab\xe3\x82\x92\xe6\x8c\x81\xe3\x81\xa3\xe3\x81\xa6\xe3\x81\x84\xe3\x81\xbe\xe3\x81\x9b\xe3\x82\x93\xe3\x80\x82\n\xe5\x86\x85\xe9\x83\xa8\xe3\x81\xa7 ACB \xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf\xe3\x81\xae\xe3\x83\xad\xe3\x83\xbc\xe3\x83\x89\xe3\x81\x8c\xe5\xae\x8c\xe4\xba\x86\xe3\x81\x99\xe3\x82\x8b\xe3\x81\xa8\xe3\x80\x81 ACB \xe3\x83\x8f\xe3\x83\xb3\xe3\x83\x89\xe3\x83\xab\xe3\x81\xab\xe6\x9c\x89\xe5\x8a\xb9\xe3\x81\xaa\xe5\x80\xa4\xe3\x81\x8c\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88\xe3\x81\x95\xe3\x82\x8c\xe3\x80\x81\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x81\xae\xe5\x8f\x82\xe7\x85\xa7\xe3\x81\x8c\xe5\x8f\xaf\xe8\x83\xbd\xe3\x81\xab\xe3\x81\xaa\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\xe3\x82\xa2\xe3\x83\x97\xe3\x83\xaa\xe3\x82\xb1\xe3\x83\xbc\xe3\x82\xb7\xe3\x83\xa7\xe3\x83\xb3\xe3\x81\x8c ACB \xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf\xe3\x81\xae\xe3\x83\xad\xe3\x83\xbc\xe3\x83\x89\xe5\xae\x8c\xe4\xba\x86\xe3\x81\xae\xe6\xa4\x9c\xe7\x9f\xa5\xe3\x81\xae\xe3\x81\x9f\xe3\x82\x81\xe3\x81\xab\xe3\x80\x81 USoundAtomCueSheet \xe3\x81\xaf OnLoadCompleted \xe3\x83\x87\xe3\x83\xaa\xe3\x82\xb2\xe3\x83\xbc\xe3\x83\x88\xe3\x82\x92\xe6\x8f\x90\xe4\xbe\x9b\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\xe3\x81\xbe\xe3\x81\x9f\xe3\x81\xaf USoundAtomCueSheet::IsLoaded() \xe9\x96\xa2\xe6\x95\xb0\xe3\x82\x92\xe5\x91\xbc\xe3\x81\xb3\xe5\x87\xba\xe3\x81\x99\xe3\x81\x93\xe3\x81\xa8\xe3\x81\xa7\xe3\x80\x81\xe3\x83\xad\xe3\x83\xbc\xe3\x83\x89\xe3\x81\xae\xe5\xae\x8c\xe4\xba\x86\xe3\x82\x92\xe7\xa2\xba\xe8\xaa\x8d\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x93\xe3\x81\xa8\xe3\x82\x82\xe5\x8f\xaf\xe8\x83\xbd\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\n\n@param CueSheet \xe3\x83\xad\xe3\x83\xbc\xe3\x83\x89\xe3\x81\x99\xe3\x82\x8b""Atom Cue Sheet\xe3\x82\xa2\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param bAddToLevel \xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\xb7\xe3\x83\xbc\xe3\x83\x88\xe3\x82\x92\xe3\x83\x91\xe3\x83\xbc\xe3\x82\xb7\xe3\x82\xb9\xe3\x82\xbf\xe3\x83\xb3\xe3\x83\x88\xe3\x83\xac\xe3\x83\x99\xe3\x83\xab\xe3\x81\xab\xe7\xb4\x90\xe3\x81\xa5\xe3\x81\x91\xe3\x82\x8b\xe3\x81\x8b\xe3\x81\xa9\xe3\x81\x86\xe3\x81\x8b\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@return USoundAtomCueSheet\xe3\x82\xaa\xe3\x83\x96\xe3\x82\xb8\xe3\x82\xa7\xe3\x82\xaf\xe3\x83\x88\xe3\x81\xae\xe3\x83\xaa\xe3\x83\x95\xe3\x82\xa1\xe3\x83\xac\xe3\x83\xb3\xe3\x82\xb9\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCueSheet_LoadAtomCueSheet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCueSheet, nullptr, "LoadAtomCueSheet", nullptr, nullptr, sizeof(SoundAtomCueSheet_eventLoadAtomCueSheet_Parms), Z_Construct_UFunction_USoundAtomCueSheet_LoadAtomCueSheet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_LoadAtomCueSheet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCueSheet_LoadAtomCueSheet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_LoadAtomCueSheet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundAtomCueSheet_LoadAtomCueSheet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoundAtomCueSheet_LoadAtomCueSheet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundAtomCueSheet_ReleaseAcb_Statics
	{
		struct SoundAtomCueSheet_eventReleaseAcb_Parms
		{
			FName AcbName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AcbName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USoundAtomCueSheet_ReleaseAcb_Statics::NewProp_AcbName = { "AcbName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundAtomCueSheet_eventReleaseAcb_Parms, AcbName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCueSheet_ReleaseAcb_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_ReleaseAcb_Statics::NewProp_AcbName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCueSheet_ReleaseAcb_Statics::Function_MetaDataParams[] = {
		{ "Category", "CRIWARE" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function has no effect." },
		{ "ModuleRelativePath", "Classes/SoundAtomCueSheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCueSheet_ReleaseAcb_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCueSheet, nullptr, "ReleaseAcb", nullptr, nullptr, sizeof(SoundAtomCueSheet_eventReleaseAcb_Parms), Z_Construct_UFunction_USoundAtomCueSheet_ReleaseAcb_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_ReleaseAcb_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCueSheet_ReleaseAcb_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_ReleaseAcb_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundAtomCueSheet_ReleaseAcb()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoundAtomCueSheet_ReleaseAcb_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USoundAtomCueSheet_NoRegister()
	{
		return USoundAtomCueSheet::StaticClass();
	}
	struct Z_Construct_UClass_USoundAtomCueSheet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetImportData;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CueInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CueInfos;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CueInfos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AdditionalData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AwbDirectory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AwbDirectory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideAwbDirectory_MetaData[];
#endif
		static void NewProp_bOverrideAwbDirectory_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideAwbDirectory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumSlots_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumSlots;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CueSheetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CueSheetName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AcbFilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AcbFilePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Contains_MetaData[];
#endif
		static void NewProp_Contains_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Contains;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundAtomCueSheet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USoundAtomCueSheet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USoundAtomCueSheet_ApplyDspBusSnapshot, "ApplyDspBusSnapshot" }, // 3348928737
		{ &Z_Construct_UFunction_USoundAtomCueSheet_AttachDspBusSetting, "AttachDspBusSetting" }, // 771566151
		{ &Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromId, "BP_GetCueInfoFromId" }, // 809258696
		{ &Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromIndex, "BP_GetCueInfoFromIndex" }, // 2377352980
		{ &Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName, "BP_GetCueInfoFromName" }, // 155774440
		{ &Z_Construct_UFunction_USoundAtomCueSheet_DetachDspBusSetting, "DetachDspBusSetting" }, // 151566381
		{ &Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueById, "GetAtomCueById" }, // 314324849
		{ &Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByIndex, "GetAtomCueByIndex" }, // 2065449646
		{ &Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByName, "GetAtomCueByName" }, // 941376963
		{ &Z_Construct_UFunction_USoundAtomCueSheet_GetNumCues, "GetNumCues" }, // 1243501062
		{ &Z_Construct_UFunction_USoundAtomCueSheet_IsLoaded, "IsLoaded" }, // 1953830130
		{ &Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb, "LoadAcb" }, // 2693493806
		{ &Z_Construct_UFunction_USoundAtomCueSheet_LoadAtomCueSheet, "LoadAtomCueSheet" }, // 1526675320
		{ &Z_Construct_UFunction_USoundAtomCueSheet_ReleaseAcb, "ReleaseAcb" }, // 294502017
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCueSheet_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "object" },
		{ "IncludePath", "SoundAtomCueSheet.h" },
		{ "ModuleRelativePath", "Classes/SoundAtomCueSheet.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "SoundAtomCueSheet class." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_AssetImportData_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "Comment", "/** Importing data and options used for this cue sheet */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/SoundAtomCueSheet.h" },
		{ "ToolTip", "Importing data and options used for this cue sheet" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_AssetImportData = { "AssetImportData", nullptr, (EPropertyFlags)0x00120008000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundAtomCueSheet, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_AssetImportData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_AssetImportData_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_CueInfos_MetaData[] = {
		{ "Category", "Sound Atom Cue Sheet" },
		{ "DisplayName", "Cue Infos" },
		{ "ModuleRelativePath", "Classes/SoundAtomCueSheet.h" },
		{ "ToolTip", "Cue Infos" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_CueInfos = { "CueInfos", nullptr, (EPropertyFlags)0x00200c0000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundAtomCueSheet, CueInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_CueInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_CueInfos_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_CueInfos_Inner = { "CueInfos", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAtomCueInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_AdditionalData_MetaData[] = {
		{ "Category", "Sound Atom Cue Sheet" },
		{ "DisplayName", "Additional Cue Sheet Data" },
		{ "ModuleRelativePath", "Classes/SoundAtomCueSheet.h" },
		{ "ToolTip", "Additional Cue Sheet data from ACB Json file." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_AdditionalData = { "AdditionalData", nullptr, (EPropertyFlags)0x0010040000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundAtomCueSheet, AdditionalData), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_AdditionalData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_AdditionalData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_AwbDirectory_MetaData[] = {
		{ "Category", "Sound Atom Cue Sheet" },
		{ "DisplayName", "AWB directory" },
		{ "ModuleRelativePath", "Classes/SoundAtomCueSheet.h" },
		{ "ToolTip", "Directory containing AWB file." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_AwbDirectory = { "AwbDirectory", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundAtomCueSheet, AwbDirectory), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_AwbDirectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_AwbDirectory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_bOverrideAwbDirectory_MetaData[] = {
		{ "Category", "Sound Atom Cue Sheet" },
		{ "DisplayName", "Override AWB directory" },
		{ "ModuleRelativePath", "Classes/SoundAtomCueSheet.h" },
		{ "ToolTip", "Load AWB file from the specified path. Ignore [Non-Asset Content Directory] setting." },
	};
#endif
	void Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_bOverrideAwbDirectory_SetBit(void* Obj)
	{
		((USoundAtomCueSheet*)Obj)->bOverrideAwbDirectory = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_bOverrideAwbDirectory = { "bOverrideAwbDirectory", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USoundAtomCueSheet), &Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_bOverrideAwbDirectory_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_bOverrideAwbDirectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_bOverrideAwbDirectory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_NumSlots_MetaData[] = {
		{ "Category", "Sound Atom Cue Sheet" },
		{ "DisplayName", "Number of related AWB files" },
		{ "ModuleRelativePath", "Classes/SoundAtomCueSheet.h" },
		{ "ToolTip", "Number of related AWB files." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_NumSlots = { "NumSlots", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundAtomCueSheet, NumSlots), METADATA_PARAMS(Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_NumSlots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_NumSlots_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_CueSheetName_MetaData[] = {
		{ "Category", "Sound Atom Cue Sheet" },
		{ "DisplayName", "CueSheet name" },
		{ "ModuleRelativePath", "Classes/SoundAtomCueSheet.h" },
		{ "ToolTip", "CueSheet name." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_CueSheetName = { "CueSheetName", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundAtomCueSheet, CueSheetName), METADATA_PARAMS(Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_CueSheetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_CueSheetName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_AcbFilePath_MetaData[] = {
		{ "Comment", "/** DEPRECATED - ACB file path is now stored in AssetImportData. */" },
		{ "ModuleRelativePath", "Classes/SoundAtomCueSheet.h" },
		{ "ToolTip", "DEPRECATED - ACB file path is now stored in AssetImportData." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_AcbFilePath = { "AcbFilePath", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundAtomCueSheet, AcbFilePath_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_AcbFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_AcbFilePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_Contains_MetaData[] = {
		{ "Category", "Sound Atom Cue Sheet" },
		{ "DisplayName", "Is ACB data contained" },
		{ "ModuleRelativePath", "Classes/SoundAtomCueSheet.h" },
		{ "ToolTip", "Is ACB data contained." },
	};
#endif
	void Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_Contains_SetBit(void* Obj)
	{
		((USoundAtomCueSheet*)Obj)->Contains = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_Contains = { "Contains", nullptr, (EPropertyFlags)0x0010000000022001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USoundAtomCueSheet), &Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_Contains_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_Contains_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_Contains_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundAtomCueSheet_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_AssetImportData,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_CueInfos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_CueInfos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_AdditionalData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_AwbDirectory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_bOverrideAwbDirectory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_NumSlots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_CueSheetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_AcbFilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_Contains,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundAtomCueSheet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundAtomCueSheet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundAtomCueSheet_Statics::ClassParams = {
		&USoundAtomCueSheet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USoundAtomCueSheet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCueSheet_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundAtomCueSheet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCueSheet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundAtomCueSheet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundAtomCueSheet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundAtomCueSheet, 4197990338);
	template<> CRIWARERUNTIME_API UClass* StaticClass<USoundAtomCueSheet>()
	{
		return USoundAtomCueSheet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundAtomCueSheet(Z_Construct_UClass_USoundAtomCueSheet, &USoundAtomCueSheet::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("USoundAtomCueSheet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundAtomCueSheet);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USoundAtomCueSheet)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
