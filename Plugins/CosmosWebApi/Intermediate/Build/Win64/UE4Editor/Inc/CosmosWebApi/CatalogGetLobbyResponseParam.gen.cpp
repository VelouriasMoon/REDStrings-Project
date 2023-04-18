// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CosmosWebApi/Public/CatalogGetLobbyResponseParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCatalogGetLobbyResponseParam() {}
// Cross Module References
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FCatalogGetLobbyResponseParam();
	UPackage* Z_Construct_UPackage__Script_CosmosWebApi();
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FLobbyInfo();
// End Cross Module References
class UScriptStruct* FCatalogGetLobbyResponseParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COSMOSWEBAPI_API uint32 Get_Z_Construct_UScriptStruct_FCatalogGetLobbyResponseParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCatalogGetLobbyResponseParam, Z_Construct_UPackage__Script_CosmosWebApi(), TEXT("CatalogGetLobbyResponseParam"), sizeof(FCatalogGetLobbyResponseParam), Get_Z_Construct_UScriptStruct_FCatalogGetLobbyResponseParam_Hash());
	}
	return Singleton;
}
template<> COSMOSWEBAPI_API UScriptStruct* StaticStruct<FCatalogGetLobbyResponseParam>()
{
	return FCatalogGetLobbyResponseParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCatalogGetLobbyResponseParam(FCatalogGetLobbyResponseParam::StaticStruct, TEXT("/Script/CosmosWebApi"), TEXT("CatalogGetLobbyResponseParam"), false, nullptr, nullptr);
static struct FScriptStruct_CosmosWebApi_StaticRegisterNativesFCatalogGetLobbyResponseParam
{
	FScriptStruct_CosmosWebApi_StaticRegisterNativesFCatalogGetLobbyResponseParam()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CatalogGetLobbyResponseParam")),new UScriptStruct::TCppStructOps<FCatalogGetLobbyResponseParam>);
	}
} ScriptStruct_CosmosWebApi_StaticRegisterNativesFCatalogGetLobbyResponseParam;
	struct Z_Construct_UScriptStruct_FCatalogGetLobbyResponseParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lobbyList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_lobbyList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_lobbyList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Status;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogGetLobbyResponseParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CatalogGetLobbyResponseParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCatalogGetLobbyResponseParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCatalogGetLobbyResponseParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogGetLobbyResponseParam_Statics::NewProp_lobbyList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatalogGetLobbyResponseParam" },
		{ "ModuleRelativePath", "Public/CatalogGetLobbyResponseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCatalogGetLobbyResponseParam_Statics::NewProp_lobbyList = { "lobbyList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCatalogGetLobbyResponseParam, lobbyList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogGetLobbyResponseParam_Statics::NewProp_lobbyList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogGetLobbyResponseParam_Statics::NewProp_lobbyList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCatalogGetLobbyResponseParam_Statics::NewProp_lobbyList_Inner = { "lobbyList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLobbyInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogGetLobbyResponseParam_Statics::NewProp_Status_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatalogGetLobbyResponseParam" },
		{ "ModuleRelativePath", "Public/CatalogGetLobbyResponseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCatalogGetLobbyResponseParam_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCatalogGetLobbyResponseParam, Status), METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogGetLobbyResponseParam_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogGetLobbyResponseParam_Statics::NewProp_Status_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCatalogGetLobbyResponseParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogGetLobbyResponseParam_Statics::NewProp_lobbyList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogGetLobbyResponseParam_Statics::NewProp_lobbyList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogGetLobbyResponseParam_Statics::NewProp_Status,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCatalogGetLobbyResponseParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CosmosWebApi,
		nullptr,
		&NewStructOps,
		"CatalogGetLobbyResponseParam",
		sizeof(FCatalogGetLobbyResponseParam),
		alignof(FCatalogGetLobbyResponseParam),
		Z_Construct_UScriptStruct_FCatalogGetLobbyResponseParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogGetLobbyResponseParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogGetLobbyResponseParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogGetLobbyResponseParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCatalogGetLobbyResponseParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCatalogGetLobbyResponseParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CosmosWebApi();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CatalogGetLobbyResponseParam"), sizeof(FCatalogGetLobbyResponseParam), Get_Z_Construct_UScriptStruct_FCatalogGetLobbyResponseParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCatalogGetLobbyResponseParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCatalogGetLobbyResponseParam_Hash() { return 3483724211U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
