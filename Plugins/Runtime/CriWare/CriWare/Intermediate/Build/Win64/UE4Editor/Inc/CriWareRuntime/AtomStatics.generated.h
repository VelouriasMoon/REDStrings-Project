// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USoundAtomCueSheet;
class USceneComponent;
struct FAtomComponentParams;
struct FVector;
class UAtomComponent;
class USoundAtomCue;
class UObject;
class AActor;
struct FAtomListenerFocusPointInfo;
class UAtom3dRegion;
enum class EAtomAudioVolumeType : uint8;
class AAtomAudioVolume;
class USoundAtomConfig;
class USoundAttenuation;
struct FRotator;
class USoundConcurrency;
#ifdef CRIWARERUNTIME_AtomStatics_generated_h
#error "AtomStatics.generated.h already included, missing '#pragma once' in AtomStatics.h"
#endif
#define CRIWARERUNTIME_AtomStatics_generated_h

#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomStatics_h_50_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAtomComponentParams_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<struct FAtomComponentParams>();

#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomStatics_h_131_SPARSE_DATA
#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomStatics_h_131_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSpawnAtomSoundAttachedByName); \
	DECLARE_FUNCTION(execSpawnAtomSoundAttached); \
	DECLARE_FUNCTION(execSpawnAtomSoundAtLocationByName); \
	DECLARE_FUNCTION(execSpawnAtomSoundAtLocation); \
	DECLARE_FUNCTION(execSpawnAtomSound2DByName); \
	DECLARE_FUNCTION(execSpawnAtomSound2D); \
	DECLARE_FUNCTION(execPlayAtomSoundAtLocationByName); \
	DECLARE_FUNCTION(execPlayAtomSoundAtLocation); \
	DECLARE_FUNCTION(execGetListeningPoint); \
	DECLARE_FUNCTION(execSetListenerFocusPointDirectionLevel); \
	DECLARE_FUNCTION(execSetListenerFocusPointDistanceLevel); \
	DECLARE_FUNCTION(execSetListenerFocusPointTargetComponent); \
	DECLARE_FUNCTION(execSetListenerFocusPointTargetActor); \
	DECLARE_FUNCTION(execSetListenerFocusPointInfo); \
	DECLARE_FUNCTION(execGetListenerFocusPointInfo); \
	DECLARE_FUNCTION(execSetListenerRegion); \
	DECLARE_FUNCTION(execGetListenerRegion); \
	DECLARE_FUNCTION(execGetAudioVolumeAffectingListener); \
	DECLARE_FUNCTION(execStopAllSoundsForKeyFromAtomComponentIds); \
	DECLARE_FUNCTION(execAddToAtomComponentIds); \
	DECLARE_FUNCTION(execUpdateDistanceFactorForAllSounds); \
	DECLARE_FUNCTION(execLoadAtomConfig); \
	DECLARE_FUNCTION(execSetAtomGameVariable); \
	DECLARE_FUNCTION(execGetAtomGameVariable); \
	DECLARE_FUNCTION(execStopAllSounds); \
	DECLARE_FUNCTION(execPauseAudioOutput); \
	DECLARE_FUNCTION(execPlaySoundForAnimNotify); \
	DECLARE_FUNCTION(execPlaySoundAttached); \
	DECLARE_FUNCTION(execSpawnSoundAttached); \
	DECLARE_FUNCTION(execSpawnSoundAtLocation); \
	DECLARE_FUNCTION(execCreateRootedAtomComponent); \
	DECLARE_FUNCTION(execSpawnSound2D); \
	DECLARE_FUNCTION(execPlaySoundAtLocation);


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomStatics_h_131_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSpawnAtomSoundAttachedByName); \
	DECLARE_FUNCTION(execSpawnAtomSoundAttached); \
	DECLARE_FUNCTION(execSpawnAtomSoundAtLocationByName); \
	DECLARE_FUNCTION(execSpawnAtomSoundAtLocation); \
	DECLARE_FUNCTION(execSpawnAtomSound2DByName); \
	DECLARE_FUNCTION(execSpawnAtomSound2D); \
	DECLARE_FUNCTION(execPlayAtomSoundAtLocationByName); \
	DECLARE_FUNCTION(execPlayAtomSoundAtLocation); \
	DECLARE_FUNCTION(execGetListeningPoint); \
	DECLARE_FUNCTION(execSetListenerFocusPointDirectionLevel); \
	DECLARE_FUNCTION(execSetListenerFocusPointDistanceLevel); \
	DECLARE_FUNCTION(execSetListenerFocusPointTargetComponent); \
	DECLARE_FUNCTION(execSetListenerFocusPointTargetActor); \
	DECLARE_FUNCTION(execSetListenerFocusPointInfo); \
	DECLARE_FUNCTION(execGetListenerFocusPointInfo); \
	DECLARE_FUNCTION(execSetListenerRegion); \
	DECLARE_FUNCTION(execGetListenerRegion); \
	DECLARE_FUNCTION(execGetAudioVolumeAffectingListener); \
	DECLARE_FUNCTION(execStopAllSoundsForKeyFromAtomComponentIds); \
	DECLARE_FUNCTION(execAddToAtomComponentIds); \
	DECLARE_FUNCTION(execUpdateDistanceFactorForAllSounds); \
	DECLARE_FUNCTION(execLoadAtomConfig); \
	DECLARE_FUNCTION(execSetAtomGameVariable); \
	DECLARE_FUNCTION(execGetAtomGameVariable); \
	DECLARE_FUNCTION(execStopAllSounds); \
	DECLARE_FUNCTION(execPauseAudioOutput); \
	DECLARE_FUNCTION(execPlaySoundForAnimNotify); \
	DECLARE_FUNCTION(execPlaySoundAttached); \
	DECLARE_FUNCTION(execSpawnSoundAttached); \
	DECLARE_FUNCTION(execSpawnSoundAtLocation); \
	DECLARE_FUNCTION(execCreateRootedAtomComponent); \
	DECLARE_FUNCTION(execSpawnSound2D); \
	DECLARE_FUNCTION(execPlaySoundAtLocation);


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomStatics_h_131_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAtomStatics(); \
	friend struct Z_Construct_UClass_UAtomStatics_Statics; \
