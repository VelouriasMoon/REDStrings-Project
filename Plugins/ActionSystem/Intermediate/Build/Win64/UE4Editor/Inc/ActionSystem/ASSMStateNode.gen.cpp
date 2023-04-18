// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionSystem/Public/ASSMStateNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeASSMStateNode() {}
// Cross Module References
	ACTIONSYSTEM_API UClass* Z_Construct_UClass_UASSMStateNode_NoRegister();
	ACTIONSYSTEM_API UClass* Z_Construct_UClass_UASSMStateNode();
	ACTIONSYSTEM_API UClass* Z_Construct_UClass_UASSMNode();
	UPackage* Z_Construct_UPackage__Script_ActionSystem();
	ACTIONSYSTEM_API UClass* Z_Construct_UClass_UASSMTransitionNode_NoRegister();
	ACTIONSYSTEM_API UClass* Z_Construct_UClass_UASState_Base_NoRegister();
// End Cross Module References
	void UASSMStateNode::StaticRegisterNativesUASSMStateNode()
	{
	}
	UClass* Z_Construct_UClass_UASSMStateNode_NoRegister()
	{
		return UASSMStateNode::StaticClass();
	}
	struct Z_Construct_UClass_UASSMStateNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransitionList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TransitionList;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TransitionList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StateIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Custom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Custom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlwaysCanceledCommand_MetaData[];
#endif
		static void NewProp_bAlwaysCanceledCommand_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlwaysCanceledCommand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tags;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Tags_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UASSMStateNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UASSMNode,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UASSMStateNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ASSMStateNode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ASSMStateNode.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UASSMStateNode_Statics::NewProp_TransitionList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASSMStateNode" },
		{ "ModuleRelativePath", "Public/ASSMStateNode.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UASSMStateNode_Statics::NewProp_TransitionList = { "TransitionList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UASSMStateNode, TransitionList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UASSMStateNode_Statics::NewProp_TransitionList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UASSMStateNode_Statics::NewProp_TransitionList_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UASSMStateNode_Statics::NewProp_TransitionList_Inner = { "TransitionList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UASSMTransitionNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UASSMStateNode_Statics::NewProp_StateIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASSMStateNode" },
		{ "ModuleRelativePath", "Public/ASSMStateNode.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UASSMStateNode_Statics::NewProp_StateIndex = { "StateIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UASSMStateNode, StateIndex), METADATA_PARAMS(Z_Construct_UClass_UASSMStateNode_Statics::NewProp_StateIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UASSMStateNode_Statics::NewProp_StateIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UASSMStateNode_Statics::NewProp_Custom_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASSMStateNode" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ASSMStateNode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UASSMStateNode_Statics::NewProp_Custom = { "Custom", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UASSMStateNode, Custom), Z_Construct_UClass_UASState_Base_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UASSMStateNode_Statics::NewProp_Custom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UASSMStateNode_Statics::NewProp_Custom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UASSMStateNode_Statics::NewProp_bAlwaysCanceledCommand_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASSMStateNode" },
		{ "ModuleRelativePath", "Public/ASSMStateNode.h" },
	};
#endif
	void Z_Construct_UClass_UASSMStateNode_Statics::NewProp_bAlwaysCanceledCommand_SetBit(void* Obj)
	{
		((UASSMStateNode*)Obj)->bAlwaysCanceledCommand = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UASSMStateNode_Statics::NewProp_bAlwaysCanceledCommand = { "bAlwaysCanceledCommand", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UASSMStateNode), &Z_Construct_UClass_UASSMStateNode_Statics::NewProp_bAlwaysCanceledCommand_SetBit, METADATA_PARAMS(Z_Construct_UClass_UASSMStateNode_Statics::NewProp_bAlwaysCanceledCommand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UASSMStateNode_Statics::NewProp_bAlwaysCanceledCommand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UASSMStateNode_Statics::NewProp_Tags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASSMStateNode" },
		{ "ModuleRelativePath", "Public/ASSMStateNode.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UASSMStateNode_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UASSMStateNode, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UASSMStateNode_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UASSMStateNode_Statics::NewProp_Tags_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UASSMStateNode_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UASSMStateNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASSMStateNode_Statics::NewProp_TransitionList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASSMStateNode_Statics::NewProp_TransitionList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASSMStateNode_Statics::NewProp_StateIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASSMStateNode_Statics::NewProp_Custom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASSMStateNode_Statics::NewProp_bAlwaysCanceledCommand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASSMStateNode_Statics::NewProp_Tags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASSMStateNode_Statics::NewProp_Tags_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UASSMStateNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UASSMStateNode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UASSMStateNode_Statics::ClassParams = {
		&UASSMStateNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UASSMStateNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UASSMStateNode_Statics::PropPointers),
		0,
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UASSMStateNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UASSMStateNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UASSMStateNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UASSMStateNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UASSMStateNode, 2614421685);
	template<> ACTIONSYSTEM_API UClass* StaticClass<UASSMStateNode>()
	{
		return UASSMStateNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UASSMStateNode(Z_Construct_UClass_UASSMStateNode, &UASSMStateNode::StaticClass, TEXT("/Script/ActionSystem"), TEXT("UASSMStateNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UASSMStateNode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
