// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionSystem/Public/ASAnimationSetEntry_StateMachine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeASAnimationSetEntry_StateMachine() {}
// Cross Module References
	ACTIONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FASAnimationSetEntry_StateMachine();
	UPackage* Z_Construct_UPackage__Script_ActionSystem();
	ACTIONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FASAnimationSetEntry();
	ACTIONSYSTEM_API UClass* Z_Construct_UClass_UASStateMachine_NoRegister();
// End Cross Module References
class UScriptStruct* FASAnimationSetEntry_StateMachine::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACTIONSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FASAnimationSetEntry_StateMachine_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FASAnimationSetEntry_StateMachine, Z_Construct_UPackage__Script_ActionSystem(), TEXT("ASAnimationSetEntry_StateMachine"), sizeof(FASAnimationSetEntry_StateMachine), Get_Z_Construct_UScriptStruct_FASAnimationSetEntry_StateMachine_Hash());
	}
	return Singleton;
}
template<> ACTIONSYSTEM_API UScriptStruct* StaticStruct<FASAnimationSetEntry_StateMachine>()
{
	return FASAnimationSetEntry_StateMachine::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FASAnimationSetEntry_StateMachine(FASAnimationSetEntry_StateMachine::StaticStruct, TEXT("/Script/ActionSystem"), TEXT("ASAnimationSetEntry_StateMachine"), false, nullptr, nullptr);
static struct FScriptStruct_ActionSystem_StaticRegisterNativesFASAnimationSetEntry_StateMachine
{
	FScriptStruct_ActionSystem_StaticRegisterNativesFASAnimationSetEntry_StateMachine()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ASAnimationSetEntry_StateMachine")),new UScriptStruct::TCppStructOps<FASAnimationSetEntry_StateMachine>);
	}
} ScriptStruct_ActionSystem_StaticRegisterNativesFASAnimationSetEntry_StateMachine;
	struct Z_Construct_UScriptStruct_FASAnimationSetEntry_StateMachine_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateMachine_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StateMachine;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASAnimationSetEntry_StateMachine_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ASAnimationSetEntry_StateMachine.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FASAnimationSetEntry_StateMachine_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FASAnimationSetEntry_StateMachine>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASAnimationSetEntry_StateMachine_Statics::NewProp_StateMachine_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASAnimationSetEntry_StateMachine" },
		{ "ModuleRelativePath", "Public/ASAnimationSetEntry_StateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FASAnimationSetEntry_StateMachine_Statics::NewProp_StateMachine = { "StateMachine", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASAnimationSetEntry_StateMachine, StateMachine), Z_Construct_UClass_UASStateMachine_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FASAnimationSetEntry_StateMachine_Statics::NewProp_StateMachine_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASAnimationSetEntry_StateMachine_Statics::NewProp_StateMachine_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FASAnimationSetEntry_StateMachine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASAnimationSetEntry_StateMachine_Statics::NewProp_StateMachine,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FASAnimationSetEntry_StateMachine_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ActionSystem,
		Z_Construct_UScriptStruct_FASAnimationSetEntry,
		&NewStructOps,
		"ASAnimationSetEntry_StateMachine",
		sizeof(FASAnimationSetEntry_StateMachine),
		alignof(FASAnimationSetEntry_StateMachine),
		Z_Construct_UScriptStruct_FASAnimationSetEntry_StateMachine_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASAnimationSetEntry_StateMachine_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FASAnimationSetEntry_StateMachine_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASAnimationSetEntry_StateMachine_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FASAnimationSetEntry_StateMachine()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FASAnimationSetEntry_StateMachine_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ActionSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ASAnimationSetEntry_StateMachine"), sizeof(FASAnimationSetEntry_StateMachine), Get_Z_Construct_UScriptStruct_FASAnimationSetEntry_StateMachine_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FASAnimationSetEntry_StateMachine_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FASAnimationSetEntry_StateMachine_Hash() { return 779823398U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
