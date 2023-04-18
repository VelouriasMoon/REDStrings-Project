// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "REDAnimationNode/Public/AnimNode_AnimDynamicsRedCustom.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_AnimDynamicsRedCustom() {}
// Cross Module References
	REDANIMATIONNODE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom();
	UPackage* Z_Construct_UPackage__Script_REDAnimationNode();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_AnimPhysSimSpaceType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_AnimPhysCollisionType();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimPhysPlanarLimit();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimPhysSphericalLimit();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimPhysConstraintSetup();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
// End Cross Module References
class UScriptStruct* FAnimNode_AnimDynamicsRedCustom::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern REDANIMATIONNODE_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom, Z_Construct_UPackage__Script_REDAnimationNode(), TEXT("AnimNode_AnimDynamicsRedCustom"), sizeof(FAnimNode_AnimDynamicsRedCustom), Get_Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Hash());
	}
	return Singleton;
}
template<> REDANIMATIONNODE_API UScriptStruct* StaticStruct<FAnimNode_AnimDynamicsRedCustom>()
{
	return FAnimNode_AnimDynamicsRedCustom::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom(FAnimNode_AnimDynamicsRedCustom::StaticStruct, TEXT("/Script/REDAnimationNode"), TEXT("AnimNode_AnimDynamicsRedCustom"), false, nullptr, nullptr);
static struct FScriptStruct_REDAnimationNode_StaticRegisterNativesFAnimNode_AnimDynamicsRedCustom
{
	FScriptStruct_REDAnimationNode_StaticRegisterNativesFAnimNode_AnimDynamicsRedCustom()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_AnimDynamicsRedCustom")),new UScriptStruct::TCppStructOps<FAnimNode_AnimDynamicsRedCustom>);
	}
} ScriptStruct_REDAnimationNode_StaticRegisterNativesFAnimNode_AnimDynamicsRedCustom;
	struct Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bChain_MetaData[];
#endif
		static void NewProp_bChain_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bChain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAngularSpring_MetaData[];
#endif
		static void NewProp_bAngularSpring_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAngularSpring;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLinearSpring_MetaData[];
#endif
		static void NewProp_bLinearSpring_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLinearSpring;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseGravityOverride_MetaData[];
#endif
		static void NewProp_bUseGravityOverride_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseGravityOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableWind_MetaData[];
#endif
		static void NewProp_bEnableWind_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableWind;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideAngularDamping_MetaData[];
#endif
		static void NewProp_bOverrideAngularDamping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideAngularDamping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideAngularBias_MetaData[];
#endif
		static void NewProp_bOverrideAngularBias_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideAngularBias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideLinearDamping_MetaData[];
#endif
		static void NewProp_bOverrideLinearDamping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideLinearDamping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDoEval_MetaData[];
#endif
		static void NewProp_bDoEval_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoEval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDoUpdate_MetaData[];
#endif
		static void NewProp_bDoUpdate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsePlanarLimit_MetaData[];
#endif
		static void NewProp_bUsePlanarLimit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsePlanarLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseSphericalLimits_MetaData[];
