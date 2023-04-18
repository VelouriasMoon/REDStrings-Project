// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSnapshotSwitchSettings;
#ifdef CRIWARERUNTIME_AtomAudioVolume_generated_h
#error "AtomAudioVolume.generated.h already included, missing '#pragma once' in AtomAudioVolume.h"
#endif
#define CRIWARERUNTIME_AtomAudioVolume_generated_h

#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAudioVolume_h_302_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics; \
	CRIWARERUNTIME_API static class UScriptStruct* StaticStruct();


template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<struct FAtomAudioVolumeParameters>();

#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAudioVolume_h_245_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics; \
	CRIWARERUNTIME_API static class UScriptStruct* StaticStruct();


template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<struct FBusSendInterpolationSettings>();

#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAudioVolume_h_193_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics; \
	CRIWARERUNTIME_API static class UScriptStruct* StaticStruct();


template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<struct FAisacControlInterpolationSettings>();

#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAudioVolume_h_145_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics; \
	CRIWARERUNTIME_API static class UScriptStruct* StaticStruct();


template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<struct FSnapshotSwitchSettings>();

#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAudioVolume_h_76_SPARSE_DATA
#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAudioVolume_h_76_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_bEnabled); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execGetEnabled); \
	DECLARE_FUNCTION(execSetPriority); \
	DECLARE_FUNCTION(execGetPriority);


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAudioVolume_h_76_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_bEnabled); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execGetEnabled); \
	DECLARE_FUNCTION(execSetPriority); \
	DECLARE_FUNCTION(execGetPriority);


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAudioVolume_h_76_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAtomEntranceVolume(); \
	friend struct Z_Construct_UClass_AAtomEntranceVolume_Statics; \
public: \
	DECLARE_CLASS(AAtomEntranceVolume, AVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(AAtomEntranceVolume) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bEnabled=NETFIELD_REP_START, \
		NeighbourhoodAudioVolumeArray, \
		NETFIELD_REP_END=NeighbourhoodAudioVolumeArray	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAudioVolume_h_76_INCLASS \
private: \
	static void StaticRegisterNativesAAtomEntranceVolume(); \
	friend struct Z_Construct_UClass_AAtomEntranceVolume_Statics; \
public: \
	DECLARE_CLASS(AAtomEntranceVolume, AVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(AAtomEntranceVolume) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bEnabled=NETFIELD_REP_START, \
		NeighbourhoodAudioVolumeArray, \
		NETFIELD_REP_END=NeighbourhoodAudioVolumeArray	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAudioVolume_h_76_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAtomEntranceVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAtomEntranceVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAtomEntranceVolume); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAtomEntranceVolume); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAtomEntranceVolume(AAtomEntranceVolume&&); \
	NO_API AAtomEntranceVolume(const AAtomEntranceVolume&); \
public:


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAudioVolume_h_76_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAtomEntranceVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAtomEntranceVolume(AAtomEntranceVolume&&); \
	NO_API AAtomEntranceVolume(const AAtomEntranceVolume&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAtomEntranceVolume); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAtomEntranceVolume); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAtomEntranceVolume)


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAudioVolume_h_76_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Priority() { return STRUCT_OFFSET(AAtomEntranceVolume, Priority); }


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAudioVolume_h_73_PROLOG
#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAudioVolume_h_76_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAudioVolume_h_76_PRIVATE_PROPERTY_OFFSET \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAudioVolume_h_76_SPARSE_DATA \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAudioVolume_h_76_RPC_WRAPPERS \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAudioVolume_h_76_INCLASS \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAudioVolume_h_76_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAudioVolume_h_76_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAudioVolume_h_76_PRIVATE_PROPERTY_OFFSET \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAudioVolume_h_76_SPARSE_DATA \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAudioVolume_h_76_RPC_WRAPPERS_NO_PURE_DECLS \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAudioVolume_h_76_INCLASS_NO_PURE_DECLS \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAudioVolume_h_76_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AtomEntranceVolume."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARERUNTIME_API UClass* StaticClass<class AAtomEntranceVolume>();

#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAudioVolume_h_364_SPARSE_DATA
#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAudioVolume_h_364_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEnableAllAudioVolume); \
	DECLARE_FUNCTION(execSetReverbSettings); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execGetEnabled); \
	DECLARE_FUNCTION(execSetPriority); \
	DECLARE_FUNCTION(execGetPriority); \
	DECLARE_FUNCTION(execOnRep_bEnabled);


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAudioVolume_h_364_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEnableAllAudioVolume); \
	DECLARE_FUNCTION(execSetReverbSettings); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execGetEnabled); \
	DECLARE_FUNCTION(execSetPriority); \
	DECLARE_FUNCTION(execGetPriority); \
	DECLARE_FUNCTION(execOnRep_bEnabled);


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAudioVolume_h_364_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAtomAudioVolume(); \
	friend struct Z_Construct_UClass_AAtomAudioVolume_Statics; \
public: \
	DECLARE_CLASS(AAtomAudioVolume, AVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(AAtomAudioVolume) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bEnabled=NETFIELD_REP_START, \
		NETFIELD_REP_END=bEnabled	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAudioVolume_h_364_INCLASS \
private: \
	static void StaticRegisterNativesAAtomAudioVolume(); \
	friend struct Z_Construct_UClass_AAtomAudioVolume_Statics; \
public: \
	DECLARE_CLASS(AAtomAudioVolume, AVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(AAtomAudioVolume) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bEnabled=NETFIELD_REP_START, \
		NETFIELD_REP_END=bEnabled	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAudioVolume_h_364_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAtomAudioVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAtomAudioVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAtomAudioVolume); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAtomAudioVolume); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAtomAudioVolume(AAtomAudioVolume&&); \
	NO_API AAtomAudioVolume(const AAtomAudioVolume&); \
