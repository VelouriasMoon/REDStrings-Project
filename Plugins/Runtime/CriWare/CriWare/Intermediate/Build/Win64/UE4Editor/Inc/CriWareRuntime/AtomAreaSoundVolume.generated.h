// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class UAtomComponent;
#ifdef CRIWARERUNTIME_AtomAreaSoundVolume_generated_h
#error "AtomAreaSoundVolume.generated.h already included, missing '#pragma once' in AtomAreaSoundVolume.h"
#endif
#define CRIWARERUNTIME_AtomAreaSoundVolume_generated_h

#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAreaSoundVolume_h_68_SPARSE_DATA
#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAreaSoundVolume_h_68_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execGetEnabled); \
	DECLARE_FUNCTION(execSetPriority); \
	DECLARE_FUNCTION(execGetPriority); \
	DECLARE_FUNCTION(execDestroySounds); \
	DECLARE_FUNCTION(execCreateSounds); \
	DECLARE_FUNCTION(execOnRep_bEnabled);


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAreaSoundVolume_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execGetEnabled); \
	DECLARE_FUNCTION(execSetPriority); \
	DECLARE_FUNCTION(execGetPriority); \
	DECLARE_FUNCTION(execDestroySounds); \
	DECLARE_FUNCTION(execCreateSounds); \
	DECLARE_FUNCTION(execOnRep_bEnabled);


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAreaSoundVolume_h_68_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAtomAreaSoundVolume(); \
	friend struct Z_Construct_UClass_AAtomAreaSoundVolume_Statics; \
public: \
	DECLARE_CLASS(AAtomAreaSoundVolume, AVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(AAtomAreaSoundVolume) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bEnabled=NETFIELD_REP_START, \
		NETFIELD_REP_END=bEnabled	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAreaSoundVolume_h_68_INCLASS \
private: \
	static void StaticRegisterNativesAAtomAreaSoundVolume(); \
	friend struct Z_Construct_UClass_AAtomAreaSoundVolume_Statics; \
public: \
	DECLARE_CLASS(AAtomAreaSoundVolume, AVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(AAtomAreaSoundVolume) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bEnabled=NETFIELD_REP_START, \
		NETFIELD_REP_END=bEnabled	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAreaSoundVolume_h_68_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAtomAreaSoundVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAtomAreaSoundVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAtomAreaSoundVolume); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAtomAreaSoundVolume); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAtomAreaSoundVolume(AAtomAreaSoundVolume&&); \
	NO_API AAtomAreaSoundVolume(const AAtomAreaSoundVolume&); \
public:


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAreaSoundVolume_h_68_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAtomAreaSoundVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAtomAreaSoundVolume(AAtomAreaSoundVolume&&); \
	NO_API AAtomAreaSoundVolume(const AAtomAreaSoundVolume&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAtomAreaSoundVolume); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAtomAreaSoundVolume); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAtomAreaSoundVolume)


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAreaSoundVolume_h_68_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Priority() { return STRUCT_OFFSET(AAtomAreaSoundVolume, Priority); } \
	FORCEINLINE static uint32 __PPO__CollisionProfile() { return STRUCT_OFFSET(AAtomAreaSoundVolume, CollisionProfile); } \
	FORCEINLINE static uint32 __PPO__SoundStopDistance() { return STRUCT_OFFSET(AAtomAreaSoundVolume, SoundStopDistance); } \
	FORCEINLINE static uint32 __PPO__bIsEnableAtomCompoentPack() { return STRUCT_OFFSET(AAtomAreaSoundVolume, bIsEnableAtomCompoentPack); }


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAreaSoundVolume_h_65_PROLOG
#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAreaSoundVolume_h_68_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAreaSoundVolume_h_68_PRIVATE_PROPERTY_OFFSET \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAreaSoundVolume_h_68_SPARSE_DATA \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAreaSoundVolume_h_68_RPC_WRAPPERS \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAreaSoundVolume_h_68_INCLASS \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAreaSoundVolume_h_68_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAreaSoundVolume_h_68_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAreaSoundVolume_h_68_PRIVATE_PROPERTY_OFFSET \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAreaSoundVolume_h_68_SPARSE_DATA \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAreaSoundVolume_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAreaSoundVolume_h_68_INCLASS_NO_PURE_DECLS \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAreaSoundVolume_h_68_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AtomAreaSoundVolume."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARERUNTIME_API UClass* StaticClass<class AAtomAreaSoundVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAreaSoundVolume_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
