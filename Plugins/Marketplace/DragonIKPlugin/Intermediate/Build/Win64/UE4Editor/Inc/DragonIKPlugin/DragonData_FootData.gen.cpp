// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DragonIKPlugin/Public/DragonData_FootData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDragonData_FootData() {}
// Cross Module References
	DRAGONIKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FDragonData_FootData();
	UPackage* Z_Construct_UPackage__Script_DragonIKPlugin();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
class UScriptStruct* FDragonData_FootData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DRAGONIKPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FDragonData_FootData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDragonData_FootData, Z_Construct_UPackage__Script_DragonIKPlugin(), TEXT("DragonData_FootData"), sizeof(FDragonData_FootData), Get_Z_Construct_UScriptStruct_FDragonData_FootData_Hash());
	}
	return Singleton;
}
template<> DRAGONIKPLUGIN_API UScriptStruct* StaticStruct<FDragonData_FootData>()
{
	return FDragonData_FootData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDragonData_FootData(FDragonData_FootData::StaticStruct, TEXT("/Script/DragonIKPlugin"), TEXT("DragonData_FootData"), false, nullptr, nullptr);
static struct FScriptStruct_DragonIKPlugin_StaticRegisterNativesFDragonData_FootData
{
	FScriptStruct_DragonIKPlugin_StaticRegisterNativesFDragonData_FootData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DragonData_FootData")),new UScriptStruct::TCppStructOps<FDragonData_FootData>);
	}
} ScriptStruct_DragonIKPlugin_StaticRegisterNativesFDragonData_FootData;
	struct Z_Construct_UScriptStruct_FDragonData_FootData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Feet_Heights_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Feet_Heights;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Feet_Rotation_Limit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Feet_Rotation_Limit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Feet_Trace_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Feet_Trace_Offset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Knee_Direction_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Knee_Direction_Offset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Feet_Rotation_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Feet_Rotation_Offset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Thigh_Bone_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Thigh_Bone_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Knee_Bone_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Knee_Bone_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Feet_Bone_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Feet_Bone_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_FootData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DragonData_FootData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDragonData_FootData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Feet_Heights_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DragonData_FootData" },
		{ "ModuleRelativePath", "Public/DragonData_FootData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Feet_Heights = { "Feet_Heights", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDragonData_FootData, Feet_Heights), METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Feet_Heights_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Feet_Heights_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Feet_Rotation_Limit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DragonData_FootData" },
		{ "ModuleRelativePath", "Public/DragonData_FootData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Feet_Rotation_Limit = { "Feet_Rotation_Limit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDragonData_FootData, Feet_Rotation_Limit), METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Feet_Rotation_Limit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Feet_Rotation_Limit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Feet_Trace_Offset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DragonData_FootData" },
		{ "ModuleRelativePath", "Public/DragonData_FootData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Feet_Trace_Offset = { "Feet_Trace_Offset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDragonData_FootData, Feet_Trace_Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Feet_Trace_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Feet_Trace_Offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Knee_Direction_Offset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DragonData_FootData" },
		{ "ModuleRelativePath", "Public/DragonData_FootData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Knee_Direction_Offset = { "Knee_Direction_Offset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDragonData_FootData, Knee_Direction_Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Knee_Direction_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Knee_Direction_Offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Feet_Rotation_Offset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DragonData_FootData" },
		{ "ModuleRelativePath", "Public/DragonData_FootData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Feet_Rotation_Offset = { "Feet_Rotation_Offset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDragonData_FootData, Feet_Rotation_Offset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Feet_Rotation_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Feet_Rotation_Offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Thigh_Bone_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DragonData_FootData" },
		{ "ModuleRelativePath", "Public/DragonData_FootData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Thigh_Bone_Name = { "Thigh_Bone_Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDragonData_FootData, Thigh_Bone_Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Thigh_Bone_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Thigh_Bone_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Knee_Bone_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DragonData_FootData" },
		{ "ModuleRelativePath", "Public/DragonData_FootData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Knee_Bone_Name = { "Knee_Bone_Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDragonData_FootData, Knee_Bone_Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Knee_Bone_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Knee_Bone_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Feet_Bone_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DragonData_FootData" },
		{ "ModuleRelativePath", "Public/DragonData_FootData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Feet_Bone_Name = { "Feet_Bone_Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDragonData_FootData, Feet_Bone_Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Feet_Bone_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Feet_Bone_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDragonData_FootData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Feet_Heights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Feet_Rotation_Limit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Feet_Trace_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Knee_Direction_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Feet_Rotation_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Thigh_Bone_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Knee_Bone_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDragonData_FootData_Statics::NewProp_Feet_Bone_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDragonData_FootData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DragonIKPlugin,
		nullptr,
		&NewStructOps,
		"DragonData_FootData",
		sizeof(FDragonData_FootData),
		alignof(FDragonData_FootData),
		Z_Construct_UScriptStruct_FDragonData_FootData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_FootData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_FootData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_FootData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDragonData_FootData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDragonData_FootData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DragonIKPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DragonData_FootData"), sizeof(FDragonData_FootData), Get_Z_Construct_UScriptStruct_FDragonData_FootData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDragonData_FootData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDragonData_FootData_Hash() { return 1350992129U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
