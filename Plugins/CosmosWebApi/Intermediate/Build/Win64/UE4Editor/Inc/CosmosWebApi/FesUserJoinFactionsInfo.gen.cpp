// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CosmosWebApi/Public/FesUserJoinFactionsInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFesUserJoinFactionsInfo() {}
// Cross Module References
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FFesUserJoinFactionsInfo();
	UPackage* Z_Construct_UPackage__Script_CosmosWebApi();
// End Cross Module References
class UScriptStruct* FFesUserJoinFactionsInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COSMOSWEBAPI_API uint32 Get_Z_Construct_UScriptStruct_FFesUserJoinFactionsInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFesUserJoinFactionsInfo, Z_Construct_UPackage__Script_CosmosWebApi(), TEXT("FesUserJoinFactionsInfo"), sizeof(FFesUserJoinFactionsInfo), Get_Z_Construct_UScriptStruct_FFesUserJoinFactionsInfo_Hash());
	}
	return Singleton;
}
template<> COSMOSWEBAPI_API UScriptStruct* StaticStruct<FFesUserJoinFactionsInfo>()
{
	return FFesUserJoinFactionsInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFesUserJoinFactionsInfo(FFesUserJoinFactionsInfo::StaticStruct, TEXT("/Script/CosmosWebApi"), TEXT("FesUserJoinFactionsInfo"), false, nullptr, nullptr);
static struct FScriptStruct_CosmosWebApi_StaticRegisterNativesFFesUserJoinFactionsInfo
{
	FScriptStruct_CosmosWebApi_StaticRegisterNativesFFesUserJoinFactionsInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FesUserJoinFactionsInfo")),new UScriptStruct::TCppStructOps<FFesUserJoinFactionsInfo>);
	}
} ScriptStruct_CosmosWebApi_StaticRegisterNativesFFesUserJoinFactionsInfo;
	struct Z_Construct_UScriptStruct_FFesUserJoinFactionsInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_factionsPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_factionsPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_factionsNo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_factionsNo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFesUserJoinFactionsInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FesUserJoinFactionsInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFesUserJoinFactionsInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFesUserJoinFactionsInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFesUserJoinFactionsInfo_Statics::NewProp_factionsPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FesUserJoinFactionsInfo" },
		{ "ModuleRelativePath", "Public/FesUserJoinFactionsInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFesUserJoinFactionsInfo_Statics::NewProp_factionsPoint = { "factionsPoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFesUserJoinFactionsInfo, factionsPoint), METADATA_PARAMS(Z_Construct_UScriptStruct_FFesUserJoinFactionsInfo_Statics::NewProp_factionsPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFesUserJoinFactionsInfo_Statics::NewProp_factionsPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFesUserJoinFactionsInfo_Statics::NewProp_factionsNo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FesUserJoinFactionsInfo" },
		{ "ModuleRelativePath", "Public/FesUserJoinFactionsInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFesUserJoinFactionsInfo_Statics::NewProp_factionsNo = { "factionsNo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFesUserJoinFactionsInfo, factionsNo), METADATA_PARAMS(Z_Construct_UScriptStruct_FFesUserJoinFactionsInfo_Statics::NewProp_factionsNo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFesUserJoinFactionsInfo_Statics::NewProp_factionsNo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFesUserJoinFactionsInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFesUserJoinFactionsInfo_Statics::NewProp_factionsPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFesUserJoinFactionsInfo_Statics::NewProp_factionsNo,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFesUserJoinFactionsInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CosmosWebApi,
		nullptr,
		&NewStructOps,
		"FesUserJoinFactionsInfo",
		sizeof(FFesUserJoinFactionsInfo),
		alignof(FFesUserJoinFactionsInfo),
		Z_Construct_UScriptStruct_FFesUserJoinFactionsInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFesUserJoinFactionsInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFesUserJoinFactionsInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFesUserJoinFactionsInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFesUserJoinFactionsInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFesUserJoinFactionsInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CosmosWebApi();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FesUserJoinFactionsInfo"), sizeof(FFesUserJoinFactionsInfo), Get_Z_Construct_UScriptStruct_FFesUserJoinFactionsInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFesUserJoinFactionsInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFesUserJoinFactionsInfo_Hash() { return 4163941146U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
