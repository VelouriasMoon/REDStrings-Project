// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HorizonUIPlugin/Public/HorizonButton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHorizonButton() {}
// Cross Module References
	HORIZONUI_API UFunction* Z_Construct_UDelegateFunction_UHorizonButton_OnHorizonButtonEvent__DelegateSignature();
	HORIZONUI_API UClass* Z_Construct_UClass_UHorizonButton();
	HORIZONUI_API UClass* Z_Construct_UClass_UHorizonButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton();
	UPackage* Z_Construct_UPackage__Script_HorizonUI();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UHorizonButton_OnHorizonButtonEvent__DelegateSignature_Statics
	{
		struct HorizonButton_eventOnHorizonButtonEvent_Parms
		{
			UHorizonButton* Button;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Button_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Button;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UHorizonButton_OnHorizonButtonEvent__DelegateSignature_Statics::NewProp_Button_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UHorizonButton_OnHorizonButtonEvent__DelegateSignature_Statics::NewProp_Button = { "Button", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HorizonButton_eventOnHorizonButtonEvent_Parms, Button), Z_Construct_UClass_UHorizonButton_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UHorizonButton_OnHorizonButtonEvent__DelegateSignature_Statics::NewProp_Button_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UHorizonButton_OnHorizonButtonEvent__DelegateSignature_Statics::NewProp_Button_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UHorizonButton_OnHorizonButtonEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UHorizonButton_OnHorizonButtonEvent__DelegateSignature_Statics::NewProp_Button,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UHorizonButton_OnHorizonButtonEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HorizonButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UHorizonButton_OnHorizonButtonEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonButton, nullptr, "OnHorizonButtonEvent__DelegateSignature", nullptr, nullptr, sizeof(HorizonButton_eventOnHorizonButtonEvent_Parms), Z_Construct_UDelegateFunction_UHorizonButton_OnHorizonButtonEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UHorizonButton_OnHorizonButtonEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UHorizonButton_OnHorizonButtonEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UHorizonButton_OnHorizonButtonEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UHorizonButton_OnHorizonButtonEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UHorizonButton_OnHorizonButtonEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UHorizonButton::execOnClickedButton)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClickedButton();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHorizonButton::execOnHoveredButton)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHoveredButton();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHorizonButton::execOnPressedButton)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPressedButton();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHorizonButton::execOnReleasedButton)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnReleasedButton();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHorizonButton::execOnUnhoveredButton)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUnhoveredButton();
		P_NATIVE_END;
	}
	void UHorizonButton::StaticRegisterNativesUHorizonButton()
	{
		UClass* Class = UHorizonButton::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnClickedButton", &UHorizonButton::execOnClickedButton },
			{ "OnHoveredButton", &UHorizonButton::execOnHoveredButton },
			{ "OnPressedButton", &UHorizonButton::execOnPressedButton },
			{ "OnReleasedButton", &UHorizonButton::execOnReleasedButton },
			{ "OnUnhoveredButton", &UHorizonButton::execOnUnhoveredButton },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHorizonButton_OnClickedButton_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonButton_OnClickedButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HorizonButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonButton_OnClickedButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonButton, nullptr, "OnClickedButton", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHorizonButton_OnClickedButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonButton_OnClickedButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHorizonButton_OnClickedButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHorizonButton_OnClickedButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHorizonButton_OnHoveredButton_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonButton_OnHoveredButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HorizonButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonButton_OnHoveredButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonButton, nullptr, "OnHoveredButton", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHorizonButton_OnHoveredButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonButton_OnHoveredButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHorizonButton_OnHoveredButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHorizonButton_OnHoveredButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHorizonButton_OnPressedButton_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonButton_OnPressedButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HorizonButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonButton_OnPressedButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonButton, nullptr, "OnPressedButton", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHorizonButton_OnPressedButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonButton_OnPressedButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHorizonButton_OnPressedButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHorizonButton_OnPressedButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHorizonButton_OnReleasedButton_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonButton_OnReleasedButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HorizonButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonButton_OnReleasedButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonButton, nullptr, "OnReleasedButton", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHorizonButton_OnReleasedButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonButton_OnReleasedButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHorizonButton_OnReleasedButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHorizonButton_OnReleasedButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHorizonButton_OnUnhoveredButton_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonButton_OnUnhoveredButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HorizonButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonButton_OnUnhoveredButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonButton, nullptr, "OnUnhoveredButton", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHorizonButton_OnUnhoveredButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonButton_OnUnhoveredButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHorizonButton_OnUnhoveredButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHorizonButton_OnUnhoveredButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHorizonButton_NoRegister()
	{
		return UHorizonButton::StaticClass();
	}
	struct Z_Construct_UClass_UHorizonButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnUnhoveredDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUnhoveredDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnHoveredDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHoveredDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnReleasedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReleasedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPressedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPressedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnClickedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnClickedDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHorizonButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UButton,
		(UObject* (*)())Z_Construct_UPackage__Script_HorizonUI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHorizonButton_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHorizonButton_OnClickedButton, "OnClickedButton" }, // 603337354
		{ &Z_Construct_UDelegateFunction_UHorizonButton_OnHorizonButtonEvent__DelegateSignature, "OnHorizonButtonEvent__DelegateSignature" }, // 77279415
		{ &Z_Construct_UFunction_UHorizonButton_OnHoveredButton, "OnHoveredButton" }, // 541816103
		{ &Z_Construct_UFunction_UHorizonButton_OnPressedButton, "OnPressedButton" }, // 1704546398
		{ &Z_Construct_UFunction_UHorizonButton_OnReleasedButton, "OnReleasedButton" }, // 321967508
		{ &Z_Construct_UFunction_UHorizonButton_OnUnhoveredButton, "OnUnhoveredButton" }, // 1956729238
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorizonButton_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HorizonButton.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HorizonButton.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorizonButton_Statics::NewProp_OnUnhoveredDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HorizonButton" },
		{ "ModuleRelativePath", "Public/HorizonButton.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHorizonButton_Statics::NewProp_OnUnhoveredDelegate = { "OnUnhoveredDelegate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHorizonButton, OnUnhoveredDelegate), Z_Construct_UDelegateFunction_UHorizonButton_OnHorizonButtonEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UHorizonButton_Statics::NewProp_OnUnhoveredDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHorizonButton_Statics::NewProp_OnUnhoveredDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorizonButton_Statics::NewProp_OnHoveredDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HorizonButton" },
		{ "ModuleRelativePath", "Public/HorizonButton.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHorizonButton_Statics::NewProp_OnHoveredDelegate = { "OnHoveredDelegate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHorizonButton, OnHoveredDelegate), Z_Construct_UDelegateFunction_UHorizonButton_OnHorizonButtonEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UHorizonButton_Statics::NewProp_OnHoveredDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHorizonButton_Statics::NewProp_OnHoveredDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorizonButton_Statics::NewProp_OnReleasedDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HorizonButton" },
		{ "ModuleRelativePath", "Public/HorizonButton.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHorizonButton_Statics::NewProp_OnReleasedDelegate = { "OnReleasedDelegate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHorizonButton, OnReleasedDelegate), Z_Construct_UDelegateFunction_UHorizonButton_OnHorizonButtonEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UHorizonButton_Statics::NewProp_OnReleasedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHorizonButton_Statics::NewProp_OnReleasedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorizonButton_Statics::NewProp_OnPressedDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HorizonButton" },
		{ "ModuleRelativePath", "Public/HorizonButton.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHorizonButton_Statics::NewProp_OnPressedDelegate = { "OnPressedDelegate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHorizonButton, OnPressedDelegate), Z_Construct_UDelegateFunction_UHorizonButton_OnHorizonButtonEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UHorizonButton_Statics::NewProp_OnPressedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHorizonButton_Statics::NewProp_OnPressedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorizonButton_Statics::NewProp_OnClickedDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HorizonButton" },
		{ "ModuleRelativePath", "Public/HorizonButton.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHorizonButton_Statics::NewProp_OnClickedDelegate = { "OnClickedDelegate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHorizonButton, OnClickedDelegate), Z_Construct_UDelegateFunction_UHorizonButton_OnHorizonButtonEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UHorizonButton_Statics::NewProp_OnClickedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHorizonButton_Statics::NewProp_OnClickedDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHorizonButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonButton_Statics::NewProp_OnUnhoveredDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonButton_Statics::NewProp_OnHoveredDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonButton_Statics::NewProp_OnReleasedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonButton_Statics::NewProp_OnPressedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonButton_Statics::NewProp_OnClickedDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHorizonButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHorizonButton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHorizonButton_Statics::ClassParams = {
		&UHorizonButton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHorizonButton_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHorizonButton_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHorizonButton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHorizonButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHorizonButton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHorizonButton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHorizonButton, 1490100291);
	template<> HORIZONUI_API UClass* StaticClass<UHorizonButton>()
	{
		return UHorizonButton::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHorizonButton(Z_Construct_UClass_UHorizonButton, &UHorizonButton::StaticClass, TEXT("/Script/HorizonUI"), TEXT("UHorizonButton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHorizonButton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
