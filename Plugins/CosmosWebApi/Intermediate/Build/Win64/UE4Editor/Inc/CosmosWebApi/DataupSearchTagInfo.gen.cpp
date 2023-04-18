// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CosmosWebApi/Public/DataupSearchTagInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataupSearchTagInfo() {}
// Cross Module References
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FDataupSearchTagInfo();
	UPackage* Z_Construct_UPackage__Script_CosmosWebApi();
// End Cross Module References
class UScriptStruct* FDataupSearchTagInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COSMOSWEBAPI_API uint32 Get_Z_Construct_UScriptStruct_FDataupSearchTagInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataupSearchTagInfo, Z_Construct_UPackage__Script_CosmosWebApi(), TEXT("DataupSearchTagInfo"), sizeof(FDataupSearchTagInfo), Get_Z_Construct_UScriptStruct_FDataupSearchTagInfo_Hash());
	}
	return Singleton;
}
template<> COSMOSWEBAPI_API UScriptStruct* StaticStruct<FDataupSearchTagInfo>()
{
	return FDataupSearchTagInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDataupSearchTagInfo(FDataupSearchTagInfo::StaticStruct, TEXT("/Script/CosmosWebApi"), TEXT("DataupSearchTagInfo"), false, nullptr, nullptr);
static struct FScriptStruct_CosmosWebApi_StaticRegisterNativesFDataupSearchTagInfo
{
	FScriptStruct_CosmosWebApi_StaticRegisterNativesFDataupSearchTagInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DataupSearchTagInfo")),new UScriptStruct::TCppStructOps<FDataupSearchTagInfo>);
	}
} ScriptStruct_CosmosWebApi_StaticRegisterNativesFDataupSearchTagInfo;
	struct Z_Construct_UScriptStruct_FDataupSearchTagInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_searchTag5_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_searchTag5;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_searchTag4_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_searchTag4;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_searchTag3_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_searchTag3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_searchTag2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_searchTag2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_searchTag1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_searchTag1;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataupSearchTagInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataupSearchTagInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataupSearchTagInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataupSearchTagInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataupSearchTagInfo_Statics::NewProp_searchTag5_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DataupSearchTagInfo" },
		{ "ModuleRelativePath", "Public/DataupSearchTagInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDataupSearchTagInfo_Statics::NewProp_searchTag5 = { "searchTag5", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataupSearchTagInfo, searchTag5), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataupSearchTagInfo_Statics::NewProp_searchTag5_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataupSearchTagInfo_Statics::NewProp_searchTag5_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataupSearchTagInfo_Statics::NewProp_searchTag4_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DataupSearchTagInfo" },
		{ "ModuleRelativePath", "Public/DataupSearchTagInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDataupSearchTagInfo_Statics::NewProp_searchTag4 = { "searchTag4", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataupSearchTagInfo, searchTag4), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataupSearchTagInfo_Statics::NewProp_searchTag4_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataupSearchTagInfo_Statics::NewProp_searchTag4_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataupSearchTagInfo_Statics::NewProp_searchTag3_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DataupSearchTagInfo" },
		{ "ModuleRelativePath", "Public/DataupSearchTagInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDataupSearchTagInfo_Statics::NewProp_searchTag3 = { "searchTag3", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataupSearchTagInfo, searchTag3), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataupSearchTagInfo_Statics::NewProp_searchTag3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataupSearchTagInfo_Statics::NewProp_searchTag3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataupSearchTagInfo_Statics::NewProp_searchTag2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DataupSearchTagInfo" },
		{ "ModuleRelativePath", "Public/DataupSearchTagInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDataupSearchTagInfo_Statics::NewProp_searchTag2 = { "searchTag2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataupSearchTagInfo, searchTag2), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataupSearchTagInfo_Statics::NewProp_searchTag2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataupSearchTagInfo_Statics::NewProp_searchTag2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataupSearchTagInfo_Statics::NewProp_searchTag1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DataupSearchTagInfo" },
		{ "ModuleRelativePath", "Public/DataupSearchTagInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDataupSearchTagInfo_Statics::NewProp_searchTag1 = { "searchTag1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataupSearchTagInfo, searchTag1), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataupSearchTagInfo_Statics::NewProp_searchTag1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataupSearchTagInfo_Statics::NewProp_searchTag1_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataupSearchTagInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataupSearchTagInfo_Statics::NewProp_searchTag5,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataupSearchTagInfo_Statics::NewProp_searchTag4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataupSearchTagInfo_Statics::NewProp_searchTag3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataupSearchTagInfo_Statics::NewProp_searchTag2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataupSearchTagInfo_Statics::NewProp_searchTag1,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataupSearchTagInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CosmosWebApi,
		nullptr,
		&NewStructOps,
		"DataupSearchTagInfo",
		sizeof(FDataupSearchTagInfo),
		alignof(FDataupSearchTagInfo),
		Z_Construct_UScriptStruct_FDataupSearchTagInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataupSearchTagInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataupSearchTagInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataupSearchTagInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataupSearchTagInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDataupSearchTagInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CosmosWebApi();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DataupSearchTagInfo"), sizeof(FDataupSearchTagInfo), Get_Z_Construct_UScriptStruct_FDataupSearchTagInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDataupSearchTagInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDataupSearchTagInfo_Hash() { return 1540679521U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
