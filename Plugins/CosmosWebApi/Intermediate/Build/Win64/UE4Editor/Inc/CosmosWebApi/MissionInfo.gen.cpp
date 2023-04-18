// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CosmosWebApi/Public/MissionInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMissionInfo() {}
// Cross Module References
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FMissionInfo();
	UPackage* Z_Construct_UPackage__Script_CosmosWebApi();
// End Cross Module References
class UScriptStruct* FMissionInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COSMOSWEBAPI_API uint32 Get_Z_Construct_UScriptStruct_FMissionInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMissionInfo, Z_Construct_UPackage__Script_CosmosWebApi(), TEXT("MissionInfo"), sizeof(FMissionInfo), Get_Z_Construct_UScriptStruct_FMissionInfo_Hash());
	}
	return Singleton;
}
template<> COSMOSWEBAPI_API UScriptStruct* StaticStruct<FMissionInfo>()
{
	return FMissionInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMissionInfo(FMissionInfo::StaticStruct, TEXT("/Script/CosmosWebApi"), TEXT("MissionInfo"), false, nullptr, nullptr);
static struct FScriptStruct_CosmosWebApi_StaticRegisterNativesFMissionInfo
{
	FScriptStruct_CosmosWebApi_StaticRegisterNativesFMissionInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MissionInfo")),new UScriptStruct::TCppStructOps<FMissionInfo>);
	}
} ScriptStruct_CosmosWebApi_StaticRegisterNativesFMissionInfo;
	struct Z_Construct_UScriptStruct_FMissionInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_upto_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_upto;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_count_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_count;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_campaignCategoryName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_campaignCategoryName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_campaignCategoryId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_campaignCategoryId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Point_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Point;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_keyword_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_keyword;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_titleCd_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_titleCd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMissionInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MissionInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMissionInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMissionInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMissionInfo_Statics::NewProp_upto_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MissionInfo" },
		{ "ModuleRelativePath", "Public/MissionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMissionInfo_Statics::NewProp_upto = { "upto", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMissionInfo, upto), METADATA_PARAMS(Z_Construct_UScriptStruct_FMissionInfo_Statics::NewProp_upto_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMissionInfo_Statics::NewProp_upto_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMissionInfo_Statics::NewProp_count_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MissionInfo" },
		{ "ModuleRelativePath", "Public/MissionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMissionInfo_Statics::NewProp_count = { "count", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMissionInfo, count), METADATA_PARAMS(Z_Construct_UScriptStruct_FMissionInfo_Statics::NewProp_count_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMissionInfo_Statics::NewProp_count_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMissionInfo_Statics::NewProp_campaignCategoryName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MissionInfo" },
		{ "ModuleRelativePath", "Public/MissionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMissionInfo_Statics::NewProp_campaignCategoryName = { "campaignCategoryName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMissionInfo, campaignCategoryName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMissionInfo_Statics::NewProp_campaignCategoryName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMissionInfo_Statics::NewProp_campaignCategoryName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMissionInfo_Statics::NewProp_campaignCategoryId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MissionInfo" },
		{ "ModuleRelativePath", "Public/MissionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMissionInfo_Statics::NewProp_campaignCategoryId = { "campaignCategoryId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMissionInfo, campaignCategoryId), METADATA_PARAMS(Z_Construct_UScriptStruct_FMissionInfo_Statics::NewProp_campaignCategoryId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMissionInfo_Statics::NewProp_campaignCategoryId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMissionInfo_Statics::NewProp_Point_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MissionInfo" },
		{ "ModuleRelativePath", "Public/MissionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMissionInfo_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMissionInfo, Point), METADATA_PARAMS(Z_Construct_UScriptStruct_FMissionInfo_Statics::NewProp_Point_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMissionInfo_Statics::NewProp_Point_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMissionInfo_Statics::NewProp_keyword_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MissionInfo" },
		{ "ModuleRelativePath", "Public/MissionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMissionInfo_Statics::NewProp_keyword = { "keyword", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMissionInfo, keyword), METADATA_PARAMS(Z_Construct_UScriptStruct_FMissionInfo_Statics::NewProp_keyword_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMissionInfo_Statics::NewProp_keyword_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMissionInfo_Statics::NewProp_Description_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MissionInfo" },
		{ "ModuleRelativePath", "Public/MissionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMissionInfo_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMissionInfo, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FMissionInfo_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMissionInfo_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMissionInfo_Statics::NewProp_titleCd_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MissionInfo" },
		{ "ModuleRelativePath", "Public/MissionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMissionInfo_Statics::NewProp_titleCd = { "titleCd", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMissionInfo, titleCd), METADATA_PARAMS(Z_Construct_UScriptStruct_FMissionInfo_Statics::NewProp_titleCd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMissionInfo_Statics::NewProp_titleCd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMissionInfo_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MissionInfo" },
		{ "ModuleRelativePath", "Public/MissionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMissionInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMissionInfo, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FMissionInfo_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMissionInfo_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMissionInfo_Statics::NewProp_ID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MissionInfo" },
		{ "ModuleRelativePath", "Public/MissionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMissionInfo_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMissionInfo, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FMissionInfo_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMissionInfo_Statics::NewProp_ID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMissionInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMissionInfo_Statics::NewProp_upto,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMissionInfo_Statics::NewProp_count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMissionInfo_Statics::NewProp_campaignCategoryName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMissionInfo_Statics::NewProp_campaignCategoryId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMissionInfo_Statics::NewProp_Point,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMissionInfo_Statics::NewProp_keyword,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMissionInfo_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMissionInfo_Statics::NewProp_titleCd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMissionInfo_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMissionInfo_Statics::NewProp_ID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMissionInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CosmosWebApi,
		nullptr,
		&NewStructOps,
		"MissionInfo",
		sizeof(FMissionInfo),
		alignof(FMissionInfo),
		Z_Construct_UScriptStruct_FMissionInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMissionInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMissionInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMissionInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMissionInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMissionInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CosmosWebApi();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MissionInfo"), sizeof(FMissionInfo), Get_Z_Construct_UScriptStruct_FMissionInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMissionInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMissionInfo_Hash() { return 1199403585U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
