// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CascadeExtensionPlugin/Public/ParticleModuleLocationJiggle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleLocationJiggle() {}
// Cross Module References
	CASCADEEXTENSIONPLUGIN_API UClass* Z_Construct_UClass_UParticleModuleLocationJiggle_NoRegister();
	CASCADEEXTENSIONPLUGIN_API UClass* Z_Construct_UClass_UParticleModuleLocationJiggle();
	CASCADEEXTENSIONPLUGIN_API UClass* Z_Construct_UClass_UAbstractParticleModule();
	UPackage* Z_Construct_UPackage__Script_CascadeExtensionPlugin();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
// End Cross Module References
	void UParticleModuleLocationJiggle::StaticRegisterNativesUParticleModuleLocationJiggle()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleLocationJiggle_NoRegister()
	{
		return UParticleModuleLocationJiggle::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleLocationJiggle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Intensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Intensity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleLocationJiggle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbstractParticleModule,
		(UObject* (*)())Z_Construct_UPackage__Script_CascadeExtensionPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationJiggle_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "ParticleModuleLocationJiggle.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ParticleModuleLocationJiggle.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationJiggle_Statics::NewProp_Intensity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "ModuleRelativePath", "Public/ParticleModuleLocationJiggle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleLocationJiggle_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0040008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleLocationJiggle, Intensity), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationJiggle_Statics::NewProp_Intensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationJiggle_Statics::NewProp_Intensity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleLocationJiggle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationJiggle_Statics::NewProp_Intensity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleLocationJiggle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleLocationJiggle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleLocationJiggle_Statics::ClassParams = {
		&UParticleModuleLocationJiggle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleLocationJiggle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationJiggle_Statics::PropPointers),
		0,
		0x008010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationJiggle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationJiggle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleLocationJiggle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleLocationJiggle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleLocationJiggle, 1345304990);
	template<> CASCADEEXTENSIONPLUGIN_API UClass* StaticClass<UParticleModuleLocationJiggle>()
	{
		return UParticleModuleLocationJiggle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleLocationJiggle(Z_Construct_UClass_UParticleModuleLocationJiggle, &UParticleModuleLocationJiggle::StaticClass, TEXT("/Script/CascadeExtensionPlugin"), TEXT("UParticleModuleLocationJiggle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleLocationJiggle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
