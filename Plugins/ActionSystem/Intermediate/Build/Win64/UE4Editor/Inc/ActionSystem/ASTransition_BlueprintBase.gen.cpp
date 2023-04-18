// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionSystem/Public/ASTransition_BlueprintBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeASTransition_BlueprintBase() {}
// Cross Module References
	ACTIONSYSTEM_API UClass* Z_Construct_UClass_UASTransition_BlueprintBase_NoRegister();
	ACTIONSYSTEM_API UClass* Z_Construct_UClass_UASTransition_BlueprintBase();
	ACTIONSYSTEM_API UClass* Z_Construct_UClass_UASTransition_Base();
	UPackage* Z_Construct_UPackage__Script_ActionSystem();
	ACTIONSYSTEM_API UEnum* Z_Construct_UEnum_ActionSystem_EAnimCommandState();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UASTransition_BlueprintBase::execCheckCommand)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Command);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckCommand(Z_Param_Command);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UASTransition_BlueprintBase::execCheckCommandState)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Command);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<EAnimCommandState>*)Z_Param__Result=P_THIS->CheckCommandState(Z_Param_Command);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UASTransition_BlueprintBase::execGetAnimTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAnimTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UASTransition_BlueprintBase::execGetAnimTimeLength)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAnimTimeLength();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UASTransition_BlueprintBase::execGetElapsedTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetElapsedTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UASTransition_BlueprintBase::execIsPlayEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlayEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UASTransition_BlueprintBase::execIsPlayEndForce)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlayEndForce();
		P_NATIVE_END;
	}
	static FName NAME_UASTransition_BlueprintBase_ReceiveCanEnter = FName(TEXT("ReceiveCanEnter"));
	bool UASTransition_BlueprintBase::ReceiveCanEnter(UAnimInstance* AnimInstance) const
	{
		ASTransition_BlueprintBase_eventReceiveCanEnter_Parms Parms;
		Parms.AnimInstance=AnimInstance;
		const_cast<UASTransition_BlueprintBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UASTransition_BlueprintBase_ReceiveCanEnter),&Parms);
		return !!Parms.ReturnValue;
	}
	void UASTransition_BlueprintBase::StaticRegisterNativesUASTransition_BlueprintBase()
	{
		UClass* Class = UASTransition_BlueprintBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckCommand", &UASTransition_BlueprintBase::execCheckCommand },
			{ "CheckCommandState", &UASTransition_BlueprintBase::execCheckCommandState },
			{ "GetAnimTime", &UASTransition_BlueprintBase::execGetAnimTime },
			{ "GetAnimTimeLength", &UASTransition_BlueprintBase::execGetAnimTimeLength },
			{ "GetElapsedTime", &UASTransition_BlueprintBase::execGetElapsedTime },
			{ "IsPlayEnd", &UASTransition_BlueprintBase::execIsPlayEnd },
			{ "IsPlayEndForce", &UASTransition_BlueprintBase::execIsPlayEndForce },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UASTransition_BlueprintBase_CheckCommand_Statics
	{
		struct ASTransition_BlueprintBase_eventCheckCommand_Parms
		{
			FString Command;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Command_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Command;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UASTransition_BlueprintBase_CheckCommand_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ASTransition_BlueprintBase_eventCheckCommand_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UASTransition_BlueprintBase_CheckCommand_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASTransition_BlueprintBase_eventCheckCommand_Parms), &Z_Construct_UFunction_UASTransition_BlueprintBase_CheckCommand_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UASTransition_BlueprintBase_CheckCommand_Statics::NewProp_Command_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UASTransition_BlueprintBase_CheckCommand_Statics::NewProp_Command = { "Command", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTransition_BlueprintBase_eventCheckCommand_Parms, Command), METADATA_PARAMS(Z_Construct_UFunction_UASTransition_BlueprintBase_CheckCommand_Statics::NewProp_Command_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UASTransition_BlueprintBase_CheckCommand_Statics::NewProp_Command_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UASTransition_BlueprintBase_CheckCommand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UASTransition_BlueprintBase_CheckCommand_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UASTransition_BlueprintBase_CheckCommand_Statics::NewProp_Command,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UASTransition_BlueprintBase_CheckCommand_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ASTransition_BlueprintBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UASTransition_BlueprintBase_CheckCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UASTransition_BlueprintBase, nullptr, "CheckCommand", nullptr, nullptr, sizeof(ASTransition_BlueprintBase_eventCheckCommand_Parms), Z_Construct_UFunction_UASTransition_BlueprintBase_CheckCommand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UASTransition_BlueprintBase_CheckCommand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UASTransition_BlueprintBase_CheckCommand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UASTransition_BlueprintBase_CheckCommand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UASTransition_BlueprintBase_CheckCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UASTransition_BlueprintBase_CheckCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UASTransition_BlueprintBase_CheckCommandState_Statics
	{
		struct ASTransition_BlueprintBase_eventCheckCommandState_Parms
		{
			FString Command;
			TEnumAsByte<EAnimCommandState> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Command_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Command;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UASTransition_BlueprintBase_CheckCommandState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTransition_BlueprintBase_eventCheckCommandState_Parms, ReturnValue), Z_Construct_UEnum_ActionSystem_EAnimCommandState, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UASTransition_BlueprintBase_CheckCommandState_Statics::NewProp_Command_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UASTransition_BlueprintBase_CheckCommandState_Statics::NewProp_Command = { "Command", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTransition_BlueprintBase_eventCheckCommandState_Parms, Command), METADATA_PARAMS(Z_Construct_UFunction_UASTransition_BlueprintBase_CheckCommandState_Statics::NewProp_Command_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UASTransition_BlueprintBase_CheckCommandState_Statics::NewProp_Command_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UASTransition_BlueprintBase_CheckCommandState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UASTransition_BlueprintBase_CheckCommandState_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UASTransition_BlueprintBase_CheckCommandState_Statics::NewProp_Command,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UASTransition_BlueprintBase_CheckCommandState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ASTransition_BlueprintBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UASTransition_BlueprintBase_CheckCommandState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UASTransition_BlueprintBase, nullptr, "CheckCommandState", nullptr, nullptr, sizeof(ASTransition_BlueprintBase_eventCheckCommandState_Parms), Z_Construct_UFunction_UASTransition_BlueprintBase_CheckCommandState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UASTransition_BlueprintBase_CheckCommandState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UASTransition_BlueprintBase_CheckCommandState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UASTransition_BlueprintBase_CheckCommandState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UASTransition_BlueprintBase_CheckCommandState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UASTransition_BlueprintBase_CheckCommandState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UASTransition_BlueprintBase_GetAnimTime_Statics
	{
		struct ASTransition_BlueprintBase_eventGetAnimTime_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UASTransition_BlueprintBase_GetAnimTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTransition_BlueprintBase_eventGetAnimTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UASTransition_BlueprintBase_GetAnimTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UASTransition_BlueprintBase_GetAnimTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UASTransition_BlueprintBase_GetAnimTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ASTransition_BlueprintBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UASTransition_BlueprintBase_GetAnimTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UASTransition_BlueprintBase, nullptr, "GetAnimTime", nullptr, nullptr, sizeof(ASTransition_BlueprintBase_eventGetAnimTime_Parms), Z_Construct_UFunction_UASTransition_BlueprintBase_GetAnimTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UASTransition_BlueprintBase_GetAnimTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UASTransition_BlueprintBase_GetAnimTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UASTransition_BlueprintBase_GetAnimTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UASTransition_BlueprintBase_GetAnimTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UASTransition_BlueprintBase_GetAnimTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UASTransition_BlueprintBase_GetAnimTimeLength_Statics
	{
		struct ASTransition_BlueprintBase_eventGetAnimTimeLength_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UASTransition_BlueprintBase_GetAnimTimeLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTransition_BlueprintBase_eventGetAnimTimeLength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UASTransition_BlueprintBase_GetAnimTimeLength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UASTransition_BlueprintBase_GetAnimTimeLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UASTransition_BlueprintBase_GetAnimTimeLength_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ASTransition_BlueprintBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UASTransition_BlueprintBase_GetAnimTimeLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UASTransition_BlueprintBase, nullptr, "GetAnimTimeLength", nullptr, nullptr, sizeof(ASTransition_BlueprintBase_eventGetAnimTimeLength_Parms), Z_Construct_UFunction_UASTransition_BlueprintBase_GetAnimTimeLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UASTransition_BlueprintBase_GetAnimTimeLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UASTransition_BlueprintBase_GetAnimTimeLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UASTransition_BlueprintBase_GetAnimTimeLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UASTransition_BlueprintBase_GetAnimTimeLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UASTransition_BlueprintBase_GetAnimTimeLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UASTransition_BlueprintBase_GetElapsedTime_Statics
	{
		struct ASTransition_BlueprintBase_eventGetElapsedTime_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UASTransition_BlueprintBase_GetElapsedTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTransition_BlueprintBase_eventGetElapsedTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UASTransition_BlueprintBase_GetElapsedTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UASTransition_BlueprintBase_GetElapsedTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UASTransition_BlueprintBase_GetElapsedTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ASTransition_BlueprintBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UASTransition_BlueprintBase_GetElapsedTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UASTransition_BlueprintBase, nullptr, "GetElapsedTime", nullptr, nullptr, sizeof(ASTransition_BlueprintBase_eventGetElapsedTime_Parms), Z_Construct_UFunction_UASTransition_BlueprintBase_GetElapsedTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UASTransition_BlueprintBase_GetElapsedTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UASTransition_BlueprintBase_GetElapsedTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UASTransition_BlueprintBase_GetElapsedTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UASTransition_BlueprintBase_GetElapsedTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UASTransition_BlueprintBase_GetElapsedTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UASTransition_BlueprintBase_IsPlayEnd_Statics
	{
		struct ASTransition_BlueprintBase_eventIsPlayEnd_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UASTransition_BlueprintBase_IsPlayEnd_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ASTransition_BlueprintBase_eventIsPlayEnd_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UASTransition_BlueprintBase_IsPlayEnd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASTransition_BlueprintBase_eventIsPlayEnd_Parms), &Z_Construct_UFunction_UASTransition_BlueprintBase_IsPlayEnd_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UASTransition_BlueprintBase_IsPlayEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UASTransition_BlueprintBase_IsPlayEnd_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UASTransition_BlueprintBase_IsPlayEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ASTransition_BlueprintBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UASTransition_BlueprintBase_IsPlayEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UASTransition_BlueprintBase, nullptr, "IsPlayEnd", nullptr, nullptr, sizeof(ASTransition_BlueprintBase_eventIsPlayEnd_Parms), Z_Construct_UFunction_UASTransition_BlueprintBase_IsPlayEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UASTransition_BlueprintBase_IsPlayEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UASTransition_BlueprintBase_IsPlayEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UASTransition_BlueprintBase_IsPlayEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UASTransition_BlueprintBase_IsPlayEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UASTransition_BlueprintBase_IsPlayEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UASTransition_BlueprintBase_IsPlayEndForce_Statics
	{
		struct ASTransition_BlueprintBase_eventIsPlayEndForce_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UASTransition_BlueprintBase_IsPlayEndForce_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ASTransition_BlueprintBase_eventIsPlayEndForce_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UASTransition_BlueprintBase_IsPlayEndForce_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASTransition_BlueprintBase_eventIsPlayEndForce_Parms), &Z_Construct_UFunction_UASTransition_BlueprintBase_IsPlayEndForce_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UASTransition_BlueprintBase_IsPlayEndForce_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UASTransition_BlueprintBase_IsPlayEndForce_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UASTransition_BlueprintBase_IsPlayEndForce_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ASTransition_BlueprintBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UASTransition_BlueprintBase_IsPlayEndForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UASTransition_BlueprintBase, nullptr, "IsPlayEndForce", nullptr, nullptr, sizeof(ASTransition_BlueprintBase_eventIsPlayEndForce_Parms), Z_Construct_UFunction_UASTransition_BlueprintBase_IsPlayEndForce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UASTransition_BlueprintBase_IsPlayEndForce_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UASTransition_BlueprintBase_IsPlayEndForce_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UASTransition_BlueprintBase_IsPlayEndForce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UASTransition_BlueprintBase_IsPlayEndForce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UASTransition_BlueprintBase_IsPlayEndForce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UASTransition_BlueprintBase_ReceiveCanEnter_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UASTransition_BlueprintBase_ReceiveCanEnter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ASTransition_BlueprintBase_eventReceiveCanEnter_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UASTransition_BlueprintBase_ReceiveCanEnter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASTransition_BlueprintBase_eventReceiveCanEnter_Parms), &Z_Construct_UFunction_UASTransition_BlueprintBase_ReceiveCanEnter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UASTransition_BlueprintBase_ReceiveCanEnter_Statics::NewProp_AnimInstance = { "AnimInstance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTransition_BlueprintBase_eventReceiveCanEnter_Parms, AnimInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UASTransition_BlueprintBase_ReceiveCanEnter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UASTransition_BlueprintBase_ReceiveCanEnter_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UASTransition_BlueprintBase_ReceiveCanEnter_Statics::NewProp_AnimInstance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UASTransition_BlueprintBase_ReceiveCanEnter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ASTransition_BlueprintBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UASTransition_BlueprintBase_ReceiveCanEnter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UASTransition_BlueprintBase, nullptr, "ReceiveCanEnter", nullptr, nullptr, sizeof(ASTransition_BlueprintBase_eventReceiveCanEnter_Parms), Z_Construct_UFunction_UASTransition_BlueprintBase_ReceiveCanEnter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UASTransition_BlueprintBase_ReceiveCanEnter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UASTransition_BlueprintBase_ReceiveCanEnter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UASTransition_BlueprintBase_ReceiveCanEnter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UASTransition_BlueprintBase_ReceiveCanEnter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UASTransition_BlueprintBase_ReceiveCanEnter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UASTransition_BlueprintBase_NoRegister()
	{
		return UASTransition_BlueprintBase::StaticClass();
	}
	struct Z_Construct_UClass_UASTransition_BlueprintBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UASTransition_BlueprintBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UASTransition_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UASTransition_BlueprintBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UASTransition_BlueprintBase_CheckCommand, "CheckCommand" }, // 3802136408
		{ &Z_Construct_UFunction_UASTransition_BlueprintBase_CheckCommandState, "CheckCommandState" }, // 402332242
		{ &Z_Construct_UFunction_UASTransition_BlueprintBase_GetAnimTime, "GetAnimTime" }, // 2003153715
		{ &Z_Construct_UFunction_UASTransition_BlueprintBase_GetAnimTimeLength, "GetAnimTimeLength" }, // 2209328773
		{ &Z_Construct_UFunction_UASTransition_BlueprintBase_GetElapsedTime, "GetElapsedTime" }, // 2770269359
		{ &Z_Construct_UFunction_UASTransition_BlueprintBase_IsPlayEnd, "IsPlayEnd" }, // 2022084120
		{ &Z_Construct_UFunction_UASTransition_BlueprintBase_IsPlayEndForce, "IsPlayEndForce" }, // 946995033
		{ &Z_Construct_UFunction_UASTransition_BlueprintBase_ReceiveCanEnter, "ReceiveCanEnter" }, // 4157973457
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UASTransition_BlueprintBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ASTransition_BlueprintBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ASTransition_BlueprintBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UASTransition_BlueprintBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UASTransition_BlueprintBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UASTransition_BlueprintBase_Statics::ClassParams = {
		&UASTransition_BlueprintBase::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UASTransition_BlueprintBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UASTransition_BlueprintBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UASTransition_BlueprintBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UASTransition_BlueprintBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UASTransition_BlueprintBase, 4008036874);
	template<> ACTIONSYSTEM_API UClass* StaticClass<UASTransition_BlueprintBase>()
	{
		return UASTransition_BlueprintBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UASTransition_BlueprintBase(Z_Construct_UClass_UASTransition_BlueprintBase, &UASTransition_BlueprintBase::StaticClass, TEXT("/Script/ActionSystem"), TEXT("UASTransition_BlueprintBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UASTransition_BlueprintBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
