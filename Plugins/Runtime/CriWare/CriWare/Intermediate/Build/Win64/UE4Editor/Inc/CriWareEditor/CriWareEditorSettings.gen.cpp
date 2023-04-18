// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareEditor/Classes/CriWareEditorSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCriWareEditorSettings() {}
// Cross Module References
	CRIWAREEDITOR_API UClass* Z_Construct_UClass_UCriWareEditorSettings_NoRegister();
	CRIWAREEDITOR_API UClass* Z_Construct_UClass_UCriWareEditorSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_CriWareEditor();
// End Cross Module References
	void UCriWareEditorSettings::StaticRegisterNativesUCriWareEditorSettings()
	{
	}
	UClass* Z_Construct_UClass_UCriWareEditorSettings_NoRegister()
	{
		return UCriWareEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UCriWareEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableCullingWhenImportingCueSheet_MetaData[];
#endif
		static void NewProp_EnableCullingWhenImportingCueSheet_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableCullingWhenImportingCueSheet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableEconomicTickWhenImportingCueSheet_MetaData[];
#endif
		static void NewProp_EnableEconomicTickWhenImportingCueSheet_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableEconomicTickWhenImportingCueSheet;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCriWareEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWareEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CriWareEditorSettings.h" },
		{ "ModuleRelativePath", "Classes/CriWareEditorSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWareEditorSettings_Statics::NewProp_EnableCullingWhenImportingCueSheet_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Please use options from ACB file importer window." },
		{ "ModuleRelativePath", "Classes/CriWareEditorSettings.h" },
	};
#endif
	void Z_Construct_UClass_UCriWareEditorSettings_Statics::NewProp_EnableCullingWhenImportingCueSheet_SetBit(void* Obj)
	{
		((UCriWareEditorSettings*)Obj)->EnableCullingWhenImportingCueSheet_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCriWareEditorSettings_Statics::NewProp_EnableCullingWhenImportingCueSheet = { "EnableCullingWhenImportingCueSheet", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCriWareEditorSettings), &Z_Construct_UClass_UCriWareEditorSettings_Statics::NewProp_EnableCullingWhenImportingCueSheet_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCriWareEditorSettings_Statics::NewProp_EnableCullingWhenImportingCueSheet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareEditorSettings_Statics::NewProp_EnableCullingWhenImportingCueSheet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWareEditorSettings_Statics::NewProp_EnableEconomicTickWhenImportingCueSheet_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Please use options from ACB file importer window." },
		{ "ModuleRelativePath", "Classes/CriWareEditorSettings.h" },
	};
#endif
	void Z_Construct_UClass_UCriWareEditorSettings_Statics::NewProp_EnableEconomicTickWhenImportingCueSheet_SetBit(void* Obj)
	{
		((UCriWareEditorSettings*)Obj)->EnableEconomicTickWhenImportingCueSheet_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCriWareEditorSettings_Statics::NewProp_EnableEconomicTickWhenImportingCueSheet = { "EnableEconomicTickWhenImportingCueSheet", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCriWareEditorSettings), &Z_Construct_UClass_UCriWareEditorSettings_Statics::NewProp_EnableEconomicTickWhenImportingCueSheet_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCriWareEditorSettings_Statics::NewProp_EnableEconomicTickWhenImportingCueSheet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareEditorSettings_Statics::NewProp_EnableEconomicTickWhenImportingCueSheet_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCriWareEditorSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWareEditorSettings_Statics::NewProp_EnableCullingWhenImportingCueSheet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWareEditorSettings_Statics::NewProp_EnableEconomicTickWhenImportingCueSheet,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCriWareEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCriWareEditorSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCriWareEditorSettings_Statics::ClassParams = {
		&UCriWareEditorSettings::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCriWareEditorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareEditorSettings_Statics::PropPointers),
		0,
		0x000000A2u,
		METADATA_PARAMS(Z_Construct_UClass_UCriWareEditorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareEditorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCriWareEditorSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCriWareEditorSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCriWareEditorSettings, 3051948781);
	template<> CRIWAREEDITOR_API UClass* StaticClass<UCriWareEditorSettings>()
	{
		return UCriWareEditorSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCriWareEditorSettings(Z_Construct_UClass_UCriWareEditorSettings, &UCriWareEditorSettings::StaticClass, TEXT("/Script/CriWareEditor"), TEXT("UCriWareEditorSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCriWareEditorSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
