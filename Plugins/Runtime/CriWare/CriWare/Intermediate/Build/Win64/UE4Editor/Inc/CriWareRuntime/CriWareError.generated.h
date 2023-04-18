// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCriWareErrorInfo;
class UCriWareError;
#ifdef CRIWARERUNTIME_CriWareError_generated_h
#error "CriWareError.generated.h already included, missing '#pragma once' in CriWareError.h"
#endif
#define CRIWARERUNTIME_CriWareError_generated_h

#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_CriWareError_h_43_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCriWareErrorInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<struct FCriWareErrorInfo>();

#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_CriWareError_h_65_DELEGATE \
struct CriWareError_eventOnCriWareError_Parms \
{ \
	FCriWareErrorInfo ErrorInfo; \
}; \
static inline void FOnCriWareError_DelegateWrapper(const FMulticastScriptDelegate& OnCriWareError, FCriWareErrorInfo const& ErrorInfo) \
{ \
	CriWareError_eventOnCriWareError_Parms Parms; \
	Parms.ErrorInfo=ErrorInfo; \
	OnCriWareError.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_CriWareError_h_63_SPARSE_DATA
#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_CriWareError_h_63_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCriWareError);


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_CriWareError_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCriWareError);


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_CriWareError_h_63_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCriWareError(); \
	friend struct Z_Construct_UClass_UCriWareError_Statics; \
public: \
	DECLARE_CLASS(UCriWareError, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), CRIWARERUNTIME_API) \
	DECLARE_SERIALIZER(UCriWareError)


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_CriWareError_h_63_INCLASS \
private: \
	static void StaticRegisterNativesUCriWareError(); \
	friend struct Z_Construct_UClass_UCriWareError_Statics; \
public: \
	DECLARE_CLASS(UCriWareError, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), CRIWARERUNTIME_API) \
	DECLARE_SERIALIZER(UCriWareError)


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_CriWareError_h_63_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CRIWARERUNTIME_API UCriWareError(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCriWareError) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CRIWARERUNTIME_API, UCriWareError); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCriWareError); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	CRIWARERUNTIME_API UCriWareError(UCriWareError&&); \
	CRIWARERUNTIME_API UCriWareError(const UCriWareError&); \
public:


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_CriWareError_h_63_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CRIWARERUNTIME_API UCriWareError(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	CRIWARERUNTIME_API UCriWareError(UCriWareError&&); \
	CRIWARERUNTIME_API UCriWareError(const UCriWareError&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CRIWARERUNTIME_API, UCriWareError); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCriWareError); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCriWareError)


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_CriWareError_h_63_PRIVATE_PROPERTY_OFFSET
#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_CriWareError_h_58_PROLOG
#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_CriWareError_h_63_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_CriWareError_h_63_PRIVATE_PROPERTY_OFFSET \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_CriWareError_h_63_SPARSE_DATA \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_CriWareError_h_63_RPC_WRAPPERS \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_CriWareError_h_63_INCLASS \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_CriWareError_h_63_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_CriWareError_h_63_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_CriWareError_h_63_PRIVATE_PROPERTY_OFFSET \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_CriWareError_h_63_SPARSE_DATA \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_CriWareError_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_CriWareError_h_63_INCLASS_NO_PURE_DECLS \
	REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_CriWareError_h_63_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARERUNTIME_API UClass* StaticClass<class UCriWareError>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID REDStrings_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Classes_CriWareError_h


#define FOREACH_ENUM_ECRIWAREERRORTYPE(op) \
	op(ECriWareErrorType::Warning) \
	op(ECriWareErrorType::Error) 

enum class ECriWareErrorType : uint8;
template<> CRIWARERUNTIME_API UEnum* StaticEnum<ECriWareErrorType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
