// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareEditor/Classes/Atom3dRegionFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtom3dRegionFactory() {}
// Cross Module References
	CRIWAREEDITOR_API UClass* Z_Construct_UClass_UAtom3dRegionFactory_NoRegister();
	CRIWAREEDITOR_API UClass* Z_Construct_UClass_UAtom3dRegionFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_CriWareEditor();
// End Cross Module References
	void UAtom3dRegionFactory::StaticRegisterNativesUAtom3dRegionFactory()
	{
	}
	UClass* Z_Construct_UClass_UAtom3dRegionFactory_NoRegister()
	{
		return UAtom3dRegionFactory::StaticClass();
	}
	struct Z_Construct_UClass_UAtom3dRegionFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtom3dRegionFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtom3dRegionFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Atom3dRegionFactory.h" },
		{ "ModuleRelativePath", "Classes/Atom3dRegionFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtom3dRegionFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtom3dRegionFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAtom3dRegionFactory_Statics::ClassParams = {
		&UAtom3dRegionFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAtom3dRegionFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dRegionFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtom3dRegionFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAtom3dRegionFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAtom3dRegionFactory, 2091424530);
	template<> CRIWAREEDITOR_API UClass* StaticClass<UAtom3dRegionFactory>()
	{
		return UAtom3dRegionFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAtom3dRegionFactory(Z_Construct_UClass_UAtom3dRegionFactory, &UAtom3dRegionFactory::StaticClass, TEXT("/Script/CriWareEditor"), TEXT("UAtom3dRegionFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtom3dRegionFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
