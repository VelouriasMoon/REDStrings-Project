// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CosmosWebApi/Public/GiftInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGiftInfo() {}
// Cross Module References
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FGiftInfo();
	UPackage* Z_Construct_UPackage__Script_CosmosWebApi();
// End Cross Module References
class UScriptStruct* FGiftInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COSMOSWEBAPI_API uint32 Get_Z_Construct_UScriptStruct_FGiftInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGiftInfo, Z_Construct_UPackage__Script_CosmosWebApi(), TEXT("GiftInfo"), sizeof(FGiftInfo), Get_Z_Construct_UScriptStruct_FGiftInfo_Hash());
	}
	return Singleton;
}
template<> COSMOSWEBAPI_API UScriptStruct* StaticStruct<FGiftInfo>()
{
	return FGiftInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGiftInfo(FGiftInfo::StaticStruct, TEXT("/Script/CosmosWebApi"), TEXT("GiftInfo"), false, nullptr, nullptr);
static struct FScriptStruct_CosmosWebApi_StaticRegisterNativesFGiftInfo
{
	FScriptStruct_CosmosWebApi_StaticRegisterNativesFGiftInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GiftInfo")),new UScriptStruct::TCppStructOps<FGiftInfo>);
	}
} ScriptStruct_CosmosWebApi_StaticRegisterNativesFGiftInfo;
	struct Z_Construct_UScriptStruct_FGiftInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_remainingTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_remainingTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_timeLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_timeLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_giftReasonId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_giftReasonId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_onlineType_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_onlineType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_itemNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_itemNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_itemInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_itemInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_giftId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_giftId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGiftInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GiftInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGiftInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGiftInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGiftInfo_Statics::NewProp_remainingTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GiftInfo" },
		{ "ModuleRelativePath", "Public/GiftInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGiftInfo_Statics::NewProp_remainingTime = { "remainingTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGiftInfo, remainingTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FGiftInfo_Statics::NewProp_remainingTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGiftInfo_Statics::NewProp_remainingTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGiftInfo_Statics::NewProp_timeLimit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GiftInfo" },
		{ "ModuleRelativePath", "Public/GiftInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGiftInfo_Statics::NewProp_timeLimit = { "timeLimit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGiftInfo, timeLimit), METADATA_PARAMS(Z_Construct_UScriptStruct_FGiftInfo_Statics::NewProp_timeLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGiftInfo_Statics::NewProp_timeLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGiftInfo_Statics::NewProp_giftReasonId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GiftInfo" },
		{ "ModuleRelativePath", "Public/GiftInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGiftInfo_Statics::NewProp_giftReasonId = { "giftReasonId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGiftInfo, giftReasonId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGiftInfo_Statics::NewProp_giftReasonId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGiftInfo_Statics::NewProp_giftReasonId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGiftInfo_Statics::NewProp_onlineType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GiftInfo" },
		{ "ModuleRelativePath", "Public/GiftInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGiftInfo_Statics::NewProp_onlineType = { "onlineType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGiftInfo, onlineType), METADATA_PARAMS(Z_Construct_UScriptStruct_FGiftInfo_Statics::NewProp_onlineType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGiftInfo_Statics::NewProp_onlineType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGiftInfo_Statics::NewProp_itemNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GiftInfo" },
		{ "ModuleRelativePath", "Public/GiftInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGiftInfo_Statics::NewProp_itemNum = { "itemNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGiftInfo, itemNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FGiftInfo_Statics::NewProp_itemNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGiftInfo_Statics::NewProp_itemNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGiftInfo_Statics::NewProp_itemInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GiftInfo" },
		{ "ModuleRelativePath", "Public/GiftInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGiftInfo_Statics::NewProp_itemInfo = { "itemInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGiftInfo, itemInfo), METADATA_PARAMS(Z_Construct_UScriptStruct_FGiftInfo_Statics::NewProp_itemInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGiftInfo_Statics::NewProp_itemInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGiftInfo_Statics::NewProp_ItemId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GiftInfo" },
		{ "ModuleRelativePath", "Public/GiftInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGiftInfo_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGiftInfo, ItemId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGiftInfo_Statics::NewProp_ItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGiftInfo_Statics::NewProp_ItemId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGiftInfo_Statics::NewProp_giftId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GiftInfo" },
		{ "ModuleRelativePath", "Public/GiftInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGiftInfo_Statics::NewProp_giftId = { "giftId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGiftInfo, giftId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGiftInfo_Statics::NewProp_giftId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGiftInfo_Statics::NewProp_giftId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGiftInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGiftInfo_Statics::NewProp_remainingTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGiftInfo_Statics::NewProp_timeLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGiftInfo_Statics::NewProp_giftReasonId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGiftInfo_Statics::NewProp_onlineType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGiftInfo_Statics::NewProp_itemNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGiftInfo_Statics::NewProp_itemInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGiftInfo_Statics::NewProp_ItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGiftInfo_Statics::NewProp_giftId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGiftInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CosmosWebApi,
		nullptr,
		&NewStructOps,
		"GiftInfo",
		sizeof(FGiftInfo),
		alignof(FGiftInfo),
		Z_Construct_UScriptStruct_FGiftInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGiftInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGiftInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGiftInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGiftInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGiftInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CosmosWebApi();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GiftInfo"), sizeof(FGiftInfo), Get_Z_Construct_UScriptStruct_FGiftInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGiftInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGiftInfo_Hash() { return 4053902367U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
