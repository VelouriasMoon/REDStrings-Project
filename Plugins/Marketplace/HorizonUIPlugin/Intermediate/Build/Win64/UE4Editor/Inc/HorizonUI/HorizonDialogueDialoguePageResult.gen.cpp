// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HorizonUIPlugin/Public/HorizonDialogueDialoguePageResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHorizonDialogueDialoguePageResult() {}
// Cross Module References
	HORIZONUI_API UScriptStruct* Z_Construct_UScriptStruct_FHorizonDialogueDialoguePageResult();
	UPackage* Z_Construct_UPackage__Script_HorizonUI();
// End Cross Module References
class UScriptStruct* FHorizonDialogueDialoguePageResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HORIZONUI_API uint32 Get_Z_Construct_UScriptStruct_FHorizonDialogueDialoguePageResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHorizonDialogueDialoguePageResult, Z_Construct_UPackage__Script_HorizonUI(), TEXT("HorizonDialogueDialoguePageResult"), sizeof(FHorizonDialogueDialoguePageResult), Get_Z_Construct_UScriptStruct_FHorizonDialogueDialoguePageResult_Hash());
	}
	return Singleton;
}
template<> HORIZONUI_API UScriptStruct* StaticStruct<FHorizonDialogueDialoguePageResult>()
{
	return FHorizonDialogueDialoguePageResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHorizonDialogueDialoguePageResult(FHorizonDialogueDialoguePageResult::StaticStruct, TEXT("/Script/HorizonUI"), TEXT("HorizonDialogueDialoguePageResult"), false, nullptr, nullptr);
static struct FScriptStruct_HorizonUI_StaticRegisterNativesFHorizonDialogueDialoguePageResult
{
	FScriptStruct_HorizonUI_StaticRegisterNativesFHorizonDialogueDialoguePageResult()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("HorizonDialogueDialoguePageResult")),new UScriptStruct::TCppStructOps<FHorizonDialogueDialoguePageResult>);
	}
} ScriptStruct_HorizonUI_StaticRegisterNativesFHorizonDialogueDialoguePageResult;
	struct Z_Construct_UScriptStruct_FHorizonDialogueDialoguePageResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PageIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PageIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHorizonDialogueDialoguePageResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HorizonDialogueDialoguePageResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHorizonDialogueDialoguePageResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHorizonDialogueDialoguePageResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHorizonDialogueDialoguePageResult_Statics::NewProp_PageIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HorizonDialogueDialoguePageResult" },
		{ "ModuleRelativePath", "Public/HorizonDialogueDialoguePageResult.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueDialoguePageResult_Statics::NewProp_PageIndex = { "PageIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHorizonDialogueDialoguePageResult, PageIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FHorizonDialogueDialoguePageResult_Statics::NewProp_PageIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueDialoguePageResult_Statics::NewProp_PageIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHorizonDialogueDialoguePageResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueDialoguePageResult_Statics::NewProp_PageIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHorizonDialogueDialoguePageResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HorizonUI,
		nullptr,
		&NewStructOps,
		"HorizonDialogueDialoguePageResult",
		sizeof(FHorizonDialogueDialoguePageResult),
		alignof(FHorizonDialogueDialoguePageResult),
		Z_Construct_UScriptStruct_FHorizonDialogueDialoguePageResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueDialoguePageResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHorizonDialogueDialoguePageResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueDialoguePageResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHorizonDialogueDialoguePageResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHorizonDialogueDialoguePageResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HorizonUI();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HorizonDialogueDialoguePageResult"), sizeof(FHorizonDialogueDialoguePageResult), Get_Z_Construct_UScriptStruct_FHorizonDialogueDialoguePageResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHorizonDialogueDialoguePageResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHorizonDialogueDialoguePageResult_Hash() { return 207999809U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
