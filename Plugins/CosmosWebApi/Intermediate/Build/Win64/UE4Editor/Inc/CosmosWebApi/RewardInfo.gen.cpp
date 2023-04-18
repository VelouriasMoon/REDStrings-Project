// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CosmosWebApi/Public/RewardInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRewardInfo() {}
// Cross Module References
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FRewardInfo();
	UPackage* Z_Construct_UPackage__Script_CosmosWebApi();
// End Cross Module References
class UScriptStruct* FRewardInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COSMOSWEBAPI_API uint32 Get_Z_Construct_UScriptStruct_FRewardInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRewardInfo, Z_Construct_UPackage__Script_CosmosWebApi(), TEXT("RewardInfo"), sizeof(FRewardInfo), Get_Z_Construct_UScriptStruct_FRewardInfo_Hash());
	}
	return Singleton;
}
template<> COSMOSWEBAPI_API UScriptStruct* StaticStruct<FRewardInfo>()
{
	return FRewardInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRewardInfo(FRewardInfo::StaticStruct, TEXT("/Script/CosmosWebApi"), TEXT("RewardInfo"), false, nullptr, nullptr);
static struct FScriptStruct_CosmosWebApi_StaticRegisterNativesFRewardInfo
{
	FScriptStruct_CosmosWebApi_StaticRegisterNativesFRewardInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RewardInfo")),new UScriptStruct::TCppStructOps<FRewardInfo>);
	}
} ScriptStruct_CosmosWebApi_StaticRegisterNativesFRewardInfo;
	struct Z_Construct_UScriptStruct_FRewardInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Point_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Point;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rank_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_rank;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_countPiece_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_countPiece;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_countAll_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_countAll;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_itemDetail_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_itemDetail;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ticketId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ticketId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_campaignId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_campaignId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRewardInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RewardInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRewardInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRewardInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRewardInfo_Statics::NewProp_Point_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RewardInfo" },
		{ "ModuleRelativePath", "Public/RewardInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRewardInfo_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRewardInfo, Point), METADATA_PARAMS(Z_Construct_UScriptStruct_FRewardInfo_Statics::NewProp_Point_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRewardInfo_Statics::NewProp_Point_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRewardInfo_Statics::NewProp_rank_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RewardInfo" },
		{ "ModuleRelativePath", "Public/RewardInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRewardInfo_Statics::NewProp_rank = { "rank", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRewardInfo, rank), METADATA_PARAMS(Z_Construct_UScriptStruct_FRewardInfo_Statics::NewProp_rank_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRewardInfo_Statics::NewProp_rank_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRewardInfo_Statics::NewProp_countPiece_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RewardInfo" },
		{ "ModuleRelativePath", "Public/RewardInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRewardInfo_Statics::NewProp_countPiece = { "countPiece", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRewardInfo, countPiece), METADATA_PARAMS(Z_Construct_UScriptStruct_FRewardInfo_Statics::NewProp_countPiece_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRewardInfo_Statics::NewProp_countPiece_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRewardInfo_Statics::NewProp_countAll_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RewardInfo" },
		{ "ModuleRelativePath", "Public/RewardInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRewardInfo_Statics::NewProp_countAll = { "countAll", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRewardInfo, countAll), METADATA_PARAMS(Z_Construct_UScriptStruct_FRewardInfo_Statics::NewProp_countAll_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRewardInfo_Statics::NewProp_countAll_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRewardInfo_Statics::NewProp_itemDetail_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RewardInfo" },
		{ "ModuleRelativePath", "Public/RewardInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRewardInfo_Statics::NewProp_itemDetail = { "itemDetail", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRewardInfo, itemDetail), METADATA_PARAMS(Z_Construct_UScriptStruct_FRewardInfo_Statics::NewProp_itemDetail_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRewardInfo_Statics::NewProp_itemDetail_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRewardInfo_Statics::NewProp_ItemName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RewardInfo" },
		{ "ModuleRelativePath", "Public/RewardInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRewardInfo_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRewardInfo, ItemName), METADATA_PARAMS(Z_Construct_UScriptStruct_FRewardInfo_Statics::NewProp_ItemName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRewardInfo_Statics::NewProp_ItemName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRewardInfo_Statics::NewProp_ItemId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RewardInfo" },
		{ "ModuleRelativePath", "Public/RewardInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRewardInfo_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRewardInfo, ItemId), METADATA_PARAMS(Z_Construct_UScriptStruct_FRewardInfo_Statics::NewProp_ItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRewardInfo_Statics::NewProp_ItemId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRewardInfo_Statics::NewProp_ticketId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RewardInfo" },
		{ "ModuleRelativePath", "Public/RewardInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRewardInfo_Statics::NewProp_ticketId = { "ticketId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRewardInfo, ticketId), METADATA_PARAMS(Z_Construct_UScriptStruct_FRewardInfo_Statics::NewProp_ticketId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRewardInfo_Statics::NewProp_ticketId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRewardInfo_Statics::NewProp_campaignId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RewardInfo" },
		{ "ModuleRelativePath", "Public/RewardInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRewardInfo_Statics::NewProp_campaignId = { "campaignId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRewardInfo, campaignId), METADATA_PARAMS(Z_Construct_UScriptStruct_FRewardInfo_Statics::NewProp_campaignId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRewardInfo_Statics::NewProp_campaignId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRewardInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRewardInfo_Statics::NewProp_Point,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRewardInfo_Statics::NewProp_rank,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRewardInfo_Statics::NewProp_countPiece,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRewardInfo_Statics::NewProp_countAll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRewardInfo_Statics::NewProp_itemDetail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRewardInfo_Statics::NewProp_ItemName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRewardInfo_Statics::NewProp_ItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRewardInfo_Statics::NewProp_ticketId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRewardInfo_Statics::NewProp_campaignId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRewardInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CosmosWebApi,
		nullptr,
		&NewStructOps,
		"RewardInfo",
		sizeof(FRewardInfo),
		alignof(FRewardInfo),
		Z_Construct_UScriptStruct_FRewardInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRewardInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRewardInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRewardInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRewardInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRewardInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CosmosWebApi();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RewardInfo"), sizeof(FRewardInfo), Get_Z_Construct_UScriptStruct_FRewardInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRewardInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRewardInfo_Hash() { return 4292505562U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
