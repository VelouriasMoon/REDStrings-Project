// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CosmosWebApi/Public/PointCardInfoResponseParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePointCardInfoResponseParam() {}
// Cross Module References
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FPointCardInfoResponseParam();
	UPackage* Z_Construct_UPackage__Script_CosmosWebApi();
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FPointInfo();
// End Cross Module References
class UScriptStruct* FPointCardInfoResponseParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COSMOSWEBAPI_API uint32 Get_Z_Construct_UScriptStruct_FPointCardInfoResponseParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPointCardInfoResponseParam, Z_Construct_UPackage__Script_CosmosWebApi(), TEXT("PointCardInfoResponseParam"), sizeof(FPointCardInfoResponseParam), Get_Z_Construct_UScriptStruct_FPointCardInfoResponseParam_Hash());
	}
	return Singleton;
}
template<> COSMOSWEBAPI_API UScriptStruct* StaticStruct<FPointCardInfoResponseParam>()
{
	return FPointCardInfoResponseParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPointCardInfoResponseParam(FPointCardInfoResponseParam::StaticStruct, TEXT("/Script/CosmosWebApi"), TEXT("PointCardInfoResponseParam"), false, nullptr, nullptr);
static struct FScriptStruct_CosmosWebApi_StaticRegisterNativesFPointCardInfoResponseParam
{
	FScriptStruct_CosmosWebApi_StaticRegisterNativesFPointCardInfoResponseParam()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PointCardInfoResponseParam")),new UScriptStruct::TCppStructOps<FPointCardInfoResponseParam>);
	}
} ScriptStruct_CosmosWebApi_StaticRegisterNativesFPointCardInfoResponseParam;
	struct Z_Construct_UScriptStruct_FPointCardInfoResponseParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PointInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Status;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointCardInfoResponseParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PointCardInfoResponseParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPointCardInfoResponseParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPointCardInfoResponseParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointCardInfoResponseParam_Statics::NewProp_PointInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PointCardInfoResponseParam" },
		{ "ModuleRelativePath", "Public/PointCardInfoResponseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPointCardInfoResponseParam_Statics::NewProp_PointInfo = { "PointInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPointCardInfoResponseParam, PointInfo), Z_Construct_UScriptStruct_FPointInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FPointCardInfoResponseParam_Statics::NewProp_PointInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointCardInfoResponseParam_Statics::NewProp_PointInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointCardInfoResponseParam_Statics::NewProp_Status_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PointCardInfoResponseParam" },
		{ "ModuleRelativePath", "Public/PointCardInfoResponseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPointCardInfoResponseParam_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPointCardInfoResponseParam, Status), METADATA_PARAMS(Z_Construct_UScriptStruct_FPointCardInfoResponseParam_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointCardInfoResponseParam_Statics::NewProp_Status_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPointCardInfoResponseParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointCardInfoResponseParam_Statics::NewProp_PointInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointCardInfoResponseParam_Statics::NewProp_Status,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPointCardInfoResponseParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CosmosWebApi,
		nullptr,
		&NewStructOps,
		"PointCardInfoResponseParam",
		sizeof(FPointCardInfoResponseParam),
		alignof(FPointCardInfoResponseParam),
		Z_Construct_UScriptStruct_FPointCardInfoResponseParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointCardInfoResponseParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPointCardInfoResponseParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointCardInfoResponseParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPointCardInfoResponseParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPointCardInfoResponseParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CosmosWebApi();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PointCardInfoResponseParam"), sizeof(FPointCardInfoResponseParam), Get_Z_Construct_UScriptStruct_FPointCardInfoResponseParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPointCardInfoResponseParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPointCardInfoResponseParam_Hash() { return 2865449073U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
