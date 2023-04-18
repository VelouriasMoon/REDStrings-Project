// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "REDAnimationNode/Public/AnimNode_RigidBodyRedCustom.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_RigidBodyRedCustom() {}
// Cross Module References
	REDANIMATIONNODE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom();
	UPackage* Z_Construct_UPackage__Script_REDAnimationNode();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	REDANIMATIONNODE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustomInterpolateInfo();
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_ESimulationSpace();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsAsset_NoRegister();
// End Cross Module References
class UScriptStruct* FAnimNode_RigidBodyRedCustom::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern REDANIMATIONNODE_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom, Z_Construct_UPackage__Script_REDAnimationNode(), TEXT("AnimNode_RigidBodyRedCustom"), sizeof(FAnimNode_RigidBodyRedCustom), Get_Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Hash());
	}
	return Singleton;
}
template<> REDANIMATIONNODE_API UScriptStruct* StaticStruct<FAnimNode_RigidBodyRedCustom>()
{
	return FAnimNode_RigidBodyRedCustom::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_RigidBodyRedCustom(FAnimNode_RigidBodyRedCustom::StaticStruct, TEXT("/Script/REDAnimationNode"), TEXT("AnimNode_RigidBodyRedCustom"), false, nullptr, nullptr);
static struct FScriptStruct_REDAnimationNode_StaticRegisterNativesFAnimNode_RigidBodyRedCustom
{
	FScriptStruct_REDAnimationNode_StaticRegisterNativesFAnimNode_RigidBodyRedCustom()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_RigidBodyRedCustom")),new UScriptStruct::TCppStructOps<FAnimNode_RigidBodyRedCustom>);
	}
} ScriptStruct_REDAnimationNode_StaticRegisterNativesFAnimNode_RigidBodyRedCustom;
	struct Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpolateInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InterpolateInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLengthLock_MetaData[];
#endif
		static void NewProp_bLengthLock_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLengthLock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameSplitTranslate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrameSplitTranslate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LimitSimulationTranslate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LimitSimulationTranslate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdlingSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IdlingSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SimulationSecondsMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SimulationSecondsMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeltaSecondsScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaSecondsScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bClampLinearTranslationLimitToRefPose_MetaData[];
#endif
		static void NewProp_bClampLinearTranslationLimitToRefPose_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClampLinearTranslationLimitToRefPose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFreezeIncomingPoseOnStart_MetaData[];
#endif
		static void NewProp_bFreezeIncomingPoseOnStart_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFreezeIncomingPoseOnStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTransferBoneVelocities_MetaData[];
#endif
		static void NewProp_bTransferBoneVelocities_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTransferBoneVelocities;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideWorldGravity_MetaData[];
#endif
		static void NewProp_bOverrideWorldGravity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideWorldGravity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableWorldGeometry_MetaData[];
#endif
		static void NewProp_bEnableWorldGeometry_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableWorldGeometry;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceDisableCollisionBetweenConstraintBodies_MetaData[];
