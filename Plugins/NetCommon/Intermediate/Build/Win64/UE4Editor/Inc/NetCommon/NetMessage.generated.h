// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UNetMessage;
#ifdef NETCOMMON_NetMessage_generated_h
#error "NetMessage.generated.h already included, missing '#pragma once' in NetMessage.h"
#endif
#define NETCOMMON_NetMessage_generated_h

#define REDStrings_Plugins_NetCommon_Source_NetCommon_Public_NetMessage_h_10_SPARSE_DATA
#define REDStrings_Plugins_NetCommon_Source_NetCommon_Public_NetMessage_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreate); \
	DECLARE_FUNCTION(execDump); \
	DECLARE_FUNCTION(execDumpHttp); \
	DECLARE_FUNCTION(execDumpHttpHeader); \
	DECLARE_FUNCTION(execSet); \
	DECLARE_FUNCTION(execToJson);


#define REDStrings_Plugins_NetCommon_Source_NetCommon_Public_NetMessage_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreate); \
	DECLARE_FUNCTION(execDump); \
	DECLARE_FUNCTION(execDumpHttp); \
	DECLARE_FUNCTION(execDumpHttpHeader); \
	DECLARE_FUNCTION(execSet); \
	DECLARE_FUNCTION(execToJson);


#define REDStrings_Plugins_NetCommon_Source_NetCommon_Public_NetMessage_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetMessage(); \
	friend struct Z_Construct_UClass_UNetMessage_Statics; \
public: \
	DECLARE_CLASS(UNetMessage, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NetCommon"), NO_API) \
	DECLARE_SERIALIZER(UNetMessage)


#define REDStrings_Plugins_NetCommon_Source_NetCommon_Public_NetMessage_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUNetMessage(); \
	friend struct Z_Construct_UClass_UNetMessage_Statics; \
public: \
	DECLARE_CLASS(UNetMessage, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NetCommon"), NO_API) \
	DECLARE_SERIALIZER(UNetMessage)


#define REDStrings_Plugins_NetCommon_Source_NetCommon_Public_NetMessage_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNetMessage(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNetMessage) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNetMessage); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetMessage); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNetMessage(UNetMessage&&); \
	NO_API UNetMessage(const UNetMessage&); \
public:


#define REDStrings_Plugins_NetCommon_Source_NetCommon_Public_NetMessage_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNetMessage(UNetMessage&&); \
	NO_API UNetMessage(const UNetMessage&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNetMessage); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetMessage); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNetMessage)


#define REDStrings_Plugins_NetCommon_Source_NetCommon_Public_NetMessage_h_10_PRIVATE_PROPERTY_OFFSET
#define REDStrings_Plugins_NetCommon_Source_NetCommon_Public_NetMessage_h_8_PROLOG
#define REDStrings_Plugins_NetCommon_Source_NetCommon_Public_NetMessage_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	REDStrings_Plugins_NetCommon_Source_NetCommon_Public_NetMessage_h_10_PRIVATE_PROPERTY_OFFSET \
	REDStrings_Plugins_NetCommon_Source_NetCommon_Public_NetMessage_h_10_SPARSE_DATA \
	REDStrings_Plugins_NetCommon_Source_NetCommon_Public_NetMessage_h_10_RPC_WRAPPERS \
	REDStrings_Plugins_NetCommon_Source_NetCommon_Public_NetMessage_h_10_INCLASS \
	REDStrings_Plugins_NetCommon_Source_NetCommon_Public_NetMessage_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define REDStrings_Plugins_NetCommon_Source_NetCommon_Public_NetMessage_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	REDStrings_Plugins_NetCommon_Source_NetCommon_Public_NetMessage_h_10_PRIVATE_PROPERTY_OFFSET \
	REDStrings_Plugins_NetCommon_Source_NetCommon_Public_NetMessage_h_10_SPARSE_DATA \
	REDStrings_Plugins_NetCommon_Source_NetCommon_Public_NetMessage_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	REDStrings_Plugins_NetCommon_Source_NetCommon_Public_NetMessage_h_10_INCLASS_NO_PURE_DECLS \
	REDStrings_Plugins_NetCommon_Source_NetCommon_Public_NetMessage_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETCOMMON_API UClass* StaticClass<class UNetMessage>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID REDStrings_Plugins_NetCommon_Source_NetCommon_Public_NetMessage_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
