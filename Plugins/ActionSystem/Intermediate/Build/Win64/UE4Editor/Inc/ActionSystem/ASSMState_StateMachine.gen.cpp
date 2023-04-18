// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionSystem/Public/ASSMState_StateMachine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeASSMState_StateMachine() {}
// Cross Module References
	ACTIONSYSTEM_API UClass* Z_Construct_UClass_UASSMState_StateMachine_NoRegister();
	ACTIONSYSTEM_API UClass* Z_Construct_UClass_UASSMState_StateMachine();
	ACTIONSYSTEM_API UClass* Z_Construct_UClass_UASSMStateNode();
	UPackage* Z_Construct_UPackage__Script_ActionSystem();
// End Cross Module References
	void UASSMState_StateMachine::StaticRegisterNativesUASSMState_StateMachine()
	{
	}
	UClass* Z_Construct_UClass_UASSMState_StateMachine_NoRegister()
	{
		return UASSMState_StateMachine::StaticClass();
	}
	struct Z_Construct_UClass_UASSMState_StateMachine_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateMachineName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StateMachineName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UASSMState_StateMachine_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UASSMStateNode,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UASSMState_StateMachine_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ASSMState_StateMachine.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ASSMState_StateMachine.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UASSMState_StateMachine_Statics::NewProp_StateMachineName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASSMState_StateMachine" },
		{ "ModuleRelativePath", "Public/ASSMState_StateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UASSMState_StateMachine_Statics::NewProp_StateMachineName = { "StateMachineName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UASSMState_StateMachine, StateMachineName), METADATA_PARAMS(Z_Construct_UClass_UASSMState_StateMachine_Statics::NewProp_StateMachineName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UASSMState_StateMachine_Statics::NewProp_StateMachineName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UASSMState_StateMachine_Statics::NewProp_PlayRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASSMState_StateMachine" },
		{ "ModuleRelativePath", "Public/ASSMState_StateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UASSMState_StateMachine_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UASSMState_StateMachine, PlayRate), METADATA_PARAMS(Z_Construct_UClass_UASSMState_StateMachine_Statics::NewProp_PlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UASSMState_StateMachine_Statics::NewProp_PlayRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UASSMState_StateMachine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASSMState_StateMachine_Statics::NewProp_StateMachineName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASSMState_StateMachine_Statics::NewProp_PlayRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UASSMState_StateMachine_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UASSMState_StateMachine>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UASSMState_StateMachine_Statics::ClassParams = {
		&UASSMState_StateMachine::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UASSMState_StateMachine_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UASSMState_StateMachine_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UASSMState_StateMachine_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UASSMState_StateMachine_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UASSMState_StateMachine()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UASSMState_StateMachine_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UASSMState_StateMachine, 1368879636);
	template<> ACTIONSYSTEM_API UClass* StaticClass<UASSMState_StateMachine>()
	{
		return UASSMState_StateMachine::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UASSMState_StateMachine(Z_Construct_UClass_UASSMState_StateMachine, &UASSMState_StateMachine::StaticClass, TEXT("/Script/ActionSystem"), TEXT("UASSMState_StateMachine"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UASSMState_StateMachine);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
