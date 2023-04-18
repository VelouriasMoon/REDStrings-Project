// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CascadeExtensionPlugin/Public/ParticleModuleLocationDonut.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleLocationDonut() {}
// Cross Module References
	CASCADEEXTENSIONPLUGIN_API UClass* Z_Construct_UClass_UParticleModuleLocationDonut_NoRegister();
	CASCADEEXTENSIONPLUGIN_API UClass* Z_Construct_UClass_UParticleModuleLocationDonut();
	CASCADEEXTENSIONPLUGIN_API UClass* Z_Construct_UClass_UAbstractParticleModule();
	UPackage* Z_Construct_UPackage__Script_CascadeExtensionPlugin();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UParticleModuleLocationDonut::StaticRegisterNativesUParticleModuleLocationDonut()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleLocationDonut_NoRegister()
	{
		return UParticleModuleLocationDonut::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleLocationDonut_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsFlat_MetaData[];
#endif
		static void NewProp_IsFlat_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsFlat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurfaceOnly_MetaData[];
#endif
		static void NewProp_SurfaceOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SurfaceOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Center;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleLocationDonut_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbstractParticleModule,
		(UObject* (*)())Z_Construct_UPackage__Script_CascadeExtensionPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationDonut_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "ParticleModuleLocationDonut.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ParticleModuleLocationDonut.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationDonut_Statics::NewProp_IsFlat_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ParticleModuleLocationDonut" },
		{ "ModuleRelativePath", "Public/ParticleModuleLocationDonut.h" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleLocationDonut_Statics::NewProp_IsFlat_SetBit(void* Obj)
	{
		((UParticleModuleLocationDonut*)Obj)->IsFlat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleLocationDonut_Statics::NewProp_IsFlat = { "IsFlat", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UParticleModuleLocationDonut), &Z_Construct_UClass_UParticleModuleLocationDonut_Statics::NewProp_IsFlat_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationDonut_Statics::NewProp_IsFlat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationDonut_Statics::NewProp_IsFlat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationDonut_Statics::NewProp_SurfaceOnly_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ParticleModuleLocationDonut" },
		{ "ModuleRelativePath", "Public/ParticleModuleLocationDonut.h" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleLocationDonut_Statics::NewProp_SurfaceOnly_SetBit(void* Obj)
	{
		((UParticleModuleLocationDonut*)Obj)->SurfaceOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleLocationDonut_Statics::NewProp_SurfaceOnly = { "SurfaceOnly", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UParticleModuleLocationDonut), &Z_Construct_UClass_UParticleModuleLocationDonut_Statics::NewProp_SurfaceOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationDonut_Statics::NewProp_SurfaceOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationDonut_Statics::NewProp_SurfaceOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationDonut_Statics::NewProp_MaxRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ParticleModuleLocationDonut" },
		{ "ModuleRelativePath", "Public/ParticleModuleLocationDonut.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleLocationDonut_Statics::NewProp_MaxRadius = { "MaxRadius", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleLocationDonut, MaxRadius), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationDonut_Statics::NewProp_MaxRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationDonut_Statics::NewProp_MaxRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationDonut_Statics::NewProp_MinRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ParticleModuleLocationDonut" },
		{ "ModuleRelativePath", "Public/ParticleModuleLocationDonut.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleLocationDonut_Statics::NewProp_MinRadius = { "MinRadius", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleLocationDonut, MinRadius), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationDonut_Statics::NewProp_MinRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationDonut_Statics::NewProp_MinRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationDonut_Statics::NewProp_Center_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ParticleModuleLocationDonut" },
		{ "ModuleRelativePath", "Public/ParticleModuleLocationDonut.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleLocationDonut_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleLocationDonut, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationDonut_Statics::NewProp_Center_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationDonut_Statics::NewProp_Center_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleLocationDonut_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationDonut_Statics::NewProp_IsFlat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationDonut_Statics::NewProp_SurfaceOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationDonut_Statics::NewProp_MaxRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationDonut_Statics::NewProp_MinRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationDonut_Statics::NewProp_Center,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleLocationDonut_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleLocationDonut>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleLocationDonut_Statics::ClassParams = {
		&UParticleModuleLocationDonut::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleLocationDonut_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationDonut_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationDonut_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationDonut_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleLocationDonut()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleLocationDonut_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleLocationDonut, 3276152173);
	template<> CASCADEEXTENSIONPLUGIN_API UClass* StaticClass<UParticleModuleLocationDonut>()
	{
		return UParticleModuleLocationDonut::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleLocationDonut(Z_Construct_UClass_UParticleModuleLocationDonut, &UParticleModuleLocationDonut::StaticClass, TEXT("/Script/CascadeExtensionPlugin"), TEXT("UParticleModuleLocationDonut"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleLocationDonut);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
