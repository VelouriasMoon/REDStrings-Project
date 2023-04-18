// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CascadeExtensionPlugin/Public/ParticleModuleColorTexture.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleColorTexture() {}
// Cross Module References
	CASCADEEXTENSIONPLUGIN_API UClass* Z_Construct_UClass_UParticleModuleColorTexture_NoRegister();
	CASCADEEXTENSIONPLUGIN_API UClass* Z_Construct_UClass_UParticleModuleColorTexture();
	CASCADEEXTENSIONPLUGIN_API UClass* Z_Construct_UClass_UAbstractParticleModule();
	UPackage* Z_Construct_UPackage__Script_CascadeExtensionPlugin();
	CASCADEEXTENSIONPLUGIN_API UEnum* Z_Construct_UEnum_CascadeExtensionPlugin_ESpaceAxis();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	void UParticleModuleColorTexture::StaticRegisterNativesUParticleModuleColorTexture()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleColorTexture_NoRegister()
	{
		return UParticleModuleColorTexture::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleColorTexture_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseTextureAlpha_MetaData[];
#endif
		static void NewProp_UseTextureAlpha_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseTextureAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Intensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Intensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleAxisToTextureY_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ParticleAxisToTextureY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleAxisToTextureX_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ParticleAxisToTextureX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapBounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MapBounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateWithTick_MetaData[];
#endif
		static void NewProp_UpdateWithTick_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UpdateWithTick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorIndexTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ColorIndexTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleColorTexture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbstractParticleModule,
		(UObject* (*)())Z_Construct_UPackage__Script_CascadeExtensionPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleColorTexture_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "ParticleModuleColorTexture.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ParticleModuleColorTexture.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleColorTexture_Statics::NewProp_UseTextureAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ParticleModuleColorTexture" },
		{ "ModuleRelativePath", "Public/ParticleModuleColorTexture.h" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleColorTexture_Statics::NewProp_UseTextureAlpha_SetBit(void* Obj)
	{
		((UParticleModuleColorTexture*)Obj)->UseTextureAlpha = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleColorTexture_Statics::NewProp_UseTextureAlpha = { "UseTextureAlpha", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UParticleModuleColorTexture), &Z_Construct_UClass_UParticleModuleColorTexture_Statics::NewProp_UseTextureAlpha_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleColorTexture_Statics::NewProp_UseTextureAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleColorTexture_Statics::NewProp_UseTextureAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleColorTexture_Statics::NewProp_Intensity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ParticleModuleColorTexture" },
		{ "ModuleRelativePath", "Public/ParticleModuleColorTexture.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleColorTexture_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleColorTexture, Intensity), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleColorTexture_Statics::NewProp_Intensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleColorTexture_Statics::NewProp_Intensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleColorTexture_Statics::NewProp_ParticleAxisToTextureY_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ParticleModuleColorTexture" },
		{ "ModuleRelativePath", "Public/ParticleModuleColorTexture.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleColorTexture_Statics::NewProp_ParticleAxisToTextureY = { "ParticleAxisToTextureY", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleColorTexture, ParticleAxisToTextureY), Z_Construct_UEnum_CascadeExtensionPlugin_ESpaceAxis, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleColorTexture_Statics::NewProp_ParticleAxisToTextureY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleColorTexture_Statics::NewProp_ParticleAxisToTextureY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleColorTexture_Statics::NewProp_ParticleAxisToTextureX_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ParticleModuleColorTexture" },
		{ "ModuleRelativePath", "Public/ParticleModuleColorTexture.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleColorTexture_Statics::NewProp_ParticleAxisToTextureX = { "ParticleAxisToTextureX", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleColorTexture, ParticleAxisToTextureX), Z_Construct_UEnum_CascadeExtensionPlugin_ESpaceAxis, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleColorTexture_Statics::NewProp_ParticleAxisToTextureX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleColorTexture_Statics::NewProp_ParticleAxisToTextureX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleColorTexture_Statics::NewProp_MapBounds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ParticleModuleColorTexture" },
		{ "ModuleRelativePath", "Public/ParticleModuleColorTexture.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleColorTexture_Statics::NewProp_MapBounds = { "MapBounds", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleColorTexture, MapBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleColorTexture_Statics::NewProp_MapBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleColorTexture_Statics::NewProp_MapBounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleColorTexture_Statics::NewProp_UpdateWithTick_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ParticleModuleColorTexture" },
		{ "ModuleRelativePath", "Public/ParticleModuleColorTexture.h" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleColorTexture_Statics::NewProp_UpdateWithTick_SetBit(void* Obj)
	{
		((UParticleModuleColorTexture*)Obj)->UpdateWithTick = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleColorTexture_Statics::NewProp_UpdateWithTick = { "UpdateWithTick", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UParticleModuleColorTexture), &Z_Construct_UClass_UParticleModuleColorTexture_Statics::NewProp_UpdateWithTick_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleColorTexture_Statics::NewProp_UpdateWithTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleColorTexture_Statics::NewProp_UpdateWithTick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleColorTexture_Statics::NewProp_ColorIndexTexture_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ParticleModuleColorTexture" },
		{ "ModuleRelativePath", "Public/ParticleModuleColorTexture.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UParticleModuleColorTexture_Statics::NewProp_ColorIndexTexture = { "ColorIndexTexture", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleColorTexture, ColorIndexTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleColorTexture_Statics::NewProp_ColorIndexTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleColorTexture_Statics::NewProp_ColorIndexTexture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleColorTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleColorTexture_Statics::NewProp_UseTextureAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleColorTexture_Statics::NewProp_Intensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleColorTexture_Statics::NewProp_ParticleAxisToTextureY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleColorTexture_Statics::NewProp_ParticleAxisToTextureX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleColorTexture_Statics::NewProp_MapBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleColorTexture_Statics::NewProp_UpdateWithTick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleColorTexture_Statics::NewProp_ColorIndexTexture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleColorTexture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleColorTexture>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleColorTexture_Statics::ClassParams = {
		&UParticleModuleColorTexture::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleColorTexture_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleColorTexture_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleColorTexture_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleColorTexture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleColorTexture()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleColorTexture_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleColorTexture, 1979989671);
	template<> CASCADEEXTENSIONPLUGIN_API UClass* StaticClass<UParticleModuleColorTexture>()
	{
		return UParticleModuleColorTexture::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleColorTexture(Z_Construct_UClass_UParticleModuleColorTexture, &UParticleModuleColorTexture::StaticClass, TEXT("/Script/CascadeExtensionPlugin"), TEXT("UParticleModuleColorTexture"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleColorTexture);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
