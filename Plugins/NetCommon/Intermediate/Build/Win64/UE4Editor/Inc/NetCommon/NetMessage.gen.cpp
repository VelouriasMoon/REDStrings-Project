// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetCommon/Public/NetMessage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetMessage() {}
// Cross Module References
	NETCOMMON_API UClass* Z_Construct_UClass_UNetMessage_NoRegister();
	NETCOMMON_API UClass* Z_Construct_UClass_UNetMessage();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_NetCommon();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UNetMessage::execCreate)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNetMessage**)Z_Param__Result=UNetMessage::Create(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNetMessage::execDump)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->Dump(Z_Param_Prefix);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNetMessage::execDumpHttp)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->DumpHttp(Z_Param_Prefix);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNetMessage::execDumpHttpHeader)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->DumpHttpHeader(Z_Param_Prefix);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNetMessage::execSet)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ID);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNetMessage**)Z_Param__Result=P_THIS->Set(Z_Param_ID,Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNetMessage::execToJson)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->ToJson();
		P_NATIVE_END;
	}
	void UNetMessage::StaticRegisterNativesUNetMessage()
	{
		UClass* Class = UNetMessage::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Create", &UNetMessage::execCreate },
			{ "Dump", &UNetMessage::execDump },
			{ "DumpHttp", &UNetMessage::execDumpHttp },
			{ "DumpHttpHeader", &UNetMessage::execDumpHttpHeader },
			{ "Set", &UNetMessage::execSet },
			{ "ToJson", &UNetMessage::execToJson },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNetMessage_Create_Statics
	{
		struct NetMessage_eventCreate_Parms
		{
			UObject* WorldContextObject;
			UNetMessage* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNetMessage_Create_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NetMessage_eventCreate_Parms, ReturnValue), Z_Construct_UClass_UNetMessage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNetMessage_Create_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NetMessage_eventCreate_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNetMessage_Create_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetMessage_Create_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetMessage_Create_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNetMessage_Create_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NetMessage.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNetMessage_Create_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNetMessage, nullptr, "Create", nullptr, nullptr, sizeof(NetMessage_eventCreate_Parms), Z_Construct_UFunction_UNetMessage_Create_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetMessage_Create_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNetMessage_Create_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetMessage_Create_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNetMessage_Create()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNetMessage_Create_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNetMessage_Dump_Statics
	{
		struct NetMessage_eventDump_Parms
		{
			FString Prefix;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Prefix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Prefix;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNetMessage_Dump_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NetMessage_eventDump_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNetMessage_Dump_Statics::NewProp_Prefix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNetMessage_Dump_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NetMessage_eventDump_Parms, Prefix), METADATA_PARAMS(Z_Construct_UFunction_UNetMessage_Dump_Statics::NewProp_Prefix_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetMessage_Dump_Statics::NewProp_Prefix_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNetMessage_Dump_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetMessage_Dump_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetMessage_Dump_Statics::NewProp_Prefix,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNetMessage_Dump_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NetMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNetMessage_Dump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNetMessage, nullptr, "Dump", nullptr, nullptr, sizeof(NetMessage_eventDump_Parms), Z_Construct_UFunction_UNetMessage_Dump_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetMessage_Dump_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNetMessage_Dump_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetMessage_Dump_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNetMessage_Dump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNetMessage_Dump_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNetMessage_DumpHttp_Statics
	{
		struct NetMessage_eventDumpHttp_Parms
		{
			FString Prefix;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Prefix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Prefix;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNetMessage_DumpHttp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NetMessage_eventDumpHttp_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNetMessage_DumpHttp_Statics::NewProp_Prefix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNetMessage_DumpHttp_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NetMessage_eventDumpHttp_Parms, Prefix), METADATA_PARAMS(Z_Construct_UFunction_UNetMessage_DumpHttp_Statics::NewProp_Prefix_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetMessage_DumpHttp_Statics::NewProp_Prefix_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNetMessage_DumpHttp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetMessage_DumpHttp_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetMessage_DumpHttp_Statics::NewProp_Prefix,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNetMessage_DumpHttp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NetMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNetMessage_DumpHttp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNetMessage, nullptr, "DumpHttp", nullptr, nullptr, sizeof(NetMessage_eventDumpHttp_Parms), Z_Construct_UFunction_UNetMessage_DumpHttp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetMessage_DumpHttp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNetMessage_DumpHttp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetMessage_DumpHttp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNetMessage_DumpHttp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNetMessage_DumpHttp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNetMessage_DumpHttpHeader_Statics
	{
		struct NetMessage_eventDumpHttpHeader_Parms
		{
			FString Prefix;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Prefix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Prefix;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNetMessage_DumpHttpHeader_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NetMessage_eventDumpHttpHeader_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNetMessage_DumpHttpHeader_Statics::NewProp_Prefix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNetMessage_DumpHttpHeader_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NetMessage_eventDumpHttpHeader_Parms, Prefix), METADATA_PARAMS(Z_Construct_UFunction_UNetMessage_DumpHttpHeader_Statics::NewProp_Prefix_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetMessage_DumpHttpHeader_Statics::NewProp_Prefix_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNetMessage_DumpHttpHeader_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetMessage_DumpHttpHeader_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetMessage_DumpHttpHeader_Statics::NewProp_Prefix,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNetMessage_DumpHttpHeader_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NetMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNetMessage_DumpHttpHeader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNetMessage, nullptr, "DumpHttpHeader", nullptr, nullptr, sizeof(NetMessage_eventDumpHttpHeader_Parms), Z_Construct_UFunction_UNetMessage_DumpHttpHeader_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetMessage_DumpHttpHeader_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNetMessage_DumpHttpHeader_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetMessage_DumpHttpHeader_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNetMessage_DumpHttpHeader()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNetMessage_DumpHttpHeader_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNetMessage_Set_Statics
	{
		struct NetMessage_eventSet_Parms
		{
			int32 ID;
			TArray<uint8> Data;
			UNetMessage* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNetMessage_Set_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NetMessage_eventSet_Parms, ReturnValue), Z_Construct_UClass_UNetMessage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNetMessage_Set_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNetMessage_Set_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NetMessage_eventSet_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNetMessage_Set_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetMessage_Set_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNetMessage_Set_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNetMessage_Set_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NetMessage_eventSet_Parms, ID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNetMessage_Set_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetMessage_Set_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetMessage_Set_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetMessage_Set_Statics::NewProp_Data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetMessage_Set_Statics::NewProp_ID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNetMessage_Set_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NetMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNetMessage_Set_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNetMessage, nullptr, "Set", nullptr, nullptr, sizeof(NetMessage_eventSet_Parms), Z_Construct_UFunction_UNetMessage_Set_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetMessage_Set_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNetMessage_Set_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetMessage_Set_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNetMessage_Set()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNetMessage_Set_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNetMessage_ToJson_Statics
	{
		struct NetMessage_eventToJson_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNetMessage_ToJson_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NetMessage_eventToJson_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNetMessage_ToJson_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetMessage_ToJson_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNetMessage_ToJson_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NetMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNetMessage_ToJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNetMessage, nullptr, "ToJson", nullptr, nullptr, sizeof(NetMessage_eventToJson_Parms), Z_Construct_UFunction_UNetMessage_ToJson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetMessage_ToJson_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNetMessage_ToJson_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetMessage_ToJson_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNetMessage_ToJson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNetMessage_ToJson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UNetMessage_NoRegister()
	{
		return UNetMessage::StaticClass();
	}
	struct Z_Construct_UClass_UNetMessage_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNetMessage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NetCommon,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNetMessage_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNetMessage_Create, "Create" }, // 3434921076
		{ &Z_Construct_UFunction_UNetMessage_Dump, "Dump" }, // 4208565013
		{ &Z_Construct_UFunction_UNetMessage_DumpHttp, "DumpHttp" }, // 2151070930
		{ &Z_Construct_UFunction_UNetMessage_DumpHttpHeader, "DumpHttpHeader" }, // 2821586413
		{ &Z_Construct_UFunction_UNetMessage_Set, "Set" }, // 2526290358
		{ &Z_Construct_UFunction_UNetMessage_ToJson, "ToJson" }, // 83687253
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetMessage_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "NetMessage.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NetMessage.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNetMessage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetMessage>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNetMessage_Statics::ClassParams = {
		&UNetMessage::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNetMessage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNetMessage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNetMessage()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNetMessage_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNetMessage, 1876230801);
	template<> NETCOMMON_API UClass* StaticClass<UNetMessage>()
	{
		return UNetMessage::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNetMessage(Z_Construct_UClass_UNetMessage, &UNetMessage::StaticClass, TEXT("/Script/NetCommon"), TEXT("UNetMessage"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNetMessage);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
