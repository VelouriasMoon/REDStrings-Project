// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionSystem/Public/ASAnimationSet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeASAnimationSet() {}
// Cross Module References
	ACTIONSYSTEM_API UClass* Z_Construct_UClass_UASAnimationSet_NoRegister();
	ACTIONSYSTEM_API UClass* Z_Construct_UClass_UASAnimationSet();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_ActionSystem();
	ACTIONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FASAnimationSetEntry_StateMachine();
	ACTIONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FASAnimationSetEntry_BlendSpace();
	ACTIONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FASAnimationSetEntry_Sequence();
// End Cross Module References
	void UASAnimationSet::StaticRegisterNativesUASAnimationSet()
	{
	}
	UClass* Z_Construct_UClass_UASAnimationSet_NoRegister()
	{
		return UASAnimationSet::StaticClass();
	}
	struct Z_Construct_UClass_UASAnimationSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateMachines_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StateMachines;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StateMachines_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendSpaces_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BlendSpaces;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlendSpaces_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sequences_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Sequences;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Sequences_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Parent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UASAnimationSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UASAnimationSet_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ASAnimationSet.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ASAnimationSet.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UASAnimationSet_Statics::NewProp_StateMachines_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASAnimationSet" },
		{ "ModuleRelativePath", "Public/ASAnimationSet.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UASAnimationSet_Statics::NewProp_StateMachines = { "StateMachines", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UASAnimationSet, StateMachines), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UASAnimationSet_Statics::NewProp_StateMachines_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UASAnimationSet_Statics::NewProp_StateMachines_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UASAnimationSet_Statics::NewProp_StateMachines_Inner = { "StateMachines", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FASAnimationSetEntry_StateMachine, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UASAnimationSet_Statics::NewProp_BlendSpaces_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASAnimationSet" },
		{ "ModuleRelativePath", "Public/ASAnimationSet.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UASAnimationSet_Statics::NewProp_BlendSpaces = { "BlendSpaces", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UASAnimationSet, BlendSpaces), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UASAnimationSet_Statics::NewProp_BlendSpaces_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UASAnimationSet_Statics::NewProp_BlendSpaces_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UASAnimationSet_Statics::NewProp_BlendSpaces_Inner = { "BlendSpaces", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FASAnimationSetEntry_BlendSpace, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UASAnimationSet_Statics::NewProp_Sequences_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASAnimationSet" },
		{ "ModuleRelativePath", "Public/ASAnimationSet.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UASAnimationSet_Statics::NewProp_Sequences = { "Sequences", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UASAnimationSet, Sequences), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UASAnimationSet_Statics::NewProp_Sequences_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UASAnimationSet_Statics::NewProp_Sequences_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UASAnimationSet_Statics::NewProp_Sequences_Inner = { "Sequences", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FASAnimationSetEntry_Sequence, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UASAnimationSet_Statics::NewProp_Parent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASAnimationSet" },
		{ "ModuleRelativePath", "Public/ASAnimationSet.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UASAnimationSet_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UASAnimationSet, Parent), Z_Construct_UClass_UASAnimationSet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UASAnimationSet_Statics::NewProp_Parent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UASAnimationSet_Statics::NewProp_Parent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UASAnimationSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASAnimationSet_Statics::NewProp_StateMachines,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASAnimationSet_Statics::NewProp_StateMachines_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASAnimationSet_Statics::NewProp_BlendSpaces,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASAnimationSet_Statics::NewProp_BlendSpaces_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASAnimationSet_Statics::NewProp_Sequences,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASAnimationSet_Statics::NewProp_Sequences_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASAnimationSet_Statics::NewProp_Parent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UASAnimationSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UASAnimationSet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UASAnimationSet_Statics::ClassParams = {
		&UASAnimationSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UASAnimationSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UASAnimationSet_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UASAnimationSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UASAnimationSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UASAnimationSet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UASAnimationSet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UASAnimationSet, 1113291451);
	template<> ACTIONSYSTEM_API UClass* StaticClass<UASAnimationSet>()
	{
		return UASAnimationSet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UASAnimationSet(Z_Construct_UClass_UASAnimationSet, &UASAnimationSet::StaticClass, TEXT("/Script/ActionSystem"), TEXT("UASAnimationSet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UASAnimationSet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
