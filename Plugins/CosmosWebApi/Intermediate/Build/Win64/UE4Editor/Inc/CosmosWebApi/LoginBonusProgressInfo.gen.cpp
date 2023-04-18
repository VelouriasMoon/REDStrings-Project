// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CosmosWebApi/Public/LoginBonusProgressInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoginBonusProgressInfo() {}
// Cross Module References
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FLoginBonusProgressInfo();
	UPackage* Z_Construct_UPackage__Script_CosmosWebApi();
// End Cross Module References
class UScriptStruct* FLoginBonusProgressInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COSMOSWEBAPI_API uint32 Get_Z_Construct_UScriptStruct_FLoginBonusProgressInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLoginBonusProgressInfo, Z_Construct_UPackage__Script_CosmosWebApi(), TEXT("LoginBonusProgressInfo"), sizeof(FLoginBonusProgressInfo), Get_Z_Construct_UScriptStruct_FLoginBonusProgressInfo_Hash());
	}
	return Singleton;
}
template<> COSMOSWEBAPI_API UScriptStruct* StaticStruct<FLoginBonusProgressInfo>()
{
	return FLoginBonusProgressInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLoginBonusProgressInfo(FLoginBonusProgressInfo::StaticStruct, TEXT("/Script/CosmosWebApi"), TEXT("LoginBonusProgressInfo"), false, nullptr, nullptr);
static struct FScriptStruct_CosmosWebApi_StaticRegisterNativesFLoginBonusProgressInfo
{
	FScriptStruct_CosmosWebApi_StaticRegisterNativesFLoginBonusProgressInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LoginBonusProgressInfo")),new UScriptStruct::TCppStructOps<FLoginBonusProgressInfo>);
	}
} ScriptStruct_CosmosWebApi_StaticRegisterNativesFLoginBonusProgressInfo;
	struct Z_Construct_UScriptStruct_FLoginBonusProgressInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_getFlg_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_getFlg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_itemNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_itemNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dayNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_dayNum;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoginBonusProgressInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LoginBonusProgressInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLoginBonusProgressInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLoginBonusProgressInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoginBonusProgressInfo_Statics::NewProp_getFlg_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LoginBonusProgressInfo" },
		{ "ModuleRelativePath", "Public/LoginBonusProgressInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLoginBonusProgressInfo_Statics::NewProp_getFlg = { "getFlg", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoginBonusProgressInfo, getFlg), METADATA_PARAMS(Z_Construct_UScriptStruct_FLoginBonusProgressInfo_Statics::NewProp_getFlg_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoginBonusProgressInfo_Statics::NewProp_getFlg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoginBonusProgressInfo_Statics::NewProp_itemNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LoginBonusProgressInfo" },
		{ "ModuleRelativePath", "Public/LoginBonusProgressInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLoginBonusProgressInfo_Statics::NewProp_itemNum = { "itemNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoginBonusProgressInfo, itemNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FLoginBonusProgressInfo_Statics::NewProp_itemNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoginBonusProgressInfo_Statics::NewProp_itemNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoginBonusProgressInfo_Statics::NewProp_ItemId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LoginBonusProgressInfo" },
		{ "ModuleRelativePath", "Public/LoginBonusProgressInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLoginBonusProgressInfo_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoginBonusProgressInfo, ItemId), METADATA_PARAMS(Z_Construct_UScriptStruct_FLoginBonusProgressInfo_Statics::NewProp_ItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoginBonusProgressInfo_Statics::NewProp_ItemId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoginBonusProgressInfo_Statics::NewProp_dayNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LoginBonusProgressInfo" },
		{ "ModuleRelativePath", "Public/LoginBonusProgressInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLoginBonusProgressInfo_Statics::NewProp_dayNum = { "dayNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoginBonusProgressInfo, dayNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FLoginBonusProgressInfo_Statics::NewProp_dayNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoginBonusProgressInfo_Statics::NewProp_dayNum_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLoginBonusProgressInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoginBonusProgressInfo_Statics::NewProp_getFlg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoginBonusProgressInfo_Statics::NewProp_itemNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoginBonusProgressInfo_Statics::NewProp_ItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoginBonusProgressInfo_Statics::NewProp_dayNum,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLoginBonusProgressInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CosmosWebApi,
		nullptr,
		&NewStructOps,
		"LoginBonusProgressInfo",
		sizeof(FLoginBonusProgressInfo),
		alignof(FLoginBonusProgressInfo),
		Z_Construct_UScriptStruct_FLoginBonusProgressInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoginBonusProgressInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLoginBonusProgressInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoginBonusProgressInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLoginBonusProgressInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLoginBonusProgressInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CosmosWebApi();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LoginBonusProgressInfo"), sizeof(FLoginBonusProgressInfo), Get_Z_Construct_UScriptStruct_FLoginBonusProgressInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLoginBonusProgressInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLoginBonusProgressInfo_Hash() { return 3673862240U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
