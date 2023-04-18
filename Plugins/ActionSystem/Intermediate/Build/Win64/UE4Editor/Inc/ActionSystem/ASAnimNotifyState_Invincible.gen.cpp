// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionSystem/Public/ASAnimNotifyState_Invincible.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeASAnimNotifyState_Invincible() {}
// Cross Module References
	ACTIONSYSTEM_API UClass* Z_Construct_UClass_UASAnimNotifyState_Invincible_NoRegister();
	ACTIONSYSTEM_API UClass* Z_Construct_UClass_UASAnimNotifyState_Invincible();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_ActionSystem();
// End Cross Module References
	void UASAnimNotifyState_Invincible::StaticRegisterNativesUASAnimNotifyState_Invincible()
	{
	}
	UClass* Z_Construct_UClass_UASAnimNotifyState_Invincible_NoRegister()
	{
		return UASAnimNotifyState_Invincible::StaticClass();
	}
	struct Z_Construct_UClass_UASAnimNotifyState_Invincible_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UASAnimNotifyState_Invincible_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UASAnimNotifyState_Invincible_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "ASAnimNotifyState_Invincible.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ASAnimNotifyState_Invincible.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UASAnimNotifyState_Invincible_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UASAnimNotifyState_Invincible>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UASAnimNotifyState_Invincible_Statics::ClassParams = {
		&UASAnimNotifyState_Invincible::StaticClass,
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
		0x000930A0u,
		METADATA_PARAMS(Z_Construct_UClass_UASAnimNotifyState_Invincible_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UASAnimNotifyState_Invincible_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UASAnimNotifyState_Invincible()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UASAnimNotifyState_Invincible_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UASAnimNotifyState_Invincible, 834148325);
	template<> ACTIONSYSTEM_API UClass* StaticClass<UASAnimNotifyState_Invincible>()
	{
		return UASAnimNotifyState_Invincible::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UASAnimNotifyState_Invincible(Z_Construct_UClass_UASAnimNotifyState_Invincible, &UASAnimNotifyState_Invincible::StaticClass, TEXT("/Script/ActionSystem"), TEXT("UASAnimNotifyState_Invincible"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UASAnimNotifyState_Invincible);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
