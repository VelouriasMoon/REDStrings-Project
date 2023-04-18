// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionSystem/Public/ASAnimationSetEntry.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeASAnimationSetEntry() {}
// Cross Module References
	ACTIONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FASAnimationSetEntry();
	UPackage* Z_Construct_UPackage__Script_ActionSystem();
// End Cross Module References
class UScriptStruct* FASAnimationSetEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACTIONSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FASAnimationSetEntry_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FASAnimationSetEntry, Z_Construct_UPackage__Script_ActionSystem(), TEXT("ASAnimationSetEntry"), sizeof(FASAnimationSetEntry), Get_Z_Construct_UScriptStruct_FASAnimationSetEntry_Hash());
	}
	return Singleton;
}
template<> ACTIONSYSTEM_API UScriptStruct* StaticStruct<FASAnimationSetEntry>()
{
	return FASAnimationSetEntry::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FASAnimationSetEntry(FASAnimationSetEntry::StaticStruct, TEXT("/Script/ActionSystem"), TEXT("ASAnimationSetEntry"), false, nullptr, nullptr);
static struct FScriptStruct_ActionSystem_StaticRegisterNativesFASAnimationSetEntry
{
	FScriptStruct_ActionSystem_StaticRegisterNativesFASAnimationSetEntry()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ASAnimationSetEntry")),new UScriptStruct::TCppStructOps<FASAnimationSetEntry>);
	}
} ScriptStruct_ActionSystem_StaticRegisterNativesFASAnimationSetEntry;
	struct Z_Construct_UScriptStruct_FASAnimationSetEntry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntryName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EntryName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASAnimationSetEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ASAnimationSetEntry.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FASAnimationSetEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FASAnimationSetEntry>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASAnimationSetEntry_Statics::NewProp_EntryName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASAnimationSetEntry" },
		{ "ModuleRelativePath", "Public/ASAnimationSetEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FASAnimationSetEntry_Statics::NewProp_EntryName = { "EntryName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASAnimationSetEntry, EntryName), METADATA_PARAMS(Z_Construct_UScriptStruct_FASAnimationSetEntry_Statics::NewProp_EntryName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASAnimationSetEntry_Statics::NewProp_EntryName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FASAnimationSetEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASAnimationSetEntry_Statics::NewProp_EntryName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FASAnimationSetEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ActionSystem,
		nullptr,
		&NewStructOps,
		"ASAnimationSetEntry",
		sizeof(FASAnimationSetEntry),
		alignof(FASAnimationSetEntry),
		Z_Construct_UScriptStruct_FASAnimationSetEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASAnimationSetEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FASAnimationSetEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASAnimationSetEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FASAnimationSetEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FASAnimationSetEntry_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ActionSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ASAnimationSetEntry"), sizeof(FASAnimationSetEntry), Get_Z_Construct_UScriptStruct_FASAnimationSetEntry_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FASAnimationSetEntry_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FASAnimationSetEntry_Hash() { return 368880535U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
