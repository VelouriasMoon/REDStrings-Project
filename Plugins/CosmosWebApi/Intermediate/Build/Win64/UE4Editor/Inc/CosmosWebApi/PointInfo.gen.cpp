// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CosmosWebApi/Public/PointInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePointInfo() {}
// Cross Module References
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FPointInfo();
	UPackage* Z_Construct_UPackage__Script_CosmosWebApi();
// End Cross Module References
class UScriptStruct* FPointInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COSMOSWEBAPI_API uint32 Get_Z_Construct_UScriptStruct_FPointInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPointInfo, Z_Construct_UPackage__Script_CosmosWebApi(), TEXT("PointInfo"), sizeof(FPointInfo), Get_Z_Construct_UScriptStruct_FPointInfo_Hash());
	}
	return Singleton;
}
template<> COSMOSWEBAPI_API UScriptStruct* StaticStruct<FPointInfo>()
{
	return FPointInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPointInfo(FPointInfo::StaticStruct, TEXT("/Script/CosmosWebApi"), TEXT("PointInfo"), false, nullptr, nullptr);
static struct FScriptStruct_CosmosWebApi_StaticRegisterNativesFPointInfo
{
	FScriptStruct_CosmosWebApi_StaticRegisterNativesFPointInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PointInfo")),new UScriptStruct::TCppStructOps<FPointInfo>);
	}
} ScriptStruct_CosmosWebApi_StaticRegisterNativesFPointInfo;
	struct Z_Construct_UScriptStruct_FPointInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_precedeRank_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_precedeRank;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_count_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_count;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_nowRank_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_nowRank;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_totalPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_totalPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Point_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Point;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_campaignId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_campaignId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_titleCd_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_titleCd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_userId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_userId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PointInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPointInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPointInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointInfo_Statics::NewProp_precedeRank_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PointInfo" },
		{ "ModuleRelativePath", "Public/PointInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPointInfo_Statics::NewProp_precedeRank = { "precedeRank", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPointInfo, precedeRank), METADATA_PARAMS(Z_Construct_UScriptStruct_FPointInfo_Statics::NewProp_precedeRank_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointInfo_Statics::NewProp_precedeRank_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointInfo_Statics::NewProp_count_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PointInfo" },
		{ "ModuleRelativePath", "Public/PointInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPointInfo_Statics::NewProp_count = { "count", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPointInfo, count), METADATA_PARAMS(Z_Construct_UScriptStruct_FPointInfo_Statics::NewProp_count_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointInfo_Statics::NewProp_count_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointInfo_Statics::NewProp_nowRank_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PointInfo" },
		{ "ModuleRelativePath", "Public/PointInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPointInfo_Statics::NewProp_nowRank = { "nowRank", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPointInfo, nowRank), METADATA_PARAMS(Z_Construct_UScriptStruct_FPointInfo_Statics::NewProp_nowRank_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointInfo_Statics::NewProp_nowRank_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointInfo_Statics::NewProp_totalPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PointInfo" },
		{ "ModuleRelativePath", "Public/PointInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPointInfo_Statics::NewProp_totalPoint = { "totalPoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPointInfo, totalPoint), METADATA_PARAMS(Z_Construct_UScriptStruct_FPointInfo_Statics::NewProp_totalPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointInfo_Statics::NewProp_totalPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointInfo_Statics::NewProp_Point_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PointInfo" },
		{ "ModuleRelativePath", "Public/PointInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPointInfo_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPointInfo, Point), METADATA_PARAMS(Z_Construct_UScriptStruct_FPointInfo_Statics::NewProp_Point_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointInfo_Statics::NewProp_Point_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointInfo_Statics::NewProp_campaignId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PointInfo" },
		{ "ModuleRelativePath", "Public/PointInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPointInfo_Statics::NewProp_campaignId = { "campaignId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPointInfo, campaignId), METADATA_PARAMS(Z_Construct_UScriptStruct_FPointInfo_Statics::NewProp_campaignId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointInfo_Statics::NewProp_campaignId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointInfo_Statics::NewProp_titleCd_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PointInfo" },
		{ "ModuleRelativePath", "Public/PointInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPointInfo_Statics::NewProp_titleCd = { "titleCd", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPointInfo, titleCd), METADATA_PARAMS(Z_Construct_UScriptStruct_FPointInfo_Statics::NewProp_titleCd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointInfo_Statics::NewProp_titleCd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointInfo_Statics::NewProp_userId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PointInfo" },
		{ "ModuleRelativePath", "Public/PointInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPointInfo_Statics::NewProp_userId = { "userId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPointInfo, userId), METADATA_PARAMS(Z_Construct_UScriptStruct_FPointInfo_Statics::NewProp_userId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointInfo_Statics::NewProp_userId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointInfo_Statics::NewProp_ID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PointInfo" },
		{ "ModuleRelativePath", "Public/PointInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPointInfo_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPointInfo, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FPointInfo_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointInfo_Statics::NewProp_ID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPointInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointInfo_Statics::NewProp_precedeRank,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointInfo_Statics::NewProp_count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointInfo_Statics::NewProp_nowRank,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointInfo_Statics::NewProp_totalPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointInfo_Statics::NewProp_Point,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointInfo_Statics::NewProp_campaignId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointInfo_Statics::NewProp_titleCd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointInfo_Statics::NewProp_userId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointInfo_Statics::NewProp_ID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPointInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CosmosWebApi,
		nullptr,
		&NewStructOps,
		"PointInfo",
		sizeof(FPointInfo),
		alignof(FPointInfo),
		Z_Construct_UScriptStruct_FPointInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPointInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPointInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPointInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CosmosWebApi();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PointInfo"), sizeof(FPointInfo), Get_Z_Construct_UScriptStruct_FPointInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPointInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPointInfo_Hash() { return 708072728U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
