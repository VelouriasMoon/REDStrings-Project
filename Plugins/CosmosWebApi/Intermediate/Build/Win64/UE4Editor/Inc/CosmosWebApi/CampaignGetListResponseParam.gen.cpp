// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CosmosWebApi/Public/CampaignGetListResponseParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCampaignGetListResponseParam() {}
// Cross Module References
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FCampaignGetListResponseParam();
	UPackage* Z_Construct_UPackage__Script_CosmosWebApi();
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FCampaignInfo();
// End Cross Module References
class UScriptStruct* FCampaignGetListResponseParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COSMOSWEBAPI_API uint32 Get_Z_Construct_UScriptStruct_FCampaignGetListResponseParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCampaignGetListResponseParam, Z_Construct_UPackage__Script_CosmosWebApi(), TEXT("CampaignGetListResponseParam"), sizeof(FCampaignGetListResponseParam), Get_Z_Construct_UScriptStruct_FCampaignGetListResponseParam_Hash());
	}
	return Singleton;
}
template<> COSMOSWEBAPI_API UScriptStruct* StaticStruct<FCampaignGetListResponseParam>()
{
	return FCampaignGetListResponseParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCampaignGetListResponseParam(FCampaignGetListResponseParam::StaticStruct, TEXT("/Script/CosmosWebApi"), TEXT("CampaignGetListResponseParam"), false, nullptr, nullptr);
static struct FScriptStruct_CosmosWebApi_StaticRegisterNativesFCampaignGetListResponseParam
{
	FScriptStruct_CosmosWebApi_StaticRegisterNativesFCampaignGetListResponseParam()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CampaignGetListResponseParam")),new UScriptStruct::TCppStructOps<FCampaignGetListResponseParam>);
	}
} ScriptStruct_CosmosWebApi_StaticRegisterNativesFCampaignGetListResponseParam;
	struct Z_Construct_UScriptStruct_FCampaignGetListResponseParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_campaignList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_campaignList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_campaignList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Status;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCampaignGetListResponseParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CampaignGetListResponseParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCampaignGetListResponseParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCampaignGetListResponseParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCampaignGetListResponseParam_Statics::NewProp_campaignList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CampaignGetListResponseParam" },
		{ "ModuleRelativePath", "Public/CampaignGetListResponseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCampaignGetListResponseParam_Statics::NewProp_campaignList = { "campaignList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCampaignGetListResponseParam, campaignList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCampaignGetListResponseParam_Statics::NewProp_campaignList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCampaignGetListResponseParam_Statics::NewProp_campaignList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCampaignGetListResponseParam_Statics::NewProp_campaignList_Inner = { "campaignList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCampaignInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCampaignGetListResponseParam_Statics::NewProp_Status_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CampaignGetListResponseParam" },
		{ "ModuleRelativePath", "Public/CampaignGetListResponseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCampaignGetListResponseParam_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCampaignGetListResponseParam, Status), METADATA_PARAMS(Z_Construct_UScriptStruct_FCampaignGetListResponseParam_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCampaignGetListResponseParam_Statics::NewProp_Status_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCampaignGetListResponseParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCampaignGetListResponseParam_Statics::NewProp_campaignList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCampaignGetListResponseParam_Statics::NewProp_campaignList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCampaignGetListResponseParam_Statics::NewProp_Status,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCampaignGetListResponseParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CosmosWebApi,
		nullptr,
		&NewStructOps,
		"CampaignGetListResponseParam",
		sizeof(FCampaignGetListResponseParam),
		alignof(FCampaignGetListResponseParam),
		Z_Construct_UScriptStruct_FCampaignGetListResponseParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCampaignGetListResponseParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCampaignGetListResponseParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCampaignGetListResponseParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCampaignGetListResponseParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCampaignGetListResponseParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CosmosWebApi();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CampaignGetListResponseParam"), sizeof(FCampaignGetListResponseParam), Get_Z_Construct_UScriptStruct_FCampaignGetListResponseParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCampaignGetListResponseParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCampaignGetListResponseParam_Hash() { return 3278641245U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
