// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CosmosWebApi/Public/DataupSearchResultInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataupSearchResultInfo() {}
// Cross Module References
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FDataupSearchResultInfo();
	UPackage* Z_Construct_UPackage__Script_CosmosWebApi();
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FDataupSearchTagInfo();
// End Cross Module References
class UScriptStruct* FDataupSearchResultInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COSMOSWEBAPI_API uint32 Get_Z_Construct_UScriptStruct_FDataupSearchResultInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataupSearchResultInfo, Z_Construct_UPackage__Script_CosmosWebApi(), TEXT("DataupSearchResultInfo"), sizeof(FDataupSearchResultInfo), Get_Z_Construct_UScriptStruct_FDataupSearchResultInfo_Hash());
	}
	return Singleton;
}
template<> COSMOSWEBAPI_API UScriptStruct* StaticStruct<FDataupSearchResultInfo>()
{
	return FDataupSearchResultInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDataupSearchResultInfo(FDataupSearchResultInfo::StaticStruct, TEXT("/Script/CosmosWebApi"), TEXT("DataupSearchResultInfo"), false, nullptr, nullptr);
static struct FScriptStruct_CosmosWebApi_StaticRegisterNativesFDataupSearchResultInfo
{
	FScriptStruct_CosmosWebApi_StaticRegisterNativesFDataupSearchResultInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DataupSearchResultInfo")),new UScriptStruct::TCppStructOps<FDataupSearchResultInfo>);
	}
} ScriptStruct_CosmosWebApi_StaticRegisterNativesFDataupSearchResultInfo;
	struct Z_Construct_UScriptStruct_FDataupSearchResultInfo_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RequestID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataupSearchResultInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataupSearchResultInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataupSearchResultInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataupSearchResultInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataupSearchResultInfo_Statics::NewProp_searchTagInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DataupSearchResultInfo" },
		{ "ModuleRelativePath", "Public/DataupSearchResultInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataupSearchResultInfo_Statics::NewProp_searchTagInfo = { "searchTagInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataupSearchResultInfo, searchTagInfo), Z_Construct_UScriptStruct_FDataupSearchTagInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataupSearchResultInfo_Statics::NewProp_searchTagInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataupSearchResultInfo_Statics::NewProp_searchTagInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataupSearchResultInfo_Statics::NewProp_appendInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DataupSearchResultInfo" },
		{ "ModuleRelativePath", "Public/DataupSearchResultInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDataupSearchResultInfo_Statics::NewProp_appendInfo = { "appendInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataupSearchResultInfo, appendInfo), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataupSearchResultInfo_Statics::NewProp_appendInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataupSearchResultInfo_Statics::NewProp_appendInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataupSearchResultInfo_Statics::NewProp_RequestID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DataupSearchResultInfo" },
		{ "ModuleRelativePath", "Public/DataupSearchResultInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDataupSearchResultInfo_Statics::NewProp_RequestID = { "RequestID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataupSearchResultInfo, RequestID), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataupSearchResultInfo_Statics::NewProp_RequestID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataupSearchResultInfo_Statics::NewProp_RequestID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataupSearchResultInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataupSearchResultInfo_Statics::NewProp_searchTagInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataupSearchResultInfo_Statics::NewProp_appendInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataupSearchResultInfo_Statics::NewProp_RequestID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataupSearchResultInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CosmosWebApi,
		nullptr,
		&NewStructOps,
		"DataupSearchResultInfo",
		sizeof(FDataupSearchResultInfo),
		alignof(FDataupSearchResultInfo),
		Z_Construct_UScriptStruct_FDataupSearchResultInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataupSearchResultInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataupSearchResultInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataupSearchResultInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataupSearchResultInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDataupSearchResultInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CosmosWebApi();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DataupSearchResultInfo"), sizeof(FDataupSearchResultInfo), Get_Z_Construct_UScriptStruct_FDataupSearchResultInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDataupSearchResultInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDataupSearchResultInfo_Hash() { return 1791963576U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
