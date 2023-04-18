// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACTIONSYSTEM_ASSMStateMachineInterface_generated_h
#error "ASSMStateMachineInterface.generated.h already included, missing '#pragma once' in ASSMStateMachineInterface.h"
#endif
#define ACTIONSYSTEM_ASSMStateMachineInterface_generated_h

#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASSMStateMachineInterface_h_8_SPARSE_DATA
#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASSMStateMachineInterface_h_8_RPC_WRAPPERS
#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASSMStateMachineInterface_h_8_RPC_WRAPPERS_NO_PURE_DECLS
#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASSMStateMachineInterface_h_8_EVENT_PARMS \
	struct ASSMStateMachineInterface_eventGetAndUpdateContinuousSameDamageReaction_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ASSMStateMachineInterface_eventGetAndUpdateContinuousSameDamageReaction_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ASSMStateMachineInterface_eventIsNeedResetStateMachine_Parms \
	{ \
		float ElapsedTime; \
		float ResetSecond; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ASSMStateMachineInterface_eventIsNeedResetStateMachine_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ASSMStateMachineInterface_eventUpdatePreviousElapsedTime_Parms \
	{ \
		float ElapsedTime; \
	};


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASSMStateMachineInterface_h_8_CALLBACK_WRAPPERS
#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASSMStateMachineInterface_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UASSMStateMachineInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UASSMStateMachineInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UASSMStateMachineInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UASSMStateMachineInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UASSMStateMachineInterface(UASSMStateMachineInterface&&); \
	NO_API UASSMStateMachineInterface(const UASSMStateMachineInterface&); \
public:


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASSMStateMachineInterface_h_8_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UASSMStateMachineInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UASSMStateMachineInterface(UASSMStateMachineInterface&&); \
	NO_API UASSMStateMachineInterface(const UASSMStateMachineInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UASSMStateMachineInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UASSMStateMachineInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UASSMStateMachineInterface)


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASSMStateMachineInterface_h_8_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUASSMStateMachineInterface(); \
	friend struct Z_Construct_UClass_UASSMStateMachineInterface_Statics; \
public: \
	DECLARE_CLASS(UASSMStateMachineInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ActionSystem"), NO_API) \
	DECLARE_SERIALIZER(UASSMStateMachineInterface)


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASSMStateMachineInterface_h_8_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASSMStateMachineInterface_h_8_GENERATED_UINTERFACE_BODY() \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASSMStateMachineInterface_h_8_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASSMStateMachineInterface_h_8_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASSMStateMachineInterface_h_8_GENERATED_UINTERFACE_BODY() \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASSMStateMachineInterface_h_8_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASSMStateMachineInterface_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IASSMStateMachineInterface() {} \
public: \
	typedef UASSMStateMachineInterface UClassType; \
	typedef IASSMStateMachineInterface ThisClass; \
	static void Execute_AddResetSecondRate(UObject* O); \
	static bool Execute_GetAndUpdateContinuousSameDamageReaction(UObject* O); \
	static bool Execute_IsNeedResetStateMachine(UObject* O, float ElapsedTime, float ResetSecond); \
	static void Execute_UpdatePreviousElapsedTime(UObject* O, float ElapsedTime); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASSMStateMachineInterface_h_8_INCLASS_IINTERFACE \
protected: \
	virtual ~IASSMStateMachineInterface() {} \
public: \
	typedef UASSMStateMachineInterface UClassType; \
	typedef IASSMStateMachineInterface ThisClass; \
	static void Execute_AddResetSecondRate(UObject* O); \
	static bool Execute_GetAndUpdateContinuousSameDamageReaction(UObject* O); \
	static bool Execute_IsNeedResetStateMachine(UObject* O, float ElapsedTime, float ResetSecond); \
	static void Execute_UpdatePreviousElapsedTime(UObject* O, float ElapsedTime); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASSMStateMachineInterface_h_6_PROLOG \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASSMStateMachineInterface_h_8_EVENT_PARMS


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASSMStateMachineInterface_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASSMStateMachineInterface_h_8_SPARSE_DATA \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASSMStateMachineInterface_h_8_RPC_WRAPPERS \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASSMStateMachineInterface_h_8_CALLBACK_WRAPPERS \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASSMStateMachineInterface_h_8_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASSMStateMachineInterface_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASSMStateMachineInterface_h_8_SPARSE_DATA \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASSMStateMachineInterface_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASSMStateMachineInterface_h_8_CALLBACK_WRAPPERS \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASSMStateMachineInterface_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONSYSTEM_API UClass* StaticClass<class UASSMStateMachineInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASSMStateMachineInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
