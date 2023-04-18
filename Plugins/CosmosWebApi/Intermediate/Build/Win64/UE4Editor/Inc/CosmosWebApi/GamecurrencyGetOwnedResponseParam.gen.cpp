// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CosmosWebApi/Public/GamecurrencyGetOwnedResponseParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGamecurrencyGetOwnedResponseParam() {}
// Cross Module References
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FGamecurrencyGetOwnedResponseParam();
	UPackage* Z_Construct_UPackage__Script_CosmosWebApi();
// End Cross Module References
class UScriptStruct* FGamecurrencyGetOwnedResponseParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COSMOSWEBAPI_API uint32 Get_Z_Construct_UScriptStruct_FGamecurrencyGetOwnedResponseParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGamecurrencyGetOwnedResponseParam, Z_Construct_UPackage__Script_CosmosWebApi(), TEXT("GamecurrencyGetOwnedResponseParam"), sizeof(FGamecurrencyGetOwnedResponseParam), Get_Z_Construct_UScriptStruct_FGamecurrencyGetOwnedResponseParam_Hash());
	}
	return Singleton;
}
template<> COSMOSWEBAPI_API UScriptStruct* StaticStruct<FGamecurrencyGetOwnedResponseParam>()
{
	return FGamecurrencyGetOwnedResponseParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGamecurrencyGetOwnedResponseParam(FGamecurrencyGetOwnedResponseParam::StaticStruct, TEXT("/Script/CosmosWebApi"), TEXT("GamecurrencyGetOwnedResponseParam"), false, nullptr, nullptr);
static struct FScriptStruct_CosmosWebApi_StaticRegisterNativesFGamecurrencyGetOwnedResponseParam
{
	FScriptStruct_CosmosWebApi_StaticRegisterNativesFGamecurrencyGetOwnedResponseParam()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GamecurrencyGetOwnedResponseParam")),new UScriptStruct::TCppStructOps<FGamecurrencyGetOwnedResponseParam>);
	}
} ScriptStruct_CosmosWebApi_StaticRegisterNativesFGamecurrencyGetOwnedResponseParam;
	struct Z_Construct_UScriptStruct_FGamecurrencyGetOwnedResponseParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_recentChargedFlag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_recentChargedFlag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_recentLimitCurrencyNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_recentLimitCurrencyNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_recentLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_recentLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_totalFreeCurrencyNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_totalFreeCurrencyNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_totalChargedCurrencyNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_totalChargedCurrencyNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Status;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGamecurrencyGetOwnedResponseParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GamecurrencyGetOwnedResponseParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGamecurrencyGetOwnedResponseParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGamecurrencyGetOwnedResponseParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGamecurrencyGetOwnedResponseParam_Statics::NewProp_recentChargedFlag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GamecurrencyGetOwnedResponseParam" },
		{ "ModuleRelativePath", "Public/GamecurrencyGetOwnedResponseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGamecurrencyGetOwnedResponseParam_Statics::NewProp_recentChargedFlag = { "recentChargedFlag", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGamecurrencyGetOwnedResponseParam, recentChargedFlag), METADATA_PARAMS(Z_Construct_UScriptStruct_FGamecurrencyGetOwnedResponseParam_Statics::NewProp_recentChargedFlag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGamecurrencyGetOwnedResponseParam_Statics::NewProp_recentChargedFlag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGamecurrencyGetOwnedResponseParam_Statics::NewProp_recentLimitCurrencyNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GamecurrencyGetOwnedResponseParam" },
		{ "ModuleRelativePath", "Public/GamecurrencyGetOwnedResponseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGamecurrencyGetOwnedResponseParam_Statics::NewProp_recentLimitCurrencyNum = { "recentLimitCurrencyNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGamecurrencyGetOwnedResponseParam, recentLimitCurrencyNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FGamecurrencyGetOwnedResponseParam_Statics::NewProp_recentLimitCurrencyNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGamecurrencyGetOwnedResponseParam_Statics::NewProp_recentLimitCurrencyNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGamecurrencyGetOwnedResponseParam_Statics::NewProp_recentLimit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GamecurrencyGetOwnedResponseParam" },
		{ "ModuleRelativePath", "Public/GamecurrencyGetOwnedResponseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGamecurrencyGetOwnedResponseParam_Statics::NewProp_recentLimit = { "recentLimit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGamecurrencyGetOwnedResponseParam, recentLimit), METADATA_PARAMS(Z_Construct_UScriptStruct_FGamecurrencyGetOwnedResponseParam_Statics::NewProp_recentLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGamecurrencyGetOwnedResponseParam_Statics::NewProp_recentLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGamecurrencyGetOwnedResponseParam_Statics::NewProp_totalFreeCurrencyNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GamecurrencyGetOwnedResponseParam" },
		{ "ModuleRelativePath", "Public/GamecurrencyGetOwnedResponseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGamecurrencyGetOwnedResponseParam_Statics::NewProp_totalFreeCurrencyNum = { "totalFreeCurrencyNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGamecurrencyGetOwnedResponseParam, totalFreeCurrencyNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FGamecurrencyGetOwnedResponseParam_Statics::NewProp_totalFreeCurrencyNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGamecurrencyGetOwnedResponseParam_Statics::NewProp_totalFreeCurrencyNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGamecurrencyGetOwnedResponseParam_Statics::NewProp_totalChargedCurrencyNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GamecurrencyGetOwnedResponseParam" },
		{ "ModuleRelativePath", "Public/GamecurrencyGetOwnedResponseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGamecurrencyGetOwnedResponseParam_Statics::NewProp_totalChargedCurrencyNum = { "totalChargedCurrencyNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGamecurrencyGetOwnedResponseParam, totalChargedCurrencyNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FGamecurrencyGetOwnedResponseParam_Statics::NewProp_totalChargedCurrencyNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGamecurrencyGetOwnedResponseParam_Statics::NewProp_totalChargedCurrencyNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGamecurrencyGetOwnedResponseParam_Statics::NewProp_Status_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GamecurrencyGetOwnedResponseParam" },
		{ "ModuleRelativePath", "Public/GamecurrencyGetOwnedResponseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGamecurrencyGetOwnedResponseParam_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGamecurrencyGetOwnedResponseParam, Status), METADATA_PARAMS(Z_Construct_UScriptStruct_FGamecurrencyGetOwnedResponseParam_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGamecurrencyGetOwnedResponseParam_Statics::NewProp_Status_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGamecurrencyGetOwnedResponseParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGamecurrencyGetOwnedResponseParam_Statics::NewProp_recentChargedFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGamecurrencyGetOwnedResponseParam_Statics::NewProp_recentLimitCurrencyNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGamecurrencyGetOwnedResponseParam_Statics::NewProp_recentLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGamecurrencyGetOwnedResponseParam_Statics::NewProp_totalFreeCurrencyNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGamecurrencyGetOwnedResponseParam_Statics::NewProp_totalChargedCurrencyNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGamecurrencyGetOwnedResponseParam_Statics::NewProp_Status,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGamecurrencyGetOwnedResponseParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CosmosWebApi,
		nullptr,
		&NewStructOps,
		"GamecurrencyGetOwnedResponseParam",
		sizeof(FGamecurrencyGetOwnedResponseParam),
		alignof(FGamecurrencyGetOwnedResponseParam),
		Z_Construct_UScriptStruct_FGamecurrencyGetOwnedResponseParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGamecurrencyGetOwnedResponseParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGamecurrencyGetOwnedResponseParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGamecurrencyGetOwnedResponseParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGamecurrencyGetOwnedResponseParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGamecurrencyGetOwnedResponseParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CosmosWebApi();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GamecurrencyGetOwnedResponseParam"), sizeof(FGamecurrencyGetOwnedResponseParam), Get_Z_Construct_UScriptStruct_FGamecurrencyGetOwnedResponseParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGamecurrencyGetOwnedResponseParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGamecurrencyGetOwnedResponseParam_Hash() { return 4281797671U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
