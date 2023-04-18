// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DragonIKPlugin/Public/DragonData_MultiInput.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDragonData_MultiInput() {}
// Cross Module References
	DRAGONIKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FDragonData_MultiInput();
	UPackage* Z_Construct_UPackage__Script_DragonIKPlugin();
	DRAGONIKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FDragonData_FootData();
// End Cross Module References
class UScriptStruct* FDragonData_MultiInput::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DRAGONIKPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FDragonData_MultiInput_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDragonData_MultiInput, Z_Construct_UPackage__Script_DragonIKPlugin(), TEXT("DragonData_MultiInput"), sizeof(FDragonData_MultiInput), Get_Z_Construct_UScriptStruct_FDragonData_MultiInput_Hash());
	}
	return Singleton;
}
template<> DRAGONIKPLUGIN_API UScriptStruct* StaticStruct<FDragonData_MultiInput>()
{
	return FDragonData_MultiInput::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDragonData_MultiInput(FDragonData_MultiInput::StaticStruct, TEXT("/Script/DragonIKPlugin"), TEXT("DragonData_MultiInput"), false, nullptr, nullptr);
static struct FScriptStruct_DragonIKPlugin_StaticRegisterNativesFDragonData_MultiInput
{
	FScriptStruct_DragonIKPlugin_StaticRegisterNativesFDragonData_MultiInput()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DragonData_MultiInput")),new UScriptStruct::TCppStructOps<FDragonData_MultiInput>);
	}
} ScriptStruct_DragonIKPlugin_StaticRegisterNativesFDragonData_MultiInput;
	struct Z_Construct_UScriptStruct_FDragonData_MultiInput_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FeetBones_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FeetBones;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FeetBones_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pelvis_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Pelvis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Start_Spine_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Start_Spine;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_MultiInput_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DragonData_MultiInput.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDragonData_MultiInput_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDragonData_MultiInput>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_MultiInput_Statics::NewProp_FeetBones_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DragonData_MultiInput" },
		{ "ModuleRelativePath", "Public/DragonData_MultiInput.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDragonData_MultiInput_Statics::NewProp_FeetBones = { "FeetBones", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDragonData_MultiInput, FeetBones), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_MultiInput_Statics::NewProp_FeetBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_MultiInput_Statics::NewProp_FeetBones_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDragonData_MultiInput_Statics::NewProp_FeetBones_Inner = { "FeetBones", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDragonData_FootData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_MultiInput_Statics::NewProp_Pelvis_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DragonData_MultiInput" },
		{ "ModuleRelativePath", "Public/DragonData_MultiInput.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDragonData_MultiInput_Statics::NewProp_Pelvis = { "Pelvis", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDragonData_MultiInput, Pelvis), METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_MultiInput_Statics::NewProp_Pelvis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_MultiInput_Statics::NewProp_Pelvis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDragonData_MultiInput_Statics::NewProp_Start_Spine_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DragonData_MultiInput" },
		{ "ModuleRelativePath", "Public/DragonData_MultiInput.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDragonData_MultiInput_Statics::NewProp_Start_Spine = { "Start_Spine", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDragonData_MultiInput, Start_Spine), METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_MultiInput_Statics::NewProp_Start_Spine_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_MultiInput_Statics::NewProp_Start_Spine_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDragonData_MultiInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDragonData_MultiInput_Statics::NewProp_FeetBones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDragonData_MultiInput_Statics::NewProp_FeetBones_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDragonData_MultiInput_Statics::NewProp_Pelvis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDragonData_MultiInput_Statics::NewProp_Start_Spine,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDragonData_MultiInput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DragonIKPlugin,
		nullptr,
		&NewStructOps,
		"DragonData_MultiInput",
		sizeof(FDragonData_MultiInput),
		alignof(FDragonData_MultiInput),
		Z_Construct_UScriptStruct_FDragonData_MultiInput_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_MultiInput_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDragonData_MultiInput_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDragonData_MultiInput_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDragonData_MultiInput()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDragonData_MultiInput_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DragonIKPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DragonData_MultiInput"), sizeof(FDragonData_MultiInput), Get_Z_Construct_UScriptStruct_FDragonData_MultiInput_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDragonData_MultiInput_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDragonData_MultiInput_Hash() { return 1932711255U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
