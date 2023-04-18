// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionSystem/Public/ASStateInstance_Sequence.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeASStateInstance_Sequence() {}
// Cross Module References
	ACTIONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FASStateInstance_Sequence();
	UPackage* Z_Construct_UPackage__Script_ActionSystem();
	ACTIONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FASStateInstance();
// End Cross Module References
class UScriptStruct* FASStateInstance_Sequence::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACTIONSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FASStateInstance_Sequence_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FASStateInstance_Sequence, Z_Construct_UPackage__Script_ActionSystem(), TEXT("ASStateInstance_Sequence"), sizeof(FASStateInstance_Sequence), Get_Z_Construct_UScriptStruct_FASStateInstance_Sequence_Hash());
	}
	return Singleton;
}
template<> ACTIONSYSTEM_API UScriptStruct* StaticStruct<FASStateInstance_Sequence>()
{
	return FASStateInstance_Sequence::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FASStateInstance_Sequence(FASStateInstance_Sequence::StaticStruct, TEXT("/Script/ActionSystem"), TEXT("ASStateInstance_Sequence"), false, nullptr, nullptr);
static struct FScriptStruct_ActionSystem_StaticRegisterNativesFASStateInstance_Sequence
{
	FScriptStruct_ActionSystem_StaticRegisterNativesFASStateInstance_Sequence()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ASStateInstance_Sequence")),new UScriptStruct::TCppStructOps<FASStateInstance_Sequence>);
	}
} ScriptStruct_ActionSystem_StaticRegisterNativesFASStateInstance_Sequence;
	struct Z_Construct_UScriptStruct_FASStateInstance_Sequence_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASStateInstance_Sequence_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ASStateInstance_Sequence.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FASStateInstance_Sequence_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FASStateInstance_Sequence>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FASStateInstance_Sequence_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ActionSystem,
		Z_Construct_UScriptStruct_FASStateInstance,
		&NewStructOps,
		"ASStateInstance_Sequence",
		sizeof(FASStateInstance_Sequence),
		alignof(FASStateInstance_Sequence),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FASStateInstance_Sequence_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASStateInstance_Sequence_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FASStateInstance_Sequence()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FASStateInstance_Sequence_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ActionSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ASStateInstance_Sequence"), sizeof(FASStateInstance_Sequence), Get_Z_Construct_UScriptStruct_FASStateInstance_Sequence_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FASStateInstance_Sequence_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FASStateInstance_Sequence_Hash() { return 3166130997U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
