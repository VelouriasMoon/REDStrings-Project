// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CosmosWebApi/Public/KpiColumn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKpiColumn() {}
// Cross Module References
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FKpiColumn();
	UPackage* Z_Construct_UPackage__Script_CosmosWebApi();
// End Cross Module References
class UScriptStruct* FKpiColumn::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COSMOSWEBAPI_API uint32 Get_Z_Construct_UScriptStruct_FKpiColumn_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FKpiColumn, Z_Construct_UPackage__Script_CosmosWebApi(), TEXT("KpiColumn"), sizeof(FKpiColumn), Get_Z_Construct_UScriptStruct_FKpiColumn_Hash());
	}
	return Singleton;
}
template<> COSMOSWEBAPI_API UScriptStruct* StaticStruct<FKpiColumn>()
{
	return FKpiColumn::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FKpiColumn(FKpiColumn::StaticStruct, TEXT("/Script/CosmosWebApi"), TEXT("KpiColumn"), false, nullptr, nullptr);
static struct FScriptStruct_CosmosWebApi_StaticRegisterNativesFKpiColumn
{
	FScriptStruct_CosmosWebApi_StaticRegisterNativesFKpiColumn()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("KpiColumn")),new UScriptStruct::TCppStructOps<FKpiColumn>);
	}
} ScriptStruct_CosmosWebApi_StaticRegisterNativesFKpiColumn;
	struct Z_Construct_UScriptStruct_FKpiColumn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_column_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_column;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKpiColumn_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/KpiColumn.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKpiColumn_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKpiColumn>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKpiColumn_Statics::NewProp_Type_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "KpiColumn" },
		{ "ModuleRelativePath", "Public/KpiColumn.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FKpiColumn_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKpiColumn, Type), METADATA_PARAMS(Z_Construct_UScriptStruct_FKpiColumn_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKpiColumn_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKpiColumn_Statics::NewProp_column_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "KpiColumn" },
		{ "ModuleRelativePath", "Public/KpiColumn.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FKpiColumn_Statics::NewProp_column = { "column", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKpiColumn, column), METADATA_PARAMS(Z_Construct_UScriptStruct_FKpiColumn_Statics::NewProp_column_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKpiColumn_Statics::NewProp_column_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKpiColumn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKpiColumn_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKpiColumn_Statics::NewProp_column,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKpiColumn_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CosmosWebApi,
		nullptr,
		&NewStructOps,
		"KpiColumn",
		sizeof(FKpiColumn),
		alignof(FKpiColumn),
		Z_Construct_UScriptStruct_FKpiColumn_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKpiColumn_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKpiColumn_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKpiColumn_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKpiColumn()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FKpiColumn_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CosmosWebApi();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("KpiColumn"), sizeof(FKpiColumn), Get_Z_Construct_UScriptStruct_FKpiColumn_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FKpiColumn_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FKpiColumn_Hash() { return 644393869U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
