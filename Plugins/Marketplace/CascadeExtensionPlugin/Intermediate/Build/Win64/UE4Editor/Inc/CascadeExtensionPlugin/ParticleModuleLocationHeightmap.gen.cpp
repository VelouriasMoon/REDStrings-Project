// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CascadeExtensionPlugin/Public/ParticleModuleLocationHeightmap.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleLocationHeightmap() {}
// Cross Module References
	CASCADEEXTENSIONPLUGIN_API UClass* Z_Construct_UClass_UParticleModuleLocationHeightmap_NoRegister();
	CASCADEEXTENSIONPLUGIN_API UClass* Z_Construct_UClass_UParticleModuleLocationHeightmap();
	CASCADEEXTENSIONPLUGIN_API UClass* Z_Construct_UClass_UAbstractParticleModule();
	UPackage* Z_Construct_UPackage__Script_CascadeExtensionPlugin();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	void UParticleModuleLocationHeightmap::StaticRegisterNativesUParticleModuleLocationHeightmap()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleLocationHeightmap_NoRegister()
	{
		return UParticleModuleLocationHeightmap::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleLocationHeightmap_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Intensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Intensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapBounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MapBounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmoothUpdate_MetaData[];
#endif
		static void NewProp_SmoothUpdate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SmoothUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateWithTick_MetaData[];
#endif
		static void NewProp_UpdateWithTick_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UpdateWithTick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeightmapTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HeightmapTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleLocationHeightmap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbstractParticleModule,
		(UObject* (*)())Z_Construct_UPackage__Script_CascadeExtensionPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationHeightmap_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "ParticleModuleLocationHeightmap.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ParticleModuleLocationHeightmap.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationHeightmap_Statics::NewProp_Intensity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ParticleModuleLocationHeightmap" },
		{ "ModuleRelativePath", "Public/ParticleModuleLocationHeightmap.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleLocationHeightmap_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleLocationHeightmap, Intensity), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationHeightmap_Statics::NewProp_Intensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationHeightmap_Statics::NewProp_Intensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationHeightmap_Statics::NewProp_MapBounds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ParticleModuleLocationHeightmap" },
		{ "ModuleRelativePath", "Public/ParticleModuleLocationHeightmap.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleLocationHeightmap_Statics::NewProp_MapBounds = { "MapBounds", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleLocationHeightmap, MapBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationHeightmap_Statics::NewProp_MapBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationHeightmap_Statics::NewProp_MapBounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationHeightmap_Statics::NewProp_SmoothUpdate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ParticleModuleLocationHeightmap" },
		{ "ModuleRelativePath", "Public/ParticleModuleLocationHeightmap.h" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleLocationHeightmap_Statics::NewProp_SmoothUpdate_SetBit(void* Obj)
	{
		((UParticleModuleLocationHeightmap*)Obj)->SmoothUpdate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleLocationHeightmap_Statics::NewProp_SmoothUpdate = { "SmoothUpdate", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UParticleModuleLocationHeightmap), &Z_Construct_UClass_UParticleModuleLocationHeightmap_Statics::NewProp_SmoothUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationHeightmap_Statics::NewProp_SmoothUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationHeightmap_Statics::NewProp_SmoothUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationHeightmap_Statics::NewProp_UpdateWithTick_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ParticleModuleLocationHeightmap" },
		{ "ModuleRelativePath", "Public/ParticleModuleLocationHeightmap.h" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleLocationHeightmap_Statics::NewProp_UpdateWithTick_SetBit(void* Obj)
	{
		((UParticleModuleLocationHeightmap*)Obj)->UpdateWithTick = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleLocationHeightmap_Statics::NewProp_UpdateWithTick = { "UpdateWithTick", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UParticleModuleLocationHeightmap), &Z_Construct_UClass_UParticleModuleLocationHeightmap_Statics::NewProp_UpdateWithTick_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationHeightmap_Statics::NewProp_UpdateWithTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationHeightmap_Statics::NewProp_UpdateWithTick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationHeightmap_Statics::NewProp_HeightmapTexture_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ParticleModuleLocationHeightmap" },
		{ "ModuleRelativePath", "Public/ParticleModuleLocationHeightmap.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UParticleModuleLocationHeightmap_Statics::NewProp_HeightmapTexture = { "HeightmapTexture", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleLocationHeightmap, HeightmapTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationHeightmap_Statics::NewProp_HeightmapTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationHeightmap_Statics::NewProp_HeightmapTexture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleLocationHeightmap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationHeightmap_Statics::NewProp_Intensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationHeightmap_Statics::NewProp_MapBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationHeightmap_Statics::NewProp_SmoothUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationHeightmap_Statics::NewProp_UpdateWithTick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationHeightmap_Statics::NewProp_HeightmapTexture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleLocationHeightmap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleLocationHeightmap>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleLocationHeightmap_Statics::ClassParams = {
		&UParticleModuleLocationHeightmap::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleLocationHeightmap_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationHeightmap_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationHeightmap_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationHeightmap_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleLocationHeightmap()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleLocationHeightmap_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleLocationHeightmap, 3696989839);
	template<> CASCADEEXTENSIONPLUGIN_API UClass* StaticClass<UParticleModuleLocationHeightmap>()
	{
		return UParticleModuleLocationHeightmap::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleLocationHeightmap(Z_Construct_UClass_UParticleModuleLocationHeightmap, &UParticleModuleLocationHeightmap::StaticClass, TEXT("/Script/CascadeExtensionPlugin"), TEXT("UParticleModuleLocationHeightmap"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleLocationHeightmap);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
