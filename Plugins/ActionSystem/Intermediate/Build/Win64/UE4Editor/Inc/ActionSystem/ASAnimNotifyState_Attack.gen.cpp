// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionSystem/Public/ASAnimNotifyState_Attack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeASAnimNotifyState_Attack() {}
// Cross Module References
	ACTIONSYSTEM_API UClass* Z_Construct_UClass_UASAnimNotifyState_Attack_NoRegister();
	ACTIONSYSTEM_API UClass* Z_Construct_UClass_UASAnimNotifyState_Attack();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_ActionSystem();
	ACTIONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FASAttackCollision();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ACTIONSYSTEM_API UClass* Z_Construct_UClass_UASDamageType_NoRegister();
// End Cross Module References
	void UASAnimNotifyState_Attack::StaticRegisterNativesUASAnimNotifyState_Attack()
	{
	}
	UClass* Z_Construct_UClass_UASAnimNotifyState_Attack_NoRegister()
	{
		return UASAnimNotifyState_Attack::StaticClass();
	}
	struct Z_Construct_UClass_UASAnimNotifyState_Attack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackCollisions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AttackCollisions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttackCollisions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WeaponId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttackScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HitInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hitCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_hitCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DamageType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UASAnimNotifyState_Attack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UASAnimNotifyState_Attack_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "ASAnimNotifyState_Attack.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ASAnimNotifyState_Attack.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UASAnimNotifyState_Attack_Statics::NewProp_AttackCollisions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASAnimNotifyState_Attack" },
		{ "ModuleRelativePath", "Public/ASAnimNotifyState_Attack.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UASAnimNotifyState_Attack_Statics::NewProp_AttackCollisions = { "AttackCollisions", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UASAnimNotifyState_Attack, AttackCollisions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UASAnimNotifyState_Attack_Statics::NewProp_AttackCollisions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UASAnimNotifyState_Attack_Statics::NewProp_AttackCollisions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UASAnimNotifyState_Attack_Statics::NewProp_AttackCollisions_Inner = { "AttackCollisions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FASAttackCollision, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UASAnimNotifyState_Attack_Statics::NewProp_WeaponId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASAnimNotifyState_Attack" },
		{ "ModuleRelativePath", "Public/ASAnimNotifyState_Attack.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UASAnimNotifyState_Attack_Statics::NewProp_WeaponId = { "WeaponId", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UASAnimNotifyState_Attack, WeaponId), METADATA_PARAMS(Z_Construct_UClass_UASAnimNotifyState_Attack_Statics::NewProp_WeaponId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UASAnimNotifyState_Attack_Statics::NewProp_WeaponId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UASAnimNotifyState_Attack_Statics::NewProp_AttackScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASAnimNotifyState_Attack" },
		{ "ModuleRelativePath", "Public/ASAnimNotifyState_Attack.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UASAnimNotifyState_Attack_Statics::NewProp_AttackScale = { "AttackScale", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UASAnimNotifyState_Attack, AttackScale), METADATA_PARAMS(Z_Construct_UClass_UASAnimNotifyState_Attack_Statics::NewProp_AttackScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UASAnimNotifyState_Attack_Statics::NewProp_AttackScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UASAnimNotifyState_Attack_Statics::NewProp_HitInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASAnimNotifyState_Attack" },
		{ "ModuleRelativePath", "Public/ASAnimNotifyState_Attack.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UASAnimNotifyState_Attack_Statics::NewProp_HitInterval = { "HitInterval", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UASAnimNotifyState_Attack, HitInterval), METADATA_PARAMS(Z_Construct_UClass_UASAnimNotifyState_Attack_Statics::NewProp_HitInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UASAnimNotifyState_Attack_Statics::NewProp_HitInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UASAnimNotifyState_Attack_Statics::NewProp_hitCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASAnimNotifyState_Attack" },
		{ "ModuleRelativePath", "Public/ASAnimNotifyState_Attack.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UASAnimNotifyState_Attack_Statics::NewProp_hitCount = { "hitCount", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UASAnimNotifyState_Attack, hitCount), METADATA_PARAMS(Z_Construct_UClass_UASAnimNotifyState_Attack_Statics::NewProp_hitCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UASAnimNotifyState_Attack_Statics::NewProp_hitCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UASAnimNotifyState_Attack_Statics::NewProp_DamageType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASAnimNotifyState_Attack" },
		{ "ModuleRelativePath", "Public/ASAnimNotifyState_Attack.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UASAnimNotifyState_Attack_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UASAnimNotifyState_Attack, DamageType), Z_Construct_UClass_UASDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UASAnimNotifyState_Attack_Statics::NewProp_DamageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UASAnimNotifyState_Attack_Statics::NewProp_DamageType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UASAnimNotifyState_Attack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASAnimNotifyState_Attack_Statics::NewProp_AttackCollisions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASAnimNotifyState_Attack_Statics::NewProp_AttackCollisions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASAnimNotifyState_Attack_Statics::NewProp_WeaponId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASAnimNotifyState_Attack_Statics::NewProp_AttackScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASAnimNotifyState_Attack_Statics::NewProp_HitInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASAnimNotifyState_Attack_Statics::NewProp_hitCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASAnimNotifyState_Attack_Statics::NewProp_DamageType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UASAnimNotifyState_Attack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UASAnimNotifyState_Attack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UASAnimNotifyState_Attack_Statics::ClassParams = {
		&UASAnimNotifyState_Attack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UASAnimNotifyState_Attack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UASAnimNotifyState_Attack_Statics::PropPointers),
		0,
		0x000930A0u,
		METADATA_PARAMS(Z_Construct_UClass_UASAnimNotifyState_Attack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UASAnimNotifyState_Attack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UASAnimNotifyState_Attack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UASAnimNotifyState_Attack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UASAnimNotifyState_Attack, 1347864140);
	template<> ACTIONSYSTEM_API UClass* StaticClass<UASAnimNotifyState_Attack>()
	{
		return UASAnimNotifyState_Attack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UASAnimNotifyState_Attack(Z_Construct_UClass_UASAnimNotifyState_Attack, &UASAnimNotifyState_Attack::StaticClass, TEXT("/Script/ActionSystem"), TEXT("UASAnimNotifyState_Attack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UASAnimNotifyState_Attack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
