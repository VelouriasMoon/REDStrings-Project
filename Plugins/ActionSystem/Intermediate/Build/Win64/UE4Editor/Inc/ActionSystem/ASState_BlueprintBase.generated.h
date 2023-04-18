// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class UAnimInstance;
#ifdef ACTIONSYSTEM_ASState_BlueprintBase_generated_h
#error "ASState_BlueprintBase.generated.h already included, missing '#pragma once' in ASState_BlueprintBase.h"
#endif
#define ACTIONSYSTEM_ASState_BlueprintBase_generated_h

#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASState_BlueprintBase_h_11_SPARSE_DATA
#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASState_BlueprintBase_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAnimTime); \
	DECLARE_FUNCTION(execGetAnimTimeLength); \
	DECLARE_FUNCTION(execSetBlendSpaceInput); \
	DECLARE_FUNCTION(execSetPlayRate);


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASState_BlueprintBase_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAnimTime); \
	DECLARE_FUNCTION(execGetAnimTimeLength); \
	DECLARE_FUNCTION(execSetBlendSpaceInput); \
	DECLARE_FUNCTION(execSetPlayRate);


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASState_BlueprintBase_h_11_EVENT_PARMS \
	struct ASState_BlueprintBase_eventReceiveBeginPlay_Parms \
	{ \
		UAnimInstance* AnimInstance; \
	}; \
	struct ASState_BlueprintBase_eventReceiveTick_Parms \
	{ \
		float DeltaTime; \
		UAnimInstance* AnimInstance; \
	};


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASState_BlueprintBase_h_11_CALLBACK_WRAPPERS
#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASState_BlueprintBase_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUASState_BlueprintBase(); \
	friend struct Z_Construct_UClass_UASState_BlueprintBase_Statics; \
public: \
	DECLARE_CLASS(UASState_BlueprintBase, UASState_Base, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ActionSystem"), NO_API) \
	DECLARE_SERIALIZER(UASState_BlueprintBase)


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASState_BlueprintBase_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUASState_BlueprintBase(); \
	friend struct Z_Construct_UClass_UASState_BlueprintBase_Statics; \
public: \
	DECLARE_CLASS(UASState_BlueprintBase, UASState_Base, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ActionSystem"), NO_API) \
	DECLARE_SERIALIZER(UASState_BlueprintBase)


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASState_BlueprintBase_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UASState_BlueprintBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UASState_BlueprintBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UASState_BlueprintBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UASState_BlueprintBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UASState_BlueprintBase(UASState_BlueprintBase&&); \
	NO_API UASState_BlueprintBase(const UASState_BlueprintBase&); \
public:


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASState_BlueprintBase_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UASState_BlueprintBase(UASState_BlueprintBase&&); \
	NO_API UASState_BlueprintBase(const UASState_BlueprintBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UASState_BlueprintBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UASState_BlueprintBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UASState_BlueprintBase)


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASState_BlueprintBase_h_11_PRIVATE_PROPERTY_OFFSET
#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASState_BlueprintBase_h_9_PROLOG \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASState_BlueprintBase_h_11_EVENT_PARMS


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASState_BlueprintBase_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASState_BlueprintBase_h_11_PRIVATE_PROPERTY_OFFSET \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASState_BlueprintBase_h_11_SPARSE_DATA \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASState_BlueprintBase_h_11_RPC_WRAPPERS \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASState_BlueprintBase_h_11_CALLBACK_WRAPPERS \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASState_BlueprintBase_h_11_INCLASS \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASState_BlueprintBase_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASState_BlueprintBase_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASState_BlueprintBase_h_11_PRIVATE_PROPERTY_OFFSET \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASState_BlueprintBase_h_11_SPARSE_DATA \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASState_BlueprintBase_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASState_BlueprintBase_h_11_CALLBACK_WRAPPERS \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASState_BlueprintBase_h_11_INCLASS_NO_PURE_DECLS \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASState_BlueprintBase_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONSYSTEM_API UClass* StaticClass<class UASState_BlueprintBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASState_BlueprintBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
