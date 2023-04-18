// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CosmosWebApi/Public/CommonpurchaseGetPurchaseStatusResponseParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonpurchaseGetPurchaseStatusResponseParam() {}
// Cross Module References
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FCommonpurchaseGetPurchaseStatusResponseParam();
	UPackage* Z_Construct_UPackage__Script_CosmosWebApi();
// End Cross Module References
class UScriptStruct* FCommonpurchaseGetPurchaseStatusResponseParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COSMOSWEBAPI_API uint32 Get_Z_Construct_UScriptStruct_FCommonpurchaseGetPurchaseStatusResponseParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCommonpurchaseGetPurchaseStatusResponseParam, Z_Construct_UPackage__Script_CosmosWebApi(), TEXT("CommonpurchaseGetPurchaseStatusResponseParam"), sizeof(FCommonpurchaseGetPurchaseStatusResponseParam), Get_Z_Construct_UScriptStruct_FCommonpurchaseGetPurchaseStatusResponseParam_Hash());
	}
	return Singleton;
}
template<> COSMOSWEBAPI_API UScriptStruct* StaticStruct<FCommonpurchaseGetPurchaseStatusResponseParam>()
{
	return FCommonpurchaseGetPurchaseStatusResponseParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCommonpurchaseGetPurchaseStatusResponseParam(FCommonpurchaseGetPurchaseStatusResponseParam::StaticStruct, TEXT("/Script/CosmosWebApi"), TEXT("CommonpurchaseGetPurchaseStatusResponseParam"), false, nullptr, nullptr);
static struct FScriptStruct_CosmosWebApi_StaticRegisterNativesFCommonpurchaseGetPurchaseStatusResponseParam
{
	FScriptStruct_CosmosWebApi_StaticRegisterNativesFCommonpurchaseGetPurchaseStatusResponseParam()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CommonpurchaseGetPurchaseStatusResponseParam")),new UScriptStruct::TCppStructOps<FCommonpurchaseGetPurchaseStatusResponseParam>);
	}
} ScriptStruct_CosmosWebApi_StaticRegisterNativesFCommonpurchaseGetPurchaseStatusResponseParam;
	struct Z_Construct_UScriptStruct_FCommonpurchaseGetPurchaseStatusResponseParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_purchaseInfoId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_purchaseInfoId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Status;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonpurchaseGetPurchaseStatusResponseParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CommonpurchaseGetPurchaseStatusResponseParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCommonpurchaseGetPurchaseStatusResponseParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCommonpurchaseGetPurchaseStatusResponseParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonpurchaseGetPurchaseStatusResponseParam_Statics::NewProp_purchaseInfoId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonpurchaseGetPurchaseStatusResponseParam" },
		{ "ModuleRelativePath", "Public/CommonpurchaseGetPurchaseStatusResponseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCommonpurchaseGetPurchaseStatusResponseParam_Statics::NewProp_purchaseInfoId = { "purchaseInfoId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCommonpurchaseGetPurchaseStatusResponseParam, purchaseInfoId), METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonpurchaseGetPurchaseStatusResponseParam_Statics::NewProp_purchaseInfoId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonpurchaseGetPurchaseStatusResponseParam_Statics::NewProp_purchaseInfoId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonpurchaseGetPurchaseStatusResponseParam_Statics::NewProp_Status_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonpurchaseGetPurchaseStatusResponseParam" },
		{ "ModuleRelativePath", "Public/CommonpurchaseGetPurchaseStatusResponseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCommonpurchaseGetPurchaseStatusResponseParam_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCommonpurchaseGetPurchaseStatusResponseParam, Status), METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonpurchaseGetPurchaseStatusResponseParam_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonpurchaseGetPurchaseStatusResponseParam_Statics::NewProp_Status_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCommonpurchaseGetPurchaseStatusResponseParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonpurchaseGetPurchaseStatusResponseParam_Statics::NewProp_purchaseInfoId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonpurchaseGetPurchaseStatusResponseParam_Statics::NewProp_Status,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCommonpurchaseGetPurchaseStatusResponseParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CosmosWebApi,
		nullptr,
		&NewStructOps,
		"CommonpurchaseGetPurchaseStatusResponseParam",
		sizeof(FCommonpurchaseGetPurchaseStatusResponseParam),
		alignof(FCommonpurchaseGetPurchaseStatusResponseParam),
		Z_Construct_UScriptStruct_FCommonpurchaseGetPurchaseStatusResponseParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonpurchaseGetPurchaseStatusResponseParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonpurchaseGetPurchaseStatusResponseParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonpurchaseGetPurchaseStatusResponseParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCommonpurchaseGetPurchaseStatusResponseParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCommonpurchaseGetPurchaseStatusResponseParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CosmosWebApi();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CommonpurchaseGetPurchaseStatusResponseParam"), sizeof(FCommonpurchaseGetPurchaseStatusResponseParam), Get_Z_Construct_UScriptStruct_FCommonpurchaseGetPurchaseStatusResponseParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCommonpurchaseGetPurchaseStatusResponseParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCommonpurchaseGetPurchaseStatusResponseParam_Hash() { return 3392746781U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
