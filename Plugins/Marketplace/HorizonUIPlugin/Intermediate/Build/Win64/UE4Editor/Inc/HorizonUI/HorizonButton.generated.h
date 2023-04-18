// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UHorizonButton;
#ifdef HORIZONUI_HorizonButton_generated_h
#error "HorizonButton.generated.h already included, missing '#pragma once' in HorizonButton.h"
#endif
#define HORIZONUI_HorizonButton_generated_h

#define REDStrings_Plugins_Marketplace_HorizonUIPlugin_Source_HorizonUIPlugin_Public_HorizonButton_h_12_DELEGATE \
struct HorizonButton_eventOnHorizonButtonEvent_Parms \
{ \
	UHorizonButton* Button; \
}; \
static inline void FOnHorizonButtonEvent_DelegateWrapper(const FMulticastScriptDelegate& OnHorizonButtonEvent, UHorizonButton* Button) \
{ \
	HorizonButton_eventOnHorizonButtonEvent_Parms Parms; \
	Parms.Button=Button; \
	OnHorizonButtonEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define REDStrings_Plugins_Marketplace_HorizonUIPlugin_Source_HorizonUIPlugin_Public_HorizonButton_h_10_SPARSE_DATA
#define REDStrings_Plugins_Marketplace_HorizonUIPlugin_Source_HorizonUIPlugin_Public_HorizonButton_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnClickedButton); \
	DECLARE_FUNCTION(execOnHoveredButton); \
	DECLARE_FUNCTION(execOnPressedButton); \
	DECLARE_FUNCTION(execOnReleasedButton); \
	DECLARE_FUNCTION(execOnUnhoveredButton);


#define REDStrings_Plugins_Marketplace_HorizonUIPlugin_Source_HorizonUIPlugin_Public_HorizonButton_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnClickedButton); \
	DECLARE_FUNCTION(execOnHoveredButton); \
	DECLARE_FUNCTION(execOnPressedButton); \
	DECLARE_FUNCTION(execOnReleasedButton); \
	DECLARE_FUNCTION(execOnUnhoveredButton);


#define REDStrings_Plugins_Marketplace_HorizonUIPlugin_Source_HorizonUIPlugin_Public_HorizonButton_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHorizonButton(); \
	friend struct Z_Construct_UClass_UHorizonButton_Statics; \
public: \
	DECLARE_CLASS(UHorizonButton, UButton, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HorizonUI"), NO_API) \
	DECLARE_SERIALIZER(UHorizonButton)


#define REDStrings_Plugins_Marketplace_HorizonUIPlugin_Source_HorizonUIPlugin_Public_HorizonButton_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUHorizonButton(); \
	friend struct Z_Construct_UClass_UHorizonButton_Statics; \
public: \
	DECLARE_CLASS(UHorizonButton, UButton, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HorizonUI"), NO_API) \
	DECLARE_SERIALIZER(UHorizonButton)


#define REDStrings_Plugins_Marketplace_HorizonUIPlugin_Source_HorizonUIPlugin_Public_HorizonButton_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHorizonButton(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHorizonButton) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHorizonButton); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHorizonButton); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHorizonButton(UHorizonButton&&); \
	NO_API UHorizonButton(const UHorizonButton&); \
public:


#define REDStrings_Plugins_Marketplace_HorizonUIPlugin_Source_HorizonUIPlugin_Public_HorizonButton_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHorizonButton(UHorizonButton&&); \
	NO_API UHorizonButton(const UHorizonButton&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHorizonButton); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHorizonButton); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHorizonButton)


#define REDStrings_Plugins_Marketplace_HorizonUIPlugin_Source_HorizonUIPlugin_Public_HorizonButton_h_10_PRIVATE_PROPERTY_OFFSET
#define REDStrings_Plugins_Marketplace_HorizonUIPlugin_Source_HorizonUIPlugin_Public_HorizonButton_h_8_PROLOG
#define REDStrings_Plugins_Marketplace_HorizonUIPlugin_Source_HorizonUIPlugin_Public_HorizonButton_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	REDStrings_Plugins_Marketplace_HorizonUIPlugin_Source_HorizonUIPlugin_Public_HorizonButton_h_10_PRIVATE_PROPERTY_OFFSET \
	REDStrings_Plugins_Marketplace_HorizonUIPlugin_Source_HorizonUIPlugin_Public_HorizonButton_h_10_SPARSE_DATA \
	REDStrings_Plugins_Marketplace_HorizonUIPlugin_Source_HorizonUIPlugin_Public_HorizonButton_h_10_RPC_WRAPPERS \
	REDStrings_Plugins_Marketplace_HorizonUIPlugin_Source_HorizonUIPlugin_Public_HorizonButton_h_10_INCLASS \
	REDStrings_Plugins_Marketplace_HorizonUIPlugin_Source_HorizonUIPlugin_Public_HorizonButton_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define REDStrings_Plugins_Marketplace_HorizonUIPlugin_Source_HorizonUIPlugin_Public_HorizonButton_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	REDStrings_Plugins_Marketplace_HorizonUIPlugin_Source_HorizonUIPlugin_Public_HorizonButton_h_10_PRIVATE_PROPERTY_OFFSET \
	REDStrings_Plugins_Marketplace_HorizonUIPlugin_Source_HorizonUIPlugin_Public_HorizonButton_h_10_SPARSE_DATA \
	REDStrings_Plugins_Marketplace_HorizonUIPlugin_Source_HorizonUIPlugin_Public_HorizonButton_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	REDStrings_Plugins_Marketplace_HorizonUIPlugin_Source_HorizonUIPlugin_Public_HorizonButton_h_10_INCLASS_NO_PURE_DECLS \
	REDStrings_Plugins_Marketplace_HorizonUIPlugin_Source_HorizonUIPlugin_Public_HorizonButton_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HORIZONUI_API UClass* StaticClass<class UHorizonButton>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID REDStrings_Plugins_Marketplace_HorizonUIPlugin_Source_HorizonUIPlugin_Public_HorizonButton_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
