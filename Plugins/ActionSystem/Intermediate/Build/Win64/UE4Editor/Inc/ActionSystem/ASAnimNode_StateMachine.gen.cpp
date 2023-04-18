// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionSystem/Public/ASAnimNode_StateMachine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeASAnimNode_StateMachine() {}
// Cross Module References
	ACTIONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FASAnimNode_StateMachine();
	UPackage* Z_Construct_UPackage__Script_ActionSystem();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ACTIONSYSTEM_API UClass* Z_Construct_UClass_UASAnimNotify_StateChange_NoRegister();
	ACTIONSYSTEM_API UClass* Z_Construct_UClass_UASAnimationSet_NoRegister();
	ACTIONSYSTEM_API UClass* Z_Construct_UClass_UASStateMachine_NoRegister();
// End Cross Module References
class UScriptStruct* FASAnimNode_StateMachine::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACTIONSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FASAnimNode_StateMachine_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FASAnimNode_StateMachine, Z_Construct_UPackage__Script_ActionSystem(), TEXT("ASAnimNode_StateMachine"), sizeof(FASAnimNode_StateMachine), Get_Z_Construct_UScriptStruct_FASAnimNode_StateMachine_Hash());
	}
	return Singleton;
}
template<> ACTIONSYSTEM_API UScriptStruct* StaticStruct<FASAnimNode_StateMachine>()
{
	return FASAnimNode_StateMachine::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FASAnimNode_StateMachine(FASAnimNode_StateMachine::StaticStruct, TEXT("/Script/ActionSystem"), TEXT("ASAnimNode_StateMachine"), false, nullptr, nullptr);
static struct FScriptStruct_ActionSystem_StaticRegisterNativesFASAnimNode_StateMachine
{
	FScriptStruct_ActionSystem_StaticRegisterNativesFASAnimNode_StateMachine()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ASAnimNode_StateMachine")),new UScriptStruct::TCppStructOps<FASAnimNode_StateMachine>);
	}
} ScriptStruct_ActionSystem_StaticRegisterNativesFASAnimNode_StateMachine;
	struct Z_Construct_UScriptStruct_FASAnimNode_StateMachine_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateChangeNotifies_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StateChangeNotifies;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StateChangeNotifies_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendSpaceValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BlendSpaceValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendSpaceValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendSpaceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BlendSpaceName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BlendSpaceName_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxTransitionsPerFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxTransitionsPerFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllStartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AllStartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimationSet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateMachine_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StateMachine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NodeName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASAnimNode_StateMachine_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ASAnimNode_StateMachine.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FASAnimNode_StateMachine_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FASAnimNode_StateMachine>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASAnimNode_StateMachine_Statics::NewProp_StateChangeNotifies_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASAnimNode_StateMachine" },
		{ "ModuleRelativePath", "Public/ASAnimNode_StateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FASAnimNode_StateMachine_Statics::NewProp_StateChangeNotifies = { "StateChangeNotifies", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASAnimNode_StateMachine, StateChangeNotifies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FASAnimNode_StateMachine_Statics::NewProp_StateChangeNotifies_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASAnimNode_StateMachine_Statics::NewProp_StateChangeNotifies_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FASAnimNode_StateMachine_Statics::NewProp_StateChangeNotifies_Inner = { "StateChangeNotifies", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UASAnimNotify_StateChange_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASAnimNode_StateMachine_Statics::NewProp_BlendSpaceValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASAnimNode_StateMachine" },
		{ "ModuleRelativePath", "Public/ASAnimNode_StateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FASAnimNode_StateMachine_Statics::NewProp_BlendSpaceValue = { "BlendSpaceValue", nullptr, (EPropertyFlags)0x0010000000000045, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASAnimNode_StateMachine, BlendSpaceValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FASAnimNode_StateMachine_Statics::NewProp_BlendSpaceValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASAnimNode_StateMachine_Statics::NewProp_BlendSpaceValue_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FASAnimNode_StateMachine_Statics::NewProp_BlendSpaceValue_Inner = { "BlendSpaceValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASAnimNode_StateMachine_Statics::NewProp_BlendSpaceName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASAnimNode_StateMachine" },
		{ "ModuleRelativePath", "Public/ASAnimNode_StateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FASAnimNode_StateMachine_Statics::NewProp_BlendSpaceName = { "BlendSpaceName", nullptr, (EPropertyFlags)0x0010000000000045, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASAnimNode_StateMachine, BlendSpaceName), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FASAnimNode_StateMachine_Statics::NewProp_BlendSpaceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASAnimNode_StateMachine_Statics::NewProp_BlendSpaceName_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FASAnimNode_StateMachine_Statics::NewProp_BlendSpaceName_Inner = { "BlendSpaceName", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASAnimNode_StateMachine_Statics::NewProp_MaxTransitionsPerFrame_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASAnimNode_StateMachine" },
		{ "ModuleRelativePath", "Public/ASAnimNode_StateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FASAnimNode_StateMachine_Statics::NewProp_MaxTransitionsPerFrame = { "MaxTransitionsPerFrame", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASAnimNode_StateMachine, MaxTransitionsPerFrame), METADATA_PARAMS(Z_Construct_UScriptStruct_FASAnimNode_StateMachine_Statics::NewProp_MaxTransitionsPerFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASAnimNode_StateMachine_Statics::NewProp_MaxTransitionsPerFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASAnimNode_StateMachine_Statics::NewProp_AllStartTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASAnimNode_StateMachine" },
		{ "ModuleRelativePath", "Public/ASAnimNode_StateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FASAnimNode_StateMachine_Statics::NewProp_AllStartTime = { "AllStartTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASAnimNode_StateMachine, AllStartTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FASAnimNode_StateMachine_Statics::NewProp_AllStartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASAnimNode_StateMachine_Statics::NewProp_AllStartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASAnimNode_StateMachine_Statics::NewProp_PlayRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASAnimNode_StateMachine" },
		{ "ModuleRelativePath", "Public/ASAnimNode_StateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FASAnimNode_StateMachine_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASAnimNode_StateMachine, PlayRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FASAnimNode_StateMachine_Statics::NewProp_PlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASAnimNode_StateMachine_Statics::NewProp_PlayRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASAnimNode_StateMachine_Statics::NewProp_AnimationSet_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASAnimNode_StateMachine" },
		{ "ModuleRelativePath", "Public/ASAnimNode_StateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FASAnimNode_StateMachine_Statics::NewProp_AnimationSet = { "AnimationSet", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASAnimNode_StateMachine, AnimationSet), Z_Construct_UClass_UASAnimationSet_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FASAnimNode_StateMachine_Statics::NewProp_AnimationSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASAnimNode_StateMachine_Statics::NewProp_AnimationSet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASAnimNode_StateMachine_Statics::NewProp_StateMachine_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASAnimNode_StateMachine" },
		{ "ModuleRelativePath", "Public/ASAnimNode_StateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FASAnimNode_StateMachine_Statics::NewProp_StateMachine = { "StateMachine", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASAnimNode_StateMachine, StateMachine), Z_Construct_UClass_UASStateMachine_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FASAnimNode_StateMachine_Statics::NewProp_StateMachine_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASAnimNode_StateMachine_Statics::NewProp_StateMachine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASAnimNode_StateMachine_Statics::NewProp_NodeName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASAnimNode_StateMachine" },
		{ "ModuleRelativePath", "Public/ASAnimNode_StateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FASAnimNode_StateMachine_Statics::NewProp_NodeName = { "NodeName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASAnimNode_StateMachine, NodeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FASAnimNode_StateMachine_Statics::NewProp_NodeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASAnimNode_StateMachine_Statics::NewProp_NodeName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FASAnimNode_StateMachine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASAnimNode_StateMachine_Statics::NewProp_StateChangeNotifies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASAnimNode_StateMachine_Statics::NewProp_StateChangeNotifies_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASAnimNode_StateMachine_Statics::NewProp_BlendSpaceValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASAnimNode_StateMachine_Statics::NewProp_BlendSpaceValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASAnimNode_StateMachine_Statics::NewProp_BlendSpaceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASAnimNode_StateMachine_Statics::NewProp_BlendSpaceName_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASAnimNode_StateMachine_Statics::NewProp_MaxTransitionsPerFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASAnimNode_StateMachine_Statics::NewProp_AllStartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASAnimNode_StateMachine_Statics::NewProp_PlayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASAnimNode_StateMachine_Statics::NewProp_AnimationSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASAnimNode_StateMachine_Statics::NewProp_StateMachine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASAnimNode_StateMachine_Statics::NewProp_NodeName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FASAnimNode_StateMachine_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ActionSystem,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"ASAnimNode_StateMachine",
		sizeof(FASAnimNode_StateMachine),
		alignof(FASAnimNode_StateMachine),
		Z_Construct_UScriptStruct_FASAnimNode_StateMachine_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASAnimNode_StateMachine_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FASAnimNode_StateMachine_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASAnimNode_StateMachine_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FASAnimNode_StateMachine()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FASAnimNode_StateMachine_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ActionSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ASAnimNode_StateMachine"), sizeof(FASAnimNode_StateMachine), Get_Z_Construct_UScriptStruct_FASAnimNode_StateMachine_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FASAnimNode_StateMachine_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FASAnimNode_StateMachine_Hash() { return 1751481626U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
