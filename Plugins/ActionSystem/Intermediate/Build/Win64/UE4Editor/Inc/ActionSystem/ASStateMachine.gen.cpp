// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionSystem/Public/ASStateMachine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeASStateMachine() {}
// Cross Module References
	ACTIONSYSTEM_API UClass* Z_Construct_UClass_UASStateMachine_NoRegister();
	ACTIONSYSTEM_API UClass* Z_Construct_UClass_UASStateMachine();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ActionSystem();
	ACTIONSYSTEM_API UClass* Z_Construct_UClass_UASAnimationSet_NoRegister();
	ACTIONSYSTEM_API UClass* Z_Construct_UClass_UASSMStateNode_NoRegister();
// End Cross Module References
	void UASStateMachine::StaticRegisterNativesUASStateMachine()
	{
	}
	UClass* Z_Construct_UClass_UASStateMachine_NoRegister()
	{
		return UASStateMachine::StaticClass();
	}
	struct Z_Construct_UClass_UASStateMachine_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationSetAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimationSetAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StateTable;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StateTable_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RootNode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UASStateMachine_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UASStateMachine_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ASStateMachine.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ASStateMachine.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UASStateMachine_Statics::NewProp_AnimationSetAsset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASStateMachine" },
		{ "ModuleRelativePath", "Public/ASStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UASStateMachine_Statics::NewProp_AnimationSetAsset = { "AnimationSetAsset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UASStateMachine, AnimationSetAsset), Z_Construct_UClass_UASAnimationSet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UASStateMachine_Statics::NewProp_AnimationSetAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UASStateMachine_Statics::NewProp_AnimationSetAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UASStateMachine_Statics::NewProp_StateTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASStateMachine" },
		{ "ModuleRelativePath", "Public/ASStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UASStateMachine_Statics::NewProp_StateTable = { "StateTable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UASStateMachine, StateTable), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UASStateMachine_Statics::NewProp_StateTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UASStateMachine_Statics::NewProp_StateTable_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UASStateMachine_Statics::NewProp_StateTable_Inner = { "StateTable", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UASSMStateNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UASStateMachine_Statics::NewProp_RootNode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASStateMachine" },
		{ "ModuleRelativePath", "Public/ASStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UASStateMachine_Statics::NewProp_RootNode = { "RootNode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UASStateMachine, RootNode), Z_Construct_UClass_UASSMStateNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UASStateMachine_Statics::NewProp_RootNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UASStateMachine_Statics::NewProp_RootNode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UASStateMachine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASStateMachine_Statics::NewProp_AnimationSetAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASStateMachine_Statics::NewProp_StateTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASStateMachine_Statics::NewProp_StateTable_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASStateMachine_Statics::NewProp_RootNode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UASStateMachine_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UASStateMachine>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UASStateMachine_Statics::ClassParams = {
		&UASStateMachine::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UASStateMachine_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UASStateMachine_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UASStateMachine_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UASStateMachine_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UASStateMachine()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UASStateMachine_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UASStateMachine, 3654247162);
	template<> ACTIONSYSTEM_API UClass* StaticClass<UASStateMachine>()
	{
		return UASStateMachine::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UASStateMachine(Z_Construct_UClass_UASStateMachine, &UASStateMachine::StaticClass, TEXT("/Script/ActionSystem"), TEXT("UASStateMachine"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UASStateMachine);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
