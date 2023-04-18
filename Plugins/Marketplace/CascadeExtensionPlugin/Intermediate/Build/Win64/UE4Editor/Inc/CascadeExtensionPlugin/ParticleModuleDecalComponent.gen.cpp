// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CascadeExtensionPlugin/Public/ParticleModuleDecalComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleDecalComponent() {}
// Cross Module References
	CASCADEEXTENSIONPLUGIN_API UClass* Z_Construct_UClass_UParticleModuleDecalComponent_NoRegister();
	CASCADEEXTENSIONPLUGIN_API UClass* Z_Construct_UClass_UParticleModuleDecalComponent();
	CASCADEEXTENSIONPLUGIN_API UClass* Z_Construct_UClass_UAbstractParticleModule();
	UPackage* Z_Construct_UPackage__Script_CascadeExtensionPlugin();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	void UParticleModuleDecalComponent::StaticRegisterNativesUParticleModuleDecalComponent()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleDecalComponent_NoRegister()
	{
		return UParticleModuleDecalComponent::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleDecalComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialColorParameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MaterialColorParameter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptimizeDecalComponentUsage_MetaData[];
#endif
		static void NewProp_OptimizeDecalComponentUsage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OptimizeDecalComponentUsage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SortOrder_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SortOrder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotateToParticleVelocity_MetaData[];
#endif
		static void NewProp_RotateToParticleVelocity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RotateToParticleVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecalRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DecalRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleWithParticleSize_MetaData[];
#endif
		static void NewProp_ScaleWithParticleSize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ScaleWithParticleSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecalScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DecalScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecalMaterials_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DecalMaterials;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DecalMaterials_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleDecalComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbstractParticleModule,
		(UObject* (*)())Z_Construct_UPackage__Script_CascadeExtensionPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleDecalComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "ParticleModuleDecalComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ParticleModuleDecalComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleDecalComponent_Statics::NewProp_MaterialColorParameter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ParticleModuleDecalComponent" },
		{ "ModuleRelativePath", "Public/ParticleModuleDecalComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UParticleModuleDecalComponent_Statics::NewProp_MaterialColorParameter = { "MaterialColorParameter", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleDecalComponent, MaterialColorParameter), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleDecalComponent_Statics::NewProp_MaterialColorParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleDecalComponent_Statics::NewProp_MaterialColorParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleDecalComponent_Statics::NewProp_OptimizeDecalComponentUsage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ParticleModuleDecalComponent" },
		{ "ModuleRelativePath", "Public/ParticleModuleDecalComponent.h" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleDecalComponent_Statics::NewProp_OptimizeDecalComponentUsage_SetBit(void* Obj)
	{
		((UParticleModuleDecalComponent*)Obj)->OptimizeDecalComponentUsage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleDecalComponent_Statics::NewProp_OptimizeDecalComponentUsage = { "OptimizeDecalComponentUsage", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UParticleModuleDecalComponent), &Z_Construct_UClass_UParticleModuleDecalComponent_Statics::NewProp_OptimizeDecalComponentUsage_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleDecalComponent_Statics::NewProp_OptimizeDecalComponentUsage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleDecalComponent_Statics::NewProp_OptimizeDecalComponentUsage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleDecalComponent_Statics::NewProp_SortOrder_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ParticleModuleDecalComponent" },
		{ "ModuleRelativePath", "Public/ParticleModuleDecalComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UParticleModuleDecalComponent_Statics::NewProp_SortOrder = { "SortOrder", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleDecalComponent, SortOrder), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleDecalComponent_Statics::NewProp_SortOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleDecalComponent_Statics::NewProp_SortOrder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleDecalComponent_Statics::NewProp_RotateToParticleVelocity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ParticleModuleDecalComponent" },
		{ "ModuleRelativePath", "Public/ParticleModuleDecalComponent.h" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleDecalComponent_Statics::NewProp_RotateToParticleVelocity_SetBit(void* Obj)
	{
		((UParticleModuleDecalComponent*)Obj)->RotateToParticleVelocity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleDecalComponent_Statics::NewProp_RotateToParticleVelocity = { "RotateToParticleVelocity", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UParticleModuleDecalComponent), &Z_Construct_UClass_UParticleModuleDecalComponent_Statics::NewProp_RotateToParticleVelocity_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleDecalComponent_Statics::NewProp_RotateToParticleVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleDecalComponent_Statics::NewProp_RotateToParticleVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleDecalComponent_Statics::NewProp_DecalRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "ModuleRelativePath", "Public/ParticleModuleDecalComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleDecalComponent_Statics::NewProp_DecalRotation = { "DecalRotation", nullptr, (EPropertyFlags)0x0040008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleDecalComponent, DecalRotation), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleDecalComponent_Statics::NewProp_DecalRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleDecalComponent_Statics::NewProp_DecalRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleDecalComponent_Statics::NewProp_ScaleWithParticleSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ParticleModuleDecalComponent" },
		{ "ModuleRelativePath", "Public/ParticleModuleDecalComponent.h" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleDecalComponent_Statics::NewProp_ScaleWithParticleSize_SetBit(void* Obj)
	{
		((UParticleModuleDecalComponent*)Obj)->ScaleWithParticleSize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleDecalComponent_Statics::NewProp_ScaleWithParticleSize = { "ScaleWithParticleSize", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UParticleModuleDecalComponent), &Z_Construct_UClass_UParticleModuleDecalComponent_Statics::NewProp_ScaleWithParticleSize_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleDecalComponent_Statics::NewProp_ScaleWithParticleSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleDecalComponent_Statics::NewProp_ScaleWithParticleSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleDecalComponent_Statics::NewProp_DecalScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "ModuleRelativePath", "Public/ParticleModuleDecalComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleDecalComponent_Statics::NewProp_DecalScale = { "DecalScale", nullptr, (EPropertyFlags)0x0040008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleDecalComponent, DecalScale), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleDecalComponent_Statics::NewProp_DecalScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleDecalComponent_Statics::NewProp_DecalScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleDecalComponent_Statics::NewProp_DecalMaterials_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ParticleModuleDecalComponent" },
		{ "ModuleRelativePath", "Public/ParticleModuleDecalComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UParticleModuleDecalComponent_Statics::NewProp_DecalMaterials = { "DecalMaterials", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleDecalComponent, DecalMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleDecalComponent_Statics::NewProp_DecalMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleDecalComponent_Statics::NewProp_DecalMaterials_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UParticleModuleDecalComponent_Statics::NewProp_DecalMaterials_Inner = { "DecalMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleDecalComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleDecalComponent_Statics::NewProp_MaterialColorParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleDecalComponent_Statics::NewProp_OptimizeDecalComponentUsage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleDecalComponent_Statics::NewProp_SortOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleDecalComponent_Statics::NewProp_RotateToParticleVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleDecalComponent_Statics::NewProp_DecalRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleDecalComponent_Statics::NewProp_ScaleWithParticleSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleDecalComponent_Statics::NewProp_DecalScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleDecalComponent_Statics::NewProp_DecalMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleDecalComponent_Statics::NewProp_DecalMaterials_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleDecalComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleDecalComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleDecalComponent_Statics::ClassParams = {
		&UParticleModuleDecalComponent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleDecalComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleDecalComponent_Statics::PropPointers),
		0,
		0x008010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleDecalComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleDecalComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleDecalComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleDecalComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleDecalComponent, 2328529213);
	template<> CASCADEEXTENSIONPLUGIN_API UClass* StaticClass<UParticleModuleDecalComponent>()
	{
		return UParticleModuleDecalComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleDecalComponent(Z_Construct_UClass_UParticleModuleDecalComponent, &UParticleModuleDecalComponent::StaticClass, TEXT("/Script/CascadeExtensionPlugin"), TEXT("UParticleModuleDecalComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleDecalComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
