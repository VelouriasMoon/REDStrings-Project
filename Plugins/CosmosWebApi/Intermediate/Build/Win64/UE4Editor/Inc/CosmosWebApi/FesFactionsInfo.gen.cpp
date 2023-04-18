// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CosmosWebApi/Public/FesFactionsInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFesFactionsInfo() {}
// Cross Module References
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FFesFactionsInfo();
	UPackage* Z_Construct_UPackage__Script_CosmosWebApi();
// End Cross Module References
class UScriptStruct* FFesFactionsInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COSMOSWEBAPI_API uint32 Get_Z_Construct_UScriptStruct_FFesFactionsInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFesFactionsInfo, Z_Construct_UPackage__Script_CosmosWebApi(), TEXT("FesFactionsInfo"), sizeof(FFesFactionsInfo), Get_Z_Construct_UScriptStruct_FFesFactionsInfo_Hash());
	}
	return Singleton;
}
template<> COSMOSWEBAPI_API UScriptStruct* StaticStruct<FFesFactionsInfo>()
{
	return FFesFactionsInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFesFactionsInfo(FFesFactionsInfo::StaticStruct, TEXT("/Script/CosmosWebApi"), TEXT("FesFactionsInfo"), false, nullptr, nullptr);
static struct FScriptStruct_CosmosWebApi_StaticRegisterNativesFFesFactionsInfo
{
	FScriptStruct_CosmosWebApi_StaticRegisterNativesFFesFactionsInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FesFactionsInfo")),new UScriptStruct::TCppStructOps<FFesFactionsInfo>);
	}
} ScriptStruct_CosmosWebApi_StaticRegisterNativesFFesFactionsInfo;
	struct Z_Construct_UScriptStruct_FFesFactionsInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_factionsTotalPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_factionsTotalPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_factionsNo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_factionsNo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFesFactionsInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FesFactionsInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFesFactionsInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFesFactionsInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFesFactionsInfo_Statics::NewProp_factionsTotalPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FesFactionsInfo" },
		{ "ModuleRelativePath", "Public/FesFactionsInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFesFactionsInfo_Statics::NewProp_factionsTotalPoint = { "factionsTotalPoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFesFactionsInfo, factionsTotalPoint), METADATA_PARAMS(Z_Construct_UScriptStruct_FFesFactionsInfo_Statics::NewProp_factionsTotalPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFesFactionsInfo_Statics::NewProp_factionsTotalPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFesFactionsInfo_Statics::NewProp_factionsNo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FesFactionsInfo" },
		{ "ModuleRelativePath", "Public/FesFactionsInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFesFactionsInfo_Statics::NewProp_factionsNo = { "factionsNo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFesFactionsInfo, factionsNo), METADATA_PARAMS(Z_Construct_UScriptStruct_FFesFactionsInfo_Statics::NewProp_factionsNo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFesFactionsInfo_Statics::NewProp_factionsNo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFesFactionsInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFesFactionsInfo_Statics::NewProp_factionsTotalPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFesFactionsInfo_Statics::NewProp_factionsNo,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFesFactionsInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CosmosWebApi,
		nullptr,
		&NewStructOps,
		"FesFactionsInfo",
		sizeof(FFesFactionsInfo),
		alignof(FFesFactionsInfo),
		Z_Construct_UScriptStruct_FFesFactionsInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFesFactionsInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFesFactionsInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFesFactionsInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFesFactionsInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFesFactionsInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CosmosWebApi();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FesFactionsInfo"), sizeof(FFesFactionsInfo), Get_Z_Construct_UScriptStruct_FFesFactionsInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFesFactionsInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFesFactionsInfo_Hash() { return 2858528377U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
