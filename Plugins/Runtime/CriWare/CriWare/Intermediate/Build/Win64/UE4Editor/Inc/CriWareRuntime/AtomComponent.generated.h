// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAtomComponent;
struct FAtomSequenceInfo;
struct FAtomBeatSyncInfo;
enum class EAtomAudioVolumeType : uint8;
class AAtomAudioVolume;
enum class EAtomComponentStatus : uint8;
struct FSoundAttenuationSettings;
 
class AAtomAreaSoundVolume;
struct FVector;
class UAtom3dRegion;
class UAtomSoundObject;
class USoundAtomCue;
#ifdef CRIWARERUNTIME_AtomComponent_generated_h
#error "AtomComponent.generated.h already included, missing '#pragma once' in AtomComponent.h"
#endif
#define CRIWARERUNTIME_AtomComponent_generated_h

#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomComponent_h_162_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAtomSelectorParam_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<struct FAtomSelectorParam>();

#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomComponent_h_144_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAtomAisacControlParam_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<struct FAtomAisacControlParam>();

#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomComponent_h_62_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAcfDataTable_Statics; \
	CRIWARERUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FAtomConfigDataTable Super;


template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<struct FAcfDataTable>();

#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomComponent_h_197_DELEGATE \
struct AtomComponent_eventAtomSequenceCallbackDelegate_Parms \
{ \
	UAtomComponent* AtomComponent; \
	FAtomSequenceInfo SequenceInfo; \
}; \
static inline void FAtomSequenceCallbackDelegate_DelegateWrapper(const FMulticastScriptDelegate& AtomSequenceCallbackDelegate, UAtomComponent* AtomComponent, FAtomSequenceInfo const& SequenceInfo) \
{ \
	AtomComponent_eventAtomSequenceCallbackDelegate_Parms Parms; \
	Parms.AtomComponent=AtomComponent; \
	Parms.SequenceInfo=SequenceInfo; \
	AtomSequenceCallbackDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomComponent_h_195_DELEGATE \
struct AtomComponent_eventAtomBeatSyncCallbackDelegate_Parms \
{ \
	UAtomComponent* AtomComponent; \
	FAtomBeatSyncInfo BeatSyncInfo; \
}; \
static inline void FAtomBeatSyncCallbackDelegate_DelegateWrapper(const FMulticastScriptDelegate& AtomBeatSyncCallbackDelegate, UAtomComponent* AtomComponent, FAtomBeatSyncInfo const& BeatSyncInfo) \
{ \
	AtomComponent_eventAtomBeatSyncCallbackDelegate_Parms Parms; \
	Parms.AtomComponent=AtomComponent; \
	Parms.BeatSyncInfo=BeatSyncInfo; \
	AtomBeatSyncCallbackDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomComponent_h_190_DELEGATE \
struct AtomComponent_eventOnAudioVolumeChanged_Parms \
{ \
	EAtomAudioVolumeType Type; \
	AAtomAudioVolume* AtomAudioVolume; \
	bool bIsCalledFromTick; \
}; \
static inline void FOnAudioVolumeChanged_DelegateWrapper(const FMulticastScriptDelegate& OnAudioVolumeChanged, EAtomAudioVolumeType Type, AAtomAudioVolume* AtomAudioVolume, bool bIsCalledFromTick) \
{ \
	AtomComponent_eventOnAudioVolumeChanged_Parms Parms; \
	Parms.Type=Type; \
	Parms.AtomAudioVolume=AtomAudioVolume; \
	Parms.bIsCalledFromTick=bIsCalledFromTick ? true : false; \
	OnAudioVolumeChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomComponent_h_188_DELEGATE \
static inline void FOnAudioFinished_DelegateWrapper(const FMulticastScriptDelegate& OnAudioFinished) \
{ \
	OnAudioFinished.ProcessMulticastDelegate<UObject>(NULL); \
}


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomComponent_h_186_DELEGATE \
struct AtomComponent_eventOnStatusChanged_Parms \
{ \
	EAtomComponentStatus Status; \
	UAtomComponent* AtomComponent; \
}; \
static inline void FOnStatusChanged_DelegateWrapper(const FMulticastScriptDelegate& OnStatusChanged, EAtomComponentStatus Status, UAtomComponent* AtomComponent) \
{ \
	AtomComponent_eventOnStatusChanged_Parms Parms; \
	Parms.Status=Status; \
	Parms.AtomComponent=AtomComponent; \
	OnStatusChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomComponent_h_184_SPARSE_DATA
#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomComponent_h_184_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurrentCullingBoundaryDistance); \
	DECLARE_FUNCTION(execGetCurrentCullingMarginDistance); \
	DECLARE_FUNCTION(execGetCurrentMaxAttenuationDistance); \
	DECLARE_FUNCTION(execGetCurrentEconomicTickFrequency); \
	DECLARE_FUNCTION(execGetCurrentEconomicTickBoundaryDistance); \
	DECLARE_FUNCTION(execGetCurrentEconomicTickMarginDistance); \
	DECLARE_FUNCTION(execHasBeenEconomicTick); \
	DECLARE_FUNCTION(execGetDefaultAttenuationEnable); \
	DECLARE_FUNCTION(execSetDefaultAttenuationEnable); \
	DECLARE_FUNCTION(execBP_GetAttenuationSettingsToApply); \
	DECLARE_FUNCTION(execAdjustAttenuation); \
	DECLARE_FUNCTION(execIsLoop); \
	DECLARE_FUNCTION(execGetCurrentBelongingAudioVolume); \
	DECLARE_FUNCTION(execGetAudioVolumeValueMap); \
	DECLARE_FUNCTION(execGetCullDistance); \
	DECLARE_FUNCTION(execGetCullDistanceMargin); \
	DECLARE_FUNCTION(execGetMaxAttenuationDistance); \
	DECLARE_FUNCTION(execGetEconomicTickFrequency); \
	DECLARE_FUNCTION(execGetEconomicTickDistance); \
	DECLARE_FUNCTION(execGetEconomicTickDistanceMargin); \
	DECLARE_FUNCTION(execIsReducingTickFrequency); \
	DECLARE_FUNCTION(execDestroyComponentByID); \
	DECLARE_FUNCTION(execGetAtomComponentFromID); \
	DECLARE_FUNCTION(execAttachAreaSoundVolume); \
	DECLARE_FUNCTION(execGetCueName); \
	DECLARE_FUNCTION(execGetAtomComponentID); \
	DECLARE_FUNCTION(execGetSequencePosition); \
	DECLARE_FUNCTION(execGetVelocity); \
	DECLARE_FUNCTION(execGetTime); \
	DECLARE_FUNCTION(execSetAsrRackIdArray); \
	DECLARE_FUNCTION(execSetAsrRackID); \
	DECLARE_FUNCTION(execClearSelectorLabels); \
	DECLARE_FUNCTION(execSetSelectorLabel); \
	DECLARE_FUNCTION(execSetNextBlockIndex); \
	DECLARE_FUNCTION(execSetBusSendLevelOffsetByName); \
	DECLARE_FUNCTION(execSetBusSendLevelOffset); \
	DECLARE_FUNCTION(execSetBusSendLevelByName); \
	DECLARE_FUNCTION(execSetBusSendLevel); \
	DECLARE_FUNCTION(execSetAisacByName); \
	DECLARE_FUNCTION(execSetPitch); \
	DECLARE_FUNCTION(execSetPitchMultiplier); \
	DECLARE_FUNCTION(execSetRegion); \
	DECLARE_FUNCTION(execSetSoundObject); \
	DECLARE_FUNCTION(execGetVolume); \
	DECLARE_FUNCTION(execSetVolume); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execIsPaused); \
	DECLARE_FUNCTION(execPause); \
	DECLARE_FUNCTION(execGetStatus); \
	DECLARE_FUNCTION(execFadeOut); \
	DECLARE_FUNCTION(execFadeIn); \
	DECLARE_FUNCTION(execStopWithoutReleaseTime); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execGetNumQueuedSounds); \
	DECLARE_FUNCTION(execEnqueueSound); \
	DECLARE_FUNCTION(execSetSound);


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomComponent_h_184_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentCullingBoundaryDistance); \
	DECLARE_FUNCTION(execGetCurrentCullingMarginDistance); \
	DECLARE_FUNCTION(execGetCurrentMaxAttenuationDistance); \
	DECLARE_FUNCTION(execGetCurrentEconomicTickFrequency); \
	DECLARE_FUNCTION(execGetCurrentEconomicTickBoundaryDistance); \
	DECLARE_FUNCTION(execGetCurrentEconomicTickMarginDistance); \
	DECLARE_FUNCTION(execHasBeenEconomicTick); \
	DECLARE_FUNCTION(execGetDefaultAttenuationEnable); \
	DECLARE_FUNCTION(execSetDefaultAttenuationEnable); \
	DECLARE_FUNCTION(execBP_GetAttenuationSettingsToApply); \
	DECLARE_FUNCTION(execAdjustAttenuation); \
	DECLARE_FUNCTION(execIsLoop); \
	DECLARE_FUNCTION(execGetCurrentBelongingAudioVolume); \
	DECLARE_FUNCTION(execGetAudioVolumeValueMap); \
	DECLARE_FUNCTION(execGetCullDistance); \
	DECLARE_FUNCTION(execGetCullDistanceMargin); \
	DECLARE_FUNCTION(execGetMaxAttenuationDistance); \
	DECLARE_FUNCTION(execGetEconomicTickFrequency); \
	DECLARE_FUNCTION(execGetEconomicTickDistance); \
	DECLARE_FUNCTION(execGetEconomicTickDistanceMargin); \
	DECLARE_FUNCTION(execIsReducingTickFrequency); \
	DECLARE_FUNCTION(execDestroyComponentByID); \
	DECLARE_FUNCTION(execGetAtomComponentFromID); \
	DECLARE_FUNCTION(execAttachAreaSoundVolume); \
	DECLARE_FUNCTION(execGetCueName); \
	DECLARE_FUNCTION(execGetAtomComponentID); \
	DECLARE_FUNCTION(execGetSequencePosition); \
	DECLARE_FUNCTION(execGetVelocity); \
	DECLARE_FUNCTION(execGetTime); \
	DECLARE_FUNCTION(execSetAsrRackIdArray); \
	DECLARE_FUNCTION(execSetAsrRackID); \
	DECLARE_FUNCTION(execClearSelectorLabels); \
	DECLARE_FUNCTION(execSetSelectorLabel); \
	DECLARE_FUNCTION(execSetNextBlockIndex); \
	DECLARE_FUNCTION(execSetBusSendLevelOffsetByName); \
	DECLARE_FUNCTION(execSetBusSendLevelOffset); \
	DECLARE_FUNCTION(execSetBusSendLevelByName); \
	DECLARE_FUNCTION(execSetBusSendLevel); \
	DECLARE_FUNCTION(execSetAisacByName); \
	DECLARE_FUNCTION(execSetPitch); \
	DECLARE_FUNCTION(execSetPitchMultiplier); \
	DECLARE_FUNCTION(execSetRegion); \
	DECLARE_FUNCTION(execSetSoundObject); \
	DECLARE_FUNCTION(execGetVolume); \
	DECLARE_FUNCTION(execSetVolume); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execIsPaused); \
	DECLARE_FUNCTION(execPause); \
	DECLARE_FUNCTION(execGetStatus); \
	DECLARE_FUNCTION(execFadeOut); \
	DECLARE_FUNCTION(execFadeIn); \
	DECLARE_FUNCTION(execStopWithoutReleaseTime); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execGetNumQueuedSounds); \
	DECLARE_FUNCTION(execEnqueueSound); \
	DECLARE_FUNCTION(execSetSound);


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomComponent_h_184_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAtomComponent, NO_API)


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomComponent_h_184_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAtomComponent(); \
	friend struct Z_Construct_UClass_UAtomComponent_Statics; \
