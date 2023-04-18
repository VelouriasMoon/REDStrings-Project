// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CosmosWebApi/Public/GuildMemberInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGuildMemberInfo() {}
// Cross Module References
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FGuildMemberInfo();
	UPackage* Z_Construct_UPackage__Script_CosmosWebApi();
// End Cross Module References
class UScriptStruct* FGuildMemberInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COSMOSWEBAPI_API uint32 Get_Z_Construct_UScriptStruct_FGuildMemberInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGuildMemberInfo, Z_Construct_UPackage__Script_CosmosWebApi(), TEXT("GuildMemberInfo"), sizeof(FGuildMemberInfo), Get_Z_Construct_UScriptStruct_FGuildMemberInfo_Hash());
	}
	return Singleton;
}
template<> COSMOSWEBAPI_API UScriptStruct* StaticStruct<FGuildMemberInfo>()
{
	return FGuildMemberInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGuildMemberInfo(FGuildMemberInfo::StaticStruct, TEXT("/Script/CosmosWebApi"), TEXT("GuildMemberInfo"), false, nullptr, nullptr);
static struct FScriptStruct_CosmosWebApi_StaticRegisterNativesFGuildMemberInfo
{
	FScriptStruct_CosmosWebApi_StaticRegisterNativesFGuildMemberInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GuildMemberInfo")),new UScriptStruct::TCppStructOps<FGuildMemberInfo>);
	}
} ScriptStruct_CosmosWebApi_StaticRegisterNativesFGuildMemberInfo;
	struct Z_Construct_UScriptStruct_FGuildMemberInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_guildMemberData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_guildMemberData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_guildId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_guildId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_userId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_userId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGuildMemberInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GuildMemberInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGuildMemberInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGuildMemberInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGuildMemberInfo_Statics::NewProp_Position_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GuildMemberInfo" },
		{ "ModuleRelativePath", "Public/GuildMemberInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGuildMemberInfo_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGuildMemberInfo, Position), METADATA_PARAMS(Z_Construct_UScriptStruct_FGuildMemberInfo_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuildMemberInfo_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGuildMemberInfo_Statics::NewProp_guildMemberData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GuildMemberInfo" },
		{ "ModuleRelativePath", "Public/GuildMemberInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGuildMemberInfo_Statics::NewProp_guildMemberData = { "guildMemberData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGuildMemberInfo, guildMemberData), METADATA_PARAMS(Z_Construct_UScriptStruct_FGuildMemberInfo_Statics::NewProp_guildMemberData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuildMemberInfo_Statics::NewProp_guildMemberData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGuildMemberInfo_Statics::NewProp_guildId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GuildMemberInfo" },
		{ "ModuleRelativePath", "Public/GuildMemberInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGuildMemberInfo_Statics::NewProp_guildId = { "guildId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGuildMemberInfo, guildId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGuildMemberInfo_Statics::NewProp_guildId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuildMemberInfo_Statics::NewProp_guildId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGuildMemberInfo_Statics::NewProp_userId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GuildMemberInfo" },
		{ "ModuleRelativePath", "Public/GuildMemberInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGuildMemberInfo_Statics::NewProp_userId = { "userId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGuildMemberInfo, userId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGuildMemberInfo_Statics::NewProp_userId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuildMemberInfo_Statics::NewProp_userId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGuildMemberInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGuildMemberInfo_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGuildMemberInfo_Statics::NewProp_guildMemberData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGuildMemberInfo_Statics::NewProp_guildId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGuildMemberInfo_Statics::NewProp_userId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGuildMemberInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CosmosWebApi,
		nullptr,
		&NewStructOps,
		"GuildMemberInfo",
		sizeof(FGuildMemberInfo),
		alignof(FGuildMemberInfo),
		Z_Construct_UScriptStruct_FGuildMemberInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuildMemberInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGuildMemberInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuildMemberInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGuildMemberInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGuildMemberInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CosmosWebApi();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GuildMemberInfo"), sizeof(FGuildMemberInfo), Get_Z_Construct_UScriptStruct_FGuildMemberInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGuildMemberInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGuildMemberInfo_Hash() { return 2549736420U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
