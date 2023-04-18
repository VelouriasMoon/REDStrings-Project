// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UASSMTransitionNode;
class UASTransition_Base;
#ifdef ACTIONSYSTEM_ASSMTransitionNodeInterface_generated_h
#error "ASSMTransitionNodeInterface.generated.h already included, missing '#pragma once' in ASSMTransitionNodeInterface.h"
#endif
#define ACTIONSYSTEM_ASSMTransitionNodeInterface_generated_h

#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASSMTransitionNodeInterface_h_11_SPARSE_DATA
#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASSMTransitionNodeInterface_h_11_RPC_WRAPPERS \
	virtual void MakeRulesShareable_Implementation(UASSMTransitionNode* Caller, TArray<int32>& Remap) {}; \
	virtual void PropagateRulesSettings_Implementation(UASSMTransitionNode* Caller, int32 SharedRulesIdx) {}; \
	virtual bool TransferSharedCustomRules_Implementation(UASSMTransitionNode* Caller, UASTransition_Base* Custom, int32 SharedRulesIdx) { return false; }; \
 \
	DECLARE_FUNCTION(execMakeRulesShareable); \
	DECLARE_FUNCTION(execPropagateRulesSettings); \
	DECLARE_FUNCTION(execTransferSharedCustomRules);


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASSMTransitionNodeInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MakeRulesShareable_Implementation(UASSMTransitionNode* Caller, TArray<int32>& Remap) {}; \
	virtual void PropagateRulesSettings_Implementation(UASSMTransitionNode* Caller, int32 SharedRulesIdx) {}; \
	virtual bool TransferSharedCustomRules_Implementation(UASSMTransitionNode* Caller, UASTransition_Base* Custom, int32 SharedRulesIdx) { return false; }; \
 \
	DECLARE_FUNCTION(execMakeRulesShareable); \
	DECLARE_FUNCTION(execPropagateRulesSettings); \
	DECLARE_FUNCTION(execTransferSharedCustomRules);


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASSMTransitionNodeInterface_h_11_EVENT_PARMS \
	struct ASSMTransitionNodeInterface_eventMakeRulesShareable_Parms \
	{ \
		UASSMTransitionNode* Caller; \
		TArray<int32> Remap; \
	}; \
	struct ASSMTransitionNodeInterface_eventPropagateRulesSettings_Parms \
	{ \
		UASSMTransitionNode* Caller; \
		int32 SharedRulesIdx; \
	}; \
	struct ASSMTransitionNodeInterface_eventTransferSharedCustomRules_Parms \
	{ \
		UASSMTransitionNode* Caller; \
		UASTransition_Base* Custom; \
		int32 SharedRulesIdx; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ASSMTransitionNodeInterface_eventTransferSharedCustomRules_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASSMTransitionNodeInterface_h_11_CALLBACK_WRAPPERS
#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASSMTransitionNodeInterface_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UASSMTransitionNodeInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UASSMTransitionNodeInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UASSMTransitionNodeInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UASSMTransitionNodeInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UASSMTransitionNodeInterface(UASSMTransitionNodeInterface&&); \
	NO_API UASSMTransitionNodeInterface(const UASSMTransitionNodeInterface&); \
public:


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASSMTransitionNodeInterface_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UASSMTransitionNodeInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UASSMTransitionNodeInterface(UASSMTransitionNodeInterface&&); \
	NO_API UASSMTransitionNodeInterface(const UASSMTransitionNodeInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UASSMTransitionNodeInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UASSMTransitionNodeInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UASSMTransitionNodeInterface)


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASSMTransitionNodeInterface_h_11_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUASSMTransitionNodeInterface(); \
	friend struct Z_Construct_UClass_UASSMTransitionNodeInterface_Statics; \
public: \
	DECLARE_CLASS(UASSMTransitionNodeInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ActionSystem"), NO_API) \
	DECLARE_SERIALIZER(UASSMTransitionNodeInterface)


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASSMTransitionNodeInterface_h_11_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASSMTransitionNodeInterface_h_11_GENERATED_UINTERFACE_BODY() \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASSMTransitionNodeInterface_h_11_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASSMTransitionNodeInterface_h_11_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASSMTransitionNodeInterface_h_11_GENERATED_UINTERFACE_BODY() \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASSMTransitionNodeInterface_h_11_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASSMTransitionNodeInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IASSMTransitionNodeInterface() {} \
public: \
	typedef UASSMTransitionNodeInterface UClassType; \
	typedef IASSMTransitionNodeInterface ThisClass; \
	static void Execute_MakeRulesShareable(UObject* O, UASSMTransitionNode* Caller, TArray<int32>& Remap); \
	static void Execute_PropagateRulesSettings(UObject* O, UASSMTransitionNode* Caller, int32 SharedRulesIdx); \
	static bool Execute_TransferSharedCustomRules(UObject* O, UASSMTransitionNode* Caller, UASTransition_Base* Custom, int32 SharedRulesIdx); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASSMTransitionNodeInterface_h_11_INCLASS_IINTERFACE \
protected: \
	virtual ~IASSMTransitionNodeInterface() {} \
public: \
	typedef UASSMTransitionNodeInterface UClassType; \
	typedef IASSMTransitionNodeInterface ThisClass; \
	static void Execute_MakeRulesShareable(UObject* O, UASSMTransitionNode* Caller, TArray<int32>& Remap); \
	static void Execute_PropagateRulesSettings(UObject* O, UASSMTransitionNode* Caller, int32 SharedRulesIdx); \
	static bool Execute_TransferSharedCustomRules(UObject* O, UASSMTransitionNode* Caller, UASTransition_Base* Custom, int32 SharedRulesIdx); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASSMTransitionNodeInterface_h_9_PROLOG \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASSMTransitionNodeInterface_h_11_EVENT_PARMS


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASSMTransitionNodeInterface_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASSMTransitionNodeInterface_h_11_SPARSE_DATA \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASSMTransitionNodeInterface_h_11_RPC_WRAPPERS \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASSMTransitionNodeInterface_h_11_CALLBACK_WRAPPERS \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASSMTransitionNodeInterface_h_11_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASSMTransitionNodeInterface_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASSMTransitionNodeInterface_h_11_SPARSE_DATA \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASSMTransitionNodeInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASSMTransitionNodeInterface_h_11_CALLBACK_WRAPPERS \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASSMTransitionNodeInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONSYSTEM_API UClass* StaticClass<class UASSMTransitionNodeInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASSMTransitionNodeInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
