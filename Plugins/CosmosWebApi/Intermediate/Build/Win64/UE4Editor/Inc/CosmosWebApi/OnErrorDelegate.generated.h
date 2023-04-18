// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COSMOSWEBAPI_OnErrorDelegate_generated_h
#error "OnErrorDelegate.generated.h already included, missing '#pragma once' in OnErrorDelegate.h"
#endif
#define COSMOSWEBAPI_OnErrorDelegate_generated_h

#define REDStrings_Plugins_CosmosWebApi_Source_CosmosWebApi_Public_OnErrorDelegate_h_5_DELEGATE \
struct _Script_CosmosWebApi_eventOnError_Parms \
{ \
	int32 code; \
	FString errmsg; \
}; \
static inline void FOnError_DelegateWrapper(const FMulticastScriptDelegate& OnError, int32 code, const FString& errmsg) \
{ \
	_Script_CosmosWebApi_eventOnError_Parms Parms; \
	Parms.code=code; \
	Parms.errmsg=errmsg; \
	OnError.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID REDStrings_Plugins_CosmosWebApi_Source_CosmosWebApi_Public_OnErrorDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
