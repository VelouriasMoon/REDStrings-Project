// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CosmosWebApi/Public/CampaignInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCampaignInfo() {}
// Cross Module References
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FCampaignInfo();
	UPackage* Z_Construct_UPackage__Script_CosmosWebApi();
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FRewardInfo();
// End Cross Module References
class UScriptStruct* FCampaignInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COSMOSWEBAPI_API uint32 Get_Z_Construct_UScriptStruct_FCampaignInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCampaignInfo, Z_Construct_UPackage__Script_CosmosWebApi(), TEXT("CampaignInfo"), sizeof(FCampaignInfo), Get_Z_Construct_UScriptStruct_FCampaignInfo_Hash());
	}
	return Singleton;
}
template<> COSMOSWEBAPI_API UScriptStruct* StaticStruct<FCampaignInfo>()
{
	return FCampaignInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCampaignInfo(FCampaignInfo::StaticStruct, TEXT("/Script/CosmosWebApi"), TEXT("CampaignInfo"), false, nullptr, nullptr);
static struct FScriptStruct_CosmosWebApi_StaticRegisterNativesFCampaignInfo
{
	FScriptStruct_CosmosWebApi_StaticRegisterNativesFCampaignInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CampaignInfo")),new UScriptStruct::TCppStructOps<FCampaignInfo>);
	}
} ScriptStruct_CosmosWebApi_StaticRegisterNativesFCampaignInfo;
	struct Z_Construct_UScriptStruct_FCampaignInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rewardList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_rewardList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rewardList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_config_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_config;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_URL;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_itemCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_itemCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_endDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_endDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_startDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_startDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_titleCd_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_titleCd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCampaignInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CampaignInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCampaignInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCampaignInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCampaignInfo_Statics::NewProp_rewardList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CampaignInfo" },
		{ "ModuleRelativePath", "Public/CampaignInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCampaignInfo_Statics::NewProp_rewardList = { "rewardList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCampaignInfo, rewardList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCampaignInfo_Statics::NewProp_rewardList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCampaignInfo_Statics::NewProp_rewardList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCampaignInfo_Statics::NewProp_rewardList_Inner = { "rewardList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRewardInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCampaignInfo_Statics::NewProp_config_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CampaignInfo" },
		{ "ModuleRelativePath", "Public/CampaignInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCampaignInfo_Statics::NewProp_config = { "config", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCampaignInfo, config), METADATA_PARAMS(Z_Construct_UScriptStruct_FCampaignInfo_Statics::NewProp_config_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCampaignInfo_Statics::NewProp_config_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCampaignInfo_Statics::NewProp_Description_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CampaignInfo" },
		{ "ModuleRelativePath", "Public/CampaignInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCampaignInfo_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCampaignInfo, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FCampaignInfo_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCampaignInfo_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCampaignInfo_Statics::NewProp_URL_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CampaignInfo" },
		{ "ModuleRelativePath", "Public/CampaignInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCampaignInfo_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCampaignInfo, URL), METADATA_PARAMS(Z_Construct_UScriptStruct_FCampaignInfo_Statics::NewProp_URL_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCampaignInfo_Statics::NewProp_URL_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCampaignInfo_Statics::NewProp_itemCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CampaignInfo" },
		{ "ModuleRelativePath", "Public/CampaignInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCampaignInfo_Statics::NewProp_itemCount = { "itemCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCampaignInfo, itemCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FCampaignInfo_Statics::NewProp_itemCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCampaignInfo_Statics::NewProp_itemCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCampaignInfo_Statics::NewProp_endDate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CampaignInfo" },
		{ "ModuleRelativePath", "Public/CampaignInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCampaignInfo_Statics::NewProp_endDate = { "endDate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCampaignInfo, endDate), METADATA_PARAMS(Z_Construct_UScriptStruct_FCampaignInfo_Statics::NewProp_endDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCampaignInfo_Statics::NewProp_endDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCampaignInfo_Statics::NewProp_startDate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CampaignInfo" },
		{ "ModuleRelativePath", "Public/CampaignInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCampaignInfo_Statics::NewProp_startDate = { "startDate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCampaignInfo, startDate), METADATA_PARAMS(Z_Construct_UScriptStruct_FCampaignInfo_Statics::NewProp_startDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCampaignInfo_Statics::NewProp_startDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCampaignInfo_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CampaignInfo" },
		{ "ModuleRelativePath", "Public/CampaignInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCampaignInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCampaignInfo, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCampaignInfo_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCampaignInfo_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCampaignInfo_Statics::NewProp_titleCd_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CampaignInfo" },
		{ "ModuleRelativePath", "Public/CampaignInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCampaignInfo_Statics::NewProp_titleCd = { "titleCd", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCampaignInfo, titleCd), METADATA_PARAMS(Z_Construct_UScriptStruct_FCampaignInfo_Statics::NewProp_titleCd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCampaignInfo_Statics::NewProp_titleCd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCampaignInfo_Statics::NewProp_ID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CampaignInfo" },
		{ "ModuleRelativePath", "Public/CampaignInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCampaignInfo_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCampaignInfo, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FCampaignInfo_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCampaignInfo_Statics::NewProp_ID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCampaignInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCampaignInfo_Statics::NewProp_rewardList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCampaignInfo_Statics::NewProp_rewardList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCampaignInfo_Statics::NewProp_config,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCampaignInfo_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCampaignInfo_Statics::NewProp_URL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCampaignInfo_Statics::NewProp_itemCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCampaignInfo_Statics::NewProp_endDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCampaignInfo_Statics::NewProp_startDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCampaignInfo_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCampaignInfo_Statics::NewProp_titleCd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCampaignInfo_Statics::NewProp_ID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCampaignInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CosmosWebApi,
		nullptr,
		&NewStructOps,
		"CampaignInfo",
		sizeof(FCampaignInfo),
		alignof(FCampaignInfo),
		Z_Construct_UScriptStruct_FCampaignInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCampaignInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCampaignInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCampaignInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCampaignInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCampaignInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CosmosWebApi();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CampaignInfo"), sizeof(FCampaignInfo), Get_Z_Construct_UScriptStruct_FCampaignInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCampaignInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCampaignInfo_Hash() { return 3716039839U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
