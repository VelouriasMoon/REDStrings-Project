// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAtomSequenceInfo;
enum class EAtomSequenceEventType : uint8;
struct FAtomBeatSyncInfo;
#ifdef CRIWARERUNTIME_AtomCallbackManager_generated_h
#error "AtomCallbackManager.generated.h already included, missing '#pragma once' in AtomCallbackManager.h"
#endif
#define CRIWARERUNTIME_AtomCallbackManager_generated_h

#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomCallbackManager_h_86_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAtomSequenceInfo_Statics; \
	CRIWARERUNTIME_API static class UScriptStruct* StaticStruct();


template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<struct FAtomSequenceInfo>();

#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomCallbackManager_h_50_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAtomBeatSyncInfo_Statics; \
	CRIWARERUNTIME_API static class UScriptStruct* StaticStruct();


template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<struct FAtomBeatSyncInfo>();

#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomCallbackManager_h_120_SPARSE_DATA
#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomCallbackManager_h_120_RPC_WRAPPERS
#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomCallbackManager_h_120_RPC_WRAPPERS_NO_PURE_DECLS
#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomCallbackManager_h_120_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAtomCallback(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomCallback) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomCallback); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomCallback); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomCallback(UAtomCallback&&); \
	NO_API UAtomCallback(const UAtomCallback&); \
public:


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomCallbackManager_h_120_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAtomCallback(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomCallback(UAtomCallback&&); \
	NO_API UAtomCallback(const UAtomCallback&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomCallback); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomCallback); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomCallback)


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomCallbackManager_h_120_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAtomCallback(); \
	friend struct Z_Construct_UClass_UAtomCallback_Statics; \
public: \
	DECLARE_CLASS(UAtomCallback, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(UAtomCallback)


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomCallbackManager_h_120_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomCallbackManager_h_120_GENERATED_UINTERFACE_BODY() \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomCallbackManager_h_120_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomCallbackManager_h_120_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomCallbackManager_h_120_GENERATED_UINTERFACE_BODY() \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomCallbackManager_h_120_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomCallbackManager_h_120_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAtomCallback() {} \
public: \
	typedef UAtomCallback UClassType; \
	typedef IAtomCallback ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomCallbackManager_h_120_INCLASS_IINTERFACE \
protected: \
	virtual ~IAtomCallback() {} \
public: \
	typedef UAtomCallback UClassType; \
	typedef IAtomCallback ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomCallbackManager_h_117_PROLOG
#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomCallbackManager_h_125_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomCallbackManager_h_120_SPARSE_DATA \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomCallbackManager_h_120_RPC_WRAPPERS \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomCallbackManager_h_120_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomCallbackManager_h_125_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomCallbackManager_h_120_SPARSE_DATA \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomCallbackManager_h_120_RPC_WRAPPERS_NO_PURE_DECLS \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomCallbackManager_h_120_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARERUNTIME_API UClass* StaticClass<class UAtomCallback>();

#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomCallbackManager_h_169_SPARSE_DATA
#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomCallbackManager_h_169_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execNativeBreakAtomSequenceInfo); \
	DECLARE_FUNCTION(execNativeBreakAtomBeatSyncInfo);


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomCallbackManager_h_169_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execNativeBreakAtomSequenceInfo); \
	DECLARE_FUNCTION(execNativeBreakAtomBeatSyncInfo);


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomCallbackManager_h_169_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAtomCallbackManager(); \
	friend struct Z_Construct_UClass_UAtomCallbackManager_Statics; \
public: \
	DECLARE_CLASS(UAtomCallbackManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(UAtomCallbackManager)


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomCallbackManager_h_169_INCLASS \
private: \
	static void StaticRegisterNativesUAtomCallbackManager(); \
	friend struct Z_Construct_UClass_UAtomCallbackManager_Statics; \
public: \
	DECLARE_CLASS(UAtomCallbackManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(UAtomCallbackManager)


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomCallbackManager_h_169_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAtomCallbackManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomCallbackManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomCallbackManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomCallbackManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomCallbackManager(UAtomCallbackManager&&); \
	NO_API UAtomCallbackManager(const UAtomCallbackManager&); \
public:


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomCallbackManager_h_169_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomCallbackManager(UAtomCallbackManager&&); \
	NO_API UAtomCallbackManager(const UAtomCallbackManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomCallbackManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomCallbackManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAtomCallbackManager)


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomCallbackManager_h_169_PRIVATE_PROPERTY_OFFSET
#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomCallbackManager_h_165_PROLOG
#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomCallbackManager_h_169_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomCallbackManager_h_169_PRIVATE_PROPERTY_OFFSET \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomCallbackManager_h_169_SPARSE_DATA \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomCallbackManager_h_169_RPC_WRAPPERS \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomCallbackManager_h_169_INCLASS \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomCallbackManager_h_169_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomCallbackManager_h_169_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomCallbackManager_h_169_PRIVATE_PROPERTY_OFFSET \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomCallbackManager_h_169_SPARSE_DATA \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomCallbackManager_h_169_RPC_WRAPPERS_NO_PURE_DECLS \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomCallbackManager_h_169_INCLASS_NO_PURE_DECLS \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomCallbackManager_h_169_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARERUNTIME_API UClass* StaticClass<class UAtomCallbackManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_AtomCallbackManager_h


#define FOREACH_ENUM_EATOMSEQUENCEEVENTTYPE(op) \
	op(EAtomSequenceEventType::SEQUENCE_TYPE_CALLBACK) \
	op(EAtomSequenceEventType::SEQUENCE_TYPESIZE_4BYTE) 

enum class EAtomSequenceEventType : uint8;
template<> CRIWARERUNTIME_API UEnum* StaticEnum<EAtomSequenceEventType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
