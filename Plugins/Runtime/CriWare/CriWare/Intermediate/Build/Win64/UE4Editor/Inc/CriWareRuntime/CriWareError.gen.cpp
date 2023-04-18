// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Classes/CriWareError.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCriWareError() {}
// Cross Module References
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UCriWareError_OnCriWareError__DelegateSignature();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UCriWareError();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FCriWareErrorInfo();
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_ECriWareErrorType();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UCriWareError_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UCriWareError_OnCriWareError__DelegateSignature_Statics
	{
		struct CriWareError_eventOnCriWareError_Parms
		{
			FCriWareErrorInfo ErrorInfo;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ErrorInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UCriWareError_OnCriWareError__DelegateSignature_Statics::NewProp_ErrorInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UCriWareError_OnCriWareError__DelegateSignature_Statics::NewProp_ErrorInfo = { "ErrorInfo", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CriWareError_eventOnCriWareError_Parms, ErrorInfo), Z_Construct_UScriptStruct_FCriWareErrorInfo, METADATA_PARAMS(Z_Construct_UDelegateFunction_UCriWareError_OnCriWareError__DelegateSignature_Statics::NewProp_ErrorInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCriWareError_OnCriWareError__DelegateSignature_Statics::NewProp_ErrorInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UCriWareError_OnCriWareError__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UCriWareError_OnCriWareError__DelegateSignature_Statics::NewProp_ErrorInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UCriWareError_OnCriWareError__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/CriWareError.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UCriWareError_OnCriWareError__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCriWareError, nullptr, "OnCriWareError__DelegateSignature", nullptr, nullptr, sizeof(CriWareError_eventOnCriWareError_Parms), Z_Construct_UDelegateFunction_UCriWareError_OnCriWareError__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCriWareError_OnCriWareError__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UCriWareError_OnCriWareError__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCriWareError_OnCriWareError__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UCriWareError_OnCriWareError__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UCriWareError_OnCriWareError__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* ECriWareErrorType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CriWareRuntime_ECriWareErrorType, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("ECriWareErrorType"));
		}
		return Singleton;
	}
	template<> CRIWARERUNTIME_API UEnum* StaticEnum<ECriWareErrorType>()
	{
		return ECriWareErrorType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECriWareErrorType(ECriWareErrorType_StaticEnum, TEXT("/Script/CriWareRuntime"), TEXT("ECriWareErrorType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CriWareRuntime_ECriWareErrorType_Hash() { return 1169694797U; }
	UEnum* Z_Construct_UEnum_CriWareRuntime_ECriWareErrorType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECriWareErrorType"), 0, Get_Z_Construct_UEnum_CriWareRuntime_ECriWareErrorType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECriWareErrorType::Warning", (int64)ECriWareErrorType::Warning },
				{ "ECriWareErrorType::Error", (int64)ECriWareErrorType::Error },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Category", "CriWare Error" },
				{ "Comment", "/* \xe3\x82\xa8\xe3\x83\xa9\xe3\x83\xbc\xe3\x82\xbf\xe3\x82\xa4\xe3\x83\x97 */" },
				{ "Error.Comment", "/* \xe3\x82\xa8\xe3\x83\xa9\xe3\x83\xbc */" },
				{ "Error.Name", "ECriWareErrorType::Error" },
				{ "Error.ToolTip", "\xe3\x82\xa8\xe3\x83\xa9\xe3\x83\xbc" },
				{ "ModuleRelativePath", "Classes/CriWareError.h" },
				{ "ToolTip", "\xe3\x82\xa8\xe3\x83\xa9\xe3\x83\xbc\xe3\x82\xbf\xe3\x82\xa4\xe3\x83\x97" },
				{ "Warning.Comment", "/* \xe8\xad\xa6\xe5\x91\x8a */" },
				{ "Warning.Name", "ECriWareErrorType::Warning" },
				{ "Warning.ToolTip", "\xe8\xad\xa6\xe5\x91\x8a" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime,
				nullptr,
				"ECriWareErrorType",
				"ECriWareErrorType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FCriWareErrorInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FCriWareErrorInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCriWareErrorInfo, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("CriWareErrorInfo"), sizeof(FCriWareErrorInfo), Get_Z_Construct_UScriptStruct_FCriWareErrorInfo_Hash());
	}
	return Singleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FCriWareErrorInfo>()
{
	return FCriWareErrorInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCriWareErrorInfo(FCriWareErrorInfo::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("CriWareErrorInfo"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFCriWareErrorInfo
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFCriWareErrorInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CriWareErrorInfo")),new UScriptStruct::TCppStructOps<FCriWareErrorInfo>);
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFCriWareErrorInfo;
	struct Z_Construct_UScriptStruct_FCriWareErrorInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ErrorType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ErrorType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCriWareErrorInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "CriWare Error" },
		{ "Comment", "/* \xe3\x82\xa8\xe3\x83\xa9\xe3\x83\xbc\xe3\x83\x91\xe3\x83\xa9\xe3\x83\xa1\xe3\x83\xbc\xe3\x82\xbf */" },
		{ "ModuleRelativePath", "Classes/CriWareError.h" },
		{ "ToolTip", "\xe3\x82\xa8\xe3\x83\xa9\xe3\x83\xbc\xe3\x83\x91\xe3\x83\xa9\xe3\x83\xa1\xe3\x83\xbc\xe3\x82\xbf" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCriWareErrorInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCriWareErrorInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCriWareErrorInfo_Statics::NewProp_Message_MetaData[] = {
		{ "Category", "Error" },
		{ "ModuleRelativePath", "Classes/CriWareError.h" },
		{ "ToolTip", "The message associed with this error." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCriWareErrorInfo_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCriWareErrorInfo, Message), METADATA_PARAMS(Z_Construct_UScriptStruct_FCriWareErrorInfo_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCriWareErrorInfo_Statics::NewProp_Message_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCriWareErrorInfo_Statics::NewProp_ErrorType_MetaData[] = {
		{ "Category", "Error" },
		{ "ModuleRelativePath", "Classes/CriWareError.h" },
		{ "ToolTip", "The error type." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCriWareErrorInfo_Statics::NewProp_ErrorType = { "ErrorType", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCriWareErrorInfo, ErrorType), Z_Construct_UEnum_CriWareRuntime_ECriWareErrorType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCriWareErrorInfo_Statics::NewProp_ErrorType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCriWareErrorInfo_Statics::NewProp_ErrorType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCriWareErrorInfo_Statics::NewProp_ErrorType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCriWareErrorInfo_Statics::NewProp_ErrorID_MetaData[] = {
		{ "Category", "Error" },
		{ "ModuleRelativePath", "Classes/CriWareError.h" },
		{ "ToolTip", "The original CriWare error ID." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCriWareErrorInfo_Statics::NewProp_ErrorID = { "ErrorID", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCriWareErrorInfo, ErrorID), METADATA_PARAMS(Z_Construct_UScriptStruct_FCriWareErrorInfo_Statics::NewProp_ErrorID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCriWareErrorInfo_Statics::NewProp_ErrorID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCriWareErrorInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCriWareErrorInfo_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCriWareErrorInfo_Statics::NewProp_ErrorType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCriWareErrorInfo_Statics::NewProp_ErrorType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCriWareErrorInfo_Statics::NewProp_ErrorID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCriWareErrorInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"CriWareErrorInfo",
		sizeof(FCriWareErrorInfo),
		alignof(FCriWareErrorInfo),
		Z_Construct_UScriptStruct_FCriWareErrorInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCriWareErrorInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCriWareErrorInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCriWareErrorInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCriWareErrorInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCriWareErrorInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CriWareErrorInfo"), sizeof(FCriWareErrorInfo), Get_Z_Construct_UScriptStruct_FCriWareErrorInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCriWareErrorInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCriWareErrorInfo_Hash() { return 1940292521U; }
	DEFINE_FUNCTION(UCriWareError::execGetCriWareError)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCriWareError**)Z_Param__Result=UCriWareError::GetCriWareError();
		P_NATIVE_END;
	}
	void UCriWareError::StaticRegisterNativesUCriWareError()
	{
		UClass* Class = UCriWareError::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCriWareError", &UCriWareError::execGetCriWareError },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCriWareError_GetCriWareError_Statics
	{
		struct CriWareError_eventGetCriWareError_Parms
		{
			UCriWareError* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCriWareError_GetCriWareError_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CriWareError_eventGetCriWareError_Parms, ReturnValue), Z_Construct_UClass_UCriWareError_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCriWareError_GetCriWareError_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCriWareError_GetCriWareError_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCriWareError_GetCriWareError_Statics::Function_MetaDataParams[] = {
		{ "Category", "CriWare Error" },
		{ "ModuleRelativePath", "Classes/CriWareError.h" },
		{ "ToolTip", "Gets the UCriWareError instance." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCriWareError_GetCriWareError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCriWareError, nullptr, "GetCriWareError", nullptr, nullptr, sizeof(CriWareError_eventGetCriWareError_Parms), Z_Construct_UFunction_UCriWareError_GetCriWareError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCriWareError_GetCriWareError_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCriWareError_GetCriWareError_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCriWareError_GetCriWareError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCriWareError_GetCriWareError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCriWareError_GetCriWareError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCriWareError_NoRegister()
	{
		return UCriWareError::StaticClass();
	}
	struct Z_Construct_UClass_UCriWareError_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCriWareError_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCriWareError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCriWareError_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCriWareError_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCriWareError_GetCriWareError, "GetCriWareError" }, // 4174482175
		{ &Z_Construct_UDelegateFunction_UCriWareError_OnCriWareError__DelegateSignature, "OnCriWareError__DelegateSignature" }, // 4266857666
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWareError_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "CriWare Error" },
		{ "IncludePath", "CriWareError.h" },
		{ "ModuleRelativePath", "Classes/CriWareError.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWareError_Statics::NewProp_OnCriWareError_MetaData[] = {
		{ "Category", "CriWare Error" },
		{ "ModuleRelativePath", "Classes/CriWareError.h" },
		{ "ToolTip", "An event triggered when an error from CriWare is recevied." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCriWareError_Statics::NewProp_OnCriWareError = { "OnCriWareError", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCriWareError, OnCriWareError), Z_Construct_UDelegateFunction_UCriWareError_OnCriWareError__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCriWareError_Statics::NewProp_OnCriWareError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareError_Statics::NewProp_OnCriWareError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCriWareError_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWareError_Statics::NewProp_OnCriWareError,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCriWareError_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCriWareError>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCriWareError_Statics::ClassParams = {
		&UCriWareError::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCriWareError_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareError_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCriWareError_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareError_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCriWareError()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCriWareError_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCriWareError, 485848981);
	template<> CRIWARERUNTIME_API UClass* StaticClass<UCriWareError>()
	{
		return UCriWareError::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCriWareError(Z_Construct_UClass_UCriWareError, &UCriWareError::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UCriWareError"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCriWareError);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
