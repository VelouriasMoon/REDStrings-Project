// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CosmosWebApi/Public/FesGetInfoResponseParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFesGetInfoResponseParam() {}
// Cross Module References
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FFesGetInfoResponseParam();
	UPackage* Z_Construct_UPackage__Script_CosmosWebApi();
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FFesUserJoinFactionsInfo();
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FFesRewardInfo();
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FFesFactionsInfo();
// End Cross Module References
class UScriptStruct* FFesGetInfoResponseParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COSMOSWEBAPI_API uint32 Get_Z_Construct_UScriptStruct_FFesGetInfoResponseParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFesGetInfoResponseParam, Z_Construct_UPackage__Script_CosmosWebApi(), TEXT("FesGetInfoResponseParam"), sizeof(FFesGetInfoResponseParam), Get_Z_Construct_UScriptStruct_FFesGetInfoResponseParam_Hash());
	}
	return Singleton;
}
template<> COSMOSWEBAPI_API UScriptStruct* StaticStruct<FFesGetInfoResponseParam>()
{
	return FFesGetInfoResponseParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFesGetInfoResponseParam(FFesGetInfoResponseParam::StaticStruct, TEXT("/Script/CosmosWebApi"), TEXT("FesGetInfoResponseParam"), false, nullptr, nullptr);
static struct FScriptStruct_CosmosWebApi_StaticRegisterNativesFFesGetInfoResponseParam
{
	FScriptStruct_CosmosWebApi_StaticRegisterNativesFFesGetInfoResponseParam()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FesGetInfoResponseParam")),new UScriptStruct::TCppStructOps<FFesGetInfoResponseParam>);
	}
} ScriptStruct_CosmosWebApi_StaticRegisterNativesFFesGetInfoResponseParam;
	struct Z_Construct_UScriptStruct_FFesGetInfoResponseParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_userFactionsInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_userFactionsInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rewardList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_rewardList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rewardList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_factionsList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_factionsList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_factionsList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rewardStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_rewardStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_endTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_endTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_announceEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_announceEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_announceStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_announceStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FesInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FesInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Status;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFesGetInfoResponseParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FesGetInfoResponseParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFesGetInfoResponseParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFesGetInfoResponseParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFesGetInfoResponseParam_Statics::NewProp_userFactionsInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FesGetInfoResponseParam" },
		{ "ModuleRelativePath", "Public/FesGetInfoResponseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFesGetInfoResponseParam_Statics::NewProp_userFactionsInfo = { "userFactionsInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFesGetInfoResponseParam, userFactionsInfo), Z_Construct_UScriptStruct_FFesUserJoinFactionsInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FFesGetInfoResponseParam_Statics::NewProp_userFactionsInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFesGetInfoResponseParam_Statics::NewProp_userFactionsInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFesGetInfoResponseParam_Statics::NewProp_rewardList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FesGetInfoResponseParam" },
		{ "ModuleRelativePath", "Public/FesGetInfoResponseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFesGetInfoResponseParam_Statics::NewProp_rewardList = { "rewardList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFesGetInfoResponseParam, rewardList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFesGetInfoResponseParam_Statics::NewProp_rewardList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFesGetInfoResponseParam_Statics::NewProp_rewardList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFesGetInfoResponseParam_Statics::NewProp_rewardList_Inner = { "rewardList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFesRewardInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFesGetInfoResponseParam_Statics::NewProp_factionsList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FesGetInfoResponseParam" },
		{ "ModuleRelativePath", "Public/FesGetInfoResponseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFesGetInfoResponseParam_Statics::NewProp_factionsList = { "factionsList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFesGetInfoResponseParam, factionsList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFesGetInfoResponseParam_Statics::NewProp_factionsList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFesGetInfoResponseParam_Statics::NewProp_factionsList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFesGetInfoResponseParam_Statics::NewProp_factionsList_Inner = { "factionsList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFesFactionsInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFesGetInfoResponseParam_Statics::NewProp_rewardStart_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FesGetInfoResponseParam" },
		{ "ModuleRelativePath", "Public/FesGetInfoResponseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFesGetInfoResponseParam_Statics::NewProp_rewardStart = { "rewardStart", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFesGetInfoResponseParam, rewardStart), METADATA_PARAMS(Z_Construct_UScriptStruct_FFesGetInfoResponseParam_Statics::NewProp_rewardStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFesGetInfoResponseParam_Statics::NewProp_rewardStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFesGetInfoResponseParam_Statics::NewProp_endTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FesGetInfoResponseParam" },
		{ "ModuleRelativePath", "Public/FesGetInfoResponseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFesGetInfoResponseParam_Statics::NewProp_endTime = { "endTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFesGetInfoResponseParam, endTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FFesGetInfoResponseParam_Statics::NewProp_endTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFesGetInfoResponseParam_Statics::NewProp_endTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFesGetInfoResponseParam_Statics::NewProp_StartTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FesGetInfoResponseParam" },
		{ "ModuleRelativePath", "Public/FesGetInfoResponseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFesGetInfoResponseParam_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFesGetInfoResponseParam, StartTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FFesGetInfoResponseParam_Statics::NewProp_StartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFesGetInfoResponseParam_Statics::NewProp_StartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFesGetInfoResponseParam_Statics::NewProp_announceEnd_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FesGetInfoResponseParam" },
		{ "ModuleRelativePath", "Public/FesGetInfoResponseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFesGetInfoResponseParam_Statics::NewProp_announceEnd = { "announceEnd", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFesGetInfoResponseParam, announceEnd), METADATA_PARAMS(Z_Construct_UScriptStruct_FFesGetInfoResponseParam_Statics::NewProp_announceEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFesGetInfoResponseParam_Statics::NewProp_announceEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFesGetInfoResponseParam_Statics::NewProp_announceStart_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FesGetInfoResponseParam" },
		{ "ModuleRelativePath", "Public/FesGetInfoResponseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFesGetInfoResponseParam_Statics::NewProp_announceStart = { "announceStart", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFesGetInfoResponseParam, announceStart), METADATA_PARAMS(Z_Construct_UScriptStruct_FFesGetInfoResponseParam_Statics::NewProp_announceStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFesGetInfoResponseParam_Statics::NewProp_announceStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFesGetInfoResponseParam_Statics::NewProp_FesInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FesGetInfoResponseParam" },
		{ "ModuleRelativePath", "Public/FesGetInfoResponseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFesGetInfoResponseParam_Statics::NewProp_FesInfo = { "FesInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFesGetInfoResponseParam, FesInfo), METADATA_PARAMS(Z_Construct_UScriptStruct_FFesGetInfoResponseParam_Statics::NewProp_FesInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFesGetInfoResponseParam_Statics::NewProp_FesInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFesGetInfoResponseParam_Statics::NewProp_Status_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FesGetInfoResponseParam" },
		{ "ModuleRelativePath", "Public/FesGetInfoResponseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFesGetInfoResponseParam_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFesGetInfoResponseParam, Status), METADATA_PARAMS(Z_Construct_UScriptStruct_FFesGetInfoResponseParam_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFesGetInfoResponseParam_Statics::NewProp_Status_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFesGetInfoResponseParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFesGetInfoResponseParam_Statics::NewProp_userFactionsInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFesGetInfoResponseParam_Statics::NewProp_rewardList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFesGetInfoResponseParam_Statics::NewProp_rewardList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFesGetInfoResponseParam_Statics::NewProp_factionsList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFesGetInfoResponseParam_Statics::NewProp_factionsList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFesGetInfoResponseParam_Statics::NewProp_rewardStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFesGetInfoResponseParam_Statics::NewProp_endTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFesGetInfoResponseParam_Statics::NewProp_StartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFesGetInfoResponseParam_Statics::NewProp_announceEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFesGetInfoResponseParam_Statics::NewProp_announceStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFesGetInfoResponseParam_Statics::NewProp_FesInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFesGetInfoResponseParam_Statics::NewProp_Status,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFesGetInfoResponseParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CosmosWebApi,
		nullptr,
		&NewStructOps,
		"FesGetInfoResponseParam",
		sizeof(FFesGetInfoResponseParam),
		alignof(FFesGetInfoResponseParam),
		Z_Construct_UScriptStruct_FFesGetInfoResponseParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFesGetInfoResponseParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFesGetInfoResponseParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFesGetInfoResponseParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFesGetInfoResponseParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFesGetInfoResponseParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CosmosWebApi();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FesGetInfoResponseParam"), sizeof(FFesGetInfoResponseParam), Get_Z_Construct_UScriptStruct_FFesGetInfoResponseParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFesGetInfoResponseParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFesGetInfoResponseParam_Hash() { return 2988664139U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
