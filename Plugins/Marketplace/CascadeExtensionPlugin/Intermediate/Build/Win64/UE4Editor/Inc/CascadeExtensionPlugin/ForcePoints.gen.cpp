// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CascadeExtensionPlugin/Public/ForcePoints.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeForcePoints() {}
// Cross Module References
	CASCADEEXTENSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FForcePoints();
	UPackage* Z_Construct_UPackage__Script_CascadeExtensionPlugin();
	CASCADEEXTENSIONPLUGIN_API UEnum* Z_Construct_UEnum_CascadeExtensionPlugin_EDistanceWeight();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
class UScriptStruct* FForcePoints::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CASCADEEXTENSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FForcePoints_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FForcePoints, Z_Construct_UPackage__Script_CascadeExtensionPlugin(), TEXT("ForcePoints"), sizeof(FForcePoints), Get_Z_Construct_UScriptStruct_FForcePoints_Hash());
	}
	return Singleton;
}
template<> CASCADEEXTENSIONPLUGIN_API UScriptStruct* StaticStruct<FForcePoints>()
{
	return FForcePoints::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FForcePoints(FForcePoints::StaticStruct, TEXT("/Script/CascadeExtensionPlugin"), TEXT("ForcePoints"), false, nullptr, nullptr);
static struct FScriptStruct_CascadeExtensionPlugin_StaticRegisterNativesFForcePoints
{
	FScriptStruct_CascadeExtensionPlugin_StaticRegisterNativesFForcePoints()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ForcePoints")),new UScriptStruct::TCppStructOps<FForcePoints>);
	}
} ScriptStruct_CascadeExtensionPlugin_StaticRegisterNativesFForcePoints;
	struct Z_Construct_UScriptStruct_FForcePoints_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeparationDistanceWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SeparationDistanceWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointLocations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PointLocations;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PointLocations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Intensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Intensity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FForcePoints_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ForcePoints.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FForcePoints_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FForcePoints>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FForcePoints_Statics::NewProp_DistanceScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ForcePoints" },
		{ "ModuleRelativePath", "Public/ForcePoints.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FForcePoints_Statics::NewProp_DistanceScale = { "DistanceScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FForcePoints, DistanceScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FForcePoints_Statics::NewProp_DistanceScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FForcePoints_Statics::NewProp_DistanceScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FForcePoints_Statics::NewProp_SeparationDistanceWeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ForcePoints" },
		{ "ModuleRelativePath", "Public/ForcePoints.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FForcePoints_Statics::NewProp_SeparationDistanceWeight = { "SeparationDistanceWeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FForcePoints, SeparationDistanceWeight), Z_Construct_UEnum_CascadeExtensionPlugin_EDistanceWeight, METADATA_PARAMS(Z_Construct_UScriptStruct_FForcePoints_Statics::NewProp_SeparationDistanceWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FForcePoints_Statics::NewProp_SeparationDistanceWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FForcePoints_Statics::NewProp_PointLocations_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ForcePoints" },
		{ "ModuleRelativePath", "Public/ForcePoints.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FForcePoints_Statics::NewProp_PointLocations = { "PointLocations", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FForcePoints, PointLocations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FForcePoints_Statics::NewProp_PointLocations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FForcePoints_Statics::NewProp_PointLocations_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FForcePoints_Statics::NewProp_PointLocations_Inner = { "PointLocations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FForcePoints_Statics::NewProp_Intensity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ForcePoints" },
		{ "ModuleRelativePath", "Public/ForcePoints.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FForcePoints_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FForcePoints, Intensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FForcePoints_Statics::NewProp_Intensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FForcePoints_Statics::NewProp_Intensity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FForcePoints_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FForcePoints_Statics::NewProp_DistanceScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FForcePoints_Statics::NewProp_SeparationDistanceWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FForcePoints_Statics::NewProp_PointLocations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FForcePoints_Statics::NewProp_PointLocations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FForcePoints_Statics::NewProp_Intensity,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FForcePoints_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CascadeExtensionPlugin,
		nullptr,
		&NewStructOps,
		"ForcePoints",
		sizeof(FForcePoints),
		alignof(FForcePoints),
		Z_Construct_UScriptStruct_FForcePoints_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FForcePoints_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FForcePoints_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FForcePoints_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FForcePoints()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FForcePoints_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CascadeExtensionPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ForcePoints"), sizeof(FForcePoints), Get_Z_Construct_UScriptStruct_FForcePoints_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FForcePoints_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FForcePoints_Hash() { return 434495762U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
