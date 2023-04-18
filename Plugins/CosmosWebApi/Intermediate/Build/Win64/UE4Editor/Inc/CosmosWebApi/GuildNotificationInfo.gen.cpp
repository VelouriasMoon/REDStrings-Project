// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CosmosWebApi/Public/GuildNotificationInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGuildNotificationInfo() {}
// Cross Module References
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FGuildNotificationInfo();
	UPackage* Z_Construct_UPackage__Script_CosmosWebApi();
// End Cross Module References
class UScriptStruct* FGuildNotificationInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COSMOSWEBAPI_API uint32 Get_Z_Construct_UScriptStruct_FGuildNotificationInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGuildNotificationInfo, Z_Construct_UPackage__Script_CosmosWebApi(), TEXT("GuildNotificationInfo"), sizeof(FGuildNotificationInfo), Get_Z_Construct_UScriptStruct_FGuildNotificationInfo_Hash());
	}
	return Singleton;
}
template<> COSMOSWEBAPI_API UScriptStruct* StaticStruct<FGuildNotificationInfo>()
{
	return FGuildNotificationInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGuildNotificationInfo(FGuildNotificationInfo::StaticStruct, TEXT("/Script/CosmosWebApi"), TEXT("GuildNotificationInfo"), false, nullptr, nullptr);
static struct FScriptStruct_CosmosWebApi_StaticRegisterNativesFGuildNotificationInfo
{
	FScriptStruct_CosmosWebApi_StaticRegisterNativesFGuildNotificationInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GuildNotificationInfo")),new UScriptStruct::TCppStructOps<FGuildNotificationInfo>);
	}
} ScriptStruct_CosmosWebApi_StaticRegisterNativesFGuildNotificationInfo;
	struct Z_Construct_UScriptStruct_FGuildNotificationInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_logtime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_logtime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_notfyType_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_notfyType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_notificationUserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_notificationUserId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_userId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_userId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGuildNotificationInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GuildNotificationInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGuildNotificationInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGuildNotificationInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGuildNotificationInfo_Statics::NewProp_logtime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GuildNotificationInfo" },
		{ "ModuleRelativePath", "Public/GuildNotificationInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGuildNotificationInfo_Statics::NewProp_logtime = { "logtime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGuildNotificationInfo, logtime), METADATA_PARAMS(Z_Construct_UScriptStruct_FGuildNotificationInfo_Statics::NewProp_logtime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuildNotificationInfo_Statics::NewProp_logtime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGuildNotificationInfo_Statics::NewProp_notfyType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GuildNotificationInfo" },
		{ "ModuleRelativePath", "Public/GuildNotificationInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGuildNotificationInfo_Statics::NewProp_notfyType = { "notfyType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGuildNotificationInfo, notfyType), METADATA_PARAMS(Z_Construct_UScriptStruct_FGuildNotificationInfo_Statics::NewProp_notfyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuildNotificationInfo_Statics::NewProp_notfyType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGuildNotificationInfo_Statics::NewProp_notificationUserId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GuildNotificationInfo" },
		{ "ModuleRelativePath", "Public/GuildNotificationInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGuildNotificationInfo_Statics::NewProp_notificationUserId = { "notificationUserId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGuildNotificationInfo, notificationUserId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGuildNotificationInfo_Statics::NewProp_notificationUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuildNotificationInfo_Statics::NewProp_notificationUserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGuildNotificationInfo_Statics::NewProp_userId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GuildNotificationInfo" },
		{ "ModuleRelativePath", "Public/GuildNotificationInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGuildNotificationInfo_Statics::NewProp_userId = { "userId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGuildNotificationInfo, userId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGuildNotificationInfo_Statics::NewProp_userId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuildNotificationInfo_Statics::NewProp_userId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGuildNotificationInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGuildNotificationInfo_Statics::NewProp_logtime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGuildNotificationInfo_Statics::NewProp_notfyType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGuildNotificationInfo_Statics::NewProp_notificationUserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGuildNotificationInfo_Statics::NewProp_userId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGuildNotificationInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CosmosWebApi,
		nullptr,
		&NewStructOps,
		"GuildNotificationInfo",
		sizeof(FGuildNotificationInfo),
		alignof(FGuildNotificationInfo),
		Z_Construct_UScriptStruct_FGuildNotificationInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuildNotificationInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGuildNotificationInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuildNotificationInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGuildNotificationInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGuildNotificationInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CosmosWebApi();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GuildNotificationInfo"), sizeof(FGuildNotificationInfo), Get_Z_Construct_UScriptStruct_FGuildNotificationInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGuildNotificationInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGuildNotificationInfo_Hash() { return 796645094U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
