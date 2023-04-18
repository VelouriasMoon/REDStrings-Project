// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareEditor/Private/Factories/SoundAtomCueSheetImportOptions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundAtomCueSheetImportOptions() {}
// Cross Module References
	CRIWAREEDITOR_API UEnum* Z_Construct_UEnum_CriWareEditor_EAtomExistingCuePresets();
	UPackage* Z_Construct_UPackage__Script_CriWareEditor();
	CRIWAREEDITOR_API UEnum* Z_Construct_UEnum_CriWareEditor_EAtomNewCuePresets();
	CRIWAREEDITOR_API UClass* Z_Construct_UClass_USoundAtomCueSheetImportOptions_NoRegister();
	CRIWAREEDITOR_API UClass* Z_Construct_UClass_USoundAtomCueSheetImportOptions();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
	static UEnum* EAtomExistingCuePresets_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CriWareEditor_EAtomExistingCuePresets, Z_Construct_UPackage__Script_CriWareEditor(), TEXT("EAtomExistingCuePresets"));
		}
		return Singleton;
	}
	template<> CRIWAREEDITOR_API UEnum* StaticEnum<EAtomExistingCuePresets>()
	{
		return EAtomExistingCuePresets_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAtomExistingCuePresets(EAtomExistingCuePresets_StaticEnum, TEXT("/Script/CriWareEditor"), TEXT("EAtomExistingCuePresets"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CriWareEditor_EAtomExistingCuePresets_Hash() { return 3819292408U; }
	UEnum* Z_Construct_UEnum_CriWareEditor_EAtomExistingCuePresets()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareEditor();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAtomExistingCuePresets"), 0, Get_Z_Construct_UEnum_CriWareEditor_EAtomExistingCuePresets_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAtomExistingCuePresets::Custom", (int64)EAtomExistingCuePresets::Custom },
				{ "EAtomExistingCuePresets::Keep", (int64)EAtomExistingCuePresets::Keep },
				{ "EAtomExistingCuePresets::Delete", (int64)EAtomExistingCuePresets::Delete },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Custom.Name", "EAtomExistingCuePresets::Custom" },
				{ "Delete.Name", "EAtomExistingCuePresets::Delete" },
				{ "Keep.Name", "EAtomExistingCuePresets::Keep" },
				{ "ModuleRelativePath", "Private/Factories/SoundAtomCueSheetImportOptions.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CriWareEditor,
				nullptr,
				"EAtomExistingCuePresets",
				"EAtomExistingCuePresets",
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
	static UEnum* EAtomNewCuePresets_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CriWareEditor_EAtomNewCuePresets, Z_Construct_UPackage__Script_CriWareEditor(), TEXT("EAtomNewCuePresets"));
		}
		return Singleton;
	}
	template<> CRIWAREEDITOR_API UEnum* StaticEnum<EAtomNewCuePresets>()
	{
		return EAtomNewCuePresets_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAtomNewCuePresets(EAtomNewCuePresets_StaticEnum, TEXT("/Script/CriWareEditor"), TEXT("EAtomNewCuePresets"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CriWareEditor_EAtomNewCuePresets_Hash() { return 502858394U; }
	UEnum* Z_Construct_UEnum_CriWareEditor_EAtomNewCuePresets()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareEditor();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAtomNewCuePresets"), 0, Get_Z_Construct_UEnum_CriWareEditor_EAtomNewCuePresets_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAtomNewCuePresets::Custom", (int64)EAtomNewCuePresets::Custom },
				{ "EAtomNewCuePresets::Create", (int64)EAtomNewCuePresets::Create },
				{ "EAtomNewCuePresets::DoNotCreate", (int64)EAtomNewCuePresets::DoNotCreate },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Create.Name", "EAtomNewCuePresets::Create" },
				{ "Custom.Name", "EAtomNewCuePresets::Custom" },
				{ "DoNotCreate.Name", "EAtomNewCuePresets::DoNotCreate" },
				{ "ModuleRelativePath", "Private/Factories/SoundAtomCueSheetImportOptions.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CriWareEditor,
				nullptr,
				"EAtomNewCuePresets",
				"EAtomNewCuePresets",
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
	void USoundAtomCueSheetImportOptions::StaticRegisterNativesUSoundAtomCueSheetImportOptions()
	{
	}
	UClass* Z_Construct_UClass_USoundAtomCueSheetImportOptions_NoRegister()
	{
		return USoundAtomCueSheetImportOptions::StaticClass();
	}
	struct Z_Construct_UClass_USoundAtomCueSheetImportOptions_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExistingCuePreset_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ExistingCuePreset;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ExistingCuePreset_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewCuePreset_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewCuePreset;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewCuePreset_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableDistanceCulling_MetaData[];
#endif
		static void NewProp_bEnableDistanceCulling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableDistanceCulling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableEconomicTick_MetaData[];
#endif
		static void NewProp_bEnableEconomicTick_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableEconomicTick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CueColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CueColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetFilenameSuffix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetFilenameSuffix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetFilenamePrefix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetFilenamePrefix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseCueSheetNameAsPrefix_MetaData[];
#endif
		static void NewProp_bUseCueSheetNameAsPrefix_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseCueSheetNameAsPrefix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AwbDirectory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AwbDirectory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseAwbRoot_MetaData[];
#endif
		static void NewProp_bUseAwbRoot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseAwbRoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideAwbDirectory_MetaData[];
#endif
		static void NewProp_bOverrideAwbDirectory_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideAwbDirectory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundAtomCueSheetImportOptions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCueSheetImportOptions_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n  * Options for UAtomCueSheetFactory.\n  */" },
		{ "HideCategories", "DebugProperty" },
		{ "IncludePath", "Factories/SoundAtomCueSheetImportOptions.h" },
		{ "ModuleRelativePath", "Private/Factories/SoundAtomCueSheetImportOptions.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Options for UAtomCueSheetFactory." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCueSheetImportOptions_Statics::NewProp_ExistingCuePreset_MetaData[] = {
		{ "ModuleRelativePath", "Private/Factories/SoundAtomCueSheetImportOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USoundAtomCueSheetImportOptions_Statics::NewProp_ExistingCuePreset = { "ExistingCuePreset", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundAtomCueSheetImportOptions, ExistingCuePreset), Z_Construct_UEnum_CriWareEditor_EAtomExistingCuePresets, METADATA_PARAMS(Z_Construct_UClass_USoundAtomCueSheetImportOptions_Statics::NewProp_ExistingCuePreset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCueSheetImportOptions_Statics::NewProp_ExistingCuePreset_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USoundAtomCueSheetImportOptions_Statics::NewProp_ExistingCuePreset_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCueSheetImportOptions_Statics::NewProp_NewCuePreset_MetaData[] = {
		{ "ModuleRelativePath", "Private/Factories/SoundAtomCueSheetImportOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USoundAtomCueSheetImportOptions_Statics::NewProp_NewCuePreset = { "NewCuePreset", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundAtomCueSheetImportOptions, NewCuePreset), Z_Construct_UEnum_CriWareEditor_EAtomNewCuePresets, METADATA_PARAMS(Z_Construct_UClass_USoundAtomCueSheetImportOptions_Statics::NewProp_NewCuePreset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCueSheetImportOptions_Statics::NewProp_NewCuePreset_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USoundAtomCueSheetImportOptions_Statics::NewProp_NewCuePreset_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCueSheetImportOptions_Statics::NewProp_bEnableDistanceCulling_MetaData[] = {
		{ "ModuleRelativePath", "Private/Factories/SoundAtomCueSheetImportOptions.h" },
	};
#endif
	void Z_Construct_UClass_USoundAtomCueSheetImportOptions_Statics::NewProp_bEnableDistanceCulling_SetBit(void* Obj)
	{
		((USoundAtomCueSheetImportOptions*)Obj)->bEnableDistanceCulling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundAtomCueSheetImportOptions_Statics::NewProp_bEnableDistanceCulling = { "bEnableDistanceCulling", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USoundAtomCueSheetImportOptions), &Z_Construct_UClass_USoundAtomCueSheetImportOptions_Statics::NewProp_bEnableDistanceCulling_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundAtomCueSheetImportOptions_Statics::NewProp_bEnableDistanceCulling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCueSheetImportOptions_Statics::NewProp_bEnableDistanceCulling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCueSheetImportOptions_Statics::NewProp_bEnableEconomicTick_MetaData[] = {
		{ "ModuleRelativePath", "Private/Factories/SoundAtomCueSheetImportOptions.h" },
	};
#endif
	void Z_Construct_UClass_USoundAtomCueSheetImportOptions_Statics::NewProp_bEnableEconomicTick_SetBit(void* Obj)
	{
		((USoundAtomCueSheetImportOptions*)Obj)->bEnableEconomicTick = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundAtomCueSheetImportOptions_Statics::NewProp_bEnableEconomicTick = { "bEnableEconomicTick", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USoundAtomCueSheetImportOptions), &Z_Construct_UClass_USoundAtomCueSheetImportOptions_Statics::NewProp_bEnableEconomicTick_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundAtomCueSheetImportOptions_Statics::NewProp_bEnableEconomicTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCueSheetImportOptions_Statics::NewProp_bEnableEconomicTick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCueSheetImportOptions_Statics::NewProp_CueColor_MetaData[] = {
		{ "ModuleRelativePath", "Private/Factories/SoundAtomCueSheetImportOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundAtomCueSheetImportOptions_Statics::NewProp_CueColor = { "CueColor", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundAtomCueSheetImportOptions, CueColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_USoundAtomCueSheetImportOptions_Statics::NewProp_CueColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCueSheetImportOptions_Statics::NewProp_CueColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCueSheetImportOptions_Statics::NewProp_AssetFilenameSuffix_MetaData[] = {
		{ "ModuleRelativePath", "Private/Factories/SoundAtomCueSheetImportOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USoundAtomCueSheetImportOptions_Statics::NewProp_AssetFilenameSuffix = { "AssetFilenameSuffix", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundAtomCueSheetImportOptions, AssetFilenameSuffix), METADATA_PARAMS(Z_Construct_UClass_USoundAtomCueSheetImportOptions_Statics::NewProp_AssetFilenameSuffix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCueSheetImportOptions_Statics::NewProp_AssetFilenameSuffix_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCueSheetImportOptions_Statics::NewProp_AssetFilenamePrefix_MetaData[] = {
		{ "ModuleRelativePath", "Private/Factories/SoundAtomCueSheetImportOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USoundAtomCueSheetImportOptions_Statics::NewProp_AssetFilenamePrefix = { "AssetFilenamePrefix", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundAtomCueSheetImportOptions, AssetFilenamePrefix), METADATA_PARAMS(Z_Construct_UClass_USoundAtomCueSheetImportOptions_Statics::NewProp_AssetFilenamePrefix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCueSheetImportOptions_Statics::NewProp_AssetFilenamePrefix_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCueSheetImportOptions_Statics::NewProp_bUseCueSheetNameAsPrefix_MetaData[] = {
		{ "ModuleRelativePath", "Private/Factories/SoundAtomCueSheetImportOptions.h" },
	};
#endif
	void Z_Construct_UClass_USoundAtomCueSheetImportOptions_Statics::NewProp_bUseCueSheetNameAsPrefix_SetBit(void* Obj)
	{
		((USoundAtomCueSheetImportOptions*)Obj)->bUseCueSheetNameAsPrefix = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundAtomCueSheetImportOptions_Statics::NewProp_bUseCueSheetNameAsPrefix = { "bUseCueSheetNameAsPrefix", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USoundAtomCueSheetImportOptions), &Z_Construct_UClass_USoundAtomCueSheetImportOptions_Statics::NewProp_bUseCueSheetNameAsPrefix_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundAtomCueSheetImportOptions_Statics::NewProp_bUseCueSheetNameAsPrefix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCueSheetImportOptions_Statics::NewProp_bUseCueSheetNameAsPrefix_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCueSheetImportOptions_Statics::NewProp_AwbDirectory_MetaData[] = {
		{ "ModuleRelativePath", "Private/Factories/SoundAtomCueSheetImportOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USoundAtomCueSheetImportOptions_Statics::NewProp_AwbDirectory = { "AwbDirectory", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundAtomCueSheetImportOptions, AwbDirectory), METADATA_PARAMS(Z_Construct_UClass_USoundAtomCueSheetImportOptions_Statics::NewProp_AwbDirectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCueSheetImportOptions_Statics::NewProp_AwbDirectory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCueSheetImportOptions_Statics::NewProp_bUseAwbRoot_MetaData[] = {
		{ "ModuleRelativePath", "Private/Factories/SoundAtomCueSheetImportOptions.h" },
	};
#endif
	void Z_Construct_UClass_USoundAtomCueSheetImportOptions_Statics::NewProp_bUseAwbRoot_SetBit(void* Obj)
	{
		((USoundAtomCueSheetImportOptions*)Obj)->bUseAwbRoot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundAtomCueSheetImportOptions_Statics::NewProp_bUseAwbRoot = { "bUseAwbRoot", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USoundAtomCueSheetImportOptions), &Z_Construct_UClass_USoundAtomCueSheetImportOptions_Statics::NewProp_bUseAwbRoot_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundAtomCueSheetImportOptions_Statics::NewProp_bUseAwbRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCueSheetImportOptions_Statics::NewProp_bUseAwbRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCueSheetImportOptions_Statics::NewProp_bOverrideAwbDirectory_MetaData[] = {
		{ "ModuleRelativePath", "Private/Factories/SoundAtomCueSheetImportOptions.h" },
	};
#endif
	void Z_Construct_UClass_USoundAtomCueSheetImportOptions_Statics::NewProp_bOverrideAwbDirectory_SetBit(void* Obj)
	{
		((USoundAtomCueSheetImportOptions*)Obj)->bOverrideAwbDirectory = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundAtomCueSheetImportOptions_Statics::NewProp_bOverrideAwbDirectory = { "bOverrideAwbDirectory", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USoundAtomCueSheetImportOptions), &Z_Construct_UClass_USoundAtomCueSheetImportOptions_Statics::NewProp_bOverrideAwbDirectory_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundAtomCueSheetImportOptions_Statics::NewProp_bOverrideAwbDirectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCueSheetImportOptions_Statics::NewProp_bOverrideAwbDirectory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundAtomCueSheetImportOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCueSheetImportOptions_Statics::NewProp_ExistingCuePreset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCueSheetImportOptions_Statics::NewProp_ExistingCuePreset_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCueSheetImportOptions_Statics::NewProp_NewCuePreset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCueSheetImportOptions_Statics::NewProp_NewCuePreset_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCueSheetImportOptions_Statics::NewProp_bEnableDistanceCulling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCueSheetImportOptions_Statics::NewProp_bEnableEconomicTick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCueSheetImportOptions_Statics::NewProp_CueColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCueSheetImportOptions_Statics::NewProp_AssetFilenameSuffix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCueSheetImportOptions_Statics::NewProp_AssetFilenamePrefix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCueSheetImportOptions_Statics::NewProp_bUseCueSheetNameAsPrefix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCueSheetImportOptions_Statics::NewProp_AwbDirectory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCueSheetImportOptions_Statics::NewProp_bUseAwbRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCueSheetImportOptions_Statics::NewProp_bOverrideAwbDirectory,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundAtomCueSheetImportOptions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundAtomCueSheetImportOptions>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundAtomCueSheetImportOptions_Statics::ClassParams = {
		&USoundAtomCueSheetImportOptions::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundAtomCueSheetImportOptions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCueSheetImportOptions_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USoundAtomCueSheetImportOptions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCueSheetImportOptions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundAtomCueSheetImportOptions()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundAtomCueSheetImportOptions_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundAtomCueSheetImportOptions, 3093443947);
	template<> CRIWAREEDITOR_API UClass* StaticClass<USoundAtomCueSheetImportOptions>()
	{
		return USoundAtomCueSheetImportOptions::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundAtomCueSheetImportOptions(Z_Construct_UClass_USoundAtomCueSheetImportOptions, &USoundAtomCueSheetImportOptions::StaticClass, TEXT("/Script/CriWareEditor"), TEXT("USoundAtomCueSheetImportOptions"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundAtomCueSheetImportOptions);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
