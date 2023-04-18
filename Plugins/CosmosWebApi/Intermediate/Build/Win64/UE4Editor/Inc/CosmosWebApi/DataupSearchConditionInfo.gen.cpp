// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CosmosWebApi/Public/DataupSearchConditionInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataupSearchConditionInfo() {}
// Cross Module References
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FDataupSearchConditionInfo();
	UPackage* Z_Construct_UPackage__Script_CosmosWebApi();
// End Cross Module References
class UScriptStruct* FDataupSearchConditionInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COSMOSWEBAPI_API uint32 Get_Z_Construct_UScriptStruct_FDataupSearchConditionInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataupSearchConditionInfo, Z_Construct_UPackage__Script_CosmosWebApi(), TEXT("DataupSearchConditionInfo"), sizeof(FDataupSearchConditionInfo), Get_Z_Construct_UScriptStruct_FDataupSearchConditionInfo_Hash());
	}
	return Singleton;
}
template<> COSMOSWEBAPI_API UScriptStruct* StaticStruct<FDataupSearchConditionInfo>()
{
	return FDataupSearchConditionInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDataupSearchConditionInfo(FDataupSearchConditionInfo::StaticStruct, TEXT("/Script/CosmosWebApi"), TEXT("DataupSearchConditionInfo"), false, nullptr, nullptr);
static struct FScriptStruct_CosmosWebApi_StaticRegisterNativesFDataupSearchConditionInfo
{
	FScriptStruct_CosmosWebApi_StaticRegisterNativesFDataupSearchConditionInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DataupSearchConditionInfo")),new UScriptStruct::TCppStructOps<FDataupSearchConditionInfo>);
	}
} ScriptStruct_CosmosWebApi_StaticRegisterNativesFDataupSearchConditionInfo;
	struct Z_Construct_UScriptStruct_FDataupSearchConditionInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_comparisonType_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_comparisonType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataupSearchConditionInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataupSearchConditionInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataupSearchConditionInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataupSearchConditionInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataupSearchConditionInfo_Statics::NewProp_comparisonType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DataupSearchConditionInfo" },
		{ "ModuleRelativePath", "Public/DataupSearchConditionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDataupSearchConditionInfo_Statics::NewProp_comparisonType = { "comparisonType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataupSearchConditionInfo, comparisonType), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataupSearchConditionInfo_Statics::NewProp_comparisonType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataupSearchConditionInfo_Statics::NewProp_comparisonType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataupSearchConditionInfo_Statics::NewProp_Value_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DataupSearchConditionInfo" },
		{ "ModuleRelativePath", "Public/DataupSearchConditionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDataupSearchConditionInfo_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataupSearchConditionInfo, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataupSearchConditionInfo_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataupSearchConditionInfo_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataupSearchConditionInfo_Statics::NewProp_Key_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DataupSearchConditionInfo" },
		{ "ModuleRelativePath", "Public/DataupSearchConditionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDataupSearchConditionInfo_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataupSearchConditionInfo, Key), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataupSearchConditionInfo_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataupSearchConditionInfo_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataupSearchConditionInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataupSearchConditionInfo_Statics::NewProp_comparisonType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataupSearchConditionInfo_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataupSearchConditionInfo_Statics::NewProp_Key,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataupSearchConditionInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CosmosWebApi,
		nullptr,
		&NewStructOps,
		"DataupSearchConditionInfo",
		sizeof(FDataupSearchConditionInfo),
		alignof(FDataupSearchConditionInfo),
		Z_Construct_UScriptStruct_FDataupSearchConditionInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataupSearchConditionInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataupSearchConditionInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataupSearchConditionInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataupSearchConditionInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDataupSearchConditionInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CosmosWebApi();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DataupSearchConditionInfo"), sizeof(FDataupSearchConditionInfo), Get_Z_Construct_UScriptStruct_FDataupSearchConditionInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDataupSearchConditionInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDataupSearchConditionInfo_Hash() { return 3748058156U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
