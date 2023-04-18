// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionSystem/Public/ASActiveTransition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeASActiveTransition() {}
// Cross Module References
	ACTIONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FASActiveTransition();
	UPackage* Z_Construct_UPackage__Script_ActionSystem();
// End Cross Module References
class UScriptStruct* FASActiveTransition::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACTIONSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FASActiveTransition_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FASActiveTransition, Z_Construct_UPackage__Script_ActionSystem(), TEXT("ASActiveTransition"), sizeof(FASActiveTransition), Get_Z_Construct_UScriptStruct_FASActiveTransition_Hash());
	}
	return Singleton;
}
template<> ACTIONSYSTEM_API UScriptStruct* StaticStruct<FASActiveTransition>()
{
	return FASActiveTransition::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FASActiveTransition(FASActiveTransition::StaticStruct, TEXT("/Script/ActionSystem"), TEXT("ASActiveTransition"), false, nullptr, nullptr);
static struct FScriptStruct_ActionSystem_StaticRegisterNativesFASActiveTransition
{
	FScriptStruct_ActionSystem_StaticRegisterNativesFASActiveTransition()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ASActiveTransition")),new UScriptStruct::TCppStructOps<FASActiveTransition>);
	}
} ScriptStruct_ActionSystem_StaticRegisterNativesFASActiveTransition;
	struct Z_Construct_UScriptStruct_FASActiveTransition_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASActiveTransition_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ASActiveTransition.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FASActiveTransition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FASActiveTransition>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FASActiveTransition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ActionSystem,
		nullptr,
		&NewStructOps,
		"ASActiveTransition",
		sizeof(FASActiveTransition),
		alignof(FASActiveTransition),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FASActiveTransition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASActiveTransition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FASActiveTransition()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FASActiveTransition_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ActionSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ASActiveTransition"), sizeof(FASActiveTransition), Get_Z_Construct_UScriptStruct_FASActiveTransition_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FASActiveTransition_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FASActiveTransition_Hash() { return 2373775345U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
