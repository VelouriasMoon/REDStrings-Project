// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CosmosWebApi/Public/CommonpurchaseGetCatalogInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonpurchaseGetCatalogInfo() {}
// Cross Module References
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FCommonpurchaseGetCatalogInfo();
	UPackage* Z_Construct_UPackage__Script_CosmosWebApi();
// End Cross Module References
class UScriptStruct* FCommonpurchaseGetCatalogInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COSMOSWEBAPI_API uint32 Get_Z_Construct_UScriptStruct_FCommonpurchaseGetCatalogInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCommonpurchaseGetCatalogInfo, Z_Construct_UPackage__Script_CosmosWebApi(), TEXT("CommonpurchaseGetCatalogInfo"), sizeof(FCommonpurchaseGetCatalogInfo), Get_Z_Construct_UScriptStruct_FCommonpurchaseGetCatalogInfo_Hash());
	}
	return Singleton;
}
template<> COSMOSWEBAPI_API UScriptStruct* StaticStruct<FCommonpurchaseGetCatalogInfo>()
{
	return FCommonpurchaseGetCatalogInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCommonpurchaseGetCatalogInfo(FCommonpurchaseGetCatalogInfo::StaticStruct, TEXT("/Script/CosmosWebApi"), TEXT("CommonpurchaseGetCatalogInfo"), false, nullptr, nullptr);
static struct FScriptStruct_CosmosWebApi_StaticRegisterNativesFCommonpurchaseGetCatalogInfo
{
	FScriptStruct_CosmosWebApi_StaticRegisterNativesFCommonpurchaseGetCatalogInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CommonpurchaseGetCatalogInfo")),new UScriptStruct::TCppStructOps<FCommonpurchaseGetCatalogInfo>);
	}
} ScriptStruct_CosmosWebApi_StaticRegisterNativesFCommonpurchaseGetCatalogInfo;
	struct Z_Construct_UScriptStruct_FCommonpurchaseGetCatalogInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Option_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Option;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentPrice_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_currentPrice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_establishedPrice_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_establishedPrice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Image_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Image;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_caption_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_caption;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_catalogId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_catalogId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonpurchaseGetCatalogInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CommonpurchaseGetCatalogInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCommonpurchaseGetCatalogInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCommonpurchaseGetCatalogInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonpurchaseGetCatalogInfo_Statics::NewProp_Option_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonpurchaseGetCatalogInfo" },
		{ "ModuleRelativePath", "Public/CommonpurchaseGetCatalogInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCommonpurchaseGetCatalogInfo_Statics::NewProp_Option = { "Option", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCommonpurchaseGetCatalogInfo, Option), METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonpurchaseGetCatalogInfo_Statics::NewProp_Option_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonpurchaseGetCatalogInfo_Statics::NewProp_Option_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonpurchaseGetCatalogInfo_Statics::NewProp_currentPrice_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonpurchaseGetCatalogInfo" },
		{ "ModuleRelativePath", "Public/CommonpurchaseGetCatalogInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCommonpurchaseGetCatalogInfo_Statics::NewProp_currentPrice = { "currentPrice", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCommonpurchaseGetCatalogInfo, currentPrice), METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonpurchaseGetCatalogInfo_Statics::NewProp_currentPrice_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonpurchaseGetCatalogInfo_Statics::NewProp_currentPrice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonpurchaseGetCatalogInfo_Statics::NewProp_establishedPrice_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonpurchaseGetCatalogInfo" },
		{ "ModuleRelativePath", "Public/CommonpurchaseGetCatalogInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCommonpurchaseGetCatalogInfo_Statics::NewProp_establishedPrice = { "establishedPrice", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCommonpurchaseGetCatalogInfo, establishedPrice), METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonpurchaseGetCatalogInfo_Statics::NewProp_establishedPrice_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonpurchaseGetCatalogInfo_Statics::NewProp_establishedPrice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonpurchaseGetCatalogInfo_Statics::NewProp_Image_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonpurchaseGetCatalogInfo" },
		{ "ModuleRelativePath", "Public/CommonpurchaseGetCatalogInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCommonpurchaseGetCatalogInfo_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCommonpurchaseGetCatalogInfo, Image), METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonpurchaseGetCatalogInfo_Statics::NewProp_Image_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonpurchaseGetCatalogInfo_Statics::NewProp_Image_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonpurchaseGetCatalogInfo_Statics::NewProp_caption_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonpurchaseGetCatalogInfo" },
		{ "ModuleRelativePath", "Public/CommonpurchaseGetCatalogInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCommonpurchaseGetCatalogInfo_Statics::NewProp_caption = { "caption", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCommonpurchaseGetCatalogInfo, caption), METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonpurchaseGetCatalogInfo_Statics::NewProp_caption_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonpurchaseGetCatalogInfo_Statics::NewProp_caption_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonpurchaseGetCatalogInfo_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonpurchaseGetCatalogInfo" },
		{ "ModuleRelativePath", "Public/CommonpurchaseGetCatalogInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCommonpurchaseGetCatalogInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCommonpurchaseGetCatalogInfo, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonpurchaseGetCatalogInfo_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonpurchaseGetCatalogInfo_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonpurchaseGetCatalogInfo_Statics::NewProp_catalogId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonpurchaseGetCatalogInfo" },
		{ "ModuleRelativePath", "Public/CommonpurchaseGetCatalogInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCommonpurchaseGetCatalogInfo_Statics::NewProp_catalogId = { "catalogId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCommonpurchaseGetCatalogInfo, catalogId), METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonpurchaseGetCatalogInfo_Statics::NewProp_catalogId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonpurchaseGetCatalogInfo_Statics::NewProp_catalogId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCommonpurchaseGetCatalogInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonpurchaseGetCatalogInfo_Statics::NewProp_Option,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonpurchaseGetCatalogInfo_Statics::NewProp_currentPrice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonpurchaseGetCatalogInfo_Statics::NewProp_establishedPrice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonpurchaseGetCatalogInfo_Statics::NewProp_Image,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonpurchaseGetCatalogInfo_Statics::NewProp_caption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonpurchaseGetCatalogInfo_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonpurchaseGetCatalogInfo_Statics::NewProp_catalogId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCommonpurchaseGetCatalogInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CosmosWebApi,
		nullptr,
		&NewStructOps,
		"CommonpurchaseGetCatalogInfo",
		sizeof(FCommonpurchaseGetCatalogInfo),
		alignof(FCommonpurchaseGetCatalogInfo),
		Z_Construct_UScriptStruct_FCommonpurchaseGetCatalogInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonpurchaseGetCatalogInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonpurchaseGetCatalogInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonpurchaseGetCatalogInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCommonpurchaseGetCatalogInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCommonpurchaseGetCatalogInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CosmosWebApi();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CommonpurchaseGetCatalogInfo"), sizeof(FCommonpurchaseGetCatalogInfo), Get_Z_Construct_UScriptStruct_FCommonpurchaseGetCatalogInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCommonpurchaseGetCatalogInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCommonpurchaseGetCatalogInfo_Hash() { return 1185334699U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