#endif
		static void NewProp_bUseSphericalLimits_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseSphericalLimits;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SimulationSpace_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SimulationSpace;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SimulationSpace_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CollisionType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CollisionType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlanarLimits_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlanarLimits;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlanarLimits_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExternalForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExternalForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereCollisionRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SphereCollisionRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphericalLimits_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SphericalLimits;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SphericalLimits_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstraintSetup_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConstraintSetup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumSolverIterationsPostUpdate_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumSolverIterationsPostUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumSolverIterationsPreUpdate_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumSolverIterationsPreUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularBiasOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AngularBiasOverride;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WindScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WindScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularSpringConstant_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AngularSpringConstant;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearSpringConstant_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LinearSpringConstant;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GravityOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GravityOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GravityScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GravityScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalJointOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalJointOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxExtents_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoxExtents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChainEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChainEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoundBone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelativeSpaceBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RelativeSpaceBone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularDampingOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AngularDampingOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearDampingOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LinearDampingOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdlingSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IdlingSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNode_AnimDynamicsRedCustom.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_AnimDynamicsRedCustom>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bChain_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_AnimDynamicsRedCustom" },
		{ "ModuleRelativePath", "Public/AnimNode_AnimDynamicsRedCustom.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bChain_SetBit(void* Obj)
	{
		((FAnimNode_AnimDynamicsRedCustom*)Obj)->bChain = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bChain = { "bChain", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAnimNode_AnimDynamicsRedCustom), &Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bChain_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bChain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bChain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bAngularSpring_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_AnimDynamicsRedCustom" },
		{ "ModuleRelativePath", "Public/AnimNode_AnimDynamicsRedCustom.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bAngularSpring_SetBit(void* Obj)
	{
		((FAnimNode_AnimDynamicsRedCustom*)Obj)->bAngularSpring = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bAngularSpring = { "bAngularSpring", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAnimNode_AnimDynamicsRedCustom), &Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bAngularSpring_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bAngularSpring_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bAngularSpring_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bLinearSpring_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_AnimDynamicsRedCustom" },
		{ "ModuleRelativePath", "Public/AnimNode_AnimDynamicsRedCustom.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bLinearSpring_SetBit(void* Obj)
	{
		((FAnimNode_AnimDynamicsRedCustom*)Obj)->bLinearSpring = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bLinearSpring = { "bLinearSpring", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAnimNode_AnimDynamicsRedCustom), &Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bLinearSpring_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bLinearSpring_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bLinearSpring_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bUseGravityOverride_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_AnimDynamicsRedCustom" },
		{ "ModuleRelativePath", "Public/AnimNode_AnimDynamicsRedCustom.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bUseGravityOverride_SetBit(void* Obj)
	{
		((FAnimNode_AnimDynamicsRedCustom*)Obj)->bUseGravityOverride = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bUseGravityOverride = { "bUseGravityOverride", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAnimNode_AnimDynamicsRedCustom), &Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bUseGravityOverride_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bUseGravityOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bUseGravityOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bEnableWind_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_AnimDynamicsRedCustom" },
		{ "ModuleRelativePath", "Public/AnimNode_AnimDynamicsRedCustom.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bEnableWind_SetBit(void* Obj)
	{
		((FAnimNode_AnimDynamicsRedCustom*)Obj)->bEnableWind = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bEnableWind = { "bEnableWind", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAnimNode_AnimDynamicsRedCustom), &Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bEnableWind_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bEnableWind_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bEnableWind_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bOverrideAngularDamping_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_AnimDynamicsRedCustom" },
		{ "ModuleRelativePath", "Public/AnimNode_AnimDynamicsRedCustom.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bOverrideAngularDamping_SetBit(void* Obj)
	{
		((FAnimNode_AnimDynamicsRedCustom*)Obj)->bOverrideAngularDamping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bOverrideAngularDamping = { "bOverrideAngularDamping", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAnimNode_AnimDynamicsRedCustom), &Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bOverrideAngularDamping_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bOverrideAngularDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bOverrideAngularDamping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bOverrideAngularBias_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_AnimDynamicsRedCustom" },
		{ "ModuleRelativePath", "Public/AnimNode_AnimDynamicsRedCustom.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bOverrideAngularBias_SetBit(void* Obj)
	{
		((FAnimNode_AnimDynamicsRedCustom*)Obj)->bOverrideAngularBias = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bOverrideAngularBias = { "bOverrideAngularBias", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAnimNode_AnimDynamicsRedCustom), &Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bOverrideAngularBias_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bOverrideAngularBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bOverrideAngularBias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bOverrideLinearDamping_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_AnimDynamicsRedCustom" },
		{ "ModuleRelativePath", "Public/AnimNode_AnimDynamicsRedCustom.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bOverrideLinearDamping_SetBit(void* Obj)
	{
		((FAnimNode_AnimDynamicsRedCustom*)Obj)->bOverrideLinearDamping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bOverrideLinearDamping = { "bOverrideLinearDamping", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAnimNode_AnimDynamicsRedCustom), &Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bOverrideLinearDamping_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bOverrideLinearDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bOverrideLinearDamping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bDoEval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_AnimDynamicsRedCustom" },
		{ "ModuleRelativePath", "Public/AnimNode_AnimDynamicsRedCustom.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bDoEval_SetBit(void* Obj)
	{
		((FAnimNode_AnimDynamicsRedCustom*)Obj)->bDoEval = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bDoEval = { "bDoEval", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAnimNode_AnimDynamicsRedCustom), &Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bDoEval_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bDoEval_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bDoEval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bDoUpdate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_AnimDynamicsRedCustom" },
		{ "ModuleRelativePath", "Public/AnimNode_AnimDynamicsRedCustom.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bDoUpdate_SetBit(void* Obj)
	{
		((FAnimNode_AnimDynamicsRedCustom*)Obj)->bDoUpdate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bDoUpdate = { "bDoUpdate", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAnimNode_AnimDynamicsRedCustom), &Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bDoUpdate_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bDoUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bDoUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bUsePlanarLimit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_AnimDynamicsRedCustom" },
		{ "ModuleRelativePath", "Public/AnimNode_AnimDynamicsRedCustom.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bUsePlanarLimit_SetBit(void* Obj)
	{
		((FAnimNode_AnimDynamicsRedCustom*)Obj)->bUsePlanarLimit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bUsePlanarLimit = { "bUsePlanarLimit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAnimNode_AnimDynamicsRedCustom), &Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bUsePlanarLimit_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bUsePlanarLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bUsePlanarLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bUseSphericalLimits_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_AnimDynamicsRedCustom" },
		{ "ModuleRelativePath", "Public/AnimNode_AnimDynamicsRedCustom.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bUseSphericalLimits_SetBit(void* Obj)
	{
		((FAnimNode_AnimDynamicsRedCustom*)Obj)->bUseSphericalLimits = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bUseSphericalLimits = { "bUseSphericalLimits", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAnimNode_AnimDynamicsRedCustom), &Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bUseSphericalLimits_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bUseSphericalLimits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bUseSphericalLimits_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_SimulationSpace_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_AnimDynamicsRedCustom" },
		{ "ModuleRelativePath", "Public/AnimNode_AnimDynamicsRedCustom.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_SimulationSpace = { "SimulationSpace", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_AnimDynamicsRedCustom, SimulationSpace), Z_Construct_UEnum_AnimGraphRuntime_AnimPhysSimSpaceType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_SimulationSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_SimulationSpace_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_SimulationSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_CollisionType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_AnimDynamicsRedCustom" },
		{ "ModuleRelativePath", "Public/AnimNode_AnimDynamicsRedCustom.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_CollisionType = { "CollisionType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_AnimDynamicsRedCustom, CollisionType), Z_Construct_UEnum_Engine_AnimPhysCollisionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_CollisionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_CollisionType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_CollisionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_PlanarLimits_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "ModuleRelativePath", "Public/AnimNode_AnimDynamicsRedCustom.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_PlanarLimits = { "PlanarLimits", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_AnimDynamicsRedCustom, PlanarLimits), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_PlanarLimits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_PlanarLimits_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_PlanarLimits_Inner = { "PlanarLimits", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAnimPhysPlanarLimit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_ExternalForce_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_AnimDynamicsRedCustom" },
		{ "ModuleRelativePath", "Public/AnimNode_AnimDynamicsRedCustom.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_ExternalForce = { "ExternalForce", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_AnimDynamicsRedCustom, ExternalForce), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_ExternalForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_ExternalForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_SphereCollisionRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_AnimDynamicsRedCustom" },
		{ "ModuleRelativePath", "Public/AnimNode_AnimDynamicsRedCustom.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_SphereCollisionRadius = { "SphereCollisionRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_AnimDynamicsRedCustom, SphereCollisionRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_SphereCollisionRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_SphereCollisionRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_SphericalLimits_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "ModuleRelativePath", "Public/AnimNode_AnimDynamicsRedCustom.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_SphericalLimits = { "SphericalLimits", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_AnimDynamicsRedCustom, SphericalLimits), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_SphericalLimits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_SphericalLimits_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_SphericalLimits_Inner = { "SphericalLimits", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAnimPhysSphericalLimit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_ConstraintSetup_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "ModuleRelativePath", "Public/AnimNode_AnimDynamicsRedCustom.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_ConstraintSetup = { "ConstraintSetup", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_AnimDynamicsRedCustom, ConstraintSetup), Z_Construct_UScriptStruct_FAnimPhysConstraintSetup, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_ConstraintSetup_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_ConstraintSetup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_NumSolverIterationsPostUpdate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_AnimDynamicsRedCustom" },
		{ "ModuleRelativePath", "Public/AnimNode_AnimDynamicsRedCustom.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_NumSolverIterationsPostUpdate = { "NumSolverIterationsPostUpdate", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_AnimDynamicsRedCustom, NumSolverIterationsPostUpdate), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_NumSolverIterationsPostUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_NumSolverIterationsPostUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_NumSolverIterationsPreUpdate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_AnimDynamicsRedCustom" },
		{ "ModuleRelativePath", "Public/AnimNode_AnimDynamicsRedCustom.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_NumSolverIterationsPreUpdate = { "NumSolverIterationsPreUpdate", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_AnimDynamicsRedCustom, NumSolverIterationsPreUpdate), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_NumSolverIterationsPreUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_NumSolverIterationsPreUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_AngularBiasOverride_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_AnimDynamicsRedCustom" },
		{ "ModuleRelativePath", "Public/AnimNode_AnimDynamicsRedCustom.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_AngularBiasOverride = { "AngularBiasOverride", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_AnimDynamicsRedCustom, AngularBiasOverride), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_AngularBiasOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_AngularBiasOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_ComponentAppliedLinearAccClamp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_AnimDynamicsRedCustom" },
		{ "ModuleRelativePath", "Public/AnimNode_AnimDynamicsRedCustom.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_ComponentAppliedLinearAccClamp = { "ComponentAppliedLinearAccClamp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_AnimDynamicsRedCustom, ComponentAppliedLinearAccClamp), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_ComponentAppliedLinearAccClamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_ComponentAppliedLinearAccClamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_ComponentLinearVelScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_AnimDynamicsRedCustom" },
		{ "ModuleRelativePath", "Public/AnimNode_AnimDynamicsRedCustom.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_ComponentLinearVelScale = { "ComponentLinearVelScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_AnimDynamicsRedCustom, ComponentLinearVelScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_ComponentLinearVelScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_ComponentLinearVelScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_ComponentLinearAccScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_AnimDynamicsRedCustom" },
		{ "ModuleRelativePath", "Public/AnimNode_AnimDynamicsRedCustom.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_ComponentLinearAccScale = { "ComponentLinearAccScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_AnimDynamicsRedCustom, ComponentLinearAccScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_ComponentLinearAccScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_ComponentLinearAccScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_WindScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_AnimDynamicsRedCustom" },
		{ "ModuleRelativePath", "Public/AnimNode_AnimDynamicsRedCustom.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_WindScale = { "WindScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_AnimDynamicsRedCustom, WindScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_WindScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_WindScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_AngularSpringConstant_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_AnimDynamicsRedCustom" },
		{ "ModuleRelativePath", "Public/AnimNode_AnimDynamicsRedCustom.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_AngularSpringConstant = { "AngularSpringConstant", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_AnimDynamicsRedCustom, AngularSpringConstant), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_AngularSpringConstant_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_AngularSpringConstant_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_LinearSpringConstant_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_AnimDynamicsRedCustom" },
		{ "ModuleRelativePath", "Public/AnimNode_AnimDynamicsRedCustom.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_LinearSpringConstant = { "LinearSpringConstant", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_AnimDynamicsRedCustom, LinearSpringConstant), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_LinearSpringConstant_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_LinearSpringConstant_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_GravityOverride_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_AnimDynamicsRedCustom" },
		{ "ModuleRelativePath", "Public/AnimNode_AnimDynamicsRedCustom.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_GravityOverride = { "GravityOverride", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_AnimDynamicsRedCustom, GravityOverride), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_GravityOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_GravityOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_GravityScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_AnimDynamicsRedCustom" },
		{ "ModuleRelativePath", "Public/AnimNode_AnimDynamicsRedCustom.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_GravityScale = { "GravityScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_AnimDynamicsRedCustom, GravityScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_GravityScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_GravityScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_LocalJointOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_AnimDynamicsRedCustom" },
		{ "ModuleRelativePath", "Public/AnimNode_AnimDynamicsRedCustom.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_LocalJointOffset = { "LocalJointOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_AnimDynamicsRedCustom, LocalJointOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_LocalJointOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_LocalJointOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_BoxExtents_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_AnimDynamicsRedCustom" },
		{ "ModuleRelativePath", "Public/AnimNode_AnimDynamicsRedCustom.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_BoxExtents = { "BoxExtents", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_AnimDynamicsRedCustom, BoxExtents), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_BoxExtents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_BoxExtents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_ChainEnd_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_AnimDynamicsRedCustom" },
		{ "ModuleRelativePath", "Public/AnimNode_AnimDynamicsRedCustom.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_ChainEnd = { "ChainEnd", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_AnimDynamicsRedCustom, ChainEnd), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_ChainEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_ChainEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_BoundBone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_AnimDynamicsRedCustom" },
		{ "ModuleRelativePath", "Public/AnimNode_AnimDynamicsRedCustom.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_BoundBone = { "BoundBone", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_AnimDynamicsRedCustom, BoundBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_BoundBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_BoundBone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_RelativeSpaceBone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_AnimDynamicsRedCustom" },
		{ "ModuleRelativePath", "Public/AnimNode_AnimDynamicsRedCustom.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_RelativeSpaceBone = { "RelativeSpaceBone", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_AnimDynamicsRedCustom, RelativeSpaceBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_RelativeSpaceBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_RelativeSpaceBone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_AngularDampingOverride_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_AnimDynamicsRedCustom" },
		{ "ModuleRelativePath", "Public/AnimNode_AnimDynamicsRedCustom.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_AngularDampingOverride = { "AngularDampingOverride", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_AnimDynamicsRedCustom, AngularDampingOverride), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_AngularDampingOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_AngularDampingOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_LinearDampingOverride_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_AnimDynamicsRedCustom" },
		{ "ModuleRelativePath", "Public/AnimNode_AnimDynamicsRedCustom.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_LinearDampingOverride = { "LinearDampingOverride", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_AnimDynamicsRedCustom, LinearDampingOverride), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_LinearDampingOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_LinearDampingOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_IdlingSeconds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_AnimDynamicsRedCustom" },
		{ "ModuleRelativePath", "Public/AnimNode_AnimDynamicsRedCustom.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_IdlingSeconds = { "IdlingSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_AnimDynamicsRedCustom, IdlingSeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_IdlingSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_IdlingSeconds_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bChain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bAngularSpring,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bLinearSpring,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bUseGravityOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bEnableWind,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bOverrideAngularDamping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bOverrideAngularBias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bOverrideLinearDamping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bDoEval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bDoUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bUsePlanarLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_bUseSphericalLimits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_SimulationSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_SimulationSpace_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_CollisionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_CollisionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_PlanarLimits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_PlanarLimits_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_ExternalForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_SphereCollisionRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_SphericalLimits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_SphericalLimits_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_ConstraintSetup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_NumSolverIterationsPostUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_NumSolverIterationsPreUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_AngularBiasOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_ComponentAppliedLinearAccClamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_ComponentLinearVelScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_ComponentLinearAccScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_WindScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_AngularSpringConstant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_LinearSpringConstant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_GravityOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_GravityScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_LocalJointOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_BoxExtents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_ChainEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_BoundBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_RelativeSpaceBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_AngularDampingOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_LinearDampingOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::NewProp_IdlingSeconds,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_REDAnimationNode,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_AnimDynamicsRedCustom",
		sizeof(FAnimNode_AnimDynamicsRedCustom),
		alignof(FAnimNode_AnimDynamicsRedCustom),
		Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_REDAnimationNode();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_AnimDynamicsRedCustom"), sizeof(FAnimNode_AnimDynamicsRedCustom), Get_Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_AnimDynamicsRedCustom_Hash() { return 3454400352U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
