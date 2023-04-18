// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HorizonUIPlugin/Public/HorizonDesignableUserWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHorizonDesignableUserWidget() {}
// Cross Module References
	HORIZONUI_API UClass* Z_Construct_UClass_UHorizonDesignableUserWidget_NoRegister();
	HORIZONUI_API UClass* Z_Construct_UClass_UHorizonDesignableUserWidget();
	HORIZONUI_API UClass* Z_Construct_UClass_UHorizonUserWidget();
	UPackage* Z_Construct_UPackage__Script_HorizonUI();
// End Cross Module References
	DEFINE_FUNCTION(UHorizonDesignableUserWidget::execOnSynchronizeProperties)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSynchronizeProperties_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHorizonDesignableUserWidget::execSynchronizeProperties)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SynchronizeProperties();
		P_NATIVE_END;
	}
	static FName NAME_UHorizonDesignableUserWidget_OnSynchronizeProperties = FName(TEXT("OnSynchronizeProperties"));
	void UHorizonDesignableUserWidget::OnSynchronizeProperties()
	{
		ProcessEvent(FindFunctionChecked(NAME_UHorizonDesignableUserWidget_OnSynchronizeProperties),NULL);
	}
	void UHorizonDesignableUserWidget::StaticRegisterNativesUHorizonDesignableUserWidget()
	{
		UClass* Class = UHorizonDesignableUserWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnSynchronizeProperties", &UHorizonDesignableUserWidget::execOnSynchronizeProperties },
			{ "SynchronizeProperties", &UHorizonDesignableUserWidget::execSynchronizeProperties },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHorizonDesignableUserWidget_OnSynchronizeProperties_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonDesignableUserWidget_OnSynchronizeProperties_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HorizonDesignableUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonDesignableUserWidget_OnSynchronizeProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonDesignableUserWidget, nullptr, "OnSynchronizeProperties", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHorizonDesignableUserWidget_OnSynchronizeProperties_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonDesignableUserWidget_OnSynchronizeProperties_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHorizonDesignableUserWidget_OnSynchronizeProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHorizonDesignableUserWidget_OnSynchronizeProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHorizonDesignableUserWidget_SynchronizeProperties_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonDesignableUserWidget_SynchronizeProperties_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HorizonDesignableUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonDesignableUserWidget_SynchronizeProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonDesignableUserWidget, nullptr, "SynchronizeProperties", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHorizonDesignableUserWidget_SynchronizeProperties_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonDesignableUserWidget_SynchronizeProperties_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHorizonDesignableUserWidget_SynchronizeProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHorizonDesignableUserWidget_SynchronizeProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHorizonDesignableUserWidget_NoRegister()
	{
		return UHorizonDesignableUserWidget::StaticClass();
	}
	struct Z_Construct_UClass_UHorizonDesignableUserWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHorizonDesignableUserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHorizonUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_HorizonUI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHorizonDesignableUserWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHorizonDesignableUserWidget_OnSynchronizeProperties, "OnSynchronizeProperties" }, // 3663755521
		{ &Z_Construct_UFunction_UHorizonDesignableUserWidget_SynchronizeProperties, "SynchronizeProperties" }, // 3064160120
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorizonDesignableUserWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HorizonDesignableUserWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HorizonDesignableUserWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHorizonDesignableUserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHorizonDesignableUserWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHorizonDesignableUserWidget_Statics::ClassParams = {
		&UHorizonDesignableUserWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHorizonDesignableUserWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHorizonDesignableUserWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHorizonDesignableUserWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHorizonDesignableUserWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHorizonDesignableUserWidget, 2318512283);
	template<> HORIZONUI_API UClass* StaticClass<UHorizonDesignableUserWidget>()
	{
		return UHorizonDesignableUserWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHorizonDesignableUserWidget(Z_Construct_UClass_UHorizonDesignableUserWidget, &UHorizonDesignableUserWidget::StaticClass, TEXT("/Script/HorizonUI"), TEXT("UHorizonDesignableUserWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHorizonDesignableUserWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
