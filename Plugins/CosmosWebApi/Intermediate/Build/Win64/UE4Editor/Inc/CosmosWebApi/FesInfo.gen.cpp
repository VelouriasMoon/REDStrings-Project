// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CosmosWebApi/Public/FesInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFesInfo() {}
// Cross Module References
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FFesInfo();
	UPackage* Z_Construct_UPackage__Script_CosmosWebApi();
// End Cross Module References
class UScriptStruct* FFesInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COSMOSWEBAPI_API uint32 Get_Z_Construct_UScriptStruct_FFesInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFesInfo, Z_Construct_UPackage__Script_CosmosWebApi(), TEXT("FesInfo"), sizeof(FFesInfo), Get_Z_Construct_UScriptStruct_FFesInfo_Hash());
	}
	return Singleton;
}
template<> COSMOSWEBAPI_API UScriptStruct* StaticStruct<FFesInfo>()
{
	return FFesInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFesInfo(FFesInfo::StaticStruct, TEXT("/Script/CosmosWebApi"), TEXT("FesInfo"), false, nullptr, nullptr);
static struct FScriptStruct_CosmosWebApi_StaticRegisterNativesFFesInfo
{
	FScriptStruct_CosmosWebApi_StaticRegisterNativesFFesInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FesInfo")),new UScriptStruct::TCppStructOps<FFesInfo>);
	}
} ScriptStruct_CosmosWebApi_StaticRegisterNativesFFesInfo;
	struct Z_Construct_UScriptStruct_FFesInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fesId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_fesId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFesInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FesInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFesInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFesInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFesInfo_Statics::NewProp_rewardStart_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FesInfo" },
		{ "ModuleRelativePath", "Public/FesInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFesInfo_Statics::NewProp_rewardStart = { "rewardStart", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFesInfo, rewardStart), METADATA_PARAMS(Z_Construct_UScriptStruct_FFesInfo_Statics::NewProp_rewardStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFesInfo_Statics::NewProp_rewardStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFesInfo_Statics::NewProp_endTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FesInfo" },
		{ "ModuleRelativePath", "Public/FesInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFesInfo_Statics::NewProp_endTime = { "endTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFesInfo, endTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FFesInfo_Statics::NewProp_endTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFesInfo_Statics::NewProp_endTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFesInfo_Statics::NewProp_StartTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FesInfo" },
		{ "ModuleRelativePath", "Public/FesInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFesInfo_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFesInfo, StartTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FFesInfo_Statics::NewProp_StartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFesInfo_Statics::NewProp_StartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFesInfo_Statics::NewProp_announceEnd_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FesInfo" },
		{ "ModuleRelativePath", "Public/FesInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFesInfo_Statics::NewProp_announceEnd = { "announceEnd", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFesInfo, announceEnd), METADATA_PARAMS(Z_Construct_UScriptStruct_FFesInfo_Statics::NewProp_announceEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFesInfo_Statics::NewProp_announceEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFesInfo_Statics::NewProp_announceStart_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FesInfo" },
		{ "ModuleRelativePath", "Public/FesInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFesInfo_Statics::NewProp_announceStart = { "announceStart", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFesInfo, announceStart), METADATA_PARAMS(Z_Construct_UScriptStruct_FFesInfo_Statics::NewProp_announceStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFesInfo_Statics::NewProp_announceStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFesInfo_Statics::NewProp_FesInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FesInfo" },
		{ "ModuleRelativePath", "Public/FesInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFesInfo_Statics::NewProp_FesInfo = { "FesInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFesInfo, FesInfo), METADATA_PARAMS(Z_Construct_UScriptStruct_FFesInfo_Statics::NewProp_FesInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFesInfo_Statics::NewProp_FesInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFesInfo_Statics::NewProp_fesId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FesInfo" },
		{ "ModuleRelativePath", "Public/FesInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFesInfo_Statics::NewProp_fesId = { "fesId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFesInfo, fesId), METADATA_PARAMS(Z_Construct_UScriptStruct_FFesInfo_Statics::NewProp_fesId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFesInfo_Statics::NewProp_fesId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFesInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFesInfo_Statics::NewProp_rewardStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFesInfo_Statics::NewProp_endTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFesInfo_Statics::NewProp_StartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFesInfo_Statics::NewProp_announceEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFesInfo_Statics::NewProp_announceStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFesInfo_Statics::NewProp_FesInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFesInfo_Statics::NewProp_fesId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFesInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CosmosWebApi,
		nullptr,
		&NewStructOps,
		"FesInfo",
		sizeof(FFesInfo),
		alignof(FFesInfo),
		Z_Construct_UScriptStruct_FFesInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFesInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFesInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFesInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFesInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFesInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CosmosWebApi();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FesInfo"), sizeof(FFesInfo), Get_Z_Construct_UScriptStruct_FFesInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFesInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFesInfo_Hash() { return 2133878518U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
