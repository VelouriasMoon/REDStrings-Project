// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionSystem/Public/ASPlayRateSection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeASPlayRateSection() {}
// Cross Module References
	ACTIONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FASPlayRateSection();
	UPackage* Z_Construct_UPackage__Script_ActionSystem();
// End Cross Module References
class UScriptStruct* FASPlayRateSection::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACTIONSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FASPlayRateSection_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FASPlayRateSection, Z_Construct_UPackage__Script_ActionSystem(), TEXT("ASPlayRateSection"), sizeof(FASPlayRateSection), Get_Z_Construct_UScriptStruct_FASPlayRateSection_Hash());
	}
	return Singleton;
}
template<> ACTIONSYSTEM_API UScriptStruct* StaticStruct<FASPlayRateSection>()
{
	return FASPlayRateSection::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FASPlayRateSection(FASPlayRateSection::StaticStruct, TEXT("/Script/ActionSystem"), TEXT("ASPlayRateSection"), false, nullptr, nullptr);
static struct FScriptStruct_ActionSystem_StaticRegisterNativesFASPlayRateSection
{
	FScriptStruct_ActionSystem_StaticRegisterNativesFASPlayRateSection()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ASPlayRateSection")),new UScriptStruct::TCppStructOps<FASPlayRateSection>);
	}
} ScriptStruct_ActionSystem_StaticRegisterNativesFASPlayRateSection;
	struct Z_Construct_UScriptStruct_FASPlayRateSection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASPlayRateSection_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ASPlayRateSection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FASPlayRateSection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FASPlayRateSection>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASPlayRateSection_Statics::NewProp_Scale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASPlayRateSection" },
		{ "ModuleRelativePath", "Public/ASPlayRateSection.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FASPlayRateSection_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASPlayRateSection, Scale), METADATA_PARAMS(Z_Construct_UScriptStruct_FASPlayRateSection_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASPlayRateSection_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASPlayRateSection_Statics::NewProp_Time_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASPlayRateSection" },
		{ "ModuleRelativePath", "Public/ASPlayRateSection.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FASPlayRateSection_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASPlayRateSection, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FASPlayRateSection_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASPlayRateSection_Statics::NewProp_Time_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FASPlayRateSection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASPlayRateSection_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASPlayRateSection_Statics::NewProp_Time,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FASPlayRateSection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ActionSystem,
		nullptr,
		&NewStructOps,
		"ASPlayRateSection",
		sizeof(FASPlayRateSection),
		alignof(FASPlayRateSection),
		Z_Construct_UScriptStruct_FASPlayRateSection_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASPlayRateSection_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FASPlayRateSection_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASPlayRateSection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FASPlayRateSection()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FASPlayRateSection_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ActionSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ASPlayRateSection"), sizeof(FASPlayRateSection), Get_Z_Construct_UScriptStruct_FASPlayRateSection_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FASPlayRateSection_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FASPlayRateSection_Hash() { return 3547300309U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
