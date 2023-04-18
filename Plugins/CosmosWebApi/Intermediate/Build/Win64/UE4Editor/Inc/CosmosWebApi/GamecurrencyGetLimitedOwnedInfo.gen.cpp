// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CosmosWebApi/Public/GamecurrencyGetLimitedOwnedInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGamecurrencyGetLimitedOwnedInfo() {}
// Cross Module References
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FGamecurrencyGetLimitedOwnedInfo();
	UPackage* Z_Construct_UPackage__Script_CosmosWebApi();
// End Cross Module References
class UScriptStruct* FGamecurrencyGetLimitedOwnedInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COSMOSWEBAPI_API uint32 Get_Z_Construct_UScriptStruct_FGamecurrencyGetLimitedOwnedInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGamecurrencyGetLimitedOwnedInfo, Z_Construct_UPackage__Script_CosmosWebApi(), TEXT("GamecurrencyGetLimitedOwnedInfo"), sizeof(FGamecurrencyGetLimitedOwnedInfo), Get_Z_Construct_UScriptStruct_FGamecurrencyGetLimitedOwnedInfo_Hash());
	}
	return Singleton;
}
template<> COSMOSWEBAPI_API UScriptStruct* StaticStruct<FGamecurrencyGetLimitedOwnedInfo>()
{
	return FGamecurrencyGetLimitedOwnedInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGamecurrencyGetLimitedOwnedInfo(FGamecurrencyGetLimitedOwnedInfo::StaticStruct, TEXT("/Script/CosmosWebApi"), TEXT("GamecurrencyGetLimitedOwnedInfo"), false, nullptr, nullptr);
static struct FScriptStruct_CosmosWebApi_StaticRegisterNativesFGamecurrencyGetLimitedOwnedInfo
{
	FScriptStruct_CosmosWebApi_StaticRegisterNativesFGamecurrencyGetLimitedOwnedInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GamecurrencyGetLimitedOwnedInfo")),new UScriptStruct::TCppStructOps<FGamecurrencyGetLimitedOwnedInfo>);
	}
} ScriptStruct_CosmosWebApi_StaticRegisterNativesFGamecurrencyGetLimitedOwnedInfo;
	struct Z_Construct_UScriptStruct_FGamecurrencyGetLimitedOwnedInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_chargedFlag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_chargedFlag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_limitCurrencyNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_limitCurrencyNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_limit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_limit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGamecurrencyGetLimitedOwnedInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GamecurrencyGetLimitedOwnedInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGamecurrencyGetLimitedOwnedInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGamecurrencyGetLimitedOwnedInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGamecurrencyGetLimitedOwnedInfo_Statics::NewProp_chargedFlag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GamecurrencyGetLimitedOwnedInfo" },
		{ "ModuleRelativePath", "Public/GamecurrencyGetLimitedOwnedInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGamecurrencyGetLimitedOwnedInfo_Statics::NewProp_chargedFlag = { "chargedFlag", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGamecurrencyGetLimitedOwnedInfo, chargedFlag), METADATA_PARAMS(Z_Construct_UScriptStruct_FGamecurrencyGetLimitedOwnedInfo_Statics::NewProp_chargedFlag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGamecurrencyGetLimitedOwnedInfo_Statics::NewProp_chargedFlag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGamecurrencyGetLimitedOwnedInfo_Statics::NewProp_limitCurrencyNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GamecurrencyGetLimitedOwnedInfo" },
		{ "ModuleRelativePath", "Public/GamecurrencyGetLimitedOwnedInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGamecurrencyGetLimitedOwnedInfo_Statics::NewProp_limitCurrencyNum = { "limitCurrencyNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGamecurrencyGetLimitedOwnedInfo, limitCurrencyNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FGamecurrencyGetLimitedOwnedInfo_Statics::NewProp_limitCurrencyNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGamecurrencyGetLimitedOwnedInfo_Statics::NewProp_limitCurrencyNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGamecurrencyGetLimitedOwnedInfo_Statics::NewProp_limit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GamecurrencyGetLimitedOwnedInfo" },
		{ "ModuleRelativePath", "Public/GamecurrencyGetLimitedOwnedInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGamecurrencyGetLimitedOwnedInfo_Statics::NewProp_limit = { "limit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGamecurrencyGetLimitedOwnedInfo, limit), METADATA_PARAMS(Z_Construct_UScriptStruct_FGamecurrencyGetLimitedOwnedInfo_Statics::NewProp_limit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGamecurrencyGetLimitedOwnedInfo_Statics::NewProp_limit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGamecurrencyGetLimitedOwnedInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGamecurrencyGetLimitedOwnedInfo_Statics::NewProp_chargedFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGamecurrencyGetLimitedOwnedInfo_Statics::NewProp_limitCurrencyNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGamecurrencyGetLimitedOwnedInfo_Statics::NewProp_limit,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGamecurrencyGetLimitedOwnedInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CosmosWebApi,
		nullptr,
		&NewStructOps,
		"GamecurrencyGetLimitedOwnedInfo",
		sizeof(FGamecurrencyGetLimitedOwnedInfo),
		alignof(FGamecurrencyGetLimitedOwnedInfo),
		Z_Construct_UScriptStruct_FGamecurrencyGetLimitedOwnedInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGamecurrencyGetLimitedOwnedInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGamecurrencyGetLimitedOwnedInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGamecurrencyGetLimitedOwnedInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGamecurrencyGetLimitedOwnedInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGamecurrencyGetLimitedOwnedInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CosmosWebApi();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GamecurrencyGetLimitedOwnedInfo"), sizeof(FGamecurrencyGetLimitedOwnedInfo), Get_Z_Construct_UScriptStruct_FGamecurrencyGetLimitedOwnedInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGamecurrencyGetLimitedOwnedInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGamecurrencyGetLimitedOwnedInfo_Hash() { return 2178750141U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
