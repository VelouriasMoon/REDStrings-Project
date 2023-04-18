// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CosmosWebApi/Public/GuildAuthorityInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGuildAuthorityInfo() {}
// Cross Module References
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FGuildAuthorityInfo();
	UPackage* Z_Construct_UPackage__Script_CosmosWebApi();
// End Cross Module References
class UScriptStruct* FGuildAuthorityInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COSMOSWEBAPI_API uint32 Get_Z_Construct_UScriptStruct_FGuildAuthorityInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGuildAuthorityInfo, Z_Construct_UPackage__Script_CosmosWebApi(), TEXT("GuildAuthorityInfo"), sizeof(FGuildAuthorityInfo), Get_Z_Construct_UScriptStruct_FGuildAuthorityInfo_Hash());
	}
	return Singleton;
}
template<> COSMOSWEBAPI_API UScriptStruct* StaticStruct<FGuildAuthorityInfo>()
{
	return FGuildAuthorityInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGuildAuthorityInfo(FGuildAuthorityInfo::StaticStruct, TEXT("/Script/CosmosWebApi"), TEXT("GuildAuthorityInfo"), false, nullptr, nullptr);
static struct FScriptStruct_CosmosWebApi_StaticRegisterNativesFGuildAuthorityInfo
{
	FScriptStruct_CosmosWebApi_StaticRegisterNativesFGuildAuthorityInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GuildAuthorityInfo")),new UScriptStruct::TCppStructOps<FGuildAuthorityInfo>);
	}
} ScriptStruct_CosmosWebApi_StaticRegisterNativesFGuildAuthorityInfo;
	struct Z_Construct_UScriptStruct_FGuildAuthorityInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_disbandmentFlg_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_disbandmentFlg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leaderReleaseFlg_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_leaderReleaseFlg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_usePointFlg_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_usePointFlg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_positionFlg_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_positionFlg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_expulsionFlg_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_expulsionFlg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_invitationFlg_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_invitationFlg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_editFlg_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_editFlg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_profileSetFlg_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_profileSetFlg;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGuildAuthorityInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GuildAuthorityInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGuildAuthorityInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGuildAuthorityInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGuildAuthorityInfo_Statics::NewProp_disbandmentFlg_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GuildAuthorityInfo" },
		{ "ModuleRelativePath", "Public/GuildAuthorityInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGuildAuthorityInfo_Statics::NewProp_disbandmentFlg = { "disbandmentFlg", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGuildAuthorityInfo, disbandmentFlg), METADATA_PARAMS(Z_Construct_UScriptStruct_FGuildAuthorityInfo_Statics::NewProp_disbandmentFlg_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuildAuthorityInfo_Statics::NewProp_disbandmentFlg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGuildAuthorityInfo_Statics::NewProp_leaderReleaseFlg_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GuildAuthorityInfo" },
		{ "ModuleRelativePath", "Public/GuildAuthorityInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGuildAuthorityInfo_Statics::NewProp_leaderReleaseFlg = { "leaderReleaseFlg", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGuildAuthorityInfo, leaderReleaseFlg), METADATA_PARAMS(Z_Construct_UScriptStruct_FGuildAuthorityInfo_Statics::NewProp_leaderReleaseFlg_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuildAuthorityInfo_Statics::NewProp_leaderReleaseFlg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGuildAuthorityInfo_Statics::NewProp_usePointFlg_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GuildAuthorityInfo" },
		{ "ModuleRelativePath", "Public/GuildAuthorityInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGuildAuthorityInfo_Statics::NewProp_usePointFlg = { "usePointFlg", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGuildAuthorityInfo, usePointFlg), METADATA_PARAMS(Z_Construct_UScriptStruct_FGuildAuthorityInfo_Statics::NewProp_usePointFlg_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuildAuthorityInfo_Statics::NewProp_usePointFlg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGuildAuthorityInfo_Statics::NewProp_positionFlg_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GuildAuthorityInfo" },
		{ "ModuleRelativePath", "Public/GuildAuthorityInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGuildAuthorityInfo_Statics::NewProp_positionFlg = { "positionFlg", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGuildAuthorityInfo, positionFlg), METADATA_PARAMS(Z_Construct_UScriptStruct_FGuildAuthorityInfo_Statics::NewProp_positionFlg_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuildAuthorityInfo_Statics::NewProp_positionFlg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGuildAuthorityInfo_Statics::NewProp_expulsionFlg_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GuildAuthorityInfo" },
		{ "ModuleRelativePath", "Public/GuildAuthorityInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGuildAuthorityInfo_Statics::NewProp_expulsionFlg = { "expulsionFlg", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGuildAuthorityInfo, expulsionFlg), METADATA_PARAMS(Z_Construct_UScriptStruct_FGuildAuthorityInfo_Statics::NewProp_expulsionFlg_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuildAuthorityInfo_Statics::NewProp_expulsionFlg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGuildAuthorityInfo_Statics::NewProp_invitationFlg_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GuildAuthorityInfo" },
		{ "ModuleRelativePath", "Public/GuildAuthorityInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGuildAuthorityInfo_Statics::NewProp_invitationFlg = { "invitationFlg", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGuildAuthorityInfo, invitationFlg), METADATA_PARAMS(Z_Construct_UScriptStruct_FGuildAuthorityInfo_Statics::NewProp_invitationFlg_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuildAuthorityInfo_Statics::NewProp_invitationFlg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGuildAuthorityInfo_Statics::NewProp_editFlg_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GuildAuthorityInfo" },
		{ "ModuleRelativePath", "Public/GuildAuthorityInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGuildAuthorityInfo_Statics::NewProp_editFlg = { "editFlg", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGuildAuthorityInfo, editFlg), METADATA_PARAMS(Z_Construct_UScriptStruct_FGuildAuthorityInfo_Statics::NewProp_editFlg_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuildAuthorityInfo_Statics::NewProp_editFlg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGuildAuthorityInfo_Statics::NewProp_profileSetFlg_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GuildAuthorityInfo" },
		{ "ModuleRelativePath", "Public/GuildAuthorityInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGuildAuthorityInfo_Statics::NewProp_profileSetFlg = { "profileSetFlg", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGuildAuthorityInfo, profileSetFlg), METADATA_PARAMS(Z_Construct_UScriptStruct_FGuildAuthorityInfo_Statics::NewProp_profileSetFlg_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuildAuthorityInfo_Statics::NewProp_profileSetFlg_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGuildAuthorityInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGuildAuthorityInfo_Statics::NewProp_disbandmentFlg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGuildAuthorityInfo_Statics::NewProp_leaderReleaseFlg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGuildAuthorityInfo_Statics::NewProp_usePointFlg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGuildAuthorityInfo_Statics::NewProp_positionFlg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGuildAuthorityInfo_Statics::NewProp_expulsionFlg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGuildAuthorityInfo_Statics::NewProp_invitationFlg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGuildAuthorityInfo_Statics::NewProp_editFlg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGuildAuthorityInfo_Statics::NewProp_profileSetFlg,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGuildAuthorityInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CosmosWebApi,
		nullptr,
		&NewStructOps,
		"GuildAuthorityInfo",
		sizeof(FGuildAuthorityInfo),
		alignof(FGuildAuthorityInfo),
		Z_Construct_UScriptStruct_FGuildAuthorityInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuildAuthorityInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGuildAuthorityInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuildAuthorityInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGuildAuthorityInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGuildAuthorityInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CosmosWebApi();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GuildAuthorityInfo"), sizeof(FGuildAuthorityInfo), Get_Z_Construct_UScriptStruct_FGuildAuthorityInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGuildAuthorityInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGuildAuthorityInfo_Hash() { return 2350168800U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
