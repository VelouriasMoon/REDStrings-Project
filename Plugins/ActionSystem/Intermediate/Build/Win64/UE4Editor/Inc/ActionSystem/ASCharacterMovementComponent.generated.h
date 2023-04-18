// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef ACTIONSYSTEM_ASCharacterMovementComponent_generated_h
#error "ASCharacterMovementComponent.generated.h already included, missing '#pragma once' in ASCharacterMovementComponent.h"
#endif
#define ACTIONSYSTEM_ASCharacterMovementComponent_generated_h

#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCharacterMovementComponent_h_9_SPARSE_DATA
#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCharacterMovementComponent_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClearCurveMove); \
	DECLARE_FUNCTION(execGetLastNavMoveVelocity); \
	DECLARE_FUNCTION(execHasAnimTag); \
	DECLARE_FUNCTION(execSendAnimCommand); \
	DECLARE_FUNCTION(execSetDirectMove); \
	DECLARE_FUNCTION(execSetImpulse);


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCharacterMovementComponent_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClearCurveMove); \
	DECLARE_FUNCTION(execGetLastNavMoveVelocity); \
	DECLARE_FUNCTION(execHasAnimTag); \
	DECLARE_FUNCTION(execSendAnimCommand); \
	DECLARE_FUNCTION(execSetDirectMove); \
	DECLARE_FUNCTION(execSetImpulse);


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCharacterMovementComponent_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUASCharacterMovementComponent(); \
	friend struct Z_Construct_UClass_UASCharacterMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UASCharacterMovementComponent, UCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionSystem"), NO_API) \
	DECLARE_SERIALIZER(UASCharacterMovementComponent)


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCharacterMovementComponent_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUASCharacterMovementComponent(); \
	friend struct Z_Construct_UClass_UASCharacterMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UASCharacterMovementComponent, UCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionSystem"), NO_API) \
	DECLARE_SERIALIZER(UASCharacterMovementComponent)


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCharacterMovementComponent_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UASCharacterMovementComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UASCharacterMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UASCharacterMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UASCharacterMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UASCharacterMovementComponent(UASCharacterMovementComponent&&); \
	NO_API UASCharacterMovementComponent(const UASCharacterMovementComponent&); \
public:


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCharacterMovementComponent_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UASCharacterMovementComponent(UASCharacterMovementComponent&&); \
	NO_API UASCharacterMovementComponent(const UASCharacterMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UASCharacterMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UASCharacterMovementComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UASCharacterMovementComponent)


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCharacterMovementComponent_h_9_PRIVATE_PROPERTY_OFFSET
#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCharacterMovementComponent_h_7_PROLOG
#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCharacterMovementComponent_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCharacterMovementComponent_h_9_PRIVATE_PROPERTY_OFFSET \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCharacterMovementComponent_h_9_SPARSE_DATA \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCharacterMovementComponent_h_9_RPC_WRAPPERS \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCharacterMovementComponent_h_9_INCLASS \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCharacterMovementComponent_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCharacterMovementComponent_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCharacterMovementComponent_h_9_PRIVATE_PROPERTY_OFFSET \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCharacterMovementComponent_h_9_SPARSE_DATA \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCharacterMovementComponent_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCharacterMovementComponent_h_9_INCLASS_NO_PURE_DECLS \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCharacterMovementComponent_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONSYSTEM_API UClass* StaticClass<class UASCharacterMovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCharacterMovementComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
