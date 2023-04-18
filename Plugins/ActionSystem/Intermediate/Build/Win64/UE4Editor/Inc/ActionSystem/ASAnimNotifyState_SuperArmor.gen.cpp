// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionSystem/Public/ASAnimNotifyState_SuperArmor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeASAnimNotifyState_SuperArmor() {}
// Cross Module References
	ACTIONSYSTEM_API UClass* Z_Construct_UClass_UASAnimNotifyState_SuperArmor_NoRegister();
	ACTIONSYSTEM_API UClass* Z_Construct_UClass_UASAnimNotifyState_SuperArmor();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_ActionSystem();
// End Cross Module References
	void UASAnimNotifyState_SuperArmor::StaticRegisterNativesUASAnimNotifyState_SuperArmor()
	{
	}
	UClass* Z_Construct_UClass_UASAnimNotifyState_SuperArmor_NoRegister()
	{
		return UASAnimNotifyState_SuperArmor::StaticClass();
	}
	struct Z_Construct_UClass_UASAnimNotifyState_SuperArmor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UASAnimNotifyState_SuperArmor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UASAnimNotifyState_SuperArmor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "ASAnimNotifyState_SuperArmor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ASAnimNotifyState_SuperArmor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UASAnimNotifyState_SuperArmor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UASAnimNotifyState_SuperArmor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UASAnimNotifyState_SuperArmor_Statics::ClassParams = {
		&UASAnimNotifyState_SuperArmor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UASAnimNotifyState_SuperArmor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UASAnimNotifyState_SuperArmor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UASAnimNotifyState_SuperArmor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UASAnimNotifyState_SuperArmor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UASAnimNotifyState_SuperArmor, 4080189092);
	template<> ACTIONSYSTEM_API UClass* StaticClass<UASAnimNotifyState_SuperArmor>()
	{
		return UASAnimNotifyState_SuperArmor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UASAnimNotifyState_SuperArmor(Z_Construct_UClass_UASAnimNotifyState_SuperArmor, &UASAnimNotifyState_SuperArmor::StaticClass, TEXT("/Script/ActionSystem"), TEXT("UASAnimNotifyState_SuperArmor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UASAnimNotifyState_SuperArmor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
