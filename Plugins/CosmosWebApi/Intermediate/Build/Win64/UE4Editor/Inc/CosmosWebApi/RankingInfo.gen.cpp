// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CosmosWebApi/Public/RankingInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRankingInfo() {}
// Cross Module References
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FRankingInfo();
	UPackage* Z_Construct_UPackage__Script_CosmosWebApi();
// End Cross Module References
class UScriptStruct* FRankingInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COSMOSWEBAPI_API uint32 Get_Z_Construct_UScriptStruct_FRankingInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRankingInfo, Z_Construct_UPackage__Script_CosmosWebApi(), TEXT("RankingInfo"), sizeof(FRankingInfo), Get_Z_Construct_UScriptStruct_FRankingInfo_Hash());
	}
	return Singleton;
}
template<> COSMOSWEBAPI_API UScriptStruct* StaticStruct<FRankingInfo>()
{
	return FRankingInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRankingInfo(FRankingInfo::StaticStruct, TEXT("/Script/CosmosWebApi"), TEXT("RankingInfo"), false, nullptr, nullptr);
static struct FScriptStruct_CosmosWebApi_StaticRegisterNativesFRankingInfo
{
	FScriptStruct_CosmosWebApi_StaticRegisterNativesFRankingInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RankingInfo")),new UScriptStruct::TCppStructOps<FRankingInfo>);
	}
} ScriptStruct_CosmosWebApi_StaticRegisterNativesFRankingInfo;
	struct Z_Construct_UScriptStruct_FRankingInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_score_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_score;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_userId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_userId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sameRank_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_sameRank;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_uniqueRank_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_uniqueRank;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRankingInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RankingInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRankingInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRankingInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRankingInfo_Statics::NewProp_UserData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RankingInfo" },
		{ "ModuleRelativePath", "Public/RankingInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRankingInfo_Statics::NewProp_UserData = { "UserData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRankingInfo, UserData), METADATA_PARAMS(Z_Construct_UScriptStruct_FRankingInfo_Statics::NewProp_UserData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRankingInfo_Statics::NewProp_UserData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRankingInfo_Statics::NewProp_score_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RankingInfo" },
		{ "ModuleRelativePath", "Public/RankingInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRankingInfo_Statics::NewProp_score = { "score", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRankingInfo, score), METADATA_PARAMS(Z_Construct_UScriptStruct_FRankingInfo_Statics::NewProp_score_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRankingInfo_Statics::NewProp_score_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRankingInfo_Statics::NewProp_userId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RankingInfo" },
		{ "ModuleRelativePath", "Public/RankingInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRankingInfo_Statics::NewProp_userId = { "userId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRankingInfo, userId), METADATA_PARAMS(Z_Construct_UScriptStruct_FRankingInfo_Statics::NewProp_userId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRankingInfo_Statics::NewProp_userId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRankingInfo_Statics::NewProp_sameRank_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RankingInfo" },
		{ "ModuleRelativePath", "Public/RankingInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRankingInfo_Statics::NewProp_sameRank = { "sameRank", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRankingInfo, sameRank), METADATA_PARAMS(Z_Construct_UScriptStruct_FRankingInfo_Statics::NewProp_sameRank_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRankingInfo_Statics::NewProp_sameRank_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRankingInfo_Statics::NewProp_uniqueRank_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RankingInfo" },
		{ "ModuleRelativePath", "Public/RankingInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRankingInfo_Statics::NewProp_uniqueRank = { "uniqueRank", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRankingInfo, uniqueRank), METADATA_PARAMS(Z_Construct_UScriptStruct_FRankingInfo_Statics::NewProp_uniqueRank_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRankingInfo_Statics::NewProp_uniqueRank_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRankingInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRankingInfo_Statics::NewProp_UserData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRankingInfo_Statics::NewProp_score,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRankingInfo_Statics::NewProp_userId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRankingInfo_Statics::NewProp_sameRank,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRankingInfo_Statics::NewProp_uniqueRank,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRankingInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CosmosWebApi,
		nullptr,
		&NewStructOps,
		"RankingInfo",
		sizeof(FRankingInfo),
		alignof(FRankingInfo),
		Z_Construct_UScriptStruct_FRankingInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRankingInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRankingInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRankingInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRankingInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRankingInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CosmosWebApi();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RankingInfo"), sizeof(FRankingInfo), Get_Z_Construct_UScriptStruct_FRankingInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRankingInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRankingInfo_Hash() { return 1795146552U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
