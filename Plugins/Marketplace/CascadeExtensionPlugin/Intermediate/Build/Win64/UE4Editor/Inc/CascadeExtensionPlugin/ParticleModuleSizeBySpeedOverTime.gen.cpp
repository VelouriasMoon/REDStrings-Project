// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CascadeExtensionPlugin/Public/ParticleModuleSizeBySpeedOverTime.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleSizeBySpeedOverTime() {}
// Cross Module References
	CASCADEEXTENSIONPLUGIN_API UClass* Z_Construct_UClass_UParticleModuleSizeBySpeedOverTime_NoRegister();
	CASCADEEXTENSIONPLUGIN_API UClass* Z_Construct_UClass_UParticleModuleSizeBySpeedOverTime();
	CASCADEEXTENSIONPLUGIN_API UClass* Z_Construct_UClass_UAbstractParticleModule();
	UPackage* Z_Construct_UPackage__Script_CascadeExtensionPlugin();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
// End Cross Module References
	void UParticleModuleSizeBySpeedOverTime::StaticRegisterNativesUParticleModuleSizeBySpeedOverTime()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleSizeBySpeedOverTime_NoRegister()
	{
		return UParticleModuleSizeBySpeedOverTime::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleSizeBySpeedOverTime_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MinSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvertSpeed_MetaData[];
#endif
		static void NewProp_InvertSpeed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InvertSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Size;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleSizeBySpeedOverTime_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbstractParticleModule,
		(UObject* (*)())Z_Construct_UPackage__Script_CascadeExtensionPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSizeBySpeedOverTime_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "ParticleModuleSizeBySpeedOverTime.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ParticleModuleSizeBySpeedOverTime.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSizeBySpeedOverTime_Statics::NewProp_MinSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ParticleModuleSizeBySpeedOverTime" },
		{ "ModuleRelativePath", "Public/ParticleModuleSizeBySpeedOverTime.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleSizeBySpeedOverTime_Statics::NewProp_MinSize = { "MinSize", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleSizeBySpeedOverTime, MinSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSizeBySpeedOverTime_Statics::NewProp_MinSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSizeBySpeedOverTime_Statics::NewProp_MinSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSizeBySpeedOverTime_Statics::NewProp_MaxSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ParticleModuleSizeBySpeedOverTime" },
		{ "ModuleRelativePath", "Public/ParticleModuleSizeBySpeedOverTime.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleSizeBySpeedOverTime_Statics::NewProp_MaxSize = { "MaxSize", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleSizeBySpeedOverTime, MaxSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSizeBySpeedOverTime_Statics::NewProp_MaxSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSizeBySpeedOverTime_Statics::NewProp_MaxSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSizeBySpeedOverTime_Statics::NewProp_InvertSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ParticleModuleSizeBySpeedOverTime" },
		{ "ModuleRelativePath", "Public/ParticleModuleSizeBySpeedOverTime.h" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleSizeBySpeedOverTime_Statics::NewProp_InvertSpeed_SetBit(void* Obj)
	{
		((UParticleModuleSizeBySpeedOverTime*)Obj)->InvertSpeed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleSizeBySpeedOverTime_Statics::NewProp_InvertSpeed = { "InvertSpeed", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UParticleModuleSizeBySpeedOverTime), &Z_Construct_UClass_UParticleModuleSizeBySpeedOverTime_Statics::NewProp_InvertSpeed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSizeBySpeedOverTime_Statics::NewProp_InvertSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSizeBySpeedOverTime_Statics::NewProp_InvertSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSizeBySpeedOverTime_Statics::NewProp_Size_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "ModuleRelativePath", "Public/ParticleModuleSizeBySpeedOverTime.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleSizeBySpeedOverTime_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0040008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleSizeBySpeedOverTime, Size), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSizeBySpeedOverTime_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSizeBySpeedOverTime_Statics::NewProp_Size_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleSizeBySpeedOverTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSizeBySpeedOverTime_Statics::NewProp_MinSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSizeBySpeedOverTime_Statics::NewProp_MaxSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSizeBySpeedOverTime_Statics::NewProp_InvertSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSizeBySpeedOverTime_Statics::NewProp_Size,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleSizeBySpeedOverTime_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleSizeBySpeedOverTime>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleSizeBySpeedOverTime_Statics::ClassParams = {
		&UParticleModuleSizeBySpeedOverTime::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleSizeBySpeedOverTime_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSizeBySpeedOverTime_Statics::PropPointers),
		0,
		0x008010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSizeBySpeedOverTime_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSizeBySpeedOverTime_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleSizeBySpeedOverTime()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleSizeBySpeedOverTime_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleSizeBySpeedOverTime, 3151453453);
	template<> CASCADEEXTENSIONPLUGIN_API UClass* StaticClass<UParticleModuleSizeBySpeedOverTime>()
	{
		return UParticleModuleSizeBySpeedOverTime::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleSizeBySpeedOverTime(Z_Construct_UClass_UParticleModuleSizeBySpeedOverTime, &UParticleModuleSizeBySpeedOverTime::StaticClass, TEXT("/Script/CascadeExtensionPlugin"), TEXT("UParticleModuleSizeBySpeedOverTime"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleSizeBySpeedOverTime);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
