// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CosmosWebApi/Public/RootBoxInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRootBoxInfo() {}
// Cross Module References
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FRootBoxInfo();
	UPackage* Z_Construct_UPackage__Script_CosmosWebApi();
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FRootBoxCampaignInfo();
// End Cross Module References
class UScriptStruct* FRootBoxInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COSMOSWEBAPI_API uint32 Get_Z_Construct_UScriptStruct_FRootBoxInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRootBoxInfo, Z_Construct_UPackage__Script_CosmosWebApi(), TEXT("RootBoxInfo"), sizeof(FRootBoxInfo), Get_Z_Construct_UScriptStruct_FRootBoxInfo_Hash());
	}
	return Singleton;
}
template<> COSMOSWEBAPI_API UScriptStruct* StaticStruct<FRootBoxInfo>()
{
	return FRootBoxInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRootBoxInfo(FRootBoxInfo::StaticStruct, TEXT("/Script/CosmosWebApi"), TEXT("RootBoxInfo"), false, nullptr, nullptr);
static struct FScriptStruct_CosmosWebApi_StaticRegisterNativesFRootBoxInfo
{
	FScriptStruct_CosmosWebApi_StaticRegisterNativesFRootBoxInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RootBoxInfo")),new UScriptStruct::TCppStructOps<FRootBoxInfo>);
	}
} ScriptStruct_CosmosWebApi_StaticRegisterNativesFRootBoxInfo;
	struct Z_Construct_UScriptStruct_FRootBoxInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CampaignInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CampaignInfo;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CampaignInfo_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Option_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Option;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rootboxType_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_rootboxType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_endTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_endTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rootboxLavel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_rootboxLavel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rootboxId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_rootboxId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootBoxInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RootBoxInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRootBoxInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRootBoxInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootBoxInfo_Statics::NewProp_CampaignInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RootBoxInfo" },
		{ "ModuleRelativePath", "Public/RootBoxInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRootBoxInfo_Statics::NewProp_CampaignInfo = { "CampaignInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRootBoxInfo, CampaignInfo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRootBoxInfo_Statics::NewProp_CampaignInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootBoxInfo_Statics::NewProp_CampaignInfo_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRootBoxInfo_Statics::NewProp_CampaignInfo_Inner = { "CampaignInfo", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRootBoxCampaignInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootBoxInfo_Statics::NewProp_Option_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RootBoxInfo" },
		{ "ModuleRelativePath", "Public/RootBoxInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRootBoxInfo_Statics::NewProp_Option = { "Option", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRootBoxInfo, Option), METADATA_PARAMS(Z_Construct_UScriptStruct_FRootBoxInfo_Statics::NewProp_Option_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootBoxInfo_Statics::NewProp_Option_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootBoxInfo_Statics::NewProp_rootboxType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RootBoxInfo" },
		{ "ModuleRelativePath", "Public/RootBoxInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRootBoxInfo_Statics::NewProp_rootboxType = { "rootboxType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRootBoxInfo, rootboxType), METADATA_PARAMS(Z_Construct_UScriptStruct_FRootBoxInfo_Statics::NewProp_rootboxType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootBoxInfo_Statics::NewProp_rootboxType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootBoxInfo_Statics::NewProp_endTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RootBoxInfo" },
		{ "ModuleRelativePath", "Public/RootBoxInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRootBoxInfo_Statics::NewProp_endTime = { "endTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRootBoxInfo, endTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FRootBoxInfo_Statics::NewProp_endTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootBoxInfo_Statics::NewProp_endTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootBoxInfo_Statics::NewProp_StartTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RootBoxInfo" },
		{ "ModuleRelativePath", "Public/RootBoxInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRootBoxInfo_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRootBoxInfo, StartTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FRootBoxInfo_Statics::NewProp_StartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootBoxInfo_Statics::NewProp_StartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootBoxInfo_Statics::NewProp_rootboxLavel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RootBoxInfo" },
		{ "ModuleRelativePath", "Public/RootBoxInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRootBoxInfo_Statics::NewProp_rootboxLavel = { "rootboxLavel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRootBoxInfo, rootboxLavel), METADATA_PARAMS(Z_Construct_UScriptStruct_FRootBoxInfo_Statics::NewProp_rootboxLavel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootBoxInfo_Statics::NewProp_rootboxLavel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootBoxInfo_Statics::NewProp_rootboxId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RootBoxInfo" },
		{ "ModuleRelativePath", "Public/RootBoxInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRootBoxInfo_Statics::NewProp_rootboxId = { "rootboxId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRootBoxInfo, rootboxId), METADATA_PARAMS(Z_Construct_UScriptStruct_FRootBoxInfo_Statics::NewProp_rootboxId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootBoxInfo_Statics::NewProp_rootboxId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRootBoxInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootBoxInfo_Statics::NewProp_CampaignInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootBoxInfo_Statics::NewProp_CampaignInfo_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootBoxInfo_Statics::NewProp_Option,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootBoxInfo_Statics::NewProp_rootboxType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootBoxInfo_Statics::NewProp_endTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootBoxInfo_Statics::NewProp_StartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootBoxInfo_Statics::NewProp_rootboxLavel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootBoxInfo_Statics::NewProp_rootboxId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRootBoxInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CosmosWebApi,
		nullptr,
		&NewStructOps,
		"RootBoxInfo",
		sizeof(FRootBoxInfo),
		alignof(FRootBoxInfo),
		Z_Construct_UScriptStruct_FRootBoxInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootBoxInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRootBoxInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootBoxInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRootBoxInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRootBoxInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CosmosWebApi();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RootBoxInfo"), sizeof(FRootBoxInfo), Get_Z_Construct_UScriptStruct_FRootBoxInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRootBoxInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRootBoxInfo_Hash() { return 3592499956U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
