// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CosmosWebApi/Public/GuildNotificationSelfResponseParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGuildNotificationSelfResponseParam() {}
// Cross Module References
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FGuildNotificationSelfResponseParam();
	UPackage* Z_Construct_UPackage__Script_CosmosWebApi();
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FGuildNotificationInfo();
// End Cross Module References
class UScriptStruct* FGuildNotificationSelfResponseParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COSMOSWEBAPI_API uint32 Get_Z_Construct_UScriptStruct_FGuildNotificationSelfResponseParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGuildNotificationSelfResponseParam, Z_Construct_UPackage__Script_CosmosWebApi(), TEXT("GuildNotificationSelfResponseParam"), sizeof(FGuildNotificationSelfResponseParam), Get_Z_Construct_UScriptStruct_FGuildNotificationSelfResponseParam_Hash());
	}
	return Singleton;
}
template<> COSMOSWEBAPI_API UScriptStruct* StaticStruct<FGuildNotificationSelfResponseParam>()
{
	return FGuildNotificationSelfResponseParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGuildNotificationSelfResponseParam(FGuildNotificationSelfResponseParam::StaticStruct, TEXT("/Script/CosmosWebApi"), TEXT("GuildNotificationSelfResponseParam"), false, nullptr, nullptr);
static struct FScriptStruct_CosmosWebApi_StaticRegisterNativesFGuildNotificationSelfResponseParam
{
	FScriptStruct_CosmosWebApi_StaticRegisterNativesFGuildNotificationSelfResponseParam()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GuildNotificationSelfResponseParam")),new UScriptStruct::TCppStructOps<FGuildNotificationSelfResponseParam>);
	}
} ScriptStruct_CosmosWebApi_StaticRegisterNativesFGuildNotificationSelfResponseParam;
	struct Z_Construct_UScriptStruct_FGuildNotificationSelfResponseParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_notificationSelfList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_notificationSelfList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_notificationSelfList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Status;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGuildNotificationSelfResponseParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GuildNotificationSelfResponseParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGuildNotificationSelfResponseParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGuildNotificationSelfResponseParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGuildNotificationSelfResponseParam_Statics::NewProp_notificationSelfList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GuildNotificationSelfResponseParam" },
		{ "ModuleRelativePath", "Public/GuildNotificationSelfResponseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGuildNotificationSelfResponseParam_Statics::NewProp_notificationSelfList = { "notificationSelfList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGuildNotificationSelfResponseParam, notificationSelfList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGuildNotificationSelfResponseParam_Statics::NewProp_notificationSelfList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuildNotificationSelfResponseParam_Statics::NewProp_notificationSelfList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGuildNotificationSelfResponseParam_Statics::NewProp_notificationSelfList_Inner = { "notificationSelfList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuildNotificationInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGuildNotificationSelfResponseParam_Statics::NewProp_Status_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GuildNotificationSelfResponseParam" },
		{ "ModuleRelativePath", "Public/GuildNotificationSelfResponseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGuildNotificationSelfResponseParam_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGuildNotificationSelfResponseParam, Status), METADATA_PARAMS(Z_Construct_UScriptStruct_FGuildNotificationSelfResponseParam_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuildNotificationSelfResponseParam_Statics::NewProp_Status_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGuildNotificationSelfResponseParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGuildNotificationSelfResponseParam_Statics::NewProp_notificationSelfList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGuildNotificationSelfResponseParam_Statics::NewProp_notificationSelfList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGuildNotificationSelfResponseParam_Statics::NewProp_Status,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGuildNotificationSelfResponseParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CosmosWebApi,
		nullptr,
		&NewStructOps,
		"GuildNotificationSelfResponseParam",
		sizeof(FGuildNotificationSelfResponseParam),
		alignof(FGuildNotificationSelfResponseParam),
		Z_Construct_UScriptStruct_FGuildNotificationSelfResponseParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuildNotificationSelfResponseParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGuildNotificationSelfResponseParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuildNotificationSelfResponseParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGuildNotificationSelfResponseParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGuildNotificationSelfResponseParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CosmosWebApi();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GuildNotificationSelfResponseParam"), sizeof(FGuildNotificationSelfResponseParam), Get_Z_Construct_UScriptStruct_FGuildNotificationSelfResponseParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGuildNotificationSelfResponseParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGuildNotificationSelfResponseParam_Hash() { return 520091592U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
