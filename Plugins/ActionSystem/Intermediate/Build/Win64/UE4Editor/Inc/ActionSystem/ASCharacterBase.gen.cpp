// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionSystem/Public/ASCharacterBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeASCharacterBase() {}
// Cross Module References
	ACTIONSYSTEM_API UClass* Z_Construct_UClass_AASCharacterBase_NoRegister();
	ACTIONSYSTEM_API UClass* Z_Construct_UClass_AASCharacterBase();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_ActionSystem();
// End Cross Module References
	DEFINE_FUNCTION(AASCharacterBase::execGetAnimTags)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=P_THIS->GetAnimTags();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AASCharacterBase::execHasAnimTag)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasAnimTag(Z_Param_Tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AASCharacterBase::execJumpMachineState)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MachinName);
		P_GET_PROPERTY(FStrProperty,Z_Param_StateName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->JumpMachineState(Z_Param_MachinName,Z_Param_StateName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AASCharacterBase::execOnRep_ReplicateState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ReplicateState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AASCharacterBase::execSendAnimCommand)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Command);
		P_GET_UBOOL(Z_Param_Force);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendAnimCommand(Z_Param_Command,Z_Param_Force);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AASCharacterBase::execServerStateChange)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MachineIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_PreviousState);
		P_GET_PROPERTY(FIntProperty,Z_Param_NextState);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerStateChange_Validate(Z_Param_MachineIndex,Z_Param_PreviousState,Z_Param_NextState))
		{
			RPC_ValidateFailed(TEXT("ServerStateChange_Validate"));
			return;
		}
		P_THIS->ServerStateChange_Implementation(Z_Param_MachineIndex,Z_Param_PreviousState,Z_Param_NextState);
		P_NATIVE_END;
	}
	static FName NAME_AASCharacterBase_ReceiveStateChange = FName(TEXT("ReceiveStateChange"));
	void AASCharacterBase::ReceiveStateChange(const FString& PreviousStateName, const FString& NextStateName)
	{
		ASCharacterBase_eventReceiveStateChange_Parms Parms;
		Parms.PreviousStateName=PreviousStateName;
		Parms.NextStateName=NextStateName;
		ProcessEvent(FindFunctionChecked(NAME_AASCharacterBase_ReceiveStateChange),&Parms);
	}
	static FName NAME_AASCharacterBase_ServerStateChange = FName(TEXT("ServerStateChange"));
	void AASCharacterBase::ServerStateChange(int32 MachineIndex, int32 PreviousState, int32 NextState)
	{
		ASCharacterBase_eventServerStateChange_Parms Parms;
		Parms.MachineIndex=MachineIndex;
		Parms.PreviousState=PreviousState;
		Parms.NextState=NextState;
		ProcessEvent(FindFunctionChecked(NAME_AASCharacterBase_ServerStateChange),&Parms);
	}
	void AASCharacterBase::StaticRegisterNativesAASCharacterBase()
	{
		UClass* Class = AASCharacterBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAnimTags", &AASCharacterBase::execGetAnimTags },
			{ "HasAnimTag", &AASCharacterBase::execHasAnimTag },
			{ "JumpMachineState", &AASCharacterBase::execJumpMachineState },
			{ "OnRep_ReplicateState", &AASCharacterBase::execOnRep_ReplicateState },
			{ "SendAnimCommand", &AASCharacterBase::execSendAnimCommand },
			{ "ServerStateChange", &AASCharacterBase::execServerStateChange },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AASCharacterBase_GetAnimTags_Statics
	{
		struct ASCharacterBase_eventGetAnimTags_Parms
		{
			TArray<FName> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AASCharacterBase_GetAnimTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCharacterBase_eventGetAnimTags_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AASCharacterBase_GetAnimTags_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AASCharacterBase_GetAnimTags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AASCharacterBase_GetAnimTags_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AASCharacterBase_GetAnimTags_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AASCharacterBase_GetAnimTags_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ASCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AASCharacterBase_GetAnimTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AASCharacterBase, nullptr, "GetAnimTags", nullptr, nullptr, sizeof(ASCharacterBase_eventGetAnimTags_Parms), Z_Construct_UFunction_AASCharacterBase_GetAnimTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AASCharacterBase_GetAnimTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AASCharacterBase_GetAnimTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AASCharacterBase_GetAnimTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AASCharacterBase_GetAnimTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AASCharacterBase_GetAnimTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AASCharacterBase_HasAnimTag_Statics
	{
		struct ASCharacterBase_eventHasAnimTag_Parms
		{
			FName Tag;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Tag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AASCharacterBase_HasAnimTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ASCharacterBase_eventHasAnimTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AASCharacterBase_HasAnimTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASCharacterBase_eventHasAnimTag_Parms), &Z_Construct_UFunction_AASCharacterBase_HasAnimTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AASCharacterBase_HasAnimTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCharacterBase_eventHasAnimTag_Parms, Tag), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AASCharacterBase_HasAnimTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AASCharacterBase_HasAnimTag_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AASCharacterBase_HasAnimTag_Statics::NewProp_Tag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AASCharacterBase_HasAnimTag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ASCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AASCharacterBase_HasAnimTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AASCharacterBase, nullptr, "HasAnimTag", nullptr, nullptr, sizeof(ASCharacterBase_eventHasAnimTag_Parms), Z_Construct_UFunction_AASCharacterBase_HasAnimTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AASCharacterBase_HasAnimTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AASCharacterBase_HasAnimTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AASCharacterBase_HasAnimTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AASCharacterBase_HasAnimTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AASCharacterBase_HasAnimTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AASCharacterBase_JumpMachineState_Statics
	{
		struct ASCharacterBase_eventJumpMachineState_Parms
		{
			FString MachinName;
			FString StateName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StateName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MachinName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MachinName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AASCharacterBase_JumpMachineState_Statics::NewProp_StateName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AASCharacterBase_JumpMachineState_Statics::NewProp_StateName = { "StateName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCharacterBase_eventJumpMachineState_Parms, StateName), METADATA_PARAMS(Z_Construct_UFunction_AASCharacterBase_JumpMachineState_Statics::NewProp_StateName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AASCharacterBase_JumpMachineState_Statics::NewProp_StateName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AASCharacterBase_JumpMachineState_Statics::NewProp_MachinName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AASCharacterBase_JumpMachineState_Statics::NewProp_MachinName = { "MachinName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCharacterBase_eventJumpMachineState_Parms, MachinName), METADATA_PARAMS(Z_Construct_UFunction_AASCharacterBase_JumpMachineState_Statics::NewProp_MachinName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AASCharacterBase_JumpMachineState_Statics::NewProp_MachinName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AASCharacterBase_JumpMachineState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AASCharacterBase_JumpMachineState_Statics::NewProp_StateName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AASCharacterBase_JumpMachineState_Statics::NewProp_MachinName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AASCharacterBase_JumpMachineState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ASCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AASCharacterBase_JumpMachineState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AASCharacterBase, nullptr, "JumpMachineState", nullptr, nullptr, sizeof(ASCharacterBase_eventJumpMachineState_Parms), Z_Construct_UFunction_AASCharacterBase_JumpMachineState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AASCharacterBase_JumpMachineState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AASCharacterBase_JumpMachineState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AASCharacterBase_JumpMachineState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AASCharacterBase_JumpMachineState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AASCharacterBase_JumpMachineState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AASCharacterBase_OnRep_ReplicateState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AASCharacterBase_OnRep_ReplicateState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ASCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AASCharacterBase_OnRep_ReplicateState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AASCharacterBase, nullptr, "OnRep_ReplicateState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AASCharacterBase_OnRep_ReplicateState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AASCharacterBase_OnRep_ReplicateState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AASCharacterBase_OnRep_ReplicateState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AASCharacterBase_OnRep_ReplicateState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AASCharacterBase_ReceiveStateChange_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextStateName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NextStateName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousStateName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PreviousStateName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AASCharacterBase_ReceiveStateChange_Statics::NewProp_NextStateName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AASCharacterBase_ReceiveStateChange_Statics::NewProp_NextStateName = { "NextStateName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCharacterBase_eventReceiveStateChange_Parms, NextStateName), METADATA_PARAMS(Z_Construct_UFunction_AASCharacterBase_ReceiveStateChange_Statics::NewProp_NextStateName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AASCharacterBase_ReceiveStateChange_Statics::NewProp_NextStateName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AASCharacterBase_ReceiveStateChange_Statics::NewProp_PreviousStateName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AASCharacterBase_ReceiveStateChange_Statics::NewProp_PreviousStateName = { "PreviousStateName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCharacterBase_eventReceiveStateChange_Parms, PreviousStateName), METADATA_PARAMS(Z_Construct_UFunction_AASCharacterBase_ReceiveStateChange_Statics::NewProp_PreviousStateName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AASCharacterBase_ReceiveStateChange_Statics::NewProp_PreviousStateName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AASCharacterBase_ReceiveStateChange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AASCharacterBase_ReceiveStateChange_Statics::NewProp_NextStateName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AASCharacterBase_ReceiveStateChange_Statics::NewProp_PreviousStateName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AASCharacterBase_ReceiveStateChange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ASCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AASCharacterBase_ReceiveStateChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AASCharacterBase, nullptr, "ReceiveStateChange", nullptr, nullptr, sizeof(ASCharacterBase_eventReceiveStateChange_Parms), Z_Construct_UFunction_AASCharacterBase_ReceiveStateChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AASCharacterBase_ReceiveStateChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AASCharacterBase_ReceiveStateChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AASCharacterBase_ReceiveStateChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AASCharacterBase_ReceiveStateChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AASCharacterBase_ReceiveStateChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AASCharacterBase_SendAnimCommand_Statics
	{
		struct ASCharacterBase_eventSendAnimCommand_Parms
		{
			FString Command;
			bool Force;
		};
		static void NewProp_Force_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Force;
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
	void Z_Construct_UFunction_AASCharacterBase_SendAnimCommand_Statics::NewProp_Force_SetBit(void* Obj)
	{
		((ASCharacterBase_eventSendAnimCommand_Parms*)Obj)->Force = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AASCharacterBase_SendAnimCommand_Statics::NewProp_Force = { "Force", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASCharacterBase_eventSendAnimCommand_Parms), &Z_Construct_UFunction_AASCharacterBase_SendAnimCommand_Statics::NewProp_Force_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AASCharacterBase_SendAnimCommand_Statics::NewProp_Command_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AASCharacterBase_SendAnimCommand_Statics::NewProp_Command = { "Command", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCharacterBase_eventSendAnimCommand_Parms, Command), METADATA_PARAMS(Z_Construct_UFunction_AASCharacterBase_SendAnimCommand_Statics::NewProp_Command_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AASCharacterBase_SendAnimCommand_Statics::NewProp_Command_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AASCharacterBase_SendAnimCommand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AASCharacterBase_SendAnimCommand_Statics::NewProp_Force,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AASCharacterBase_SendAnimCommand_Statics::NewProp_Command,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AASCharacterBase_SendAnimCommand_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ASCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AASCharacterBase_SendAnimCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AASCharacterBase, nullptr, "SendAnimCommand", nullptr, nullptr, sizeof(ASCharacterBase_eventSendAnimCommand_Parms), Z_Construct_UFunction_AASCharacterBase_SendAnimCommand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AASCharacterBase_SendAnimCommand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AASCharacterBase_SendAnimCommand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AASCharacterBase_SendAnimCommand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AASCharacterBase_SendAnimCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AASCharacterBase_SendAnimCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AASCharacterBase_ServerStateChange_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NextState;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PreviousState;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MachineIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AASCharacterBase_ServerStateChange_Statics::NewProp_NextState = { "NextState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCharacterBase_eventServerStateChange_Parms, NextState), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AASCharacterBase_ServerStateChange_Statics::NewProp_PreviousState = { "PreviousState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCharacterBase_eventServerStateChange_Parms, PreviousState), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AASCharacterBase_ServerStateChange_Statics::NewProp_MachineIndex = { "MachineIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCharacterBase_eventServerStateChange_Parms, MachineIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AASCharacterBase_ServerStateChange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AASCharacterBase_ServerStateChange_Statics::NewProp_NextState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AASCharacterBase_ServerStateChange_Statics::NewProp_PreviousState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AASCharacterBase_ServerStateChange_Statics::NewProp_MachineIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AASCharacterBase_ServerStateChange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ASCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AASCharacterBase_ServerStateChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AASCharacterBase, nullptr, "ServerStateChange", nullptr, nullptr, sizeof(ASCharacterBase_eventServerStateChange_Parms), Z_Construct_UFunction_AASCharacterBase_ServerStateChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AASCharacterBase_ServerStateChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AASCharacterBase_ServerStateChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AASCharacterBase_ServerStateChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AASCharacterBase_ServerStateChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AASCharacterBase_ServerStateChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AASCharacterBase_NoRegister()
	{
		return AASCharacterBase::StaticClass();
	}
	struct Z_Construct_UClass_AASCharacterBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicateState_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReplicateState;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReplicateState_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AASCharacterBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AASCharacterBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AASCharacterBase_GetAnimTags, "GetAnimTags" }, // 1738198817
		{ &Z_Construct_UFunction_AASCharacterBase_HasAnimTag, "HasAnimTag" }, // 634951939
		{ &Z_Construct_UFunction_AASCharacterBase_JumpMachineState, "JumpMachineState" }, // 106094922
		{ &Z_Construct_UFunction_AASCharacterBase_OnRep_ReplicateState, "OnRep_ReplicateState" }, // 3787416210
		{ &Z_Construct_UFunction_AASCharacterBase_ReceiveStateChange, "ReceiveStateChange" }, // 3159641521
		{ &Z_Construct_UFunction_AASCharacterBase_SendAnimCommand, "SendAnimCommand" }, // 214378055
		{ &Z_Construct_UFunction_AASCharacterBase_ServerStateChange, "ServerStateChange" }, // 2896067091
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AASCharacterBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ASCharacterBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ASCharacterBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AASCharacterBase_Statics::NewProp_ReplicateState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASCharacterBase" },
		{ "ModuleRelativePath", "Public/ASCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AASCharacterBase_Statics::NewProp_ReplicateState = { "ReplicateState", "OnRep_ReplicateState", (EPropertyFlags)0x0020080100002025, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AASCharacterBase, ReplicateState), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AASCharacterBase_Statics::NewProp_ReplicateState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AASCharacterBase_Statics::NewProp_ReplicateState_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AASCharacterBase_Statics::NewProp_ReplicateState_Inner = { "ReplicateState", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AASCharacterBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASCharacterBase_Statics::NewProp_ReplicateState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASCharacterBase_Statics::NewProp_ReplicateState_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AASCharacterBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AASCharacterBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AASCharacterBase_Statics::ClassParams = {
		&AASCharacterBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AASCharacterBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AASCharacterBase_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AASCharacterBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AASCharacterBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AASCharacterBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AASCharacterBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AASCharacterBase, 199520514);
	template<> ACTIONSYSTEM_API UClass* StaticClass<AASCharacterBase>()
	{
		return AASCharacterBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AASCharacterBase(Z_Construct_UClass_AASCharacterBase, &AASCharacterBase::StaticClass, TEXT("/Script/ActionSystem"), TEXT("AASCharacterBase"), false, nullptr, nullptr, nullptr);

	void AASCharacterBase::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ReplicateState(TEXT("ReplicateState"));

		const bool bIsValid = true
			&& Name_ReplicateState == ClassReps[(int32)ENetFields_Private::ReplicateState].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AASCharacterBase"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AASCharacterBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
