// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 struct FTransform;
#ifdef SASCABLEANIM_SCAnimInstance_generated_h
#error "SCAnimInstance.generated.h already included, missing '#pragma once' in SCAnimInstance.h"
#endif
#define SASCABLEANIM_SCAnimInstance_generated_h

#define REDStrings_Plugins_SASCableAnim_Source_SASCableAnim_Public_SCAnimInstance_h_12_SPARSE_DATA
#define REDStrings_Plugins_SASCableAnim_Source_SASCableAnim_Public_SCAnimInstance_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execInit); \
	DECLARE_FUNCTION(execSaveToBeforeFrameSocketLocations); \
	DECLARE_FUNCTION(execSetSASCodeSocketWorldLocations); \
	DECLARE_FUNCTION(execUpdate);


#define REDStrings_Plugins_SASCableAnim_Source_SASCableAnim_Public_SCAnimInstance_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInit); \
	DECLARE_FUNCTION(execSaveToBeforeFrameSocketLocations); \
	DECLARE_FUNCTION(execSetSASCodeSocketWorldLocations); \
	DECLARE_FUNCTION(execUpdate);


#define REDStrings_Plugins_SASCableAnim_Source_SASCableAnim_Public_SCAnimInstance_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSCAnimInstance(); \
	friend struct Z_Construct_UClass_USCAnimInstance_Statics; \
public: \
	DECLARE_CLASS(USCAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/SASCableAnim"), NO_API) \
	DECLARE_SERIALIZER(USCAnimInstance)


#define REDStrings_Plugins_SASCableAnim_Source_SASCableAnim_Public_SCAnimInstance_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUSCAnimInstance(); \
	friend struct Z_Construct_UClass_USCAnimInstance_Statics; \
public: \
	DECLARE_CLASS(USCAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/SASCableAnim"), NO_API) \
	DECLARE_SERIALIZER(USCAnimInstance)


#define REDStrings_Plugins_SASCableAnim_Source_SASCableAnim_Public_SCAnimInstance_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USCAnimInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USCAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USCAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USCAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USCAnimInstance(USCAnimInstance&&); \
	NO_API USCAnimInstance(const USCAnimInstance&); \
public:


#define REDStrings_Plugins_SASCableAnim_Source_SASCableAnim_Public_SCAnimInstance_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USCAnimInstance(USCAnimInstance&&); \
	NO_API USCAnimInstance(const USCAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USCAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USCAnimInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USCAnimInstance)


#define REDStrings_Plugins_SASCableAnim_Source_SASCableAnim_Public_SCAnimInstance_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SASCodeSocketWorldLocations_() { return STRUCT_OFFSET(USCAnimInstance, SASCodeSocketWorldLocations_); } \
	FORCEINLINE static uint32 __PPO__boneAnimPartsArray_() { return STRUCT_OFFSET(USCAnimInstance, boneAnimPartsArray_); }


#define REDStrings_Plugins_SASCableAnim_Source_SASCableAnim_Public_SCAnimInstance_h_10_PROLOG
#define REDStrings_Plugins_SASCableAnim_Source_SASCableAnim_Public_SCAnimInstance_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	REDStrings_Plugins_SASCableAnim_Source_SASCableAnim_Public_SCAnimInstance_h_12_PRIVATE_PROPERTY_OFFSET \
	REDStrings_Plugins_SASCableAnim_Source_SASCableAnim_Public_SCAnimInstance_h_12_SPARSE_DATA \
	REDStrings_Plugins_SASCableAnim_Source_SASCableAnim_Public_SCAnimInstance_h_12_RPC_WRAPPERS \
	REDStrings_Plugins_SASCableAnim_Source_SASCableAnim_Public_SCAnimInstance_h_12_INCLASS \
	REDStrings_Plugins_SASCableAnim_Source_SASCableAnim_Public_SCAnimInstance_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define REDStrings_Plugins_SASCableAnim_Source_SASCableAnim_Public_SCAnimInstance_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	REDStrings_Plugins_SASCableAnim_Source_SASCableAnim_Public_SCAnimInstance_h_12_PRIVATE_PROPERTY_OFFSET \
	REDStrings_Plugins_SASCableAnim_Source_SASCableAnim_Public_SCAnimInstance_h_12_SPARSE_DATA \
	REDStrings_Plugins_SASCableAnim_Source_SASCableAnim_Public_SCAnimInstance_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	REDStrings_Plugins_SASCableAnim_Source_SASCableAnim_Public_SCAnimInstance_h_12_INCLASS_NO_PURE_DECLS \
	REDStrings_Plugins_SASCableAnim_Source_SASCableAnim_Public_SCAnimInstance_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SASCABLEANIM_API UClass* StaticClass<class USCAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID REDStrings_Plugins_SASCableAnim_Source_SASCableAnim_Public_SCAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
