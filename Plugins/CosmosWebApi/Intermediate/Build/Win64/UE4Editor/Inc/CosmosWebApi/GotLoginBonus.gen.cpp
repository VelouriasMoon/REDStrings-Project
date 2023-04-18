// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CosmosWebApi/Public/GotLoginBonus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGotLoginBonus() {}
// Cross Module References
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FGotLoginBonus();
	UPackage* Z_Construct_UPackage__Script_CosmosWebApi();
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FGetItemInfo();
// End Cross Module References
class UScriptStruct* FGotLoginBonus::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COSMOSWEBAPI_API uint32 Get_Z_Construct_UScriptStruct_FGotLoginBonus_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGotLoginBonus, Z_Construct_UPackage__Script_CosmosWebApi(), TEXT("GotLoginBonus"), sizeof(FGotLoginBonus), Get_Z_Construct_UScriptStruct_FGotLoginBonus_Hash());
	}
	return Singleton;
}
template<> COSMOSWEBAPI_API UScriptStruct* StaticStruct<FGotLoginBonus>()
{
	return FGotLoginBonus::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGotLoginBonus(FGotLoginBonus::StaticStruct, TEXT("/Script/CosmosWebApi"), TEXT("GotLoginBonus"), false, nullptr, nullptr);
static struct FScriptStruct_CosmosWebApi_StaticRegisterNativesFGotLoginBonus
{
	FScriptStruct_CosmosWebApi_StaticRegisterNativesFGotLoginBonus()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GotLoginBonus")),new UScriptStruct::TCppStructOps<FGotLoginBonus>);
	}
} ScriptStruct_CosmosWebApi_StaticRegisterNativesFGotLoginBonus;
	struct Z_Construct_UScriptStruct_FGotLoginBonus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GetItemList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GetItemList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GetItemList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_loginBonusId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_loginBonusId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGotLoginBonus_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GotLoginBonus.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGotLoginBonus_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGotLoginBonus>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGotLoginBonus_Statics::NewProp_GetItemList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GotLoginBonus" },
		{ "ModuleRelativePath", "Public/GotLoginBonus.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGotLoginBonus_Statics::NewProp_GetItemList = { "GetItemList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGotLoginBonus, GetItemList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGotLoginBonus_Statics::NewProp_GetItemList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGotLoginBonus_Statics::NewProp_GetItemList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGotLoginBonus_Statics::NewProp_GetItemList_Inner = { "GetItemList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGetItemInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGotLoginBonus_Statics::NewProp_loginBonusId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GotLoginBonus" },
		{ "ModuleRelativePath", "Public/GotLoginBonus.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGotLoginBonus_Statics::NewProp_loginBonusId = { "loginBonusId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGotLoginBonus, loginBonusId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGotLoginBonus_Statics::NewProp_loginBonusId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGotLoginBonus_Statics::NewProp_loginBonusId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGotLoginBonus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGotLoginBonus_Statics::NewProp_GetItemList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGotLoginBonus_Statics::NewProp_GetItemList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGotLoginBonus_Statics::NewProp_loginBonusId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGotLoginBonus_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CosmosWebApi,
		nullptr,
		&NewStructOps,
		"GotLoginBonus",
		sizeof(FGotLoginBonus),
		alignof(FGotLoginBonus),
		Z_Construct_UScriptStruct_FGotLoginBonus_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGotLoginBonus_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGotLoginBonus_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGotLoginBonus_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGotLoginBonus()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGotLoginBonus_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CosmosWebApi();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GotLoginBonus"), sizeof(FGotLoginBonus), Get_Z_Construct_UScriptStruct_FGotLoginBonus_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGotLoginBonus_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGotLoginBonus_Hash() { return 1909700041U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
