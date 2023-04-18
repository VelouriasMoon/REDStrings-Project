// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef KAWAIIPHYSICS_AnimNode_KawaiiPhysics_generated_h
#error "AnimNode_KawaiiPhysics.generated.h already included, missing '#pragma once' in AnimNode_KawaiiPhysics.h"
#endif
#define KAWAIIPHYSICS_AnimNode_KawaiiPhysics_generated_h

#define REDStrings_Plugins_Marketplace_KawaiiPhysics_Source_KawaiiPhysics_Public_AnimNode_KawaiiPhysics_h_219_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics; \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__TotalBoneLength() { return STRUCT_OFFSET(FAnimNode_KawaiiPhysics, TotalBoneLength); } \
	FORCEINLINE static uint32 __PPO__PreSkelCompTransform() { return STRUCT_OFFSET(FAnimNode_KawaiiPhysics, PreSkelCompTransform); } \
	FORCEINLINE static uint32 __PPO__bInitPhysicsSettings() { return STRUCT_OFFSET(FAnimNode_KawaiiPhysics, bInitPhysicsSettings); } \
	typedef FAnimNode_SkeletalControlBase Super;


template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<struct FAnimNode_KawaiiPhysics>();

#define REDStrings_Plugins_Marketplace_KawaiiPhysics_Source_KawaiiPhysics_Public_AnimNode_KawaiiPhysics_h_165_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics; \
	static class UScriptStruct* StaticStruct();


template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<struct FKawaiiPhysicsModifyBone>();

#define REDStrings_Plugins_Marketplace_KawaiiPhysics_Source_KawaiiPhysics_Public_AnimNode_KawaiiPhysics_h_146_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<struct FKawaiiPhysicsSettings>();

#define REDStrings_Plugins_Marketplace_KawaiiPhysics_Source_KawaiiPhysics_Public_AnimNode_KawaiiPhysics_h_130_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPlanarLimit_Statics; \
	KAWAIIPHYSICS_API static class UScriptStruct* StaticStruct(); \
	typedef FCollisionLimitBase Super;


template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<struct FPlanarLimit>();

#define REDStrings_Plugins_Marketplace_KawaiiPhysics_Source_KawaiiPhysics_Public_AnimNode_KawaiiPhysics_h_110_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCapsuleLimit_Statics; \
	KAWAIIPHYSICS_API static class UScriptStruct* StaticStruct(); \
	typedef FCollisionLimitBase Super;


template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<struct FCapsuleLimit>();

#define REDStrings_Plugins_Marketplace_KawaiiPhysics_Source_KawaiiPhysics_Public_AnimNode_KawaiiPhysics_h_89_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSphericalLimit_Statics; \
	KAWAIIPHYSICS_API static class UScriptStruct* StaticStruct(); \
	typedef FCollisionLimitBase Super;


template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<struct FSphericalLimit>();

#define REDStrings_Plugins_Marketplace_KawaiiPhysics_Source_KawaiiPhysics_Public_AnimNode_KawaiiPhysics_h_53_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCollisionLimitBase_Statics; \
	KAWAIIPHYSICS_API static class UScriptStruct* StaticStruct();


template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<struct FCollisionLimitBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID REDStrings_Plugins_Marketplace_KawaiiPhysics_Source_KawaiiPhysics_Public_AnimNode_KawaiiPhysics_h


#define FOREACH_ENUM_ECOLLISIONLIMITTYPE(op) \
	op(ECollisionLimitType::None) \
	op(ECollisionLimitType::Spherical) \
	op(ECollisionLimitType::Capsule) \
	op(ECollisionLimitType::Planar) 

enum class ECollisionLimitType : uint8;
template<> KAWAIIPHYSICS_API UEnum* StaticEnum<ECollisionLimitType>();

#define FOREACH_ENUM_EBONEFORWARDAXIS(op) \
	op(EBoneForwardAxis::X_Positive) \
	op(EBoneForwardAxis::X_Negative) \
	op(EBoneForwardAxis::Y_Positive) \
	op(EBoneForwardAxis::Y_Negative) \
	op(EBoneForwardAxis::Z_Positive) \
	op(EBoneForwardAxis::Z_Negative) 

enum class EBoneForwardAxis : uint8;
template<> KAWAIIPHYSICS_API UEnum* StaticEnum<EBoneForwardAxis>();

#define FOREACH_ENUM_EPLANARCONSTRAINT(op) \
	op(EPlanarConstraint::None) \
	op(EPlanarConstraint::X) \
	op(EPlanarConstraint::Y) \
	op(EPlanarConstraint::Z) 

enum class EPlanarConstraint : uint8;
template<> KAWAIIPHYSICS_API UEnum* StaticEnum<EPlanarConstraint>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
