// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USoundAtomCue;
struct FTimespan;
enum class EAtomWavePlayState : uint8;
struct FAtomWaveInfo;
#ifdef CRIWARERUNTIME_AtomWavePlayer_generated_h
#error "AtomWavePlayer.generated.h already included, missing '#pragma once' in AtomWavePlayer.h"
#endif
#define CRIWARERUNTIME_AtomWavePlayer_generated_h

#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomWavePlayer_h_62_DELEGATE \
static inline void FOnAtomWavePlayerStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnAtomWavePlayerStateChanged) \
{ \
	OnAtomWavePlayerStateChanged.ProcessMulticastDelegate<UObject>(NULL); \
}


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomWavePlayer_h_56_DELEGATE \
struct _Script_CriWareRuntime_eventOnWavePlaybackPercent_Parms \
{ \
	const USoundAtomCue* PlayingAtomCue; \
	int32 WaveId; \
	float PlaybackPercent; \
}; \
static inline void FOnWavePlaybackPercent_DelegateWrapper(const FMulticastScriptDelegate& OnWavePlaybackPercent, const USoundAtomCue* PlayingAtomCue, int32 WaveId, const float PlaybackPercent) \
{ \
	_Script_CriWareRuntime_eventOnWavePlaybackPercent_Parms Parms; \
	Parms.PlayingAtomCue=PlayingAtomCue; \
	Parms.WaveId=WaveId; \
	Parms.PlaybackPercent=PlaybackPercent; \
	OnWavePlaybackPercent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomWavePlayer_h_48_DELEGATE \
static inline void FOnWaveFinished_DelegateWrapper(const FMulticastScriptDelegate& OnWaveFinished) \
{ \
	OnWaveFinished.ProcessMulticastDelegate<UObject>(NULL); \
}


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomWavePlayer_h_74_SPARSE_DATA
#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomWavePlayer_h_74_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetTime); \
	DECLARE_FUNCTION(execGetPlayState); \
	DECLARE_FUNCTION(execSetLooping); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execIsPaused); \
	DECLARE_FUNCTION(execIsLooping); \
	DECLARE_FUNCTION(execHasError); \
	DECLARE_FUNCTION(execAdjustVolume); \
	DECLARE_FUNCTION(execSetPaused); \
	DECLARE_FUNCTION(execStopDelayed); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execGetWaveInfo); \
	DECLARE_FUNCTION(execGetCue); \
	DECLARE_FUNCTION(execSetWave);


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomWavePlayer_h_74_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetTime); \
	DECLARE_FUNCTION(execGetPlayState); \
	DECLARE_FUNCTION(execSetLooping); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execIsPaused); \
	DECLARE_FUNCTION(execIsLooping); \
	DECLARE_FUNCTION(execHasError); \
	DECLARE_FUNCTION(execAdjustVolume); \
	DECLARE_FUNCTION(execSetPaused); \
	DECLARE_FUNCTION(execStopDelayed); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execGetWaveInfo); \
	DECLARE_FUNCTION(execGetCue); \
	DECLARE_FUNCTION(execSetWave);


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomWavePlayer_h_74_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAtomWavePlayer, NO_API)


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomWavePlayer_h_74_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAtomWavePlayer(); \
	friend struct Z_Construct_UClass_UAtomWavePlayer_Statics; \
public: \
	DECLARE_CLASS(UAtomWavePlayer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(UAtomWavePlayer) \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomWavePlayer_h_74_ARCHIVESERIALIZER


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomWavePlayer_h_74_INCLASS \
private: \
	static void StaticRegisterNativesUAtomWavePlayer(); \
	friend struct Z_Construct_UClass_UAtomWavePlayer_Statics; \
public: \
	DECLARE_CLASS(UAtomWavePlayer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(UAtomWavePlayer) \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomWavePlayer_h_74_ARCHIVESERIALIZER


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomWavePlayer_h_74_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAtomWavePlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomWavePlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomWavePlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomWavePlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomWavePlayer(UAtomWavePlayer&&); \
	NO_API UAtomWavePlayer(const UAtomWavePlayer&); \
public:


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomWavePlayer_h_74_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomWavePlayer(UAtomWavePlayer&&); \
	NO_API UAtomWavePlayer(const UAtomWavePlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomWavePlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomWavePlayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomWavePlayer)


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomWavePlayer_h_74_PRIVATE_PROPERTY_OFFSET
#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomWavePlayer_h_70_PROLOG
#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomWavePlayer_h_74_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomWavePlayer_h_74_PRIVATE_PROPERTY_OFFSET \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomWavePlayer_h_74_SPARSE_DATA \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomWavePlayer_h_74_RPC_WRAPPERS \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomWavePlayer_h_74_INCLASS \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomWavePlayer_h_74_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomWavePlayer_h_74_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomWavePlayer_h_74_PRIVATE_PROPERTY_OFFSET \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomWavePlayer_h_74_SPARSE_DATA \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomWavePlayer_h_74_RPC_WRAPPERS_NO_PURE_DECLS \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomWavePlayer_h_74_INCLASS_NO_PURE_DECLS \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomWavePlayer_h_74_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARERUNTIME_API UClass* StaticClass<class UAtomWavePlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomWavePlayer_h


#define FOREACH_ENUM_EATOMWAVEPLAYSTATE(op) \
	op(EAtomWavePlayState::Playing) \
	op(EAtomWavePlayState::Stopped) \
	op(EAtomWavePlayState::Paused) \
	op(EAtomWavePlayState::FadingIn) \
	op(EAtomWavePlayState::FadingOut) \
	op(EAtomWavePlayState::Count) 

enum class EAtomWavePlayState : uint8;
template<> CRIWARERUNTIME_API UEnum* StaticEnum<EAtomWavePlayState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
