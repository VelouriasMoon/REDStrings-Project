// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionSystem/Public/ASWeapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeASWeapon() {}
// Cross Module References
	ACTIONSYSTEM_API UClass* Z_Construct_UClass_AASWeapon_NoRegister();
	ACTIONSYSTEM_API UClass* Z_Construct_UClass_AASWeapon();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ActionSystem();
	ACTIONSYSTEM_API UClass* Z_Construct_UClass_AASCharacter_NoRegister();
	ACTIONSYSTEM_API UClass* Z_Construct_UClass_UASCollisionGroupComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ACTIONSYSTEM_API UClass* Z_Construct_UClass_UASCollisionInterface_NoRegister();
// End Cross Module References
	void AASWeapon::StaticRegisterNativesAASWeapon()
	{
	}
	UClass* Z_Construct_UClass_AASWeapon_NoRegister()
	{
		return AASWeapon::StaticClass();
	}
	struct Z_Construct_UClass_AASWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Collision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Collision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AASWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AASWeapon_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ASWeapon.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ASWeapon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AASWeapon_Statics::NewProp_Character_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASWeapon" },
		{ "ModuleRelativePath", "Public/ASWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AASWeapon_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AASWeapon, Character), Z_Construct_UClass_AASCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AASWeapon_Statics::NewProp_Character_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AASWeapon_Statics::NewProp_Character_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AASWeapon_Statics::NewProp_Collision_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASWeapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ASWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AASWeapon_Statics::NewProp_Collision = { "Collision", nullptr, (EPropertyFlags)0x004200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AASWeapon, Collision), Z_Construct_UClass_UASCollisionGroupComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AASWeapon_Statics::NewProp_Collision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AASWeapon_Statics::NewProp_Collision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AASWeapon_Statics::NewProp_Mesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASWeapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ASWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AASWeapon_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x004200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AASWeapon, Mesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AASWeapon_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AASWeapon_Statics::NewProp_Mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AASWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASWeapon_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASWeapon_Statics::NewProp_Collision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASWeapon_Statics::NewProp_Mesh,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AASWeapon_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UASCollisionInterface_NoRegister, (int32)VTABLE_OFFSET(AASWeapon, IASCollisionInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AASWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AASWeapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AASWeapon_Statics::ClassParams = {
		&AASWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AASWeapon_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AASWeapon_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AASWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AASWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AASWeapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AASWeapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AASWeapon, 2525167319);
	template<> ACTIONSYSTEM_API UClass* StaticClass<AASWeapon>()
	{
		return AASWeapon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AASWeapon(Z_Construct_UClass_AASWeapon, &AASWeapon::StaticClass, TEXT("/Script/ActionSystem"), TEXT("AASWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AASWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
