// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CascadeExtensionPlugin/Public/ParticleModuleCustomData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleCustomData() {}
// Cross Module References
	CASCADEEXTENSIONPLUGIN_API UClass* Z_Construct_UClass_UParticleModuleCustomData_NoRegister();
	CASCADEEXTENSIONPLUGIN_API UClass* Z_Construct_UClass_UParticleModuleCustomData();
	CASCADEEXTENSIONPLUGIN_API UClass* Z_Construct_UClass_UAbstractParticleModule();
	UPackage* Z_Construct_UPackage__Script_CascadeExtensionPlugin();
// End Cross Module References
	void UParticleModuleCustomData::StaticRegisterNativesUParticleModuleCustomData()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleCustomData_NoRegister()
	{
		return UParticleModuleCustomData::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleCustomData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseRotationRateFromProvider_MetaData[];
#endif
		static void NewProp_UseRotationRateFromProvider_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseRotationRateFromProvider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseRotationFromProvider_MetaData[];
#endif
		static void NewProp_UseRotationFromProvider_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseRotationFromProvider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseColorFromProvider_MetaData[];
#endif
		static void NewProp_UseColorFromProvider_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseColorFromProvider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseSizeFromProvider_MetaData[];
#endif
		static void NewProp_UseSizeFromProvider_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseSizeFromProvider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseVelocityFromProvider_MetaData[];
#endif
		static void NewProp_UseVelocityFromProvider_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseVelocityFromProvider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseLocationFromProvider_MetaData[];
#endif
		static void NewProp_UseLocationFromProvider_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseLocationFromProvider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdatedTickedParticles_MetaData[];
#endif
		static void NewProp_UpdatedTickedParticles_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UpdatedTickedParticles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdatedSpawnedParticles_MetaData[];
#endif
		static void NewProp_UpdatedSpawnedParticles_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UpdatedSpawnedParticles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataProviderParameterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DataProviderParameterName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleCustomData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbstractParticleModule,
		(UObject* (*)())Z_Construct_UPackage__Script_CascadeExtensionPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleCustomData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "ParticleModuleCustomData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ParticleModuleCustomData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleCustomData_Statics::NewProp_UseRotationRateFromProvider_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ParticleModuleCustomData" },
		{ "ModuleRelativePath", "Public/ParticleModuleCustomData.h" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleCustomData_Statics::NewProp_UseRotationRateFromProvider_SetBit(void* Obj)
	{
		((UParticleModuleCustomData*)Obj)->UseRotationRateFromProvider = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleCustomData_Statics::NewProp_UseRotationRateFromProvider = { "UseRotationRateFromProvider", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UParticleModuleCustomData), &Z_Construct_UClass_UParticleModuleCustomData_Statics::NewProp_UseRotationRateFromProvider_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleCustomData_Statics::NewProp_UseRotationRateFromProvider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleCustomData_Statics::NewProp_UseRotationRateFromProvider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleCustomData_Statics::NewProp_UseRotationFromProvider_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ParticleModuleCustomData" },
		{ "ModuleRelativePath", "Public/ParticleModuleCustomData.h" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleCustomData_Statics::NewProp_UseRotationFromProvider_SetBit(void* Obj)
	{
		((UParticleModuleCustomData*)Obj)->UseRotationFromProvider = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleCustomData_Statics::NewProp_UseRotationFromProvider = { "UseRotationFromProvider", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UParticleModuleCustomData), &Z_Construct_UClass_UParticleModuleCustomData_Statics::NewProp_UseRotationFromProvider_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleCustomData_Statics::NewProp_UseRotationFromProvider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleCustomData_Statics::NewProp_UseRotationFromProvider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleCustomData_Statics::NewProp_UseColorFromProvider_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ParticleModuleCustomData" },
		{ "ModuleRelativePath", "Public/ParticleModuleCustomData.h" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleCustomData_Statics::NewProp_UseColorFromProvider_SetBit(void* Obj)
	{
		((UParticleModuleCustomData*)Obj)->UseColorFromProvider = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleCustomData_Statics::NewProp_UseColorFromProvider = { "UseColorFromProvider", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UParticleModuleCustomData), &Z_Construct_UClass_UParticleModuleCustomData_Statics::NewProp_UseColorFromProvider_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleCustomData_Statics::NewProp_UseColorFromProvider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleCustomData_Statics::NewProp_UseColorFromProvider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleCustomData_Statics::NewProp_UseSizeFromProvider_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ParticleModuleCustomData" },
		{ "ModuleRelativePath", "Public/ParticleModuleCustomData.h" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleCustomData_Statics::NewProp_UseSizeFromProvider_SetBit(void* Obj)
	{
		((UParticleModuleCustomData*)Obj)->UseSizeFromProvider = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleCustomData_Statics::NewProp_UseSizeFromProvider = { "UseSizeFromProvider", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UParticleModuleCustomData), &Z_Construct_UClass_UParticleModuleCustomData_Statics::NewProp_UseSizeFromProvider_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleCustomData_Statics::NewProp_UseSizeFromProvider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleCustomData_Statics::NewProp_UseSizeFromProvider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleCustomData_Statics::NewProp_UseVelocityFromProvider_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ParticleModuleCustomData" },
		{ "ModuleRelativePath", "Public/ParticleModuleCustomData.h" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleCustomData_Statics::NewProp_UseVelocityFromProvider_SetBit(void* Obj)
	{
		((UParticleModuleCustomData*)Obj)->UseVelocityFromProvider = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleCustomData_Statics::NewProp_UseVelocityFromProvider = { "UseVelocityFromProvider", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UParticleModuleCustomData), &Z_Construct_UClass_UParticleModuleCustomData_Statics::NewProp_UseVelocityFromProvider_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleCustomData_Statics::NewProp_UseVelocityFromProvider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleCustomData_Statics::NewProp_UseVelocityFromProvider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleCustomData_Statics::NewProp_UseLocationFromProvider_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ParticleModuleCustomData" },
		{ "ModuleRelativePath", "Public/ParticleModuleCustomData.h" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleCustomData_Statics::NewProp_UseLocationFromProvider_SetBit(void* Obj)
	{
		((UParticleModuleCustomData*)Obj)->UseLocationFromProvider = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleCustomData_Statics::NewProp_UseLocationFromProvider = { "UseLocationFromProvider", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UParticleModuleCustomData), &Z_Construct_UClass_UParticleModuleCustomData_Statics::NewProp_UseLocationFromProvider_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleCustomData_Statics::NewProp_UseLocationFromProvider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleCustomData_Statics::NewProp_UseLocationFromProvider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleCustomData_Statics::NewProp_UpdatedTickedParticles_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ParticleModuleCustomData" },
		{ "ModuleRelativePath", "Public/ParticleModuleCustomData.h" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleCustomData_Statics::NewProp_UpdatedTickedParticles_SetBit(void* Obj)
	{
		((UParticleModuleCustomData*)Obj)->UpdatedTickedParticles = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleCustomData_Statics::NewProp_UpdatedTickedParticles = { "UpdatedTickedParticles", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UParticleModuleCustomData), &Z_Construct_UClass_UParticleModuleCustomData_Statics::NewProp_UpdatedTickedParticles_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleCustomData_Statics::NewProp_UpdatedTickedParticles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleCustomData_Statics::NewProp_UpdatedTickedParticles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleCustomData_Statics::NewProp_UpdatedSpawnedParticles_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ParticleModuleCustomData" },
		{ "ModuleRelativePath", "Public/ParticleModuleCustomData.h" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleCustomData_Statics::NewProp_UpdatedSpawnedParticles_SetBit(void* Obj)
	{
		((UParticleModuleCustomData*)Obj)->UpdatedSpawnedParticles = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleCustomData_Statics::NewProp_UpdatedSpawnedParticles = { "UpdatedSpawnedParticles", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UParticleModuleCustomData), &Z_Construct_UClass_UParticleModuleCustomData_Statics::NewProp_UpdatedSpawnedParticles_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleCustomData_Statics::NewProp_UpdatedSpawnedParticles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleCustomData_Statics::NewProp_UpdatedSpawnedParticles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleCustomData_Statics::NewProp_DataProviderParameterName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ParticleModuleCustomData" },
		{ "ModuleRelativePath", "Public/ParticleModuleCustomData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UParticleModuleCustomData_Statics::NewProp_DataProviderParameterName = { "DataProviderParameterName", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleCustomData, DataProviderParameterName), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleCustomData_Statics::NewProp_DataProviderParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleCustomData_Statics::NewProp_DataProviderParameterName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleCustomData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleCustomData_Statics::NewProp_UseRotationRateFromProvider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleCustomData_Statics::NewProp_UseRotationFromProvider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleCustomData_Statics::NewProp_UseColorFromProvider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleCustomData_Statics::NewProp_UseSizeFromProvider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleCustomData_Statics::NewProp_UseVelocityFromProvider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleCustomData_Statics::NewProp_UseLocationFromProvider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleCustomData_Statics::NewProp_UpdatedTickedParticles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleCustomData_Statics::NewProp_UpdatedSpawnedParticles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleCustomData_Statics::NewProp_DataProviderParameterName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleCustomData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleCustomData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleCustomData_Statics::ClassParams = {
		&UParticleModuleCustomData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleCustomData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleCustomData_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleCustomData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleCustomData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleCustomData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleCustomData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleCustomData, 3673625339);
	template<> CASCADEEXTENSIONPLUGIN_API UClass* StaticClass<UParticleModuleCustomData>()
	{
		return UParticleModuleCustomData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleCustomData(Z_Construct_UClass_UParticleModuleCustomData, &UParticleModuleCustomData::StaticClass, TEXT("/Script/CascadeExtensionPlugin"), TEXT("UParticleModuleCustomData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleCustomData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
