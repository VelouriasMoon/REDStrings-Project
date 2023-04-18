// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CosmosWebApi/Public/LobbyInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLobbyInfo() {}
// Cross Module References
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FLobbyInfo();
	UPackage* Z_Construct_UPackage__Script_CosmosWebApi();
// End Cross Module References
class UScriptStruct* FLobbyInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COSMOSWEBAPI_API uint32 Get_Z_Construct_UScriptStruct_FLobbyInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLobbyInfo, Z_Construct_UPackage__Script_CosmosWebApi(), TEXT("LobbyInfo"), sizeof(FLobbyInfo), Get_Z_Construct_UScriptStruct_FLobbyInfo_Hash());
	}
	return Singleton;
}
template<> COSMOSWEBAPI_API UScriptStruct* StaticStruct<FLobbyInfo>()
{
	return FLobbyInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLobbyInfo(FLobbyInfo::StaticStruct, TEXT("/Script/CosmosWebApi"), TEXT("LobbyInfo"), false, nullptr, nullptr);
static struct FScriptStruct_CosmosWebApi_StaticRegisterNativesFLobbyInfo
{
	FScriptStruct_CosmosWebApi_StaticRegisterNativesFLobbyInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LobbyInfo")),new UScriptStruct::TCppStructOps<FLobbyInfo>);
	}
} ScriptStruct_CosmosWebApi_StaticRegisterNativesFLobbyInfo;
	struct Z_Construct_UScriptStruct_FLobbyInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LobbyInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Port;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ip_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_enterMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_enterMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_enterNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_enterNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_nameId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_nameId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lobbyId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_lobbyId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_areaId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_areaId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_regionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_regionId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LobbyInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLobbyInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLobbyInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyInfo_Statics::NewProp_LobbyInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LobbyInfo" },
		{ "ModuleRelativePath", "Public/LobbyInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLobbyInfo_Statics::NewProp_LobbyInfo = { "LobbyInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLobbyInfo, LobbyInfo), METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyInfo_Statics::NewProp_LobbyInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyInfo_Statics::NewProp_LobbyInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyInfo_Statics::NewProp_Port_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LobbyInfo" },
		{ "ModuleRelativePath", "Public/LobbyInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLobbyInfo_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLobbyInfo, Port), METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyInfo_Statics::NewProp_Port_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyInfo_Statics::NewProp_Port_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyInfo_Statics::NewProp_ip_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LobbyInfo" },
		{ "ModuleRelativePath", "Public/LobbyInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLobbyInfo_Statics::NewProp_ip = { "ip", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLobbyInfo, ip), METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyInfo_Statics::NewProp_ip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyInfo_Statics::NewProp_ip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyInfo_Statics::NewProp_enterMax_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LobbyInfo" },
		{ "ModuleRelativePath", "Public/LobbyInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLobbyInfo_Statics::NewProp_enterMax = { "enterMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLobbyInfo, enterMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyInfo_Statics::NewProp_enterMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyInfo_Statics::NewProp_enterMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyInfo_Statics::NewProp_enterNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LobbyInfo" },
		{ "ModuleRelativePath", "Public/LobbyInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLobbyInfo_Statics::NewProp_enterNum = { "enterNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLobbyInfo, enterNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyInfo_Statics::NewProp_enterNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyInfo_Statics::NewProp_enterNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyInfo_Statics::NewProp_nameId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LobbyInfo" },
		{ "ModuleRelativePath", "Public/LobbyInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLobbyInfo_Statics::NewProp_nameId = { "nameId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLobbyInfo, nameId), METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyInfo_Statics::NewProp_nameId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyInfo_Statics::NewProp_nameId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyInfo_Statics::NewProp_lobbyId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LobbyInfo" },
		{ "ModuleRelativePath", "Public/LobbyInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLobbyInfo_Statics::NewProp_lobbyId = { "lobbyId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLobbyInfo, lobbyId), METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyInfo_Statics::NewProp_lobbyId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyInfo_Statics::NewProp_lobbyId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyInfo_Statics::NewProp_areaId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LobbyInfo" },
		{ "ModuleRelativePath", "Public/LobbyInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLobbyInfo_Statics::NewProp_areaId = { "areaId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLobbyInfo, areaId), METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyInfo_Statics::NewProp_areaId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyInfo_Statics::NewProp_areaId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyInfo_Statics::NewProp_regionId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LobbyInfo" },
		{ "ModuleRelativePath", "Public/LobbyInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLobbyInfo_Statics::NewProp_regionId = { "regionId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLobbyInfo, regionId), METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyInfo_Statics::NewProp_regionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyInfo_Statics::NewProp_regionId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLobbyInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyInfo_Statics::NewProp_LobbyInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyInfo_Statics::NewProp_Port,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyInfo_Statics::NewProp_ip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyInfo_Statics::NewProp_enterMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyInfo_Statics::NewProp_enterNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyInfo_Statics::NewProp_nameId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyInfo_Statics::NewProp_lobbyId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyInfo_Statics::NewProp_areaId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyInfo_Statics::NewProp_regionId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLobbyInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CosmosWebApi,
		nullptr,
		&NewStructOps,
		"LobbyInfo",
		sizeof(FLobbyInfo),
		alignof(FLobbyInfo),
		Z_Construct_UScriptStruct_FLobbyInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLobbyInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLobbyInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CosmosWebApi();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LobbyInfo"), sizeof(FLobbyInfo), Get_Z_Construct_UScriptStruct_FLobbyInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLobbyInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLobbyInfo_Hash() { return 2957896878U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
