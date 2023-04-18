// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CosmosWebApi/Public/SavedataDownloadResponseParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSavedataDownloadResponseParam() {}
// Cross Module References
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FSavedataDownloadResponseParam();
	UPackage* Z_Construct_UPackage__Script_CosmosWebApi();
// End Cross Module References
class UScriptStruct* FSavedataDownloadResponseParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COSMOSWEBAPI_API uint32 Get_Z_Construct_UScriptStruct_FSavedataDownloadResponseParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSavedataDownloadResponseParam, Z_Construct_UPackage__Script_CosmosWebApi(), TEXT("SavedataDownloadResponseParam"), sizeof(FSavedataDownloadResponseParam), Get_Z_Construct_UScriptStruct_FSavedataDownloadResponseParam_Hash());
	}
	return Singleton;
}
template<> COSMOSWEBAPI_API UScriptStruct* StaticStruct<FSavedataDownloadResponseParam>()
{
	return FSavedataDownloadResponseParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSavedataDownloadResponseParam(FSavedataDownloadResponseParam::StaticStruct, TEXT("/Script/CosmosWebApi"), TEXT("SavedataDownloadResponseParam"), false, nullptr, nullptr);
static struct FScriptStruct_CosmosWebApi_StaticRegisterNativesFSavedataDownloadResponseParam
{
	FScriptStruct_CosmosWebApi_StaticRegisterNativesFSavedataDownloadResponseParam()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SavedataDownloadResponseParam")),new UScriptStruct::TCppStructOps<FSavedataDownloadResponseParam>);
	}
} ScriptStruct_CosmosWebApi_StaticRegisterNativesFSavedataDownloadResponseParam;
	struct Z_Construct_UScriptStruct_FSavedataDownloadResponseParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_saveData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_saveData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Status;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSavedataDownloadResponseParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SavedataDownloadResponseParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSavedataDownloadResponseParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSavedataDownloadResponseParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSavedataDownloadResponseParam_Statics::NewProp_saveData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SavedataDownloadResponseParam" },
		{ "ModuleRelativePath", "Public/SavedataDownloadResponseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSavedataDownloadResponseParam_Statics::NewProp_saveData = { "saveData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSavedataDownloadResponseParam, saveData), METADATA_PARAMS(Z_Construct_UScriptStruct_FSavedataDownloadResponseParam_Statics::NewProp_saveData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSavedataDownloadResponseParam_Statics::NewProp_saveData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSavedataDownloadResponseParam_Statics::NewProp_Status_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SavedataDownloadResponseParam" },
		{ "ModuleRelativePath", "Public/SavedataDownloadResponseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSavedataDownloadResponseParam_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSavedataDownloadResponseParam, Status), METADATA_PARAMS(Z_Construct_UScriptStruct_FSavedataDownloadResponseParam_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSavedataDownloadResponseParam_Statics::NewProp_Status_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSavedataDownloadResponseParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSavedataDownloadResponseParam_Statics::NewProp_saveData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSavedataDownloadResponseParam_Statics::NewProp_Status,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSavedataDownloadResponseParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CosmosWebApi,
		nullptr,
		&NewStructOps,
		"SavedataDownloadResponseParam",
		sizeof(FSavedataDownloadResponseParam),
		alignof(FSavedataDownloadResponseParam),
		Z_Construct_UScriptStruct_FSavedataDownloadResponseParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSavedataDownloadResponseParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSavedataDownloadResponseParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSavedataDownloadResponseParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSavedataDownloadResponseParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSavedataDownloadResponseParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CosmosWebApi();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SavedataDownloadResponseParam"), sizeof(FSavedataDownloadResponseParam), Get_Z_Construct_UScriptStruct_FSavedataDownloadResponseParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSavedataDownloadResponseParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSavedataDownloadResponseParam_Hash() { return 4093951447U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
