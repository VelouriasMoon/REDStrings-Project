// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CosmosWebApi/Public/FesGetRewardResponseParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFesGetRewardResponseParam() {}
// Cross Module References
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FFesGetRewardResponseParam();
	UPackage* Z_Construct_UPackage__Script_CosmosWebApi();
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FGetItemInfo();
// End Cross Module References
class UScriptStruct* FFesGetRewardResponseParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COSMOSWEBAPI_API uint32 Get_Z_Construct_UScriptStruct_FFesGetRewardResponseParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFesGetRewardResponseParam, Z_Construct_UPackage__Script_CosmosWebApi(), TEXT("FesGetRewardResponseParam"), sizeof(FFesGetRewardResponseParam), Get_Z_Construct_UScriptStruct_FFesGetRewardResponseParam_Hash());
	}
	return Singleton;
}
template<> COSMOSWEBAPI_API UScriptStruct* StaticStruct<FFesGetRewardResponseParam>()
{
	return FFesGetRewardResponseParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFesGetRewardResponseParam(FFesGetRewardResponseParam::StaticStruct, TEXT("/Script/CosmosWebApi"), TEXT("FesGetRewardResponseParam"), false, nullptr, nullptr);
static struct FScriptStruct_CosmosWebApi_StaticRegisterNativesFFesGetRewardResponseParam
{
	FScriptStruct_CosmosWebApi_StaticRegisterNativesFFesGetRewardResponseParam()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FesGetRewardResponseParam")),new UScriptStruct::TCppStructOps<FFesGetRewardResponseParam>);
	}
} ScriptStruct_CosmosWebApi_StaticRegisterNativesFFesGetRewardResponseParam;
	struct Z_Construct_UScriptStruct_FFesGetRewardResponseParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GetItemList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GetItemList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GetItemList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_workId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_workId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Status;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFesGetRewardResponseParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FesGetRewardResponseParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFesGetRewardResponseParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFesGetRewardResponseParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFesGetRewardResponseParam_Statics::NewProp_GetItemList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FesGetRewardResponseParam" },
		{ "ModuleRelativePath", "Public/FesGetRewardResponseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFesGetRewardResponseParam_Statics::NewProp_GetItemList = { "GetItemList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFesGetRewardResponseParam, GetItemList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFesGetRewardResponseParam_Statics::NewProp_GetItemList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFesGetRewardResponseParam_Statics::NewProp_GetItemList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFesGetRewardResponseParam_Statics::NewProp_GetItemList_Inner = { "GetItemList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGetItemInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFesGetRewardResponseParam_Statics::NewProp_workId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FesGetRewardResponseParam" },
		{ "ModuleRelativePath", "Public/FesGetRewardResponseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFesGetRewardResponseParam_Statics::NewProp_workId = { "workId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFesGetRewardResponseParam, workId), METADATA_PARAMS(Z_Construct_UScriptStruct_FFesGetRewardResponseParam_Statics::NewProp_workId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFesGetRewardResponseParam_Statics::NewProp_workId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFesGetRewardResponseParam_Statics::NewProp_Status_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FesGetRewardResponseParam" },
		{ "ModuleRelativePath", "Public/FesGetRewardResponseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFesGetRewardResponseParam_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFesGetRewardResponseParam, Status), METADATA_PARAMS(Z_Construct_UScriptStruct_FFesGetRewardResponseParam_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFesGetRewardResponseParam_Statics::NewProp_Status_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFesGetRewardResponseParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFesGetRewardResponseParam_Statics::NewProp_GetItemList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFesGetRewardResponseParam_Statics::NewProp_GetItemList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFesGetRewardResponseParam_Statics::NewProp_workId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFesGetRewardResponseParam_Statics::NewProp_Status,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFesGetRewardResponseParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CosmosWebApi,
		nullptr,
		&NewStructOps,
		"FesGetRewardResponseParam",
		sizeof(FFesGetRewardResponseParam),
		alignof(FFesGetRewardResponseParam),
		Z_Construct_UScriptStruct_FFesGetRewardResponseParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFesGetRewardResponseParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFesGetRewardResponseParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFesGetRewardResponseParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFesGetRewardResponseParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFesGetRewardResponseParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CosmosWebApi();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FesGetRewardResponseParam"), sizeof(FFesGetRewardResponseParam), Get_Z_Construct_UScriptStruct_FFesGetRewardResponseParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFesGetRewardResponseParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFesGetRewardResponseParam_Hash() { return 120408273U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
