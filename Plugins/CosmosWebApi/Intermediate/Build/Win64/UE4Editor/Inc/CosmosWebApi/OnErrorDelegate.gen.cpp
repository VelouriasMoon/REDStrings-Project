// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CosmosWebApi/Public/OnErrorDelegate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnErrorDelegate() {}
// Cross Module References
	COSMOSWEBAPI_API UFunction* Z_Construct_UDelegateFunction_CosmosWebApi_OnError__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_CosmosWebApi();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_CosmosWebApi_OnError__DelegateSignature_Statics
	{
		struct _Script_CosmosWebApi_eventOnError_Parms
		{
			int32 code;
			FString errmsg;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_errmsg_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_errmsg;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_code;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CosmosWebApi_OnError__DelegateSignature_Statics::NewProp_errmsg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_CosmosWebApi_OnError__DelegateSignature_Statics::NewProp_errmsg = { "errmsg", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_CosmosWebApi_eventOnError_Parms, errmsg), METADATA_PARAMS(Z_Construct_UDelegateFunction_CosmosWebApi_OnError__DelegateSignature_Statics::NewProp_errmsg_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CosmosWebApi_OnError__DelegateSignature_Statics::NewProp_errmsg_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_CosmosWebApi_OnError__DelegateSignature_Statics::NewProp_code = { "code", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_CosmosWebApi_eventOnError_Parms, code), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CosmosWebApi_OnError__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CosmosWebApi_OnError__DelegateSignature_Statics::NewProp_errmsg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CosmosWebApi_OnError__DelegateSignature_Statics::NewProp_code,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CosmosWebApi_OnError__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnErrorDelegate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CosmosWebApi_OnError__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CosmosWebApi, nullptr, "OnError__DelegateSignature", nullptr, nullptr, sizeof(_Script_CosmosWebApi_eventOnError_Parms), Z_Construct_UDelegateFunction_CosmosWebApi_OnError__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CosmosWebApi_OnError__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CosmosWebApi_OnError__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CosmosWebApi_OnError__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CosmosWebApi_OnError__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_CosmosWebApi_OnError__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
