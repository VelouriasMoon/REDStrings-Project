// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HorizonUIPlugin/Public/HorizonUserWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHorizonUserWidget() {}
// Cross Module References
	HORIZONUI_API UClass* Z_Construct_UClass_UHorizonUserWidget_NoRegister();
	HORIZONUI_API UClass* Z_Construct_UClass_UHorizonUserWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_HorizonUI();
// End Cross Module References
	void UHorizonUserWidget::StaticRegisterNativesUHorizonUserWidget()
	{
	}
	UClass* Z_Construct_UClass_UHorizonUserWidget_NoRegister()
	{
		return UHorizonUserWidget::StaticClass();
	}
	struct Z_Construct_UClass_UHorizonUserWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHorizonUserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_HorizonUI,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorizonUserWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HorizonUserWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HorizonUserWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHorizonUserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHorizonUserWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHorizonUserWidget_Statics::ClassParams = {
		&UHorizonUserWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHorizonUserWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHorizonUserWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHorizonUserWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHorizonUserWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHorizonUserWidget, 1823393767);
	template<> HORIZONUI_API UClass* StaticClass<UHorizonUserWidget>()
	{
		return UHorizonUserWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHorizonUserWidget(Z_Construct_UClass_UHorizonUserWidget, &UHorizonUserWidget::StaticClass, TEXT("/Script/HorizonUI"), TEXT("UHorizonUserWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHorizonUserWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
