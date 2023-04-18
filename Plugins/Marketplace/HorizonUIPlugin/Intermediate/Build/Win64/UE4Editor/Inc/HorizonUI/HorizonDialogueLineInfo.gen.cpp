// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HorizonUIPlugin/Public/HorizonDialogueLineInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHorizonDialogueLineInfo() {}
// Cross Module References
	HORIZONUI_API UScriptStruct* Z_Construct_UScriptStruct_FHorizonDialogueLineInfo();
	UPackage* Z_Construct_UPackage__Script_HorizonUI();
// End Cross Module References
class UScriptStruct* FHorizonDialogueLineInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HORIZONUI_API uint32 Get_Z_Construct_UScriptStruct_FHorizonDialogueLineInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHorizonDialogueLineInfo, Z_Construct_UPackage__Script_HorizonUI(), TEXT("HorizonDialogueLineInfo"), sizeof(FHorizonDialogueLineInfo), Get_Z_Construct_UScriptStruct_FHorizonDialogueLineInfo_Hash());
	}
	return Singleton;
}
template<> HORIZONUI_API UScriptStruct* StaticStruct<FHorizonDialogueLineInfo>()
{
	return FHorizonDialogueLineInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHorizonDialogueLineInfo(FHorizonDialogueLineInfo::StaticStruct, TEXT("/Script/HorizonUI"), TEXT("HorizonDialogueLineInfo"), false, nullptr, nullptr);
static struct FScriptStruct_HorizonUI_StaticRegisterNativesFHorizonDialogueLineInfo
{
	FScriptStruct_HorizonUI_StaticRegisterNativesFHorizonDialogueLineInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("HorizonDialogueLineInfo")),new UScriptStruct::TCppStructOps<FHorizonDialogueLineInfo>);
	}
} ScriptStruct_HorizonUI_StaticRegisterNativesFHorizonDialogueLineInfo;
	struct Z_Construct_UScriptStruct_FHorizonDialogueLineInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHorizonDialogueLineInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HorizonDialogueLineInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHorizonDialogueLineInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHorizonDialogueLineInfo>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHorizonDialogueLineInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HorizonUI,
		nullptr,
		&NewStructOps,
		"HorizonDialogueLineInfo",
		sizeof(FHorizonDialogueLineInfo),
		alignof(FHorizonDialogueLineInfo),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHorizonDialogueLineInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueLineInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHorizonDialogueLineInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHorizonDialogueLineInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HorizonUI();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HorizonDialogueLineInfo"), sizeof(FHorizonDialogueLineInfo), Get_Z_Construct_UScriptStruct_FHorizonDialogueLineInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHorizonDialogueLineInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHorizonDialogueLineInfo_Hash() { return 3472777223U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
