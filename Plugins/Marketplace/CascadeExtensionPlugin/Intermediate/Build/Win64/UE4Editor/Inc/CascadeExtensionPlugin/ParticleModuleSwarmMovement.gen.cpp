// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CascadeExtensionPlugin/Public/ParticleModuleSwarmMovement.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleSwarmMovement() {}
// Cross Module References
	CASCADEEXTENSIONPLUGIN_API UClass* Z_Construct_UClass_UParticleModuleSwarmMovement_NoRegister();
	CASCADEEXTENSIONPLUGIN_API UClass* Z_Construct_UClass_UParticleModuleSwarmMovement();
	CASCADEEXTENSIONPLUGIN_API UClass* Z_Construct_UClass_UAbstractParticleModule();
	UPackage* Z_Construct_UPackage__Script_CascadeExtensionPlugin();
	CASCADEEXTENSIONPLUGIN_API UEnum* Z_Construct_UEnum_CascadeExtensionPlugin_EDistanceWeight();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UParticleModuleSwarmMovement::StaticRegisterNativesUParticleModuleSwarmMovement()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleSwarmMovement_NoRegister()
	{
		return UParticleModuleSwarmMovement::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleSwarmMovement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicSteeringPointProviderName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DynamicSteeringPointProviderName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteeringTargetDistanceWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SteeringTargetDistanceWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteeringWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SteeringWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteeringTargets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SteeringTargets;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteeringTargets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeparationDistanceWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SeparationDistanceWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlindspotAngleDeg_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlindspotAngleDeg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CohesionWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CohesionWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlignmentWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AlignmentWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeparationWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SeparationWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAcceleration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxAcceleration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerceptionRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PerceptionRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleSwarmMovement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbstractParticleModule,
		(UObject* (*)())Z_Construct_UPackage__Script_CascadeExtensionPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSwarmMovement_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "ParticleModuleSwarmMovement.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ParticleModuleSwarmMovement.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSwarmMovement_Statics::NewProp_DynamicSteeringPointProviderName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ParticleModuleSwarmMovement" },
		{ "ModuleRelativePath", "Public/ParticleModuleSwarmMovement.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UParticleModuleSwarmMovement_Statics::NewProp_DynamicSteeringPointProviderName = { "DynamicSteeringPointProviderName", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleSwarmMovement, DynamicSteeringPointProviderName), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSwarmMovement_Statics::NewProp_DynamicSteeringPointProviderName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSwarmMovement_Statics::NewProp_DynamicSteeringPointProviderName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSwarmMovement_Statics::NewProp_SteeringTargetDistanceWeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ParticleModuleSwarmMovement" },
		{ "ModuleRelativePath", "Public/ParticleModuleSwarmMovement.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleSwarmMovement_Statics::NewProp_SteeringTargetDistanceWeight = { "SteeringTargetDistanceWeight", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleSwarmMovement, SteeringTargetDistanceWeight), Z_Construct_UEnum_CascadeExtensionPlugin_EDistanceWeight, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSwarmMovement_Statics::NewProp_SteeringTargetDistanceWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSwarmMovement_Statics::NewProp_SteeringTargetDistanceWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSwarmMovement_Statics::NewProp_SteeringWeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ParticleModuleSwarmMovement" },
		{ "ModuleRelativePath", "Public/ParticleModuleSwarmMovement.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleSwarmMovement_Statics::NewProp_SteeringWeight = { "SteeringWeight", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleSwarmMovement, SteeringWeight), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSwarmMovement_Statics::NewProp_SteeringWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSwarmMovement_Statics::NewProp_SteeringWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSwarmMovement_Statics::NewProp_SteeringTargets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ParticleModuleSwarmMovement" },
		{ "ModuleRelativePath", "Public/ParticleModuleSwarmMovement.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UParticleModuleSwarmMovement_Statics::NewProp_SteeringTargets = { "SteeringTargets", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleSwarmMovement, SteeringTargets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSwarmMovement_Statics::NewProp_SteeringTargets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSwarmMovement_Statics::NewProp_SteeringTargets_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleSwarmMovement_Statics::NewProp_SteeringTargets_Inner = { "SteeringTargets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSwarmMovement_Statics::NewProp_SeparationDistanceWeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ParticleModuleSwarmMovement" },
		{ "ModuleRelativePath", "Public/ParticleModuleSwarmMovement.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleSwarmMovement_Statics::NewProp_SeparationDistanceWeight = { "SeparationDistanceWeight", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleSwarmMovement, SeparationDistanceWeight), Z_Construct_UEnum_CascadeExtensionPlugin_EDistanceWeight, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSwarmMovement_Statics::NewProp_SeparationDistanceWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSwarmMovement_Statics::NewProp_SeparationDistanceWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSwarmMovement_Statics::NewProp_BlindspotAngleDeg_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ParticleModuleSwarmMovement" },
		{ "ModuleRelativePath", "Public/ParticleModuleSwarmMovement.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleSwarmMovement_Statics::NewProp_BlindspotAngleDeg = { "BlindspotAngleDeg", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleSwarmMovement, BlindspotAngleDeg), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSwarmMovement_Statics::NewProp_BlindspotAngleDeg_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSwarmMovement_Statics::NewProp_BlindspotAngleDeg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSwarmMovement_Statics::NewProp_CohesionWeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ParticleModuleSwarmMovement" },
		{ "ModuleRelativePath", "Public/ParticleModuleSwarmMovement.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleSwarmMovement_Statics::NewProp_CohesionWeight = { "CohesionWeight", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleSwarmMovement, CohesionWeight), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSwarmMovement_Statics::NewProp_CohesionWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSwarmMovement_Statics::NewProp_CohesionWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSwarmMovement_Statics::NewProp_AlignmentWeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ParticleModuleSwarmMovement" },
		{ "ModuleRelativePath", "Public/ParticleModuleSwarmMovement.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleSwarmMovement_Statics::NewProp_AlignmentWeight = { "AlignmentWeight", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleSwarmMovement, AlignmentWeight), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSwarmMovement_Statics::NewProp_AlignmentWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSwarmMovement_Statics::NewProp_AlignmentWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSwarmMovement_Statics::NewProp_SeparationWeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ParticleModuleSwarmMovement" },
		{ "ModuleRelativePath", "Public/ParticleModuleSwarmMovement.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleSwarmMovement_Statics::NewProp_SeparationWeight = { "SeparationWeight", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleSwarmMovement, SeparationWeight), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSwarmMovement_Statics::NewProp_SeparationWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSwarmMovement_Statics::NewProp_SeparationWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSwarmMovement_Statics::NewProp_MaxVelocity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ParticleModuleSwarmMovement" },
		{ "ModuleRelativePath", "Public/ParticleModuleSwarmMovement.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleSwarmMovement_Statics::NewProp_MaxVelocity = { "MaxVelocity", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleSwarmMovement, MaxVelocity), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSwarmMovement_Statics::NewProp_MaxVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSwarmMovement_Statics::NewProp_MaxVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSwarmMovement_Statics::NewProp_MaxAcceleration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ParticleModuleSwarmMovement" },
		{ "ModuleRelativePath", "Public/ParticleModuleSwarmMovement.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleSwarmMovement_Statics::NewProp_MaxAcceleration = { "MaxAcceleration", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleSwarmMovement, MaxAcceleration), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSwarmMovement_Statics::NewProp_MaxAcceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSwarmMovement_Statics::NewProp_MaxAcceleration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSwarmMovement_Statics::NewProp_PerceptionRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ParticleModuleSwarmMovement" },
		{ "ModuleRelativePath", "Public/ParticleModuleSwarmMovement.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleSwarmMovement_Statics::NewProp_PerceptionRadius = { "PerceptionRadius", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleSwarmMovement, PerceptionRadius), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSwarmMovement_Statics::NewProp_PerceptionRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSwarmMovement_Statics::NewProp_PerceptionRadius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleSwarmMovement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSwarmMovement_Statics::NewProp_DynamicSteeringPointProviderName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSwarmMovement_Statics::NewProp_SteeringTargetDistanceWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSwarmMovement_Statics::NewProp_SteeringWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSwarmMovement_Statics::NewProp_SteeringTargets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSwarmMovement_Statics::NewProp_SteeringTargets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSwarmMovement_Statics::NewProp_SeparationDistanceWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSwarmMovement_Statics::NewProp_BlindspotAngleDeg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSwarmMovement_Statics::NewProp_CohesionWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSwarmMovement_Statics::NewProp_AlignmentWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSwarmMovement_Statics::NewProp_SeparationWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSwarmMovement_Statics::NewProp_MaxVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSwarmMovement_Statics::NewProp_MaxAcceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSwarmMovement_Statics::NewProp_PerceptionRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleSwarmMovement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleSwarmMovement>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleSwarmMovement_Statics::ClassParams = {
		&UParticleModuleSwarmMovement::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleSwarmMovement_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSwarmMovement_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSwarmMovement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSwarmMovement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleSwarmMovement()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleSwarmMovement_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleSwarmMovement, 378765582);
	template<> CASCADEEXTENSIONPLUGIN_API UClass* StaticClass<UParticleModuleSwarmMovement>()
	{
		return UParticleModuleSwarmMovement::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleSwarmMovement(Z_Construct_UClass_UParticleModuleSwarmMovement, &UParticleModuleSwarmMovement::StaticClass, TEXT("/Script/CascadeExtensionPlugin"), TEXT("UParticleModuleSwarmMovement"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleSwarmMovement);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
