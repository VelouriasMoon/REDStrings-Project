// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CosmosWebApi/Public/RootBoxRunResponseParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRootBoxRunResponseParam() {}
// Cross Module References
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FRootBoxRunResponseParam();
	UPackage* Z_Construct_UPackage__Script_CosmosWebApi();
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FRootBoxResultInfo();
// End Cross Module References
class UScriptStruct* FRootBoxRunResponseParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COSMOSWEBAPI_API uint32 Get_Z_Construct_UScriptStruct_FRootBoxRunResponseParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRootBoxRunResponseParam, Z_Construct_UPackage__Script_CosmosWebApi(), TEXT("RootBoxRunResponseParam"), sizeof(FRootBoxRunResponseParam), Get_Z_Construct_UScriptStruct_FRootBoxRunResponseParam_Hash());
	}
	return Singleton;
}
template<> COSMOSWEBAPI_API UScriptStruct* StaticStruct<FRootBoxRunResponseParam>()
{
	return FRootBoxRunResponseParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRootBoxRunResponseParam(FRootBoxRunResponseParam::StaticStruct, TEXT("/Script/CosmosWebApi"), TEXT("RootBoxRunResponseParam"), false, nullptr, nullptr);
static struct FScriptStruct_CosmosWebApi_StaticRegisterNativesFRootBoxRunResponseParam
{
	FScriptStruct_CosmosWebApi_StaticRegisterNativesFRootBoxRunResponseParam()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RootBoxRunResponseParam")),new UScriptStruct::TCppStructOps<FRootBoxRunResponseParam>);
	}
} ScriptStruct_CosmosWebApi_StaticRegisterNativesFRootBoxRunResponseParam;
	struct Z_Construct_UScriptStruct_FRootBoxRunResponseParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rootboxResultList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_rootboxResultList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rootboxResultList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_totalCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_totalCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Status;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootBoxRunResponseParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RootBoxRunResponseParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRootBoxRunResponseParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRootBoxRunResponseParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootBoxRunResponseParam_Statics::NewProp_rootboxResultList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RootBoxRunResponseParam" },
		{ "ModuleRelativePath", "Public/RootBoxRunResponseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRootBoxRunResponseParam_Statics::NewProp_rootboxResultList = { "rootboxResultList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRootBoxRunResponseParam, rootboxResultList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRootBoxRunResponseParam_Statics::NewProp_rootboxResultList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootBoxRunResponseParam_Statics::NewProp_rootboxResultList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRootBoxRunResponseParam_Statics::NewProp_rootboxResultList_Inner = { "rootboxResultList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRootBoxResultInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootBoxRunResponseParam_Statics::NewProp_totalCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RootBoxRunResponseParam" },
		{ "ModuleRelativePath", "Public/RootBoxRunResponseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRootBoxRunResponseParam_Statics::NewProp_totalCount = { "totalCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRootBoxRunResponseParam, totalCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FRootBoxRunResponseParam_Statics::NewProp_totalCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootBoxRunResponseParam_Statics::NewProp_totalCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootBoxRunResponseParam_Statics::NewProp_Status_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RootBoxRunResponseParam" },
		{ "ModuleRelativePath", "Public/RootBoxRunResponseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRootBoxRunResponseParam_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRootBoxRunResponseParam, Status), METADATA_PARAMS(Z_Construct_UScriptStruct_FRootBoxRunResponseParam_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootBoxRunResponseParam_Statics::NewProp_Status_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRootBoxRunResponseParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootBoxRunResponseParam_Statics::NewProp_rootboxResultList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootBoxRunResponseParam_Statics::NewProp_rootboxResultList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootBoxRunResponseParam_Statics::NewProp_totalCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootBoxRunResponseParam_Statics::NewProp_Status,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRootBoxRunResponseParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CosmosWebApi,
		nullptr,
		&NewStructOps,
		"RootBoxRunResponseParam",
		sizeof(FRootBoxRunResponseParam),
		alignof(FRootBoxRunResponseParam),
		Z_Construct_UScriptStruct_FRootBoxRunResponseParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootBoxRunResponseParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRootBoxRunResponseParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootBoxRunResponseParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRootBoxRunResponseParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRootBoxRunResponseParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CosmosWebApi();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RootBoxRunResponseParam"), sizeof(FRootBoxRunResponseParam), Get_Z_Construct_UScriptStruct_FRootBoxRunResponseParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRootBoxRunResponseParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRootBoxRunResponseParam_Hash() { return 1172893504U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
