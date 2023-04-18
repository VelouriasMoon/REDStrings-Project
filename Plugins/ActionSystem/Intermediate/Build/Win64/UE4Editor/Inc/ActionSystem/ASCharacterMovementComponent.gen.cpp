// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionSystem/Public/ASCharacterMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeASCharacterMovementComponent() {}
// Cross Module References
	ACTIONSYSTEM_API UClass* Z_Construct_UClass_UASCharacterMovementComponent_NoRegister();
	ACTIONSYSTEM_API UClass* Z_Construct_UClass_UASCharacterMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
	UPackage* Z_Construct_UPackage__Script_ActionSystem();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(UASCharacterMovementComponent::execClearCurveMove)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearCurveMove();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UASCharacterMovementComponent::execGetLastNavMoveVelocity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetLastNavMoveVelocity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UASCharacterMovementComponent::execHasAnimTag)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasAnimTag(Z_Param_Tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UASCharacterMovementComponent::execSendAnimCommand)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Command);
		P_GET_UBOOL(Z_Param_Force);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendAnimCommand(Z_Param_Command,Z_Param_Force);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UASCharacterMovementComponent::execSetDirectMove)
	{
		P_GET_STRUCT(FVector,Z_Param_MoveVelocity);
		P_GET_UBOOL(Z_Param_bForceMaxSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDirectMove(Z_Param_MoveVelocity,Z_Param_bForceMaxSpeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UASCharacterMovementComponent::execSetImpulse)
	{
		P_GET_STRUCT(FVector,Z_Param_Impulse);
		P_GET_UBOOL(Z_Param_bVelocityChange);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetImpulse(Z_Param_Impulse,Z_Param_bVelocityChange);
		P_NATIVE_END;
	}
	void UASCharacterMovementComponent::StaticRegisterNativesUASCharacterMovementComponent()
	{
		UClass* Class = UASCharacterMovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearCurveMove", &UASCharacterMovementComponent::execClearCurveMove },
			{ "GetLastNavMoveVelocity", &UASCharacterMovementComponent::execGetLastNavMoveVelocity },
			{ "HasAnimTag", &UASCharacterMovementComponent::execHasAnimTag },
			{ "SendAnimCommand", &UASCharacterMovementComponent::execSendAnimCommand },
			{ "SetDirectMove", &UASCharacterMovementComponent::execSetDirectMove },
			{ "SetImpulse", &UASCharacterMovementComponent::execSetImpulse },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UASCharacterMovementComponent_ClearCurveMove_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UASCharacterMovementComponent_ClearCurveMove_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ASCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UASCharacterMovementComponent_ClearCurveMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UASCharacterMovementComponent, nullptr, "ClearCurveMove", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UASCharacterMovementComponent_ClearCurveMove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UASCharacterMovementComponent_ClearCurveMove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UASCharacterMovementComponent_ClearCurveMove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UASCharacterMovementComponent_ClearCurveMove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UASCharacterMovementComponent_GetLastNavMoveVelocity_Statics
	{
		struct ASCharacterMovementComponent_eventGetLastNavMoveVelocity_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UASCharacterMovementComponent_GetLastNavMoveVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCharacterMovementComponent_eventGetLastNavMoveVelocity_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UASCharacterMovementComponent_GetLastNavMoveVelocity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UASCharacterMovementComponent_GetLastNavMoveVelocity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UASCharacterMovementComponent_GetLastNavMoveVelocity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ASCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UASCharacterMovementComponent_GetLastNavMoveVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UASCharacterMovementComponent, nullptr, "GetLastNavMoveVelocity", nullptr, nullptr, sizeof(ASCharacterMovementComponent_eventGetLastNavMoveVelocity_Parms), Z_Construct_UFunction_UASCharacterMovementComponent_GetLastNavMoveVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UASCharacterMovementComponent_GetLastNavMoveVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UASCharacterMovementComponent_GetLastNavMoveVelocity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UASCharacterMovementComponent_GetLastNavMoveVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UASCharacterMovementComponent_GetLastNavMoveVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UASCharacterMovementComponent_GetLastNavMoveVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UASCharacterMovementComponent_HasAnimTag_Statics
	{
		struct ASCharacterMovementComponent_eventHasAnimTag_Parms
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
	void Z_Construct_UFunction_UASCharacterMovementComponent_HasAnimTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ASCharacterMovementComponent_eventHasAnimTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UASCharacterMovementComponent_HasAnimTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASCharacterMovementComponent_eventHasAnimTag_Parms), &Z_Construct_UFunction_UASCharacterMovementComponent_HasAnimTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UASCharacterMovementComponent_HasAnimTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCharacterMovementComponent_eventHasAnimTag_Parms, Tag), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UASCharacterMovementComponent_HasAnimTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UASCharacterMovementComponent_HasAnimTag_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UASCharacterMovementComponent_HasAnimTag_Statics::NewProp_Tag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UASCharacterMovementComponent_HasAnimTag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ASCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UASCharacterMovementComponent_HasAnimTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UASCharacterMovementComponent, nullptr, "HasAnimTag", nullptr, nullptr, sizeof(ASCharacterMovementComponent_eventHasAnimTag_Parms), Z_Construct_UFunction_UASCharacterMovementComponent_HasAnimTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UASCharacterMovementComponent_HasAnimTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UASCharacterMovementComponent_HasAnimTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UASCharacterMovementComponent_HasAnimTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UASCharacterMovementComponent_HasAnimTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UASCharacterMovementComponent_HasAnimTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UASCharacterMovementComponent_SendAnimCommand_Statics
	{
		struct ASCharacterMovementComponent_eventSendAnimCommand_Parms
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
	void Z_Construct_UFunction_UASCharacterMovementComponent_SendAnimCommand_Statics::NewProp_Force_SetBit(void* Obj)
	{
		((ASCharacterMovementComponent_eventSendAnimCommand_Parms*)Obj)->Force = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UASCharacterMovementComponent_SendAnimCommand_Statics::NewProp_Force = { "Force", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASCharacterMovementComponent_eventSendAnimCommand_Parms), &Z_Construct_UFunction_UASCharacterMovementComponent_SendAnimCommand_Statics::NewProp_Force_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UASCharacterMovementComponent_SendAnimCommand_Statics::NewProp_Command_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UASCharacterMovementComponent_SendAnimCommand_Statics::NewProp_Command = { "Command", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCharacterMovementComponent_eventSendAnimCommand_Parms, Command), METADATA_PARAMS(Z_Construct_UFunction_UASCharacterMovementComponent_SendAnimCommand_Statics::NewProp_Command_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UASCharacterMovementComponent_SendAnimCommand_Statics::NewProp_Command_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UASCharacterMovementComponent_SendAnimCommand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UASCharacterMovementComponent_SendAnimCommand_Statics::NewProp_Force,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UASCharacterMovementComponent_SendAnimCommand_Statics::NewProp_Command,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UASCharacterMovementComponent_SendAnimCommand_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ASCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UASCharacterMovementComponent_SendAnimCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UASCharacterMovementComponent, nullptr, "SendAnimCommand", nullptr, nullptr, sizeof(ASCharacterMovementComponent_eventSendAnimCommand_Parms), Z_Construct_UFunction_UASCharacterMovementComponent_SendAnimCommand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UASCharacterMovementComponent_SendAnimCommand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UASCharacterMovementComponent_SendAnimCommand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UASCharacterMovementComponent_SendAnimCommand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UASCharacterMovementComponent_SendAnimCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UASCharacterMovementComponent_SendAnimCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UASCharacterMovementComponent_SetDirectMove_Statics
	{
		struct ASCharacterMovementComponent_eventSetDirectMove_Parms
		{
			FVector MoveVelocity;
			bool bForceMaxSpeed;
		};
		static void NewProp_bForceMaxSpeed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceMaxSpeed;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveVelocity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UASCharacterMovementComponent_SetDirectMove_Statics::NewProp_bForceMaxSpeed_SetBit(void* Obj)
	{
		((ASCharacterMovementComponent_eventSetDirectMove_Parms*)Obj)->bForceMaxSpeed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UASCharacterMovementComponent_SetDirectMove_Statics::NewProp_bForceMaxSpeed = { "bForceMaxSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASCharacterMovementComponent_eventSetDirectMove_Parms), &Z_Construct_UFunction_UASCharacterMovementComponent_SetDirectMove_Statics::NewProp_bForceMaxSpeed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UASCharacterMovementComponent_SetDirectMove_Statics::NewProp_MoveVelocity = { "MoveVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCharacterMovementComponent_eventSetDirectMove_Parms, MoveVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UASCharacterMovementComponent_SetDirectMove_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UASCharacterMovementComponent_SetDirectMove_Statics::NewProp_bForceMaxSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UASCharacterMovementComponent_SetDirectMove_Statics::NewProp_MoveVelocity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UASCharacterMovementComponent_SetDirectMove_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ASCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UASCharacterMovementComponent_SetDirectMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UASCharacterMovementComponent, nullptr, "SetDirectMove", nullptr, nullptr, sizeof(ASCharacterMovementComponent_eventSetDirectMove_Parms), Z_Construct_UFunction_UASCharacterMovementComponent_SetDirectMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UASCharacterMovementComponent_SetDirectMove_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UASCharacterMovementComponent_SetDirectMove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UASCharacterMovementComponent_SetDirectMove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UASCharacterMovementComponent_SetDirectMove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UASCharacterMovementComponent_SetDirectMove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UASCharacterMovementComponent_SetImpulse_Statics
	{
		struct ASCharacterMovementComponent_eventSetImpulse_Parms
		{
			FVector Impulse;
			bool bVelocityChange;
		};
		static void NewProp_bVelocityChange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVelocityChange;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Impulse;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UASCharacterMovementComponent_SetImpulse_Statics::NewProp_bVelocityChange_SetBit(void* Obj)
	{
		((ASCharacterMovementComponent_eventSetImpulse_Parms*)Obj)->bVelocityChange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UASCharacterMovementComponent_SetImpulse_Statics::NewProp_bVelocityChange = { "bVelocityChange", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASCharacterMovementComponent_eventSetImpulse_Parms), &Z_Construct_UFunction_UASCharacterMovementComponent_SetImpulse_Statics::NewProp_bVelocityChange_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UASCharacterMovementComponent_SetImpulse_Statics::NewProp_Impulse = { "Impulse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCharacterMovementComponent_eventSetImpulse_Parms, Impulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UASCharacterMovementComponent_SetImpulse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UASCharacterMovementComponent_SetImpulse_Statics::NewProp_bVelocityChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UASCharacterMovementComponent_SetImpulse_Statics::NewProp_Impulse,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UASCharacterMovementComponent_SetImpulse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ASCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UASCharacterMovementComponent_SetImpulse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UASCharacterMovementComponent, nullptr, "SetImpulse", nullptr, nullptr, sizeof(ASCharacterMovementComponent_eventSetImpulse_Parms), Z_Construct_UFunction_UASCharacterMovementComponent_SetImpulse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UASCharacterMovementComponent_SetImpulse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UASCharacterMovementComponent_SetImpulse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UASCharacterMovementComponent_SetImpulse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UASCharacterMovementComponent_SetImpulse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UASCharacterMovementComponent_SetImpulse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UASCharacterMovementComponent_NoRegister()
	{
		return UASCharacterMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UASCharacterMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UASCharacterMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UASCharacterMovementComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UASCharacterMovementComponent_ClearCurveMove, "ClearCurveMove" }, // 1225099621
		{ &Z_Construct_UFunction_UASCharacterMovementComponent_GetLastNavMoveVelocity, "GetLastNavMoveVelocity" }, // 2278552808
		{ &Z_Construct_UFunction_UASCharacterMovementComponent_HasAnimTag, "HasAnimTag" }, // 834487749
		{ &Z_Construct_UFunction_UASCharacterMovementComponent_SendAnimCommand, "SendAnimCommand" }, // 3761807776
		{ &Z_Construct_UFunction_UASCharacterMovementComponent_SetDirectMove, "SetDirectMove" }, // 1963132311
		{ &Z_Construct_UFunction_UASCharacterMovementComponent_SetImpulse, "SetImpulse" }, // 534953727
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UASCharacterMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ASCharacterMovementComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ASCharacterMovementComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UASCharacterMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UASCharacterMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UASCharacterMovementComponent_Statics::ClassParams = {
		&UASCharacterMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UASCharacterMovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UASCharacterMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UASCharacterMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UASCharacterMovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UASCharacterMovementComponent, 643742591);
	template<> ACTIONSYSTEM_API UClass* StaticClass<UASCharacterMovementComponent>()
	{
		return UASCharacterMovementComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UASCharacterMovementComponent(Z_Construct_UClass_UASCharacterMovementComponent, &UASCharacterMovementComponent::StaticClass, TEXT("/Script/ActionSystem"), TEXT("UASCharacterMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UASCharacterMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
