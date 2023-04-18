// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CosmosWebApi/Public/GuildInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGuildInfo() {}
// Cross Module References
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FGuildInfo();
	UPackage* Z_Construct_UPackage__Script_CosmosWebApi();
// End Cross Module References
class UScriptStruct* FGuildInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COSMOSWEBAPI_API uint32 Get_Z_Construct_UScriptStruct_FGuildInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGuildInfo, Z_Construct_UPackage__Script_CosmosWebApi(), TEXT("GuildInfo"), sizeof(FGuildInfo), Get_Z_Construct_UScriptStruct_FGuildInfo_Hash());
	}
	return Singleton;
}
template<> COSMOSWEBAPI_API UScriptStruct* StaticStruct<FGuildInfo>()
{
	return FGuildInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGuildInfo(FGuildInfo::StaticStruct, TEXT("/Script/CosmosWebApi"), TEXT("GuildInfo"), false, nullptr, nullptr);
static struct FScriptStruct_CosmosWebApi_StaticRegisterNativesFGuildInfo
{
	FScriptStruct_CosmosWebApi_StaticRegisterNativesFGuildInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GuildInfo")),new UScriptStruct::TCppStructOps<FGuildInfo>);
	}
} ScriptStruct_CosmosWebApi_StaticRegisterNativesFGuildInfo;
	struct Z_Construct_UScriptStruct_FGuildInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_guildData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_guildData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_guildId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_guildId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGuildInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GuildInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGuildInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGuildInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGuildInfo_Statics::NewProp_guildData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GuildInfo" },
		{ "ModuleRelativePath", "Public/GuildInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGuildInfo_Statics::NewProp_guildData = { "guildData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGuildInfo, guildData), METADATA_PARAMS(Z_Construct_UScriptStruct_FGuildInfo_Statics::NewProp_guildData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuildInfo_Statics::NewProp_guildData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGuildInfo_Statics::NewProp_guildId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GuildInfo" },
		{ "ModuleRelativePath", "Public/GuildInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGuildInfo_Statics::NewProp_guildId = { "guildId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGuildInfo, guildId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGuildInfo_Statics::NewProp_guildId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuildInfo_Statics::NewProp_guildId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGuildInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGuildInfo_Statics::NewProp_guildData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGuildInfo_Statics::NewProp_guildId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGuildInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CosmosWebApi,
		nullptr,
		&NewStructOps,
		"GuildInfo",
		sizeof(FGuildInfo),
		alignof(FGuildInfo),
		Z_Construct_UScriptStruct_FGuildInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuildInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGuildInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuildInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGuildInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGuildInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CosmosWebApi();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GuildInfo"), sizeof(FGuildInfo), Get_Z_Construct_UScriptStruct_FGuildInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGuildInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGuildInfo_Hash() { return 134177221U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
