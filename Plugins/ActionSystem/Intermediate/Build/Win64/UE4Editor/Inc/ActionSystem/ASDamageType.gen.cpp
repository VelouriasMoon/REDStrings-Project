// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionSystem/Public/ASDamageType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeASDamageType() {}
// Cross Module References
	ACTIONSYSTEM_API UClass* Z_Construct_UClass_UASDamageType_NoRegister();
	ACTIONSYSTEM_API UClass* Z_Construct_UClass_UASDamageType();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType();
	UPackage* Z_Construct_UPackage__Script_ActionSystem();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ACTIONSYSTEM_API UEnum* Z_Construct_UEnum_ActionSystem_EDamagePower();
// End Cross Module References
	void UASDamageType::StaticRegisterNativesUASDamageType()
	{
	}
	UClass* Z_Construct_UClass_UASDamageType_NoRegister()
	{
		return UASDamageType::StaticClass();
	}
	struct Z_Construct_UClass_UASDamageType_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitStopTimeDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HitStopTimeDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitStopTimeAttack_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HitStopTimeAttack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseDirection_MetaData[];
#endif
		static void NewProp_bUseDirection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamagePower_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DamagePower;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DamagePower_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UASDamageType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDamageType,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UASDamageType_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ASDamageType.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ASDamageType.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UASDamageType_Statics::NewProp_HitStopTimeDamage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASDamageType" },
		{ "ModuleRelativePath", "Public/ASDamageType.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UASDamageType_Statics::NewProp_HitStopTimeDamage = { "HitStopTimeDamage", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UASDamageType, HitStopTimeDamage), METADATA_PARAMS(Z_Construct_UClass_UASDamageType_Statics::NewProp_HitStopTimeDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UASDamageType_Statics::NewProp_HitStopTimeDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UASDamageType_Statics::NewProp_HitStopTimeAttack_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASDamageType" },
		{ "ModuleRelativePath", "Public/ASDamageType.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UASDamageType_Statics::NewProp_HitStopTimeAttack = { "HitStopTimeAttack", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UASDamageType, HitStopTimeAttack), METADATA_PARAMS(Z_Construct_UClass_UASDamageType_Statics::NewProp_HitStopTimeAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UASDamageType_Statics::NewProp_HitStopTimeAttack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UASDamageType_Statics::NewProp_Direction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASDamageType" },
		{ "ModuleRelativePath", "Public/ASDamageType.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UASDamageType_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UASDamageType, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UASDamageType_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UASDamageType_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UASDamageType_Statics::NewProp_bUseDirection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASDamageType" },
		{ "ModuleRelativePath", "Public/ASDamageType.h" },
	};
#endif
	void Z_Construct_UClass_UASDamageType_Statics::NewProp_bUseDirection_SetBit(void* Obj)
	{
		((UASDamageType*)Obj)->bUseDirection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UASDamageType_Statics::NewProp_bUseDirection = { "bUseDirection", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UASDamageType), &Z_Construct_UClass_UASDamageType_Statics::NewProp_bUseDirection_SetBit, METADATA_PARAMS(Z_Construct_UClass_UASDamageType_Statics::NewProp_bUseDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UASDamageType_Statics::NewProp_bUseDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UASDamageType_Statics::NewProp_DamagePower_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASDamageType" },
		{ "ModuleRelativePath", "Public/ASDamageType.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UASDamageType_Statics::NewProp_DamagePower = { "DamagePower", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UASDamageType, DamagePower), Z_Construct_UEnum_ActionSystem_EDamagePower, METADATA_PARAMS(Z_Construct_UClass_UASDamageType_Statics::NewProp_DamagePower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UASDamageType_Statics::NewProp_DamagePower_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UASDamageType_Statics::NewProp_DamagePower_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UASDamageType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASDamageType_Statics::NewProp_HitStopTimeDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASDamageType_Statics::NewProp_HitStopTimeAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASDamageType_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASDamageType_Statics::NewProp_bUseDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASDamageType_Statics::NewProp_DamagePower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASDamageType_Statics::NewProp_DamagePower_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UASDamageType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UASDamageType>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UASDamageType_Statics::ClassParams = {
		&UASDamageType::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UASDamageType_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UASDamageType_Statics::PropPointers),
		0,
		0x001100A0u,
		METADATA_PARAMS(Z_Construct_UClass_UASDamageType_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UASDamageType_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UASDamageType()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UASDamageType_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UASDamageType, 3156370559);
	template<> ACTIONSYSTEM_API UClass* StaticClass<UASDamageType>()
	{
		return UASDamageType::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UASDamageType(Z_Construct_UClass_UASDamageType, &UASDamageType::StaticClass, TEXT("/Script/ActionSystem"), TEXT("UASDamageType"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UASDamageType);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
