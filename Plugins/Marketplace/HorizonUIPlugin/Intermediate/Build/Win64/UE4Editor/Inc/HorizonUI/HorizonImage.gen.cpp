// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HorizonUIPlugin/Public/HorizonImage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHorizonImage() {}
// Cross Module References
	HORIZONUI_API UClass* Z_Construct_UClass_UHorizonImage_NoRegister();
	HORIZONUI_API UClass* Z_Construct_UClass_UHorizonImage();
	UMG_API UClass* Z_Construct_UClass_UImage();
	UPackage* Z_Construct_UPackage__Script_HorizonUI();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox2D();
// End Cross Module References
	void UHorizonImage::StaticRegisterNativesUHorizonImage()
	{
	}
	UClass* Z_Construct_UClass_UHorizonImage_NoRegister()
	{
		return UHorizonImage::StaticClass();
	}
	struct Z_Construct_UClass_UHorizonImage_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UVRegion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UVRegion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHorizonImage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UImage,
		(UObject* (*)())Z_Construct_UPackage__Script_HorizonUI,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorizonImage_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HorizonImage.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HorizonImage.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorizonImage_Statics::NewProp_UVRegion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HorizonImage" },
		{ "ModuleRelativePath", "Public/HorizonImage.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHorizonImage_Statics::NewProp_UVRegion = { "UVRegion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHorizonImage, UVRegion), Z_Construct_UScriptStruct_FBox2D, METADATA_PARAMS(Z_Construct_UClass_UHorizonImage_Statics::NewProp_UVRegion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHorizonImage_Statics::NewProp_UVRegion_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHorizonImage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonImage_Statics::NewProp_UVRegion,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHorizonImage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHorizonImage>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHorizonImage_Statics::ClassParams = {
		&UHorizonImage::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHorizonImage_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHorizonImage_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHorizonImage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHorizonImage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHorizonImage()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHorizonImage_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHorizonImage, 376701650);
	template<> HORIZONUI_API UClass* StaticClass<UHorizonImage>()
	{
		return UHorizonImage::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHorizonImage(Z_Construct_UClass_UHorizonImage, &UHorizonImage::StaticClass, TEXT("/Script/HorizonUI"), TEXT("UHorizonImage"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHorizonImage);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
