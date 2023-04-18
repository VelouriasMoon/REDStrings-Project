// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CosmosWebApi/Public/RootBoxGetProbabilityResponseParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRootBoxGetProbabilityResponseParam() {}
// Cross Module References
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FRootBoxGetProbabilityResponseParam();
	UPackage* Z_Construct_UPackage__Script_CosmosWebApi();
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FRootBoxStatusInfo();
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FRootBoxCampaignInfo();
// End Cross Module References
class UScriptStruct* FRootBoxGetProbabilityResponseParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COSMOSWEBAPI_API uint32 Get_Z_Construct_UScriptStruct_FRootBoxGetProbabilityResponseParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRootBoxGetProbabilityResponseParam, Z_Construct_UPackage__Script_CosmosWebApi(), TEXT("RootBoxGetProbabilityResponseParam"), sizeof(FRootBoxGetProbabilityResponseParam), Get_Z_Construct_UScriptStruct_FRootBoxGetProbabilityResponseParam_Hash());
	}
	return Singleton;
}
template<> COSMOSWEBAPI_API UScriptStruct* StaticStruct<FRootBoxGetProbabilityResponseParam>()
{
	return FRootBoxGetProbabilityResponseParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRootBoxGetProbabilityResponseParam(FRootBoxGetProbabilityResponseParam::StaticStruct, TEXT("/Script/CosmosWebApi"), TEXT("RootBoxGetProbabilityResponseParam"), false, nullptr, nullptr);
static struct FScriptStruct_CosmosWebApi_StaticRegisterNativesFRootBoxGetProbabilityResponseParam
{
	FScriptStruct_CosmosWebApi_StaticRegisterNativesFRootBoxGetProbabilityResponseParam()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RootBoxGetProbabilityResponseParam")),new UScriptStruct::TCppStructOps<FRootBoxGetProbabilityResponseParam>);
	}
} ScriptStruct_CosmosWebApi_StaticRegisterNativesFRootBoxGetProbabilityResponseParam;
	struct Z_Construct_UScriptStruct_FRootBoxGetProbabilityResponseParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rootboxStatusList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_rootboxStatusList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rootboxStatusList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CampaignInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CampaignInfo;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CampaignInfo_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Status;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootBoxGetProbabilityResponseParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RootBoxGetProbabilityResponseParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRootBoxGetProbabilityResponseParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRootBoxGetProbabilityResponseParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootBoxGetProbabilityResponseParam_Statics::NewProp_rootboxStatusList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RootBoxGetProbabilityResponseParam" },
		{ "ModuleRelativePath", "Public/RootBoxGetProbabilityResponseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRootBoxGetProbabilityResponseParam_Statics::NewProp_rootboxStatusList = { "rootboxStatusList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRootBoxGetProbabilityResponseParam, rootboxStatusList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRootBoxGetProbabilityResponseParam_Statics::NewProp_rootboxStatusList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootBoxGetProbabilityResponseParam_Statics::NewProp_rootboxStatusList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRootBoxGetProbabilityResponseParam_Statics::NewProp_rootboxStatusList_Inner = { "rootboxStatusList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRootBoxStatusInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootBoxGetProbabilityResponseParam_Statics::NewProp_CampaignInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RootBoxGetProbabilityResponseParam" },
		{ "ModuleRelativePath", "Public/RootBoxGetProbabilityResponseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRootBoxGetProbabilityResponseParam_Statics::NewProp_CampaignInfo = { "CampaignInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRootBoxGetProbabilityResponseParam, CampaignInfo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRootBoxGetProbabilityResponseParam_Statics::NewProp_CampaignInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootBoxGetProbabilityResponseParam_Statics::NewProp_CampaignInfo_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRootBoxGetProbabilityResponseParam_Statics::NewProp_CampaignInfo_Inner = { "CampaignInfo", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRootBoxCampaignInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootBoxGetProbabilityResponseParam_Statics::NewProp_Status_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RootBoxGetProbabilityResponseParam" },
		{ "ModuleRelativePath", "Public/RootBoxGetProbabilityResponseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRootBoxGetProbabilityResponseParam_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRootBoxGetProbabilityResponseParam, Status), METADATA_PARAMS(Z_Construct_UScriptStruct_FRootBoxGetProbabilityResponseParam_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootBoxGetProbabilityResponseParam_Statics::NewProp_Status_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRootBoxGetProbabilityResponseParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootBoxGetProbabilityResponseParam_Statics::NewProp_rootboxStatusList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootBoxGetProbabilityResponseParam_Statics::NewProp_rootboxStatusList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootBoxGetProbabilityResponseParam_Statics::NewProp_CampaignInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootBoxGetProbabilityResponseParam_Statics::NewProp_CampaignInfo_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootBoxGetProbabilityResponseParam_Statics::NewProp_Status,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRootBoxGetProbabilityResponseParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CosmosWebApi,
		nullptr,
		&NewStructOps,
		"RootBoxGetProbabilityResponseParam",
		sizeof(FRootBoxGetProbabilityResponseParam),
		alignof(FRootBoxGetProbabilityResponseParam),
		Z_Construct_UScriptStruct_FRootBoxGetProbabilityResponseParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootBoxGetProbabilityResponseParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRootBoxGetProbabilityResponseParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootBoxGetProbabilityResponseParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRootBoxGetProbabilityResponseParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRootBoxGetProbabilityResponseParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CosmosWebApi();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RootBoxGetProbabilityResponseParam"), sizeof(FRootBoxGetProbabilityResponseParam), Get_Z_Construct_UScriptStruct_FRootBoxGetProbabilityResponseParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRootBoxGetProbabilityResponseParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRootBoxGetProbabilityResponseParam_Hash() { return 1403419912U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
