// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Classes/AtomSound.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomSound() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_AAtomSound_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_AAtomSound();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomComponent_NoRegister();
// End Cross Module References
	void AAtomSound::StaticRegisterNativesAAtomSound()
	{
	}
	UClass* Z_Construct_UClass_AAtomSound_NoRegister()
	{
		return AAtomSound::StaticClass();
	}
	struct Z_Construct_UClass_AAtomSound_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtomComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AtomComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAtomSound_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtomSound_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Audio" },
		{ "ClassGroupNames", "Sounds" },
		{ "HideCategories", "Collision Input Game" },
		{ "IncludePath", "AtomSound.h" },
		{ "ModuleRelativePath", "Classes/AtomSound.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput Game|Damage" },
		{ "ToolTip", "AtomSound class." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtomSound_Statics::NewProp_AtomComponent_MetaData[] = {
		{ "Category", "Sound" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Sound,Audio,Audio|Components|Audio" },
		{ "ModuleRelativePath", "Classes/AtomSound.h" },
		{ "ToolTip", "Atom component." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAtomSound_Statics::NewProp_AtomComponent = { "AtomComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAtomSound, AtomComponent), Z_Construct_UClass_UAtomComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAtomSound_Statics::NewProp_AtomComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtomSound_Statics::NewProp_AtomComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAtomSound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtomSound_Statics::NewProp_AtomComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAtomSound_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAtomSound>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAtomSound_Statics::ClassParams = {
		&AAtomSound::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAtomSound_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAtomSound_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAtomSound_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAtomSound_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAtomSound()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAtomSound_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAtomSound, 3876840622);
	template<> CRIWARERUNTIME_API UClass* StaticClass<AAtomSound>()
	{
		return AAtomSound::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAtomSound(Z_Construct_UClass_AAtomSound, &AAtomSound::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("AAtomSound"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAtomSound);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
