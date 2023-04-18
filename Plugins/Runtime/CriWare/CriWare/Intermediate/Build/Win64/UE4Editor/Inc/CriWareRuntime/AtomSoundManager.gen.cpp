// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Classes/AtomSoundManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomSoundManager() {}
// Cross Module References
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomSoundManager();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
class UScriptStruct* FAtomSoundManager::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAtomSoundManager_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomSoundManager, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomSoundManager"), sizeof(FAtomSoundManager), Get_Z_Construct_UScriptStruct_FAtomSoundManager_Hash());
	}
	return Singleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomSoundManager>()
{
	return FAtomSoundManager::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtomSoundManager(FAtomSoundManager::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("AtomSoundManager"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomSoundManager
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomSoundManager()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtomSoundManager")),new UScriptStruct::TCppStructOps<FAtomSoundManager>);
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomSoundManager;
	struct Z_Construct_UScriptStruct_FAtomSoundManager_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSoundManager_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/AtomSoundManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomSoundManager_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomSoundManager>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomSoundManager_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"AtomSoundManager",
		sizeof(FAtomSoundManager),
		alignof(FAtomSoundManager),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSoundManager_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSoundManager_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomSoundManager()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtomSoundManager_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtomSoundManager"), sizeof(FAtomSoundManager), Get_Z_Construct_UScriptStruct_FAtomSoundManager_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtomSoundManager_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtomSoundManager_Hash() { return 947155462U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
