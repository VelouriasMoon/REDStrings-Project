// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionSystem/Public/ASAnimNotify_StateChange.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeASAnimNotify_StateChange() {}
// Cross Module References
	ACTIONSYSTEM_API UClass* Z_Construct_UClass_UASAnimNotify_StateChange_NoRegister();
	ACTIONSYSTEM_API UClass* Z_Construct_UClass_UASAnimNotify_StateChange();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_ActionSystem();
// End Cross Module References
	void UASAnimNotify_StateChange::StaticRegisterNativesUASAnimNotify_StateChange()
	{
	}
	UClass* Z_Construct_UClass_UASAnimNotify_StateChange_NoRegister()
	{
		return UASAnimNotify_StateChange::StaticClass();
	}
	struct Z_Construct_UClass_UASAnimNotify_StateChange_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UASAnimNotify_StateChange_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UASAnimNotify_StateChange_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "ASAnimNotify_StateChange.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ASAnimNotify_StateChange.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UASAnimNotify_StateChange_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UASAnimNotify_StateChange>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UASAnimNotify_StateChange_Statics::ClassParams = {
		&UASAnimNotify_StateChange::StaticClass,
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
		0x000920A0u,
		METADATA_PARAMS(Z_Construct_UClass_UASAnimNotify_StateChange_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UASAnimNotify_StateChange_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UASAnimNotify_StateChange()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UASAnimNotify_StateChange_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UASAnimNotify_StateChange, 1524202383);
	template<> ACTIONSYSTEM_API UClass* StaticClass<UASAnimNotify_StateChange>()
	{
		return UASAnimNotify_StateChange::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UASAnimNotify_StateChange(Z_Construct_UClass_UASAnimNotify_StateChange, &UASAnimNotify_StateChange::StaticClass, TEXT("/Script/ActionSystem"), TEXT("UASAnimNotify_StateChange"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UASAnimNotify_StateChange);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
