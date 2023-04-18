// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CosmosWebApi/Public/RootBoxGetDetailResponseParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRootBoxGetDetailResponseParam() {}
// Cross Module References
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FRootBoxGetDetailResponseParam();
	UPackage* Z_Construct_UPackage__Script_CosmosWebApi();
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FPaymentInfo();
// End Cross Module References
class UScriptStruct* FRootBoxGetDetailResponseParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COSMOSWEBAPI_API uint32 Get_Z_Construct_UScriptStruct_FRootBoxGetDetailResponseParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRootBoxGetDetailResponseParam, Z_Construct_UPackage__Script_CosmosWebApi(), TEXT("RootBoxGetDetailResponseParam"), sizeof(FRootBoxGetDetailResponseParam), Get_Z_Construct_UScriptStruct_FRootBoxGetDetailResponseParam_Hash());
	}
	return Singleton;
}
template<> COSMOSWEBAPI_API UScriptStruct* StaticStruct<FRootBoxGetDetailResponseParam>()
{
	return FRootBoxGetDetailResponseParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRootBoxGetDetailResponseParam(FRootBoxGetDetailResponseParam::StaticStruct, TEXT("/Script/CosmosWebApi"), TEXT("RootBoxGetDetailResponseParam"), false, nullptr, nullptr);
static struct FScriptStruct_CosmosWebApi_StaticRegisterNativesFRootBoxGetDetailResponseParam
{
	FScriptStruct_CosmosWebApi_StaticRegisterNativesFRootBoxGetDetailResponseParam()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RootBoxGetDetailResponseParam")),new UScriptStruct::TCppStructOps<FRootBoxGetDetailResponseParam>);
	}
} ScriptStruct_CosmosWebApi_StaticRegisterNativesFRootBoxGetDetailResponseParam;
	struct Z_Construct_UScriptStruct_FRootBoxGetDetailResponseParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Option_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Option;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_paymentList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_paymentList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_paymentList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_endTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_endTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rootboxLavel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_rootboxLavel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rootboxId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_rootboxId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Status;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootBoxGetDetailResponseParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RootBoxGetDetailResponseParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRootBoxGetDetailResponseParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRootBoxGetDetailResponseParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootBoxGetDetailResponseParam_Statics::NewProp_Option_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RootBoxGetDetailResponseParam" },
		{ "ModuleRelativePath", "Public/RootBoxGetDetailResponseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRootBoxGetDetailResponseParam_Statics::NewProp_Option = { "Option", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRootBoxGetDetailResponseParam, Option), METADATA_PARAMS(Z_Construct_UScriptStruct_FRootBoxGetDetailResponseParam_Statics::NewProp_Option_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootBoxGetDetailResponseParam_Statics::NewProp_Option_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootBoxGetDetailResponseParam_Statics::NewProp_paymentList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RootBoxGetDetailResponseParam" },
		{ "ModuleRelativePath", "Public/RootBoxGetDetailResponseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRootBoxGetDetailResponseParam_Statics::NewProp_paymentList = { "paymentList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRootBoxGetDetailResponseParam, paymentList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRootBoxGetDetailResponseParam_Statics::NewProp_paymentList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootBoxGetDetailResponseParam_Statics::NewProp_paymentList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRootBoxGetDetailResponseParam_Statics::NewProp_paymentList_Inner = { "paymentList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPaymentInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootBoxGetDetailResponseParam_Statics::NewProp_endTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RootBoxGetDetailResponseParam" },
		{ "ModuleRelativePath", "Public/RootBoxGetDetailResponseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRootBoxGetDetailResponseParam_Statics::NewProp_endTime = { "endTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRootBoxGetDetailResponseParam, endTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FRootBoxGetDetailResponseParam_Statics::NewProp_endTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootBoxGetDetailResponseParam_Statics::NewProp_endTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootBoxGetDetailResponseParam_Statics::NewProp_StartTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RootBoxGetDetailResponseParam" },
		{ "ModuleRelativePath", "Public/RootBoxGetDetailResponseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRootBoxGetDetailResponseParam_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRootBoxGetDetailResponseParam, StartTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FRootBoxGetDetailResponseParam_Statics::NewProp_StartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootBoxGetDetailResponseParam_Statics::NewProp_StartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootBoxGetDetailResponseParam_Statics::NewProp_rootboxLavel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RootBoxGetDetailResponseParam" },
		{ "ModuleRelativePath", "Public/RootBoxGetDetailResponseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRootBoxGetDetailResponseParam_Statics::NewProp_rootboxLavel = { "rootboxLavel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRootBoxGetDetailResponseParam, rootboxLavel), METADATA_PARAMS(Z_Construct_UScriptStruct_FRootBoxGetDetailResponseParam_Statics::NewProp_rootboxLavel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootBoxGetDetailResponseParam_Statics::NewProp_rootboxLavel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootBoxGetDetailResponseParam_Statics::NewProp_rootboxId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RootBoxGetDetailResponseParam" },
		{ "ModuleRelativePath", "Public/RootBoxGetDetailResponseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRootBoxGetDetailResponseParam_Statics::NewProp_rootboxId = { "rootboxId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRootBoxGetDetailResponseParam, rootboxId), METADATA_PARAMS(Z_Construct_UScriptStruct_FRootBoxGetDetailResponseParam_Statics::NewProp_rootboxId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootBoxGetDetailResponseParam_Statics::NewProp_rootboxId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootBoxGetDetailResponseParam_Statics::NewProp_Status_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RootBoxGetDetailResponseParam" },
		{ "ModuleRelativePath", "Public/RootBoxGetDetailResponseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRootBoxGetDetailResponseParam_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRootBoxGetDetailResponseParam, Status), METADATA_PARAMS(Z_Construct_UScriptStruct_FRootBoxGetDetailResponseParam_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootBoxGetDetailResponseParam_Statics::NewProp_Status_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRootBoxGetDetailResponseParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootBoxGetDetailResponseParam_Statics::NewProp_Option,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootBoxGetDetailResponseParam_Statics::NewProp_paymentList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootBoxGetDetailResponseParam_Statics::NewProp_paymentList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootBoxGetDetailResponseParam_Statics::NewProp_endTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootBoxGetDetailResponseParam_Statics::NewProp_StartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootBoxGetDetailResponseParam_Statics::NewProp_rootboxLavel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootBoxGetDetailResponseParam_Statics::NewProp_rootboxId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootBoxGetDetailResponseParam_Statics::NewProp_Status,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRootBoxGetDetailResponseParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CosmosWebApi,
		nullptr,
		&NewStructOps,
		"RootBoxGetDetailResponseParam",
		sizeof(FRootBoxGetDetailResponseParam),
		alignof(FRootBoxGetDetailResponseParam),
		Z_Construct_UScriptStruct_FRootBoxGetDetailResponseParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootBoxGetDetailResponseParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRootBoxGetDetailResponseParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootBoxGetDetailResponseParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRootBoxGetDetailResponseParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRootBoxGetDetailResponseParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CosmosWebApi();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RootBoxGetDetailResponseParam"), sizeof(FRootBoxGetDetailResponseParam), Get_Z_Construct_UScriptStruct_FRootBoxGetDetailResponseParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRootBoxGetDetailResponseParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRootBoxGetDetailResponseParam_Hash() { return 4036076980U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
