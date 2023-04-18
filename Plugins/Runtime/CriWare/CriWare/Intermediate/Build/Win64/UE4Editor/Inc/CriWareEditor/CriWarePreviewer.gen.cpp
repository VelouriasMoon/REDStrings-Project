// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareEditor/Classes/CriWarePreviewer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCriWarePreviewer() {}
// Cross Module References
	CRIWAREEDITOR_API UClass* Z_Construct_UClass_UCriWarePreviewer_NoRegister();
	CRIWAREEDITOR_API UClass* Z_Construct_UClass_UCriWarePreviewer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_CriWareEditor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
// End Cross Module References
	void UCriWarePreviewer::StaticRegisterNativesUCriWarePreviewer()
	{
	}
	UClass* Z_Construct_UClass_UCriWarePreviewer_NoRegister()
	{
		return UCriWarePreviewer::StaticClass();
	}
	struct Z_Construct_UClass_UCriWarePreviewer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewWorld_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewWorld;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCriWarePreviewer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWarePreviewer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// TODO: use same class UCriWareEditor instancied by the module (that is obviously a singleton)\n// that wiil hold settings, previewer objects, and any editor transient sub objects!\n" },
		{ "IncludePath", "CriWarePreviewer.h" },
		{ "ModuleRelativePath", "Classes/CriWarePreviewer.h" },
		{ "ToolTip", "TODO: use same class UCriWareEditor instancied by the module (that is obviously a singleton)\nthat wiil hold settings, previewer objects, and any editor transient sub objects!" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWarePreviewer_Statics::NewProp_PreviewActor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/CriWarePreviewer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCriWarePreviewer_Statics::NewProp_PreviewActor = { "PreviewActor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCriWarePreviewer, PreviewActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCriWarePreviewer_Statics::NewProp_PreviewActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWarePreviewer_Statics::NewProp_PreviewActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWarePreviewer_Statics::NewProp_PreviewWorld_MetaData[] = {
		{ "ModuleRelativePath", "Classes/CriWarePreviewer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCriWarePreviewer_Statics::NewProp_PreviewWorld = { "PreviewWorld", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCriWarePreviewer, PreviewWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCriWarePreviewer_Statics::NewProp_PreviewWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWarePreviewer_Statics::NewProp_PreviewWorld_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCriWarePreviewer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePreviewer_Statics::NewProp_PreviewActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePreviewer_Statics::NewProp_PreviewWorld,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCriWarePreviewer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCriWarePreviewer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCriWarePreviewer_Statics::ClassParams = {
		&UCriWarePreviewer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCriWarePreviewer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCriWarePreviewer_Statics::PropPointers),
		0,
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UCriWarePreviewer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWarePreviewer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCriWarePreviewer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCriWarePreviewer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCriWarePreviewer, 2537255701);
	template<> CRIWAREEDITOR_API UClass* StaticClass<UCriWarePreviewer>()
	{
		return UCriWarePreviewer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCriWarePreviewer(Z_Construct_UClass_UCriWarePreviewer, &UCriWarePreviewer::StaticClass, TEXT("/Script/CriWareEditor"), TEXT("UCriWarePreviewer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCriWarePreviewer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
