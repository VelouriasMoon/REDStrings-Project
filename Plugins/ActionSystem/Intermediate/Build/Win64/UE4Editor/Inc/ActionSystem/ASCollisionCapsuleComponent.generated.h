// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef ACTIONSYSTEM_ASCollisionCapsuleComponent_generated_h
#error "ASCollisionCapsuleComponent.generated.h already included, missing '#pragma once' in ASCollisionCapsuleComponent.h"
#endif
#define ACTIONSYSTEM_ASCollisionCapsuleComponent_generated_h

#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCollisionCapsuleComponent_h_12_SPARSE_DATA
#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCollisionCapsuleComponent_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnAttackBeginOverlap); \
	DECLARE_FUNCTION(execOnAttackEndOverlap);


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCollisionCapsuleComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnAttackBeginOverlap); \
	DECLARE_FUNCTION(execOnAttackEndOverlap);


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCollisionCapsuleComponent_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUASCollisionCapsuleComponent(); \
	friend struct Z_Construct_UClass_UASCollisionCapsuleComponent_Statics; \
public: \
	DECLARE_CLASS(UASCollisionCapsuleComponent, UCapsuleComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionSystem"), NO_API) \
	DECLARE_SERIALIZER(UASCollisionCapsuleComponent)


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCollisionCapsuleComponent_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUASCollisionCapsuleComponent(); \
	friend struct Z_Construct_UClass_UASCollisionCapsuleComponent_Statics; \
public: \
	DECLARE_CLASS(UASCollisionCapsuleComponent, UCapsuleComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionSystem"), NO_API) \
	DECLARE_SERIALIZER(UASCollisionCapsuleComponent)


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCollisionCapsuleComponent_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UASCollisionCapsuleComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UASCollisionCapsuleComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UASCollisionCapsuleComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UASCollisionCapsuleComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UASCollisionCapsuleComponent(UASCollisionCapsuleComponent&&); \
	NO_API UASCollisionCapsuleComponent(const UASCollisionCapsuleComponent&); \
public:


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCollisionCapsuleComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UASCollisionCapsuleComponent(UASCollisionCapsuleComponent&&); \
	NO_API UASCollisionCapsuleComponent(const UASCollisionCapsuleComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UASCollisionCapsuleComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UASCollisionCapsuleComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UASCollisionCapsuleComponent)


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCollisionCapsuleComponent_h_12_PRIVATE_PROPERTY_OFFSET
#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCollisionCapsuleComponent_h_10_PROLOG
#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCollisionCapsuleComponent_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCollisionCapsuleComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCollisionCapsuleComponent_h_12_SPARSE_DATA \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCollisionCapsuleComponent_h_12_RPC_WRAPPERS \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCollisionCapsuleComponent_h_12_INCLASS \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCollisionCapsuleComponent_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCollisionCapsuleComponent_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCollisionCapsuleComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCollisionCapsuleComponent_h_12_SPARSE_DATA \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCollisionCapsuleComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCollisionCapsuleComponent_h_12_INCLASS_NO_PURE_DECLS \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCollisionCapsuleComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONSYSTEM_API UClass* StaticClass<class UASCollisionCapsuleComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCollisionCapsuleComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
