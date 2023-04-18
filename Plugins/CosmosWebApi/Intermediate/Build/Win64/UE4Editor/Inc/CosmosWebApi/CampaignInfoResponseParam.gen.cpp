// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CosmosWebApi/Public/CampaignInfoResponseParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCampaignInfoResponseParam() {}
// Cross Module References
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FCampaignInfoResponseParam();
	UPackage* Z_Construct_UPackage__Script_CosmosWebApi();
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FCampaignInfo();
// End Cross Module References
class UScriptStruct* FCampaignInfoResponseParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COSMOSWEBAPI_API uint32 Get_Z_Construct_UScriptStruct_FCampaignInfoResponseParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCampaignInfoResponseParam, Z_Construct_UPackage__Script_CosmosWebApi(), TEXT("CampaignInfoResponseParam"), sizeof(FCampaignInfoResponseParam), Get_Z_Construct_UScriptStruct_FCampaignInfoResponseParam_Hash());
	}
	return Singleton;
}
template<> COSMOSWEBAPI_API UScriptStruct* StaticStruct<FCampaignInfoResponseParam>()
{
	return FCampaignInfoResponseParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCampaignInfoResponseParam(FCampaignInfoResponseParam::StaticStruct, TEXT("/Script/CosmosWebApi"), TEXT("CampaignInfoResponseParam"), false, nullptr, nullptr);
static struct FScriptStruct_CosmosWebApi_StaticRegisterNativesFCampaignInfoResponseParam
{
	FScriptStruct_CosmosWebApi_StaticRegisterNativesFCampaignInfoResponseParam()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CampaignInfoResponseParam")),new UScriptStruct::TCppStructOps<FCampaignInfoResponseParam>);
	}
} ScriptStruct_CosmosWebApi_StaticRegisterNativesFCampaignInfoResponseParam;
	struct Z_Construct_UScriptStruct_FCampaignInfoResponseParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CampaignInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CampaignInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Status;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCampaignInfoResponseParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CampaignInfoResponseParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCampaignInfoResponseParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCampaignInfoResponseParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCampaignInfoResponseParam_Statics::NewProp_CampaignInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CampaignInfoResponseParam" },
		{ "ModuleRelativePath", "Public/CampaignInfoResponseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCampaignInfoResponseParam_Statics::NewProp_CampaignInfo = { "CampaignInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCampaignInfoResponseParam, CampaignInfo), Z_Construct_UScriptStruct_FCampaignInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FCampaignInfoResponseParam_Statics::NewProp_CampaignInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCampaignInfoResponseParam_Statics::NewProp_CampaignInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCampaignInfoResponseParam_Statics::NewProp_Status_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CampaignInfoResponseParam" },
		{ "ModuleRelativePath", "Public/CampaignInfoResponseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCampaignInfoResponseParam_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCampaignInfoResponseParam, Status), METADATA_PARAMS(Z_Construct_UScriptStruct_FCampaignInfoResponseParam_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCampaignInfoResponseParam_Statics::NewProp_Status_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCampaignInfoResponseParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCampaignInfoResponseParam_Statics::NewProp_CampaignInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCampaignInfoResponseParam_Statics::NewProp_Status,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCampaignInfoResponseParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CosmosWebApi,
		nullptr,
		&NewStructOps,
		"CampaignInfoResponseParam",
		sizeof(FCampaignInfoResponseParam),
		alignof(FCampaignInfoResponseParam),
		Z_Construct_UScriptStruct_FCampaignInfoResponseParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCampaignInfoResponseParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCampaignInfoResponseParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCampaignInfoResponseParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCampaignInfoResponseParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCampaignInfoResponseParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CosmosWebApi();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CampaignInfoResponseParam"), sizeof(FCampaignInfoResponseParam), Get_Z_Construct_UScriptStruct_FCampaignInfoResponseParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCampaignInfoResponseParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCampaignInfoResponseParam_Hash() { return 937832702U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
