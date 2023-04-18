// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CosmosWebApi/Public/CosmosUserData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCosmosUserData() {}
// Cross Module References
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FCosmosUserData();
	UPackage* Z_Construct_UPackage__Script_CosmosWebApi();
// End Cross Module References
class UScriptStruct* FCosmosUserData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COSMOSWEBAPI_API uint32 Get_Z_Construct_UScriptStruct_FCosmosUserData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCosmosUserData, Z_Construct_UPackage__Script_CosmosWebApi(), TEXT("CosmosUserData"), sizeof(FCosmosUserData), Get_Z_Construct_UScriptStruct_FCosmosUserData_Hash());
	}
	return Singleton;
}
template<> COSMOSWEBAPI_API UScriptStruct* StaticStruct<FCosmosUserData>()
{
	return FCosmosUserData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCosmosUserData(FCosmosUserData::StaticStruct, TEXT("/Script/CosmosWebApi"), TEXT("CosmosUserData"), false, nullptr, nullptr);
static struct FScriptStruct_CosmosWebApi_StaticRegisterNativesFCosmosUserData
{
	FScriptStruct_CosmosWebApi_StaticRegisterNativesFCosmosUserData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CosmosUserData")),new UScriptStruct::TCppStructOps<FCosmosUserData>);
	}
} ScriptStruct_CosmosWebApi_StaticRegisterNativesFCosmosUserData;
	struct Z_Construct_UScriptStruct_FCosmosUserData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_registerStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_registerStatus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_userId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_userId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCosmosUserData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CosmosUserData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCosmosUserData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCosmosUserData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCosmosUserData_Statics::NewProp_registerStatus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CosmosUserData" },
		{ "ModuleRelativePath", "Public/CosmosUserData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCosmosUserData_Statics::NewProp_registerStatus = { "registerStatus", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCosmosUserData, registerStatus), METADATA_PARAMS(Z_Construct_UScriptStruct_FCosmosUserData_Statics::NewProp_registerStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCosmosUserData_Statics::NewProp_registerStatus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCosmosUserData_Statics::NewProp_userId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CosmosUserData" },
		{ "ModuleRelativePath", "Public/CosmosUserData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCosmosUserData_Statics::NewProp_userId = { "userId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCosmosUserData, userId), METADATA_PARAMS(Z_Construct_UScriptStruct_FCosmosUserData_Statics::NewProp_userId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCosmosUserData_Statics::NewProp_userId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCosmosUserData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCosmosUserData_Statics::NewProp_registerStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCosmosUserData_Statics::NewProp_userId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCosmosUserData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CosmosWebApi,
		nullptr,
		&NewStructOps,
		"CosmosUserData",
		sizeof(FCosmosUserData),
		alignof(FCosmosUserData),
		Z_Construct_UScriptStruct_FCosmosUserData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCosmosUserData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCosmosUserData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCosmosUserData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCosmosUserData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCosmosUserData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CosmosWebApi();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CosmosUserData"), sizeof(FCosmosUserData), Get_Z_Construct_UScriptStruct_FCosmosUserData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCosmosUserData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCosmosUserData_Hash() { return 3643839155U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
