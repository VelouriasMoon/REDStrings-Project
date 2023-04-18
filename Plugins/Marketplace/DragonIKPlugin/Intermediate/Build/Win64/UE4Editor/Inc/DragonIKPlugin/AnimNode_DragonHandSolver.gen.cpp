// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DragonIKPlugin/Public/AnimNode_DragonHandSolver.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_DragonHandSolver() {}
// Cross Module References
	DRAGONIKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_DragonHandSolver();
	UPackage* Z_Construct_UPackage__Script_DragonIKPlugin();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETraceTypeQuery();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentSpacePoseLink();
	DRAGONIKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FDragonData_MultiInput();
// End Cross Module References
class UScriptStruct* FAnimNode_DragonHandSolver::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DRAGONIKPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_DragonHandSolver_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_DragonHandSolver, Z_Construct_UPackage__Script_DragonIKPlugin(), TEXT("AnimNode_DragonHandSolver"), sizeof(FAnimNode_DragonHandSolver), Get_Z_Construct_UScriptStruct_FAnimNode_DragonHandSolver_Hash());
	}
	return Singleton;
}
template<> DRAGONIKPLUGIN_API UScriptStruct* StaticStruct<FAnimNode_DragonHandSolver>()
{
	return FAnimNode_DragonHandSolver::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_DragonHandSolver(FAnimNode_DragonHandSolver::StaticStruct, TEXT("/Script/DragonIKPlugin"), TEXT("AnimNode_DragonHandSolver"), false, nullptr, nullptr);
static struct FScriptStruct_DragonIKPlugin_StaticRegisterNativesFAnimNode_DragonHandSolver
{
	FScriptStruct_DragonIKPlugin_StaticRegisterNativesFAnimNode_DragonHandSolver()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_DragonHandSolver")),new UScriptStruct::TCppStructOps<FAnimNode_DragonHandSolver>);
	}
} ScriptStruct_DragonIKPlugin_StaticRegisterNativesFAnimNode_DragonHandSolver;
	struct Z_Construct_UScriptStruct_FAnimNode_DragonHandSolver_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActualAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ActualAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Trace_Channel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Trace_Channel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Alpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentPose_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ComponentPose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dragon_input_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_dragon_input_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonHandSolver_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonHandSolver.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_DragonHandSolver_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_DragonHandSolver>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonHandSolver_Statics::NewProp_ActualAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonHandSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonHandSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonHandSolver_Statics::NewProp_ActualAlpha = { "ActualAlpha", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonHandSolver, ActualAlpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonHandSolver_Statics::NewProp_ActualAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonHandSolver_Statics::NewProp_ActualAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonHandSolver_Statics::NewProp_Trace_Channel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonHandSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonHandSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonHandSolver_Statics::NewProp_Trace_Channel = { "Trace_Channel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonHandSolver, Trace_Channel), Z_Construct_UEnum_Engine_ETraceTypeQuery, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonHandSolver_Statics::NewProp_Trace_Channel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonHandSolver_Statics::NewProp_Trace_Channel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonHandSolver_Statics::NewProp_Alpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonHandSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonHandSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonHandSolver_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonHandSolver, Alpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonHandSolver_Statics::NewProp_Alpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonHandSolver_Statics::NewProp_Alpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonHandSolver_Statics::NewProp_ComponentPose_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonHandSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonHandSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonHandSolver_Statics::NewProp_ComponentPose = { "ComponentPose", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonHandSolver, ComponentPose), Z_Construct_UScriptStruct_FComponentSpacePoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonHandSolver_Statics::NewProp_ComponentPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonHandSolver_Statics::NewProp_ComponentPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonHandSolver_Statics::NewProp_dragon_input_data_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonHandSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonHandSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonHandSolver_Statics::NewProp_dragon_input_data = { "dragon_input_data", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonHandSolver, dragon_input_data), Z_Construct_UScriptStruct_FDragonData_MultiInput, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonHandSolver_Statics::NewProp_dragon_input_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonHandSolver_Statics::NewProp_dragon_input_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_DragonHandSolver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonHandSolver_Statics::NewProp_ActualAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonHandSolver_Statics::NewProp_Trace_Channel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonHandSolver_Statics::NewProp_Alpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonHandSolver_Statics::NewProp_ComponentPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonHandSolver_Statics::NewProp_dragon_input_data,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_DragonHandSolver_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DragonIKPlugin,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_DragonHandSolver",
		sizeof(FAnimNode_DragonHandSolver),
		alignof(FAnimNode_DragonHandSolver),
		Z_Construct_UScriptStruct_FAnimNode_DragonHandSolver_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonHandSolver_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonHandSolver_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonHandSolver_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_DragonHandSolver()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_DragonHandSolver_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DragonIKPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_DragonHandSolver"), sizeof(FAnimNode_DragonHandSolver), Get_Z_Construct_UScriptStruct_FAnimNode_DragonHandSolver_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_DragonHandSolver_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_DragonHandSolver_Hash() { return 831730565U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
