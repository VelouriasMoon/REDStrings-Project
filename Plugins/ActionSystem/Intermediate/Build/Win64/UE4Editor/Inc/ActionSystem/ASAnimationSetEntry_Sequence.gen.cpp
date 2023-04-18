// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionSystem/Public/ASAnimationSetEntry_Sequence.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeASAnimationSetEntry_Sequence() {}
// Cross Module References
	ACTIONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FASAnimationSetEntry_Sequence();
	UPackage* Z_Construct_UPackage__Script_ActionSystem();
	ACTIONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FASAnimationSetEntry();
	ACTIONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FASPlayRateSection();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
// End Cross Module References
class UScriptStruct* FASAnimationSetEntry_Sequence::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACTIONSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FASAnimationSetEntry_Sequence_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FASAnimationSetEntry_Sequence, Z_Construct_UPackage__Script_ActionSystem(), TEXT("ASAnimationSetEntry_Sequence"), sizeof(FASAnimationSetEntry_Sequence), Get_Z_Construct_UScriptStruct_FASAnimationSetEntry_Sequence_Hash());
	}
	return Singleton;
}
template<> ACTIONSYSTEM_API UScriptStruct* StaticStruct<FASAnimationSetEntry_Sequence>()
{
	return FASAnimationSetEntry_Sequence::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FASAnimationSetEntry_Sequence(FASAnimationSetEntry_Sequence::StaticStruct, TEXT("/Script/ActionSystem"), TEXT("ASAnimationSetEntry_Sequence"), false, nullptr, nullptr);
static struct FScriptStruct_ActionSystem_StaticRegisterNativesFASAnimationSetEntry_Sequence
{
	FScriptStruct_ActionSystem_StaticRegisterNativesFASAnimationSetEntry_Sequence()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ASAnimationSetEntry_Sequence")),new UScriptStruct::TCppStructOps<FASAnimationSetEntry_Sequence>);
	}
} ScriptStruct_ActionSystem_StaticRegisterNativesFASAnimationSetEntry_Sequence;
	struct Z_Construct_UScriptStruct_FASAnimationSetEntry_Sequence_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlayRate;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayRate_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sequence;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASAnimationSetEntry_Sequence_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ASAnimationSetEntry_Sequence.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FASAnimationSetEntry_Sequence_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FASAnimationSetEntry_Sequence>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASAnimationSetEntry_Sequence_Statics::NewProp_PlayRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASAnimationSetEntry_Sequence" },
		{ "ModuleRelativePath", "Public/ASAnimationSetEntry_Sequence.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FASAnimationSetEntry_Sequence_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASAnimationSetEntry_Sequence, PlayRate), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FASAnimationSetEntry_Sequence_Statics::NewProp_PlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASAnimationSetEntry_Sequence_Statics::NewProp_PlayRate_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FASAnimationSetEntry_Sequence_Statics::NewProp_PlayRate_Inner = { "PlayRate", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FASPlayRateSection, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASAnimationSetEntry_Sequence_Statics::NewProp_Sequence_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASAnimationSetEntry_Sequence" },
		{ "ModuleRelativePath", "Public/ASAnimationSetEntry_Sequence.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FASAnimationSetEntry_Sequence_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASAnimationSetEntry_Sequence, Sequence), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FASAnimationSetEntry_Sequence_Statics::NewProp_Sequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASAnimationSetEntry_Sequence_Statics::NewProp_Sequence_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FASAnimationSetEntry_Sequence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASAnimationSetEntry_Sequence_Statics::NewProp_PlayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASAnimationSetEntry_Sequence_Statics::NewProp_PlayRate_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASAnimationSetEntry_Sequence_Statics::NewProp_Sequence,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FASAnimationSetEntry_Sequence_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ActionSystem,
		Z_Construct_UScriptStruct_FASAnimationSetEntry,
		&NewStructOps,
		"ASAnimationSetEntry_Sequence",
		sizeof(FASAnimationSetEntry_Sequence),
		alignof(FASAnimationSetEntry_Sequence),
		Z_Construct_UScriptStruct_FASAnimationSetEntry_Sequence_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASAnimationSetEntry_Sequence_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FASAnimationSetEntry_Sequence_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASAnimationSetEntry_Sequence_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FASAnimationSetEntry_Sequence()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FASAnimationSetEntry_Sequence_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ActionSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ASAnimationSetEntry_Sequence"), sizeof(FASAnimationSetEntry_Sequence), Get_Z_Construct_UScriptStruct_FASAnimationSetEntry_Sequence_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FASAnimationSetEntry_Sequence_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FASAnimationSetEntry_Sequence_Hash() { return 2289176345U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
