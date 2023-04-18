// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CosmosWebApi/Public/ItemGetOwnedResponseParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemGetOwnedResponseParam() {}
// Cross Module References
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FItemGetOwnedResponseParam();
	UPackage* Z_Construct_UPackage__Script_CosmosWebApi();
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FOwnedItemInfo();
// End Cross Module References
class UScriptStruct* FItemGetOwnedResponseParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COSMOSWEBAPI_API uint32 Get_Z_Construct_UScriptStruct_FItemGetOwnedResponseParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemGetOwnedResponseParam, Z_Construct_UPackage__Script_CosmosWebApi(), TEXT("ItemGetOwnedResponseParam"), sizeof(FItemGetOwnedResponseParam), Get_Z_Construct_UScriptStruct_FItemGetOwnedResponseParam_Hash());
	}
	return Singleton;
}
template<> COSMOSWEBAPI_API UScriptStruct* StaticStruct<FItemGetOwnedResponseParam>()
{
	return FItemGetOwnedResponseParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FItemGetOwnedResponseParam(FItemGetOwnedResponseParam::StaticStruct, TEXT("/Script/CosmosWebApi"), TEXT("ItemGetOwnedResponseParam"), false, nullptr, nullptr);
static struct FScriptStruct_CosmosWebApi_StaticRegisterNativesFItemGetOwnedResponseParam
{
	FScriptStruct_CosmosWebApi_StaticRegisterNativesFItemGetOwnedResponseParam()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ItemGetOwnedResponseParam")),new UScriptStruct::TCppStructOps<FItemGetOwnedResponseParam>);
	}
} ScriptStruct_CosmosWebApi_StaticRegisterNativesFItemGetOwnedResponseParam;
	struct Z_Construct_UScriptStruct_FItemGetOwnedResponseParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_itemList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_itemList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_itemList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Status;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemGetOwnedResponseParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ItemGetOwnedResponseParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FItemGetOwnedResponseParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemGetOwnedResponseParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemGetOwnedResponseParam_Statics::NewProp_itemList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ItemGetOwnedResponseParam" },
		{ "ModuleRelativePath", "Public/ItemGetOwnedResponseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FItemGetOwnedResponseParam_Statics::NewProp_itemList = { "itemList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemGetOwnedResponseParam, itemList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemGetOwnedResponseParam_Statics::NewProp_itemList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemGetOwnedResponseParam_Statics::NewProp_itemList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FItemGetOwnedResponseParam_Statics::NewProp_itemList_Inner = { "itemList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOwnedItemInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemGetOwnedResponseParam_Statics::NewProp_Status_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ItemGetOwnedResponseParam" },
		{ "ModuleRelativePath", "Public/ItemGetOwnedResponseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemGetOwnedResponseParam_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemGetOwnedResponseParam, Status), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemGetOwnedResponseParam_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemGetOwnedResponseParam_Statics::NewProp_Status_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemGetOwnedResponseParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemGetOwnedResponseParam_Statics::NewProp_itemList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemGetOwnedResponseParam_Statics::NewProp_itemList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemGetOwnedResponseParam_Statics::NewProp_Status,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemGetOwnedResponseParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CosmosWebApi,
		nullptr,
		&NewStructOps,
		"ItemGetOwnedResponseParam",
		sizeof(FItemGetOwnedResponseParam),
		alignof(FItemGetOwnedResponseParam),
		Z_Construct_UScriptStruct_FItemGetOwnedResponseParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemGetOwnedResponseParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FItemGetOwnedResponseParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemGetOwnedResponseParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FItemGetOwnedResponseParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FItemGetOwnedResponseParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CosmosWebApi();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ItemGetOwnedResponseParam"), sizeof(FItemGetOwnedResponseParam), Get_Z_Construct_UScriptStruct_FItemGetOwnedResponseParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FItemGetOwnedResponseParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FItemGetOwnedResponseParam_Hash() { return 2248976389U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
