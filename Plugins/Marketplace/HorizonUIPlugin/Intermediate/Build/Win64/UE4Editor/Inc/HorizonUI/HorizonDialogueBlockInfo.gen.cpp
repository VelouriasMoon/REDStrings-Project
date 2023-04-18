// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HorizonUIPlugin/Public/HorizonDialogueBlockInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHorizonDialogueBlockInfo() {}
// Cross Module References
	HORIZONUI_API UScriptStruct* Z_Construct_UScriptStruct_FHorizonDialogueBlockInfo();
	UPackage* Z_Construct_UPackage__Script_HorizonUI();
// End Cross Module References
class UScriptStruct* FHorizonDialogueBlockInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HORIZONUI_API uint32 Get_Z_Construct_UScriptStruct_FHorizonDialogueBlockInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHorizonDialogueBlockInfo, Z_Construct_UPackage__Script_HorizonUI(), TEXT("HorizonDialogueBlockInfo"), sizeof(FHorizonDialogueBlockInfo), Get_Z_Construct_UScriptStruct_FHorizonDialogueBlockInfo_Hash());
	}
	return Singleton;
}
template<> HORIZONUI_API UScriptStruct* StaticStruct<FHorizonDialogueBlockInfo>()
{
	return FHorizonDialogueBlockInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHorizonDialogueBlockInfo(FHorizonDialogueBlockInfo::StaticStruct, TEXT("/Script/HorizonUI"), TEXT("HorizonDialogueBlockInfo"), false, nullptr, nullptr);
static struct FScriptStruct_HorizonUI_StaticRegisterNativesFHorizonDialogueBlockInfo
{
	FScriptStruct_HorizonUI_StaticRegisterNativesFHorizonDialogueBlockInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("HorizonDialogueBlockInfo")),new UScriptStruct::TCppStructOps<FHorizonDialogueBlockInfo>);
	}
} ScriptStruct_HorizonUI_StaticRegisterNativesFHorizonDialogueBlockInfo;
	struct Z_Construct_UScriptStruct_FHorizonDialogueBlockInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHorizonDialogueBlockInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HorizonDialogueBlockInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHorizonDialogueBlockInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHorizonDialogueBlockInfo>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHorizonDialogueBlockInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HorizonUI,
		nullptr,
		&NewStructOps,
		"HorizonDialogueBlockInfo",
		sizeof(FHorizonDialogueBlockInfo),
		alignof(FHorizonDialogueBlockInfo),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHorizonDialogueBlockInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueBlockInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHorizonDialogueBlockInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHorizonDialogueBlockInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HorizonUI();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HorizonDialogueBlockInfo"), sizeof(FHorizonDialogueBlockInfo), Get_Z_Construct_UScriptStruct_FHorizonDialogueBlockInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHorizonDialogueBlockInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHorizonDialogueBlockInfo_Hash() { return 3795919863U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
