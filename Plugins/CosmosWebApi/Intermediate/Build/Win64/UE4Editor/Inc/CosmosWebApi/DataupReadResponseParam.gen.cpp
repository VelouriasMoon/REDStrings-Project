// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CosmosWebApi/Public/DataupReadResponseParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataupReadResponseParam() {}
// Cross Module References
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FDataupReadResponseParam();
	UPackage* Z_Construct_UPackage__Script_CosmosWebApi();
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FDataupSearchTagInfo();
// End Cross Module References
class UScriptStruct* FDataupReadResponseParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COSMOSWEBAPI_API uint32 Get_Z_Construct_UScriptStruct_FDataupReadResponseParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataupReadResponseParam, Z_Construct_UPackage__Script_CosmosWebApi(), TEXT("DataupReadResponseParam"), sizeof(FDataupReadResponseParam), Get_Z_Construct_UScriptStruct_FDataupReadResponseParam_Hash());
	}
	return Singleton;
}
template<> COSMOSWEBAPI_API UScriptStruct* StaticStruct<FDataupReadResponseParam>()
{
	return FDataupReadResponseParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDataupReadResponseParam(FDataupReadResponseParam::StaticStruct, TEXT("/Script/CosmosWebApi"), TEXT("DataupReadResponseParam"), false, nullptr, nullptr);
static struct FScriptStruct_CosmosWebApi_StaticRegisterNativesFDataupReadResponseParam
{
	FScriptStruct_CosmosWebApi_StaticRegisterNativesFDataupReadResponseParam()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DataupReadResponseParam")),new UScriptStruct::TCppStructOps<FDataupReadResponseParam>);
	}
} ScriptStruct_CosmosWebApi_StaticRegisterNativesFDataupReadResponseParam;
	struct Z_Construct_UScriptStruct_FDataupReadResponseParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_searchTagInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_searchTagInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_appendInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_appendInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Data;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Status;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataupReadResponseParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataupReadResponseParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataupReadResponseParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataupReadResponseParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataupReadResponseParam_Statics::NewProp_searchTagInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DataupReadResponseParam" },
		{ "ModuleRelativePath", "Public/DataupReadResponseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataupReadResponseParam_Statics::NewProp_searchTagInfo = { "searchTagInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataupReadResponseParam, searchTagInfo), Z_Construct_UScriptStruct_FDataupSearchTagInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataupReadResponseParam_Statics::NewProp_searchTagInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataupReadResponseParam_Statics::NewProp_searchTagInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataupReadResponseParam_Statics::NewProp_appendInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DataupReadResponseParam" },
		{ "ModuleRelativePath", "Public/DataupReadResponseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDataupReadResponseParam_Statics::NewProp_appendInfo = { "appendInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataupReadResponseParam, appendInfo), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataupReadResponseParam_Statics::NewProp_appendInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataupReadResponseParam_Statics::NewProp_appendInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataupReadResponseParam_Statics::NewProp_Data_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DataupReadResponseParam" },
		{ "ModuleRelativePath", "Public/DataupReadResponseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDataupReadResponseParam_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataupReadResponseParam, Data), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataupReadResponseParam_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataupReadResponseParam_Statics::NewProp_Data_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataupReadResponseParam_Statics::NewProp_Status_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DataupReadResponseParam" },
		{ "ModuleRelativePath", "Public/DataupReadResponseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDataupReadResponseParam_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataupReadResponseParam, Status), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataupReadResponseParam_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataupReadResponseParam_Statics::NewProp_Status_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataupReadResponseParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataupReadResponseParam_Statics::NewProp_searchTagInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataupReadResponseParam_Statics::NewProp_appendInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataupReadResponseParam_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataupReadResponseParam_Statics::NewProp_Status,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataupReadResponseParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CosmosWebApi,
		nullptr,
		&NewStructOps,
		"DataupReadResponseParam",
		sizeof(FDataupReadResponseParam),
		alignof(FDataupReadResponseParam),
		Z_Construct_UScriptStruct_FDataupReadResponseParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataupReadResponseParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataupReadResponseParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataupReadResponseParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataupReadResponseParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDataupReadResponseParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CosmosWebApi();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DataupReadResponseParam"), sizeof(FDataupReadResponseParam), Get_Z_Construct_UScriptStruct_FDataupReadResponseParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDataupReadResponseParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDataupReadResponseParam_Hash() { return 4154870719U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
