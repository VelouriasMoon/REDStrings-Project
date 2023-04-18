// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAtomCueInfo;
#ifdef CRIWARERUNTIME_SoundAtomCue_generated_h
#error "SoundAtomCue.generated.h already included, missing '#pragma once' in SoundAtomCue.h"
#endif
#define CRIWARERUNTIME_SoundAtomCue_generated_h

#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_SoundAtomCue_h_37_SPARSE_DATA
#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_SoundAtomCue_h_37_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsEconomicTickEnabled); \
	DECLARE_FUNCTION(execGetCullingBoundaryDistanceToUse); \
	DECLARE_FUNCTION(execGetCullingMarginDistanceToUse); \
	DECLARE_FUNCTION(execGetMaxAttenuationDistanceToUse); \
	DECLARE_FUNCTION(execGetEconomicTickFrequencyToUse); \
	DECLARE_FUNCTION(execGetEconomicTickBoundaryDistanceToUse); \
	DECLARE_FUNCTION(execGetEconomicTickMarginDistanceToUse); \
	DECLARE_FUNCTION(execValidate); \
	DECLARE_FUNCTION(execBP_GetCueInfo); \
	DECLARE_FUNCTION(execIsLooping); \
	DECLARE_FUNCTION(execGetCullDistance); \
	DECLARE_FUNCTION(execGetCullDistanceMarginToApply); \
	DECLARE_FUNCTION(execGetMaxAttenuationDistanceToApply); \
	DECLARE_FUNCTION(execGetEconomicTickFrequencyToApply); \
	DECLARE_FUNCTION(execGetEconomicTickDistance); \
	DECLARE_FUNCTION(execGetEconomicTickDistanceMarginToApply);


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_SoundAtomCue_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsEconomicTickEnabled); \
	DECLARE_FUNCTION(execGetCullingBoundaryDistanceToUse); \
	DECLARE_FUNCTION(execGetCullingMarginDistanceToUse); \
	DECLARE_FUNCTION(execGetMaxAttenuationDistanceToUse); \
	DECLARE_FUNCTION(execGetEconomicTickFrequencyToUse); \
	DECLARE_FUNCTION(execGetEconomicTickBoundaryDistanceToUse); \
	DECLARE_FUNCTION(execGetEconomicTickMarginDistanceToUse); \
	DECLARE_FUNCTION(execValidate); \
	DECLARE_FUNCTION(execBP_GetCueInfo); \
	DECLARE_FUNCTION(execIsLooping); \
	DECLARE_FUNCTION(execGetCullDistance); \
	DECLARE_FUNCTION(execGetCullDistanceMarginToApply); \
	DECLARE_FUNCTION(execGetMaxAttenuationDistanceToApply); \
	DECLARE_FUNCTION(execGetEconomicTickFrequencyToApply); \
	DECLARE_FUNCTION(execGetEconomicTickDistance); \
	DECLARE_FUNCTION(execGetEconomicTickDistanceMarginToApply);


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_SoundAtomCue_h_37_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USoundAtomCue, NO_API)


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_SoundAtomCue_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundAtomCue(); \
	friend struct Z_Construct_UClass_USoundAtomCue_Statics; \
public: \
	DECLARE_CLASS(USoundAtomCue, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(USoundAtomCue) \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_SoundAtomCue_h_37_ARCHIVESERIALIZER


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_SoundAtomCue_h_37_INCLASS \
private: \
	static void StaticRegisterNativesUSoundAtomCue(); \
	friend struct Z_Construct_UClass_USoundAtomCue_Statics; \
public: \
	DECLARE_CLASS(USoundAtomCue, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(USoundAtomCue) \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_SoundAtomCue_h_37_ARCHIVESERIALIZER


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_SoundAtomCue_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundAtomCue(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundAtomCue) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundAtomCue); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundAtomCue); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundAtomCue(USoundAtomCue&&); \
	NO_API USoundAtomCue(const USoundAtomCue&); \
public:


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_SoundAtomCue_h_37_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundAtomCue(USoundAtomCue&&); \
	NO_API USoundAtomCue(const USoundAtomCue&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundAtomCue); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundAtomCue); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundAtomCue)


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_SoundAtomCue_h_37_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bEconomicTick() { return STRUCT_OFFSET(USoundAtomCue, bEconomicTick); } \
	FORCEINLINE static uint32 __PPO__bEnableDistanceCulling() { return STRUCT_OFFSET(USoundAtomCue, bEnableDistanceCulling); }


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_SoundAtomCue_h_34_PROLOG
#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_SoundAtomCue_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_SoundAtomCue_h_37_PRIVATE_PROPERTY_OFFSET \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_SoundAtomCue_h_37_SPARSE_DATA \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_SoundAtomCue_h_37_RPC_WRAPPERS \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_SoundAtomCue_h_37_INCLASS \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_SoundAtomCue_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_SoundAtomCue_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_SoundAtomCue_h_37_PRIVATE_PROPERTY_OFFSET \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_SoundAtomCue_h_37_SPARSE_DATA \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_SoundAtomCue_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_SoundAtomCue_h_37_INCLASS_NO_PURE_DECLS \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_SoundAtomCue_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARERUNTIME_API UClass* StaticClass<class USoundAtomCue>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_SoundAtomCue_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