public: \
	DECLARE_CLASS(UAtomStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(UAtomStatics)


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomStatics_h_131_INCLASS \
private: \
	static void StaticRegisterNativesUAtomStatics(); \
	friend struct Z_Construct_UClass_UAtomStatics_Statics; \
public: \
	DECLARE_CLASS(UAtomStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(UAtomStatics)


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomStatics_h_131_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAtomStatics(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomStatics) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomStatics); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomStatics); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomStatics(UAtomStatics&&); \
	NO_API UAtomStatics(const UAtomStatics&); \
public:


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomStatics_h_131_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomStatics(UAtomStatics&&); \
	NO_API UAtomStatics(const UAtomStatics&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomStatics); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomStatics); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAtomStatics)


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomStatics_h_131_PRIVATE_PROPERTY_OFFSET
#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomStatics_h_128_PROLOG
#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomStatics_h_131_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomStatics_h_131_PRIVATE_PROPERTY_OFFSET \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomStatics_h_131_SPARSE_DATA \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomStatics_h_131_RPC_WRAPPERS \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomStatics_h_131_INCLASS \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomStatics_h_131_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomStatics_h_131_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomStatics_h_131_PRIVATE_PROPERTY_OFFSET \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomStatics_h_131_SPARSE_DATA \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomStatics_h_131_RPC_WRAPPERS_NO_PURE_DECLS \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomStatics_h_131_INCLASS_NO_PURE_DECLS \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomStatics_h_131_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARERUNTIME_API UClass* StaticClass<class UAtomStatics>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomStatics_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
