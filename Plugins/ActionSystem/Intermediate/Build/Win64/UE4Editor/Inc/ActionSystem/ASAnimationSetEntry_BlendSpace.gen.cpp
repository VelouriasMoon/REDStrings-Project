// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionSystem/Public/ASAnimationSetEntry_BlendSpace.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeASAnimationSetEntry_BlendSpace() {}
// Cross Module References
	ACTIONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FASAnimationSetEntry_BlendSpace();
	UPackage* Z_Construct_UPackage__Script_ActionSystem();
	ACTIONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FASAnimationSetEntry();
	ENGINE_API UClass* Z_Construct_UClass_UBlendSpaceBase_NoRegister();
// End Cross Module References
class UScriptStruct* FASAnimationSetEntry_BlendSpace::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACTIONSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FASAnimationSetEntry_BlendSpace_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FASAnimationSetEntry_BlendSpace, Z_Construct_UPackage__Script_ActionSystem(), TEXT("ASAnimationSetEntry_BlendSpace"), sizeof(FASAnimationSetEntry_BlendSpace), Get_Z_Construct_UScriptStruct_FASAnimationSetEntry_BlendSpace_Hash());
	}
	return Singleton;
}
template<> ACTIONSYSTEM_API UScriptStruct* StaticStruct<FASAnimationSetEntry_BlendSpace>()
{
	return FASAnimationSetEntry_BlendSpace::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FASAnimationSetEntry_BlendSpace(FASAnimationSetEntry_BlendSpace::StaticStruct, TEXT("/Script/ActionSystem"), TEXT("ASAnimationSetEntry_BlendSpace"), false, nullptr, nullptr);
static struct FScriptStruct_ActionSystem_StaticRegisterNativesFASAnimationSetEntry_BlendSpace
{
	FScriptStruct_ActionSystem_StaticRegisterNativesFASAnimationSetEntry_BlendSpace()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ASAnimationSetEntry_BlendSpace")),new UScriptStruct::TCppStructOps<FASAnimationSetEntry_BlendSpace>);
	}
} ScriptStruct_ActionSystem_StaticRegisterNativesFASAnimationSetEntry_BlendSpace;
	struct Z_Construct_UScriptStruct_FASAnimationSetEntry_BlendSpace_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendSpace_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlendSpace;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASAnimationSetEntry_BlendSpace_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ASAnimationSetEntry_BlendSpace.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FASAnimationSetEntry_BlendSpace_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FASAnimationSetEntry_BlendSpace>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASAnimationSetEntry_BlendSpace_Statics::NewProp_BlendSpace_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASAnimationSetEntry_BlendSpace" },
		{ "ModuleRelativePath", "Public/ASAnimationSetEntry_BlendSpace.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FASAnimationSetEntry_BlendSpace_Statics::NewProp_BlendSpace = { "BlendSpace", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASAnimationSetEntry_BlendSpace, BlendSpace), Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FASAnimationSetEntry_BlendSpace_Statics::NewProp_BlendSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASAnimationSetEntry_BlendSpace_Statics::NewProp_BlendSpace_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FASAnimationSetEntry_BlendSpace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASAnimationSetEntry_BlendSpace_Statics::NewProp_BlendSpace,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FASAnimationSetEntry_BlendSpace_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ActionSystem,
		Z_Construct_UScriptStruct_FASAnimationSetEntry,
		&NewStructOps,
		"ASAnimationSetEntry_BlendSpace",
		sizeof(FASAnimationSetEntry_BlendSpace),
		alignof(FASAnimationSetEntry_BlendSpace),
		Z_Construct_UScriptStruct_FASAnimationSetEntry_BlendSpace_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASAnimationSetEntry_BlendSpace_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FASAnimationSetEntry_BlendSpace_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASAnimationSetEntry_BlendSpace_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FASAnimationSetEntry_BlendSpace()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FASAnimationSetEntry_BlendSpace_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ActionSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ASAnimationSetEntry_BlendSpace"), sizeof(FASAnimationSetEntry_BlendSpace), Get_Z_Construct_UScriptStruct_FASAnimationSetEntry_BlendSpace_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FASAnimationSetEntry_BlendSpace_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FASAnimationSetEntry_BlendSpace_Hash() { return 1199405353U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
