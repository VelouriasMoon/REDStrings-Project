// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CosmosWebApi/Public/CatalogGetRegionResponseParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCatalogGetRegionResponseParam() {}
// Cross Module References
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FCatalogGetRegionResponseParam();
	UPackage* Z_Construct_UPackage__Script_CosmosWebApi();
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FCosmosRegionInfo();
// End Cross Module References
class UScriptStruct* FCatalogGetRegionResponseParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COSMOSWEBAPI_API uint32 Get_Z_Construct_UScriptStruct_FCatalogGetRegionResponseParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCatalogGetRegionResponseParam, Z_Construct_UPackage__Script_CosmosWebApi(), TEXT("CatalogGetRegionResponseParam"), sizeof(FCatalogGetRegionResponseParam), Get_Z_Construct_UScriptStruct_FCatalogGetRegionResponseParam_Hash());
	}
	return Singleton;
}
template<> COSMOSWEBAPI_API UScriptStruct* StaticStruct<FCatalogGetRegionResponseParam>()
{
	return FCatalogGetRegionResponseParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCatalogGetRegionResponseParam(FCatalogGetRegionResponseParam::StaticStruct, TEXT("/Script/CosmosWebApi"), TEXT("CatalogGetRegionResponseParam"), false, nullptr, nullptr);
static struct FScriptStruct_CosmosWebApi_StaticRegisterNativesFCatalogGetRegionResponseParam
{
	FScriptStruct_CosmosWebApi_StaticRegisterNativesFCatalogGetRegionResponseParam()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CatalogGetRegionResponseParam")),new UScriptStruct::TCppStructOps<FCatalogGetRegionResponseParam>);
	}
} ScriptStruct_CosmosWebApi_StaticRegisterNativesFCatalogGetRegionResponseParam;
	struct Z_Construct_UScriptStruct_FCatalogGetRegionResponseParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_regionList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_regionList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_regionList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Status;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogGetRegionResponseParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CatalogGetRegionResponseParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCatalogGetRegionResponseParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCatalogGetRegionResponseParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogGetRegionResponseParam_Statics::NewProp_regionList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatalogGetRegionResponseParam" },
		{ "ModuleRelativePath", "Public/CatalogGetRegionResponseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCatalogGetRegionResponseParam_Statics::NewProp_regionList = { "regionList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCatalogGetRegionResponseParam, regionList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogGetRegionResponseParam_Statics::NewProp_regionList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogGetRegionResponseParam_Statics::NewProp_regionList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCatalogGetRegionResponseParam_Statics::NewProp_regionList_Inner = { "regionList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCosmosRegionInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogGetRegionResponseParam_Statics::NewProp_Status_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatalogGetRegionResponseParam" },
		{ "ModuleRelativePath", "Public/CatalogGetRegionResponseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCatalogGetRegionResponseParam_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCatalogGetRegionResponseParam, Status), METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogGetRegionResponseParam_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogGetRegionResponseParam_Statics::NewProp_Status_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCatalogGetRegionResponseParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogGetRegionResponseParam_Statics::NewProp_regionList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogGetRegionResponseParam_Statics::NewProp_regionList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogGetRegionResponseParam_Statics::NewProp_Status,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCatalogGetRegionResponseParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CosmosWebApi,
		nullptr,
		&NewStructOps,
		"CatalogGetRegionResponseParam",
		sizeof(FCatalogGetRegionResponseParam),
		alignof(FCatalogGetRegionResponseParam),
		Z_Construct_UScriptStruct_FCatalogGetRegionResponseParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogGetRegionResponseParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogGetRegionResponseParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogGetRegionResponseParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCatalogGetRegionResponseParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCatalogGetRegionResponseParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CosmosWebApi();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CatalogGetRegionResponseParam"), sizeof(FCatalogGetRegionResponseParam), Get_Z_Construct_UScriptStruct_FCatalogGetRegionResponseParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCatalogGetRegionResponseParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCatalogGetRegionResponseParam_Hash() { return 1361976104U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
