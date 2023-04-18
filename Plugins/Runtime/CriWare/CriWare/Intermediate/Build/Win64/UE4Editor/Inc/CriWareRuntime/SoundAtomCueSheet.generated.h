// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAtomCueInfo;
class USoundAtomCue;
class USoundAtomCueSheet;
#ifdef CRIWARERUNTIME_SoundAtomCueSheet_generated_h
#error "SoundAtomCueSheet.generated.h already included, missing '#pragma once' in SoundAtomCueSheet.h"
#endif
#define CRIWARERUNTIME_SoundAtomCueSheet_generated_h

#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_SoundAtomCueSheet_h_147_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAtomCueInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<struct FAtomCueInfo>();

#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_SoundAtomCueSheet_h_121_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<struct FAtomAttenuationDistanceParam>();

#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_SoundAtomCueSheet_h_100_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAtomWaveInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<struct FAtomWaveInfo>();

#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_SoundAtomCueSheet_h_186_SPARSE_DATA
#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_SoundAtomCueSheet_h_186_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBP_GetCueInfoFromId); \
	DECLARE_FUNCTION(execBP_GetCueInfoFromName); \
	DECLARE_FUNCTION(execBP_GetCueInfoFromIndex); \
	DECLARE_FUNCTION(execGetNumCues); \
	DECLARE_FUNCTION(execGetAtomCueByName); \
	DECLARE_FUNCTION(execGetAtomCueById); \
	DECLARE_FUNCTION(execGetAtomCueByIndex); \
	DECLARE_FUNCTION(execIsLoaded); \
	DECLARE_FUNCTION(execApplyDspBusSnapshot); \
	DECLARE_FUNCTION(execDetachDspBusSetting); \
	DECLARE_FUNCTION(execAttachDspBusSetting); \
	DECLARE_FUNCTION(execReleaseAcb); \
	DECLARE_FUNCTION(execLoadAcb); \
	DECLARE_FUNCTION(execLoadAtomCueSheet);


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_SoundAtomCueSheet_h_186_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBP_GetCueInfoFromId); \
	DECLARE_FUNCTION(execBP_GetCueInfoFromName); \
	DECLARE_FUNCTION(execBP_GetCueInfoFromIndex); \
	DECLARE_FUNCTION(execGetNumCues); \
	DECLARE_FUNCTION(execGetAtomCueByName); \
	DECLARE_FUNCTION(execGetAtomCueById); \
	DECLARE_FUNCTION(execGetAtomCueByIndex); \
	DECLARE_FUNCTION(execIsLoaded); \
	DECLARE_FUNCTION(execApplyDspBusSnapshot); \
	DECLARE_FUNCTION(execDetachDspBusSetting); \
	DECLARE_FUNCTION(execAttachDspBusSetting); \
	DECLARE_FUNCTION(execReleaseAcb); \
	DECLARE_FUNCTION(execLoadAcb); \
	DECLARE_FUNCTION(execLoadAtomCueSheet);


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_SoundAtomCueSheet_h_186_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USoundAtomCueSheet, NO_API)


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_SoundAtomCueSheet_h_186_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundAtomCueSheet(); \
	friend struct Z_Construct_UClass_USoundAtomCueSheet_Statics; \
public: \
	DECLARE_CLASS(USoundAtomCueSheet, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(USoundAtomCueSheet) \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_SoundAtomCueSheet_h_186_ARCHIVESERIALIZER


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_SoundAtomCueSheet_h_186_INCLASS \
private: \
	static void StaticRegisterNativesUSoundAtomCueSheet(); \
	friend struct Z_Construct_UClass_USoundAtomCueSheet_Statics; \
public: \
	DECLARE_CLASS(USoundAtomCueSheet, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(USoundAtomCueSheet) \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_SoundAtomCueSheet_h_186_ARCHIVESERIALIZER


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_SoundAtomCueSheet_h_186_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundAtomCueSheet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundAtomCueSheet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundAtomCueSheet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundAtomCueSheet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundAtomCueSheet(USoundAtomCueSheet&&); \
	NO_API USoundAtomCueSheet(const USoundAtomCueSheet&); \
public:


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_SoundAtomCueSheet_h_186_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundAtomCueSheet(USoundAtomCueSheet&&); \
	NO_API USoundAtomCueSheet(const USoundAtomCueSheet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundAtomCueSheet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundAtomCueSheet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundAtomCueSheet)


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_SoundAtomCueSheet_h_186_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CueInfos() { return STRUCT_OFFSET(USoundAtomCueSheet, CueInfos); }


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_SoundAtomCueSheet_h_183_PROLOG
#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_SoundAtomCueSheet_h_186_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_SoundAtomCueSheet_h_186_PRIVATE_PROPERTY_OFFSET \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_SoundAtomCueSheet_h_186_SPARSE_DATA \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_SoundAtomCueSheet_h_186_RPC_WRAPPERS \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_SoundAtomCueSheet_h_186_INCLASS \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_SoundAtomCueSheet_h_186_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_SoundAtomCueSheet_h_186_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_SoundAtomCueSheet_h_186_PRIVATE_PROPERTY_OFFSET \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_SoundAtomCueSheet_h_186_SPARSE_DATA \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_SoundAtomCueSheet_h_186_RPC_WRAPPERS_NO_PURE_DECLS \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_SoundAtomCueSheet_h_186_INCLASS_NO_PURE_DECLS \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_SoundAtomCueSheet_h_186_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARERUNTIME_API UClass* StaticClass<class USoundAtomCueSheet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_SoundAtomCueSheet_h


#define FOREACH_ENUM_EATOMFORMAT(op) \
	op(EAtomFormat::None) \
	op(EAtomFormat::ADX) \
	op(EAtomFormat::HCA) \
	op(EAtomFormat::HCAMX) \
	op(EAtomFormat::AIFF) \
	op(EAtomFormat::Wave) \
	op(EAtomFormat::RawPCM) \
	op(EAtomFormat::Vibration) \
	op(EAtomFormat::AudioBuffer) \
	op(EAtomFormat::Instrument) \
	op(EAtomFormat::Hardware1) \
	op(EAtomFormat::Hardware2) \
	op(EAtomFormat::Num) 

enum class EAtomFormat : uint8;
template<> CRIWARERUNTIME_API UEnum* StaticEnum<EAtomFormat>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
