// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CosmosWebApi/Public/GetItemInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGetItemInfo() {}
// Cross Module References
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FGetItemInfo();
	UPackage* Z_Construct_UPackage__Script_CosmosWebApi();
// End Cross Module References
class UScriptStruct* FGetItemInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COSMOSWEBAPI_API uint32 Get_Z_Construct_UScriptStruct_FGetItemInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGetItemInfo, Z_Construct_UPackage__Script_CosmosWebApi(), TEXT("GetItemInfo"), sizeof(FGetItemInfo), Get_Z_Construct_UScriptStruct_FGetItemInfo_Hash());
	}
	return Singleton;
}
template<> COSMOSWEBAPI_API UScriptStruct* StaticStruct<FGetItemInfo>()
{
	return FGetItemInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGetItemInfo(FGetItemInfo::StaticStruct, TEXT("/Script/CosmosWebApi"), TEXT("GetItemInfo"), false, nullptr, nullptr);
static struct FScriptStruct_CosmosWebApi_StaticRegisterNativesFGetItemInfo
{
	FScriptStruct_CosmosWebApi_StaticRegisterNativesFGetItemInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GetItemInfo")),new UScriptStruct::TCppStructOps<FGetItemInfo>);
	}
} ScriptStruct_CosmosWebApi_StaticRegisterNativesFGetItemInfo;
	struct Z_Construct_UScriptStruct_FGetItemInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_onlineType_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_onlineType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_itemInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_itemInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_itemNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_itemNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetItemInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GetItemInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGetItemInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGetItemInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetItemInfo_Statics::NewProp_onlineType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GetItemInfo" },
		{ "ModuleRelativePath", "Public/GetItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGetItemInfo_Statics::NewProp_onlineType = { "onlineType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGetItemInfo, onlineType), METADATA_PARAMS(Z_Construct_UScriptStruct_FGetItemInfo_Statics::NewProp_onlineType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetItemInfo_Statics::NewProp_onlineType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetItemInfo_Statics::NewProp_itemInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GetItemInfo" },
		{ "ModuleRelativePath", "Public/GetItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGetItemInfo_Statics::NewProp_itemInfo = { "itemInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGetItemInfo, itemInfo), METADATA_PARAMS(Z_Construct_UScriptStruct_FGetItemInfo_Statics::NewProp_itemInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetItemInfo_Statics::NewProp_itemInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetItemInfo_Statics::NewProp_itemNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GetItemInfo" },
		{ "ModuleRelativePath", "Public/GetItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGetItemInfo_Statics::NewProp_itemNum = { "itemNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGetItemInfo, itemNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FGetItemInfo_Statics::NewProp_itemNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetItemInfo_Statics::NewProp_itemNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetItemInfo_Statics::NewProp_ItemId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GetItemInfo" },
		{ "ModuleRelativePath", "Public/GetItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGetItemInfo_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGetItemInfo, ItemId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGetItemInfo_Statics::NewProp_ItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetItemInfo_Statics::NewProp_ItemId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGetItemInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetItemInfo_Statics::NewProp_onlineType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetItemInfo_Statics::NewProp_itemInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetItemInfo_Statics::NewProp_itemNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetItemInfo_Statics::NewProp_ItemId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGetItemInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CosmosWebApi,
		nullptr,
		&NewStructOps,
		"GetItemInfo",
		sizeof(FGetItemInfo),
		alignof(FGetItemInfo),
		Z_Construct_UScriptStruct_FGetItemInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetItemInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGetItemInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetItemInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGetItemInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGetItemInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CosmosWebApi();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GetItemInfo"), sizeof(FGetItemInfo), Get_Z_Construct_UScriptStruct_FGetItemInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGetItemInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGetItemInfo_Hash() { return 2268761066U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
