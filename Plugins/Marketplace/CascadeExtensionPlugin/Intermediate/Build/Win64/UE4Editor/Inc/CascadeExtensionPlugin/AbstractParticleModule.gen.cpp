// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CascadeExtensionPlugin/Public/AbstractParticleModule.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbstractParticleModule() {}
// Cross Module References
	CASCADEEXTENSIONPLUGIN_API UClass* Z_Construct_UClass_UAbstractParticleModule_NoRegister();
	CASCADEEXTENSIONPLUGIN_API UClass* Z_Construct_UClass_UAbstractParticleModule();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModule();
	UPackage* Z_Construct_UPackage__Script_CascadeExtensionPlugin();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FParticleRandomSeedInfo();
// End Cross Module References
	void UAbstractParticleModule::StaticRegisterNativesUAbstractParticleModule()
	{
	}
	UClass* Z_Construct_UClass_UAbstractParticleModule_NoRegister()
	{
		return UAbstractParticleModule::StaticClass();
	}
	struct Z_Construct_UClass_UAbstractParticleModule_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoopAfter_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LoopAfter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomSeedInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RandomSeedInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbstractParticleModule_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModule,
		(UObject* (*)())Z_Construct_UPackage__Script_CascadeExtensionPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbstractParticleModule_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AbstractParticleModule.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AbstractParticleModule.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbstractParticleModule_Statics::NewProp_LoopAfter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AbstractParticleModule" },
		{ "ModuleRelativePath", "Public/AbstractParticleModule.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAbstractParticleModule_Statics::NewProp_LoopAfter = { "LoopAfter", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbstractParticleModule, LoopAfter), METADATA_PARAMS(Z_Construct_UClass_UAbstractParticleModule_Statics::NewProp_LoopAfter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbstractParticleModule_Statics::NewProp_LoopAfter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbstractParticleModule_Statics::NewProp_MaxDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AbstractParticleModule" },
		{ "ModuleRelativePath", "Public/AbstractParticleModule.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAbstractParticleModule_Statics::NewProp_MaxDuration = { "MaxDuration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbstractParticleModule, MaxDuration), METADATA_PARAMS(Z_Construct_UClass_UAbstractParticleModule_Statics::NewProp_MaxDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbstractParticleModule_Statics::NewProp_MaxDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbstractParticleModule_Statics::NewProp_StartDelay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AbstractParticleModule" },
		{ "ModuleRelativePath", "Public/AbstractParticleModule.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAbstractParticleModule_Statics::NewProp_StartDelay = { "StartDelay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbstractParticleModule, StartDelay), METADATA_PARAMS(Z_Construct_UClass_UAbstractParticleModule_Statics::NewProp_StartDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbstractParticleModule_Statics::NewProp_StartDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbstractParticleModule_Statics::NewProp_RandomSeedInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "ModuleRelativePath", "Public/AbstractParticleModule.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbstractParticleModule_Statics::NewProp_RandomSeedInfo = { "RandomSeedInfo", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbstractParticleModule, RandomSeedInfo), Z_Construct_UScriptStruct_FParticleRandomSeedInfo, METADATA_PARAMS(Z_Construct_UClass_UAbstractParticleModule_Statics::NewProp_RandomSeedInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbstractParticleModule_Statics::NewProp_RandomSeedInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbstractParticleModule_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbstractParticleModule_Statics::NewProp_LoopAfter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbstractParticleModule_Statics::NewProp_MaxDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbstractParticleModule_Statics::NewProp_StartDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbstractParticleModule_Statics::NewProp_RandomSeedInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbstractParticleModule_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbstractParticleModule>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAbstractParticleModule_Statics::ClassParams = {
		&UAbstractParticleModule::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAbstractParticleModule_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAbstractParticleModule_Statics::PropPointers),
		0,
		0x000010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAbstractParticleModule_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAbstractParticleModule_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAbstractParticleModule()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAbstractParticleModule_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAbstractParticleModule, 1022754784);
	template<> CASCADEEXTENSIONPLUGIN_API UClass* StaticClass<UAbstractParticleModule>()
	{
		return UAbstractParticleModule::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAbstractParticleModule(Z_Construct_UClass_UAbstractParticleModule, &UAbstractParticleModule::StaticClass, TEXT("/Script/CascadeExtensionPlugin"), TEXT("UAbstractParticleModule"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbstractParticleModule);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
