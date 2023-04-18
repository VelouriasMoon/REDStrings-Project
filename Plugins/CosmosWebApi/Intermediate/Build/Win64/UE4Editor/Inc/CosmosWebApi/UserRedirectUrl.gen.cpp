// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CosmosWebApi/Public/UserRedirectUrl.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUserRedirectUrl() {}
// Cross Module References
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FUserRedirectUrl();
	UPackage* Z_Construct_UPackage__Script_CosmosWebApi();
// End Cross Module References
class UScriptStruct* FUserRedirectUrl::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COSMOSWEBAPI_API uint32 Get_Z_Construct_UScriptStruct_FUserRedirectUrl_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUserRedirectUrl, Z_Construct_UPackage__Script_CosmosWebApi(), TEXT("UserRedirectUrl"), sizeof(FUserRedirectUrl), Get_Z_Construct_UScriptStruct_FUserRedirectUrl_Hash());
	}
	return Singleton;
}
template<> COSMOSWEBAPI_API UScriptStruct* StaticStruct<FUserRedirectUrl>()
{
	return FUserRedirectUrl::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUserRedirectUrl(FUserRedirectUrl::StaticStruct, TEXT("/Script/CosmosWebApi"), TEXT("UserRedirectUrl"), false, nullptr, nullptr);
static struct FScriptStruct_CosmosWebApi_StaticRegisterNativesFUserRedirectUrl
{
	FScriptStruct_CosmosWebApi_StaticRegisterNativesFUserRedirectUrl()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("UserRedirectUrl")),new UScriptStruct::TCppStructOps<FUserRedirectUrl>);
	}
} ScriptStruct_CosmosWebApi_StaticRegisterNativesFUserRedirectUrl;
	struct Z_Construct_UScriptStruct_FUserRedirectUrl_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_basicPass_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_basicPass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_basicId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_basicId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_redirectUrl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_redirectUrl;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserRedirectUrl_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UserRedirectUrl.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUserRedirectUrl_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUserRedirectUrl>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserRedirectUrl_Statics::NewProp_basicPass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UserRedirectUrl" },
		{ "ModuleRelativePath", "Public/UserRedirectUrl.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUserRedirectUrl_Statics::NewProp_basicPass = { "basicPass", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserRedirectUrl, basicPass), METADATA_PARAMS(Z_Construct_UScriptStruct_FUserRedirectUrl_Statics::NewProp_basicPass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserRedirectUrl_Statics::NewProp_basicPass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserRedirectUrl_Statics::NewProp_basicId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UserRedirectUrl" },
		{ "ModuleRelativePath", "Public/UserRedirectUrl.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUserRedirectUrl_Statics::NewProp_basicId = { "basicId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserRedirectUrl, basicId), METADATA_PARAMS(Z_Construct_UScriptStruct_FUserRedirectUrl_Statics::NewProp_basicId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserRedirectUrl_Statics::NewProp_basicId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserRedirectUrl_Statics::NewProp_redirectUrl_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UserRedirectUrl" },
		{ "ModuleRelativePath", "Public/UserRedirectUrl.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUserRedirectUrl_Statics::NewProp_redirectUrl = { "redirectUrl", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserRedirectUrl, redirectUrl), METADATA_PARAMS(Z_Construct_UScriptStruct_FUserRedirectUrl_Statics::NewProp_redirectUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserRedirectUrl_Statics::NewProp_redirectUrl_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUserRedirectUrl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserRedirectUrl_Statics::NewProp_basicPass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserRedirectUrl_Statics::NewProp_basicId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserRedirectUrl_Statics::NewProp_redirectUrl,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUserRedirectUrl_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CosmosWebApi,
		nullptr,
		&NewStructOps,
		"UserRedirectUrl",
		sizeof(FUserRedirectUrl),
		alignof(FUserRedirectUrl),
		Z_Construct_UScriptStruct_FUserRedirectUrl_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserRedirectUrl_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUserRedirectUrl_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserRedirectUrl_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUserRedirectUrl()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUserRedirectUrl_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CosmosWebApi();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UserRedirectUrl"), sizeof(FUserRedirectUrl), Get_Z_Construct_UScriptStruct_FUserRedirectUrl_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUserRedirectUrl_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUserRedirectUrl_Hash() { return 1230670912U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
