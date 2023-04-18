// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HorizonUIPlugin/Public/HorizonTextBlock.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHorizonTextBlock() {}
// Cross Module References
	HORIZONUI_API UClass* Z_Construct_UClass_UHorizonTextBlock_NoRegister();
	HORIZONUI_API UClass* Z_Construct_UClass_UHorizonTextBlock();
	UMG_API UClass* Z_Construct_UClass_UTextBlock();
	UPackage* Z_Construct_UPackage__Script_HorizonUI();
	SLATE_API UEnum* Z_Construct_UEnum_Slate_ETextJustify();
// End Cross Module References
	DEFINE_FUNCTION(UHorizonTextBlock::execGetJustification)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<ETextJustify::Type>*)Z_Param__Result=P_THIS->GetJustification();
		P_NATIVE_END;
	}
	void UHorizonTextBlock::StaticRegisterNativesUHorizonTextBlock()
	{
		UClass* Class = UHorizonTextBlock::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetJustification", &UHorizonTextBlock::execGetJustification },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHorizonTextBlock_GetJustification_Statics
	{
		struct HorizonTextBlock_eventGetJustification_Parms
		{
			TEnumAsByte<ETextJustify::Type> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHorizonTextBlock_GetJustification_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HorizonTextBlock_eventGetJustification_Parms, ReturnValue), Z_Construct_UEnum_Slate_ETextJustify, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonTextBlock_GetJustification_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonTextBlock_GetJustification_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonTextBlock_GetJustification_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HorizonTextBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonTextBlock_GetJustification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonTextBlock, nullptr, "GetJustification", nullptr, nullptr, sizeof(HorizonTextBlock_eventGetJustification_Parms), Z_Construct_UFunction_UHorizonTextBlock_GetJustification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonTextBlock_GetJustification_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHorizonTextBlock_GetJustification_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonTextBlock_GetJustification_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHorizonTextBlock_GetJustification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHorizonTextBlock_GetJustification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHorizonTextBlock_NoRegister()
	{
		return UHorizonTextBlock::StaticClass();
	}
	struct Z_Construct_UClass_UHorizonTextBlock_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHorizonTextBlock_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTextBlock,
		(UObject* (*)())Z_Construct_UPackage__Script_HorizonUI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHorizonTextBlock_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHorizonTextBlock_GetJustification, "GetJustification" }, // 3521462838
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorizonTextBlock_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HorizonTextBlock.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HorizonTextBlock.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHorizonTextBlock_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHorizonTextBlock>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHorizonTextBlock_Statics::ClassParams = {
		&UHorizonTextBlock::StaticClass,
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
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHorizonTextBlock_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHorizonTextBlock_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHorizonTextBlock()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHorizonTextBlock_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHorizonTextBlock, 515218486);
	template<> HORIZONUI_API UClass* StaticClass<UHorizonTextBlock>()
	{
		return UHorizonTextBlock::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHorizonTextBlock(Z_Construct_UClass_UHorizonTextBlock, &UHorizonTextBlock::StaticClass, TEXT("/Script/HorizonUI"), TEXT("UHorizonTextBlock"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHorizonTextBlock);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
