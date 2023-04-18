// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACTIONSYSTEM_ASWeapon_generated_h
#error "ASWeapon.generated.h already included, missing '#pragma once' in ASWeapon.h"
#endif
#define ACTIONSYSTEM_ASWeapon_generated_h

#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASWeapon_h_13_SPARSE_DATA
#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASWeapon_h_13_RPC_WRAPPERS
#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASWeapon_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASWeapon_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAASWeapon(); \
	friend struct Z_Construct_UClass_AASWeapon_Statics; \
public: \
	DECLARE_CLASS(AASWeapon, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionSystem"), NO_API) \
	DECLARE_SERIALIZER(AASWeapon) \
	virtual UObject* _getUObject() const override { return const_cast<AASWeapon*>(this); }


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASWeapon_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAASWeapon(); \
	friend struct Z_Construct_UClass_AASWeapon_Statics; \
public: \
	DECLARE_CLASS(AASWeapon, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionSystem"), NO_API) \
	DECLARE_SERIALIZER(AASWeapon) \
	virtual UObject* _getUObject() const override { return const_cast<AASWeapon*>(this); }


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASWeapon_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AASWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AASWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AASWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AASWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AASWeapon(AASWeapon&&); \
	NO_API AASWeapon(const AASWeapon&); \
public:


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASWeapon_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AASWeapon(AASWeapon&&); \
	NO_API AASWeapon(const AASWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AASWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AASWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AASWeapon)


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASWeapon_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh() { return STRUCT_OFFSET(AASWeapon, Mesh); } \
	FORCEINLINE static uint32 __PPO__Collision() { return STRUCT_OFFSET(AASWeapon, Collision); } \
	FORCEINLINE static uint32 __PPO__Character() { return STRUCT_OFFSET(AASWeapon, Character); }


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASWeapon_h_11_PROLOG
#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASWeapon_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASWeapon_h_13_PRIVATE_PROPERTY_OFFSET \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASWeapon_h_13_SPARSE_DATA \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASWeapon_h_13_RPC_WRAPPERS \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASWeapon_h_13_INCLASS \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASWeapon_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASWeapon_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASWeapon_h_13_PRIVATE_PROPERTY_OFFSET \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASWeapon_h_13_SPARSE_DATA \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASWeapon_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASWeapon_h_13_INCLASS_NO_PURE_DECLS \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASWeapon_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONSYSTEM_API UClass* StaticClass<class AASWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASWeapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
