// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CosmosWebApi/Public/CosmosRegionInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCosmosRegionInfo() {}
// Cross Module References
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FCosmosRegionInfo();
	UPackage* Z_Construct_UPackage__Script_CosmosWebApi();
// End Cross Module References
class UScriptStruct* FCosmosRegionInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COSMOSWEBAPI_API uint32 Get_Z_Construct_UScriptStruct_FCosmosRegionInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCosmosRegionInfo, Z_Construct_UPackage__Script_CosmosWebApi(), TEXT("CosmosRegionInfo"), sizeof(FCosmosRegionInfo), Get_Z_Construct_UScriptStruct_FCosmosRegionInfo_Hash());
	}
	return Singleton;
}
template<> COSMOSWEBAPI_API UScriptStruct* StaticStruct<FCosmosRegionInfo>()
{
	return FCosmosRegionInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCosmosRegionInfo(FCosmosRegionInfo::StaticStruct, TEXT("/Script/CosmosWebApi"), TEXT("CosmosRegionInfo"), false, nullptr, nullptr);
static struct FScriptStruct_CosmosWebApi_StaticRegisterNativesFCosmosRegionInfo
{
	FScriptStruct_CosmosWebApi_StaticRegisterNativesFCosmosRegionInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CosmosRegionInfo")),new UScriptStruct::TCppStructOps<FCosmosRegionInfo>);
	}
} ScriptStruct_CosmosWebApi_StaticRegisterNativesFCosmosRegionInfo;
	struct Z_Construct_UScriptStruct_FCosmosRegionInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_regionInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_regionInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_nameId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_nameId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_regionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_regionId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCosmosRegionInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CosmosRegionInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCosmosRegionInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCosmosRegionInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCosmosRegionInfo_Statics::NewProp_regionInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CosmosRegionInfo" },
		{ "ModuleRelativePath", "Public/CosmosRegionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCosmosRegionInfo_Statics::NewProp_regionInfo = { "regionInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCosmosRegionInfo, regionInfo), METADATA_PARAMS(Z_Construct_UScriptStruct_FCosmosRegionInfo_Statics::NewProp_regionInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCosmosRegionInfo_Statics::NewProp_regionInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCosmosRegionInfo_Statics::NewProp_nameId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CosmosRegionInfo" },
		{ "ModuleRelativePath", "Public/CosmosRegionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCosmosRegionInfo_Statics::NewProp_nameId = { "nameId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCosmosRegionInfo, nameId), METADATA_PARAMS(Z_Construct_UScriptStruct_FCosmosRegionInfo_Statics::NewProp_nameId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCosmosRegionInfo_Statics::NewProp_nameId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCosmosRegionInfo_Statics::NewProp_regionId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CosmosRegionInfo" },
		{ "ModuleRelativePath", "Public/CosmosRegionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCosmosRegionInfo_Statics::NewProp_regionId = { "regionId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCosmosRegionInfo, regionId), METADATA_PARAMS(Z_Construct_UScriptStruct_FCosmosRegionInfo_Statics::NewProp_regionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCosmosRegionInfo_Statics::NewProp_regionId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCosmosRegionInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCosmosRegionInfo_Statics::NewProp_regionInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCosmosRegionInfo_Statics::NewProp_nameId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCosmosRegionInfo_Statics::NewProp_regionId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCosmosRegionInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CosmosWebApi,
		nullptr,
		&NewStructOps,
		"CosmosRegionInfo",
		sizeof(FCosmosRegionInfo),
		alignof(FCosmosRegionInfo),
		Z_Construct_UScriptStruct_FCosmosRegionInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCosmosRegionInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCosmosRegionInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCosmosRegionInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCosmosRegionInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCosmosRegionInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CosmosWebApi();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CosmosRegionInfo"), sizeof(FCosmosRegionInfo), Get_Z_Construct_UScriptStruct_FCosmosRegionInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCosmosRegionInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCosmosRegionInfo_Hash() { return 941306893U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
