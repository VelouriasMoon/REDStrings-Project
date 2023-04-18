// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHorizonDialogueBlockInfo;
struct FHorizonDialogueSegmentInfo;
struct FHorizonDialogueDialoguePageResult;
struct FHorizonDialogueHypertextResult;
struct FSlateColor;
struct FSlateFontInfo;
struct FLinearColor;
struct FVector2D;
#ifdef HORIZONUI_HorizonDialogueMsgTextBlock_generated_h
#error "HorizonDialogueMsgTextBlock.generated.h already included, missing '#pragma once' in HorizonDialogueMsgTextBlock.h"
#endif
#define HORIZONUI_HorizonDialogueMsgTextBlock_generated_h

#define REDStrings_Plugins_Marketplace_HorizonUIPlugin_Source_HorizonUIPlugin_Public_HorizonDialogueMsgTextBlock_h_30_DELEGATE \
struct HorizonDialogueMsgTextBlock_eventOnHorizonDialogueCharAdvancedEvent_Parms \
{ \
	FHorizonDialogueBlockInfo InCurrentBlockInfo; \
}; \
static inline void FOnHorizonDialogueCharAdvancedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnHorizonDialogueCharAdvancedEvent, FHorizonDialogueBlockInfo const& InCurrentBlockInfo) \
{ \
	HorizonDialogueMsgTextBlock_eventOnHorizonDialogueCharAdvancedEvent_Parms Parms; \
	Parms.InCurrentBlockInfo=InCurrentBlockInfo; \
	OnHorizonDialogueCharAdvancedEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define REDStrings_Plugins_Marketplace_HorizonUIPlugin_Source_HorizonUIPlugin_Public_HorizonDialogueMsgTextBlock_h_29_DELEGATE \
struct HorizonDialogueMsgTextBlock_eventOnHorizonDialogueCustomEvent_Parms \
{ \
	FString InEventName; \
	FHorizonDialogueSegmentInfo InSegInfo; \
}; \
static inline void FOnHorizonDialogueCustomEvent_DelegateWrapper(const FMulticastScriptDelegate& OnHorizonDialogueCustomEvent, const FString& InEventName, FHorizonDialogueSegmentInfo const& InSegInfo) \
{ \
	HorizonDialogueMsgTextBlock_eventOnHorizonDialogueCustomEvent_Parms Parms; \
	Parms.InEventName=InEventName; \
	Parms.InSegInfo=InSegInfo; \
	OnHorizonDialogueCustomEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define REDStrings_Plugins_Marketplace_HorizonUIPlugin_Source_HorizonUIPlugin_Public_HorizonDialogueMsgTextBlock_h_28_DELEGATE \
static inline void FOnHorizonDialogueMsgEvent_DelegateWrapper(const FMulticastScriptDelegate& OnHorizonDialogueMsgEvent) \
{ \
	OnHorizonDialogueMsgEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define REDStrings_Plugins_Marketplace_HorizonUIPlugin_Source_HorizonUIPlugin_Public_HorizonDialogueMsgTextBlock_h_27_DELEGATE \
struct HorizonDialogueMsgTextBlock_eventOnHorizonDialoguePageEvent_Parms \
{ \
	FHorizonDialogueDialoguePageResult InResult; \
}; \
static inline void FOnHorizonDialoguePageEvent_DelegateWrapper(const FMulticastScriptDelegate& OnHorizonDialoguePageEvent, FHorizonDialogueDialoguePageResult const& InResult) \
{ \
	HorizonDialogueMsgTextBlock_eventOnHorizonDialoguePageEvent_Parms Parms; \
	Parms.InResult=InResult; \
	OnHorizonDialoguePageEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define REDStrings_Plugins_Marketplace_HorizonUIPlugin_Source_HorizonUIPlugin_Public_HorizonDialogueMsgTextBlock_h_26_DELEGATE \
struct HorizonDialogueMsgTextBlock_eventOnHorizonHypertextEvent_Parms \
{ \
	FHorizonDialogueHypertextResult InResult; \
}; \
static inline void FOnHorizonHypertextEvent_DelegateWrapper(const FMulticastScriptDelegate& OnHorizonHypertextEvent, FHorizonDialogueHypertextResult const& InResult) \
{ \
	HorizonDialogueMsgTextBlock_eventOnHorizonHypertextEvent_Parms Parms; \
	Parms.InResult=InResult; \
	OnHorizonHypertextEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define REDStrings_Plugins_Marketplace_HorizonUIPlugin_Source_HorizonUIPlugin_Public_HorizonDialogueMsgTextBlock_h_24_SPARSE_DATA
#define REDStrings_Plugins_Marketplace_HorizonUIPlugin_Source_HorizonUIPlugin_Public_HorizonDialogueMsgTextBlock_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurrentPageIndex); \
	DECLARE_FUNCTION(execGetCurrentPageTextLength); \
	DECLARE_FUNCTION(execGetJustification); \
	DECLARE_FUNCTION(execGetPageTextByIndex); \
	DECLARE_FUNCTION(execGetText); \
	DECLARE_FUNCTION(execGetTextLength); \
	DECLARE_FUNCTION(execIsDialogueMsgCompleted); \
	DECLARE_FUNCTION(execIsDialogueMsgPageEnd); \
	DECLARE_FUNCTION(execNextDialogueMsgPage); \
	DECLARE_FUNCTION(execPauseDialogue); \
	DECLARE_FUNCTION(execRequestRebuildDialogue); \
	DECLARE_FUNCTION(execResumeDialogue); \
	DECLARE_FUNCTION(execSetAutoNextDialogueMsgPageIntervalRate); \
	DECLARE_FUNCTION(execSetColorAndOpacity); \
	DECLARE_FUNCTION(execSetDialogueMsgPage); \
	DECLARE_FUNCTION(execSetFont); \
	DECLARE_FUNCTION(execSetFontSize); \
	DECLARE_FUNCTION(execSetIsAutoNextDialogueMsgPage); \
	DECLARE_FUNCTION(execSetIsDialogueMsgText); \
	DECLARE_FUNCTION(execSetIsRepeatDialogueMsg); \
	DECLARE_FUNCTION(execSetIsStartTickDialogueMsg); \
	DECLARE_FUNCTION(execSetJustification); \
	DECLARE_FUNCTION(execSetOpacity); \
	DECLARE_FUNCTION(execSetShadowColorAndOpacity); \
	DECLARE_FUNCTION(execSetShadowOffset); \
	DECLARE_FUNCTION(execSetTextAndRebuildDialogue); \
	DECLARE_FUNCTION(execSkipCurrentDialogueMsgPageTick); \
	DECLARE_FUNCTION(execSkipCurrentDialoguePage); \
	DECLARE_FUNCTION(execSkipDialogue); \
	DECLARE_FUNCTION(execStartDialogue); \
	DECLARE_FUNCTION(execStopDialogue);


#define REDStrings_Plugins_Marketplace_HorizonUIPlugin_Source_HorizonUIPlugin_Public_HorizonDialogueMsgTextBlock_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentPageIndex); \
	DECLARE_FUNCTION(execGetCurrentPageTextLength); \
	DECLARE_FUNCTION(execGetJustification); \
	DECLARE_FUNCTION(execGetPageTextByIndex); \
	DECLARE_FUNCTION(execGetText); \
	DECLARE_FUNCTION(execGetTextLength); \
	DECLARE_FUNCTION(execIsDialogueMsgCompleted); \
	DECLARE_FUNCTION(execIsDialogueMsgPageEnd); \
	DECLARE_FUNCTION(execNextDialogueMsgPage); \
	DECLARE_FUNCTION(execPauseDialogue); \
	DECLARE_FUNCTION(execRequestRebuildDialogue); \
	DECLARE_FUNCTION(execResumeDialogue); \
	DECLARE_FUNCTION(execSetAutoNextDialogueMsgPageIntervalRate); \
	DECLARE_FUNCTION(execSetColorAndOpacity); \
	DECLARE_FUNCTION(execSetDialogueMsgPage); \
	DECLARE_FUNCTION(execSetFont); \
	DECLARE_FUNCTION(execSetFontSize); \
	DECLARE_FUNCTION(execSetIsAutoNextDialogueMsgPage); \
	DECLARE_FUNCTION(execSetIsDialogueMsgText); \
	DECLARE_FUNCTION(execSetIsRepeatDialogueMsg); \
	DECLARE_FUNCTION(execSetIsStartTickDialogueMsg); \
	DECLARE_FUNCTION(execSetJustification); \
	DECLARE_FUNCTION(execSetOpacity); \
	DECLARE_FUNCTION(execSetShadowColorAndOpacity); \
	DECLARE_FUNCTION(execSetShadowOffset); \
	DECLARE_FUNCTION(execSetTextAndRebuildDialogue); \
	DECLARE_FUNCTION(execSkipCurrentDialogueMsgPageTick); \
	DECLARE_FUNCTION(execSkipCurrentDialoguePage); \
	DECLARE_FUNCTION(execSkipDialogue); \
	DECLARE_FUNCTION(execStartDialogue); \
	DECLARE_FUNCTION(execStopDialogue);


#define REDStrings_Plugins_Marketplace_HorizonUIPlugin_Source_HorizonUIPlugin_Public_HorizonDialogueMsgTextBlock_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHorizonDialogueMsgTextBlock(); \
	friend struct Z_Construct_UClass_UHorizonDialogueMsgTextBlock_Statics; \
public: \
	DECLARE_CLASS(UHorizonDialogueMsgTextBlock, UCanvasPanel, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HorizonUI"), NO_API) \
	DECLARE_SERIALIZER(UHorizonDialogueMsgTextBlock)


#define REDStrings_Plugins_Marketplace_HorizonUIPlugin_Source_HorizonUIPlugin_Public_HorizonDialogueMsgTextBlock_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUHorizonDialogueMsgTextBlock(); \
	friend struct Z_Construct_UClass_UHorizonDialogueMsgTextBlock_Statics; \
public: \
	DECLARE_CLASS(UHorizonDialogueMsgTextBlock, UCanvasPanel, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HorizonUI"), NO_API) \
	DECLARE_SERIALIZER(UHorizonDialogueMsgTextBlock)


#define REDStrings_Plugins_Marketplace_HorizonUIPlugin_Source_HorizonUIPlugin_Public_HorizonDialogueMsgTextBlock_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHorizonDialogueMsgTextBlock(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHorizonDialogueMsgTextBlock) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHorizonDialogueMsgTextBlock); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHorizonDialogueMsgTextBlock); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHorizonDialogueMsgTextBlock(UHorizonDialogueMsgTextBlock&&); \
	NO_API UHorizonDialogueMsgTextBlock(const UHorizonDialogueMsgTextBlock&); \
public:


#define REDStrings_Plugins_Marketplace_HorizonUIPlugin_Source_HorizonUIPlugin_Public_HorizonDialogueMsgTextBlock_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHorizonDialogueMsgTextBlock(UHorizonDialogueMsgTextBlock&&); \
	NO_API UHorizonDialogueMsgTextBlock(const UHorizonDialogueMsgTextBlock&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHorizonDialogueMsgTextBlock); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHorizonDialogueMsgTextBlock); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHorizonDialogueMsgTextBlock)


#define REDStrings_Plugins_Marketplace_HorizonUIPlugin_Source_HorizonUIPlugin_Public_HorizonDialogueMsgTextBlock_h_24_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StyleInfoList() { return STRUCT_OFFSET(UHorizonDialogueMsgTextBlock, StyleInfoList); }


#define REDStrings_Plugins_Marketplace_HorizonUIPlugin_Source_HorizonUIPlugin_Public_HorizonDialogueMsgTextBlock_h_22_PROLOG
#define REDStrings_Plugins_Marketplace_HorizonUIPlugin_Source_HorizonUIPlugin_Public_HorizonDialogueMsgTextBlock_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	REDStrings_Plugins_Marketplace_HorizonUIPlugin_Source_HorizonUIPlugin_Public_HorizonDialogueMsgTextBlock_h_24_PRIVATE_PROPERTY_OFFSET \
	REDStrings_Plugins_Marketplace_HorizonUIPlugin_Source_HorizonUIPlugin_Public_HorizonDialogueMsgTextBlock_h_24_SPARSE_DATA \
	REDStrings_Plugins_Marketplace_HorizonUIPlugin_Source_HorizonUIPlugin_Public_HorizonDialogueMsgTextBlock_h_24_RPC_WRAPPERS \
	REDStrings_Plugins_Marketplace_HorizonUIPlugin_Source_HorizonUIPlugin_Public_HorizonDialogueMsgTextBlock_h_24_INCLASS \
	REDStrings_Plugins_Marketplace_HorizonUIPlugin_Source_HorizonUIPlugin_Public_HorizonDialogueMsgTextBlock_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define REDStrings_Plugins_Marketplace_HorizonUIPlugin_Source_HorizonUIPlugin_Public_HorizonDialogueMsgTextBlock_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	REDStrings_Plugins_Marketplace_HorizonUIPlugin_Source_HorizonUIPlugin_Public_HorizonDialogueMsgTextBlock_h_24_PRIVATE_PROPERTY_OFFSET \
	REDStrings_Plugins_Marketplace_HorizonUIPlugin_Source_HorizonUIPlugin_Public_HorizonDialogueMsgTextBlock_h_24_SPARSE_DATA \
	REDStrings_Plugins_Marketplace_HorizonUIPlugin_Source_HorizonUIPlugin_Public_HorizonDialogueMsgTextBlock_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	REDStrings_Plugins_Marketplace_HorizonUIPlugin_Source_HorizonUIPlugin_Public_HorizonDialogueMsgTextBlock_h_24_INCLASS_NO_PURE_DECLS \
	REDStrings_Plugins_Marketplace_HorizonUIPlugin_Source_HorizonUIPlugin_Public_HorizonDialogueMsgTextBlock_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HORIZONUI_API UClass* StaticClass<class UHorizonDialogueMsgTextBlock>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID REDStrings_Plugins_Marketplace_HorizonUIPlugin_Source_HorizonUIPlugin_Public_HorizonDialogueMsgTextBlock_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
