// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Classes/CriWareInitializer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCriWareInitializer() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UCriWareInitializer_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UCriWareInitializer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	void UCriWareInitializer::StaticRegisterNativesUCriWareInitializer()
	{
	}
	UClass* Z_Construct_UClass_UCriWareInitializer_NoRegister()
	{
		return UCriWareInitializer::StaticClass();
	}
	struct Z_Construct_UClass_UCriWareInitializer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCriWareInitializer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWareInitializer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CriWareInitializer.h" },
		{ "ModuleRelativePath", "Classes/CriWareInitializer.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "CriWareInitializer class." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCriWareInitializer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCriWareInitializer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCriWareInitializer_Statics::ClassParams = {
		&UCriWareInitializer::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCriWareInitializer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareInitializer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCriWareInitializer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCriWareInitializer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCriWareInitializer, 2473099151);
	template<> CRIWARERUNTIME_API UClass* StaticClass<UCriWareInitializer>()
	{
		return UCriWareInitializer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCriWareInitializer(Z_Construct_UClass_UCriWareInitializer, &UCriWareInitializer::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UCriWareInitializer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCriWareInitializer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
