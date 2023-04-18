// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionSystem/Public/ASDamageState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeASDamageState() {}
// Cross Module References
	ACTIONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FASDamageState();
	UPackage* Z_Construct_UPackage__Script_ActionSystem();
// End Cross Module References
class UScriptStruct* FASDamageState::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACTIONSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FASDamageState_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FASDamageState, Z_Construct_UPackage__Script_ActionSystem(), TEXT("ASDamageState"), sizeof(FASDamageState), Get_Z_Construct_UScriptStruct_FASDamageState_Hash());
	}
	return Singleton;
}
template<> ACTIONSYSTEM_API UScriptStruct* StaticStruct<FASDamageState>()
{
	return FASDamageState::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FASDamageState(FASDamageState::StaticStruct, TEXT("/Script/ActionSystem"), TEXT("ASDamageState"), false, nullptr, nullptr);
static struct FScriptStruct_ActionSystem_StaticRegisterNativesFASDamageState
{
	FScriptStruct_ActionSystem_StaticRegisterNativesFASDamageState()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ASDamageState")),new UScriptStruct::TCppStructOps<FASDamageState>);
	}
} ScriptStruct_ActionSystem_StaticRegisterNativesFASDamageState;
	struct Z_Construct_UScriptStruct_FASDamageState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProneHighRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProneHighRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProneHighLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProneHighLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProneHighBack_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProneHighBack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProneHighFront_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProneHighFront;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProneMiddleRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProneMiddleRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProneMiddleLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProneMiddleLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProneMiddleBack_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProneMiddleBack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProneMiddleFront_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProneMiddleFront;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProneLight_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProneLight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SupineHighRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SupineHighRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SupineHighLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SupineHighLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SupineHighBack_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SupineHighBack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SupineHighFront_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SupineHighFront;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SupineMiddleRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SupineMiddleRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SupineMiddleLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SupineMiddleLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SupineMiddleBack_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SupineMiddleBack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SupineMiddleFront_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SupineMiddleFront;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SupineLight_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SupineLight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StandHighRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StandHighRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StandHighLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StandHighLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StandHighBack_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StandHighBack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StandHighFront_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StandHighFront;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StandMiddleRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StandMiddleRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StandMiddleLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StandMiddleLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StandMiddleBack_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StandMiddleBack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StandMiddleFront_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StandMiddleFront;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StandLightRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StandLightRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StandLightLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StandLightLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StandLightBack_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StandLightBack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StandLightFront_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StandLightFront;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASDamageState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ASDamageState.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FASDamageState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FASDamageState>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_ProneHighRight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASDamageState" },
		{ "ModuleRelativePath", "Public/ASDamageState.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_ProneHighRight = { "ProneHighRight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASDamageState, ProneHighRight), METADATA_PARAMS(Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_ProneHighRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_ProneHighRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_ProneHighLeft_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASDamageState" },
		{ "ModuleRelativePath", "Public/ASDamageState.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_ProneHighLeft = { "ProneHighLeft", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASDamageState, ProneHighLeft), METADATA_PARAMS(Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_ProneHighLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_ProneHighLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_ProneHighBack_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASDamageState" },
		{ "ModuleRelativePath", "Public/ASDamageState.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_ProneHighBack = { "ProneHighBack", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASDamageState, ProneHighBack), METADATA_PARAMS(Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_ProneHighBack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_ProneHighBack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_ProneHighFront_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASDamageState" },
		{ "ModuleRelativePath", "Public/ASDamageState.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_ProneHighFront = { "ProneHighFront", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASDamageState, ProneHighFront), METADATA_PARAMS(Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_ProneHighFront_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_ProneHighFront_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_ProneMiddleRight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASDamageState" },
		{ "ModuleRelativePath", "Public/ASDamageState.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_ProneMiddleRight = { "ProneMiddleRight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASDamageState, ProneMiddleRight), METADATA_PARAMS(Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_ProneMiddleRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_ProneMiddleRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_ProneMiddleLeft_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASDamageState" },
		{ "ModuleRelativePath", "Public/ASDamageState.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_ProneMiddleLeft = { "ProneMiddleLeft", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASDamageState, ProneMiddleLeft), METADATA_PARAMS(Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_ProneMiddleLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_ProneMiddleLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_ProneMiddleBack_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASDamageState" },
		{ "ModuleRelativePath", "Public/ASDamageState.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_ProneMiddleBack = { "ProneMiddleBack", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASDamageState, ProneMiddleBack), METADATA_PARAMS(Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_ProneMiddleBack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_ProneMiddleBack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_ProneMiddleFront_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASDamageState" },
		{ "ModuleRelativePath", "Public/ASDamageState.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_ProneMiddleFront = { "ProneMiddleFront", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASDamageState, ProneMiddleFront), METADATA_PARAMS(Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_ProneMiddleFront_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_ProneMiddleFront_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_ProneLight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASDamageState" },
		{ "ModuleRelativePath", "Public/ASDamageState.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_ProneLight = { "ProneLight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASDamageState, ProneLight), METADATA_PARAMS(Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_ProneLight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_ProneLight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_SupineHighRight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASDamageState" },
		{ "ModuleRelativePath", "Public/ASDamageState.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_SupineHighRight = { "SupineHighRight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASDamageState, SupineHighRight), METADATA_PARAMS(Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_SupineHighRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_SupineHighRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_SupineHighLeft_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASDamageState" },
		{ "ModuleRelativePath", "Public/ASDamageState.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_SupineHighLeft = { "SupineHighLeft", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASDamageState, SupineHighLeft), METADATA_PARAMS(Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_SupineHighLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_SupineHighLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_SupineHighBack_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASDamageState" },
		{ "ModuleRelativePath", "Public/ASDamageState.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_SupineHighBack = { "SupineHighBack", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASDamageState, SupineHighBack), METADATA_PARAMS(Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_SupineHighBack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_SupineHighBack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_SupineHighFront_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASDamageState" },
		{ "ModuleRelativePath", "Public/ASDamageState.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_SupineHighFront = { "SupineHighFront", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASDamageState, SupineHighFront), METADATA_PARAMS(Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_SupineHighFront_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_SupineHighFront_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_SupineMiddleRight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASDamageState" },
		{ "ModuleRelativePath", "Public/ASDamageState.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_SupineMiddleRight = { "SupineMiddleRight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASDamageState, SupineMiddleRight), METADATA_PARAMS(Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_SupineMiddleRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_SupineMiddleRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_SupineMiddleLeft_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASDamageState" },
		{ "ModuleRelativePath", "Public/ASDamageState.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_SupineMiddleLeft = { "SupineMiddleLeft", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASDamageState, SupineMiddleLeft), METADATA_PARAMS(Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_SupineMiddleLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_SupineMiddleLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_SupineMiddleBack_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASDamageState" },
		{ "ModuleRelativePath", "Public/ASDamageState.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_SupineMiddleBack = { "SupineMiddleBack", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASDamageState, SupineMiddleBack), METADATA_PARAMS(Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_SupineMiddleBack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_SupineMiddleBack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_SupineMiddleFront_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASDamageState" },
		{ "ModuleRelativePath", "Public/ASDamageState.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_SupineMiddleFront = { "SupineMiddleFront", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASDamageState, SupineMiddleFront), METADATA_PARAMS(Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_SupineMiddleFront_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_SupineMiddleFront_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_SupineLight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASDamageState" },
		{ "ModuleRelativePath", "Public/ASDamageState.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_SupineLight = { "SupineLight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASDamageState, SupineLight), METADATA_PARAMS(Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_SupineLight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_SupineLight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_StandHighRight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASDamageState" },
		{ "ModuleRelativePath", "Public/ASDamageState.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_StandHighRight = { "StandHighRight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASDamageState, StandHighRight), METADATA_PARAMS(Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_StandHighRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_StandHighRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_StandHighLeft_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASDamageState" },
		{ "ModuleRelativePath", "Public/ASDamageState.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_StandHighLeft = { "StandHighLeft", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASDamageState, StandHighLeft), METADATA_PARAMS(Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_StandHighLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_StandHighLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_StandHighBack_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASDamageState" },
		{ "ModuleRelativePath", "Public/ASDamageState.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_StandHighBack = { "StandHighBack", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASDamageState, StandHighBack), METADATA_PARAMS(Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_StandHighBack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_StandHighBack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_StandHighFront_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASDamageState" },
		{ "ModuleRelativePath", "Public/ASDamageState.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_StandHighFront = { "StandHighFront", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASDamageState, StandHighFront), METADATA_PARAMS(Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_StandHighFront_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_StandHighFront_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_StandMiddleRight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASDamageState" },
		{ "ModuleRelativePath", "Public/ASDamageState.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_StandMiddleRight = { "StandMiddleRight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASDamageState, StandMiddleRight), METADATA_PARAMS(Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_StandMiddleRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_StandMiddleRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_StandMiddleLeft_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASDamageState" },
		{ "ModuleRelativePath", "Public/ASDamageState.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_StandMiddleLeft = { "StandMiddleLeft", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASDamageState, StandMiddleLeft), METADATA_PARAMS(Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_StandMiddleLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_StandMiddleLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_StandMiddleBack_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASDamageState" },
		{ "ModuleRelativePath", "Public/ASDamageState.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_StandMiddleBack = { "StandMiddleBack", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASDamageState, StandMiddleBack), METADATA_PARAMS(Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_StandMiddleBack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_StandMiddleBack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_StandMiddleFront_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASDamageState" },
		{ "ModuleRelativePath", "Public/ASDamageState.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_StandMiddleFront = { "StandMiddleFront", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASDamageState, StandMiddleFront), METADATA_PARAMS(Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_StandMiddleFront_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_StandMiddleFront_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_StandLightRight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASDamageState" },
		{ "ModuleRelativePath", "Public/ASDamageState.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_StandLightRight = { "StandLightRight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASDamageState, StandLightRight), METADATA_PARAMS(Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_StandLightRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_StandLightRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_StandLightLeft_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASDamageState" },
		{ "ModuleRelativePath", "Public/ASDamageState.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_StandLightLeft = { "StandLightLeft", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASDamageState, StandLightLeft), METADATA_PARAMS(Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_StandLightLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_StandLightLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_StandLightBack_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASDamageState" },
		{ "ModuleRelativePath", "Public/ASDamageState.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_StandLightBack = { "StandLightBack", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASDamageState, StandLightBack), METADATA_PARAMS(Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_StandLightBack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_StandLightBack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_StandLightFront_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASDamageState" },
		{ "ModuleRelativePath", "Public/ASDamageState.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_StandLightFront = { "StandLightFront", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASDamageState, StandLightFront), METADATA_PARAMS(Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_StandLightFront_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_StandLightFront_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FASDamageState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_ProneHighRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_ProneHighLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_ProneHighBack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_ProneHighFront,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_ProneMiddleRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_ProneMiddleLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_ProneMiddleBack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_ProneMiddleFront,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_ProneLight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_SupineHighRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_SupineHighLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_SupineHighBack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_SupineHighFront,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_SupineMiddleRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_SupineMiddleLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_SupineMiddleBack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_SupineMiddleFront,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_SupineLight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_StandHighRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_StandHighLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_StandHighBack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_StandHighFront,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_StandMiddleRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_StandMiddleLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_StandMiddleBack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_StandMiddleFront,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_StandLightRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_StandLightLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_StandLightBack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASDamageState_Statics::NewProp_StandLightFront,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FASDamageState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ActionSystem,
		nullptr,
		&NewStructOps,
		"ASDamageState",
		sizeof(FASDamageState),
		alignof(FASDamageState),
		Z_Construct_UScriptStruct_FASDamageState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASDamageState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FASDamageState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASDamageState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FASDamageState()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FASDamageState_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ActionSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ASDamageState"), sizeof(FASDamageState), Get_Z_Construct_UScriptStruct_FASDamageState_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FASDamageState_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FASDamageState_Hash() { return 2696392036U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
