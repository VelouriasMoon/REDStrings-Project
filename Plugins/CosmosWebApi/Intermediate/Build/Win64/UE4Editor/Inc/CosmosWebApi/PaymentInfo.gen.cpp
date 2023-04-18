// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CosmosWebApi/Public/PaymentInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaymentInfo() {}
// Cross Module References
	COSMOSWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FPaymentInfo();
	UPackage* Z_Construct_UPackage__Script_CosmosWebApi();
// End Cross Module References
class UScriptStruct* FPaymentInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COSMOSWEBAPI_API uint32 Get_Z_Construct_UScriptStruct_FPaymentInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPaymentInfo, Z_Construct_UPackage__Script_CosmosWebApi(), TEXT("PaymentInfo"), sizeof(FPaymentInfo), Get_Z_Construct_UScriptStruct_FPaymentInfo_Hash());
	}
	return Singleton;
}
template<> COSMOSWEBAPI_API UScriptStruct* StaticStruct<FPaymentInfo>()
{
	return FPaymentInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPaymentInfo(FPaymentInfo::StaticStruct, TEXT("/Script/CosmosWebApi"), TEXT("PaymentInfo"), false, nullptr, nullptr);
static struct FScriptStruct_CosmosWebApi_StaticRegisterNativesFPaymentInfo
{
	FScriptStruct_CosmosWebApi_StaticRegisterNativesFPaymentInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PaymentInfo")),new UScriptStruct::TCppStructOps<FPaymentInfo>);
	}
} ScriptStruct_CosmosWebApi_StaticRegisterNativesFPaymentInfo;
	struct Z_Construct_UScriptStruct_FPaymentInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_paymentItemid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_paymentItemid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Num_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Num;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_limit_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_limit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_perExecution_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_perExecution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_paymentType_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_paymentType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_paymentId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_paymentId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaymentInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PaymentInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPaymentInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPaymentInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaymentInfo_Statics::NewProp_paymentItemid_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PaymentInfo" },
		{ "ModuleRelativePath", "Public/PaymentInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPaymentInfo_Statics::NewProp_paymentItemid = { "paymentItemid", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPaymentInfo, paymentItemid), METADATA_PARAMS(Z_Construct_UScriptStruct_FPaymentInfo_Statics::NewProp_paymentItemid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaymentInfo_Statics::NewProp_paymentItemid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaymentInfo_Statics::NewProp_Num_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PaymentInfo" },
		{ "ModuleRelativePath", "Public/PaymentInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPaymentInfo_Statics::NewProp_Num = { "Num", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPaymentInfo, Num), METADATA_PARAMS(Z_Construct_UScriptStruct_FPaymentInfo_Statics::NewProp_Num_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaymentInfo_Statics::NewProp_Num_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaymentInfo_Statics::NewProp_limit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PaymentInfo" },
		{ "ModuleRelativePath", "Public/PaymentInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPaymentInfo_Statics::NewProp_limit = { "limit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPaymentInfo, limit), METADATA_PARAMS(Z_Construct_UScriptStruct_FPaymentInfo_Statics::NewProp_limit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaymentInfo_Statics::NewProp_limit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaymentInfo_Statics::NewProp_perExecution_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PaymentInfo" },
		{ "ModuleRelativePath", "Public/PaymentInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPaymentInfo_Statics::NewProp_perExecution = { "perExecution", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPaymentInfo, perExecution), METADATA_PARAMS(Z_Construct_UScriptStruct_FPaymentInfo_Statics::NewProp_perExecution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaymentInfo_Statics::NewProp_perExecution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaymentInfo_Statics::NewProp_paymentType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PaymentInfo" },
		{ "ModuleRelativePath", "Public/PaymentInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPaymentInfo_Statics::NewProp_paymentType = { "paymentType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPaymentInfo, paymentType), METADATA_PARAMS(Z_Construct_UScriptStruct_FPaymentInfo_Statics::NewProp_paymentType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaymentInfo_Statics::NewProp_paymentType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaymentInfo_Statics::NewProp_paymentId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PaymentInfo" },
		{ "ModuleRelativePath", "Public/PaymentInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPaymentInfo_Statics::NewProp_paymentId = { "paymentId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPaymentInfo, paymentId), METADATA_PARAMS(Z_Construct_UScriptStruct_FPaymentInfo_Statics::NewProp_paymentId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaymentInfo_Statics::NewProp_paymentId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPaymentInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaymentInfo_Statics::NewProp_paymentItemid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaymentInfo_Statics::NewProp_Num,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaymentInfo_Statics::NewProp_limit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaymentInfo_Statics::NewProp_perExecution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaymentInfo_Statics::NewProp_paymentType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaymentInfo_Statics::NewProp_paymentId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPaymentInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CosmosWebApi,
		nullptr,
		&NewStructOps,
		"PaymentInfo",
		sizeof(FPaymentInfo),
		alignof(FPaymentInfo),
		Z_Construct_UScriptStruct_FPaymentInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaymentInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPaymentInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaymentInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPaymentInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPaymentInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CosmosWebApi();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PaymentInfo"), sizeof(FPaymentInfo), Get_Z_Construct_UScriptStruct_FPaymentInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPaymentInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPaymentInfo_Hash() { return 2834631643U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
