// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionSystem/Public/ASAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeASAnimInstance() {}
// Cross Module References
	ACTIONSYSTEM_API UClass* Z_Construct_UClass_UASAnimInstance_NoRegister();
	ACTIONSYSTEM_API UClass* Z_Construct_UClass_UASAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_ActionSystem();
	ACTIONSYSTEM_API UClass* Z_Construct_UClass_UASAnimNotify_StateChange_NoRegister();
	ACTIONSYSTEM_API UEnum* Z_Construct_UEnum_ActionSystem_EDamageState();
	ACTIONSYSTEM_API UClass* Z_Construct_UClass_UASStateMachine_NoRegister();
	ACTIONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FASDamageState();
// End Cross Module References
	DEFINE_FUNCTION(UASAnimInstance::execAnimNotify_StateChange)
	{
		P_GET_OBJECT(UASAnimNotify_StateChange,Z_Param_Notify);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_StateChange(Z_Param_Notify);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UASAnimInstance::execHasTag)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasTag(Z_Param_Out_Tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UASAnimInstance::execIsHitShift)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsHitShift();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UASAnimInstance::execJumpDamageState)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_State);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->JumpDamageState(EDamageState(Z_Param_State));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UASAnimInstance::execJumpMachineState)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MachinName);
		P_GET_PROPERTY(FStrProperty,Z_Param_StateName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->JumpMachineState(Z_Param_MachinName,Z_Param_StateName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UASAnimInstance::execSendCommand)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Command);
		P_GET_UBOOL(Z_Param_bForce);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendCommand(Z_Param_Command,Z_Param_bForce);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UASAnimInstance::execSetDynamicSubMachine)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AnimNodeName);
		P_GET_PROPERTY(FStrProperty,Z_Param_StateName);
		P_GET_OBJECT(UASStateMachine,Z_Param_StateMachineAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDynamicSubMachine(Z_Param_AnimNodeName,Z_Param_StateName,Z_Param_StateMachineAsset);
		P_NATIVE_END;
	}
	static FName NAME_UASAnimInstance_ReceiveStateChange = FName(TEXT("ReceiveStateChange"));
	void UASAnimInstance::ReceiveStateChange(const FString& PreviousStateName, const FString& NextStateName)
	{
		ASAnimInstance_eventReceiveStateChange_Parms Parms;
		Parms.PreviousStateName=PreviousStateName;
		Parms.NextStateName=NextStateName;
		ProcessEvent(FindFunctionChecked(NAME_UASAnimInstance_ReceiveStateChange),&Parms);
	}
	void UASAnimInstance::StaticRegisterNativesUASAnimInstance()
	{
		UClass* Class = UASAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AnimNotify_StateChange", &UASAnimInstance::execAnimNotify_StateChange },
			{ "HasTag", &UASAnimInstance::execHasTag },
			{ "IsHitShift", &UASAnimInstance::execIsHitShift },
			{ "JumpDamageState", &UASAnimInstance::execJumpDamageState },
			{ "JumpMachineState", &UASAnimInstance::execJumpMachineState },
			{ "SendCommand", &UASAnimInstance::execSendCommand },
			{ "SetDynamicSubMachine", &UASAnimInstance::execSetDynamicSubMachine },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UASAnimInstance_AnimNotify_StateChange_Statics
	{
		struct ASAnimInstance_eventAnimNotify_StateChange_Parms
		{
			const UASAnimNotify_StateChange* Notify;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Notify;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UASAnimInstance_AnimNotify_StateChange_Statics::NewProp_Notify = { "Notify", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAnimInstance_eventAnimNotify_StateChange_Parms, Notify), Z_Construct_UClass_UASAnimNotify_StateChange_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UASAnimInstance_AnimNotify_StateChange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UASAnimInstance_AnimNotify_StateChange_Statics::NewProp_Notify,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UASAnimInstance_AnimNotify_StateChange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ASAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UASAnimInstance_AnimNotify_StateChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UASAnimInstance, nullptr, "AnimNotify_StateChange", nullptr, nullptr, sizeof(ASAnimInstance_eventAnimNotify_StateChange_Parms), Z_Construct_UFunction_UASAnimInstance_AnimNotify_StateChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UASAnimInstance_AnimNotify_StateChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UASAnimInstance_AnimNotify_StateChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UASAnimInstance_AnimNotify_StateChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UASAnimInstance_AnimNotify_StateChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UASAnimInstance_AnimNotify_StateChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UASAnimInstance_HasTag_Statics
	{
		struct ASAnimInstance_eventHasTag_Parms
		{
			FName Tag;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Tag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UASAnimInstance_HasTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ASAnimInstance_eventHasTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UASAnimInstance_HasTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASAnimInstance_eventHasTag_Parms), &Z_Construct_UFunction_UASAnimInstance_HasTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UASAnimInstance_HasTag_Statics::NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UASAnimInstance_HasTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAnimInstance_eventHasTag_Parms, Tag), METADATA_PARAMS(Z_Construct_UFunction_UASAnimInstance_HasTag_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UASAnimInstance_HasTag_Statics::NewProp_Tag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UASAnimInstance_HasTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UASAnimInstance_HasTag_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UASAnimInstance_HasTag_Statics::NewProp_Tag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UASAnimInstance_HasTag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ASAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UASAnimInstance_HasTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UASAnimInstance, nullptr, "HasTag", nullptr, nullptr, sizeof(ASAnimInstance_eventHasTag_Parms), Z_Construct_UFunction_UASAnimInstance_HasTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UASAnimInstance_HasTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UASAnimInstance_HasTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UASAnimInstance_HasTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UASAnimInstance_HasTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UASAnimInstance_HasTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UASAnimInstance_IsHitShift_Statics
	{
		struct ASAnimInstance_eventIsHitShift_Parms
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
	void Z_Construct_UFunction_UASAnimInstance_IsHitShift_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ASAnimInstance_eventIsHitShift_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UASAnimInstance_IsHitShift_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASAnimInstance_eventIsHitShift_Parms), &Z_Construct_UFunction_UASAnimInstance_IsHitShift_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UASAnimInstance_IsHitShift_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UASAnimInstance_IsHitShift_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UASAnimInstance_IsHitShift_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ASAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UASAnimInstance_IsHitShift_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UASAnimInstance, nullptr, "IsHitShift", nullptr, nullptr, sizeof(ASAnimInstance_eventIsHitShift_Parms), Z_Construct_UFunction_UASAnimInstance_IsHitShift_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UASAnimInstance_IsHitShift_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UASAnimInstance_IsHitShift_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UASAnimInstance_IsHitShift_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UASAnimInstance_IsHitShift()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UASAnimInstance_IsHitShift_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UASAnimInstance_JumpDamageState_Statics
	{
		struct ASAnimInstance_eventJumpDamageState_Parms
		{
			TEnumAsByte<EDamageState> State;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_State;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UASAnimInstance_JumpDamageState_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAnimInstance_eventJumpDamageState_Parms, State), Z_Construct_UEnum_ActionSystem_EDamageState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UASAnimInstance_JumpDamageState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UASAnimInstance_JumpDamageState_Statics::NewProp_State,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UASAnimInstance_JumpDamageState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ASAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UASAnimInstance_JumpDamageState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UASAnimInstance, nullptr, "JumpDamageState", nullptr, nullptr, sizeof(ASAnimInstance_eventJumpDamageState_Parms), Z_Construct_UFunction_UASAnimInstance_JumpDamageState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UASAnimInstance_JumpDamageState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UASAnimInstance_JumpDamageState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UASAnimInstance_JumpDamageState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UASAnimInstance_JumpDamageState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UASAnimInstance_JumpDamageState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UASAnimInstance_JumpMachineState_Statics
	{
		struct ASAnimInstance_eventJumpMachineState_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UASAnimInstance_JumpMachineState_Statics::NewProp_StateName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UASAnimInstance_JumpMachineState_Statics::NewProp_StateName = { "StateName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAnimInstance_eventJumpMachineState_Parms, StateName), METADATA_PARAMS(Z_Construct_UFunction_UASAnimInstance_JumpMachineState_Statics::NewProp_StateName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UASAnimInstance_JumpMachineState_Statics::NewProp_StateName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UASAnimInstance_JumpMachineState_Statics::NewProp_MachinName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UASAnimInstance_JumpMachineState_Statics::NewProp_MachinName = { "MachinName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAnimInstance_eventJumpMachineState_Parms, MachinName), METADATA_PARAMS(Z_Construct_UFunction_UASAnimInstance_JumpMachineState_Statics::NewProp_MachinName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UASAnimInstance_JumpMachineState_Statics::NewProp_MachinName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UASAnimInstance_JumpMachineState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UASAnimInstance_JumpMachineState_Statics::NewProp_StateName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UASAnimInstance_JumpMachineState_Statics::NewProp_MachinName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UASAnimInstance_JumpMachineState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ASAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UASAnimInstance_JumpMachineState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UASAnimInstance, nullptr, "JumpMachineState", nullptr, nullptr, sizeof(ASAnimInstance_eventJumpMachineState_Parms), Z_Construct_UFunction_UASAnimInstance_JumpMachineState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UASAnimInstance_JumpMachineState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UASAnimInstance_JumpMachineState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UASAnimInstance_JumpMachineState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UASAnimInstance_JumpMachineState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UASAnimInstance_JumpMachineState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UASAnimInstance_ReceiveStateChange_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UASAnimInstance_ReceiveStateChange_Statics::NewProp_NextStateName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UASAnimInstance_ReceiveStateChange_Statics::NewProp_NextStateName = { "NextStateName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAnimInstance_eventReceiveStateChange_Parms, NextStateName), METADATA_PARAMS(Z_Construct_UFunction_UASAnimInstance_ReceiveStateChange_Statics::NewProp_NextStateName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UASAnimInstance_ReceiveStateChange_Statics::NewProp_NextStateName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UASAnimInstance_ReceiveStateChange_Statics::NewProp_PreviousStateName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UASAnimInstance_ReceiveStateChange_Statics::NewProp_PreviousStateName = { "PreviousStateName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAnimInstance_eventReceiveStateChange_Parms, PreviousStateName), METADATA_PARAMS(Z_Construct_UFunction_UASAnimInstance_ReceiveStateChange_Statics::NewProp_PreviousStateName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UASAnimInstance_ReceiveStateChange_Statics::NewProp_PreviousStateName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UASAnimInstance_ReceiveStateChange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UASAnimInstance_ReceiveStateChange_Statics::NewProp_NextStateName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UASAnimInstance_ReceiveStateChange_Statics::NewProp_PreviousStateName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UASAnimInstance_ReceiveStateChange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ASAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UASAnimInstance_ReceiveStateChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UASAnimInstance, nullptr, "ReceiveStateChange", nullptr, nullptr, sizeof(ASAnimInstance_eventReceiveStateChange_Parms), Z_Construct_UFunction_UASAnimInstance_ReceiveStateChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UASAnimInstance_ReceiveStateChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UASAnimInstance_ReceiveStateChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UASAnimInstance_ReceiveStateChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UASAnimInstance_ReceiveStateChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UASAnimInstance_ReceiveStateChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UASAnimInstance_SendCommand_Statics
	{
		struct ASAnimInstance_eventSendCommand_Parms
		{
			FString Command;
			bool bForce;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForce_MetaData[];
#endif
		static void NewProp_bForce_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForce;
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UASAnimInstance_SendCommand_Statics::NewProp_bForce_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UASAnimInstance_SendCommand_Statics::NewProp_bForce_SetBit(void* Obj)
	{
		((ASAnimInstance_eventSendCommand_Parms*)Obj)->bForce = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UASAnimInstance_SendCommand_Statics::NewProp_bForce = { "bForce", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASAnimInstance_eventSendCommand_Parms), &Z_Construct_UFunction_UASAnimInstance_SendCommand_Statics::NewProp_bForce_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UASAnimInstance_SendCommand_Statics::NewProp_bForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UASAnimInstance_SendCommand_Statics::NewProp_bForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UASAnimInstance_SendCommand_Statics::NewProp_Command_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UASAnimInstance_SendCommand_Statics::NewProp_Command = { "Command", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAnimInstance_eventSendCommand_Parms, Command), METADATA_PARAMS(Z_Construct_UFunction_UASAnimInstance_SendCommand_Statics::NewProp_Command_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UASAnimInstance_SendCommand_Statics::NewProp_Command_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UASAnimInstance_SendCommand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UASAnimInstance_SendCommand_Statics::NewProp_bForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UASAnimInstance_SendCommand_Statics::NewProp_Command,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UASAnimInstance_SendCommand_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ASAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UASAnimInstance_SendCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UASAnimInstance, nullptr, "SendCommand", nullptr, nullptr, sizeof(ASAnimInstance_eventSendCommand_Parms), Z_Construct_UFunction_UASAnimInstance_SendCommand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UASAnimInstance_SendCommand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UASAnimInstance_SendCommand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UASAnimInstance_SendCommand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UASAnimInstance_SendCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UASAnimInstance_SendCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UASAnimInstance_SetDynamicSubMachine_Statics
	{
		struct ASAnimInstance_eventSetDynamicSubMachine_Parms
		{
			FString AnimNodeName;
			FString StateName;
			const UASStateMachine* StateMachineAsset;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateMachineAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StateMachineAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StateName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimNodeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AnimNodeName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UASAnimInstance_SetDynamicSubMachine_Statics::NewProp_StateMachineAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UASAnimInstance_SetDynamicSubMachine_Statics::NewProp_StateMachineAsset = { "StateMachineAsset", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAnimInstance_eventSetDynamicSubMachine_Parms, StateMachineAsset), Z_Construct_UClass_UASStateMachine_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UASAnimInstance_SetDynamicSubMachine_Statics::NewProp_StateMachineAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UASAnimInstance_SetDynamicSubMachine_Statics::NewProp_StateMachineAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UASAnimInstance_SetDynamicSubMachine_Statics::NewProp_StateName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UASAnimInstance_SetDynamicSubMachine_Statics::NewProp_StateName = { "StateName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAnimInstance_eventSetDynamicSubMachine_Parms, StateName), METADATA_PARAMS(Z_Construct_UFunction_UASAnimInstance_SetDynamicSubMachine_Statics::NewProp_StateName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UASAnimInstance_SetDynamicSubMachine_Statics::NewProp_StateName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UASAnimInstance_SetDynamicSubMachine_Statics::NewProp_AnimNodeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UASAnimInstance_SetDynamicSubMachine_Statics::NewProp_AnimNodeName = { "AnimNodeName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAnimInstance_eventSetDynamicSubMachine_Parms, AnimNodeName), METADATA_PARAMS(Z_Construct_UFunction_UASAnimInstance_SetDynamicSubMachine_Statics::NewProp_AnimNodeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UASAnimInstance_SetDynamicSubMachine_Statics::NewProp_AnimNodeName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UASAnimInstance_SetDynamicSubMachine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UASAnimInstance_SetDynamicSubMachine_Statics::NewProp_StateMachineAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UASAnimInstance_SetDynamicSubMachine_Statics::NewProp_StateName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UASAnimInstance_SetDynamicSubMachine_Statics::NewProp_AnimNodeName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UASAnimInstance_SetDynamicSubMachine_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ASAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UASAnimInstance_SetDynamicSubMachine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UASAnimInstance, nullptr, "SetDynamicSubMachine", nullptr, nullptr, sizeof(ASAnimInstance_eventSetDynamicSubMachine_Parms), Z_Construct_UFunction_UASAnimInstance_SetDynamicSubMachine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UASAnimInstance_SetDynamicSubMachine_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UASAnimInstance_SetDynamicSubMachine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UASAnimInstance_SetDynamicSubMachine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UASAnimInstance_SetDynamicSubMachine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UASAnimInstance_SetDynamicSubMachine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UASAnimInstance_NoRegister()
	{
		return UASAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UASAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageCommand_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DamageCommand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageState_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DamageState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageStateMachine_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DamageStateMachine;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UASAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UASAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UASAnimInstance_AnimNotify_StateChange, "AnimNotify_StateChange" }, // 3628836444
		{ &Z_Construct_UFunction_UASAnimInstance_HasTag, "HasTag" }, // 2497130741
		{ &Z_Construct_UFunction_UASAnimInstance_IsHitShift, "IsHitShift" }, // 1677209083
		{ &Z_Construct_UFunction_UASAnimInstance_JumpDamageState, "JumpDamageState" }, // 374965589
		{ &Z_Construct_UFunction_UASAnimInstance_JumpMachineState, "JumpMachineState" }, // 4122359778
		{ &Z_Construct_UFunction_UASAnimInstance_ReceiveStateChange, "ReceiveStateChange" }, // 3743796178
		{ &Z_Construct_UFunction_UASAnimInstance_SendCommand, "SendCommand" }, // 3587079426
		{ &Z_Construct_UFunction_UASAnimInstance_SetDynamicSubMachine, "SetDynamicSubMachine" }, // 3545459940
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UASAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "ASAnimInstance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ASAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UASAnimInstance_Statics::NewProp_DamageCommand_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASAnimInstance" },
		{ "ModuleRelativePath", "Public/ASAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UASAnimInstance_Statics::NewProp_DamageCommand = { "DamageCommand", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UASAnimInstance, DamageCommand), Z_Construct_UScriptStruct_FASDamageState, METADATA_PARAMS(Z_Construct_UClass_UASAnimInstance_Statics::NewProp_DamageCommand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UASAnimInstance_Statics::NewProp_DamageCommand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UASAnimInstance_Statics::NewProp_DamageState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASAnimInstance" },
		{ "ModuleRelativePath", "Public/ASAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UASAnimInstance_Statics::NewProp_DamageState = { "DamageState", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UASAnimInstance, DamageState), METADATA_PARAMS(Z_Construct_UClass_UASAnimInstance_Statics::NewProp_DamageState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UASAnimInstance_Statics::NewProp_DamageState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UASAnimInstance_Statics::NewProp_DamageStateMachine_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASAnimInstance" },
		{ "ModuleRelativePath", "Public/ASAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UASAnimInstance_Statics::NewProp_DamageStateMachine = { "DamageStateMachine", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UASAnimInstance, DamageStateMachine), METADATA_PARAMS(Z_Construct_UClass_UASAnimInstance_Statics::NewProp_DamageStateMachine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UASAnimInstance_Statics::NewProp_DamageStateMachine_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UASAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASAnimInstance_Statics::NewProp_DamageCommand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASAnimInstance_Statics::NewProp_DamageState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASAnimInstance_Statics::NewProp_DamageStateMachine,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UASAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UASAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UASAnimInstance_Statics::ClassParams = {
		&UASAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UASAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UASAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UASAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UASAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UASAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UASAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UASAnimInstance, 3715370604);
	template<> ACTIONSYSTEM_API UClass* StaticClass<UASAnimInstance>()
	{
		return UASAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UASAnimInstance(Z_Construct_UClass_UASAnimInstance, &UASAnimInstance::StaticClass, TEXT("/Script/ActionSystem"), TEXT("UASAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UASAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
