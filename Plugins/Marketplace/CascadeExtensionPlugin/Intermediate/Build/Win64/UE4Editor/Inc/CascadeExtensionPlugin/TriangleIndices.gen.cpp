// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CascadeExtensionPlugin/Public/TriangleIndices.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriangleIndices() {}
// Cross Module References
	CASCADEEXTENSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FTriangleIndices();
	UPackage* Z_Construct_UPackage__Script_CascadeExtensionPlugin();
// End Cross Module References
class UScriptStruct* FTriangleIndices::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CASCADEEXTENSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FTriangleIndices_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTriangleIndices, Z_Construct_UPackage__Script_CascadeExtensionPlugin(), TEXT("TriangleIndices"), sizeof(FTriangleIndices), Get_Z_Construct_UScriptStruct_FTriangleIndices_Hash());
	}
	return Singleton;
}
template<> CASCADEEXTENSIONPLUGIN_API UScriptStruct* StaticStruct<FTriangleIndices>()
{
	return FTriangleIndices::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTriangleIndices(FTriangleIndices::StaticStruct, TEXT("/Script/CascadeExtensionPlugin"), TEXT("TriangleIndices"), false, nullptr, nullptr);
static struct FScriptStruct_CascadeExtensionPlugin_StaticRegisterNativesFTriangleIndices
{
	FScriptStruct_CascadeExtensionPlugin_StaticRegisterNativesFTriangleIndices()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TriangleIndices")),new UScriptStruct::TCppStructOps<FTriangleIndices>);
	}
} ScriptStruct_CascadeExtensionPlugin_StaticRegisterNativesFTriangleIndices;
	struct Z_Construct_UScriptStruct_FTriangleIndices_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_v2_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_v2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_v1_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_v1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_v0_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_v0;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTriangleIndices_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TriangleIndices.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTriangleIndices_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTriangleIndices>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTriangleIndices_Statics::NewProp_v2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TriangleIndices" },
		{ "ModuleRelativePath", "Public/TriangleIndices.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTriangleIndices_Statics::NewProp_v2 = { "v2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTriangleIndices, v2), METADATA_PARAMS(Z_Construct_UScriptStruct_FTriangleIndices_Statics::NewProp_v2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTriangleIndices_Statics::NewProp_v2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTriangleIndices_Statics::NewProp_v1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TriangleIndices" },
		{ "ModuleRelativePath", "Public/TriangleIndices.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTriangleIndices_Statics::NewProp_v1 = { "v1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTriangleIndices, v1), METADATA_PARAMS(Z_Construct_UScriptStruct_FTriangleIndices_Statics::NewProp_v1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTriangleIndices_Statics::NewProp_v1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTriangleIndices_Statics::NewProp_v0_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TriangleIndices" },
		{ "ModuleRelativePath", "Public/TriangleIndices.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTriangleIndices_Statics::NewProp_v0 = { "v0", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTriangleIndices, v0), METADATA_PARAMS(Z_Construct_UScriptStruct_FTriangleIndices_Statics::NewProp_v0_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTriangleIndices_Statics::NewProp_v0_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTriangleIndices_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTriangleIndices_Statics::NewProp_v2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTriangleIndices_Statics::NewProp_v1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTriangleIndices_Statics::NewProp_v0,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTriangleIndices_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CascadeExtensionPlugin,
		nullptr,
		&NewStructOps,
		"TriangleIndices",
		sizeof(FTriangleIndices),
		alignof(FTriangleIndices),
		Z_Construct_UScriptStruct_FTriangleIndices_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTriangleIndices_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTriangleIndices_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTriangleIndices_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTriangleIndices()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTriangleIndices_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CascadeExtensionPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TriangleIndices"), sizeof(FTriangleIndices), Get_Z_Construct_UScriptStruct_FTriangleIndices_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTriangleIndices_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTriangleIndices_Hash() { return 2388519515U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