public:


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAudioVolume_h_364_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAtomAudioVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAtomAudioVolume(AAtomAudioVolume&&); \
	NO_API AAtomAudioVolume(const AAtomAudioVolume&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAtomAudioVolume); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAtomAudioVolume); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAtomAudioVolume)


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAudioVolume_h_364_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Priority() { return STRUCT_OFFSET(AAtomAudioVolume, Priority); } \
	FORCEINLINE static uint32 __PPO__CollisionProfile() { return STRUCT_OFFSET(AAtomAudioVolume, CollisionProfile); } \
	FORCEINLINE static uint32 __PPO__bAutoSettingEntranceVolume() { return STRUCT_OFFSET(AAtomAudioVolume, bAutoSettingEntranceVolume); } \
	FORCEINLINE static uint32 __PPO__bAutoSettingNeighbourAudioVolumeToEntranceVolume() { return STRUCT_OFFSET(AAtomAudioVolume, bAutoSettingNeighbourAudioVolumeToEntranceVolume); } \
	FORCEINLINE static uint32 __PPO__AudioVolumeTags() { return STRUCT_OFFSET(AAtomAudioVolume, AudioVolumeTags); } \
	FORCEINLINE static uint32 __PPO__bOverrideAtomAudioVolume() { return STRUCT_OFFSET(AAtomAudioVolume, bOverrideAtomAudioVolume); }


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAudioVolume_h_361_PROLOG
#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAudioVolume_h_364_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAudioVolume_h_364_PRIVATE_PROPERTY_OFFSET \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAudioVolume_h_364_SPARSE_DATA \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAudioVolume_h_364_RPC_WRAPPERS \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAudioVolume_h_364_INCLASS \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAudioVolume_h_364_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAudioVolume_h_364_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAudioVolume_h_364_PRIVATE_PROPERTY_OFFSET \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAudioVolume_h_364_SPARSE_DATA \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAudioVolume_h_364_RPC_WRAPPERS_NO_PURE_DECLS \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAudioVolume_h_364_INCLASS_NO_PURE_DECLS \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAudioVolume_h_364_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AtomAudioVolume."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARERUNTIME_API UClass* StaticClass<class AAtomAudioVolume>();

#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAudioVolume_h_570_SPARSE_DATA
#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAudioVolume_h_570_RPC_WRAPPERS
#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAudioVolume_h_570_RPC_WRAPPERS_NO_PURE_DECLS
#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAudioVolume_h_570_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAtomAudioVolumeSettings(); \
	friend struct Z_Construct_UClass_UAtomAudioVolumeSettings_Statics; \
public: \
	DECLARE_CLASS(UAtomAudioVolumeSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), CRIWARERUNTIME_API) \
	DECLARE_SERIALIZER(UAtomAudioVolumeSettings)


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAudioVolume_h_570_INCLASS \
private: \
	static void StaticRegisterNativesUAtomAudioVolumeSettings(); \
	friend struct Z_Construct_UClass_UAtomAudioVolumeSettings_Statics; \
public: \
	DECLARE_CLASS(UAtomAudioVolumeSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), CRIWARERUNTIME_API) \
	DECLARE_SERIALIZER(UAtomAudioVolumeSettings)


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAudioVolume_h_570_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CRIWARERUNTIME_API UAtomAudioVolumeSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomAudioVolumeSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CRIWARERUNTIME_API, UAtomAudioVolumeSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomAudioVolumeSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	CRIWARERUNTIME_API UAtomAudioVolumeSettings(UAtomAudioVolumeSettings&&); \
	CRIWARERUNTIME_API UAtomAudioVolumeSettings(const UAtomAudioVolumeSettings&); \
public:


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAudioVolume_h_570_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CRIWARERUNTIME_API UAtomAudioVolumeSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	CRIWARERUNTIME_API UAtomAudioVolumeSettings(UAtomAudioVolumeSettings&&); \
	CRIWARERUNTIME_API UAtomAudioVolumeSettings(const UAtomAudioVolumeSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CRIWARERUNTIME_API, UAtomAudioVolumeSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomAudioVolumeSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomAudioVolumeSettings)


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAudioVolume_h_570_PRIVATE_PROPERTY_OFFSET
#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAudioVolume_h_567_PROLOG
#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAudioVolume_h_570_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAudioVolume_h_570_PRIVATE_PROPERTY_OFFSET \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAudioVolume_h_570_SPARSE_DATA \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAudioVolume_h_570_RPC_WRAPPERS \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAudioVolume_h_570_INCLASS \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAudioVolume_h_570_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAudioVolume_h_570_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAudioVolume_h_570_PRIVATE_PROPERTY_OFFSET \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAudioVolume_h_570_SPARSE_DATA \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAudioVolume_h_570_RPC_WRAPPERS_NO_PURE_DECLS \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAudioVolume_h_570_INCLASS_NO_PURE_DECLS \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAudioVolume_h_570_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AtomAudioVolumeSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARERUNTIME_API UClass* StaticClass<class UAtomAudioVolumeSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomAudioVolume_h


#define FOREACH_ENUM_EATOMAUDIOVOLUMETYPE(op) \
	op(EAtomAudioVolumeType::UseSnapshot) \
	op(EAtomAudioVolumeType::UseBus) \
	op(EAtomAudioVolumeType::UseAisacControl) \
	op(EAtomAudioVolumeType::UseEntranceVolume) \
	op(EAtomAudioVolumeType::Num) 

enum class EAtomAudioVolumeType : uint8;
template<> CRIWARERUNTIME_API UEnum* StaticEnum<EAtomAudioVolumeType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
