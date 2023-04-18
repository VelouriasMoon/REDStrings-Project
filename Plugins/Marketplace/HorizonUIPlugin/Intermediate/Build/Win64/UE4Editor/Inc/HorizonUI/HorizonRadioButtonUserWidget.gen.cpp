// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HorizonUIPlugin/Public/HorizonRadioButtonUserWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHorizonRadioButtonUserWidget() {}
// Cross Module References
	HORIZONUI_API UFunction* Z_Construct_UDelegateFunction_UHorizonRadioButtonUserWidget_OnHorizonRadioButtonEvent__DelegateSignature();
	HORIZONUI_API UClass* Z_Construct_UClass_UHorizonRadioButtonUserWidget();
	HORIZONUI_API UClass* Z_Construct_UClass_UHorizonRadioButtonUserWidget_NoRegister();
	HORIZONUI_API UClass* Z_Construct_UClass_UHorizonDesignableUserWidget();
	UPackage* Z_Construct_UPackage__Script_HorizonUI();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UCheckBox_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UHorizonRadioButtonUserWidget_OnHorizonRadioButtonEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UHorizonRadioButtonUserWidget_OnHorizonRadioButtonEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HorizonRadioButtonUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UHorizonRadioButtonUserWidget_OnHorizonRadioButtonEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonRadioButtonUserWidget, nullptr, "OnHorizonRadioButtonEvent__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UHorizonRadioButtonUserWidget_OnHorizonRadioButtonEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UHorizonRadioButtonUserWidget_OnHorizonRadioButtonEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UHorizonRadioButtonUserWidget_OnHorizonRadioButtonEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UHorizonRadioButtonUserWidget_OnHorizonRadioButtonEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UHorizonRadioButtonUserWidget::execNativeOnCheckStateChanged)
	{
		P_GET_UBOOL(Z_Param_bIsChecked);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativeOnCheckStateChanged(Z_Param_bIsChecked);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHorizonRadioButtonUserWidget::execSetChecked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetChecked();
		P_NATIVE_END;
	}
	void UHorizonRadioButtonUserWidget::StaticRegisterNativesUHorizonRadioButtonUserWidget()
	{
		UClass* Class = UHorizonRadioButtonUserWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "NativeOnCheckStateChanged", &UHorizonRadioButtonUserWidget::execNativeOnCheckStateChanged },
			{ "SetChecked", &UHorizonRadioButtonUserWidget::execSetChecked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHorizonRadioButtonUserWidget_NativeOnCheckStateChanged_Statics
	{
		struct HorizonRadioButtonUserWidget_eventNativeOnCheckStateChanged_Parms
		{
			bool bIsChecked;
		};
		static void NewProp_bIsChecked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsChecked;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHorizonRadioButtonUserWidget_NativeOnCheckStateChanged_Statics::NewProp_bIsChecked_SetBit(void* Obj)
	{
		((HorizonRadioButtonUserWidget_eventNativeOnCheckStateChanged_Parms*)Obj)->bIsChecked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHorizonRadioButtonUserWidget_NativeOnCheckStateChanged_Statics::NewProp_bIsChecked = { "bIsChecked", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HorizonRadioButtonUserWidget_eventNativeOnCheckStateChanged_Parms), &Z_Construct_UFunction_UHorizonRadioButtonUserWidget_NativeOnCheckStateChanged_Statics::NewProp_bIsChecked_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonRadioButtonUserWidget_NativeOnCheckStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonRadioButtonUserWidget_NativeOnCheckStateChanged_Statics::NewProp_bIsChecked,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonRadioButtonUserWidget_NativeOnCheckStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HorizonRadioButtonUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonRadioButtonUserWidget_NativeOnCheckStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonRadioButtonUserWidget, nullptr, "NativeOnCheckStateChanged", nullptr, nullptr, sizeof(HorizonRadioButtonUserWidget_eventNativeOnCheckStateChanged_Parms), Z_Construct_UFunction_UHorizonRadioButtonUserWidget_NativeOnCheckStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonRadioButtonUserWidget_NativeOnCheckStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHorizonRadioButtonUserWidget_NativeOnCheckStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonRadioButtonUserWidget_NativeOnCheckStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHorizonRadioButtonUserWidget_NativeOnCheckStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHorizonRadioButtonUserWidget_NativeOnCheckStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHorizonRadioButtonUserWidget_SetChecked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonRadioButtonUserWidget_SetChecked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HorizonRadioButtonUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonRadioButtonUserWidget_SetChecked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonRadioButtonUserWidget, nullptr, "SetChecked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHorizonRadioButtonUserWidget_SetChecked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonRadioButtonUserWidget_SetChecked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHorizonRadioButtonUserWidget_SetChecked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHorizonRadioButtonUserWidget_SetChecked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHorizonRadioButtonUserWidget_NoRegister()
	{
		return UHorizonRadioButtonUserWidget::StaticClass();
	}
	struct Z_Construct_UClass_UHorizonRadioButtonUserWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_Main_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Text_Main;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextBlock_Main_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextBlock_Main;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckBox_Main_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CheckBox_Main;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnUnCheckedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUnCheckedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCheckedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCheckedDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHorizonRadioButtonUserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHorizonDesignableUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_HorizonUI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHorizonRadioButtonUserWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHorizonRadioButtonUserWidget_NativeOnCheckStateChanged, "NativeOnCheckStateChanged" }, // 827288289
		{ &Z_Construct_UDelegateFunction_UHorizonRadioButtonUserWidget_OnHorizonRadioButtonEvent__DelegateSignature, "OnHorizonRadioButtonEvent__DelegateSignature" }, // 3989404073
		{ &Z_Construct_UFunction_UHorizonRadioButtonUserWidget_SetChecked, "SetChecked" }, // 369418523
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorizonRadioButtonUserWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HorizonRadioButtonUserWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HorizonRadioButtonUserWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorizonRadioButtonUserWidget_Statics::NewProp_Text_Main_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HorizonRadioButtonUserWidget" },
		{ "ModuleRelativePath", "Public/HorizonRadioButtonUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UHorizonRadioButtonUserWidget_Statics::NewProp_Text_Main = { "Text_Main", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHorizonRadioButtonUserWidget, Text_Main), METADATA_PARAMS(Z_Construct_UClass_UHorizonRadioButtonUserWidget_Statics::NewProp_Text_Main_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHorizonRadioButtonUserWidget_Statics::NewProp_Text_Main_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorizonRadioButtonUserWidget_Statics::NewProp_TextBlock_Main_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HorizonRadioButtonUserWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HorizonRadioButtonUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHorizonRadioButtonUserWidget_Statics::NewProp_TextBlock_Main = { "TextBlock_Main", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHorizonRadioButtonUserWidget, TextBlock_Main), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHorizonRadioButtonUserWidget_Statics::NewProp_TextBlock_Main_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHorizonRadioButtonUserWidget_Statics::NewProp_TextBlock_Main_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorizonRadioButtonUserWidget_Statics::NewProp_CheckBox_Main_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HorizonRadioButtonUserWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HorizonRadioButtonUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHorizonRadioButtonUserWidget_Statics::NewProp_CheckBox_Main = { "CheckBox_Main", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHorizonRadioButtonUserWidget, CheckBox_Main), Z_Construct_UClass_UCheckBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHorizonRadioButtonUserWidget_Statics::NewProp_CheckBox_Main_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHorizonRadioButtonUserWidget_Statics::NewProp_CheckBox_Main_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorizonRadioButtonUserWidget_Statics::NewProp_OnUnCheckedDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HorizonRadioButtonUserWidget" },
		{ "ModuleRelativePath", "Public/HorizonRadioButtonUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHorizonRadioButtonUserWidget_Statics::NewProp_OnUnCheckedDelegate = { "OnUnCheckedDelegate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHorizonRadioButtonUserWidget, OnUnCheckedDelegate), Z_Construct_UDelegateFunction_UHorizonRadioButtonUserWidget_OnHorizonRadioButtonEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UHorizonRadioButtonUserWidget_Statics::NewProp_OnUnCheckedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHorizonRadioButtonUserWidget_Statics::NewProp_OnUnCheckedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorizonRadioButtonUserWidget_Statics::NewProp_OnCheckedDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HorizonRadioButtonUserWidget" },
		{ "ModuleRelativePath", "Public/HorizonRadioButtonUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHorizonRadioButtonUserWidget_Statics::NewProp_OnCheckedDelegate = { "OnCheckedDelegate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHorizonRadioButtonUserWidget, OnCheckedDelegate), Z_Construct_UDelegateFunction_UHorizonRadioButtonUserWidget_OnHorizonRadioButtonEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UHorizonRadioButtonUserWidget_Statics::NewProp_OnCheckedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHorizonRadioButtonUserWidget_Statics::NewProp_OnCheckedDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHorizonRadioButtonUserWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonRadioButtonUserWidget_Statics::NewProp_Text_Main,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonRadioButtonUserWidget_Statics::NewProp_TextBlock_Main,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonRadioButtonUserWidget_Statics::NewProp_CheckBox_Main,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonRadioButtonUserWidget_Statics::NewProp_OnUnCheckedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonRadioButtonUserWidget_Statics::NewProp_OnCheckedDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHorizonRadioButtonUserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHorizonRadioButtonUserWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHorizonRadioButtonUserWidget_Statics::ClassParams = {
		&UHorizonRadioButtonUserWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHorizonRadioButtonUserWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHorizonRadioButtonUserWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHorizonRadioButtonUserWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHorizonRadioButtonUserWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHorizonRadioButtonUserWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHorizonRadioButtonUserWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHorizonRadioButtonUserWidget, 234605825);
	template<> HORIZONUI_API UClass* StaticClass<UHorizonRadioButtonUserWidget>()
	{
		return UHorizonRadioButtonUserWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHorizonRadioButtonUserWidget(Z_Construct_UClass_UHorizonRadioButtonUserWidget, &UHorizonRadioButtonUserWidget::StaticClass, TEXT("/Script/HorizonUI"), TEXT("UHorizonRadioButtonUserWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHorizonRadioButtonUserWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
