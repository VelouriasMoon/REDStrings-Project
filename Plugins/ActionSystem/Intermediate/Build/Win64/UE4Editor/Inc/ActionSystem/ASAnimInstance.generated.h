// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UASAnimNotify_StateChange;
class UASStateMachine;
#ifdef ACTIONSYSTEM_ASAnimInstance_generated_h
#error "ASAnimInstance.generated.h already included, missing '#pragma once' in ASAnimInstance.h"
#endif
#define ACTIONSYSTEM_ASAnimInstance_generated_h

#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASAnimInstance_h_13_SPARSE_DATA
#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASAnimInstance_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAnimNotify_StateChange); \
	DECLARE_FUNCTION(execHasTag); \
	DECLARE_FUNCTION(execIsHitShift); \
	DECLARE_FUNCTION(execJumpDamageState); \
	DECLARE_FUNCTION(execJumpMachineState); \
	DECLARE_FUNCTION(execSendCommand); \
	DECLARE_FUNCTION(execSetDynamicSubMachine);


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASAnimInstance_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAnimNotify_StateChange); \
	DECLARE_FUNCTION(execHasTag); \
	DECLARE_FUNCTION(execIsHitShift); \
	DECLARE_FUNCTION(execJumpDamageState); \
	DECLARE_FUNCTION(execJumpMachineState); \
	DECLARE_FUNCTION(execSendCommand); \
	DECLARE_FUNCTION(execSetDynamicSubMachine);


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASAnimInstance_h_13_EVENT_PARMS \
	struct ASAnimInstance_eventReceiveStateChange_Parms \
	{ \
		FString PreviousStateName; \
		FString NextStateName; \
	};


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASAnimInstance_h_13_CALLBACK_WRAPPERS
#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASAnimInstance_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUASAnimInstance(); \
	friend struct Z_Construct_UClass_UASAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UASAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ActionSystem"), NO_API) \
	DECLARE_SERIALIZER(UASAnimInstance)


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASAnimInstance_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUASAnimInstance(); \
	friend struct Z_Construct_UClass_UASAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UASAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ActionSystem"), NO_API) \
	DECLARE_SERIALIZER(UASAnimInstance)


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASAnimInstance_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UASAnimInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UASAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UASAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UASAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UASAnimInstance(UASAnimInstance&&); \
	NO_API UASAnimInstance(const UASAnimInstance&); \
public:


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASAnimInstance_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UASAnimInstance(UASAnimInstance&&); \
	NO_API UASAnimInstance(const UASAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UASAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UASAnimInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UASAnimInstance)


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASAnimInstance_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DamageStateMachine() { return STRUCT_OFFSET(UASAnimInstance, DamageStateMachine); } \
	FORCEINLINE static uint32 __PPO__DamageState() { return STRUCT_OFFSET(UASAnimInstance, DamageState); } \
	FORCEINLINE static uint32 __PPO__DamageCommand() { return STRUCT_OFFSET(UASAnimInstance, DamageCommand); }


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASAnimInstance_h_11_PROLOG \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASAnimInstance_h_13_EVENT_PARMS


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASAnimInstance_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASAnimInstance_h_13_PRIVATE_PROPERTY_OFFSET \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASAnimInstance_h_13_SPARSE_DATA \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASAnimInstance_h_13_RPC_WRAPPERS \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASAnimInstance_h_13_CALLBACK_WRAPPERS \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASAnimInstance_h_13_INCLASS \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASAnimInstance_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASAnimInstance_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASAnimInstance_h_13_PRIVATE_PROPERTY_OFFSET \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASAnimInstance_h_13_SPARSE_DATA \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASAnimInstance_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASAnimInstance_h_13_CALLBACK_WRAPPERS \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASAnimInstance_h_13_INCLASS_NO_PURE_DECLS \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASAnimInstance_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONSYSTEM_API UClass* StaticClass<class UASAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
