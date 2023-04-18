// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef ACTIONSYSTEM_ASCollisionInterface_generated_h
#error "ASCollisionInterface.generated.h already included, missing '#pragma once' in ASCollisionInterface.h"
#endif
#define ACTIONSYSTEM_ASCollisionInterface_generated_h

#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCollisionInterface_h_12_SPARSE_DATA
#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCollisionInterface_h_12_RPC_WRAPPERS \
	virtual bool OnAttackOverlapCallback_Implementation(UPrimitiveComponent* MyComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FHitResult const& SweepResult) { return false; }; \
 \
	DECLARE_FUNCTION(execOnAttackOverlapCallback);


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCollisionInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool OnAttackOverlapCallback_Implementation(UPrimitiveComponent* MyComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FHitResult const& SweepResult) { return false; }; \
 \
	DECLARE_FUNCTION(execOnAttackOverlapCallback);


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCollisionInterface_h_12_EVENT_PARMS \
	struct ASCollisionInterface_eventOnAttackOverlapCallback_Parms \
	{ \
		UPrimitiveComponent* MyComp; \
		AActor* OtherActor; \
		UPrimitiveComponent* OtherComp; \
		FHitResult SweepResult; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ASCollisionInterface_eventOnAttackOverlapCallback_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCollisionInterface_h_12_CALLBACK_WRAPPERS
#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCollisionInterface_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UASCollisionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UASCollisionInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UASCollisionInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UASCollisionInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UASCollisionInterface(UASCollisionInterface&&); \
	NO_API UASCollisionInterface(const UASCollisionInterface&); \
public:


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCollisionInterface_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UASCollisionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UASCollisionInterface(UASCollisionInterface&&); \
	NO_API UASCollisionInterface(const UASCollisionInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UASCollisionInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UASCollisionInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UASCollisionInterface)


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCollisionInterface_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUASCollisionInterface(); \
	friend struct Z_Construct_UClass_UASCollisionInterface_Statics; \
public: \
	DECLARE_CLASS(UASCollisionInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ActionSystem"), NO_API) \
	DECLARE_SERIALIZER(UASCollisionInterface)


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCollisionInterface_h_12_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCollisionInterface_h_12_GENERATED_UINTERFACE_BODY() \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCollisionInterface_h_12_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCollisionInterface_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCollisionInterface_h_12_GENERATED_UINTERFACE_BODY() \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCollisionInterface_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCollisionInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IASCollisionInterface() {} \
public: \
	typedef UASCollisionInterface UClassType; \
	typedef IASCollisionInterface ThisClass; \
	static bool Execute_OnAttackOverlapCallback(UObject* O, UPrimitiveComponent* MyComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FHitResult const& SweepResult); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCollisionInterface_h_12_INCLASS_IINTERFACE \
protected: \
	virtual ~IASCollisionInterface() {} \
public: \
	typedef UASCollisionInterface UClassType; \
	typedef IASCollisionInterface ThisClass; \
	static bool Execute_OnAttackOverlapCallback(UObject* O, UPrimitiveComponent* MyComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FHitResult const& SweepResult); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCollisionInterface_h_10_PROLOG \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCollisionInterface_h_12_EVENT_PARMS


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCollisionInterface_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCollisionInterface_h_12_SPARSE_DATA \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCollisionInterface_h_12_RPC_WRAPPERS \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCollisionInterface_h_12_CALLBACK_WRAPPERS \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCollisionInterface_h_12_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCollisionInterface_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCollisionInterface_h_12_SPARSE_DATA \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCollisionInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCollisionInterface_h_12_CALLBACK_WRAPPERS \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCollisionInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONSYSTEM_API UClass* StaticClass<class UASCollisionInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCollisionInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
