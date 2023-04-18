// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CosmosWebApi/Public/ResponseHeader.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeResponseHeader() {}
// Cross Module References
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FResponseHeader();
	UPackage* Z_Construct_UPackage__Script_CosmosWebApi();
// End Cross Module References
class UScriptStruct* FResponseHeader::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COSMOSWEBAPI_API uint32 Get_Z_Construct_UScriptStruct_FResponseHeader_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FResponseHeader, Z_Construct_UPackage__Script_CosmosWebApi(), TEXT("ResponseHeader"), sizeof(FResponseHeader), Get_Z_Construct_UScriptStruct_FResponseHeader_Hash());
	}
	return Singleton;
}
template<> COSMOSWEBAPI_API UScriptStruct* StaticStruct<FResponseHeader>()
{
	return FResponseHeader::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FResponseHeader(FResponseHeader::StaticStruct, TEXT("/Script/CosmosWebApi"), TEXT("ResponseHeader"), false, nullptr, nullptr);
static struct FScriptStruct_CosmosWebApi_StaticRegisterNativesFResponseHeader
{
	FScriptStruct_CosmosWebApi_StaticRegisterNativesFResponseHeader()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ResponseHeader")),new UScriptStruct::TCppStructOps<FResponseHeader>);
	}
} ScriptStruct_CosmosWebApi_StaticRegisterNativesFResponseHeader;
	struct Z_Construct_UScriptStruct_FResponseHeader_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_date_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_date;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_session_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_session;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResponseHeader_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ResponseHeader.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FResponseHeader_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FResponseHeader>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResponseHeader_Statics::NewProp_date_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ResponseHeader" },
		{ "ModuleRelativePath", "Public/ResponseHeader.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FResponseHeader_Statics::NewProp_date = { "date", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FResponseHeader, date), METADATA_PARAMS(Z_Construct_UScriptStruct_FResponseHeader_Statics::NewProp_date_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResponseHeader_Statics::NewProp_date_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResponseHeader_Statics::NewProp_session_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ResponseHeader" },
		{ "ModuleRelativePath", "Public/ResponseHeader.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FResponseHeader_Statics::NewProp_session = { "session", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FResponseHeader, session), METADATA_PARAMS(Z_Construct_UScriptStruct_FResponseHeader_Statics::NewProp_session_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResponseHeader_Statics::NewProp_session_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResponseHeader_Statics::NewProp_Result_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ResponseHeader" },
		{ "ModuleRelativePath", "Public/ResponseHeader.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FResponseHeader_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FResponseHeader, Result), METADATA_PARAMS(Z_Construct_UScriptStruct_FResponseHeader_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResponseHeader_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FResponseHeader_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResponseHeader_Statics::NewProp_date,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResponseHeader_Statics::NewProp_session,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResponseHeader_Statics::NewProp_Result,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FResponseHeader_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CosmosWebApi,
		nullptr,
		&NewStructOps,
		"ResponseHeader",
		sizeof(FResponseHeader),
		alignof(FResponseHeader),
		Z_Construct_UScriptStruct_FResponseHeader_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResponseHeader_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FResponseHeader_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResponseHeader_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FResponseHeader()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FResponseHeader_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CosmosWebApi();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ResponseHeader"), sizeof(FResponseHeader), Get_Z_Construct_UScriptStruct_FResponseHeader_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FResponseHeader_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FResponseHeader_Hash() { return 2441134093U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
