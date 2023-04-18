// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CosmosWebApi/Public/LoginBonus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoginBonus() {}
// Cross Module References
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FLoginBonus();
	UPackage* Z_Construct_UPackage__Script_CosmosWebApi();
// End Cross Module References
class UScriptStruct* FLoginBonus::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COSMOSWEBAPI_API uint32 Get_Z_Construct_UScriptStruct_FLoginBonus_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLoginBonus, Z_Construct_UPackage__Script_CosmosWebApi(), TEXT("LoginBonus"), sizeof(FLoginBonus), Get_Z_Construct_UScriptStruct_FLoginBonus_Hash());
	}
	return Singleton;
}
template<> COSMOSWEBAPI_API UScriptStruct* StaticStruct<FLoginBonus>()
{
	return FLoginBonus::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLoginBonus(FLoginBonus::StaticStruct, TEXT("/Script/CosmosWebApi"), TEXT("LoginBonus"), false, nullptr, nullptr);
static struct FScriptStruct_CosmosWebApi_StaticRegisterNativesFLoginBonus
{
	FScriptStruct_CosmosWebApi_StaticRegisterNativesFLoginBonus()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LoginBonus")),new UScriptStruct::TCppStructOps<FLoginBonus>);
	}
} ScriptStruct_CosmosWebApi_StaticRegisterNativesFLoginBonus;
	struct Z_Construct_UScriptStruct_FLoginBonus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_endTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_endTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoginBonusInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LoginBonusInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_loginBonusType_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_loginBonusType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_loginBonusId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_loginBonusId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoginBonus_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LoginBonus.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLoginBonus_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLoginBonus>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoginBonus_Statics::NewProp_endTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LoginBonus" },
		{ "ModuleRelativePath", "Public/LoginBonus.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLoginBonus_Statics::NewProp_endTime = { "endTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoginBonus, endTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FLoginBonus_Statics::NewProp_endTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoginBonus_Statics::NewProp_endTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoginBonus_Statics::NewProp_StartTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LoginBonus" },
		{ "ModuleRelativePath", "Public/LoginBonus.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLoginBonus_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoginBonus, StartTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FLoginBonus_Statics::NewProp_StartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoginBonus_Statics::NewProp_StartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoginBonus_Statics::NewProp_LoginBonusInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LoginBonus" },
		{ "ModuleRelativePath", "Public/LoginBonus.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLoginBonus_Statics::NewProp_LoginBonusInfo = { "LoginBonusInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoginBonus, LoginBonusInfo), METADATA_PARAMS(Z_Construct_UScriptStruct_FLoginBonus_Statics::NewProp_LoginBonusInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoginBonus_Statics::NewProp_LoginBonusInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoginBonus_Statics::NewProp_loginBonusType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LoginBonus" },
		{ "ModuleRelativePath", "Public/LoginBonus.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLoginBonus_Statics::NewProp_loginBonusType = { "loginBonusType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoginBonus, loginBonusType), METADATA_PARAMS(Z_Construct_UScriptStruct_FLoginBonus_Statics::NewProp_loginBonusType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoginBonus_Statics::NewProp_loginBonusType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoginBonus_Statics::NewProp_loginBonusId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LoginBonus" },
		{ "ModuleRelativePath", "Public/LoginBonus.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLoginBonus_Statics::NewProp_loginBonusId = { "loginBonusId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoginBonus, loginBonusId), METADATA_PARAMS(Z_Construct_UScriptStruct_FLoginBonus_Statics::NewProp_loginBonusId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoginBonus_Statics::NewProp_loginBonusId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLoginBonus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoginBonus_Statics::NewProp_endTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoginBonus_Statics::NewProp_StartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoginBonus_Statics::NewProp_LoginBonusInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoginBonus_Statics::NewProp_loginBonusType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoginBonus_Statics::NewProp_loginBonusId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLoginBonus_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CosmosWebApi,
		nullptr,
		&NewStructOps,
		"LoginBonus",
		sizeof(FLoginBonus),
		alignof(FLoginBonus),
		Z_Construct_UScriptStruct_FLoginBonus_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoginBonus_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLoginBonus_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoginBonus_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLoginBonus()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLoginBonus_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CosmosWebApi();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LoginBonus"), sizeof(FLoginBonus), Get_Z_Construct_UScriptStruct_FLoginBonus_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLoginBonus_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLoginBonus_Hash() { return 2527449145U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
