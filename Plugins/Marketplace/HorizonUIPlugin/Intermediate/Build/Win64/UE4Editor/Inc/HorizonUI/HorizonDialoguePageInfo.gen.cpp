// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HorizonUIPlugin/Public/HorizonDialoguePageInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHorizonDialoguePageInfo() {}
// Cross Module References
	HORIZONUI_API UScriptStruct* Z_Construct_UScriptStruct_FHorizonDialoguePageInfo();
	UPackage* Z_Construct_UPackage__Script_HorizonUI();
// End Cross Module References
class UScriptStruct* FHorizonDialoguePageInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HORIZONUI_API uint32 Get_Z_Construct_UScriptStruct_FHorizonDialoguePageInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHorizonDialoguePageInfo, Z_Construct_UPackage__Script_HorizonUI(), TEXT("HorizonDialoguePageInfo"), sizeof(FHorizonDialoguePageInfo), Get_Z_Construct_UScriptStruct_FHorizonDialoguePageInfo_Hash());
	}
	return Singleton;
}
template<> HORIZONUI_API UScriptStruct* StaticStruct<FHorizonDialoguePageInfo>()
{
	return FHorizonDialoguePageInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHorizonDialoguePageInfo(FHorizonDialoguePageInfo::StaticStruct, TEXT("/Script/HorizonUI"), TEXT("HorizonDialoguePageInfo"), false, nullptr, nullptr);
static struct FScriptStruct_HorizonUI_StaticRegisterNativesFHorizonDialoguePageInfo
{
	FScriptStruct_HorizonUI_StaticRegisterNativesFHorizonDialoguePageInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("HorizonDialoguePageInfo")),new UScriptStruct::TCppStructOps<FHorizonDialoguePageInfo>);
	}
} ScriptStruct_HorizonUI_StaticRegisterNativesFHorizonDialoguePageInfo;
	struct Z_Construct_UScriptStruct_FHorizonDialoguePageInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHorizonDialoguePageInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HorizonDialoguePageInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHorizonDialoguePageInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHorizonDialoguePageInfo>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHorizonDialoguePageInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HorizonUI,
		nullptr,
		&NewStructOps,
		"HorizonDialoguePageInfo",
		sizeof(FHorizonDialoguePageInfo),
		alignof(FHorizonDialoguePageInfo),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHorizonDialoguePageInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialoguePageInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHorizonDialoguePageInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHorizonDialoguePageInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HorizonUI();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HorizonDialoguePageInfo"), sizeof(FHorizonDialoguePageInfo), Get_Z_Construct_UScriptStruct_FHorizonDialoguePageInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHorizonDialoguePageInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHorizonDialoguePageInfo_Hash() { return 3352732955U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
