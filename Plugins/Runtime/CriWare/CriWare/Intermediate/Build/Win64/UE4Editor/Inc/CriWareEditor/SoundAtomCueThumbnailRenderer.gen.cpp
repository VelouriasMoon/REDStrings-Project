// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareEditor/Private/ThumbnailRendering/SoundAtomCueThumbnailRenderer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundAtomCueThumbnailRenderer() {}
// Cross Module References
	CRIWAREEDITOR_API UClass* Z_Construct_UClass_USoundAtomCueThumbnailRenderer_NoRegister();
	CRIWAREEDITOR_API UClass* Z_Construct_UClass_USoundAtomCueThumbnailRenderer();
	UNREALED_API UClass* Z_Construct_UClass_UThumbnailRenderer();
	UPackage* Z_Construct_UPackage__Script_CriWareEditor();
// End Cross Module References
	void USoundAtomCueThumbnailRenderer::StaticRegisterNativesUSoundAtomCueThumbnailRenderer()
	{
	}
	UClass* Z_Construct_UClass_USoundAtomCueThumbnailRenderer_NoRegister()
	{
		return USoundAtomCueThumbnailRenderer::StaticClass();
	}
	struct Z_Construct_UClass_USoundAtomCueThumbnailRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundAtomCueThumbnailRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UThumbnailRenderer,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCueThumbnailRenderer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * This thumbnail renderer generates a render of a waveform from an atom cue.\n */" },
		{ "IncludePath", "ThumbnailRendering/SoundAtomCueThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Private/ThumbnailRendering/SoundAtomCueThumbnailRenderer.h" },
		{ "ToolTip", "This thumbnail renderer generates a render of a waveform from an atom cue." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundAtomCueThumbnailRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundAtomCueThumbnailRenderer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundAtomCueThumbnailRenderer_Statics::ClassParams = {
		&USoundAtomCueThumbnailRenderer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundAtomCueThumbnailRenderer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCueThumbnailRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundAtomCueThumbnailRenderer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundAtomCueThumbnailRenderer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundAtomCueThumbnailRenderer, 266422648);
	template<> CRIWAREEDITOR_API UClass* StaticClass<USoundAtomCueThumbnailRenderer>()
	{
		return USoundAtomCueThumbnailRenderer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundAtomCueThumbnailRenderer(Z_Construct_UClass_USoundAtomCueThumbnailRenderer, &USoundAtomCueThumbnailRenderer::StaticClass, TEXT("/Script/CriWareEditor"), TEXT("USoundAtomCueThumbnailRenderer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundAtomCueThumbnailRenderer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
