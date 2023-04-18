// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CascadeExtensionPlugin/Public/ParticleDecalComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleDecalComponent() {}
// Cross Module References
	CASCADEEXTENSIONPLUGIN_API UClass* Z_Construct_UClass_UParticleDecalComponent_NoRegister();
	CASCADEEXTENSIONPLUGIN_API UClass* Z_Construct_UClass_UParticleDecalComponent();
	ENGINE_API UClass* Z_Construct_UClass_UDecalComponent();
	UPackage* Z_Construct_UPackage__Script_CascadeExtensionPlugin();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UParticleDecalComponent::StaticRegisterNativesUParticleDecalComponent()
	{
	}
	UClass* Z_Construct_UClass_UParticleDecalComponent_NoRegister()
	{
		return UParticleDecalComponent::StaticClass();
	}
	struct Z_Construct_UClass_UParticleDecalComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BaseScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeLeftUntilDestruction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeLeftUntilDestruction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModuleID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ModuleID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleDecalComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDecalComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CascadeExtensionPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleDecalComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Collision Object Physics SceneComponent Activation Components|Activation Mobility Trigger PhysicsVolume" },
		{ "IncludePath", "ParticleDecalComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ParticleDecalComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleDecalComponent_Statics::NewProp_BaseScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ParticleDecalComponent" },
		{ "ModuleRelativePath", "Public/ParticleDecalComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleDecalComponent_Statics::NewProp_BaseScale = { "BaseScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleDecalComponent, BaseScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UParticleDecalComponent_Statics::NewProp_BaseScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleDecalComponent_Statics::NewProp_BaseScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleDecalComponent_Statics::NewProp_TimeLeftUntilDestruction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ParticleDecalComponent" },
		{ "ModuleRelativePath", "Public/ParticleDecalComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleDecalComponent_Statics::NewProp_TimeLeftUntilDestruction = { "TimeLeftUntilDestruction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleDecalComponent, TimeLeftUntilDestruction), METADATA_PARAMS(Z_Construct_UClass_UParticleDecalComponent_Statics::NewProp_TimeLeftUntilDestruction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleDecalComponent_Statics::NewProp_TimeLeftUntilDestruction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleDecalComponent_Statics::NewProp_ModuleID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ParticleDecalComponent" },
		{ "ModuleRelativePath", "Public/ParticleDecalComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UParticleDecalComponent_Statics::NewProp_ModuleID = { "ModuleID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleDecalComponent, ModuleID), METADATA_PARAMS(Z_Construct_UClass_UParticleDecalComponent_Statics::NewProp_ModuleID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleDecalComponent_Statics::NewProp_ModuleID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleDecalComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleDecalComponent_Statics::NewProp_BaseScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleDecalComponent_Statics::NewProp_TimeLeftUntilDestruction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleDecalComponent_Statics::NewProp_ModuleID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleDecalComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleDecalComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleDecalComponent_Statics::ClassParams = {
		&UParticleDecalComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleDecalComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleDecalComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleDecalComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleDecalComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleDecalComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleDecalComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleDecalComponent, 1289988945);
	template<> CASCADEEXTENSIONPLUGIN_API UClass* StaticClass<UParticleDecalComponent>()
	{
		return UParticleDecalComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleDecalComponent(Z_Construct_UClass_UParticleDecalComponent, &UParticleDecalComponent::StaticClass, TEXT("/Script/CascadeExtensionPlugin"), TEXT("UParticleDecalComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleDecalComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
