// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CosmosWebApi/Public/GuildInfoResponseParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGuildInfoResponseParam() {}
// Cross Module References
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FGuildInfoResponseParam();
	UPackage* Z_Construct_UPackage__Script_CosmosWebApi();
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FGuildMemberInfo();
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FGuildInfo();
// End Cross Module References
class UScriptStruct* FGuildInfoResponseParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COSMOSWEBAPI_API uint32 Get_Z_Construct_UScriptStruct_FGuildInfoResponseParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGuildInfoResponseParam, Z_Construct_UPackage__Script_CosmosWebApi(), TEXT("GuildInfoResponseParam"), sizeof(FGuildInfoResponseParam), Get_Z_Construct_UScriptStruct_FGuildInfoResponseParam_Hash());
	}
	return Singleton;
}
template<> COSMOSWEBAPI_API UScriptStruct* StaticStruct<FGuildInfoResponseParam>()
{
	return FGuildInfoResponseParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGuildInfoResponseParam(FGuildInfoResponseParam::StaticStruct, TEXT("/Script/CosmosWebApi"), TEXT("GuildInfoResponseParam"), false, nullptr, nullptr);
static struct FScriptStruct_CosmosWebApi_StaticRegisterNativesFGuildInfoResponseParam
{
	FScriptStruct_CosmosWebApi_StaticRegisterNativesFGuildInfoResponseParam()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GuildInfoResponseParam")),new UScriptStruct::TCppStructOps<FGuildInfoResponseParam>);
	}
} ScriptStruct_CosmosWebApi_StaticRegisterNativesFGuildInfoResponseParam;
	struct Z_Construct_UScriptStruct_FGuildInfoResponseParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_guildMebmerList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_guildMebmerList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_guildMebmerList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GuildInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GuildInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Status;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGuildInfoResponseParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GuildInfoResponseParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGuildInfoResponseParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGuildInfoResponseParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGuildInfoResponseParam_Statics::NewProp_guildMebmerList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GuildInfoResponseParam" },
		{ "ModuleRelativePath", "Public/GuildInfoResponseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGuildInfoResponseParam_Statics::NewProp_guildMebmerList = { "guildMebmerList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGuildInfoResponseParam, guildMebmerList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGuildInfoResponseParam_Statics::NewProp_guildMebmerList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuildInfoResponseParam_Statics::NewProp_guildMebmerList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGuildInfoResponseParam_Statics::NewProp_guildMebmerList_Inner = { "guildMebmerList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuildMemberInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGuildInfoResponseParam_Statics::NewProp_GuildInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GuildInfoResponseParam" },
		{ "ModuleRelativePath", "Public/GuildInfoResponseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGuildInfoResponseParam_Statics::NewProp_GuildInfo = { "GuildInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGuildInfoResponseParam, GuildInfo), Z_Construct_UScriptStruct_FGuildInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FGuildInfoResponseParam_Statics::NewProp_GuildInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuildInfoResponseParam_Statics::NewProp_GuildInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGuildInfoResponseParam_Statics::NewProp_Status_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GuildInfoResponseParam" },
		{ "ModuleRelativePath", "Public/GuildInfoResponseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGuildInfoResponseParam_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGuildInfoResponseParam, Status), METADATA_PARAMS(Z_Construct_UScriptStruct_FGuildInfoResponseParam_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuildInfoResponseParam_Statics::NewProp_Status_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGuildInfoResponseParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGuildInfoResponseParam_Statics::NewProp_guildMebmerList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGuildInfoResponseParam_Statics::NewProp_guildMebmerList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGuildInfoResponseParam_Statics::NewProp_GuildInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGuildInfoResponseParam_Statics::NewProp_Status,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGuildInfoResponseParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CosmosWebApi,
		nullptr,
		&NewStructOps,
		"GuildInfoResponseParam",
		sizeof(FGuildInfoResponseParam),
		alignof(FGuildInfoResponseParam),
		Z_Construct_UScriptStruct_FGuildInfoResponseParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuildInfoResponseParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGuildInfoResponseParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuildInfoResponseParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGuildInfoResponseParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGuildInfoResponseParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CosmosWebApi();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GuildInfoResponseParam"), sizeof(FGuildInfoResponseParam), Get_Z_Construct_UScriptStruct_FGuildInfoResponseParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGuildInfoResponseParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGuildInfoResponseParam_Hash() { return 3123763373U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
