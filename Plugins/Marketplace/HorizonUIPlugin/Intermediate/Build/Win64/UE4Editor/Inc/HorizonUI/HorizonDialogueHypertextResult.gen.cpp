// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HorizonUIPlugin/Public/HorizonDialogueHypertextResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHorizonDialogueHypertextResult() {}
// Cross Module References
	HORIZONUI_API UScriptStruct* Z_Construct_UScriptStruct_FHorizonDialogueHypertextResult();
	UPackage* Z_Construct_UPackage__Script_HorizonUI();
	HORIZONUI_API UClass* Z_Construct_UClass_UHorizonDialogueMsgTextBlock_NoRegister();
// End Cross Module References
class UScriptStruct* FHorizonDialogueHypertextResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HORIZONUI_API uint32 Get_Z_Construct_UScriptStruct_FHorizonDialogueHypertextResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHorizonDialogueHypertextResult, Z_Construct_UPackage__Script_HorizonUI(), TEXT("HorizonDialogueHypertextResult"), sizeof(FHorizonDialogueHypertextResult), Get_Z_Construct_UScriptStruct_FHorizonDialogueHypertextResult_Hash());
	}
	return Singleton;
}
template<> HORIZONUI_API UScriptStruct* StaticStruct<FHorizonDialogueHypertextResult>()
{
	return FHorizonDialogueHypertextResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHorizonDialogueHypertextResult(FHorizonDialogueHypertextResult::StaticStruct, TEXT("/Script/HorizonUI"), TEXT("HorizonDialogueHypertextResult"), false, nullptr, nullptr);
static struct FScriptStruct_HorizonUI_StaticRegisterNativesFHorizonDialogueHypertextResult
{
	FScriptStruct_HorizonUI_StaticRegisterNativesFHorizonDialogueHypertextResult()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("HorizonDialogueHypertextResult")),new UScriptStruct::TCppStructOps<FHorizonDialogueHypertextResult>);
	}
} ScriptStruct_HorizonUI_StaticRegisterNativesFHorizonDialogueHypertextResult;
	struct Z_Construct_UScriptStruct_FHorizonDialogueHypertextResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UrlEncodeMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_UrlEncodeMap;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UrlEncodeMap_Key_KeyProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UrlEncodeMap_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HypertextReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HypertextReference;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BlockIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LineIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SegmentIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SegmentIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogueMsgTextBlock_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DialogueMsgTextBlock;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHorizonDialogueHypertextResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HorizonDialogueHypertextResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHorizonDialogueHypertextResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHorizonDialogueHypertextResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHorizonDialogueHypertextResult_Statics::NewProp_UrlEncodeMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HorizonDialogueHypertextResult" },
		{ "ModuleRelativePath", "Public/HorizonDialogueHypertextResult.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueHypertextResult_Statics::NewProp_UrlEncodeMap = { "UrlEncodeMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHorizonDialogueHypertextResult, UrlEncodeMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHorizonDialogueHypertextResult_Statics::NewProp_UrlEncodeMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueHypertextResult_Statics::NewProp_UrlEncodeMap_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueHypertextResult_Statics::NewProp_UrlEncodeMap_Key_KeyProp = { "UrlEncodeMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueHypertextResult_Statics::NewProp_UrlEncodeMap_ValueProp = { "UrlEncodeMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHorizonDialogueHypertextResult_Statics::NewProp_HypertextReference_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HorizonDialogueHypertextResult" },
		{ "ModuleRelativePath", "Public/HorizonDialogueHypertextResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueHypertextResult_Statics::NewProp_HypertextReference = { "HypertextReference", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHorizonDialogueHypertextResult, HypertextReference), METADATA_PARAMS(Z_Construct_UScriptStruct_FHorizonDialogueHypertextResult_Statics::NewProp_HypertextReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueHypertextResult_Statics::NewProp_HypertextReference_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHorizonDialogueHypertextResult_Statics::NewProp_BlockIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HorizonDialogueHypertextResult" },
		{ "ModuleRelativePath", "Public/HorizonDialogueHypertextResult.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueHypertextResult_Statics::NewProp_BlockIndex = { "BlockIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHorizonDialogueHypertextResult, BlockIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FHorizonDialogueHypertextResult_Statics::NewProp_BlockIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueHypertextResult_Statics::NewProp_BlockIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHorizonDialogueHypertextResult_Statics::NewProp_LineIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HorizonDialogueHypertextResult" },
		{ "ModuleRelativePath", "Public/HorizonDialogueHypertextResult.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueHypertextResult_Statics::NewProp_LineIndex = { "LineIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHorizonDialogueHypertextResult, LineIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FHorizonDialogueHypertextResult_Statics::NewProp_LineIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueHypertextResult_Statics::NewProp_LineIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHorizonDialogueHypertextResult_Statics::NewProp_SegmentIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HorizonDialogueHypertextResult" },
		{ "ModuleRelativePath", "Public/HorizonDialogueHypertextResult.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueHypertextResult_Statics::NewProp_SegmentIndex = { "SegmentIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHorizonDialogueHypertextResult, SegmentIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FHorizonDialogueHypertextResult_Statics::NewProp_SegmentIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueHypertextResult_Statics::NewProp_SegmentIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHorizonDialogueHypertextResult_Statics::NewProp_DialogueMsgTextBlock_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HorizonDialogueHypertextResult" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HorizonDialogueHypertextResult.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueHypertextResult_Statics::NewProp_DialogueMsgTextBlock = { "DialogueMsgTextBlock", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHorizonDialogueHypertextResult, DialogueMsgTextBlock), Z_Construct_UClass_UHorizonDialogueMsgTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHorizonDialogueHypertextResult_Statics::NewProp_DialogueMsgTextBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueHypertextResult_Statics::NewProp_DialogueMsgTextBlock_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHorizonDialogueHypertextResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueHypertextResult_Statics::NewProp_UrlEncodeMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueHypertextResult_Statics::NewProp_UrlEncodeMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueHypertextResult_Statics::NewProp_UrlEncodeMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueHypertextResult_Statics::NewProp_HypertextReference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueHypertextResult_Statics::NewProp_BlockIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueHypertextResult_Statics::NewProp_LineIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueHypertextResult_Statics::NewProp_SegmentIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueHypertextResult_Statics::NewProp_DialogueMsgTextBlock,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHorizonDialogueHypertextResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HorizonUI,
		nullptr,
		&NewStructOps,
		"HorizonDialogueHypertextResult",
		sizeof(FHorizonDialogueHypertextResult),
		alignof(FHorizonDialogueHypertextResult),
		Z_Construct_UScriptStruct_FHorizonDialogueHypertextResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueHypertextResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHorizonDialogueHypertextResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueHypertextResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHorizonDialogueHypertextResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHorizonDialogueHypertextResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HorizonUI();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HorizonDialogueHypertextResult"), sizeof(FHorizonDialogueHypertextResult), Get_Z_Construct_UScriptStruct_FHorizonDialogueHypertextResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHorizonDialogueHypertextResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHorizonDialogueHypertextResult_Hash() { return 1099555673U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
