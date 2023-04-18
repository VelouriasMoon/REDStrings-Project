// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionSystem/Public/ASAnimNotifyState_Input.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeASAnimNotifyState_Input() {}
// Cross Module References
	ACTIONSYSTEM_API UClass* Z_Construct_UClass_UASAnimNotifyState_Input_NoRegister();
	ACTIONSYSTEM_API UClass* Z_Construct_UClass_UASAnimNotifyState_Input();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_ActionSystem();
// End Cross Module References
	void UASAnimNotifyState_Input::StaticRegisterNativesUASAnimNotifyState_Input()
	{
	}
	UClass* Z_Construct_UClass_UASAnimNotifyState_Input_NoRegister()
	{
		return UASAnimNotifyState_Input::StaticClass();
	}
	struct Z_Construct_UClass_UASAnimNotifyState_Input_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Commands_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Commands;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Commands_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShiftStartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShiftStartTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UASAnimNotifyState_Input_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UASAnimNotifyState_Input_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "ASAnimNotifyState_Input.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ASAnimNotifyState_Input.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UASAnimNotifyState_Input_Statics::NewProp_Commands_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASAnimNotifyState_Input" },
		{ "ModuleRelativePath", "Public/ASAnimNotifyState_Input.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UASAnimNotifyState_Input_Statics::NewProp_Commands = { "Commands", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UASAnimNotifyState_Input, Commands), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UASAnimNotifyState_Input_Statics::NewProp_Commands_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UASAnimNotifyState_Input_Statics::NewProp_Commands_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UASAnimNotifyState_Input_Statics::NewProp_Commands_Inner = { "Commands", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UASAnimNotifyState_Input_Statics::NewProp_ShiftStartTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASAnimNotifyState_Input" },
		{ "ModuleRelativePath", "Public/ASAnimNotifyState_Input.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UASAnimNotifyState_Input_Statics::NewProp_ShiftStartTime = { "ShiftStartTime", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UASAnimNotifyState_Input, ShiftStartTime), METADATA_PARAMS(Z_Construct_UClass_UASAnimNotifyState_Input_Statics::NewProp_ShiftStartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UASAnimNotifyState_Input_Statics::NewProp_ShiftStartTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UASAnimNotifyState_Input_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASAnimNotifyState_Input_Statics::NewProp_Commands,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASAnimNotifyState_Input_Statics::NewProp_Commands_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UASAnimNotifyState_Input_Statics::NewProp_ShiftStartTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UASAnimNotifyState_Input_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UASAnimNotifyState_Input>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UASAnimNotifyState_Input_Statics::ClassParams = {
		&UASAnimNotifyState_Input::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UASAnimNotifyState_Input_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UASAnimNotifyState_Input_Statics::PropPointers),
		0,
		0x000930A0u,
		METADATA_PARAMS(Z_Construct_UClass_UASAnimNotifyState_Input_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UASAnimNotifyState_Input_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UASAnimNotifyState_Input()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UASAnimNotifyState_Input_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UASAnimNotifyState_Input, 2796235226);
	template<> ACTIONSYSTEM_API UClass* StaticClass<UASAnimNotifyState_Input>()
	{
		return UASAnimNotifyState_Input::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UASAnimNotifyState_Input(Z_Construct_UClass_UASAnimNotifyState_Input, &UASAnimNotifyState_Input::StaticClass, TEXT("/Script/ActionSystem"), TEXT("UASAnimNotifyState_Input"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UASAnimNotifyState_Input);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
