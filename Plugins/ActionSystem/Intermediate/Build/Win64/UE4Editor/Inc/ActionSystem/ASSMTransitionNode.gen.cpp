// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionSystem/Public/ASSMTransitionNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeASSMTransitionNode() {}
// Cross Module References
	ACTIONSYSTEM_API UClass* Z_Construct_UClass_UASSMTransitionNode_NoRegister();
	ACTIONSYSTEM_API UClass* Z_Construct_UClass_UASSMTransitionNode();
	ACTIONSYSTEM_API UClass* Z_Construct_UClass_UASSMNode();
	UPackage* Z_Construct_UPackage__Script_ActionSystem();
	ACTIONSYSTEM_API UClass* Z_Construct_UClass_UASSMStateNode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAlphaBlendOption();
	ACTIONSYSTEM_API UClass* Z_Construct_UClass_UASTransition_Base_NoRegister();
	ACTIONSYSTEM_API UClass* Z_Construct_UClass_UASTransition_BlueprintBase_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMovementMode();
	ACTIONSYSTEM_API UEnum* Z_Construct_UEnum_ActionSystem_ETransitionRule();
// End Cross Module References
	void UASSMTransitionNode::StaticRegisterNativesUASSMTransitionNode()
	{
	}
	UClass* Z_Construct_UClass_UASSMTransitionNode_NoRegister()
	{
		return UASSMTransitionNode::StaticClass();
	}
	struct Z_Construct_UClass_UASSMTransitionNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NextState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviousState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterruptNotify_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InterruptNotify;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartStateName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StartStateName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSyncTime_MetaData[];
#endif
		static void NewProp_bSyncTime_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSyncTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomBlendCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomBlendCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BlendMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlendMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrossfadeDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrossfadeDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Custom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Custom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Blueprint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomMovementMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CustomMovementMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MovementMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Command_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Command;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNotEqual_MetaData[];
#endif
		static void NewProp_bNotEqual_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNotEqual;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransitionRule_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TransitionRule;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bidirectional_MetaData[];
#endif
		static void NewProp_Bidirectional_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Bidirectional;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PriorityOrder_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PriorityOrder;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UASSMTransitionNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UASSMNode,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UASSMTransitionNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ASSMTransitionNode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ASSMTransitionNode.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_NextState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASSMTransitionNode" },
		{ "ModuleRelativePath", "Public/ASSMTransitionNode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_NextState = { "NextState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UASSMTransitionNode, NextState), Z_Construct_UClass_UASSMStateNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_NextState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_NextState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_PreviousState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASSMTransitionNode" },
		{ "ModuleRelativePath", "Public/ASSMTransitionNode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_PreviousState = { "PreviousState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UASSMTransitionNode, PreviousState), Z_Construct_UClass_UASSMStateNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_PreviousState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_PreviousState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_InterruptNotify_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASSMTransitionNode" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ASSMTransitionNode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_InterruptNotify = { "InterruptNotify", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UASSMTransitionNode, InterruptNotify), Z_Construct_UClass_UAnimNotify_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_InterruptNotify_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_InterruptNotify_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_StartStateName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASSMTransitionNode" },
		{ "ModuleRelativePath", "Public/ASSMTransitionNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_StartStateName = { "StartStateName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UASSMTransitionNode, StartStateName), METADATA_PARAMS(Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_StartStateName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_StartStateName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_StartTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASSMTransitionNode" },
		{ "ModuleRelativePath", "Public/ASSMTransitionNode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UASSMTransitionNode, StartTime), METADATA_PARAMS(Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_StartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_StartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_bSyncTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASSMTransitionNode" },
		{ "ModuleRelativePath", "Public/ASSMTransitionNode.h" },
	};
