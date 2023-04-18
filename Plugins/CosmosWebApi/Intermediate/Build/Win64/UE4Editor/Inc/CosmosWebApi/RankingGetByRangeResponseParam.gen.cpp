// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CosmosWebApi/Public/RankingGetByRangeResponseParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRankingGetByRangeResponseParam() {}
// Cross Module References
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FRankingGetByRangeResponseParam();
	UPackage* Z_Construct_UPackage__Script_CosmosWebApi();
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FRankingInfo();
// End Cross Module References
class UScriptStruct* FRankingGetByRangeResponseParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COSMOSWEBAPI_API uint32 Get_Z_Construct_UScriptStruct_FRankingGetByRangeResponseParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRankingGetByRangeResponseParam, Z_Construct_UPackage__Script_CosmosWebApi(), TEXT("RankingGetByRangeResponseParam"), sizeof(FRankingGetByRangeResponseParam), Get_Z_Construct_UScriptStruct_FRankingGetByRangeResponseParam_Hash());
	}
	return Singleton;
}
template<> COSMOSWEBAPI_API UScriptStruct* StaticStruct<FRankingGetByRangeResponseParam>()
{
	return FRankingGetByRangeResponseParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRankingGetByRangeResponseParam(FRankingGetByRangeResponseParam::StaticStruct, TEXT("/Script/CosmosWebApi"), TEXT("RankingGetByRangeResponseParam"), false, nullptr, nullptr);
static struct FScriptStruct_CosmosWebApi_StaticRegisterNativesFRankingGetByRangeResponseParam
{
	FScriptStruct_CosmosWebApi_StaticRegisterNativesFRankingGetByRangeResponseParam()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RankingGetByRangeResponseParam")),new UScriptStruct::TCppStructOps<FRankingGetByRangeResponseParam>);
	}
} ScriptStruct_CosmosWebApi_StaticRegisterNativesFRankingGetByRangeResponseParam;
	struct Z_Construct_UScriptStruct_FRankingGetByRangeResponseParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rankingList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_rankingList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rankingList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_listNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_listNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sumNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_sumNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Status;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRankingGetByRangeResponseParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RankingGetByRangeResponseParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRankingGetByRangeResponseParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRankingGetByRangeResponseParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRankingGetByRangeResponseParam_Statics::NewProp_rankingList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RankingGetByRangeResponseParam" },
		{ "ModuleRelativePath", "Public/RankingGetByRangeResponseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRankingGetByRangeResponseParam_Statics::NewProp_rankingList = { "rankingList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRankingGetByRangeResponseParam, rankingList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRankingGetByRangeResponseParam_Statics::NewProp_rankingList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRankingGetByRangeResponseParam_Statics::NewProp_rankingList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRankingGetByRangeResponseParam_Statics::NewProp_rankingList_Inner = { "rankingList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRankingInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRankingGetByRangeResponseParam_Statics::NewProp_listNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RankingGetByRangeResponseParam" },
		{ "ModuleRelativePath", "Public/RankingGetByRangeResponseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRankingGetByRangeResponseParam_Statics::NewProp_listNum = { "listNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRankingGetByRangeResponseParam, listNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FRankingGetByRangeResponseParam_Statics::NewProp_listNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRankingGetByRangeResponseParam_Statics::NewProp_listNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRankingGetByRangeResponseParam_Statics::NewProp_sumNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RankingGetByRangeResponseParam" },
		{ "ModuleRelativePath", "Public/RankingGetByRangeResponseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRankingGetByRangeResponseParam_Statics::NewProp_sumNum = { "sumNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRankingGetByRangeResponseParam, sumNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FRankingGetByRangeResponseParam_Statics::NewProp_sumNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRankingGetByRangeResponseParam_Statics::NewProp_sumNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRankingGetByRangeResponseParam_Statics::NewProp_Status_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RankingGetByRangeResponseParam" },
		{ "ModuleRelativePath", "Public/RankingGetByRangeResponseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRankingGetByRangeResponseParam_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRankingGetByRangeResponseParam, Status), METADATA_PARAMS(Z_Construct_UScriptStruct_FRankingGetByRangeResponseParam_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRankingGetByRangeResponseParam_Statics::NewProp_Status_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRankingGetByRangeResponseParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRankingGetByRangeResponseParam_Statics::NewProp_rankingList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRankingGetByRangeResponseParam_Statics::NewProp_rankingList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRankingGetByRangeResponseParam_Statics::NewProp_listNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRankingGetByRangeResponseParam_Statics::NewProp_sumNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRankingGetByRangeResponseParam_Statics::NewProp_Status,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRankingGetByRangeResponseParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CosmosWebApi,
		nullptr,
		&NewStructOps,
		"RankingGetByRangeResponseParam",
		sizeof(FRankingGetByRangeResponseParam),
		alignof(FRankingGetByRangeResponseParam),
		Z_Construct_UScriptStruct_FRankingGetByRangeResponseParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRankingGetByRangeResponseParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRankingGetByRangeResponseParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRankingGetByRangeResponseParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRankingGetByRangeResponseParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRankingGetByRangeResponseParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CosmosWebApi();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RankingGetByRangeResponseParam"), sizeof(FRankingGetByRangeResponseParam), Get_Z_Construct_UScriptStruct_FRankingGetByRangeResponseParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRankingGetByRangeResponseParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRankingGetByRangeResponseParam_Hash() { return 209278932U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
