// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CosmosWebApi/Public/AreaInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAreaInfo() {}
// Cross Module References
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FAreaInfo();
	UPackage* Z_Construct_UPackage__Script_CosmosWebApi();
// End Cross Module References
class UScriptStruct* FAreaInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COSMOSWEBAPI_API uint32 Get_Z_Construct_UScriptStruct_FAreaInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAreaInfo, Z_Construct_UPackage__Script_CosmosWebApi(), TEXT("AreaInfo"), sizeof(FAreaInfo), Get_Z_Construct_UScriptStruct_FAreaInfo_Hash());
	}
	return Singleton;
}
template<> COSMOSWEBAPI_API UScriptStruct* StaticStruct<FAreaInfo>()
{
	return FAreaInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAreaInfo(FAreaInfo::StaticStruct, TEXT("/Script/CosmosWebApi"), TEXT("AreaInfo"), false, nullptr, nullptr);
static struct FScriptStruct_CosmosWebApi_StaticRegisterNativesFAreaInfo
{
	FScriptStruct_CosmosWebApi_StaticRegisterNativesFAreaInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AreaInfo")),new UScriptStruct::TCppStructOps<FAreaInfo>);
	}
} ScriptStruct_CosmosWebApi_StaticRegisterNativesFAreaInfo;
	struct Z_Construct_UScriptStruct_FAreaInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AreaInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AreaInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_nameId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_nameId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_areaId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_areaId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_regionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_regionId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAreaInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AreaInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAreaInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAreaInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAreaInfo_Statics::NewProp_AreaInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AreaInfo" },
		{ "ModuleRelativePath", "Public/AreaInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAreaInfo_Statics::NewProp_AreaInfo = { "AreaInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAreaInfo, AreaInfo), METADATA_PARAMS(Z_Construct_UScriptStruct_FAreaInfo_Statics::NewProp_AreaInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAreaInfo_Statics::NewProp_AreaInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAreaInfo_Statics::NewProp_nameId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AreaInfo" },
		{ "ModuleRelativePath", "Public/AreaInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAreaInfo_Statics::NewProp_nameId = { "nameId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAreaInfo, nameId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAreaInfo_Statics::NewProp_nameId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAreaInfo_Statics::NewProp_nameId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAreaInfo_Statics::NewProp_areaId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AreaInfo" },
		{ "ModuleRelativePath", "Public/AreaInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAreaInfo_Statics::NewProp_areaId = { "areaId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAreaInfo, areaId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAreaInfo_Statics::NewProp_areaId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAreaInfo_Statics::NewProp_areaId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAreaInfo_Statics::NewProp_regionId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AreaInfo" },
		{ "ModuleRelativePath", "Public/AreaInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAreaInfo_Statics::NewProp_regionId = { "regionId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAreaInfo, regionId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAreaInfo_Statics::NewProp_regionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAreaInfo_Statics::NewProp_regionId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAreaInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAreaInfo_Statics::NewProp_AreaInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAreaInfo_Statics::NewProp_nameId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAreaInfo_Statics::NewProp_areaId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAreaInfo_Statics::NewProp_regionId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAreaInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CosmosWebApi,
		nullptr,
		&NewStructOps,
		"AreaInfo",
		sizeof(FAreaInfo),
		alignof(FAreaInfo),
		Z_Construct_UScriptStruct_FAreaInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAreaInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAreaInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAreaInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAreaInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAreaInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CosmosWebApi();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AreaInfo"), sizeof(FAreaInfo), Get_Z_Construct_UScriptStruct_FAreaInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAreaInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAreaInfo_Hash() { return 6309593U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
