// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CosmosWebApi/Public/UserLoginResponseParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUserLoginResponseParam() {}
// Cross Module References
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FUserLoginResponseParam();
	UPackage* Z_Construct_UPackage__Script_CosmosWebApi();
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FUserInfo();
// End Cross Module References
class UScriptStruct* FUserLoginResponseParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COSMOSWEBAPI_API uint32 Get_Z_Construct_UScriptStruct_FUserLoginResponseParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUserLoginResponseParam, Z_Construct_UPackage__Script_CosmosWebApi(), TEXT("UserLoginResponseParam"), sizeof(FUserLoginResponseParam), Get_Z_Construct_UScriptStruct_FUserLoginResponseParam_Hash());
	}
	return Singleton;
}
template<> COSMOSWEBAPI_API UScriptStruct* StaticStruct<FUserLoginResponseParam>()
{
	return FUserLoginResponseParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUserLoginResponseParam(FUserLoginResponseParam::StaticStruct, TEXT("/Script/CosmosWebApi"), TEXT("UserLoginResponseParam"), false, nullptr, nullptr);
static struct FScriptStruct_CosmosWebApi_StaticRegisterNativesFUserLoginResponseParam
{
	FScriptStruct_CosmosWebApi_StaticRegisterNativesFUserLoginResponseParam()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("UserLoginResponseParam")),new UScriptStruct::TCppStructOps<FUserLoginResponseParam>);
	}
} ScriptStruct_CosmosWebApi_StaticRegisterNativesFUserLoginResponseParam;
	struct Z_Construct_UScriptStruct_FUserLoginResponseParam_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserLoginResponseParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UserLoginResponseParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUserLoginResponseParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUserLoginResponseParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserLoginResponseParam_Statics::NewProp_UserInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UserLoginResponseParam" },
		{ "ModuleRelativePath", "Public/UserLoginResponseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUserLoginResponseParam_Statics::NewProp_UserInfo = { "UserInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserLoginResponseParam, UserInfo), Z_Construct_UScriptStruct_FUserInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FUserLoginResponseParam_Statics::NewProp_UserInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserLoginResponseParam_Statics::NewProp_UserInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserLoginResponseParam_Statics::NewProp_Status_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UserLoginResponseParam" },
		{ "ModuleRelativePath", "Public/UserLoginResponseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUserLoginResponseParam_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserLoginResponseParam, Status), METADATA_PARAMS(Z_Construct_UScriptStruct_FUserLoginResponseParam_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserLoginResponseParam_Statics::NewProp_Status_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUserLoginResponseParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserLoginResponseParam_Statics::NewProp_UserInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserLoginResponseParam_Statics::NewProp_Status,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUserLoginResponseParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CosmosWebApi,
		nullptr,
		&NewStructOps,
		"UserLoginResponseParam",
		sizeof(FUserLoginResponseParam),
		alignof(FUserLoginResponseParam),
		Z_Construct_UScriptStruct_FUserLoginResponseParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserLoginResponseParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUserLoginResponseParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserLoginResponseParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUserLoginResponseParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUserLoginResponseParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CosmosWebApi();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UserLoginResponseParam"), sizeof(FUserLoginResponseParam), Get_Z_Construct_UScriptStruct_FUserLoginResponseParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUserLoginResponseParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUserLoginResponseParam_Hash() { return 1896985008U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
