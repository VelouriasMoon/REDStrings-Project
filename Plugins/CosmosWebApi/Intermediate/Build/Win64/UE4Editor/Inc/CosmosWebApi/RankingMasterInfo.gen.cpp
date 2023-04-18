// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CosmosWebApi/Public/RankingMasterInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRankingMasterInfo() {}
// Cross Module References
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FRankingMasterInfo();
	UPackage* Z_Construct_UPackage__Script_CosmosWebApi();
// End Cross Module References
class UScriptStruct* FRankingMasterInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COSMOSWEBAPI_API uint32 Get_Z_Construct_UScriptStruct_FRankingMasterInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRankingMasterInfo, Z_Construct_UPackage__Script_CosmosWebApi(), TEXT("RankingMasterInfo"), sizeof(FRankingMasterInfo), Get_Z_Construct_UScriptStruct_FRankingMasterInfo_Hash());
	}
	return Singleton;
}
template<> COSMOSWEBAPI_API UScriptStruct* StaticStruct<FRankingMasterInfo>()
{
	return FRankingMasterInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRankingMasterInfo(FRankingMasterInfo::StaticStruct, TEXT("/Script/CosmosWebApi"), TEXT("RankingMasterInfo"), false, nullptr, nullptr);
static struct FScriptStruct_CosmosWebApi_StaticRegisterNativesFRankingMasterInfo
{
	FScriptStruct_CosmosWebApi_StaticRegisterNativesFRankingMasterInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RankingMasterInfo")),new UScriptStruct::TCppStructOps<FRankingMasterInfo>);
	}
} ScriptStruct_CosmosWebApi_StaticRegisterNativesFRankingMasterInfo;
	struct Z_Construct_UScriptStruct_FRankingMasterInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RankingInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RankingInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_setType_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_setType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_scoreType_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_scoreType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SortType_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SortType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rankingId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_rankingId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRankingMasterInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RankingMasterInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRankingMasterInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRankingMasterInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRankingMasterInfo_Statics::NewProp_RankingInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RankingMasterInfo" },
		{ "ModuleRelativePath", "Public/RankingMasterInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRankingMasterInfo_Statics::NewProp_RankingInfo = { "RankingInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRankingMasterInfo, RankingInfo), METADATA_PARAMS(Z_Construct_UScriptStruct_FRankingMasterInfo_Statics::NewProp_RankingInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRankingMasterInfo_Statics::NewProp_RankingInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRankingMasterInfo_Statics::NewProp_setType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RankingMasterInfo" },
		{ "ModuleRelativePath", "Public/RankingMasterInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRankingMasterInfo_Statics::NewProp_setType = { "setType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRankingMasterInfo, setType), METADATA_PARAMS(Z_Construct_UScriptStruct_FRankingMasterInfo_Statics::NewProp_setType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRankingMasterInfo_Statics::NewProp_setType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRankingMasterInfo_Statics::NewProp_scoreType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RankingMasterInfo" },
		{ "ModuleRelativePath", "Public/RankingMasterInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRankingMasterInfo_Statics::NewProp_scoreType = { "scoreType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRankingMasterInfo, scoreType), METADATA_PARAMS(Z_Construct_UScriptStruct_FRankingMasterInfo_Statics::NewProp_scoreType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRankingMasterInfo_Statics::NewProp_scoreType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRankingMasterInfo_Statics::NewProp_SortType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RankingMasterInfo" },
		{ "ModuleRelativePath", "Public/RankingMasterInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRankingMasterInfo_Statics::NewProp_SortType = { "SortType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRankingMasterInfo, SortType), METADATA_PARAMS(Z_Construct_UScriptStruct_FRankingMasterInfo_Statics::NewProp_SortType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRankingMasterInfo_Statics::NewProp_SortType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRankingMasterInfo_Statics::NewProp_rankingId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RankingMasterInfo" },
		{ "ModuleRelativePath", "Public/RankingMasterInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRankingMasterInfo_Statics::NewProp_rankingId = { "rankingId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRankingMasterInfo, rankingId), METADATA_PARAMS(Z_Construct_UScriptStruct_FRankingMasterInfo_Statics::NewProp_rankingId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRankingMasterInfo_Statics::NewProp_rankingId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRankingMasterInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRankingMasterInfo_Statics::NewProp_RankingInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRankingMasterInfo_Statics::NewProp_setType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRankingMasterInfo_Statics::NewProp_scoreType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRankingMasterInfo_Statics::NewProp_SortType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRankingMasterInfo_Statics::NewProp_rankingId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRankingMasterInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CosmosWebApi,
		nullptr,
		&NewStructOps,
		"RankingMasterInfo",
		sizeof(FRankingMasterInfo),
		alignof(FRankingMasterInfo),
		Z_Construct_UScriptStruct_FRankingMasterInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRankingMasterInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRankingMasterInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRankingMasterInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRankingMasterInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRankingMasterInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CosmosWebApi();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RankingMasterInfo"), sizeof(FRankingMasterInfo), Get_Z_Construct_UScriptStruct_FRankingMasterInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRankingMasterInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRankingMasterInfo_Hash() { return 748506715U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
