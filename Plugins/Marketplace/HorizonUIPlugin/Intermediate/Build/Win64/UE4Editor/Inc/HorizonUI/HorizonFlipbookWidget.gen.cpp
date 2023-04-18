// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HorizonUIPlugin/Public/HorizonFlipbookWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHorizonFlipbookWidget() {}
// Cross Module References
	HORIZONUI_API UClass* Z_Construct_UClass_UHorizonFlipbookWidget_NoRegister();
	HORIZONUI_API UClass* Z_Construct_UClass_UHorizonFlipbookWidget();
	UMG_API UClass* Z_Construct_UClass_UImage();
	UPackage* Z_Construct_UPackage__Script_HorizonUI();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UHorizonFlipbookWidget::execGetCurrentAnimationDuration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentAnimationDuration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHorizonFlipbookWidget::execisEndAnimation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->isEndAnimation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHorizonFlipbookWidget::execPauseAnimation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PauseAnimation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHorizonFlipbookWidget::execPlayAnimation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayAnimation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHorizonFlipbookWidget::execResetAnimation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetAnimation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHorizonFlipbookWidget::execResumeAnimation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResumeAnimation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHorizonFlipbookWidget::execSetCurrentAnimationDuration)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDuration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrentAnimationDuration(Z_Param_InDuration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHorizonFlipbookWidget::execSetFlipbook)
	{
		P_GET_OBJECT(UPaperFlipbook,Z_Param_InFlipbook);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFlipbook(Z_Param_InFlipbook);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHorizonFlipbookWidget::execStopAnimation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopAnimation();
		P_NATIVE_END;
	}
	void UHorizonFlipbookWidget::StaticRegisterNativesUHorizonFlipbookWidget()
	{
		UClass* Class = UHorizonFlipbookWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentAnimationDuration", &UHorizonFlipbookWidget::execGetCurrentAnimationDuration },
			{ "isEndAnimation", &UHorizonFlipbookWidget::execisEndAnimation },
			{ "PauseAnimation", &UHorizonFlipbookWidget::execPauseAnimation },
			{ "PlayAnimation", &UHorizonFlipbookWidget::execPlayAnimation },
			{ "ResetAnimation", &UHorizonFlipbookWidget::execResetAnimation },
			{ "ResumeAnimation", &UHorizonFlipbookWidget::execResumeAnimation },
			{ "SetCurrentAnimationDuration", &UHorizonFlipbookWidget::execSetCurrentAnimationDuration },
			{ "SetFlipbook", &UHorizonFlipbookWidget::execSetFlipbook },
			{ "StopAnimation", &UHorizonFlipbookWidget::execStopAnimation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHorizonFlipbookWidget_GetCurrentAnimationDuration_Statics
	{
		struct HorizonFlipbookWidget_eventGetCurrentAnimationDuration_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHorizonFlipbookWidget_GetCurrentAnimationDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HorizonFlipbookWidget_eventGetCurrentAnimationDuration_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonFlipbookWidget_GetCurrentAnimationDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonFlipbookWidget_GetCurrentAnimationDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonFlipbookWidget_GetCurrentAnimationDuration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HorizonFlipbookWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonFlipbookWidget_GetCurrentAnimationDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonFlipbookWidget, nullptr, "GetCurrentAnimationDuration", nullptr, nullptr, sizeof(HorizonFlipbookWidget_eventGetCurrentAnimationDuration_Parms), Z_Construct_UFunction_UHorizonFlipbookWidget_GetCurrentAnimationDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonFlipbookWidget_GetCurrentAnimationDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHorizonFlipbookWidget_GetCurrentAnimationDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonFlipbookWidget_GetCurrentAnimationDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHorizonFlipbookWidget_GetCurrentAnimationDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHorizonFlipbookWidget_GetCurrentAnimationDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHorizonFlipbookWidget_isEndAnimation_Statics
	{
		struct HorizonFlipbookWidget_eventisEndAnimation_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHorizonFlipbookWidget_isEndAnimation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HorizonFlipbookWidget_eventisEndAnimation_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHorizonFlipbookWidget_isEndAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HorizonFlipbookWidget_eventisEndAnimation_Parms), &Z_Construct_UFunction_UHorizonFlipbookWidget_isEndAnimation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonFlipbookWidget_isEndAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonFlipbookWidget_isEndAnimation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonFlipbookWidget_isEndAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HorizonFlipbookWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonFlipbookWidget_isEndAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonFlipbookWidget, nullptr, "isEndAnimation", nullptr, nullptr, sizeof(HorizonFlipbookWidget_eventisEndAnimation_Parms), Z_Construct_UFunction_UHorizonFlipbookWidget_isEndAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonFlipbookWidget_isEndAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHorizonFlipbookWidget_isEndAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonFlipbookWidget_isEndAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHorizonFlipbookWidget_isEndAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHorizonFlipbookWidget_isEndAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHorizonFlipbookWidget_PauseAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonFlipbookWidget_PauseAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HorizonFlipbookWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonFlipbookWidget_PauseAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonFlipbookWidget, nullptr, "PauseAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHorizonFlipbookWidget_PauseAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonFlipbookWidget_PauseAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHorizonFlipbookWidget_PauseAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHorizonFlipbookWidget_PauseAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHorizonFlipbookWidget_PlayAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonFlipbookWidget_PlayAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HorizonFlipbookWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonFlipbookWidget_PlayAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonFlipbookWidget, nullptr, "PlayAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHorizonFlipbookWidget_PlayAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonFlipbookWidget_PlayAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHorizonFlipbookWidget_PlayAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHorizonFlipbookWidget_PlayAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHorizonFlipbookWidget_ResetAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonFlipbookWidget_ResetAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HorizonFlipbookWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonFlipbookWidget_ResetAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonFlipbookWidget, nullptr, "ResetAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHorizonFlipbookWidget_ResetAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonFlipbookWidget_ResetAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHorizonFlipbookWidget_ResetAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHorizonFlipbookWidget_ResetAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHorizonFlipbookWidget_ResumeAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonFlipbookWidget_ResumeAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HorizonFlipbookWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonFlipbookWidget_ResumeAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonFlipbookWidget, nullptr, "ResumeAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHorizonFlipbookWidget_ResumeAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonFlipbookWidget_ResumeAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHorizonFlipbookWidget_ResumeAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHorizonFlipbookWidget_ResumeAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHorizonFlipbookWidget_SetCurrentAnimationDuration_Statics
	{
		struct HorizonFlipbookWidget_eventSetCurrentAnimationDuration_Parms
		{
			float InDuration;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHorizonFlipbookWidget_SetCurrentAnimationDuration_Statics::NewProp_InDuration = { "InDuration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HorizonFlipbookWidget_eventSetCurrentAnimationDuration_Parms, InDuration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonFlipbookWidget_SetCurrentAnimationDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonFlipbookWidget_SetCurrentAnimationDuration_Statics::NewProp_InDuration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonFlipbookWidget_SetCurrentAnimationDuration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HorizonFlipbookWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonFlipbookWidget_SetCurrentAnimationDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonFlipbookWidget, nullptr, "SetCurrentAnimationDuration", nullptr, nullptr, sizeof(HorizonFlipbookWidget_eventSetCurrentAnimationDuration_Parms), Z_Construct_UFunction_UHorizonFlipbookWidget_SetCurrentAnimationDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonFlipbookWidget_SetCurrentAnimationDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHorizonFlipbookWidget_SetCurrentAnimationDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonFlipbookWidget_SetCurrentAnimationDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHorizonFlipbookWidget_SetCurrentAnimationDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHorizonFlipbookWidget_SetCurrentAnimationDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHorizonFlipbookWidget_SetFlipbook_Statics
	{
		struct HorizonFlipbookWidget_eventSetFlipbook_Parms
		{
			UPaperFlipbook* InFlipbook;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InFlipbook;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHorizonFlipbookWidget_SetFlipbook_Statics::NewProp_InFlipbook = { "InFlipbook", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HorizonFlipbookWidget_eventSetFlipbook_Parms, InFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonFlipbookWidget_SetFlipbook_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonFlipbookWidget_SetFlipbook_Statics::NewProp_InFlipbook,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonFlipbookWidget_SetFlipbook_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HorizonFlipbookWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonFlipbookWidget_SetFlipbook_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonFlipbookWidget, nullptr, "SetFlipbook", nullptr, nullptr, sizeof(HorizonFlipbookWidget_eventSetFlipbook_Parms), Z_Construct_UFunction_UHorizonFlipbookWidget_SetFlipbook_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonFlipbookWidget_SetFlipbook_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHorizonFlipbookWidget_SetFlipbook_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonFlipbookWidget_SetFlipbook_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHorizonFlipbookWidget_SetFlipbook()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHorizonFlipbookWidget_SetFlipbook_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHorizonFlipbookWidget_StopAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonFlipbookWidget_StopAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HorizonFlipbookWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonFlipbookWidget_StopAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonFlipbookWidget, nullptr, "StopAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHorizonFlipbookWidget_StopAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonFlipbookWidget_StopAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHorizonFlipbookWidget_StopAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHorizonFlipbookWidget_StopAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHorizonFlipbookWidget_NoRegister()
	{
		return UHorizonFlipbookWidget::StaticClass();
	}
	struct Z_Construct_UClass_UHorizonFlipbookWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaperFlipbook_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PaperFlipbook;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumOfLoop_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumOfLoop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsStartTick_MetaData[];
#endif
		static void NewProp_bIsStartTick_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsStartTick;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHorizonFlipbookWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UImage,
		(UObject* (*)())Z_Construct_UPackage__Script_HorizonUI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHorizonFlipbookWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHorizonFlipbookWidget_GetCurrentAnimationDuration, "GetCurrentAnimationDuration" }, // 3073175547
		{ &Z_Construct_UFunction_UHorizonFlipbookWidget_isEndAnimation, "isEndAnimation" }, // 1740012247
		{ &Z_Construct_UFunction_UHorizonFlipbookWidget_PauseAnimation, "PauseAnimation" }, // 3341063601
		{ &Z_Construct_UFunction_UHorizonFlipbookWidget_PlayAnimation, "PlayAnimation" }, // 3773101983
		{ &Z_Construct_UFunction_UHorizonFlipbookWidget_ResetAnimation, "ResetAnimation" }, // 2722120363
		{ &Z_Construct_UFunction_UHorizonFlipbookWidget_ResumeAnimation, "ResumeAnimation" }, // 1732008072
		{ &Z_Construct_UFunction_UHorizonFlipbookWidget_SetCurrentAnimationDuration, "SetCurrentAnimationDuration" }, // 2474930276
		{ &Z_Construct_UFunction_UHorizonFlipbookWidget_SetFlipbook, "SetFlipbook" }, // 2567246683
		{ &Z_Construct_UFunction_UHorizonFlipbookWidget_StopAnimation, "StopAnimation" }, // 1653963085
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorizonFlipbookWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HorizonFlipbookWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HorizonFlipbookWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorizonFlipbookWidget_Statics::NewProp_PaperFlipbook_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HorizonFlipbookWidget" },
		{ "ModuleRelativePath", "Public/HorizonFlipbookWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHorizonFlipbookWidget_Statics::NewProp_PaperFlipbook = { "PaperFlipbook", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHorizonFlipbookWidget, PaperFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHorizonFlipbookWidget_Statics::NewProp_PaperFlipbook_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHorizonFlipbookWidget_Statics::NewProp_PaperFlipbook_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorizonFlipbookWidget_Statics::NewProp_NumOfLoop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HorizonFlipbookWidget" },
		{ "ModuleRelativePath", "Public/HorizonFlipbookWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHorizonFlipbookWidget_Statics::NewProp_NumOfLoop = { "NumOfLoop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHorizonFlipbookWidget, NumOfLoop), METADATA_PARAMS(Z_Construct_UClass_UHorizonFlipbookWidget_Statics::NewProp_NumOfLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHorizonFlipbookWidget_Statics::NewProp_NumOfLoop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorizonFlipbookWidget_Statics::NewProp_bIsStartTick_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HorizonFlipbookWidget" },
		{ "ModuleRelativePath", "Public/HorizonFlipbookWidget.h" },
	};
#endif
	void Z_Construct_UClass_UHorizonFlipbookWidget_Statics::NewProp_bIsStartTick_SetBit(void* Obj)
	{
		((UHorizonFlipbookWidget*)Obj)->bIsStartTick = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHorizonFlipbookWidget_Statics::NewProp_bIsStartTick = { "bIsStartTick", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHorizonFlipbookWidget), &Z_Construct_UClass_UHorizonFlipbookWidget_Statics::NewProp_bIsStartTick_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHorizonFlipbookWidget_Statics::NewProp_bIsStartTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHorizonFlipbookWidget_Statics::NewProp_bIsStartTick_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHorizonFlipbookWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonFlipbookWidget_Statics::NewProp_PaperFlipbook,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonFlipbookWidget_Statics::NewProp_NumOfLoop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonFlipbookWidget_Statics::NewProp_bIsStartTick,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHorizonFlipbookWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHorizonFlipbookWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHorizonFlipbookWidget_Statics::ClassParams = {
		&UHorizonFlipbookWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHorizonFlipbookWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHorizonFlipbookWidget_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHorizonFlipbookWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHorizonFlipbookWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHorizonFlipbookWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHorizonFlipbookWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHorizonFlipbookWidget, 367249732);
	template<> HORIZONUI_API UClass* StaticClass<UHorizonFlipbookWidget>()
	{
		return UHorizonFlipbookWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHorizonFlipbookWidget(Z_Construct_UClass_UHorizonFlipbookWidget, &UHorizonFlipbookWidget::StaticClass, TEXT("/Script/HorizonUI"), TEXT("UHorizonFlipbookWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHorizonFlipbookWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
