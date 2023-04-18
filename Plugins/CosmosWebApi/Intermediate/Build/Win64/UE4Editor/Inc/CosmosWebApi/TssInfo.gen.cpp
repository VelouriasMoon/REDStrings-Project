// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CosmosWebApi/Public/TssInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTssInfo() {}
// Cross Module References
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FTssInfo();
	UPackage* Z_Construct_UPackage__Script_CosmosWebApi();
// End Cross Module References
class UScriptStruct* FTssInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COSMOSWEBAPI_API uint32 Get_Z_Construct_UScriptStruct_FTssInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTssInfo, Z_Construct_UPackage__Script_CosmosWebApi(), TEXT("TssInfo"), sizeof(FTssInfo), Get_Z_Construct_UScriptStruct_FTssInfo_Hash());
	}
	return Singleton;
}
template<> COSMOSWEBAPI_API UScriptStruct* StaticStruct<FTssInfo>()
{
	return FTssInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTssInfo(FTssInfo::StaticStruct, TEXT("/Script/CosmosWebApi"), TEXT("TssInfo"), false, nullptr, nullptr);
static struct FScriptStruct_CosmosWebApi_StaticRegisterNativesFTssInfo
{
	FScriptStruct_CosmosWebApi_StaticRegisterNativesFTssInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TssInfo")),new UScriptStruct::TCppStructOps<FTssInfo>);
	}
} ScriptStruct_CosmosWebApi_StaticRegisterNativesFTssInfo;
	struct Z_Construct_UScriptStruct_FTssInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tssData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_tssData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_slotNo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_slotNo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTssInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TssInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTssInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTssInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTssInfo_Statics::NewProp_tssData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TssInfo" },
		{ "ModuleRelativePath", "Public/TssInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTssInfo_Statics::NewProp_tssData = { "tssData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTssInfo, tssData), METADATA_PARAMS(Z_Construct_UScriptStruct_FTssInfo_Statics::NewProp_tssData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTssInfo_Statics::NewProp_tssData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTssInfo_Statics::NewProp_slotNo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TssInfo" },
		{ "ModuleRelativePath", "Public/TssInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTssInfo_Statics::NewProp_slotNo = { "slotNo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTssInfo, slotNo), METADATA_PARAMS(Z_Construct_UScriptStruct_FTssInfo_Statics::NewProp_slotNo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTssInfo_Statics::NewProp_slotNo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTssInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTssInfo_Statics::NewProp_tssData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTssInfo_Statics::NewProp_slotNo,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTssInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CosmosWebApi,
		nullptr,
		&NewStructOps,
		"TssInfo",
		sizeof(FTssInfo),
		alignof(FTssInfo),
		Z_Construct_UScriptStruct_FTssInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTssInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTssInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTssInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTssInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTssInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CosmosWebApi();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TssInfo"), sizeof(FTssInfo), Get_Z_Construct_UScriptStruct_FTssInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTssInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTssInfo_Hash() { return 3495440583U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
