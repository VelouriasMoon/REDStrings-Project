// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Classes/AtomAisac.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomAisac() {}
// Cross Module References
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomAisacInfo();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
class UScriptStruct* FAtomAisacInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAtomAisacInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomAisacInfo, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomAisacInfo"), sizeof(FAtomAisacInfo), Get_Z_Construct_UScriptStruct_FAtomAisacInfo_Hash());
	}
	return Singleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomAisacInfo>()
{
	return FAtomAisacInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtomAisacInfo(FAtomAisacInfo::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("AtomAisacInfo"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomAisacInfo
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomAisacInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtomAisacInfo")),new UScriptStruct::TCppStructOps<FAtomAisacInfo>);
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomAisacInfo;
	struct Z_Construct_UScriptStruct_FAtomAisacInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControlName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ControlName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControlId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ControlId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultControlValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultControlValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultControlFlag_MetaData[];
#endif
		static void NewProp_DefaultControlFlag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DefaultControlFlag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAisacInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/AtomAisac.h" },
		{ "ToolTip", "AtomAisacInfo struct." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomAisacInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomAisacInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAisacInfo_Statics::NewProp_ControlName_MetaData[] = {
		{ "Category", "Aisac" },
		{ "ModuleRelativePath", "Classes/AtomAisac.h" },
		{ "ToolTip", "AISAC control name." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomAisacInfo_Statics::NewProp_ControlName = { "ControlName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomAisacInfo, ControlName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAisacInfo_Statics::NewProp_ControlName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAisacInfo_Statics::NewProp_ControlName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAisacInfo_Statics::NewProp_ControlId_MetaData[] = {
		{ "Category", "Aisac" },
		{ "ModuleRelativePath", "Classes/AtomAisac.h" },
		{ "ToolTip", "AISAC control id." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomAisacInfo_Statics::NewProp_ControlId = { "ControlId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomAisacInfo, ControlId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAisacInfo_Statics::NewProp_ControlId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAisacInfo_Statics::NewProp_ControlId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAisacInfo_Statics::NewProp_DefaultControlValue_MetaData[] = {
		{ "Category", "Aisac" },
		{ "ModuleRelativePath", "Classes/AtomAisac.h" },
		{ "ToolTip", "Default AISAC control value." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomAisacInfo_Statics::NewProp_DefaultControlValue = { "DefaultControlValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomAisacInfo, DefaultControlValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAisacInfo_Statics::NewProp_DefaultControlValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAisacInfo_Statics::NewProp_DefaultControlValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAisacInfo_Statics::NewProp_DefaultControlFlag_MetaData[] = {
		{ "Category", "Aisac" },
		{ "ModuleRelativePath", "Classes/AtomAisac.h" },
		{ "ToolTip", "true: default control value is specified, false: it's not specified." },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomAisacInfo_Statics::NewProp_DefaultControlFlag_SetBit(void* Obj)
	{
		((FAtomAisacInfo*)Obj)->DefaultControlFlag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomAisacInfo_Statics::NewProp_DefaultControlFlag = { "DefaultControlFlag", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAtomAisacInfo), &Z_Construct_UScriptStruct_FAtomAisacInfo_Statics::NewProp_DefaultControlFlag_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAisacInfo_Statics::NewProp_DefaultControlFlag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAisacInfo_Statics::NewProp_DefaultControlFlag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAisacInfo_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Aisac" },
		{ "ModuleRelativePath", "Classes/AtomAisac.h" },
		{ "ToolTip", "Name of AISAC." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomAisacInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomAisacInfo, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAisacInfo_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAisacInfo_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomAisacInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAisacInfo_Statics::NewProp_ControlName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAisacInfo_Statics::NewProp_ControlId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAisacInfo_Statics::NewProp_DefaultControlValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAisacInfo_Statics::NewProp_DefaultControlFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAisacInfo_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomAisacInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"AtomAisacInfo",
		sizeof(FAtomAisacInfo),
		alignof(FAtomAisacInfo),
		Z_Construct_UScriptStruct_FAtomAisacInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAisacInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAisacInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAisacInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomAisacInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtomAisacInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtomAisacInfo"), sizeof(FAtomAisacInfo), Get_Z_Construct_UScriptStruct_FAtomAisacInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtomAisacInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtomAisacInfo_Hash() { return 1145491967U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
