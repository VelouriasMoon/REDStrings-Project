// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHorizonUI_init() {}
	HORIZONUI_API UFunction* Z_Construct_UDelegateFunction_UHorizonButton_OnHorizonButtonEvent__DelegateSignature();
	HORIZONUI_API UFunction* Z_Construct_UDelegateFunction_UHorizonButtonUserWidget_OnHorizonButtonFocusEvent__DelegateSignature();
	HORIZONUI_API UFunction* Z_Construct_UDelegateFunction_UHorizonButtonUserWidget_OnHorizonButtonEvent__DelegateSignature();
	HORIZONUI_API UFunction* Z_Construct_UDelegateFunction_UHorizonDialogueMsgTextBlock_OnHorizonHypertextEvent__DelegateSignature();
	HORIZONUI_API UFunction* Z_Construct_UDelegateFunction_UHorizonDialogueMsgTextBlock_OnHorizonDialoguePageEvent__DelegateSignature();
	HORIZONUI_API UFunction* Z_Construct_UDelegateFunction_UHorizonDialogueMsgTextBlock_OnHorizonDialogueMsgEvent__DelegateSignature();
	HORIZONUI_API UFunction* Z_Construct_UDelegateFunction_UHorizonDialogueMsgTextBlock_OnHorizonDialogueCustomEvent__DelegateSignature();
	HORIZONUI_API UFunction* Z_Construct_UDelegateFunction_UHorizonDialogueMsgTextBlock_OnHorizonDialogueCharAdvancedEvent__DelegateSignature();
	HORIZONUI_API UFunction* Z_Construct_UDelegateFunction_UHorizonRadioButtonUserWidget_OnHorizonRadioButtonEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_HorizonUI()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UHorizonButton_OnHorizonButtonEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UHorizonButtonUserWidget_OnHorizonButtonFocusEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UHorizonButtonUserWidget_OnHorizonButtonEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UHorizonDialogueMsgTextBlock_OnHorizonHypertextEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UHorizonDialogueMsgTextBlock_OnHorizonDialoguePageEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UHorizonDialogueMsgTextBlock_OnHorizonDialogueMsgEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UHorizonDialogueMsgTextBlock_OnHorizonDialogueCustomEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UHorizonDialogueMsgTextBlock_OnHorizonDialogueCharAdvancedEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UHorizonRadioButtonUserWidget_OnHorizonRadioButtonEvent__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/HorizonUI",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x6F97C07F,
				0x2A984BB9,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
