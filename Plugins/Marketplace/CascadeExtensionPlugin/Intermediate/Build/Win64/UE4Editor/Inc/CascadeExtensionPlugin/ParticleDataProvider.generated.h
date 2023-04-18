// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FParticleProperties;
#ifdef CASCADEEXTENSIONPLUGIN_ParticleDataProvider_generated_h
#error "ParticleDataProvider.generated.h already included, missing '#pragma once' in ParticleDataProvider.h"
#endif
#define CASCADEEXTENSIONPLUGIN_ParticleDataProvider_generated_h

#define REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_ParticleDataProvider_h_9_SPARSE_DATA
#define REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_ParticleDataProvider_h_9_RPC_WRAPPERS \
	virtual FParticleProperties SpawnParticle_Implementation(FParticleProperties currentParticleProperties) const { return FParticleProperties(); }; \
	virtual FParticleProperties UpdateParticle_Implementation(FParticleProperties currentParticleProperties) const { return FParticleProperties(); }; \
 \
	DECLARE_FUNCTION(execSpawnParticle); \
	DECLARE_FUNCTION(execUpdateParticle);


#define REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_ParticleDataProvider_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual FParticleProperties SpawnParticle_Implementation(FParticleProperties currentParticleProperties) const { return FParticleProperties(); }; \
	virtual FParticleProperties UpdateParticle_Implementation(FParticleProperties currentParticleProperties) const { return FParticleProperties(); }; \
 \
	DECLARE_FUNCTION(execSpawnParticle); \
	DECLARE_FUNCTION(execUpdateParticle);


#define REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_ParticleDataProvider_h_9_EVENT_PARMS \
	struct ParticleDataProvider_eventSpawnParticle_Parms \
	{ \
		FParticleProperties currentParticleProperties; \
		FParticleProperties ReturnValue; \
	}; \
	struct ParticleDataProvider_eventUpdateParticle_Parms \
	{ \
		FParticleProperties currentParticleProperties; \
		FParticleProperties ReturnValue; \
	};


#define REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_ParticleDataProvider_h_9_CALLBACK_WRAPPERS
#define REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_ParticleDataProvider_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParticleDataProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleDataProvider) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParticleDataProvider); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleDataProvider); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UParticleDataProvider(UParticleDataProvider&&); \
	NO_API UParticleDataProvider(const UParticleDataProvider&); \
public:


#define REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_ParticleDataProvider_h_9_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParticleDataProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UParticleDataProvider(UParticleDataProvider&&); \
	NO_API UParticleDataProvider(const UParticleDataProvider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParticleDataProvider); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleDataProvider); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleDataProvider)


#define REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_ParticleDataProvider_h_9_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUParticleDataProvider(); \
	friend struct Z_Construct_UClass_UParticleDataProvider_Statics; \
public: \
	DECLARE_CLASS(UParticleDataProvider, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/CascadeExtensionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UParticleDataProvider)


#define REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_ParticleDataProvider_h_9_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_ParticleDataProvider_h_9_GENERATED_UINTERFACE_BODY() \
	REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_ParticleDataProvider_h_9_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_ParticleDataProvider_h_9_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_ParticleDataProvider_h_9_GENERATED_UINTERFACE_BODY() \
	REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_ParticleDataProvider_h_9_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_ParticleDataProvider_h_9_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IParticleDataProvider() {} \
public: \
	typedef UParticleDataProvider UClassType; \
	typedef IParticleDataProvider ThisClass; \
	static FParticleProperties Execute_SpawnParticle(const UObject* O, FParticleProperties currentParticleProperties); \
	static FParticleProperties Execute_UpdateParticle(const UObject* O, FParticleProperties currentParticleProperties); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_ParticleDataProvider_h_9_INCLASS_IINTERFACE \
protected: \
	virtual ~IParticleDataProvider() {} \
public: \
	typedef UParticleDataProvider UClassType; \
	typedef IParticleDataProvider ThisClass; \
	static FParticleProperties Execute_SpawnParticle(const UObject* O, FParticleProperties currentParticleProperties); \
	static FParticleProperties Execute_UpdateParticle(const UObject* O, FParticleProperties currentParticleProperties); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_ParticleDataProvider_h_7_PROLOG \
	REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_ParticleDataProvider_h_9_EVENT_PARMS


#define REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_ParticleDataProvider_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_ParticleDataProvider_h_9_SPARSE_DATA \
	REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_ParticleDataProvider_h_9_RPC_WRAPPERS \
	REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_ParticleDataProvider_h_9_CALLBACK_WRAPPERS \
	REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_ParticleDataProvider_h_9_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_ParticleDataProvider_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_ParticleDataProvider_h_9_SPARSE_DATA \
	REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_ParticleDataProvider_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_ParticleDataProvider_h_9_CALLBACK_WRAPPERS \
	REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_ParticleDataProvider_h_9_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CASCADEEXTENSIONPLUGIN_API UClass* StaticClass<class UParticleDataProvider>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_ParticleDataProvider_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
