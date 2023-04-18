// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CosmosWebApi/Public/FesRewardInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFesRewardInfo() {}
// Cross Module References
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FFesRewardInfo();
	UPackage* Z_Construct_UPackage__Script_CosmosWebApi();
// End Cross Module References
class UScriptStruct* FFesRewardInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COSMOSWEBAPI_API uint32 Get_Z_Construct_UScriptStruct_FFesRewardInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFesRewardInfo, Z_Construct_UPackage__Script_CosmosWebApi(), TEXT("FesRewardInfo"), sizeof(FFesRewardInfo), Get_Z_Construct_UScriptStruct_FFesRewardInfo_Hash());
	}
	return Singleton;
}
template<> COSMOSWEBAPI_API UScriptStruct* StaticStruct<FFesRewardInfo>()
{
	return FFesRewardInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFesRewardInfo(FFesRewardInfo::StaticStruct, TEXT("/Script/CosmosWebApi"), TEXT("FesRewardInfo"), false, nullptr, nullptr);
static struct FScriptStruct_CosmosWebApi_StaticRegisterNativesFFesRewardInfo
{
	FScriptStruct_CosmosWebApi_StaticRegisterNativesFFesRewardInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FesRewardInfo")),new UScriptStruct::TCppStructOps<FFesRewardInfo>);
	}
} ScriptStruct_CosmosWebApi_StaticRegisterNativesFFesRewardInfo;
	struct Z_Construct_UScriptStruct_FFesRewardInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_itemNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_itemNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rank_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_rank;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFesRewardInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FesRewardInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFesRewardInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFesRewardInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFesRewardInfo_Statics::NewProp_itemNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FesRewardInfo" },
		{ "ModuleRelativePath", "Public/FesRewardInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFesRewardInfo_Statics::NewProp_itemNum = { "itemNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFesRewardInfo, itemNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FFesRewardInfo_Statics::NewProp_itemNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFesRewardInfo_Statics::NewProp_itemNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFesRewardInfo_Statics::NewProp_ItemId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FesRewardInfo" },
		{ "ModuleRelativePath", "Public/FesRewardInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFesRewardInfo_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFesRewardInfo, ItemId), METADATA_PARAMS(Z_Construct_UScriptStruct_FFesRewardInfo_Statics::NewProp_ItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFesRewardInfo_Statics::NewProp_ItemId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFesRewardInfo_Statics::NewProp_rank_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FesRewardInfo" },
		{ "ModuleRelativePath", "Public/FesRewardInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFesRewardInfo_Statics::NewProp_rank = { "rank", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFesRewardInfo, rank), METADATA_PARAMS(Z_Construct_UScriptStruct_FFesRewardInfo_Statics::NewProp_rank_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFesRewardInfo_Statics::NewProp_rank_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFesRewardInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFesRewardInfo_Statics::NewProp_itemNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFesRewardInfo_Statics::NewProp_ItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFesRewardInfo_Statics::NewProp_rank,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFesRewardInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CosmosWebApi,
		nullptr,
		&NewStructOps,
		"FesRewardInfo",
		sizeof(FFesRewardInfo),
		alignof(FFesRewardInfo),
		Z_Construct_UScriptStruct_FFesRewardInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFesRewardInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFesRewardInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFesRewardInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFesRewardInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFesRewardInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CosmosWebApi();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FesRewardInfo"), sizeof(FFesRewardInfo), Get_Z_Construct_UScriptStruct_FFesRewardInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFesRewardInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFesRewardInfo_Hash() { return 1870775109U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
