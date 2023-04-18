// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CosmosWebApi/Public/UserConvertUserIdResponseParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUserConvertUserIdResponseParam() {}
// Cross Module References
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FUserConvertUserIdResponseParam();
	UPackage* Z_Construct_UPackage__Script_CosmosWebApi();
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FUserConvertInfo();
// End Cross Module References
class UScriptStruct* FUserConvertUserIdResponseParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COSMOSWEBAPI_API uint32 Get_Z_Construct_UScriptStruct_FUserConvertUserIdResponseParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUserConvertUserIdResponseParam, Z_Construct_UPackage__Script_CosmosWebApi(), TEXT("UserConvertUserIdResponseParam"), sizeof(FUserConvertUserIdResponseParam), Get_Z_Construct_UScriptStruct_FUserConvertUserIdResponseParam_Hash());
	}
	return Singleton;
}
template<> COSMOSWEBAPI_API UScriptStruct* StaticStruct<FUserConvertUserIdResponseParam>()
{
	return FUserConvertUserIdResponseParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUserConvertUserIdResponseParam(FUserConvertUserIdResponseParam::StaticStruct, TEXT("/Script/CosmosWebApi"), TEXT("UserConvertUserIdResponseParam"), false, nullptr, nullptr);
static struct FScriptStruct_CosmosWebApi_StaticRegisterNativesFUserConvertUserIdResponseParam
{
	FScriptStruct_CosmosWebApi_StaticRegisterNativesFUserConvertUserIdResponseParam()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("UserConvertUserIdResponseParam")),new UScriptStruct::TCppStructOps<FUserConvertUserIdResponseParam>);
	}
} ScriptStruct_CosmosWebApi_StaticRegisterNativesFUserConvertUserIdResponseParam;
	struct Z_Construct_UScriptStruct_FUserConvertUserIdResponseParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserConvertInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UserConvertInfo;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UserConvertInfo_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Status;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserConvertUserIdResponseParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UserConvertUserIdResponseParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUserConvertUserIdResponseParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUserConvertUserIdResponseParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserConvertUserIdResponseParam_Statics::NewProp_UserConvertInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UserConvertUserIdResponseParam" },
		{ "ModuleRelativePath", "Public/UserConvertUserIdResponseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUserConvertUserIdResponseParam_Statics::NewProp_UserConvertInfo = { "UserConvertInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserConvertUserIdResponseParam, UserConvertInfo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FUserConvertUserIdResponseParam_Statics::NewProp_UserConvertInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserConvertUserIdResponseParam_Statics::NewProp_UserConvertInfo_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUserConvertUserIdResponseParam_Statics::NewProp_UserConvertInfo_Inner = { "UserConvertInfo", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FUserConvertInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserConvertUserIdResponseParam_Statics::NewProp_Status_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UserConvertUserIdResponseParam" },
		{ "ModuleRelativePath", "Public/UserConvertUserIdResponseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUserConvertUserIdResponseParam_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserConvertUserIdResponseParam, Status), METADATA_PARAMS(Z_Construct_UScriptStruct_FUserConvertUserIdResponseParam_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserConvertUserIdResponseParam_Statics::NewProp_Status_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUserConvertUserIdResponseParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserConvertUserIdResponseParam_Statics::NewProp_UserConvertInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserConvertUserIdResponseParam_Statics::NewProp_UserConvertInfo_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserConvertUserIdResponseParam_Statics::NewProp_Status,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUserConvertUserIdResponseParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CosmosWebApi,
		nullptr,
		&NewStructOps,
		"UserConvertUserIdResponseParam",
		sizeof(FUserConvertUserIdResponseParam),
		alignof(FUserConvertUserIdResponseParam),
		Z_Construct_UScriptStruct_FUserConvertUserIdResponseParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserConvertUserIdResponseParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUserConvertUserIdResponseParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserConvertUserIdResponseParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUserConvertUserIdResponseParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUserConvertUserIdResponseParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CosmosWebApi();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UserConvertUserIdResponseParam"), sizeof(FUserConvertUserIdResponseParam), Get_Z_Construct_UScriptStruct_FUserConvertUserIdResponseParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUserConvertUserIdResponseParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUserConvertUserIdResponseParam_Hash() { return 3386657852U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
