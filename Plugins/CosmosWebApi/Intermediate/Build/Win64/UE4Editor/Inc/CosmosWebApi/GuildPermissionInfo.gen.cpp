// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CosmosWebApi/Public/GuildPermissionInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGuildPermissionInfo() {}
// Cross Module References
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FGuildPermissionInfo();
	UPackage* Z_Construct_UPackage__Script_CosmosWebApi();
// End Cross Module References
class UScriptStruct* FGuildPermissionInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COSMOSWEBAPI_API uint32 Get_Z_Construct_UScriptStruct_FGuildPermissionInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGuildPermissionInfo, Z_Construct_UPackage__Script_CosmosWebApi(), TEXT("GuildPermissionInfo"), sizeof(FGuildPermissionInfo), Get_Z_Construct_UScriptStruct_FGuildPermissionInfo_Hash());
	}
	return Singleton;
}
template<> COSMOSWEBAPI_API UScriptStruct* StaticStruct<FGuildPermissionInfo>()
{
	return FGuildPermissionInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGuildPermissionInfo(FGuildPermissionInfo::StaticStruct, TEXT("/Script/CosmosWebApi"), TEXT("GuildPermissionInfo"), false, nullptr, nullptr);
static struct FScriptStruct_CosmosWebApi_StaticRegisterNativesFGuildPermissionInfo
{
	FScriptStruct_CosmosWebApi_StaticRegisterNativesFGuildPermissionInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GuildPermissionInfo")),new UScriptStruct::TCppStructOps<FGuildPermissionInfo>);
	}
} ScriptStruct_CosmosWebApi_StaticRegisterNativesFGuildPermissionInfo;
	struct Z_Construct_UScriptStruct_FGuildPermissionInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_permission_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_permission;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_apiNo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_apiNo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGuildPermissionInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GuildPermissionInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGuildPermissionInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGuildPermissionInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGuildPermissionInfo_Statics::NewProp_permission_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GuildPermissionInfo" },
		{ "ModuleRelativePath", "Public/GuildPermissionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGuildPermissionInfo_Statics::NewProp_permission = { "permission", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGuildPermissionInfo, permission), METADATA_PARAMS(Z_Construct_UScriptStruct_FGuildPermissionInfo_Statics::NewProp_permission_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuildPermissionInfo_Statics::NewProp_permission_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGuildPermissionInfo_Statics::NewProp_apiNo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GuildPermissionInfo" },
		{ "ModuleRelativePath", "Public/GuildPermissionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGuildPermissionInfo_Statics::NewProp_apiNo = { "apiNo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGuildPermissionInfo, apiNo), METADATA_PARAMS(Z_Construct_UScriptStruct_FGuildPermissionInfo_Statics::NewProp_apiNo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuildPermissionInfo_Statics::NewProp_apiNo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGuildPermissionInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGuildPermissionInfo_Statics::NewProp_permission,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGuildPermissionInfo_Statics::NewProp_apiNo,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGuildPermissionInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CosmosWebApi,
		nullptr,
		&NewStructOps,
		"GuildPermissionInfo",
		sizeof(FGuildPermissionInfo),
		alignof(FGuildPermissionInfo),
		Z_Construct_UScriptStruct_FGuildPermissionInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuildPermissionInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGuildPermissionInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuildPermissionInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGuildPermissionInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGuildPermissionInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CosmosWebApi();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GuildPermissionInfo"), sizeof(FGuildPermissionInfo), Get_Z_Construct_UScriptStruct_FGuildPermissionInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGuildPermissionInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGuildPermissionInfo_Hash() { return 827904212U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