#endif
	void Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_bSyncTime_SetBit(void* Obj)
	{
		((UASSMTransitionNode*)Obj)->bSyncTime = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_bSyncTime = { "bSyncTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UASSMTransitionNode), &Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_bSyncTime_SetBit, METADATA_PARAMS(Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_bSyncTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_bSyncTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_CustomBlendCurve_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASSMTransitionNode" },
		{ "ModuleRelativePath", "Public/ASSMTransitionNode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_CustomBlendCurve = { "CustomBlendCurve", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UASSMTransitionNode, CustomBlendCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_CustomBlendCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_CustomBlendCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_BlendMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASSMTransitionNode" },
		{ "ModuleRelativePath", "Public/ASSMTransitionNode.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_BlendMode = { "BlendMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UASSMTransitionNode, BlendMode), Z_Construct_UEnum_Engine_EAlphaBlendOption, METADATA_PARAMS(Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_BlendMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_BlendMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_BlendMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_CrossfadeDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASSMTransitionNode" },
		{ "ModuleRelativePath", "Public/ASSMTransitionNode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_CrossfadeDuration = { "CrossfadeDuration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UASSMTransitionNode, CrossfadeDuration), METADATA_PARAMS(Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_CrossfadeDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_CrossfadeDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_Custom_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASSMTransitionNode" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ASSMTransitionNode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_Custom = { "Custom", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UASSMTransitionNode, Custom), Z_Construct_UClass_UASTransition_Base_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_Custom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_Custom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_Blueprint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASSMTransitionNode" },
		{ "ModuleRelativePath", "Public/ASSMTransitionNode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UASSMTransitionNode, Blueprint), Z_Construct_UClass_UASTransition_BlueprintBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_Blueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_Blueprint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_CustomMovementMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASSMTransitionNode" },
		{ "ModuleRelativePath", "Public/ASSMTransitionNode.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_CustomMovementMode = { "CustomMovementMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UASSMTransitionNode, CustomMovementMode), nullptr, METADATA_PARAMS(Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_CustomMovementMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_CustomMovementMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_MovementMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASSMTransitionNode" },
		{ "ModuleRelativePath", "Public/ASSMTransitionNode.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_MovementMode = { "MovementMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UASSMTransitionNode, MovementMode), Z_Construct_UEnum_Engine_EMovementMode, METADATA_PARAMS(Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_MovementMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_MovementMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_Command_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASSMTransitionNode" },
		{ "ModuleRelativePath", "Public/ASSMTransitionNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_Command = { "Command", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UASSMTransitionNode, Command), METADATA_PARAMS(Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_Command_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_Command_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_bNotEqual_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASSMTransitionNode" },
		{ "ModuleRelativePath", "Public/ASSMTransitionNode.h" },
	};
#endif
	void Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_bNotEqual_SetBit(void* Obj)
	{
		((UASSMTransitionNode*)Obj)->bNotEqual = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_bNotEqual = { "bNotEqual", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UASSMTransitionNode), &Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_bNotEqual_SetBit, METADATA_PARAMS(Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_bNotEqual_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_bNotEqual_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_TransitionRule_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASSMTransitionNode" },
		{ "ModuleRelativePath", "Public/ASSMTransitionNode.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_TransitionRule = { "TransitionRule", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UASSMTransitionNode, TransitionRule), Z_Construct_UEnum_ActionSystem_ETransitionRule, METADATA_PARAMS(Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_TransitionRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_TransitionRule_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_Bidirectional_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASSMTransitionNode" },
		{ "ModuleRelativePath", "Public/ASSMTransitionNode.h" },
	};
#endif
	void Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_Bidirectional_SetBit(void* Obj)
	{
		((UASSMTransitionNode*)Obj)->Bidirectional = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_Bidirectional = { "Bidirectional", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UASSMTransitionNode), &Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_Bidirectional_SetBit, METADATA_PARAMS(Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_Bidirectional_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_Bidirectional_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_PriorityOrder_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASSMTransitionNode" },
		{ "ModuleRelativePath", "Public/ASSMTransitionNode.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_PriorityOrder = { "PriorityOrder", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UASSMTransitionNode, PriorityOrder), METADATA_PARAMS(Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_PriorityOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_PriorityOrder_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UASSMTransitionNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_NextState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_PreviousState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_InterruptNotify,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_StartStateName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_StartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_bSyncTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_CustomBlendCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_BlendMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_BlendMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_CrossfadeDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_Custom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_Blueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_CustomMovementMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_MovementMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_Command,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_bNotEqual,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_TransitionRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_Bidirectional,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASSMTransitionNode_Statics::NewProp_PriorityOrder,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UASSMTransitionNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UASSMTransitionNode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UASSMTransitionNode_Statics::ClassParams = {
		&UASSMTransitionNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UASSMTransitionNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UASSMTransitionNode_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UASSMTransitionNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UASSMTransitionNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UASSMTransitionNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UASSMTransitionNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UASSMTransitionNode, 2928851396);
	template<> ACTIONSYSTEM_API UClass* StaticClass<UASSMTransitionNode>()
	{
		return UASSMTransitionNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UASSMTransitionNode(Z_Construct_UClass_UASSMTransitionNode, &UASSMTransitionNode::StaticClass, TEXT("/Script/ActionSystem"), TEXT("UASSMTransitionNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UASSMTransitionNode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
