// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CosmosWebApi/Public/GuildNotificationResponseParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGuildNotificationResponseParam() {}
// Cross Module References
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FGuildNotificationResponseParam();
	UPackage* Z_Construct_UPackage__Script_CosmosWebApi();
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FGuildNotificationInfo();
// End Cross Module References
class UScriptStruct* FGuildNotificationResponseParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COSMOSWEBAPI_API uint32 Get_Z_Construct_UScriptStruct_FGuildNotificationResponseParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGuildNotificationResponseParam, Z_Construct_UPackage__Script_CosmosWebApi(), TEXT("GuildNotificationResponseParam"), sizeof(FGuildNotificationResponseParam), Get_Z_Construct_UScriptStruct_FGuildNotificationResponseParam_Hash());
	}
	return Singleton;
}
template<> COSMOSWEBAPI_API UScriptStruct* StaticStruct<FGuildNotificationResponseParam>()
{
	return FGuildNotificationResponseParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGuildNotificationResponseParam(FGuildNotificationResponseParam::StaticStruct, TEXT("/Script/CosmosWebApi"), TEXT("GuildNotificationResponseParam"), false, nullptr, nullptr);
static struct FScriptStruct_CosmosWebApi_StaticRegisterNativesFGuildNotificationResponseParam
{
	FScriptStruct_CosmosWebApi_StaticRegisterNativesFGuildNotificationResponseParam()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GuildNotificationResponseParam")),new UScriptStruct::TCppStructOps<FGuildNotificationResponseParam>);
	}
} ScriptStruct_CosmosWebApi_StaticRegisterNativesFGuildNotificationResponseParam;
	struct Z_Construct_UScriptStruct_FGuildNotificationResponseParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_notificationList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_notificationList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_notificationList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Status;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGuildNotificationResponseParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GuildNotificationResponseParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGuildNotificationResponseParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGuildNotificationResponseParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGuildNotificationResponseParam_Statics::NewProp_notificationList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GuildNotificationResponseParam" },
		{ "ModuleRelativePath", "Public/GuildNotificationResponseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGuildNotificationResponseParam_Statics::NewProp_notificationList = { "notificationList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGuildNotificationResponseParam, notificationList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGuildNotificationResponseParam_Statics::NewProp_notificationList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuildNotificationResponseParam_Statics::NewProp_notificationList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGuildNotificationResponseParam_Statics::NewProp_notificationList_Inner = { "notificationList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuildNotificationInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGuildNotificationResponseParam_Statics::NewProp_Status_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GuildNotificationResponseParam" },
		{ "ModuleRelativePath", "Public/GuildNotificationResponseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGuildNotificationResponseParam_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGuildNotificationResponseParam, Status), METADATA_PARAMS(Z_Construct_UScriptStruct_FGuildNotificationResponseParam_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuildNotificationResponseParam_Statics::NewProp_Status_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGuildNotificationResponseParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGuildNotificationResponseParam_Statics::NewProp_notificationList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGuildNotificationResponseParam_Statics::NewProp_notificationList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGuildNotificationResponseParam_Statics::NewProp_Status,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGuildNotificationResponseParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CosmosWebApi,
		nullptr,
		&NewStructOps,
		"GuildNotificationResponseParam",
		sizeof(FGuildNotificationResponseParam),
		alignof(FGuildNotificationResponseParam),
		Z_Construct_UScriptStruct_FGuildNotificationResponseParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuildNotificationResponseParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGuildNotificationResponseParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuildNotificationResponseParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGuildNotificationResponseParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGuildNotificationResponseParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CosmosWebApi();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GuildNotificationResponseParam"), sizeof(FGuildNotificationResponseParam), Get_Z_Construct_UScriptStruct_FGuildNotificationResponseParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGuildNotificationResponseParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGuildNotificationResponseParam_Hash() { return 1936302893U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
