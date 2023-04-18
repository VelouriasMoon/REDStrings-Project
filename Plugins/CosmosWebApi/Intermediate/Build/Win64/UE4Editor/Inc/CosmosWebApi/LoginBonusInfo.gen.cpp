// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CosmosWebApi/Public/LoginBonusInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoginBonusInfo() {}
// Cross Module References
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FLoginBonusInfo();
	UPackage* Z_Construct_UPackage__Script_CosmosWebApi();
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FLoginBonusProgressInfo();
// End Cross Module References
class UScriptStruct* FLoginBonusInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COSMOSWEBAPI_API uint32 Get_Z_Construct_UScriptStruct_FLoginBonusInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLoginBonusInfo, Z_Construct_UPackage__Script_CosmosWebApi(), TEXT("LoginBonusInfo"), sizeof(FLoginBonusInfo), Get_Z_Construct_UScriptStruct_FLoginBonusInfo_Hash());
	}
	return Singleton;
}
template<> COSMOSWEBAPI_API UScriptStruct* StaticStruct<FLoginBonusInfo>()
{
	return FLoginBonusInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLoginBonusInfo(FLoginBonusInfo::StaticStruct, TEXT("/Script/CosmosWebApi"), TEXT("LoginBonusInfo"), false, nullptr, nullptr);
static struct FScriptStruct_CosmosWebApi_StaticRegisterNativesFLoginBonusInfo
{
	FScriptStruct_CosmosWebApi_StaticRegisterNativesFLoginBonusInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LoginBonusInfo")),new UScriptStruct::TCppStructOps<FLoginBonusInfo>);
	}
} ScriptStruct_CosmosWebApi_StaticRegisterNativesFLoginBonusInfo;
	struct Z_Construct_UScriptStruct_FLoginBonusInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_progressList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_progressList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_progressList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_endTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_endTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoginBonusInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LoginBonusInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_loginBonusType_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_loginBonusType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_loginBonusId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_loginBonusId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoginBonusInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LoginBonusInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLoginBonusInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLoginBonusInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoginBonusInfo_Statics::NewProp_progressList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LoginBonusInfo" },
		{ "ModuleRelativePath", "Public/LoginBonusInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLoginBonusInfo_Statics::NewProp_progressList = { "progressList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoginBonusInfo, progressList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLoginBonusInfo_Statics::NewProp_progressList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoginBonusInfo_Statics::NewProp_progressList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLoginBonusInfo_Statics::NewProp_progressList_Inner = { "progressList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLoginBonusProgressInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoginBonusInfo_Statics::NewProp_endTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LoginBonusInfo" },
		{ "ModuleRelativePath", "Public/LoginBonusInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLoginBonusInfo_Statics::NewProp_endTime = { "endTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoginBonusInfo, endTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FLoginBonusInfo_Statics::NewProp_endTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoginBonusInfo_Statics::NewProp_endTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoginBonusInfo_Statics::NewProp_StartTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LoginBonusInfo" },
		{ "ModuleRelativePath", "Public/LoginBonusInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLoginBonusInfo_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoginBonusInfo, StartTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FLoginBonusInfo_Statics::NewProp_StartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoginBonusInfo_Statics::NewProp_StartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoginBonusInfo_Statics::NewProp_LoginBonusInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LoginBonusInfo" },
		{ "ModuleRelativePath", "Public/LoginBonusInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLoginBonusInfo_Statics::NewProp_LoginBonusInfo = { "LoginBonusInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoginBonusInfo, LoginBonusInfo), METADATA_PARAMS(Z_Construct_UScriptStruct_FLoginBonusInfo_Statics::NewProp_LoginBonusInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoginBonusInfo_Statics::NewProp_LoginBonusInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoginBonusInfo_Statics::NewProp_loginBonusType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LoginBonusInfo" },
		{ "ModuleRelativePath", "Public/LoginBonusInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLoginBonusInfo_Statics::NewProp_loginBonusType = { "loginBonusType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoginBonusInfo, loginBonusType), METADATA_PARAMS(Z_Construct_UScriptStruct_FLoginBonusInfo_Statics::NewProp_loginBonusType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoginBonusInfo_Statics::NewProp_loginBonusType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoginBonusInfo_Statics::NewProp_loginBonusId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LoginBonusInfo" },
		{ "ModuleRelativePath", "Public/LoginBonusInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLoginBonusInfo_Statics::NewProp_loginBonusId = { "loginBonusId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoginBonusInfo, loginBonusId), METADATA_PARAMS(Z_Construct_UScriptStruct_FLoginBonusInfo_Statics::NewProp_loginBonusId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoginBonusInfo_Statics::NewProp_loginBonusId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLoginBonusInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoginBonusInfo_Statics::NewProp_progressList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoginBonusInfo_Statics::NewProp_progressList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoginBonusInfo_Statics::NewProp_endTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoginBonusInfo_Statics::NewProp_StartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoginBonusInfo_Statics::NewProp_LoginBonusInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoginBonusInfo_Statics::NewProp_loginBonusType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoginBonusInfo_Statics::NewProp_loginBonusId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLoginBonusInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CosmosWebApi,
		nullptr,
		&NewStructOps,
		"LoginBonusInfo",
		sizeof(FLoginBonusInfo),
		alignof(FLoginBonusInfo),
		Z_Construct_UScriptStruct_FLoginBonusInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoginBonusInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLoginBonusInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoginBonusInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLoginBonusInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLoginBonusInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CosmosWebApi();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LoginBonusInfo"), sizeof(FLoginBonusInfo), Get_Z_Construct_UScriptStruct_FLoginBonusInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLoginBonusInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLoginBonusInfo_Hash() { return 3181293057U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
