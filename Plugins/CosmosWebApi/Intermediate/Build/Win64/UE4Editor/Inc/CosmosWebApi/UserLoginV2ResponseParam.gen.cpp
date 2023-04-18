// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CosmosWebApi/Public/UserLoginV2ResponseParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUserLoginV2ResponseParam() {}
// Cross Module References
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FUserLoginV2ResponseParam();
	UPackage* Z_Construct_UPackage__Script_CosmosWebApi();
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FCosmosUserData();
// End Cross Module References
class UScriptStruct* FUserLoginV2ResponseParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COSMOSWEBAPI_API uint32 Get_Z_Construct_UScriptStruct_FUserLoginV2ResponseParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUserLoginV2ResponseParam, Z_Construct_UPackage__Script_CosmosWebApi(), TEXT("UserLoginV2ResponseParam"), sizeof(FUserLoginV2ResponseParam), Get_Z_Construct_UScriptStruct_FUserLoginV2ResponseParam_Hash());
	}
	return Singleton;
}
template<> COSMOSWEBAPI_API UScriptStruct* StaticStruct<FUserLoginV2ResponseParam>()
{
	return FUserLoginV2ResponseParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUserLoginV2ResponseParam(FUserLoginV2ResponseParam::StaticStruct, TEXT("/Script/CosmosWebApi"), TEXT("UserLoginV2ResponseParam"), false, nullptr, nullptr);
static struct FScriptStruct_CosmosWebApi_StaticRegisterNativesFUserLoginV2ResponseParam
{
	FScriptStruct_CosmosWebApi_StaticRegisterNativesFUserLoginV2ResponseParam()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("UserLoginV2ResponseParam")),new UScriptStruct::TCppStructOps<FUserLoginV2ResponseParam>);
	}
} ScriptStruct_CosmosWebApi_StaticRegisterNativesFUserLoginV2ResponseParam;
	struct Z_Construct_UScriptStruct_FUserLoginV2ResponseParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UserInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Status;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserLoginV2ResponseParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UserLoginV2ResponseParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUserLoginV2ResponseParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUserLoginV2ResponseParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserLoginV2ResponseParam_Statics::NewProp_UserInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UserLoginV2ResponseParam" },
		{ "ModuleRelativePath", "Public/UserLoginV2ResponseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUserLoginV2ResponseParam_Statics::NewProp_UserInfo = { "UserInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserLoginV2ResponseParam, UserInfo), Z_Construct_UScriptStruct_FCosmosUserData, METADATA_PARAMS(Z_Construct_UScriptStruct_FUserLoginV2ResponseParam_Statics::NewProp_UserInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserLoginV2ResponseParam_Statics::NewProp_UserInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserLoginV2ResponseParam_Statics::NewProp_Status_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UserLoginV2ResponseParam" },
		{ "ModuleRelativePath", "Public/UserLoginV2ResponseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUserLoginV2ResponseParam_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserLoginV2ResponseParam, Status), METADATA_PARAMS(Z_Construct_UScriptStruct_FUserLoginV2ResponseParam_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserLoginV2ResponseParam_Statics::NewProp_Status_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUserLoginV2ResponseParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserLoginV2ResponseParam_Statics::NewProp_UserInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserLoginV2ResponseParam_Statics::NewProp_Status,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUserLoginV2ResponseParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CosmosWebApi,
		nullptr,
		&NewStructOps,
		"UserLoginV2ResponseParam",
		sizeof(FUserLoginV2ResponseParam),
		alignof(FUserLoginV2ResponseParam),
		Z_Construct_UScriptStruct_FUserLoginV2ResponseParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserLoginV2ResponseParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUserLoginV2ResponseParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserLoginV2ResponseParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUserLoginV2ResponseParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUserLoginV2ResponseParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CosmosWebApi();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UserLoginV2ResponseParam"), sizeof(FUserLoginV2ResponseParam), Get_Z_Construct_UScriptStruct_FUserLoginV2ResponseParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUserLoginV2ResponseParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUserLoginV2ResponseParam_Hash() { return 125445183U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
