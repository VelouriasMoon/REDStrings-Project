// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareEditor/Classes/SoundAtomCueSheetFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundAtomCueSheetFactory() {}
// Cross Module References
	CRIWAREEDITOR_API UClass* Z_Construct_UClass_USoundAtomCueSheetFactory_NoRegister();
	CRIWAREEDITOR_API UClass* Z_Construct_UClass_USoundAtomCueSheetFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_CriWareEditor();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCueSheet_NoRegister();
// End Cross Module References
	void USoundAtomCueSheetFactory::StaticRegisterNativesUSoundAtomCueSheetFactory()
	{
	}
	UClass* Z_Construct_UClass_USoundAtomCueSheetFactory_NoRegister()
	{
		return USoundAtomCueSheetFactory::StaticClass();
	}
	struct Z_Construct_UClass_USoundAtomCueSheetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CueSheet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CueSheet;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundAtomCueSheetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCueSheetFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n  * Factory for AtomCueSheet and AtomCue from ACB file.\n  */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SoundAtomCueSheetFactory.h" },
		{ "ModuleRelativePath", "Classes/SoundAtomCueSheetFactory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Factory for AtomCueSheet and AtomCue from ACB file." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCueSheetFactory_Statics::NewProp_CueSheet_MetaData[] = {
		{ "Comment", "/* \xe5\x86\x8d\xe3\x82\xa4\xe3\x83\xb3\xe3\x83\x9d\xe3\x83\xbc\xe3\x83\x88\xe7\x9b\xb4\xe5\x89\x8d\xe3\x81\xae\xe3\x82\xaa\xe3\x83\x96\xe3\x82\xb8\xe3\x82\xa7\xe3\x82\xaf\xe3\x83\x88 */" },
		{ "ModuleRelativePath", "Classes/SoundAtomCueSheetFactory.h" },
		{ "ToolTip", "\xe5\x86\x8d\xe3\x82\xa4\xe3\x83\xb3\xe3\x83\x9d\xe3\x83\xbc\xe3\x83\x88\xe7\x9b\xb4\xe5\x89\x8d\xe3\x81\xae\xe3\x82\xaa\xe3\x83\x96\xe3\x82\xb8\xe3\x82\xa7\xe3\x82\xaf\xe3\x83\x88" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundAtomCueSheetFactory_Statics::NewProp_CueSheet = { "CueSheet", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundAtomCueSheetFactory, CueSheet), Z_Construct_UClass_USoundAtomCueSheet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundAtomCueSheetFactory_Statics::NewProp_CueSheet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCueSheetFactory_Statics::NewProp_CueSheet_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundAtomCueSheetFactory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCueSheetFactory_Statics::NewProp_CueSheet,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundAtomCueSheetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundAtomCueSheetFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundAtomCueSheetFactory_Statics::ClassParams = {
		&USoundAtomCueSheetFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundAtomCueSheetFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCueSheetFactory_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundAtomCueSheetFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCueSheetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundAtomCueSheetFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundAtomCueSheetFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundAtomCueSheetFactory, 2586089937);
	template<> CRIWAREEDITOR_API UClass* StaticClass<USoundAtomCueSheetFactory>()
	{
		return USoundAtomCueSheetFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundAtomCueSheetFactory(Z_Construct_UClass_USoundAtomCueSheetFactory, &USoundAtomCueSheetFactory::StaticClass, TEXT("/Script/CriWareEditor"), TEXT("USoundAtomCueSheetFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundAtomCueSheetFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
