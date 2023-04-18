// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimInstance;
#ifdef ACTIONSYSTEM_ASTransition_BlueprintBase_generated_h
#error "ASTransition_BlueprintBase.generated.h already included, missing '#pragma once' in ASTransition_BlueprintBase.h"
#endif
#define ACTIONSYSTEM_ASTransition_BlueprintBase_generated_h

#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASTransition_BlueprintBase_h_11_SPARSE_DATA
#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASTransition_BlueprintBase_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCheckCommand); \
	DECLARE_FUNCTION(execCheckCommandState); \
	DECLARE_FUNCTION(execGetAnimTime); \
	DECLARE_FUNCTION(execGetAnimTimeLength); \
	DECLARE_FUNCTION(execGetElapsedTime); \
	DECLARE_FUNCTION(execIsPlayEnd); \
	DECLARE_FUNCTION(execIsPlayEndForce);


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASTransition_BlueprintBase_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCheckCommand); \
	DECLARE_FUNCTION(execCheckCommandState); \
	DECLARE_FUNCTION(execGetAnimTime); \
	DECLARE_FUNCTION(execGetAnimTimeLength); \
	DECLARE_FUNCTION(execGetElapsedTime); \
	DECLARE_FUNCTION(execIsPlayEnd); \
	DECLARE_FUNCTION(execIsPlayEndForce);


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASTransition_BlueprintBase_h_11_EVENT_PARMS \
	struct ASTransition_BlueprintBase_eventReceiveCanEnter_Parms \
	{ \
		UAnimInstance* AnimInstance; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ASTransition_BlueprintBase_eventReceiveCanEnter_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASTransition_BlueprintBase_h_11_CALLBACK_WRAPPERS
#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASTransition_BlueprintBase_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUASTransition_BlueprintBase(); \
	friend struct Z_Construct_UClass_UASTransition_BlueprintBase_Statics; \
public: \
	DECLARE_CLASS(UASTransition_BlueprintBase, UASTransition_Base, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ActionSystem"), NO_API) \
	DECLARE_SERIALIZER(UASTransition_BlueprintBase)


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASTransition_BlueprintBase_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUASTransition_BlueprintBase(); \
	friend struct Z_Construct_UClass_UASTransition_BlueprintBase_Statics; \
public: \
	DECLARE_CLASS(UASTransition_BlueprintBase, UASTransition_Base, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ActionSystem"), NO_API) \
	DECLARE_SERIALIZER(UASTransition_BlueprintBase)


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASTransition_BlueprintBase_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UASTransition_BlueprintBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UASTransition_BlueprintBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UASTransition_BlueprintBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UASTransition_BlueprintBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UASTransition_BlueprintBase(UASTransition_BlueprintBase&&); \
	NO_API UASTransition_BlueprintBase(const UASTransition_BlueprintBase&); \
public:


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASTransition_BlueprintBase_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UASTransition_BlueprintBase(UASTransition_BlueprintBase&&); \
	NO_API UASTransition_BlueprintBase(const UASTransition_BlueprintBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UASTransition_BlueprintBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UASTransition_BlueprintBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UASTransition_BlueprintBase)


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASTransition_BlueprintBase_h_11_PRIVATE_PROPERTY_OFFSET
#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASTransition_BlueprintBase_h_9_PROLOG \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASTransition_BlueprintBase_h_11_EVENT_PARMS


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASTransition_BlueprintBase_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASTransition_BlueprintBase_h_11_PRIVATE_PROPERTY_OFFSET \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASTransition_BlueprintBase_h_11_SPARSE_DATA \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASTransition_BlueprintBase_h_11_RPC_WRAPPERS \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASTransition_BlueprintBase_h_11_CALLBACK_WRAPPERS \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASTransition_BlueprintBase_h_11_INCLASS \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASTransition_BlueprintBase_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASTransition_BlueprintBase_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASTransition_BlueprintBase_h_11_PRIVATE_PROPERTY_OFFSET \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASTransition_BlueprintBase_h_11_SPARSE_DATA \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASTransition_BlueprintBase_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASTransition_BlueprintBase_h_11_CALLBACK_WRAPPERS \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASTransition_BlueprintBase_h_11_INCLASS_NO_PURE_DECLS \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASTransition_BlueprintBase_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONSYSTEM_API UClass* StaticClass<class UASTransition_BlueprintBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASTransition_BlueprintBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
