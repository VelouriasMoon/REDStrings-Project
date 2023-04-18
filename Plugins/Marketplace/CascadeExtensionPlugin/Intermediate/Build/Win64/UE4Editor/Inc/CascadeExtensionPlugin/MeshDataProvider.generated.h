// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMeshTriangleData;
#ifdef CASCADEEXTENSIONPLUGIN_MeshDataProvider_generated_h
#error "MeshDataProvider.generated.h already included, missing '#pragma once' in MeshDataProvider.h"
#endif
#define CASCADEEXTENSIONPLUGIN_MeshDataProvider_generated_h

#define REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_MeshDataProvider_h_9_SPARSE_DATA
#define REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_MeshDataProvider_h_9_RPC_WRAPPERS \
	virtual int32 GetDataRevision_Implementation() const { return 0; }; \
	virtual FMeshTriangleData GetMeshTriangleData_Implementation() const { return FMeshTriangleData(); }; \
 \
	DECLARE_FUNCTION(execGetDataRevision); \
	DECLARE_FUNCTION(execGetMeshTriangleData);


#define REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_MeshDataProvider_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual int32 GetDataRevision_Implementation() const { return 0; }; \
	virtual FMeshTriangleData GetMeshTriangleData_Implementation() const { return FMeshTriangleData(); }; \
 \
	DECLARE_FUNCTION(execGetDataRevision); \
	DECLARE_FUNCTION(execGetMeshTriangleData);


#define REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_MeshDataProvider_h_9_EVENT_PARMS \
	struct MeshDataProvider_eventGetDataRevision_Parms \
	{ \
		int32 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MeshDataProvider_eventGetDataRevision_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct MeshDataProvider_eventGetMeshTriangleData_Parms \
	{ \
		FMeshTriangleData ReturnValue; \
	};


#define REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_MeshDataProvider_h_9_CALLBACK_WRAPPERS
#define REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_MeshDataProvider_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMeshDataProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMeshDataProvider) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMeshDataProvider); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeshDataProvider); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMeshDataProvider(UMeshDataProvider&&); \
	NO_API UMeshDataProvider(const UMeshDataProvider&); \
public:


#define REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_MeshDataProvider_h_9_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMeshDataProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMeshDataProvider(UMeshDataProvider&&); \
	NO_API UMeshDataProvider(const UMeshDataProvider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMeshDataProvider); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeshDataProvider); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMeshDataProvider)


#define REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_MeshDataProvider_h_9_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMeshDataProvider(); \
	friend struct Z_Construct_UClass_UMeshDataProvider_Statics; \
public: \
	DECLARE_CLASS(UMeshDataProvider, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/CascadeExtensionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UMeshDataProvider)


#define REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_MeshDataProvider_h_9_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_MeshDataProvider_h_9_GENERATED_UINTERFACE_BODY() \
	REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_MeshDataProvider_h_9_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_MeshDataProvider_h_9_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_MeshDataProvider_h_9_GENERATED_UINTERFACE_BODY() \
	REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_MeshDataProvider_h_9_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_MeshDataProvider_h_9_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMeshDataProvider() {} \
public: \
	typedef UMeshDataProvider UClassType; \
	typedef IMeshDataProvider ThisClass; \
	static int32 Execute_GetDataRevision(const UObject* O); \
	static FMeshTriangleData Execute_GetMeshTriangleData(const UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_MeshDataProvider_h_9_INCLASS_IINTERFACE \
protected: \
	virtual ~IMeshDataProvider() {} \
public: \
	typedef UMeshDataProvider UClassType; \
	typedef IMeshDataProvider ThisClass; \
	static int32 Execute_GetDataRevision(const UObject* O); \
	static FMeshTriangleData Execute_GetMeshTriangleData(const UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_MeshDataProvider_h_7_PROLOG \
	REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_MeshDataProvider_h_9_EVENT_PARMS


#define REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_MeshDataProvider_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_MeshDataProvider_h_9_SPARSE_DATA \
	REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_MeshDataProvider_h_9_RPC_WRAPPERS \
	REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_MeshDataProvider_h_9_CALLBACK_WRAPPERS \
	REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_MeshDataProvider_h_9_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_MeshDataProvider_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_MeshDataProvider_h_9_SPARSE_DATA \
	REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_MeshDataProvider_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_MeshDataProvider_h_9_CALLBACK_WRAPPERS \
	REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_MeshDataProvider_h_9_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CASCADEEXTENSIONPLUGIN_API UClass* StaticClass<class UMeshDataProvider>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID REDStrings_Plugins_Marketplace_CascadeExtensionPlugin_Source_CascadeExtensionPlugin_Public_MeshDataProvider_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
