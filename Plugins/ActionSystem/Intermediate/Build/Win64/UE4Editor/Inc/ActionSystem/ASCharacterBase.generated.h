// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACTIONSYSTEM_ASCharacterBase_generated_h
#error "ASCharacterBase.generated.h already included, missing '#pragma once' in ASCharacterBase.h"
#endif
#define ACTIONSYSTEM_ASCharacterBase_generated_h

#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCharacterBase_h_8_SPARSE_DATA
#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCharacterBase_h_8_RPC_WRAPPERS \
	virtual bool ServerStateChange_Validate(int32 , int32 , int32 ); \
	virtual void ServerStateChange_Implementation(int32 MachineIndex, int32 PreviousState, int32 NextState); \
 \
	DECLARE_FUNCTION(execGetAnimTags); \
	DECLARE_FUNCTION(execHasAnimTag); \
	DECLARE_FUNCTION(execJumpMachineState); \
	DECLARE_FUNCTION(execOnRep_ReplicateState); \
	DECLARE_FUNCTION(execSendAnimCommand); \
	DECLARE_FUNCTION(execServerStateChange);


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCharacterBase_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerStateChange_Validate(int32 , int32 , int32 ); \
	virtual void ServerStateChange_Implementation(int32 MachineIndex, int32 PreviousState, int32 NextState); \
 \
	DECLARE_FUNCTION(execGetAnimTags); \
	DECLARE_FUNCTION(execHasAnimTag); \
	DECLARE_FUNCTION(execJumpMachineState); \
	DECLARE_FUNCTION(execOnRep_ReplicateState); \
	DECLARE_FUNCTION(execSendAnimCommand); \
	DECLARE_FUNCTION(execServerStateChange);


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCharacterBase_h_8_EVENT_PARMS \
	struct ASCharacterBase_eventReceiveStateChange_Parms \
	{ \
		FString PreviousStateName; \
		FString NextStateName; \
	}; \
	struct ASCharacterBase_eventServerStateChange_Parms \
	{ \
		int32 MachineIndex; \
		int32 PreviousState; \
		int32 NextState; \
	};


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCharacterBase_h_8_CALLBACK_WRAPPERS
#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCharacterBase_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAASCharacterBase(); \
	friend struct Z_Construct_UClass_AASCharacterBase_Statics; \
public: \
	DECLARE_CLASS(AASCharacterBase, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionSystem"), NO_API) \
	DECLARE_SERIALIZER(AASCharacterBase) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicateState=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicateState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCharacterBase_h_8_INCLASS \
private: \
	static void StaticRegisterNativesAASCharacterBase(); \
	friend struct Z_Construct_UClass_AASCharacterBase_Statics; \
public: \
	DECLARE_CLASS(AASCharacterBase, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionSystem"), NO_API) \
	DECLARE_SERIALIZER(AASCharacterBase) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicateState=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicateState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCharacterBase_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AASCharacterBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AASCharacterBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AASCharacterBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AASCharacterBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AASCharacterBase(AASCharacterBase&&); \
	NO_API AASCharacterBase(const AASCharacterBase&); \
public:


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCharacterBase_h_8_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AASCharacterBase(AASCharacterBase&&); \
	NO_API AASCharacterBase(const AASCharacterBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AASCharacterBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AASCharacterBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AASCharacterBase)


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCharacterBase_h_8_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ReplicateState() { return STRUCT_OFFSET(AASCharacterBase, ReplicateState); }


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCharacterBase_h_6_PROLOG \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCharacterBase_h_8_EVENT_PARMS


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCharacterBase_h_8_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCharacterBase_h_8_PRIVATE_PROPERTY_OFFSET \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCharacterBase_h_8_SPARSE_DATA \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCharacterBase_h_8_RPC_WRAPPERS \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCharacterBase_h_8_CALLBACK_WRAPPERS \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCharacterBase_h_8_INCLASS \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCharacterBase_h_8_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCharacterBase_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCharacterBase_h_8_PRIVATE_PROPERTY_OFFSET \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCharacterBase_h_8_SPARSE_DATA \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCharacterBase_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCharacterBase_h_8_CALLBACK_WRAPPERS \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCharacterBase_h_8_INCLASS_NO_PURE_DECLS \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCharacterBase_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONSYSTEM_API UClass* StaticClass<class AASCharacterBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCharacterBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
