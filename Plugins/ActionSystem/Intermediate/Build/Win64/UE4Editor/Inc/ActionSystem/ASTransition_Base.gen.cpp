// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionSystem/Public/ASTransition_Base.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeASTransition_Base() {}
// Cross Module References
	ACTIONSYSTEM_API UClass* Z_Construct_UClass_UASTransition_Base_NoRegister();
	ACTIONSYSTEM_API UClass* Z_Construct_UClass_UASTransition_Base();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ActionSystem();
// End Cross Module References
	void UASTransition_Base::StaticRegisterNativesUASTransition_Base()
	{
	}
	UClass* Z_Construct_UClass_UASTransition_Base_NoRegister()
	{
		return UASTransition_Base::StaticClass();
	}
	struct Z_Construct_UClass_UASTransition_Base_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UASTransition_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UASTransition_Base_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ASTransition_Base.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ASTransition_Base.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UASTransition_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UASTransition_Base>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UASTransition_Base_Statics::ClassParams = {
		&UASTransition_Base::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UASTransition_Base_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UASTransition_Base_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UASTransition_Base()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UASTransition_Base_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UASTransition_Base, 2935103303);
	template<> ACTIONSYSTEM_API UClass* StaticClass<UASTransition_Base>()
	{
		return UASTransition_Base::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UASTransition_Base(Z_Construct_UClass_UASTransition_Base, &UASTransition_Base::StaticClass, TEXT("/Script/ActionSystem"), TEXT("UASTransition_Base"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UASTransition_Base);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
