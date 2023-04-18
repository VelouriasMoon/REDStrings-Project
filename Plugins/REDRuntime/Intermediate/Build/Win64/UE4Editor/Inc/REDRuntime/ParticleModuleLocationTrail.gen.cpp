// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "REDRuntime/Public/ParticleModuleLocationTrail.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleLocationTrail() {}
// Cross Module References
	REDRUNTIME_API UClass* Z_Construct_UClass_UParticleModuleLocationTrail_NoRegister();
	REDRUNTIME_API UClass* Z_Construct_UClass_UParticleModuleLocationTrail();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationBase();
	UPackage* Z_Construct_UPackage__Script_REDRuntime();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
	REDRUNTIME_API UEnum* Z_Construct_UEnum_REDRuntime_ELocationTrailSource();
// End Cross Module References
	void UParticleModuleLocationTrail::StaticRegisterNativesUParticleModuleLocationTrail()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleLocationTrail_NoRegister()
	{
		return UParticleModuleLocationTrail::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleLocationTrail_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Velocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidthSplitNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WidthSplitNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SourceType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleLocationTrail_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleLocationBase,
		(UObject* (*)())Z_Construct_UPackage__Script_REDRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationTrail_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "ParticleModuleLocationTrail.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ParticleModuleLocationTrail.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationTrail_Statics::NewProp_Velocity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "ModuleRelativePath", "Public/ParticleModuleLocationTrail.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleLocationTrail_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleLocationTrail, Velocity), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationTrail_Statics::NewProp_Velocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationTrail_Statics::NewProp_Velocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationTrail_Statics::NewProp_WidthSplitNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ParticleModuleLocationTrail" },
		{ "ModuleRelativePath", "Public/ParticleModuleLocationTrail.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UParticleModuleLocationTrail_Statics::NewProp_WidthSplitNum = { "WidthSplitNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleLocationTrail, WidthSplitNum), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationTrail_Statics::NewProp_WidthSplitNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationTrail_Statics::NewProp_WidthSplitNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationTrail_Statics::NewProp_SourceType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ParticleModuleLocationTrail" },
		{ "ModuleRelativePath", "Public/ParticleModuleLocationTrail.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleLocationTrail_Statics::NewProp_SourceType = { "SourceType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleLocationTrail, SourceType), Z_Construct_UEnum_REDRuntime_ELocationTrailSource, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationTrail_Statics::NewProp_SourceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationTrail_Statics::NewProp_SourceType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleLocationTrail_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationTrail_Statics::NewProp_Velocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationTrail_Statics::NewProp_WidthSplitNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationTrail_Statics::NewProp_SourceType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleLocationTrail_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleLocationTrail>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleLocationTrail_Statics::ClassParams = {
		&UParticleModuleLocationTrail::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleLocationTrail_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationTrail_Statics::PropPointers),
		0,
		0x008010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationTrail_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationTrail_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleLocationTrail()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleLocationTrail_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleLocationTrail, 1151580956);
	template<> REDRUNTIME_API UClass* StaticClass<UParticleModuleLocationTrail>()
	{
		return UParticleModuleLocationTrail::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleLocationTrail(Z_Construct_UClass_UParticleModuleLocationTrail, &UParticleModuleLocationTrail::StaticClass, TEXT("/Script/REDRuntime"), TEXT("UParticleModuleLocationTrail"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleLocationTrail);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
