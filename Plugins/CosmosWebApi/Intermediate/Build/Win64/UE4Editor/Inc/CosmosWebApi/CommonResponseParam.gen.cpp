// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CosmosWebApi/Public/CommonResponseParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonResponseParam() {}
// Cross Module References
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FCommonResponseParam();
	UPackage* Z_Construct_UPackage__Script_CosmosWebApi();
// End Cross Module References
class UScriptStruct* FCommonResponseParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COSMOSWEBAPI_API uint32 Get_Z_Construct_UScriptStruct_FCommonResponseParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCommonResponseParam, Z_Construct_UPackage__Script_CosmosWebApi(), TEXT("CommonResponseParam"), sizeof(FCommonResponseParam), Get_Z_Construct_UScriptStruct_FCommonResponseParam_Hash());
	}
	return Singleton;
}
template<> COSMOSWEBAPI_API UScriptStruct* StaticStruct<FCommonResponseParam>()
{
	return FCommonResponseParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCommonResponseParam(FCommonResponseParam::StaticStruct, TEXT("/Script/CosmosWebApi"), TEXT("CommonResponseParam"), false, nullptr, nullptr);
static struct FScriptStruct_CosmosWebApi_StaticRegisterNativesFCommonResponseParam
{
	FScriptStruct_CosmosWebApi_StaticRegisterNativesFCommonResponseParam()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CommonResponseParam")),new UScriptStruct::TCppStructOps<FCommonResponseParam>);
	}
} ScriptStruct_CosmosWebApi_StaticRegisterNativesFCommonResponseParam;
	struct Z_Construct_UScriptStruct_FCommonResponseParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Status;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonResponseParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CommonResponseParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCommonResponseParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCommonResponseParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonResponseParam_Statics::NewProp_Status_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonResponseParam" },
		{ "ModuleRelativePath", "Public/CommonResponseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCommonResponseParam_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCommonResponseParam, Status), METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonResponseParam_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonResponseParam_Statics::NewProp_Status_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCommonResponseParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonResponseParam_Statics::NewProp_Status,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCommonResponseParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CosmosWebApi,
		nullptr,
		&NewStructOps,
		"CommonResponseParam",
		sizeof(FCommonResponseParam),
		alignof(FCommonResponseParam),
		Z_Construct_UScriptStruct_FCommonResponseParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonResponseParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonResponseParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonResponseParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCommonResponseParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCommonResponseParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CosmosWebApi();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CommonResponseParam"), sizeof(FCommonResponseParam), Get_Z_Construct_UScriptStruct_FCommonResponseParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCommonResponseParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCommonResponseParam_Hash() { return 2302777904U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
