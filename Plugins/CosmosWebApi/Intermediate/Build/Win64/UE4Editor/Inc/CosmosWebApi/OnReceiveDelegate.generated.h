// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNetMessage;
#ifdef COSMOSWEBAPI_OnReceiveDelegate_generated_h
#error "OnReceiveDelegate.generated.h already included, missing '#pragma once' in OnReceiveDelegate.h"
#endif
#define COSMOSWEBAPI_OnReceiveDelegate_generated_h

#define REDStrings_Plugins_CosmosWebApi_Source_CosmosWebApi_Public_OnReceiveDelegate_h_7_DELEGATE \
struct _Script_CosmosWebApi_eventOnReceive_Parms \
{ \
	UNetMessage* Data; \
}; \
static inline void FOnReceive_DelegateWrapper(const FMulticastScriptDelegate& OnReceive, UNetMessage* Data) \
{ \
	_Script_CosmosWebApi_eventOnReceive_Parms Parms; \
	Parms.Data=Data; \
	OnReceive.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID REDStrings_Plugins_CosmosWebApi_Source_CosmosWebApi_Public_OnReceiveDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
