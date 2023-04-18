// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CosmosWebApi/Public/DataupUpdateSearchTagInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataupUpdateSearchTagInfo() {}
// Cross Module References
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FDataupUpdateSearchTagInfo();
	UPackage* Z_Construct_UPackage__Script_CosmosWebApi();
// End Cross Module References
class UScriptStruct* FDataupUpdateSearchTagInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COSMOSWEBAPI_API uint32 Get_Z_Construct_UScriptStruct_FDataupUpdateSearchTagInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataupUpdateSearchTagInfo, Z_Construct_UPackage__Script_CosmosWebApi(), TEXT("DataupUpdateSearchTagInfo"), sizeof(FDataupUpdateSearchTagInfo), Get_Z_Construct_UScriptStruct_FDataupUpdateSearchTagInfo_Hash());
	}
	return Singleton;
}
template<> COSMOSWEBAPI_API UScriptStruct* StaticStruct<FDataupUpdateSearchTagInfo>()
{
	return FDataupUpdateSearchTagInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDataupUpdateSearchTagInfo(FDataupUpdateSearchTagInfo::StaticStruct, TEXT("/Script/CosmosWebApi"), TEXT("DataupUpdateSearchTagInfo"), false, nullptr, nullptr);
static struct FScriptStruct_CosmosWebApi_StaticRegisterNativesFDataupUpdateSearchTagInfo
{
	FScriptStruct_CosmosWebApi_StaticRegisterNativesFDataupUpdateSearchTagInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DataupUpdateSearchTagInfo")),new UScriptStruct::TCppStructOps<FDataupUpdateSearchTagInfo>);
	}
} ScriptStruct_CosmosWebApi_StaticRegisterNativesFDataupUpdateSearchTagInfo;
	struct Z_Construct_UScriptStruct_FDataupUpdateSearchTagInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataupUpdateSearchTagInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataupUpdateSearchTagInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataupUpdateSearchTagInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataupUpdateSearchTagInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataupUpdateSearchTagInfo_Statics::NewProp_Value_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DataupUpdateSearchTagInfo" },
		{ "ModuleRelativePath", "Public/DataupUpdateSearchTagInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDataupUpdateSearchTagInfo_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataupUpdateSearchTagInfo, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataupUpdateSearchTagInfo_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataupUpdateSearchTagInfo_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataupUpdateSearchTagInfo_Statics::NewProp_Key_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DataupUpdateSearchTagInfo" },
		{ "ModuleRelativePath", "Public/DataupUpdateSearchTagInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDataupUpdateSearchTagInfo_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataupUpdateSearchTagInfo, Key), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataupUpdateSearchTagInfo_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataupUpdateSearchTagInfo_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataupUpdateSearchTagInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataupUpdateSearchTagInfo_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataupUpdateSearchTagInfo_Statics::NewProp_Key,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataupUpdateSearchTagInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CosmosWebApi,
		nullptr,
		&NewStructOps,
		"DataupUpdateSearchTagInfo",
		sizeof(FDataupUpdateSearchTagInfo),
		alignof(FDataupUpdateSearchTagInfo),
		Z_Construct_UScriptStruct_FDataupUpdateSearchTagInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataupUpdateSearchTagInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataupUpdateSearchTagInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataupUpdateSearchTagInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataupUpdateSearchTagInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDataupUpdateSearchTagInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CosmosWebApi();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DataupUpdateSearchTagInfo"), sizeof(FDataupUpdateSearchTagInfo), Get_Z_Construct_UScriptStruct_FDataupUpdateSearchTagInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDataupUpdateSearchTagInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDataupUpdateSearchTagInfo_Hash() { return 697170532U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
