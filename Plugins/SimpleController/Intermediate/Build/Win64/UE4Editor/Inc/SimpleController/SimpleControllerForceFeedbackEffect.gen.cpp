// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleController/Public/SimpleControllerForceFeedbackEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleControllerForceFeedbackEffect() {}
// Cross Module References
	SIMPLECONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleControllerForceFeedbackEffect();
	UPackage* Z_Construct_UPackage__Script_SimpleController();
// End Cross Module References
class UScriptStruct* FSimpleControllerForceFeedbackEffect::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SIMPLECONTROLLER_API uint32 Get_Z_Construct_UScriptStruct_FSimpleControllerForceFeedbackEffect_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSimpleControllerForceFeedbackEffect, Z_Construct_UPackage__Script_SimpleController(), TEXT("SimpleControllerForceFeedbackEffect"), sizeof(FSimpleControllerForceFeedbackEffect), Get_Z_Construct_UScriptStruct_FSimpleControllerForceFeedbackEffect_Hash());
	}
	return Singleton;
}
template<> SIMPLECONTROLLER_API UScriptStruct* StaticStruct<FSimpleControllerForceFeedbackEffect>()
{
	return FSimpleControllerForceFeedbackEffect::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSimpleControllerForceFeedbackEffect(FSimpleControllerForceFeedbackEffect::StaticStruct, TEXT("/Script/SimpleController"), TEXT("SimpleControllerForceFeedbackEffect"), false, nullptr, nullptr);
static struct FScriptStruct_SimpleController_StaticRegisterNativesFSimpleControllerForceFeedbackEffect
{
	FScriptStruct_SimpleController_StaticRegisterNativesFSimpleControllerForceFeedbackEffect()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SimpleControllerForceFeedbackEffect")),new UScriptStruct::TCppStructOps<FSimpleControllerForceFeedbackEffect>);
	}
} ScriptStruct_SimpleController_StaticRegisterNativesFSimpleControllerForceFeedbackEffect;
	struct Z_Construct_UScriptStruct_FSimpleControllerForceFeedbackEffect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleControllerForceFeedbackEffect_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SimpleControllerForceFeedbackEffect.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSimpleControllerForceFeedbackEffect_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSimpleControllerForceFeedbackEffect>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSimpleControllerForceFeedbackEffect_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleController,
		nullptr,
		&NewStructOps,
		"SimpleControllerForceFeedbackEffect",
		sizeof(FSimpleControllerForceFeedbackEffect),
		alignof(FSimpleControllerForceFeedbackEffect),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleControllerForceFeedbackEffect_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleControllerForceFeedbackEffect_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSimpleControllerForceFeedbackEffect()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSimpleControllerForceFeedbackEffect_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SimpleController();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SimpleControllerForceFeedbackEffect"), sizeof(FSimpleControllerForceFeedbackEffect), Get_Z_Construct_UScriptStruct_FSimpleControllerForceFeedbackEffect_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSimpleControllerForceFeedbackEffect_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSimpleControllerForceFeedbackEffect_Hash() { return 1626913675U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