#endif
		static void NewProp_bForceDisableCollisionBetweenConstraintBodies_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceDisableCollisionBetweenConstraintBodies;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SimulationSpace_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SimulationSpace;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SimulationSpace_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlapChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OverlapChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseBoneRef_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BaseBoneRef;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedBoundsScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CachedBoundsScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentAppliedLinearAccClamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ComponentAppliedLinearAccClamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentLinearVelScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ComponentLinearVelScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentLinearAccScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ComponentLinearAccScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExternalForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExternalForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideWorldGravity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OverrideWorldGravity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverridePhysicsAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverridePhysicsAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNode_RigidBodyRedCustom.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_RigidBodyRedCustom>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_InterpolateInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_RigidBodyRedCustom" },
		{ "ModuleRelativePath", "Public/AnimNode_RigidBodyRedCustom.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_InterpolateInfo = { "InterpolateInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_RigidBodyRedCustom, InterpolateInfo), Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustomInterpolateInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_InterpolateInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_InterpolateInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_bLengthLock_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_RigidBodyRedCustom" },
		{ "ModuleRelativePath", "Public/AnimNode_RigidBodyRedCustom.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_bLengthLock_SetBit(void* Obj)
	{
		((FAnimNode_RigidBodyRedCustom*)Obj)->bLengthLock = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_bLengthLock = { "bLengthLock", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_RigidBodyRedCustom), &Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_bLengthLock_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_bLengthLock_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_bLengthLock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_FrameSplitTranslate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_RigidBodyRedCustom" },
		{ "ModuleRelativePath", "Public/AnimNode_RigidBodyRedCustom.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_FrameSplitTranslate = { "FrameSplitTranslate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_RigidBodyRedCustom, FrameSplitTranslate), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_FrameSplitTranslate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_FrameSplitTranslate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_LimitSimulationTranslate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_RigidBodyRedCustom" },
		{ "ModuleRelativePath", "Public/AnimNode_RigidBodyRedCustom.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_LimitSimulationTranslate = { "LimitSimulationTranslate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_RigidBodyRedCustom, LimitSimulationTranslate), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_LimitSimulationTranslate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_LimitSimulationTranslate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_IdlingSeconds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_RigidBodyRedCustom" },
		{ "ModuleRelativePath", "Public/AnimNode_RigidBodyRedCustom.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_IdlingSeconds = { "IdlingSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_RigidBodyRedCustom, IdlingSeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_IdlingSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_IdlingSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_SimulationSecondsMax_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_RigidBodyRedCustom" },
		{ "ModuleRelativePath", "Public/AnimNode_RigidBodyRedCustom.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_SimulationSecondsMax = { "SimulationSecondsMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_RigidBodyRedCustom, SimulationSecondsMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_SimulationSecondsMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_SimulationSecondsMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_DeltaSecondsScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_RigidBodyRedCustom" },
		{ "ModuleRelativePath", "Public/AnimNode_RigidBodyRedCustom.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_DeltaSecondsScale = { "DeltaSecondsScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_RigidBodyRedCustom, DeltaSecondsScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_DeltaSecondsScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_DeltaSecondsScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_bClampLinearTranslationLimitToRefPose_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_RigidBodyRedCustom" },
		{ "ModuleRelativePath", "Public/AnimNode_RigidBodyRedCustom.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_bClampLinearTranslationLimitToRefPose_SetBit(void* Obj)
	{
		((FAnimNode_RigidBodyRedCustom*)Obj)->bClampLinearTranslationLimitToRefPose = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_bClampLinearTranslationLimitToRefPose = { "bClampLinearTranslationLimitToRefPose", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAnimNode_RigidBodyRedCustom), &Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_bClampLinearTranslationLimitToRefPose_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_bClampLinearTranslationLimitToRefPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_bClampLinearTranslationLimitToRefPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_bFreezeIncomingPoseOnStart_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_RigidBodyRedCustom" },
		{ "ModuleRelativePath", "Public/AnimNode_RigidBodyRedCustom.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_bFreezeIncomingPoseOnStart_SetBit(void* Obj)
	{
		((FAnimNode_RigidBodyRedCustom*)Obj)->bFreezeIncomingPoseOnStart = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_bFreezeIncomingPoseOnStart = { "bFreezeIncomingPoseOnStart", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAnimNode_RigidBodyRedCustom), &Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_bFreezeIncomingPoseOnStart_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_bFreezeIncomingPoseOnStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_bFreezeIncomingPoseOnStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_bTransferBoneVelocities_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_RigidBodyRedCustom" },
		{ "ModuleRelativePath", "Public/AnimNode_RigidBodyRedCustom.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_bTransferBoneVelocities_SetBit(void* Obj)
	{
		((FAnimNode_RigidBodyRedCustom*)Obj)->bTransferBoneVelocities = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_bTransferBoneVelocities = { "bTransferBoneVelocities", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAnimNode_RigidBodyRedCustom), &Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_bTransferBoneVelocities_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_bTransferBoneVelocities_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_bTransferBoneVelocities_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_bOverrideWorldGravity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_RigidBodyRedCustom" },
		{ "ModuleRelativePath", "Public/AnimNode_RigidBodyRedCustom.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_bOverrideWorldGravity_SetBit(void* Obj)
	{
		((FAnimNode_RigidBodyRedCustom*)Obj)->bOverrideWorldGravity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_bOverrideWorldGravity = { "bOverrideWorldGravity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAnimNode_RigidBodyRedCustom), &Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_bOverrideWorldGravity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_bOverrideWorldGravity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_bOverrideWorldGravity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_bEnableWorldGeometry_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_RigidBodyRedCustom" },
		{ "ModuleRelativePath", "Public/AnimNode_RigidBodyRedCustom.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_bEnableWorldGeometry_SetBit(void* Obj)
	{
		((FAnimNode_RigidBodyRedCustom*)Obj)->bEnableWorldGeometry = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_bEnableWorldGeometry = { "bEnableWorldGeometry", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAnimNode_RigidBodyRedCustom), &Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_bEnableWorldGeometry_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_bEnableWorldGeometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_bEnableWorldGeometry_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_bForceDisableCollisionBetweenConstraintBodies_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_RigidBodyRedCustom" },
		{ "ModuleRelativePath", "Public/AnimNode_RigidBodyRedCustom.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_bForceDisableCollisionBetweenConstraintBodies_SetBit(void* Obj)
	{
		((FAnimNode_RigidBodyRedCustom*)Obj)->bForceDisableCollisionBetweenConstraintBodies = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_bForceDisableCollisionBetweenConstraintBodies = { "bForceDisableCollisionBetweenConstraintBodies", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_RigidBodyRedCustom), &Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_bForceDisableCollisionBetweenConstraintBodies_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_bForceDisableCollisionBetweenConstraintBodies_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_bForceDisableCollisionBetweenConstraintBodies_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_SimulationSpace_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_RigidBodyRedCustom" },
		{ "ModuleRelativePath", "Public/AnimNode_RigidBodyRedCustom.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_SimulationSpace = { "SimulationSpace", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_RigidBodyRedCustom, SimulationSpace), Z_Construct_UEnum_AnimGraphRuntime_ESimulationSpace, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_SimulationSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_SimulationSpace_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_SimulationSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_OverlapChannel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_RigidBodyRedCustom" },
		{ "ModuleRelativePath", "Public/AnimNode_RigidBodyRedCustom.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_OverlapChannel = { "OverlapChannel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_RigidBodyRedCustom, OverlapChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_OverlapChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_OverlapChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_BaseBoneRef_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_RigidBodyRedCustom" },
		{ "ModuleRelativePath", "Public/AnimNode_RigidBodyRedCustom.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_BaseBoneRef = { "BaseBoneRef", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_RigidBodyRedCustom, BaseBoneRef), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_BaseBoneRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_BaseBoneRef_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_CachedBoundsScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_RigidBodyRedCustom" },
		{ "ModuleRelativePath", "Public/AnimNode_RigidBodyRedCustom.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_CachedBoundsScale = { "CachedBoundsScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_RigidBodyRedCustom, CachedBoundsScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_CachedBoundsScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_CachedBoundsScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_ComponentAppliedLinearAccClamp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_RigidBodyRedCustom" },
		{ "ModuleRelativePath", "Public/AnimNode_RigidBodyRedCustom.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_ComponentAppliedLinearAccClamp = { "ComponentAppliedLinearAccClamp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_RigidBodyRedCustom, ComponentAppliedLinearAccClamp), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_ComponentAppliedLinearAccClamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_ComponentAppliedLinearAccClamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_ComponentLinearVelScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_RigidBodyRedCustom" },
		{ "ModuleRelativePath", "Public/AnimNode_RigidBodyRedCustom.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_ComponentLinearVelScale = { "ComponentLinearVelScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_RigidBodyRedCustom, ComponentLinearVelScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_ComponentLinearVelScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_ComponentLinearVelScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_ComponentLinearAccScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_RigidBodyRedCustom" },
		{ "ModuleRelativePath", "Public/AnimNode_RigidBodyRedCustom.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_ComponentLinearAccScale = { "ComponentLinearAccScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_RigidBodyRedCustom, ComponentLinearAccScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_ComponentLinearAccScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_ComponentLinearAccScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_ExternalForce_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_RigidBodyRedCustom" },
		{ "ModuleRelativePath", "Public/AnimNode_RigidBodyRedCustom.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_ExternalForce = { "ExternalForce", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_RigidBodyRedCustom, ExternalForce), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_ExternalForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_ExternalForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_OverrideWorldGravity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_RigidBodyRedCustom" },
		{ "ModuleRelativePath", "Public/AnimNode_RigidBodyRedCustom.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_OverrideWorldGravity = { "OverrideWorldGravity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_RigidBodyRedCustom, OverrideWorldGravity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_OverrideWorldGravity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_OverrideWorldGravity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_OverridePhysicsAsset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_RigidBodyRedCustom" },
		{ "ModuleRelativePath", "Public/AnimNode_RigidBodyRedCustom.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_OverridePhysicsAsset = { "OverridePhysicsAsset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_RigidBodyRedCustom, OverridePhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_OverridePhysicsAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_OverridePhysicsAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_InterpolateInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_bLengthLock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_FrameSplitTranslate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_LimitSimulationTranslate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_IdlingSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_SimulationSecondsMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_DeltaSecondsScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_bClampLinearTranslationLimitToRefPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_bFreezeIncomingPoseOnStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_bTransferBoneVelocities,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_bOverrideWorldGravity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_bEnableWorldGeometry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_bForceDisableCollisionBetweenConstraintBodies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_SimulationSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_SimulationSpace_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_OverlapChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_BaseBoneRef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_CachedBoundsScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_ComponentAppliedLinearAccClamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_ComponentLinearVelScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_ComponentLinearAccScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_ExternalForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_OverrideWorldGravity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::NewProp_OverridePhysicsAsset,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_REDAnimationNode,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_RigidBodyRedCustom",
		sizeof(FAnimNode_RigidBodyRedCustom),
		alignof(FAnimNode_RigidBodyRedCustom),
		Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_REDAnimationNode();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_RigidBodyRedCustom"), sizeof(FAnimNode_RigidBodyRedCustom), Get_Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustom_Hash() { return 1995979243U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
