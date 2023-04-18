// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CosmosWebApi/Public/RootBoxResultInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRootBoxResultInfo() {}
// Cross Module References
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FRootBoxResultInfo();
	UPackage* Z_Construct_UPackage__Script_CosmosWebApi();
// End Cross Module References
class UScriptStruct* FRootBoxResultInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COSMOSWEBAPI_API uint32 Get_Z_Construct_UScriptStruct_FRootBoxResultInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRootBoxResultInfo, Z_Construct_UPackage__Script_CosmosWebApi(), TEXT("RootBoxResultInfo"), sizeof(FRootBoxResultInfo), Get_Z_Construct_UScriptStruct_FRootBoxResultInfo_Hash());
	}
	return Singleton;
}
template<> COSMOSWEBAPI_API UScriptStruct* StaticStruct<FRootBoxResultInfo>()
{
	return FRootBoxResultInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRootBoxResultInfo(FRootBoxResultInfo::StaticStruct, TEXT("/Script/CosmosWebApi"), TEXT("RootBoxResultInfo"), false, nullptr, nullptr);
static struct FScriptStruct_CosmosWebApi_StaticRegisterNativesFRootBoxResultInfo
{
	FScriptStruct_CosmosWebApi_StaticRegisterNativesFRootBoxResultInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RootBoxResultInfo")),new UScriptStruct::TCppStructOps<FRootBoxResultInfo>);
	}
} ScriptStruct_CosmosWebApi_StaticRegisterNativesFRootBoxResultInfo;
	struct Z_Construct_UScriptStruct_FRootBoxResultInfo_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_replaceItemNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_replaceItemNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_replaceItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_replaceItemId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_replaceFlag_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_replaceFlag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_onlineType_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_onlineType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemType;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootBoxResultInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RootBoxResultInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRootBoxResultInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRootBoxResultInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootBoxResultInfo_Statics::NewProp_boxRemaining_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RootBoxResultInfo" },
		{ "ModuleRelativePath", "Public/RootBoxResultInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRootBoxResultInfo_Statics::NewProp_boxRemaining = { "boxRemaining", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRootBoxResultInfo, boxRemaining), METADATA_PARAMS(Z_Construct_UScriptStruct_FRootBoxResultInfo_Statics::NewProp_boxRemaining_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootBoxResultInfo_Statics::NewProp_boxRemaining_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootBoxResultInfo_Statics::NewProp_replaceItemNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RootBoxResultInfo" },
		{ "ModuleRelativePath", "Public/RootBoxResultInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRootBoxResultInfo_Statics::NewProp_replaceItemNum = { "replaceItemNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRootBoxResultInfo, replaceItemNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FRootBoxResultInfo_Statics::NewProp_replaceItemNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootBoxResultInfo_Statics::NewProp_replaceItemNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootBoxResultInfo_Statics::NewProp_replaceItemId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RootBoxResultInfo" },
		{ "ModuleRelativePath", "Public/RootBoxResultInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRootBoxResultInfo_Statics::NewProp_replaceItemId = { "replaceItemId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRootBoxResultInfo, replaceItemId), METADATA_PARAMS(Z_Construct_UScriptStruct_FRootBoxResultInfo_Statics::NewProp_replaceItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootBoxResultInfo_Statics::NewProp_replaceItemId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootBoxResultInfo_Statics::NewProp_replaceFlag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RootBoxResultInfo" },
		{ "ModuleRelativePath", "Public/RootBoxResultInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRootBoxResultInfo_Statics::NewProp_replaceFlag = { "replaceFlag", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRootBoxResultInfo, replaceFlag), METADATA_PARAMS(Z_Construct_UScriptStruct_FRootBoxResultInfo_Statics::NewProp_replaceFlag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootBoxResultInfo_Statics::NewProp_replaceFlag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootBoxResultInfo_Statics::NewProp_onlineType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RootBoxResultInfo" },
		{ "ModuleRelativePath", "Public/RootBoxResultInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRootBoxResultInfo_Statics::NewProp_onlineType = { "onlineType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRootBoxResultInfo, onlineType), METADATA_PARAMS(Z_Construct_UScriptStruct_FRootBoxResultInfo_Statics::NewProp_onlineType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootBoxResultInfo_Statics::NewProp_onlineType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootBoxResultInfo_Statics::NewProp_ItemType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RootBoxResultInfo" },
		{ "ModuleRelativePath", "Public/RootBoxResultInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRootBoxResultInfo_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRootBoxResultInfo, ItemType), METADATA_PARAMS(Z_Construct_UScriptStruct_FRootBoxResultInfo_Statics::NewProp_ItemType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootBoxResultInfo_Statics::NewProp_ItemType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootBoxResultInfo_Statics::NewProp_itemNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RootBoxResultInfo" },
		{ "ModuleRelativePath", "Public/RootBoxResultInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRootBoxResultInfo_Statics::NewProp_itemNum = { "itemNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRootBoxResultInfo, itemNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FRootBoxResultInfo_Statics::NewProp_itemNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootBoxResultInfo_Statics::NewProp_itemNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootBoxResultInfo_Statics::NewProp_ItemId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RootBoxResultInfo" },
		{ "ModuleRelativePath", "Public/RootBoxResultInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRootBoxResultInfo_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRootBoxResultInfo, ItemId), METADATA_PARAMS(Z_Construct_UScriptStruct_FRootBoxResultInfo_Statics::NewProp_ItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootBoxResultInfo_Statics::NewProp_ItemId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootBoxResultInfo_Statics::NewProp_itemConfigId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RootBoxResultInfo" },
		{ "ModuleRelativePath", "Public/RootBoxResultInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRootBoxResultInfo_Statics::NewProp_itemConfigId = { "itemConfigId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRootBoxResultInfo, itemConfigId), METADATA_PARAMS(Z_Construct_UScriptStruct_FRootBoxResultInfo_Statics::NewProp_itemConfigId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootBoxResultInfo_Statics::NewProp_itemConfigId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRootBoxResultInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootBoxResultInfo_Statics::NewProp_boxRemaining,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootBoxResultInfo_Statics::NewProp_replaceItemNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootBoxResultInfo_Statics::NewProp_replaceItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootBoxResultInfo_Statics::NewProp_replaceFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootBoxResultInfo_Statics::NewProp_onlineType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootBoxResultInfo_Statics::NewProp_ItemType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootBoxResultInfo_Statics::NewProp_itemNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootBoxResultInfo_Statics::NewProp_ItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootBoxResultInfo_Statics::NewProp_itemConfigId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRootBoxResultInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CosmosWebApi,
		nullptr,
		&NewStructOps,
		"RootBoxResultInfo",
		sizeof(FRootBoxResultInfo),
		alignof(FRootBoxResultInfo),
		Z_Construct_UScriptStruct_FRootBoxResultInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootBoxResultInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRootBoxResultInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootBoxResultInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRootBoxResultInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRootBoxResultInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CosmosWebApi();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RootBoxResultInfo"), sizeof(FRootBoxResultInfo), Get_Z_Construct_UScriptStruct_FRootBoxResultInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRootBoxResultInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRootBoxResultInfo_Hash() { return 2376534384U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