public: \
	DECLARE_CLASS(UAtomComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(UAtomComponent) \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomComponent_h_184_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UAtomComponent*>(this); }


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomComponent_h_184_INCLASS \
private: \
	static void StaticRegisterNativesUAtomComponent(); \
	friend struct Z_Construct_UClass_UAtomComponent_Statics; \
public: \
	DECLARE_CLASS(UAtomComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(UAtomComponent) \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomComponent_h_184_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UAtomComponent*>(this); }


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomComponent_h_184_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAtomComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomComponent(UAtomComponent&&); \
	NO_API UAtomComponent(const UAtomComponent&); \
public:


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomComponent_h_184_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAtomComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomComponent(UAtomComponent&&); \
	NO_API UAtomComponent(const UAtomComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomComponent)


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomComponent_h_184_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CueSheet() { return STRUCT_OFFSET(UAtomComponent, CueSheet); } \
	FORCEINLINE static uint32 __PPO__AppliedSoundObject() { return STRUCT_OFFSET(UAtomComponent, AppliedSoundObject); }


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomComponent_h_181_PROLOG
#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomComponent_h_184_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomComponent_h_184_PRIVATE_PROPERTY_OFFSET \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomComponent_h_184_SPARSE_DATA \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomComponent_h_184_RPC_WRAPPERS \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomComponent_h_184_INCLASS \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomComponent_h_184_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomComponent_h_184_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomComponent_h_184_PRIVATE_PROPERTY_OFFSET \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomComponent_h_184_SPARSE_DATA \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomComponent_h_184_RPC_WRAPPERS_NO_PURE_DECLS \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomComponent_h_184_INCLASS_NO_PURE_DECLS \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomComponent_h_184_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AtomComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARERUNTIME_API UClass* StaticClass<class UAtomComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomComponent_h


#define FOREACH_ENUM_EATOMSPEAKERID(op) \
	op(EAtomSpeakerID::FrontLeft) \
	op(EAtomSpeakerID::FrontRight) \
	op(EAtomSpeakerID::FrontCenter) \
	op(EAtomSpeakerID::LowFrequency) \
	op(EAtomSpeakerID::SurroundLeft) \
	op(EAtomSpeakerID::SurroundRight) \
	op(EAtomSpeakerID::SurroundBackLeft) \
	op(EAtomSpeakerID::SurroundBackRight) 

enum class EAtomSpeakerID : uint8;
template<> CRIWARERUNTIME_API UEnum* StaticEnum<EAtomSpeakerID>();

#define FOREACH_ENUM_EATOMCOMPONENTSTATUS(op) \
	op(EAtomComponentStatus::Stop) \
	op(EAtomComponentStatus::Prep) \
	op(EAtomComponentStatus::Playing) \
	op(EAtomComponentStatus::PlayEnd) \
	op(EAtomComponentStatus::Error) 

enum class EAtomComponentStatus : uint8;
template<> CRIWARERUNTIME_API UEnum* StaticEnum<EAtomComponentStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
