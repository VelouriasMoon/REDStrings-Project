// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CosmosWebApi/Public/LoginBonusGetListResponseParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoginBonusGetListResponseParam() {}
// Cross Module References
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FLoginBonusGetListResponseParam();
	UPackage* Z_Construct_UPackage__Script_CosmosWebApi();
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FLoginBonus();
// End Cross Module References
class UScriptStruct* FLoginBonusGetListResponseParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COSMOSWEBAPI_API uint32 Get_Z_Construct_UScriptStruct_FLoginBonusGetListResponseParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLoginBonusGetListResponseParam, Z_Construct_UPackage__Script_CosmosWebApi(), TEXT("LoginBonusGetListResponseParam"), sizeof(FLoginBonusGetListResponseParam), Get_Z_Construct_UScriptStruct_FLoginBonusGetListResponseParam_Hash());
	}
	return Singleton;
}
template<> COSMOSWEBAPI_API UScriptStruct* StaticStruct<FLoginBonusGetListResponseParam>()
{
	return FLoginBonusGetListResponseParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLoginBonusGetListResponseParam(FLoginBonusGetListResponseParam::StaticStruct, TEXT("/Script/CosmosWebApi"), TEXT("LoginBonusGetListResponseParam"), false, nullptr, nullptr);
static struct FScriptStruct_CosmosWebApi_StaticRegisterNativesFLoginBonusGetListResponseParam
{
	FScriptStruct_CosmosWebApi_StaticRegisterNativesFLoginBonusGetListResponseParam()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LoginBonusGetListResponseParam")),new UScriptStruct::TCppStructOps<FLoginBonusGetListResponseParam>);
	}
} ScriptStruct_CosmosWebApi_StaticRegisterNativesFLoginBonusGetListResponseParam;
	struct Z_Construct_UScriptStruct_FLoginBonusGetListResponseParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_loginBonusList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_loginBonusList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_loginBonusList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Status;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoginBonusGetListResponseParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LoginBonusGetListResponseParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLoginBonusGetListResponseParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLoginBonusGetListResponseParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoginBonusGetListResponseParam_Statics::NewProp_loginBonusList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LoginBonusGetListResponseParam" },
		{ "ModuleRelativePath", "Public/LoginBonusGetListResponseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLoginBonusGetListResponseParam_Statics::NewProp_loginBonusList = { "loginBonusList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoginBonusGetListResponseParam, loginBonusList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLoginBonusGetListResponseParam_Statics::NewProp_loginBonusList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoginBonusGetListResponseParam_Statics::NewProp_loginBonusList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLoginBonusGetListResponseParam_Statics::NewProp_loginBonusList_Inner = { "loginBonusList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLoginBonus, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoginBonusGetListResponseParam_Statics::NewProp_Status_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LoginBonusGetListResponseParam" },
		{ "ModuleRelativePath", "Public/LoginBonusGetListResponseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLoginBonusGetListResponseParam_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoginBonusGetListResponseParam, Status), METADATA_PARAMS(Z_Construct_UScriptStruct_FLoginBonusGetListResponseParam_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoginBonusGetListResponseParam_Statics::NewProp_Status_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLoginBonusGetListResponseParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoginBonusGetListResponseParam_Statics::NewProp_loginBonusList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoginBonusGetListResponseParam_Statics::NewProp_loginBonusList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoginBonusGetListResponseParam_Statics::NewProp_Status,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLoginBonusGetListResponseParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CosmosWebApi,
		nullptr,
		&NewStructOps,
		"LoginBonusGetListResponseParam",
		sizeof(FLoginBonusGetListResponseParam),
		alignof(FLoginBonusGetListResponseParam),
		Z_Construct_UScriptStruct_FLoginBonusGetListResponseParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoginBonusGetListResponseParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLoginBonusGetListResponseParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoginBonusGetListResponseParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLoginBonusGetListResponseParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLoginBonusGetListResponseParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CosmosWebApi();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LoginBonusGetListResponseParam"), sizeof(FLoginBonusGetListResponseParam), Get_Z_Construct_UScriptStruct_FLoginBonusGetListResponseParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLoginBonusGetListResponseParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLoginBonusGetListResponseParam_Hash() { return 2101366221U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
