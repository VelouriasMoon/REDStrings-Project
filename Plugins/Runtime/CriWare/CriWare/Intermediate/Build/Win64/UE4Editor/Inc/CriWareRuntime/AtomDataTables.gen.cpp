// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Classes/AtomDataTables.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomDataTables() {}
// Cross Module References
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomConfigDataTable();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomStringWithComment();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomDspBusSettingsParam();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomCategoryParam();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomGlobalAisacSettingsParam();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomGameVariableParam();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomAisacControlSettingsParam();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomSelectorSettingsParam();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomCueSheetDataTable();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomCueInfoDataTable();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomCueInfoAttachedAisacControlParam();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomCueInfoBlocksParam();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomCueInfoBusSendParam();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomCueInfoTrackParam();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomCueInfoCategoryParam();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomCueInfoSelectorParam();
// End Cross Module References
class UScriptStruct* FAtomConfigDataTable::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAtomConfigDataTable_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomConfigDataTable, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomConfigDataTable"), sizeof(FAtomConfigDataTable), Get_Z_Construct_UScriptStruct_FAtomConfigDataTable_Hash());
	}
	return Singleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomConfigDataTable>()
{
	return FAtomConfigDataTable::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtomConfigDataTable(FAtomConfigDataTable::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("AtomConfigDataTable"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomConfigDataTable
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomConfigDataTable()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtomConfigDataTable")),new UScriptStruct::TCppStructOps<FAtomConfigDataTable>);
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomConfigDataTable;
	struct Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_React_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_React;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_React_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DspBusSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DspBusSettings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DspBusSettings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Category;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Category_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalAisac_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GlobalAisac;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GlobalAisac_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameVariable_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GameVariable;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameVariable_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AisacControl_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AisacControl;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AisacControl_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Selector_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Selector;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Selector_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumReacts_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumReacts;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumSelectors_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumSelectors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumGameVariables_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumGameVariables;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumDspBus_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumDspBus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumDspBusSettingSnapshots_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumDspBusSettingSnapshots;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumDspBusSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumDspBusSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumVoiceLimitGroups_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumVoiceLimitGroups;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumGlobalAisacs_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumGlobalAisacs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumAisacControls_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumAisacControls;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumCategories_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumCategories;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumCategoriesPerPlayback_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumCategoriesPerPlayback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BuildDate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "Atom Configuration data table." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomConfigDataTable>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_React_MetaData[] = {
		{ "Category", "React" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "React." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_React = { "React", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomConfigDataTable, React), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_React_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_React_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_React_Inner = { "React", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAtomStringWithComment, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_DspBusSettings_MetaData[] = {
		{ "Category", "DspBusSettings" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "DspBusSettings." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_DspBusSettings = { "DspBusSettings", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomConfigDataTable, DspBusSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_DspBusSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_DspBusSettings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_DspBusSettings_Inner = { "DspBusSettings", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAtomDspBusSettingsParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_Category_MetaData[] = {
		{ "Category", "Category" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "Category." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomConfigDataTable, Category), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_Category_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_Category_Inner = { "Category", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAtomCategoryParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_GlobalAisac_MetaData[] = {
		{ "Category", "AisacControl" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "GlobalAisacControlName." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_GlobalAisac = { "GlobalAisac", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomConfigDataTable, GlobalAisac), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_GlobalAisac_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_GlobalAisac_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_GlobalAisac_Inner = { "GlobalAisac", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAtomGlobalAisacSettingsParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_GameVariable_MetaData[] = {
		{ "Category", "GameVariable" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "GameVariableName." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_GameVariable = { "GameVariable", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomConfigDataTable, GameVariable), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_GameVariable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_GameVariable_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_GameVariable_Inner = { "GameVariable", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAtomGameVariableParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_AisacControl_MetaData[] = {
		{ "Category", "AisacControl" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "AisacControl." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_AisacControl = { "AisacControl", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomConfigDataTable, AisacControl), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_AisacControl_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_AisacControl_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_AisacControl_Inner = { "AisacControl", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAtomAisacControlSettingsParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_Selector_MetaData[] = {
		{ "Category", "Selector" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "Selector." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_Selector = { "Selector", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomConfigDataTable, Selector), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_Selector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_Selector_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_Selector_Inner = { "Selector", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAtomSelectorSettingsParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumReacts_MetaData[] = {
		{ "Category", "React" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "Number of Reacts." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumReacts = { "NumReacts", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomConfigDataTable, NumReacts), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumReacts_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumReacts_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumSelectors_MetaData[] = {
		{ "Category", "Selector" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "Number of Selectors." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumSelectors = { "NumSelectors", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomConfigDataTable, NumSelectors), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumSelectors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumSelectors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumGameVariables_MetaData[] = {
		{ "Category", "GameVariable" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "Number of GameVariables." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumGameVariables = { "NumGameVariables", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomConfigDataTable, NumGameVariables), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumGameVariables_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumGameVariables_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumDspBus_MetaData[] = {
		{ "Category", "DspBusSettings" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "Number of DspBusnames." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumDspBus = { "NumDspBus", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomConfigDataTable, NumDspBus), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumDspBus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumDspBus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumDspBusSettingSnapshots_MetaData[] = {
		{ "Category", "DspBusSettings" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "Number of DspSettingSnapshots." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumDspBusSettingSnapshots = { "NumDspBusSettingSnapshots", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomConfigDataTable, NumDspBusSettingSnapshots), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumDspBusSettingSnapshots_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumDspBusSettingSnapshots_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumDspBusSettings_MetaData[] = {
		{ "Category", "DspBusSettings" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "Number of DspSettings." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumDspBusSettings = { "NumDspBusSettings", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomConfigDataTable, NumDspBusSettings), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumDspBusSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumDspBusSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumVoiceLimitGroups_MetaData[] = {
		{ "Category", "VoiceLimit" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "Number of VoiceLimitGroups." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumVoiceLimitGroups = { "NumVoiceLimitGroups", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomConfigDataTable, NumVoiceLimitGroups), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumVoiceLimitGroups_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumVoiceLimitGroups_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumGlobalAisacs_MetaData[] = {
		{ "Category", "AisacControl" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "Number of GlobalAisac." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumGlobalAisacs = { "NumGlobalAisacs", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomConfigDataTable, NumGlobalAisacs), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumGlobalAisacs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumGlobalAisacs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumAisacControls_MetaData[] = {
		{ "Category", "AisacControl" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "Number of AisacControls." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumAisacControls = { "NumAisacControls", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomConfigDataTable, NumAisacControls), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumAisacControls_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumAisacControls_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumCategories_MetaData[] = {
		{ "Category", "Category" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "Number of Categories." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumCategories = { "NumCategories", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomConfigDataTable, NumCategories), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumCategories_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumCategories_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumCategoriesPerPlayback_MetaData[] = {
		{ "Category", "Category" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "Number of CategoriesPerPlayback." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumCategoriesPerPlayback = { "NumCategoriesPerPlayback", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomConfigDataTable, NumCategoriesPerPlayback), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumCategoriesPerPlayback_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumCategoriesPerPlayback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_BuildDate_MetaData[] = {
		{ "Category", "JSONBuildInfo" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "BuildDate." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_BuildDate = { "BuildDate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomConfigDataTable, BuildDate), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_BuildDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_BuildDate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_React,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_React_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_DspBusSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_DspBusSettings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_Category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_Category_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_GlobalAisac,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_GlobalAisac_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_GameVariable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_GameVariable_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_AisacControl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_AisacControl_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_Selector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_Selector_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumReacts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumSelectors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumGameVariables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumDspBus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumDspBusSettingSnapshots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumDspBusSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumVoiceLimitGroups,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumGlobalAisacs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumAisacControls,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumCategories,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumCategoriesPerPlayback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_BuildDate,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"AtomConfigDataTable",
		sizeof(FAtomConfigDataTable),
		alignof(FAtomConfigDataTable),
		Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomConfigDataTable()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtomConfigDataTable_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtomConfigDataTable"), sizeof(FAtomConfigDataTable), Get_Z_Construct_UScriptStruct_FAtomConfigDataTable_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtomConfigDataTable_Hash() { return 1974629932U; }
class UScriptStruct* FAtomDspBusSettingsParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomDspBusSettingsParam, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomDspBusSettingsParam"), sizeof(FAtomDspBusSettingsParam), Get_Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Hash());
	}
	return Singleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomDspBusSettingsParam>()
{
	return FAtomDspBusSettingsParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtomDspBusSettingsParam(FAtomDspBusSettingsParam::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("AtomDspBusSettingsParam"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomDspBusSettingsParam
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomDspBusSettingsParam()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtomDspBusSettingsParam")),new UScriptStruct::TCppStructOps<FAtomDspBusSettingsParam>);
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomDspBusSettingsParam;
	struct Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bus_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Bus;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bus_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Snapshot_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Snapshot;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Snapshot_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BusSettingsName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BusSettingsName;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Comment_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Comment;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "Atom DspBus settings parameters." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomDspBusSettingsParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::NewProp_Bus_MetaData[] = {
		{ "Category", "DspBusSettings" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "BusName." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::NewProp_Bus = { "Bus", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomDspBusSettingsParam, Bus), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::NewProp_Bus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::NewProp_Bus_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::NewProp_Bus_Inner = { "Bus", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAtomStringWithComment, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::NewProp_Snapshot_MetaData[] = {
		{ "Category", "DspBusSettings" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "SnapshotName." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::NewProp_Snapshot = { "Snapshot", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomDspBusSettingsParam, Snapshot), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::NewProp_Snapshot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::NewProp_Snapshot_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::NewProp_Snapshot_Inner = { "Snapshot", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAtomStringWithComment, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::NewProp_BusSettingsName_MetaData[] = {
		{ "Category", "DspBusSettings" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "BusSettingsName." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::NewProp_BusSettingsName = { "BusSettingsName", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomDspBusSettingsParam, BusSettingsName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::NewProp_BusSettingsName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::NewProp_BusSettingsName_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::NewProp_Comment_MetaData[] = {
		{ "Category", "DspBusSettings" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "Comment For Bus Settings." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::NewProp_Comment = { "Comment", nullptr, (EPropertyFlags)0x0010000800020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomDspBusSettingsParam, Comment), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::NewProp_Comment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::NewProp_Comment_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::NewProp_Bus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::NewProp_Bus_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::NewProp_Snapshot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::NewProp_Snapshot_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::NewProp_BusSettingsName,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::NewProp_Comment,
#endif // WITH_EDITORONLY_DATA
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"AtomDspBusSettingsParam",
		sizeof(FAtomDspBusSettingsParam),
		alignof(FAtomDspBusSettingsParam),
		Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomDspBusSettingsParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtomDspBusSettingsParam"), sizeof(FAtomDspBusSettingsParam), Get_Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Hash() { return 1908640464U; }
class UScriptStruct* FAtomCategoryParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAtomCategoryParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomCategoryParam, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomCategoryParam"), sizeof(FAtomCategoryParam), Get_Z_Construct_UScriptStruct_FAtomCategoryParam_Hash());
	}
	return Singleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomCategoryParam>()
{
	return FAtomCategoryParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtomCategoryParam(FAtomCategoryParam::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("AtomCategoryParam"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomCategoryParam
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomCategoryParam()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtomCategoryParam")),new UScriptStruct::TCppStructOps<FAtomCategoryParam>);
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomCategoryParam;
	struct Z_Construct_UScriptStruct_FAtomCategoryParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Volume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Volume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Group;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Id;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Comment_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Comment;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCategoryParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "Atom category parameters." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomCategoryParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomCategoryParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCategoryParam_Statics::NewProp_Volume_MetaData[] = {
		{ "Category", "Category" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "CategoryVolume." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomCategoryParam_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCategoryParam, Volume), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCategoryParam_Statics::NewProp_Volume_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCategoryParam_Statics::NewProp_Volume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCategoryParam_Statics::NewProp_Group_MetaData[] = {
		{ "Category", "Category" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "CategoryGroup." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomCategoryParam_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCategoryParam, Group), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCategoryParam_Statics::NewProp_Group_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCategoryParam_Statics::NewProp_Group_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCategoryParam_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Category" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "CategoryName." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomCategoryParam_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCategoryParam, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCategoryParam_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCategoryParam_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCategoryParam_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "Category" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "CategoryID." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomCategoryParam_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCategoryParam, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCategoryParam_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCategoryParam_Statics::NewProp_Id_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCategoryParam_Statics::NewProp_Comment_MetaData[] = {
		{ "Category", "Category" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "Comment for Category." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomCategoryParam_Statics::NewProp_Comment = { "Comment", nullptr, (EPropertyFlags)0x0010000800020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCategoryParam, Comment), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCategoryParam_Statics::NewProp_Comment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCategoryParam_Statics::NewProp_Comment_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomCategoryParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCategoryParam_Statics::NewProp_Volume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCategoryParam_Statics::NewProp_Group,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCategoryParam_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCategoryParam_Statics::NewProp_Id,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCategoryParam_Statics::NewProp_Comment,
#endif // WITH_EDITORONLY_DATA
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomCategoryParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"AtomCategoryParam",
		sizeof(FAtomCategoryParam),
		alignof(FAtomCategoryParam),
		Z_Construct_UScriptStruct_FAtomCategoryParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCategoryParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCategoryParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCategoryParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomCategoryParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtomCategoryParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtomCategoryParam"), sizeof(FAtomCategoryParam), Get_Z_Construct_UScriptStruct_FAtomCategoryParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtomCategoryParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtomCategoryParam_Hash() { return 3209081665U; }
class UScriptStruct* FAtomGameVariableParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAtomGameVariableParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomGameVariableParam, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomGameVariableParam"), sizeof(FAtomGameVariableParam), Get_Z_Construct_UScriptStruct_FAtomGameVariableParam_Hash());
	}
	return Singleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomGameVariableParam>()
{
	return FAtomGameVariableParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtomGameVariableParam(FAtomGameVariableParam::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("AtomGameVariableParam"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomGameVariableParam
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomGameVariableParam()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtomGameVariableParam")),new UScriptStruct::TCppStructOps<FAtomGameVariableParam>);
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomGameVariableParam;
	struct Z_Construct_UScriptStruct_FAtomGameVariableParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Comment_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Comment;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomGameVariableParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "Atom Game Variable parameters." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomGameVariableParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomGameVariableParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomGameVariableParam_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "GameVariable" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "GameVariable Value." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomGameVariableParam_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomGameVariableParam, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomGameVariableParam_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomGameVariableParam_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomGameVariableParam_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "GameVariable" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "GameVariable Name." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomGameVariableParam_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomGameVariableParam, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomGameVariableParam_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomGameVariableParam_Statics::NewProp_Name_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomGameVariableParam_Statics::NewProp_Comment_MetaData[] = {
		{ "Category", "GameVariable" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "Comment For GameVariable." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomGameVariableParam_Statics::NewProp_Comment = { "Comment", nullptr, (EPropertyFlags)0x0010000800020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomGameVariableParam, Comment), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomGameVariableParam_Statics::NewProp_Comment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomGameVariableParam_Statics::NewProp_Comment_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomGameVariableParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomGameVariableParam_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomGameVariableParam_Statics::NewProp_Name,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomGameVariableParam_Statics::NewProp_Comment,
#endif // WITH_EDITORONLY_DATA
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomGameVariableParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"AtomGameVariableParam",
		sizeof(FAtomGameVariableParam),
		alignof(FAtomGameVariableParam),
		Z_Construct_UScriptStruct_FAtomGameVariableParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomGameVariableParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomGameVariableParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomGameVariableParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomGameVariableParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtomGameVariableParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtomGameVariableParam"), sizeof(FAtomGameVariableParam), Get_Z_Construct_UScriptStruct_FAtomGameVariableParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtomGameVariableParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtomGameVariableParam_Hash() { return 167049177U; }
class UScriptStruct* FAtomGlobalAisacSettingsParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAtomGlobalAisacSettingsParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomGlobalAisacSettingsParam, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomGlobalAisacSettingsParam"), sizeof(FAtomGlobalAisacSettingsParam), Get_Z_Construct_UScriptStruct_FAtomGlobalAisacSettingsParam_Hash());
	}
	return Singleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomGlobalAisacSettingsParam>()
{
	return FAtomGlobalAisacSettingsParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtomGlobalAisacSettingsParam(FAtomGlobalAisacSettingsParam::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("AtomGlobalAisacSettingsParam"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomGlobalAisacSettingsParam
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomGlobalAisacSettingsParam()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtomGlobalAisacSettingsParam")),new UScriptStruct::TCppStructOps<FAtomGlobalAisacSettingsParam>);
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomGlobalAisacSettingsParam;
	struct Z_Construct_UScriptStruct_FAtomGlobalAisacSettingsParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AisacControl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AisacControl;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Comment_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Comment;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomGlobalAisacSettingsParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "Atom global Aisac settings parameters." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomGlobalAisacSettingsParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomGlobalAisacSettingsParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomGlobalAisacSettingsParam_Statics::NewProp_AisacControl_MetaData[] = {
		{ "Category", "AisacControl" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "AisacControlName." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomGlobalAisacSettingsParam_Statics::NewProp_AisacControl = { "AisacControl", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomGlobalAisacSettingsParam, AisacControl), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomGlobalAisacSettingsParam_Statics::NewProp_AisacControl_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomGlobalAisacSettingsParam_Statics::NewProp_AisacControl_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomGlobalAisacSettingsParam_Statics::NewProp_Comment_MetaData[] = {
		{ "Category", "AisacControl" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "Comment For AISAC." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomGlobalAisacSettingsParam_Statics::NewProp_Comment = { "Comment", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomGlobalAisacSettingsParam, Comment), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomGlobalAisacSettingsParam_Statics::NewProp_Comment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomGlobalAisacSettingsParam_Statics::NewProp_Comment_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomGlobalAisacSettingsParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomGlobalAisacSettingsParam_Statics::NewProp_AisacControl,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomGlobalAisacSettingsParam_Statics::NewProp_Comment,
#endif // WITH_EDITORONLY_DATA
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomGlobalAisacSettingsParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"AtomGlobalAisacSettingsParam",
		sizeof(FAtomGlobalAisacSettingsParam),
		alignof(FAtomGlobalAisacSettingsParam),
		Z_Construct_UScriptStruct_FAtomGlobalAisacSettingsParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomGlobalAisacSettingsParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomGlobalAisacSettingsParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomGlobalAisacSettingsParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomGlobalAisacSettingsParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtomGlobalAisacSettingsParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtomGlobalAisacSettingsParam"), sizeof(FAtomGlobalAisacSettingsParam), Get_Z_Construct_UScriptStruct_FAtomGlobalAisacSettingsParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtomGlobalAisacSettingsParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtomGlobalAisacSettingsParam_Hash() { return 1969986273U; }
class UScriptStruct* FAtomAisacControlSettingsParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAtomAisacControlSettingsParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomAisacControlSettingsParam, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomAisacControlSettingsParam"), sizeof(FAtomAisacControlSettingsParam), Get_Z_Construct_UScriptStruct_FAtomAisacControlSettingsParam_Hash());
	}
	return Singleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomAisacControlSettingsParam>()
{
	return FAtomAisacControlSettingsParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtomAisacControlSettingsParam(FAtomAisacControlSettingsParam::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("AtomAisacControlSettingsParam"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomAisacControlSettingsParam
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomAisacControlSettingsParam()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtomAisacControlSettingsParam")),new UScriptStruct::TCppStructOps<FAtomAisacControlSettingsParam>);
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomAisacControlSettingsParam;
	struct Z_Construct_UScriptStruct_FAtomAisacControlSettingsParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Id;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Comment_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Comment;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAisacControlSettingsParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "Atom Aisac control settings parameters." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomAisacControlSettingsParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomAisacControlSettingsParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAisacControlSettingsParam_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "AisacControl" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "AisacControlName." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomAisacControlSettingsParam_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomAisacControlSettingsParam, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAisacControlSettingsParam_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAisacControlSettingsParam_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAisacControlSettingsParam_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "AisacControl" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "AisacControlId." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomAisacControlSettingsParam_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomAisacControlSettingsParam, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAisacControlSettingsParam_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAisacControlSettingsParam_Statics::NewProp_Id_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAisacControlSettingsParam_Statics::NewProp_Comment_MetaData[] = {
		{ "Category", "AisacControl" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "Comment For AISAC." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomAisacControlSettingsParam_Statics::NewProp_Comment = { "Comment", nullptr, (EPropertyFlags)0x0010000800020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomAisacControlSettingsParam, Comment), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAisacControlSettingsParam_Statics::NewProp_Comment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAisacControlSettingsParam_Statics::NewProp_Comment_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomAisacControlSettingsParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAisacControlSettingsParam_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAisacControlSettingsParam_Statics::NewProp_Id,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAisacControlSettingsParam_Statics::NewProp_Comment,
#endif // WITH_EDITORONLY_DATA
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomAisacControlSettingsParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"AtomAisacControlSettingsParam",
		sizeof(FAtomAisacControlSettingsParam),
		alignof(FAtomAisacControlSettingsParam),
		Z_Construct_UScriptStruct_FAtomAisacControlSettingsParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAisacControlSettingsParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAisacControlSettingsParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAisacControlSettingsParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomAisacControlSettingsParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtomAisacControlSettingsParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtomAisacControlSettingsParam"), sizeof(FAtomAisacControlSettingsParam), Get_Z_Construct_UScriptStruct_FAtomAisacControlSettingsParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtomAisacControlSettingsParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtomAisacControlSettingsParam_Hash() { return 422423171U; }
class UScriptStruct* FAtomSelectorSettingsParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomSelectorSettingsParam, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomSelectorSettingsParam"), sizeof(FAtomSelectorSettingsParam), Get_Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Hash());
	}
	return Singleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomSelectorSettingsParam>()
{
	return FAtomSelectorSettingsParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtomSelectorSettingsParam(FAtomSelectorSettingsParam::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("AtomSelectorSettingsParam"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomSelectorSettingsParam
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomSelectorSettingsParam()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtomSelectorSettingsParam")),new UScriptStruct::TCppStructOps<FAtomSelectorSettingsParam>);
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomSelectorSettingsParam;
	struct Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Labels_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Labels;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Labels_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultSelectorLabel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DefaultSelectorLabel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Comment_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Comment;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "Atom Selector settings parameters." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomSelectorSettingsParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Statics::NewProp_Labels_MetaData[] = {
		{ "Category", "Selector" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "Label Name." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Statics::NewProp_Labels = { "Labels", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomSelectorSettingsParam, Labels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Statics::NewProp_Labels_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Statics::NewProp_Labels_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Statics::NewProp_Labels_Inner = { "Labels", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAtomStringWithComment, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Statics::NewProp_DefaultSelectorLabel_MetaData[] = {
		{ "Category", "Selector" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "Default Label Name." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Statics::NewProp_DefaultSelectorLabel = { "DefaultSelectorLabel", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomSelectorSettingsParam, DefaultSelectorLabel), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Statics::NewProp_DefaultSelectorLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Statics::NewProp_DefaultSelectorLabel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Selector" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "Selector Name." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomSelectorSettingsParam, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Statics::NewProp_Name_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Statics::NewProp_Comment_MetaData[] = {
		{ "Category", "Selector" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "Comment For Selector." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Statics::NewProp_Comment = { "Comment", nullptr, (EPropertyFlags)0x0010000800020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomSelectorSettingsParam, Comment), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Statics::NewProp_Comment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Statics::NewProp_Comment_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Statics::NewProp_Labels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Statics::NewProp_Labels_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Statics::NewProp_DefaultSelectorLabel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Statics::NewProp_Name,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Statics::NewProp_Comment,
#endif // WITH_EDITORONLY_DATA
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"AtomSelectorSettingsParam",
		sizeof(FAtomSelectorSettingsParam),
		alignof(FAtomSelectorSettingsParam),
		Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomSelectorSettingsParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtomSelectorSettingsParam"), sizeof(FAtomSelectorSettingsParam), Get_Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Hash() { return 3914738593U; }
class UScriptStruct* FAtomStringWithComment::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAtomStringWithComment_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomStringWithComment, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomStringWithComment"), sizeof(FAtomStringWithComment), Get_Z_Construct_UScriptStruct_FAtomStringWithComment_Hash());
	}
	return Singleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomStringWithComment>()
{
	return FAtomStringWithComment::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtomStringWithComment(FAtomStringWithComment::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("AtomStringWithComment"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomStringWithComment
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomStringWithComment()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtomStringWithComment")),new UScriptStruct::TCppStructOps<FAtomStringWithComment>);
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomStringWithComment;
	struct Z_Construct_UScriptStruct_FAtomStringWithComment_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Comment_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Comment;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomStringWithComment_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomStringWithComment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomStringWithComment>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomStringWithComment_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "AtomString" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "PropertyName." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomStringWithComment_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomStringWithComment, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomStringWithComment_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomStringWithComment_Statics::NewProp_Name_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomStringWithComment_Statics::NewProp_Comment_MetaData[] = {
		{ "Category", "AtomString" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "Comment." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomStringWithComment_Statics::NewProp_Comment = { "Comment", nullptr, (EPropertyFlags)0x0010000800020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomStringWithComment, Comment), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomStringWithComment_Statics::NewProp_Comment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomStringWithComment_Statics::NewProp_Comment_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomStringWithComment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomStringWithComment_Statics::NewProp_Name,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomStringWithComment_Statics::NewProp_Comment,
#endif // WITH_EDITORONLY_DATA
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomStringWithComment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"AtomStringWithComment",
		sizeof(FAtomStringWithComment),
		alignof(FAtomStringWithComment),
		Z_Construct_UScriptStruct_FAtomStringWithComment_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomStringWithComment_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomStringWithComment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomStringWithComment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomStringWithComment()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtomStringWithComment_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtomStringWithComment"), sizeof(FAtomStringWithComment), Get_Z_Construct_UScriptStruct_FAtomStringWithComment_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtomStringWithComment_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtomStringWithComment_Hash() { return 3378354935U; }
class UScriptStruct* FAtomCueSheetDataTable::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomCueSheetDataTable, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomCueSheetDataTable"), sizeof(FAtomCueSheetDataTable), Get_Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Hash());
	}
	return Singleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomCueSheetDataTable>()
{
	return FAtomCueSheetDataTable::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtomCueSheetDataTable(FAtomCueSheetDataTable::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("AtomCueSheetDataTable"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomCueSheetDataTable
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomCueSheetDataTable()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtomCueSheetDataTable")),new UScriptStruct::TCppStructOps<FAtomCueSheetDataTable>);
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomCueSheetDataTable;
	struct Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Cue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Cue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PriorityTypeIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PriorityTypeIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PriorityType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PriorityType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumCueLimits_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumCueLimits;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableCueLimit_MetaData[];
#endif
		static void NewProp_EnableCueLimit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableCueLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Volume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Volume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorkUnit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_WorkUnit;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Comment_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Comment;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BuildDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "Atom Cue Sheet data table." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomCueSheetDataTable>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_Cue_MetaData[] = {
		{ "Category", "JSONBuildInfo" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "CueInfo list." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_Cue = { "Cue", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueSheetDataTable, Cue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_Cue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_Cue_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_Cue_Inner = { "Cue", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAtomCueInfoDataTable, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_PriorityTypeIndex_MetaData[] = {
		{ "Category", "JSONBuildInfo" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "PriorityTypeIndex." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_PriorityTypeIndex = { "PriorityTypeIndex", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueSheetDataTable, PriorityTypeIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_PriorityTypeIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_PriorityTypeIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_PriorityType_MetaData[] = {
		{ "Category", "JSONBuildInfo" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "PriorityType." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_PriorityType = { "PriorityType", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueSheetDataTable, PriorityType), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_PriorityType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_PriorityType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_NumCueLimits_MetaData[] = {
		{ "Category", "JSONBuildInfo" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "NumCueLimits." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_NumCueLimits = { "NumCueLimits", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueSheetDataTable, NumCueLimits), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_NumCueLimits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_NumCueLimits_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_EnableCueLimit_MetaData[] = {
		{ "Category", "JSONBuildInfo" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "EnableCueLimit." },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_EnableCueLimit_SetBit(void* Obj)
	{
		((FAtomCueSheetDataTable*)Obj)->EnableCueLimit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_EnableCueLimit = { "EnableCueLimit", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAtomCueSheetDataTable), &Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_EnableCueLimit_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_EnableCueLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_EnableCueLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_Volume_MetaData[] = {
		{ "Category", "JSONBuildInfo" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "Volume." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueSheetDataTable, Volume), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_Volume_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_Volume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_WorkUnit_MetaData[] = {
		{ "Category", "JSONBuildInfo" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "WorkUnit." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_WorkUnit = { "WorkUnit", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueSheetDataTable, WorkUnit), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_WorkUnit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_WorkUnit_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_Comment_MetaData[] = {
		{ "Category", "JSONBuildInfo" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "Comment." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_Comment = { "Comment", nullptr, (EPropertyFlags)0x0010000800020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueSheetDataTable, Comment), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_Comment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_Comment_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_BuildDate_MetaData[] = {
		{ "Category", "JSONBuildInfo" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "BuildDate." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_BuildDate = { "BuildDate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueSheetDataTable, BuildDate), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_BuildDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_BuildDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "JSONBuildInfo" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "Name." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueSheetDataTable, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_Cue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_Cue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_PriorityTypeIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_PriorityType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_NumCueLimits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_EnableCueLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_Volume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_WorkUnit,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_Comment,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_BuildDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"AtomCueSheetDataTable",
		sizeof(FAtomCueSheetDataTable),
		alignof(FAtomCueSheetDataTable),
		Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomCueSheetDataTable()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtomCueSheetDataTable"), sizeof(FAtomCueSheetDataTable), Get_Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Hash() { return 1864306111U; }
class UScriptStruct* FAtomCueInfoDataTable::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomCueInfoDataTable, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomCueInfoDataTable"), sizeof(FAtomCueInfoDataTable), Get_Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Hash());
	}
	return Singleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomCueInfoDataTable>()
{
	return FAtomCueInfoDataTable::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtomCueInfoDataTable(FAtomCueInfoDataTable::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("AtomCueInfoDataTable"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomCueInfoDataTable
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomCueInfoDataTable()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtomCueInfoDataTable")),new UScriptStruct::TCppStructOps<FAtomCueInfoDataTable>);
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomCueInfoDataTable;
	struct Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachedAisacControl_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AttachedAisacControl;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttachedAisacControl_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachedSelector_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AttachedSelector;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttachedSelector_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Blocks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Blocks;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Blocks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BusSend_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BusSend;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BusSend_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Track_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Track;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Track_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Category;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Category_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Length_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Length;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Probability_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Probability;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumCueLimits_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumCueLimits;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableCueLimit_MetaData[];
#endif
		static void NewProp_EnableCueLimit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableCueLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CuePriorityTypeIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CuePriorityTypeIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CuePriorityType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CuePriorityType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryCuePriorityTypeIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CategoryCuePriorityTypeIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryCuePriorityType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CategoryCuePriorityType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryCuePriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CategoryCuePriority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Public_MetaData[];
#endif
		static void NewProp_Public_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Public;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Volume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Volume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultSelectorLabel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultSelectorLabel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CueType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CueType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CueTypeIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CueTypeIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CueId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CueId;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Comment_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Comment;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "Atom CueInfo data table." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomCueInfoDataTable>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_AttachedAisacControl_MetaData[] = {
		{ "Category", "CueInfo" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "List of Asisac cintrols attached to this cue." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_AttachedAisacControl = { "AttachedAisacControl", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueInfoDataTable, AttachedAisacControl), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_AttachedAisacControl_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_AttachedAisacControl_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_AttachedAisacControl_Inner = { "AttachedAisacControl", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAtomCueInfoAttachedAisacControlParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_AttachedSelector_MetaData[] = {
		{ "Category", "CueInfo" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "List of seletors attached to this cue." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_AttachedSelector = { "AttachedSelector", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueInfoDataTable, AttachedSelector), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_AttachedSelector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_AttachedSelector_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_AttachedSelector_Inner = { "AttachedSelector", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Blocks_MetaData[] = {
		{ "Category", "CueInfo" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "List of block." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Blocks = { "Blocks", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueInfoDataTable, Blocks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Blocks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Blocks_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Blocks_Inner = { "Blocks", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAtomCueInfoBlocksParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_BusSend_MetaData[] = {
		{ "Category", "CueInfo" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "List of bus sends." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_BusSend = { "BusSend", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueInfoDataTable, BusSend), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_BusSend_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_BusSend_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_BusSend_Inner = { "BusSend", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAtomCueInfoBusSendParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Track_MetaData[] = {
		{ "Category", "CueInfo" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "List of tracks." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Track = { "Track", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueInfoDataTable, Track), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Track_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Track_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Track_Inner = { "Track", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAtomCueInfoTrackParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Category_MetaData[] = {
		{ "Category", "CueInfo" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "List of categories." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueInfoDataTable, Category), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Category_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Category_Inner = { "Category", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAtomCueInfoCategoryParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Length_MetaData[] = {
		{ "Category", "CueInfo" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "Lenght of the cue in milisecs." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueInfoDataTable, Length), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Length_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Length_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Probability_MetaData[] = {
		{ "Category", "CueInfo" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "Probability." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Probability = { "Probability", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueInfoDataTable, Probability), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Probability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Probability_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_NumCueLimits_MetaData[] = {
		{ "Category", "CueInfo" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "NumCueLimits." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_NumCueLimits = { "NumCueLimits", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueInfoDataTable, NumCueLimits), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_NumCueLimits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_NumCueLimits_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_EnableCueLimit_MetaData[] = {
		{ "Category", "CueInfo" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "EnableCueLimit." },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_EnableCueLimit_SetBit(void* Obj)
	{
		((FAtomCueInfoDataTable*)Obj)->EnableCueLimit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_EnableCueLimit = { "EnableCueLimit", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAtomCueInfoDataTable), &Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_EnableCueLimit_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_EnableCueLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_EnableCueLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CuePriorityTypeIndex_MetaData[] = {
		{ "Category", "CueInfo" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "CuePriorityTypeIndex." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CuePriorityTypeIndex = { "CuePriorityTypeIndex", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueInfoDataTable, CuePriorityTypeIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CuePriorityTypeIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CuePriorityTypeIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CuePriorityType_MetaData[] = {
		{ "Category", "CueInfo" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "CuePriorityType." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CuePriorityType = { "CuePriorityType", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueInfoDataTable, CuePriorityType), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CuePriorityType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CuePriorityType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CategoryCuePriorityTypeIndex_MetaData[] = {
		{ "Category", "CueInfo" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "CategoryCuePriorityTypeIndex." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CategoryCuePriorityTypeIndex = { "CategoryCuePriorityTypeIndex", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueInfoDataTable, CategoryCuePriorityTypeIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CategoryCuePriorityTypeIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CategoryCuePriorityTypeIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CategoryCuePriorityType_MetaData[] = {
		{ "Category", "CueInfo" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "CategoryCuePriorityType." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CategoryCuePriorityType = { "CategoryCuePriorityType", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueInfoDataTable, CategoryCuePriorityType), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CategoryCuePriorityType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CategoryCuePriorityType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CategoryCuePriority_MetaData[] = {
		{ "Category", "CueInfo" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "CategoryCuePriority." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CategoryCuePriority = { "CategoryCuePriority", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueInfoDataTable, CategoryCuePriority), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CategoryCuePriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CategoryCuePriority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Public_MetaData[] = {
		{ "Category", "CueInfo" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "Public." },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Public_SetBit(void* Obj)
	{
		((FAtomCueInfoDataTable*)Obj)->Public = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Public = { "Public", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAtomCueInfoDataTable), &Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Public_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Public_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Public_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Volume_MetaData[] = {
		{ "Category", "CueInfo" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "Volume." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueInfoDataTable, Volume), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Volume_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Volume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_DefaultSelectorLabel_MetaData[] = {
		{ "Category", "CueInfo" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "DefaultSelectorLabel." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_DefaultSelectorLabel = { "DefaultSelectorLabel", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueInfoDataTable, DefaultSelectorLabel), Z_Construct_UScriptStruct_FAtomCueInfoSelectorParam, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_DefaultSelectorLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_DefaultSelectorLabel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CueType_MetaData[] = {
		{ "Category", "CueInfo" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "The type of the cue." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CueType = { "CueType", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueInfoDataTable, CueType), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CueType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CueType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CueTypeIndex_MetaData[] = {
		{ "Category", "CueInfo" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "CueTypeIndex." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CueTypeIndex = { "CueTypeIndex", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueInfoDataTable, CueTypeIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CueTypeIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CueTypeIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CueId_MetaData[] = {
		{ "Category", "CueInfo" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "The id of the cue." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CueId = { "CueId", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueInfoDataTable, CueId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CueId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CueId_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Comment_MetaData[] = {
		{ "Category", "CueInfo" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "User comment." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Comment = { "Comment", nullptr, (EPropertyFlags)0x0010000800020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueInfoDataTable, Comment), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Comment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Comment_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "CueInfo" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "Name." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueInfoDataTable, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_AttachedAisacControl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_AttachedAisacControl_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_AttachedSelector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_AttachedSelector_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Blocks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Blocks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_BusSend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_BusSend_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Track,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Track_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Category_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Length,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Probability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_NumCueLimits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_EnableCueLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CuePriorityTypeIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CuePriorityType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CategoryCuePriorityTypeIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CategoryCuePriorityType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CategoryCuePriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Public,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Volume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_DefaultSelectorLabel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CueType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CueTypeIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CueId,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Comment,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"AtomCueInfoDataTable",
		sizeof(FAtomCueInfoDataTable),
		alignof(FAtomCueInfoDataTable),
		Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomCueInfoDataTable()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtomCueInfoDataTable"), sizeof(FAtomCueInfoDataTable), Get_Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Hash() { return 772886476U; }
class UScriptStruct* FAtomCueInfoAttachedAisacControlParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAtomCueInfoAttachedAisacControlParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomCueInfoAttachedAisacControlParam, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomCueInfoAttachedAisacControlParam"), sizeof(FAtomCueInfoAttachedAisacControlParam), Get_Z_Construct_UScriptStruct_FAtomCueInfoAttachedAisacControlParam_Hash());
	}
	return Singleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomCueInfoAttachedAisacControlParam>()
{
	return FAtomCueInfoAttachedAisacControlParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtomCueInfoAttachedAisacControlParam(FAtomCueInfoAttachedAisacControlParam::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("AtomCueInfoAttachedAisacControlParam"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomCueInfoAttachedAisacControlParam
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomCueInfoAttachedAisacControlParam()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtomCueInfoAttachedAisacControlParam")),new UScriptStruct::TCppStructOps<FAtomCueInfoAttachedAisacControlParam>);
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomCueInfoAttachedAisacControlParam;
	struct Z_Construct_UScriptStruct_FAtomCueInfoAttachedAisacControlParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoAttachedAisacControlParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "Atom CueInfo attached Aisac control parameters." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomCueInfoAttachedAisacControlParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomCueInfoAttachedAisacControlParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoAttachedAisacControlParam_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "AttachedSelector" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "The id of the attched Aisac control." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoAttachedAisacControlParam_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueInfoAttachedAisacControlParam, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoAttachedAisacControlParam_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoAttachedAisacControlParam_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoAttachedAisacControlParam_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "AttachedSelector" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "The name of the attched Aisac control." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoAttachedAisacControlParam_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueInfoAttachedAisacControlParam, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoAttachedAisacControlParam_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoAttachedAisacControlParam_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomCueInfoAttachedAisacControlParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoAttachedAisacControlParam_Statics::NewProp_Id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoAttachedAisacControlParam_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomCueInfoAttachedAisacControlParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"AtomCueInfoAttachedAisacControlParam",
		sizeof(FAtomCueInfoAttachedAisacControlParam),
		alignof(FAtomCueInfoAttachedAisacControlParam),
		Z_Construct_UScriptStruct_FAtomCueInfoAttachedAisacControlParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoAttachedAisacControlParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoAttachedAisacControlParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoAttachedAisacControlParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomCueInfoAttachedAisacControlParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtomCueInfoAttachedAisacControlParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtomCueInfoAttachedAisacControlParam"), sizeof(FAtomCueInfoAttachedAisacControlParam), Get_Z_Construct_UScriptStruct_FAtomCueInfoAttachedAisacControlParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtomCueInfoAttachedAisacControlParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtomCueInfoAttachedAisacControlParam_Hash() { return 1472554781U; }
class UScriptStruct* FAtomCueInfoAttachedSelectorParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomCueInfoAttachedSelectorParam"), sizeof(FAtomCueInfoAttachedSelectorParam), Get_Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam_Hash());
	}
	return Singleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomCueInfoAttachedSelectorParam>()
{
	return FAtomCueInfoAttachedSelectorParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtomCueInfoAttachedSelectorParam(FAtomCueInfoAttachedSelectorParam::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("AtomCueInfoAttachedSelectorParam"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomCueInfoAttachedSelectorParam
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomCueInfoAttachedSelectorParam()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtomCueInfoAttachedSelectorParam")),new UScriptStruct::TCppStructOps<FAtomCueInfoAttachedSelectorParam>);
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomCueInfoAttachedSelectorParam;
	struct Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "Atom CueInfo attached selector parameters." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomCueInfoAttachedSelectorParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "AttachedSelector" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "Attached Selector Name." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueInfoAttachedSelectorParam, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"AtomCueInfoAttachedSelectorParam",
		sizeof(FAtomCueInfoAttachedSelectorParam),
		alignof(FAtomCueInfoAttachedSelectorParam),
		Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtomCueInfoAttachedSelectorParam"), sizeof(FAtomCueInfoAttachedSelectorParam), Get_Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam_Hash() { return 2536823802U; }
class UScriptStruct* FAtomCueInfoBlocksParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAtomCueInfoBlocksParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomCueInfoBlocksParam, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomCueInfoBlocksParam"), sizeof(FAtomCueInfoBlocksParam), Get_Z_Construct_UScriptStruct_FAtomCueInfoBlocksParam_Hash());
	}
	return Singleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomCueInfoBlocksParam>()
{
	return FAtomCueInfoBlocksParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtomCueInfoBlocksParam(FAtomCueInfoBlocksParam::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("AtomCueInfoBlocksParam"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomCueInfoBlocksParam
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomCueInfoBlocksParam()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtomCueInfoBlocksParam")),new UScriptStruct::TCppStructOps<FAtomCueInfoBlocksParam>);
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomCueInfoBlocksParam;
	struct Z_Construct_UScriptStruct_FAtomCueInfoBlocksParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Length_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Length;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoBlocksParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "Atom CueInfo blocks parameters." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomCueInfoBlocksParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomCueInfoBlocksParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoBlocksParam_Statics::NewProp_Length_MetaData[] = {
		{ "Category", "BusSend" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "Length." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoBlocksParam_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueInfoBlocksParam, Length), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoBlocksParam_Statics::NewProp_Length_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoBlocksParam_Statics::NewProp_Length_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoBlocksParam_Statics::NewProp_StartPosition_MetaData[] = {
		{ "Category", "BusSend" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "Start Position." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoBlocksParam_Statics::NewProp_StartPosition = { "StartPosition", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueInfoBlocksParam, StartPosition), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoBlocksParam_Statics::NewProp_StartPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoBlocksParam_Statics::NewProp_StartPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoBlocksParam_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "BusSend" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "BusSend Name." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoBlocksParam_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueInfoBlocksParam, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoBlocksParam_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoBlocksParam_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomCueInfoBlocksParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoBlocksParam_Statics::NewProp_Length,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoBlocksParam_Statics::NewProp_StartPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoBlocksParam_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomCueInfoBlocksParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"AtomCueInfoBlocksParam",
		sizeof(FAtomCueInfoBlocksParam),
		alignof(FAtomCueInfoBlocksParam),
		Z_Construct_UScriptStruct_FAtomCueInfoBlocksParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoBlocksParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoBlocksParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoBlocksParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomCueInfoBlocksParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtomCueInfoBlocksParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtomCueInfoBlocksParam"), sizeof(FAtomCueInfoBlocksParam), Get_Z_Construct_UScriptStruct_FAtomCueInfoBlocksParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtomCueInfoBlocksParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtomCueInfoBlocksParam_Hash() { return 292924886U; }
class UScriptStruct* FAtomCueInfoBusSendParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAtomCueInfoBusSendParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomCueInfoBusSendParam, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomCueInfoBusSendParam"), sizeof(FAtomCueInfoBusSendParam), Get_Z_Construct_UScriptStruct_FAtomCueInfoBusSendParam_Hash());
	}
	return Singleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomCueInfoBusSendParam>()
{
	return FAtomCueInfoBusSendParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtomCueInfoBusSendParam(FAtomCueInfoBusSendParam::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("AtomCueInfoBusSendParam"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomCueInfoBusSendParam
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomCueInfoBusSendParam()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtomCueInfoBusSendParam")),new UScriptStruct::TCppStructOps<FAtomCueInfoBusSendParam>);
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomCueInfoBusSendParam;
	struct Z_Construct_UScriptStruct_FAtomCueInfoBusSendParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Level;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enable_MetaData[];
#endif
		static void NewProp_Enable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoBusSendParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "Atom CueInfo bus send parameters." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomCueInfoBusSendParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomCueInfoBusSendParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoBusSendParam_Statics::NewProp_Level_MetaData[] = {
		{ "Category", "BusSend" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "BusSend Level." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoBusSendParam_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueInfoBusSendParam, Level), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoBusSendParam_Statics::NewProp_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoBusSendParam_Statics::NewProp_Level_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoBusSendParam_Statics::NewProp_Enable_MetaData[] = {
		{ "Category", "BusSend" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "Is Enabled BusSend." },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomCueInfoBusSendParam_Statics::NewProp_Enable_SetBit(void* Obj)
	{
		((FAtomCueInfoBusSendParam*)Obj)->Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoBusSendParam_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAtomCueInfoBusSendParam), &Z_Construct_UScriptStruct_FAtomCueInfoBusSendParam_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoBusSendParam_Statics::NewProp_Enable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoBusSendParam_Statics::NewProp_Enable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoBusSendParam_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "BusSend" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "BusSendName." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoBusSendParam_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueInfoBusSendParam, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoBusSendParam_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoBusSendParam_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomCueInfoBusSendParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoBusSendParam_Statics::NewProp_Level,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoBusSendParam_Statics::NewProp_Enable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoBusSendParam_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomCueInfoBusSendParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"AtomCueInfoBusSendParam",
		sizeof(FAtomCueInfoBusSendParam),
		alignof(FAtomCueInfoBusSendParam),
		Z_Construct_UScriptStruct_FAtomCueInfoBusSendParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoBusSendParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoBusSendParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoBusSendParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomCueInfoBusSendParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtomCueInfoBusSendParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtomCueInfoBusSendParam"), sizeof(FAtomCueInfoBusSendParam), Get_Z_Construct_UScriptStruct_FAtomCueInfoBusSendParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtomCueInfoBusSendParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtomCueInfoBusSendParam_Hash() { return 4002962191U; }
class UScriptStruct* FAtomCueInfoTrackParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAtomCueInfoTrackParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomCueInfoTrackParam, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomCueInfoTrackParam"), sizeof(FAtomCueInfoTrackParam), Get_Z_Construct_UScriptStruct_FAtomCueInfoTrackParam_Hash());
	}
	return Singleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomCueInfoTrackParam>()
{
	return FAtomCueInfoTrackParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtomCueInfoTrackParam(FAtomCueInfoTrackParam::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("AtomCueInfoTrackParam"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomCueInfoTrackParam
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomCueInfoTrackParam()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtomCueInfoTrackParam")),new UScriptStruct::TCppStructOps<FAtomCueInfoTrackParam>);
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomCueInfoTrackParam;
	struct Z_Construct_UScriptStruct_FAtomCueInfoTrackParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Selector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Selector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Volume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Volume;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Comment_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Comment;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoTrackParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "Atom CueInfo track parameters." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomCueInfoTrackParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomCueInfoTrackParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoTrackParam_Statics::NewProp_Selector_MetaData[] = {
		{ "Category", "Track" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "Selector." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoTrackParam_Statics::NewProp_Selector = { "Selector", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueInfoTrackParam, Selector), Z_Construct_UScriptStruct_FAtomCueInfoSelectorParam, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoTrackParam_Statics::NewProp_Selector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoTrackParam_Statics::NewProp_Selector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoTrackParam_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Track" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "CategoryName." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoTrackParam_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueInfoTrackParam, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoTrackParam_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoTrackParam_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoTrackParam_Statics::NewProp_Volume_MetaData[] = {
		{ "Category", "Track" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "TrackVolume." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoTrackParam_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueInfoTrackParam, Volume), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoTrackParam_Statics::NewProp_Volume_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoTrackParam_Statics::NewProp_Volume_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoTrackParam_Statics::NewProp_Comment_MetaData[] = {
		{ "Category", "Track" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "Comment for Track." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoTrackParam_Statics::NewProp_Comment = { "Comment", nullptr, (EPropertyFlags)0x0010000800020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueInfoTrackParam, Comment), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoTrackParam_Statics::NewProp_Comment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoTrackParam_Statics::NewProp_Comment_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomCueInfoTrackParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoTrackParam_Statics::NewProp_Selector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoTrackParam_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoTrackParam_Statics::NewProp_Volume,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoTrackParam_Statics::NewProp_Comment,
#endif // WITH_EDITORONLY_DATA
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomCueInfoTrackParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"AtomCueInfoTrackParam",
		sizeof(FAtomCueInfoTrackParam),
		alignof(FAtomCueInfoTrackParam),
		Z_Construct_UScriptStruct_FAtomCueInfoTrackParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoTrackParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoTrackParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoTrackParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomCueInfoTrackParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtomCueInfoTrackParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtomCueInfoTrackParam"), sizeof(FAtomCueInfoTrackParam), Get_Z_Construct_UScriptStruct_FAtomCueInfoTrackParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtomCueInfoTrackParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtomCueInfoTrackParam_Hash() { return 3354757977U; }
class UScriptStruct* FAtomCueInfoSelectorParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAtomCueInfoSelectorParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomCueInfoSelectorParam, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomCueInfoSelectorParam"), sizeof(FAtomCueInfoSelectorParam), Get_Z_Construct_UScriptStruct_FAtomCueInfoSelectorParam_Hash());
	}
	return Singleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomCueInfoSelectorParam>()
{
	return FAtomCueInfoSelectorParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtomCueInfoSelectorParam(FAtomCueInfoSelectorParam::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("AtomCueInfoSelectorParam"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomCueInfoSelectorParam
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomCueInfoSelectorParam()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtomCueInfoSelectorParam")),new UScriptStruct::TCppStructOps<FAtomCueInfoSelectorParam>);
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomCueInfoSelectorParam;
	struct Z_Construct_UScriptStruct_FAtomCueInfoSelectorParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Label;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoSelectorParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "Atom CueInfo selector parameters." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomCueInfoSelectorParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomCueInfoSelectorParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoSelectorParam_Statics::NewProp_Label_MetaData[] = {
		{ "Category", "Selector" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "Label Name." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoSelectorParam_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueInfoSelectorParam, Label), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoSelectorParam_Statics::NewProp_Label_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoSelectorParam_Statics::NewProp_Label_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoSelectorParam_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Selector" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "Selector Name." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoSelectorParam_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueInfoSelectorParam, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoSelectorParam_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoSelectorParam_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomCueInfoSelectorParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoSelectorParam_Statics::NewProp_Label,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoSelectorParam_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomCueInfoSelectorParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"AtomCueInfoSelectorParam",
		sizeof(FAtomCueInfoSelectorParam),
		alignof(FAtomCueInfoSelectorParam),
		Z_Construct_UScriptStruct_FAtomCueInfoSelectorParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoSelectorParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoSelectorParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoSelectorParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomCueInfoSelectorParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtomCueInfoSelectorParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtomCueInfoSelectorParam"), sizeof(FAtomCueInfoSelectorParam), Get_Z_Construct_UScriptStruct_FAtomCueInfoSelectorParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtomCueInfoSelectorParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtomCueInfoSelectorParam_Hash() { return 2000794182U; }
class UScriptStruct* FAtomCueInfoCategoryParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAtomCueInfoCategoryParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomCueInfoCategoryParam, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomCueInfoCategoryParam"), sizeof(FAtomCueInfoCategoryParam), Get_Z_Construct_UScriptStruct_FAtomCueInfoCategoryParam_Hash());
	}
	return Singleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomCueInfoCategoryParam>()
{
	return FAtomCueInfoCategoryParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtomCueInfoCategoryParam(FAtomCueInfoCategoryParam::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("AtomCueInfoCategoryParam"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomCueInfoCategoryParam
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomCueInfoCategoryParam()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtomCueInfoCategoryParam")),new UScriptStruct::TCppStructOps<FAtomCueInfoCategoryParam>);
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomCueInfoCategoryParam;
	struct Z_Construct_UScriptStruct_FAtomCueInfoCategoryParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoCategoryParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "Atom CueInfo category parameters." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomCueInfoCategoryParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomCueInfoCategoryParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoCategoryParam_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Category" },
		{ "ModuleRelativePath", "Classes/AtomDataTables.h" },
		{ "ToolTip", "Category Name." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoCategoryParam_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueInfoCategoryParam, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoCategoryParam_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoCategoryParam_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomCueInfoCategoryParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoCategoryParam_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomCueInfoCategoryParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"AtomCueInfoCategoryParam",
		sizeof(FAtomCueInfoCategoryParam),
		alignof(FAtomCueInfoCategoryParam),
		Z_Construct_UScriptStruct_FAtomCueInfoCategoryParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoCategoryParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoCategoryParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoCategoryParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomCueInfoCategoryParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtomCueInfoCategoryParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtomCueInfoCategoryParam"), sizeof(FAtomCueInfoCategoryParam), Get_Z_Construct_UScriptStruct_FAtomCueInfoCategoryParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtomCueInfoCategoryParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtomCueInfoCategoryParam_Hash() { return 4213372460U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
