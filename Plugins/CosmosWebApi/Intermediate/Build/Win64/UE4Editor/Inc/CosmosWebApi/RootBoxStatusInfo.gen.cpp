// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CosmosWebApi/Public/RootBoxStatusInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRootBoxStatusInfo() {}
// Cross Module References
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FRootBoxStatusInfo();
	UPackage* Z_Construct_UPackage__Script_CosmosWebApi();
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FRarityItemInfo();
// End Cross Module References
class UScriptStruct* FRootBoxStatusInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COSMOSWEBAPI_API uint32 Get_Z_Construct_UScriptStruct_FRootBoxStatusInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRootBoxStatusInfo, Z_Construct_UPackage__Script_CosmosWebApi(), TEXT("RootBoxStatusInfo"), sizeof(FRootBoxStatusInfo), Get_Z_Construct_UScriptStruct_FRootBoxStatusInfo_Hash());
	}
	return Singleton;
}
template<> COSMOSWEBAPI_API UScriptStruct* StaticStruct<FRootBoxStatusInfo>()
{
	return FRootBoxStatusInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRootBoxStatusInfo(FRootBoxStatusInfo::StaticStruct, TEXT("/Script/CosmosWebApi"), TEXT("RootBoxStatusInfo"), false, nullptr, nullptr);
static struct FScriptStruct_CosmosWebApi_StaticRegisterNativesFRootBoxStatusInfo
{
	FScriptStruct_CosmosWebApi_StaticRegisterNativesFRootBoxStatusInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RootBoxStatusInfo")),new UScriptStruct::TCppStructOps<FRootBoxStatusInfo>);
	}
} ScriptStruct_CosmosWebApi_StaticRegisterNativesFRootBoxStatusInfo;
	struct Z_Construct_UScriptStruct_FRootBoxStatusInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rarityItemList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_rarityItemList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rarityItemList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_campaignRarityRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_campaignRarityRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rarityRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_rarityRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rarityId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_rarityId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootBoxStatusInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RootBoxStatusInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRootBoxStatusInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRootBoxStatusInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootBoxStatusInfo_Statics::NewProp_rarityItemList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RootBoxStatusInfo" },
		{ "ModuleRelativePath", "Public/RootBoxStatusInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRootBoxStatusInfo_Statics::NewProp_rarityItemList = { "rarityItemList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRootBoxStatusInfo, rarityItemList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRootBoxStatusInfo_Statics::NewProp_rarityItemList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootBoxStatusInfo_Statics::NewProp_rarityItemList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRootBoxStatusInfo_Statics::NewProp_rarityItemList_Inner = { "rarityItemList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRarityItemInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootBoxStatusInfo_Statics::NewProp_campaignRarityRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RootBoxStatusInfo" },
		{ "ModuleRelativePath", "Public/RootBoxStatusInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRootBoxStatusInfo_Statics::NewProp_campaignRarityRate = { "campaignRarityRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRootBoxStatusInfo, campaignRarityRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FRootBoxStatusInfo_Statics::NewProp_campaignRarityRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootBoxStatusInfo_Statics::NewProp_campaignRarityRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootBoxStatusInfo_Statics::NewProp_rarityRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RootBoxStatusInfo" },
		{ "ModuleRelativePath", "Public/RootBoxStatusInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRootBoxStatusInfo_Statics::NewProp_rarityRate = { "rarityRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRootBoxStatusInfo, rarityRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FRootBoxStatusInfo_Statics::NewProp_rarityRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootBoxStatusInfo_Statics::NewProp_rarityRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootBoxStatusInfo_Statics::NewProp_rarityId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RootBoxStatusInfo" },
		{ "ModuleRelativePath", "Public/RootBoxStatusInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRootBoxStatusInfo_Statics::NewProp_rarityId = { "rarityId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRootBoxStatusInfo, rarityId), METADATA_PARAMS(Z_Construct_UScriptStruct_FRootBoxStatusInfo_Statics::NewProp_rarityId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootBoxStatusInfo_Statics::NewProp_rarityId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRootBoxStatusInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootBoxStatusInfo_Statics::NewProp_rarityItemList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootBoxStatusInfo_Statics::NewProp_rarityItemList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootBoxStatusInfo_Statics::NewProp_campaignRarityRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootBoxStatusInfo_Statics::NewProp_rarityRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootBoxStatusInfo_Statics::NewProp_rarityId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRootBoxStatusInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CosmosWebApi,
		nullptr,
		&NewStructOps,
		"RootBoxStatusInfo",
		sizeof(FRootBoxStatusInfo),
		alignof(FRootBoxStatusInfo),
		Z_Construct_UScriptStruct_FRootBoxStatusInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootBoxStatusInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRootBoxStatusInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootBoxStatusInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRootBoxStatusInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRootBoxStatusInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CosmosWebApi();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RootBoxStatusInfo"), sizeof(FRootBoxStatusInfo), Get_Z_Construct_UScriptStruct_FRootBoxStatusInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRootBoxStatusInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRootBoxStatusInfo_Hash() { return 3684125092U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
