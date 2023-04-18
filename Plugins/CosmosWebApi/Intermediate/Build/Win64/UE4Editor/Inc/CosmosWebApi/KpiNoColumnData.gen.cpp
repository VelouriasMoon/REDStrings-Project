// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CosmosWebApi/Public/KpiNoColumnData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKpiNoColumnData() {}
// Cross Module References
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FKpiNoColumnData();
	UPackage* Z_Construct_UPackage__Script_CosmosWebApi();
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FKpiData();
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FKpiColumn();
// End Cross Module References
class UScriptStruct* FKpiNoColumnData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COSMOSWEBAPI_API uint32 Get_Z_Construct_UScriptStruct_FKpiNoColumnData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FKpiNoColumnData, Z_Construct_UPackage__Script_CosmosWebApi(), TEXT("KpiNoColumnData"), sizeof(FKpiNoColumnData), Get_Z_Construct_UScriptStruct_FKpiNoColumnData_Hash());
	}
	return Singleton;
}
template<> COSMOSWEBAPI_API UScriptStruct* StaticStruct<FKpiNoColumnData>()
{
	return FKpiNoColumnData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FKpiNoColumnData(FKpiNoColumnData::StaticStruct, TEXT("/Script/CosmosWebApi"), TEXT("KpiNoColumnData"), false, nullptr, nullptr);
static struct FScriptStruct_CosmosWebApi_StaticRegisterNativesFKpiNoColumnData
{
	FScriptStruct_CosmosWebApi_StaticRegisterNativesFKpiNoColumnData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("KpiNoColumnData")),new UScriptStruct::TCppStructOps<FKpiNoColumnData>);
	}
} ScriptStruct_CosmosWebApi_StaticRegisterNativesFKpiNoColumnData;
	struct Z_Construct_UScriptStruct_FKpiNoColumnData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_kpiDataList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_kpiDataList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_kpiDataList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_kpiColumnList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_kpiColumnList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_kpiColumnList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_no_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_no;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKpiNoColumnData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/KpiNoColumnData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKpiNoColumnData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKpiNoColumnData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKpiNoColumnData_Statics::NewProp_kpiDataList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "KpiNoColumnData" },
		{ "ModuleRelativePath", "Public/KpiNoColumnData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FKpiNoColumnData_Statics::NewProp_kpiDataList = { "kpiDataList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKpiNoColumnData, kpiDataList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FKpiNoColumnData_Statics::NewProp_kpiDataList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKpiNoColumnData_Statics::NewProp_kpiDataList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKpiNoColumnData_Statics::NewProp_kpiDataList_Inner = { "kpiDataList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FKpiData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKpiNoColumnData_Statics::NewProp_kpiColumnList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "KpiNoColumnData" },
		{ "ModuleRelativePath", "Public/KpiNoColumnData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FKpiNoColumnData_Statics::NewProp_kpiColumnList = { "kpiColumnList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKpiNoColumnData, kpiColumnList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FKpiNoColumnData_Statics::NewProp_kpiColumnList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKpiNoColumnData_Statics::NewProp_kpiColumnList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKpiNoColumnData_Statics::NewProp_kpiColumnList_Inner = { "kpiColumnList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FKpiColumn, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKpiNoColumnData_Statics::NewProp_no_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "KpiNoColumnData" },
		{ "ModuleRelativePath", "Public/KpiNoColumnData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FKpiNoColumnData_Statics::NewProp_no = { "no", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKpiNoColumnData, no), METADATA_PARAMS(Z_Construct_UScriptStruct_FKpiNoColumnData_Statics::NewProp_no_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKpiNoColumnData_Statics::NewProp_no_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKpiNoColumnData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKpiNoColumnData_Statics::NewProp_kpiDataList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKpiNoColumnData_Statics::NewProp_kpiDataList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKpiNoColumnData_Statics::NewProp_kpiColumnList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKpiNoColumnData_Statics::NewProp_kpiColumnList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKpiNoColumnData_Statics::NewProp_no,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKpiNoColumnData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CosmosWebApi,
		nullptr,
		&NewStructOps,
		"KpiNoColumnData",
		sizeof(FKpiNoColumnData),
		alignof(FKpiNoColumnData),
		Z_Construct_UScriptStruct_FKpiNoColumnData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKpiNoColumnData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKpiNoColumnData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKpiNoColumnData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKpiNoColumnData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FKpiNoColumnData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CosmosWebApi();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("KpiNoColumnData"), sizeof(FKpiNoColumnData), Get_Z_Construct_UScriptStruct_FKpiNoColumnData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FKpiNoColumnData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FKpiNoColumnData_Hash() { return 67021368U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
