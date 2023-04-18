// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionSystem/Public/ASSMState_Sequence.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeASSMState_Sequence() {}
// Cross Module References
	ACTIONSYSTEM_API UClass* Z_Construct_UClass_UASSMState_Sequence_NoRegister();
	ACTIONSYSTEM_API UClass* Z_Construct_UClass_UASSMState_Sequence();
	ACTIONSYSTEM_API UClass* Z_Construct_UClass_UASSMStateNode();
	UPackage* Z_Construct_UPackage__Script_ActionSystem();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimGroupRole();
// End Cross Module References
	void UASSMState_Sequence::StaticRegisterNativesUASSMState_Sequence()
	{
	}
	UClass* Z_Construct_UClass_UASSMState_Sequence_NoRegister()
	{
		return UASSMState_Sequence::StaticClass();
	}
	struct Z_Construct_UClass_UASSMState_Sequence_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateMachineResetMontageRateScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StateMachineResetMontageRateScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateMachineResetSecondMargin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StateMachineResetSecondMargin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateMachineResetSecond_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StateMachineResetSecond;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupRole_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GroupRole;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GroupIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SequenceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SequenceName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLoop_MetaData[];
#endif
		static void NewProp_bLoop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLoop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UASSMState_Sequence_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UASSMStateNode,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UASSMState_Sequence_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ASSMState_Sequence.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ASSMState_Sequence.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UASSMState_Sequence_Statics::NewProp_StateMachineResetMontageRateScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASSMState_Sequence" },
		{ "ModuleRelativePath", "Public/ASSMState_Sequence.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UASSMState_Sequence_Statics::NewProp_StateMachineResetMontageRateScale = { "StateMachineResetMontageRateScale", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UASSMState_Sequence, StateMachineResetMontageRateScale), METADATA_PARAMS(Z_Construct_UClass_UASSMState_Sequence_Statics::NewProp_StateMachineResetMontageRateScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UASSMState_Sequence_Statics::NewProp_StateMachineResetMontageRateScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UASSMState_Sequence_Statics::NewProp_StateMachineResetSecondMargin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASSMState_Sequence" },
		{ "ModuleRelativePath", "Public/ASSMState_Sequence.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UASSMState_Sequence_Statics::NewProp_StateMachineResetSecondMargin = { "StateMachineResetSecondMargin", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UASSMState_Sequence, StateMachineResetSecondMargin), METADATA_PARAMS(Z_Construct_UClass_UASSMState_Sequence_Statics::NewProp_StateMachineResetSecondMargin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UASSMState_Sequence_Statics::NewProp_StateMachineResetSecondMargin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UASSMState_Sequence_Statics::NewProp_StateMachineResetSecond_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASSMState_Sequence" },
		{ "ModuleRelativePath", "Public/ASSMState_Sequence.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UASSMState_Sequence_Statics::NewProp_StateMachineResetSecond = { "StateMachineResetSecond", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UASSMState_Sequence, StateMachineResetSecond), METADATA_PARAMS(Z_Construct_UClass_UASSMState_Sequence_Statics::NewProp_StateMachineResetSecond_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UASSMState_Sequence_Statics::NewProp_StateMachineResetSecond_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UASSMState_Sequence_Statics::NewProp_GroupRole_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASSMState_Sequence" },
		{ "ModuleRelativePath", "Public/ASSMState_Sequence.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UASSMState_Sequence_Statics::NewProp_GroupRole = { "GroupRole", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UASSMState_Sequence, GroupRole), Z_Construct_UEnum_Engine_EAnimGroupRole, METADATA_PARAMS(Z_Construct_UClass_UASSMState_Sequence_Statics::NewProp_GroupRole_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UASSMState_Sequence_Statics::NewProp_GroupRole_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UASSMState_Sequence_Statics::NewProp_GroupIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASSMState_Sequence" },
		{ "ModuleRelativePath", "Public/ASSMState_Sequence.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UASSMState_Sequence_Statics::NewProp_GroupIndex = { "GroupIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UASSMState_Sequence, GroupIndex), METADATA_PARAMS(Z_Construct_UClass_UASSMState_Sequence_Statics::NewProp_GroupIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UASSMState_Sequence_Statics::NewProp_GroupIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UASSMState_Sequence_Statics::NewProp_SequenceName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASSMState_Sequence" },
		{ "ModuleRelativePath", "Public/ASSMState_Sequence.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UASSMState_Sequence_Statics::NewProp_SequenceName = { "SequenceName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UASSMState_Sequence, SequenceName), METADATA_PARAMS(Z_Construct_UClass_UASSMState_Sequence_Statics::NewProp_SequenceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UASSMState_Sequence_Statics::NewProp_SequenceName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UASSMState_Sequence_Statics::NewProp_bLoop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASSMState_Sequence" },
		{ "ModuleRelativePath", "Public/ASSMState_Sequence.h" },
	};
#endif
	void Z_Construct_UClass_UASSMState_Sequence_Statics::NewProp_bLoop_SetBit(void* Obj)
	{
		((UASSMState_Sequence*)Obj)->bLoop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UASSMState_Sequence_Statics::NewProp_bLoop = { "bLoop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UASSMState_Sequence), &Z_Construct_UClass_UASSMState_Sequence_Statics::NewProp_bLoop_SetBit, METADATA_PARAMS(Z_Construct_UClass_UASSMState_Sequence_Statics::NewProp_bLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UASSMState_Sequence_Statics::NewProp_bLoop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UASSMState_Sequence_Statics::NewProp_PlayRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASSMState_Sequence" },
		{ "ModuleRelativePath", "Public/ASSMState_Sequence.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UASSMState_Sequence_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UASSMState_Sequence, PlayRate), METADATA_PARAMS(Z_Construct_UClass_UASSMState_Sequence_Statics::NewProp_PlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UASSMState_Sequence_Statics::NewProp_PlayRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UASSMState_Sequence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASSMState_Sequence_Statics::NewProp_StateMachineResetMontageRateScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASSMState_Sequence_Statics::NewProp_StateMachineResetSecondMargin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASSMState_Sequence_Statics::NewProp_StateMachineResetSecond,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASSMState_Sequence_Statics::NewProp_GroupRole,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASSMState_Sequence_Statics::NewProp_GroupIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASSMState_Sequence_Statics::NewProp_SequenceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASSMState_Sequence_Statics::NewProp_bLoop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASSMState_Sequence_Statics::NewProp_PlayRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UASSMState_Sequence_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UASSMState_Sequence>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UASSMState_Sequence_Statics::ClassParams = {
		&UASSMState_Sequence::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UASSMState_Sequence_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UASSMState_Sequence_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UASSMState_Sequence_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UASSMState_Sequence_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UASSMState_Sequence()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UASSMState_Sequence_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UASSMState_Sequence, 4051861026);
	template<> ACTIONSYSTEM_API UClass* StaticClass<UASSMState_Sequence>()
	{
		return UASSMState_Sequence::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UASSMState_Sequence(Z_Construct_UClass_UASSMState_Sequence, &UASSMState_Sequence::StaticClass, TEXT("/Script/ActionSystem"), TEXT("UASSMState_Sequence"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UASSMState_Sequence);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
