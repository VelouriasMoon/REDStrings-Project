// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UHorizonButtonUserWidget;
struct FFocusEvent;
#ifdef HORIZONUI_HorizonButtonUserWidget_generated_h
#error "HorizonButtonUserWidget.generated.h already included, missing '#pragma once' in HorizonButtonUserWidget.h"
#endif
#define HORIZONUI_HorizonButtonUserWidget_generated_h

#define REDStrings_Plugins_Marketplace_HorizonUIPlugin_Source_HorizonUIPlugin_Public_HorizonButtonUserWidget_h_18_DELEGATE \
struct HorizonButtonUserWidget_eventOnHorizonButtonEvent_Parms \
{ \
	UHorizonButtonUserWidget* InButton; \
}; \
static inline void FOnHorizonButtonEvent_DelegateWrapper(const FMulticastScriptDelegate& OnHorizonButtonEvent, UHorizonButtonUserWidget* InButton) \
{ \
	HorizonButtonUserWidget_eventOnHorizonButtonEvent_Parms Parms; \
	Parms.InButton=InButton; \
	OnHorizonButtonEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define REDStrings_Plugins_Marketplace_HorizonUIPlugin_Source_HorizonUIPlugin_Public_HorizonButtonUserWidget_h_17_DELEGATE \
struct HorizonButtonUserWidget_eventOnHorizonButtonFocusEvent_Parms \
{ \
	UHorizonButtonUserWidget* InButton; \
	FFocusEvent InFocusEvent; \
}; \
static inline void FOnHorizonButtonFocusEvent_DelegateWrapper(const FMulticastScriptDelegate& OnHorizonButtonFocusEvent, UHorizonButtonUserWidget* InButton, FFocusEvent const& InFocusEvent) \
{ \
	HorizonButtonUserWidget_eventOnHorizonButtonFocusEvent_Parms Parms; \
	Parms.InButton=InButton; \
	Parms.InFocusEvent=InFocusEvent; \
	OnHorizonButtonFocusEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define REDStrings_Plugins_Marketplace_HorizonUIPlugin_Source_HorizonUIPlugin_Public_HorizonButtonUserWidget_h_15_SPARSE_DATA
#define REDStrings_Plugins_Marketplace_HorizonUIPlugin_Source_HorizonUIPlugin_Public_HorizonButtonUserWidget_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execNativeOnButtonClicked); \
	DECLARE_FUNCTION(execNativeOnButtonHovered); \
	DECLARE_FUNCTION(execNativeOnButtonPressed); \
	DECLARE_FUNCTION(execNativeOnButtonReleased); \
	DECLARE_FUNCTION(execNativeOnButtonUnhovered);


#define REDStrings_Plugins_Marketplace_HorizonUIPlugin_Source_HorizonUIPlugin_Public_HorizonButtonUserWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execNativeOnButtonClicked); \
	DECLARE_FUNCTION(execNativeOnButtonHovered); \
	DECLARE_FUNCTION(execNativeOnButtonPressed); \
	DECLARE_FUNCTION(execNativeOnButtonReleased); \
	DECLARE_FUNCTION(execNativeOnButtonUnhovered);


#define REDStrings_Plugins_Marketplace_HorizonUIPlugin_Source_HorizonUIPlugin_Public_HorizonButtonUserWidget_h_15_EVENT_PARMS \
	struct HorizonButtonUserWidget_eventReceiveOnButtonFocus_Parms \
	{ \
		FFocusEvent InFocusEvent; \
	}; \
	struct HorizonButtonUserWidget_eventReceiveOnOnButtonFocusLost_Parms \
	{ \
		FFocusEvent InFocusEvent; \
	};


#define REDStrings_Plugins_Marketplace_HorizonUIPlugin_Source_HorizonUIPlugin_Public_HorizonButtonUserWidget_h_15_CALLBACK_WRAPPERS
#define REDStrings_Plugins_Marketplace_HorizonUIPlugin_Source_HorizonUIPlugin_Public_HorizonButtonUserWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHorizonButtonUserWidget(); \
	friend struct Z_Construct_UClass_UHorizonButtonUserWidget_Statics; \
public: \
	DECLARE_CLASS(UHorizonButtonUserWidget, UHorizonDesignableUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HorizonUI"), NO_API) \
	DECLARE_SERIALIZER(UHorizonButtonUserWidget)


#define REDStrings_Plugins_Marketplace_HorizonUIPlugin_Source_HorizonUIPlugin_Public_HorizonButtonUserWidget_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUHorizonButtonUserWidget(); \
	friend struct Z_Construct_UClass_UHorizonButtonUserWidget_Statics; \
public: \
	DECLARE_CLASS(UHorizonButtonUserWidget, UHorizonDesignableUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HorizonUI"), NO_API) \
	DECLARE_SERIALIZER(UHorizonButtonUserWidget)


#define REDStrings_Plugins_Marketplace_HorizonUIPlugin_Source_HorizonUIPlugin_Public_HorizonButtonUserWidget_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHorizonButtonUserWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHorizonButtonUserWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHorizonButtonUserWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHorizonButtonUserWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHorizonButtonUserWidget(UHorizonButtonUserWidget&&); \
	NO_API UHorizonButtonUserWidget(const UHorizonButtonUserWidget&); \
public:


#define REDStrings_Plugins_Marketplace_HorizonUIPlugin_Source_HorizonUIPlugin_Public_HorizonButtonUserWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHorizonButtonUserWidget(UHorizonButtonUserWidget&&); \
	NO_API UHorizonButtonUserWidget(const UHorizonButtonUserWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHorizonButtonUserWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHorizonButtonUserWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHorizonButtonUserWidget)


#define REDStrings_Plugins_Marketplace_HorizonUIPlugin_Source_HorizonUIPlugin_Public_HorizonButtonUserWidget_h_15_PRIVATE_PROPERTY_OFFSET
#define REDStrings_Plugins_Marketplace_HorizonUIPlugin_Source_HorizonUIPlugin_Public_HorizonButtonUserWidget_h_13_PROLOG \
	REDStrings_Plugins_Marketplace_HorizonUIPlugin_Source_HorizonUIPlugin_Public_HorizonButtonUserWidget_h_15_EVENT_PARMS


#define REDStrings_Plugins_Marketplace_HorizonUIPlugin_Source_HorizonUIPlugin_Public_HorizonButtonUserWidget_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	REDStrings_Plugins_Marketplace_HorizonUIPlugin_Source_HorizonUIPlugin_Public_HorizonButtonUserWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	REDStrings_Plugins_Marketplace_HorizonUIPlugin_Source_HorizonUIPlugin_Public_HorizonButtonUserWidget_h_15_SPARSE_DATA \
	REDStrings_Plugins_Marketplace_HorizonUIPlugin_Source_HorizonUIPlugin_Public_HorizonButtonUserWidget_h_15_RPC_WRAPPERS \
	REDStrings_Plugins_Marketplace_HorizonUIPlugin_Source_HorizonUIPlugin_Public_HorizonButtonUserWidget_h_15_CALLBACK_WRAPPERS \
	REDStrings_Plugins_Marketplace_HorizonUIPlugin_Source_HorizonUIPlugin_Public_HorizonButtonUserWidget_h_15_INCLASS \
	REDStrings_Plugins_Marketplace_HorizonUIPlugin_Source_HorizonUIPlugin_Public_HorizonButtonUserWidget_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define REDStrings_Plugins_Marketplace_HorizonUIPlugin_Source_HorizonUIPlugin_Public_HorizonButtonUserWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	REDStrings_Plugins_Marketplace_HorizonUIPlugin_Source_HorizonUIPlugin_Public_HorizonButtonUserWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	REDStrings_Plugins_Marketplace_HorizonUIPlugin_Source_HorizonUIPlugin_Public_HorizonButtonUserWidget_h_15_SPARSE_DATA \
	REDStrings_Plugins_Marketplace_HorizonUIPlugin_Source_HorizonUIPlugin_Public_HorizonButtonUserWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	REDStrings_Plugins_Marketplace_HorizonUIPlugin_Source_HorizonUIPlugin_Public_HorizonButtonUserWidget_h_15_CALLBACK_WRAPPERS \
	REDStrings_Plugins_Marketplace_HorizonUIPlugin_Source_HorizonUIPlugin_Public_HorizonButtonUserWidget_h_15_INCLASS_NO_PURE_DECLS \
	REDStrings_Plugins_Marketplace_HorizonUIPlugin_Source_HorizonUIPlugin_Public_HorizonButtonUserWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HORIZONUI_API UClass* StaticClass<class UHorizonButtonUserWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID REDStrings_Plugins_Marketplace_HorizonUIPlugin_Source_HorizonUIPlugin_Public_HorizonButtonUserWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
