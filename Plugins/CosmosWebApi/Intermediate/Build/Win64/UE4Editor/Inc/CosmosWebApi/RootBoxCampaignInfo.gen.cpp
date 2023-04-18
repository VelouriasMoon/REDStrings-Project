// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CosmosWebApi/Public/RootBoxCampaignInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRootBoxCampaignInfo() {}
// Cross Module References
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FRootBoxCampaignInfo();
	UPackage* Z_Construct_UPackage__Script_CosmosWebApi();
// End Cross Module References
class UScriptStruct* FRootBoxCampaignInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COSMOSWEBAPI_API uint32 Get_Z_Construct_UScriptStruct_FRootBoxCampaignInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRootBoxCampaignInfo, Z_Construct_UPackage__Script_CosmosWebApi(), TEXT("RootBoxCampaignInfo"), sizeof(FRootBoxCampaignInfo), Get_Z_Construct_UScriptStruct_FRootBoxCampaignInfo_Hash());
	}
	return Singleton;
}
template<> COSMOSWEBAPI_API UScriptStruct* StaticStruct<FRootBoxCampaignInfo>()
{
	return FRootBoxCampaignInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRootBoxCampaignInfo(FRootBoxCampaignInfo::StaticStruct, TEXT("/Script/CosmosWebApi"), TEXT("RootBoxCampaignInfo"), false, nullptr, nullptr);
static struct FScriptStruct_CosmosWebApi_StaticRegisterNativesFRootBoxCampaignInfo
{
	FScriptStruct_CosmosWebApi_StaticRegisterNativesFRootBoxCampaignInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RootBoxCampaignInfo")),new UScriptStruct::TCppStructOps<FRootBoxCampaignInfo>);
	}
} ScriptStruct_CosmosWebApi_StaticRegisterNativesFRootBoxCampaignInfo;
	struct Z_Construct_UScriptStruct_FRootBoxCampaignInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_campaignOption_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_campaignOption;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_campaignEndTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_campaignEndTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_campaignStartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_campaignStartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_campaignId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_campaignId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootBoxCampaignInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RootBoxCampaignInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRootBoxCampaignInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRootBoxCampaignInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootBoxCampaignInfo_Statics::NewProp_campaignOption_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RootBoxCampaignInfo" },
		{ "ModuleRelativePath", "Public/RootBoxCampaignInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRootBoxCampaignInfo_Statics::NewProp_campaignOption = { "campaignOption", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRootBoxCampaignInfo, campaignOption), METADATA_PARAMS(Z_Construct_UScriptStruct_FRootBoxCampaignInfo_Statics::NewProp_campaignOption_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootBoxCampaignInfo_Statics::NewProp_campaignOption_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootBoxCampaignInfo_Statics::NewProp_campaignEndTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RootBoxCampaignInfo" },
		{ "ModuleRelativePath", "Public/RootBoxCampaignInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRootBoxCampaignInfo_Statics::NewProp_campaignEndTime = { "campaignEndTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRootBoxCampaignInfo, campaignEndTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FRootBoxCampaignInfo_Statics::NewProp_campaignEndTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootBoxCampaignInfo_Statics::NewProp_campaignEndTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootBoxCampaignInfo_Statics::NewProp_campaignStartTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RootBoxCampaignInfo" },
		{ "ModuleRelativePath", "Public/RootBoxCampaignInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRootBoxCampaignInfo_Statics::NewProp_campaignStartTime = { "campaignStartTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRootBoxCampaignInfo, campaignStartTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FRootBoxCampaignInfo_Statics::NewProp_campaignStartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootBoxCampaignInfo_Statics::NewProp_campaignStartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootBoxCampaignInfo_Statics::NewProp_campaignId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RootBoxCampaignInfo" },
		{ "ModuleRelativePath", "Public/RootBoxCampaignInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRootBoxCampaignInfo_Statics::NewProp_campaignId = { "campaignId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRootBoxCampaignInfo, campaignId), METADATA_PARAMS(Z_Construct_UScriptStruct_FRootBoxCampaignInfo_Statics::NewProp_campaignId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootBoxCampaignInfo_Statics::NewProp_campaignId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRootBoxCampaignInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootBoxCampaignInfo_Statics::NewProp_campaignOption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootBoxCampaignInfo_Statics::NewProp_campaignEndTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootBoxCampaignInfo_Statics::NewProp_campaignStartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootBoxCampaignInfo_Statics::NewProp_campaignId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRootBoxCampaignInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CosmosWebApi,
		nullptr,
		&NewStructOps,
		"RootBoxCampaignInfo",
		sizeof(FRootBoxCampaignInfo),
		alignof(FRootBoxCampaignInfo),
		Z_Construct_UScriptStruct_FRootBoxCampaignInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootBoxCampaignInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRootBoxCampaignInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootBoxCampaignInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRootBoxCampaignInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRootBoxCampaignInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CosmosWebApi();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RootBoxCampaignInfo"), sizeof(FRootBoxCampaignInfo), Get_Z_Construct_UScriptStruct_FRootBoxCampaignInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRootBoxCampaignInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRootBoxCampaignInfo_Hash() { return 2055723925U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
