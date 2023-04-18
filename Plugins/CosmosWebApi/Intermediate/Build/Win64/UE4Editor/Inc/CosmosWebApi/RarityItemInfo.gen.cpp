// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CosmosWebApi/Public/RarityItemInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRarityItemInfo() {}
// Cross Module References
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FRarityItemInfo();
	UPackage* Z_Construct_UPackage__Script_CosmosWebApi();
// End Cross Module References
class UScriptStruct* FRarityItemInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COSMOSWEBAPI_API uint32 Get_Z_Construct_UScriptStruct_FRarityItemInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRarityItemInfo, Z_Construct_UPackage__Script_CosmosWebApi(), TEXT("RarityItemInfo"), sizeof(FRarityItemInfo), Get_Z_Construct_UScriptStruct_FRarityItemInfo_Hash());
	}
	return Singleton;
}
template<> COSMOSWEBAPI_API UScriptStruct* StaticStruct<FRarityItemInfo>()
{
	return FRarityItemInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRarityItemInfo(FRarityItemInfo::StaticStruct, TEXT("/Script/CosmosWebApi"), TEXT("RarityItemInfo"), false, nullptr, nullptr);
static struct FScriptStruct_CosmosWebApi_StaticRegisterNativesFRarityItemInfo
{
	FScriptStruct_CosmosWebApi_StaticRegisterNativesFRarityItemInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RarityItemInfo")),new UScriptStruct::TCppStructOps<FRarityItemInfo>);
	}
} ScriptStruct_CosmosWebApi_StaticRegisterNativesFRarityItemInfo;
	struct Z_Construct_UScriptStruct_FRarityItemInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_boxRemaining_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_boxRemaining;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_boxCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_boxCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_singleItemFlag_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_singleItemFlag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_onlineType_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_onlineType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_itemInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_itemInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_campaignItemRarityRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_campaignItemRarityRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_itemRarityRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_itemRarityRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_itemNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_itemNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_itemConfigId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_itemConfigId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRarityItemInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RarityItemInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRarityItemInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRarityItemInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRarityItemInfo_Statics::NewProp_boxRemaining_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RarityItemInfo" },
		{ "ModuleRelativePath", "Public/RarityItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRarityItemInfo_Statics::NewProp_boxRemaining = { "boxRemaining", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRarityItemInfo, boxRemaining), METADATA_PARAMS(Z_Construct_UScriptStruct_FRarityItemInfo_Statics::NewProp_boxRemaining_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRarityItemInfo_Statics::NewProp_boxRemaining_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRarityItemInfo_Statics::NewProp_boxCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RarityItemInfo" },
		{ "ModuleRelativePath", "Public/RarityItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRarityItemInfo_Statics::NewProp_boxCount = { "boxCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRarityItemInfo, boxCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FRarityItemInfo_Statics::NewProp_boxCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRarityItemInfo_Statics::NewProp_boxCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRarityItemInfo_Statics::NewProp_singleItemFlag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RarityItemInfo" },
		{ "ModuleRelativePath", "Public/RarityItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRarityItemInfo_Statics::NewProp_singleItemFlag = { "singleItemFlag", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRarityItemInfo, singleItemFlag), METADATA_PARAMS(Z_Construct_UScriptStruct_FRarityItemInfo_Statics::NewProp_singleItemFlag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRarityItemInfo_Statics::NewProp_singleItemFlag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRarityItemInfo_Statics::NewProp_onlineType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RarityItemInfo" },
		{ "ModuleRelativePath", "Public/RarityItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRarityItemInfo_Statics::NewProp_onlineType = { "onlineType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRarityItemInfo, onlineType), METADATA_PARAMS(Z_Construct_UScriptStruct_FRarityItemInfo_Statics::NewProp_onlineType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRarityItemInfo_Statics::NewProp_onlineType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRarityItemInfo_Statics::NewProp_ItemType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RarityItemInfo" },
		{ "ModuleRelativePath", "Public/RarityItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRarityItemInfo_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRarityItemInfo, ItemType), METADATA_PARAMS(Z_Construct_UScriptStruct_FRarityItemInfo_Statics::NewProp_ItemType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRarityItemInfo_Statics::NewProp_ItemType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRarityItemInfo_Statics::NewProp_itemInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RarityItemInfo" },
		{ "ModuleRelativePath", "Public/RarityItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRarityItemInfo_Statics::NewProp_itemInfo = { "itemInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRarityItemInfo, itemInfo), METADATA_PARAMS(Z_Construct_UScriptStruct_FRarityItemInfo_Statics::NewProp_itemInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRarityItemInfo_Statics::NewProp_itemInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRarityItemInfo_Statics::NewProp_campaignItemRarityRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RarityItemInfo" },
		{ "ModuleRelativePath", "Public/RarityItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRarityItemInfo_Statics::NewProp_campaignItemRarityRate = { "campaignItemRarityRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRarityItemInfo, campaignItemRarityRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FRarityItemInfo_Statics::NewProp_campaignItemRarityRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRarityItemInfo_Statics::NewProp_campaignItemRarityRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRarityItemInfo_Statics::NewProp_itemRarityRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RarityItemInfo" },
		{ "ModuleRelativePath", "Public/RarityItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRarityItemInfo_Statics::NewProp_itemRarityRate = { "itemRarityRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRarityItemInfo, itemRarityRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FRarityItemInfo_Statics::NewProp_itemRarityRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRarityItemInfo_Statics::NewProp_itemRarityRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRarityItemInfo_Statics::NewProp_itemNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RarityItemInfo" },
		{ "ModuleRelativePath", "Public/RarityItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRarityItemInfo_Statics::NewProp_itemNum = { "itemNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRarityItemInfo, itemNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FRarityItemInfo_Statics::NewProp_itemNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRarityItemInfo_Statics::NewProp_itemNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRarityItemInfo_Statics::NewProp_ItemId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RarityItemInfo" },
		{ "ModuleRelativePath", "Public/RarityItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRarityItemInfo_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRarityItemInfo, ItemId), METADATA_PARAMS(Z_Construct_UScriptStruct_FRarityItemInfo_Statics::NewProp_ItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRarityItemInfo_Statics::NewProp_ItemId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRarityItemInfo_Statics::NewProp_itemConfigId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RarityItemInfo" },
		{ "ModuleRelativePath", "Public/RarityItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRarityItemInfo_Statics::NewProp_itemConfigId = { "itemConfigId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRarityItemInfo, itemConfigId), METADATA_PARAMS(Z_Construct_UScriptStruct_FRarityItemInfo_Statics::NewProp_itemConfigId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRarityItemInfo_Statics::NewProp_itemConfigId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRarityItemInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRarityItemInfo_Statics::NewProp_boxRemaining,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRarityItemInfo_Statics::NewProp_boxCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRarityItemInfo_Statics::NewProp_singleItemFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRarityItemInfo_Statics::NewProp_onlineType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRarityItemInfo_Statics::NewProp_ItemType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRarityItemInfo_Statics::NewProp_itemInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRarityItemInfo_Statics::NewProp_campaignItemRarityRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRarityItemInfo_Statics::NewProp_itemRarityRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRarityItemInfo_Statics::NewProp_itemNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRarityItemInfo_Statics::NewProp_ItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRarityItemInfo_Statics::NewProp_itemConfigId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRarityItemInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CosmosWebApi,
		nullptr,
		&NewStructOps,
		"RarityItemInfo",
		sizeof(FRarityItemInfo),
		alignof(FRarityItemInfo),
		Z_Construct_UScriptStruct_FRarityItemInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRarityItemInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRarityItemInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRarityItemInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRarityItemInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRarityItemInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CosmosWebApi();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RarityItemInfo"), sizeof(FRarityItemInfo), Get_Z_Construct_UScriptStruct_FRarityItemInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRarityItemInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRarityItemInfo_Hash() { return 1653715389U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
