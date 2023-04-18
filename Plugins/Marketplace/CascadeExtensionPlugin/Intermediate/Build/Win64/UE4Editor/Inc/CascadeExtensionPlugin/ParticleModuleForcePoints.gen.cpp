// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CascadeExtensionPlugin/Public/ParticleModuleForcePoints.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleForcePoints() {}
// Cross Module References
	CASCADEEXTENSIONPLUGIN_API UClass* Z_Construct_UClass_UParticleModuleForcePoints_NoRegister();
	CASCADEEXTENSIONPLUGIN_API UClass* Z_Construct_UClass_UParticleModuleForcePoints();
	CASCADEEXTENSIONPLUGIN_API UClass* Z_Construct_UClass_UAbstractParticleModule();
	UPackage* Z_Construct_UPackage__Script_CascadeExtensionPlugin();
	CASCADEEXTENSIONPLUGIN_API UEnum* Z_Construct_UEnum_CascadeExtensionPlugin_EDistanceWeight();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UParticleModuleForcePoints::StaticRegisterNativesUParticleModuleForcePoints()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleForcePoints_NoRegister()
	{
		return UParticleModuleForcePoints::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleForcePoints_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicForcePointProviderName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DynamicForcePointProviderName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeparationDistanceWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SeparationDistanceWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Points;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Intensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Intensity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleForcePoints_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbstractParticleModule,
		(UObject* (*)())Z_Construct_UPackage__Script_CascadeExtensionPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleForcePoints_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "ParticleModuleForcePoints.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ParticleModuleForcePoints.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleForcePoints_Statics::NewProp_DynamicForcePointProviderName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ParticleModuleForcePoints" },
		{ "ModuleRelativePath", "Public/ParticleModuleForcePoints.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UParticleModuleForcePoints_Statics::NewProp_DynamicForcePointProviderName = { "DynamicForcePointProviderName", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleForcePoints, DynamicForcePointProviderName), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleForcePoints_Statics::NewProp_DynamicForcePointProviderName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleForcePoints_Statics::NewProp_DynamicForcePointProviderName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleForcePoints_Statics::NewProp_DistanceScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ParticleModuleForcePoints" },
		{ "ModuleRelativePath", "Public/ParticleModuleForcePoints.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleForcePoints_Statics::NewProp_DistanceScale = { "DistanceScale", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleForcePoints, DistanceScale), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleForcePoints_Statics::NewProp_DistanceScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleForcePoints_Statics::NewProp_DistanceScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleForcePoints_Statics::NewProp_SeparationDistanceWeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ParticleModuleForcePoints" },
		{ "ModuleRelativePath", "Public/ParticleModuleForcePoints.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleForcePoints_Statics::NewProp_SeparationDistanceWeight = { "SeparationDistanceWeight", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleForcePoints, SeparationDistanceWeight), Z_Construct_UEnum_CascadeExtensionPlugin_EDistanceWeight, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleForcePoints_Statics::NewProp_SeparationDistanceWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleForcePoints_Statics::NewProp_SeparationDistanceWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleForcePoints_Statics::NewProp_Points_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ParticleModuleForcePoints" },
		{ "ModuleRelativePath", "Public/ParticleModuleForcePoints.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UParticleModuleForcePoints_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleForcePoints, Points), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleForcePoints_Statics::NewProp_Points_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleForcePoints_Statics::NewProp_Points_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleForcePoints_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleForcePoints_Statics::NewProp_Intensity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ParticleModuleForcePoints" },
		{ "ModuleRelativePath", "Public/ParticleModuleForcePoints.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleForcePoints_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleForcePoints, Intensity), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleForcePoints_Statics::NewProp_Intensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleForcePoints_Statics::NewProp_Intensity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleForcePoints_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleForcePoints_Statics::NewProp_DynamicForcePointProviderName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleForcePoints_Statics::NewProp_DistanceScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleForcePoints_Statics::NewProp_SeparationDistanceWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleForcePoints_Statics::NewProp_Points,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleForcePoints_Statics::NewProp_Points_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleForcePoints_Statics::NewProp_Intensity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleForcePoints_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleForcePoints>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleForcePoints_Statics::ClassParams = {
		&UParticleModuleForcePoints::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleForcePoints_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleForcePoints_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleForcePoints_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleForcePoints_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleForcePoints()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleForcePoints_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleForcePoints, 2200461346);
	template<> CASCADEEXTENSIONPLUGIN_API UClass* StaticClass<UParticleModuleForcePoints>()
	{
		return UParticleModuleForcePoints::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleForcePoints(Z_Construct_UClass_UParticleModuleForcePoints, &UParticleModuleForcePoints::StaticClass, TEXT("/Script/CascadeExtensionPlugin"), TEXT("UParticleModuleForcePoints"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleForcePoints);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
