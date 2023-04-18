// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionSystem/Public/ASSMNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeASSMNode() {}
// Cross Module References
	ACTIONSYSTEM_API UClass* Z_Construct_UClass_UASSMNode_NoRegister();
	ACTIONSYSTEM_API UClass* Z_Construct_UClass_UASSMNode();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ActionSystem();
	ACTIONSYSTEM_API UClass* Z_Construct_UClass_UASStateMachine_NoRegister();
// End Cross Module References
	void UASSMNode::StaticRegisterNativesUASSMNode()
	{
	}
	UClass* Z_Construct_UClass_UASSMNode_NoRegister()
	{
		return UASSMNode::StaticClass();
	}
	struct Z_Construct_UClass_UASSMNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MachineAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MachineAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinkedTo_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LinkedTo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LinkedTo_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StateName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UASSMNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UASSMNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ASSMNode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ASSMNode.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UASSMNode_Statics::NewProp_MachineAsset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASSMNode" },
		{ "ModuleRelativePath", "Public/ASSMNode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UASSMNode_Statics::NewProp_MachineAsset = { "MachineAsset", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UASSMNode, MachineAsset), Z_Construct_UClass_UASStateMachine_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UASSMNode_Statics::NewProp_MachineAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UASSMNode_Statics::NewProp_MachineAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UASSMNode_Statics::NewProp_LinkedTo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASSMNode" },
		{ "ModuleRelativePath", "Public/ASSMNode.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UASSMNode_Statics::NewProp_LinkedTo = { "LinkedTo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UASSMNode, LinkedTo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UASSMNode_Statics::NewProp_LinkedTo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UASSMNode_Statics::NewProp_LinkedTo_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UASSMNode_Statics::NewProp_LinkedTo_Inner = { "LinkedTo", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UASSMNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UASSMNode_Statics::NewProp_StateName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASSMNode" },
		{ "ModuleRelativePath", "Public/ASSMNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UASSMNode_Statics::NewProp_StateName = { "StateName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UASSMNode, StateName), METADATA_PARAMS(Z_Construct_UClass_UASSMNode_Statics::NewProp_StateName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UASSMNode_Statics::NewProp_StateName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UASSMNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASSMNode_Statics::NewProp_MachineAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASSMNode_Statics::NewProp_LinkedTo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASSMNode_Statics::NewProp_LinkedTo_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASSMNode_Statics::NewProp_StateName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UASSMNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UASSMNode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UASSMNode_Statics::ClassParams = {
		&UASSMNode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UASSMNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UASSMNode_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UASSMNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UASSMNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UASSMNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UASSMNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UASSMNode, 3245898220);
	template<> ACTIONSYSTEM_API UClass* StaticClass<UASSMNode>()
	{
		return UASSMNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UASSMNode(Z_Construct_UClass_UASSMNode, &UASSMNode::StaticClass, TEXT("/Script/ActionSystem"), TEXT("UASSMNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UASSMNode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
