// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FForcePoints;
#ifdef CASCADEEXTENSIONPLUGIN_ForcePointDataProvider_generated_h
#error "ForcePointDataProvider.generated.h already included, missing '#pragma once' in ForcePointDataProvider.h"
#endif
#define CASCADEEXTENSIONPLUGIN_ForcePointDataProvider_generated_h

#define REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_ForcePointDataProvider_h_9_SPARSE_DATA
#define REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_ForcePointDataProvider_h_9_RPC_WRAPPERS \
	virtual FForcePoints GetForcePoints_Implementation() const { return FForcePoints(); }; \
 \
	DECLARE_FUNCTION(execGetForcePoints);


#define REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_ForcePointDataProvider_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual FForcePoints GetForcePoints_Implementation() const { return FForcePoints(); }; \
 \
	DECLARE_FUNCTION(execGetForcePoints);


#define REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_ForcePointDataProvider_h_9_EVENT_PARMS \
	struct ForcePointDataProvider_eventGetForcePoints_Parms \
	{ \
		FForcePoints ReturnValue; \
	};


#define REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_ForcePointDataProvider_h_9_CALLBACK_WRAPPERS
#define REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_ForcePointDataProvider_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UForcePointDataProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UForcePointDataProvider) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UForcePointDataProvider); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UForcePointDataProvider); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UForcePointDataProvider(UForcePointDataProvider&&); \
	NO_API UForcePointDataProvider(const UForcePointDataProvider&); \
public:


#define REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_ForcePointDataProvider_h_9_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UForcePointDataProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UForcePointDataProvider(UForcePointDataProvider&&); \
	NO_API UForcePointDataProvider(const UForcePointDataProvider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UForcePointDataProvider); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UForcePointDataProvider); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UForcePointDataProvider)


#define REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_ForcePointDataProvider_h_9_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUForcePointDataProvider(); \
	friend struct Z_Construct_UClass_UForcePointDataProvider_Statics; \
public: \
	DECLARE_CLASS(UForcePointDataProvider, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/CascadeExtensionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UForcePointDataProvider)


#define REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_ForcePointDataProvider_h_9_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_ForcePointDataProvider_h_9_GENERATED_UINTERFACE_BODY() \
	REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_ForcePointDataProvider_h_9_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_ForcePointDataProvider_h_9_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_ForcePointDataProvider_h_9_GENERATED_UINTERFACE_BODY() \
	REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_ForcePointDataProvider_h_9_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_ForcePointDataProvider_h_9_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IForcePointDataProvider() {} \
public: \
	typedef UForcePointDataProvider UClassType; \
	typedef IForcePointDataProvider ThisClass; \
	static FForcePoints Execute_GetForcePoints(const UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_ForcePointDataProvider_h_9_INCLASS_IINTERFACE \
protected: \
	virtual ~IForcePointDataProvider() {} \
public: \
	typedef UForcePointDataProvider UClassType; \
	typedef IForcePointDataProvider ThisClass; \
	static FForcePoints Execute_GetForcePoints(const UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_ForcePointDataProvider_h_7_PROLOG \
	REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_ForcePointDataProvider_h_9_EVENT_PARMS


#define REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_ForcePointDataProvider_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_ForcePointDataProvider_h_9_SPARSE_DATA \
	REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_ForcePointDataProvider_h_9_RPC_WRAPPERS \
	REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_ForcePointDataProvider_h_9_CALLBACK_WRAPPERS \
	REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_ForcePointDataProvider_h_9_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_ForcePointDataProvider_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_ForcePointDataProvider_h_9_SPARSE_DATA \
	REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_ForcePointDataProvider_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_ForcePointDataProvider_h_9_CALLBACK_WRAPPERS \
	REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_ForcePointDataProvider_h_9_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CASCADEEXTENSIONPLUGIN_API UClass* StaticClass<class UForcePointDataProvider>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_ForcePointDataProvider_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
