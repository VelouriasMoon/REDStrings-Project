// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CosmosWebApi/Public/MissionInfoResponseParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMissionInfoResponseParam() {}
// Cross Module References
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FMissionInfoResponseParam();
	UPackage* Z_Construct_UPackage__Script_CosmosWebApi();
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FMissionInfo();
// End Cross Module References
class UScriptStruct* FMissionInfoResponseParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COSMOSWEBAPI_API uint32 Get_Z_Construct_UScriptStruct_FMissionInfoResponseParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMissionInfoResponseParam, Z_Construct_UPackage__Script_CosmosWebApi(), TEXT("MissionInfoResponseParam"), sizeof(FMissionInfoResponseParam), Get_Z_Construct_UScriptStruct_FMissionInfoResponseParam_Hash());
	}
	return Singleton;
}
template<> COSMOSWEBAPI_API UScriptStruct* StaticStruct<FMissionInfoResponseParam>()
{
	return FMissionInfoResponseParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMissionInfoResponseParam(FMissionInfoResponseParam::StaticStruct, TEXT("/Script/CosmosWebApi"), TEXT("MissionInfoResponseParam"), false, nullptr, nullptr);
static struct FScriptStruct_CosmosWebApi_StaticRegisterNativesFMissionInfoResponseParam
{
	FScriptStruct_CosmosWebApi_StaticRegisterNativesFMissionInfoResponseParam()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MissionInfoResponseParam")),new UScriptStruct::TCppStructOps<FMissionInfoResponseParam>);
	}
} ScriptStruct_CosmosWebApi_StaticRegisterNativesFMissionInfoResponseParam;
	struct Z_Construct_UScriptStruct_FMissionInfoResponseParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MissionInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MissionInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Status;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMissionInfoResponseParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MissionInfoResponseParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMissionInfoResponseParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMissionInfoResponseParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMissionInfoResponseParam_Statics::NewProp_MissionInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MissionInfoResponseParam" },
		{ "ModuleRelativePath", "Public/MissionInfoResponseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMissionInfoResponseParam_Statics::NewProp_MissionInfo = { "MissionInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMissionInfoResponseParam, MissionInfo), Z_Construct_UScriptStruct_FMissionInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FMissionInfoResponseParam_Statics::NewProp_MissionInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMissionInfoResponseParam_Statics::NewProp_MissionInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMissionInfoResponseParam_Statics::NewProp_Status_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MissionInfoResponseParam" },
		{ "ModuleRelativePath", "Public/MissionInfoResponseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMissionInfoResponseParam_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMissionInfoResponseParam, Status), METADATA_PARAMS(Z_Construct_UScriptStruct_FMissionInfoResponseParam_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMissionInfoResponseParam_Statics::NewProp_Status_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMissionInfoResponseParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMissionInfoResponseParam_Statics::NewProp_MissionInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMissionInfoResponseParam_Statics::NewProp_Status,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMissionInfoResponseParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CosmosWebApi,
		nullptr,
		&NewStructOps,
		"MissionInfoResponseParam",
		sizeof(FMissionInfoResponseParam),
		alignof(FMissionInfoResponseParam),
		Z_Construct_UScriptStruct_FMissionInfoResponseParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMissionInfoResponseParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMissionInfoResponseParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMissionInfoResponseParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMissionInfoResponseParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMissionInfoResponseParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CosmosWebApi();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MissionInfoResponseParam"), sizeof(FMissionInfoResponseParam), Get_Z_Construct_UScriptStruct_FMissionInfoResponseParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMissionInfoResponseParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMissionInfoResponseParam_Hash() { return 605009599U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
