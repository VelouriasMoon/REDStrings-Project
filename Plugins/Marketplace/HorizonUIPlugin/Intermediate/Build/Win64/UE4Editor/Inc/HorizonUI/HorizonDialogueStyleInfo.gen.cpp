// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HorizonUIPlugin/Public/HorizonDialogueStyleInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHorizonDialogueStyleInfo() {}
// Cross Module References
	HORIZONUI_API UClass* Z_Construct_UClass_UHorizonDialogueStyleInfo_NoRegister();
	HORIZONUI_API UClass* Z_Construct_UClass_UHorizonDialogueStyleInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_HorizonUI();
	HORIZONUI_API UScriptStruct* Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle();
// End Cross Module References
	void UHorizonDialogueStyleInfo::StaticRegisterNativesUHorizonDialogueStyleInfo()
	{
	}
	UClass* Z_Construct_UClass_UHorizonDialogueStyleInfo_NoRegister()
	{
		return UHorizonDialogueStyleInfo::StaticClass();
	}
	struct Z_Construct_UClass_UHorizonDialogueStyleInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SegmentStyleList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SegmentStyleList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SegmentStyleList_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHorizonDialogueStyleInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HorizonUI,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorizonDialogueStyleInfo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HorizonDialogueStyleInfo.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HorizonDialogueStyleInfo.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorizonDialogueStyleInfo_Statics::NewProp_SegmentStyleList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HorizonDialogueStyleInfo" },
		{ "ModuleRelativePath", "Public/HorizonDialogueStyleInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHorizonDialogueStyleInfo_Statics::NewProp_SegmentStyleList = { "SegmentStyleList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHorizonDialogueStyleInfo, SegmentStyleList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHorizonDialogueStyleInfo_Statics::NewProp_SegmentStyleList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHorizonDialogueStyleInfo_Statics::NewProp_SegmentStyleList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHorizonDialogueStyleInfo_Statics::NewProp_SegmentStyleList_Inner = { "SegmentStyleList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHorizonDialogueStyleInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonDialogueStyleInfo_Statics::NewProp_SegmentStyleList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonDialogueStyleInfo_Statics::NewProp_SegmentStyleList_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHorizonDialogueStyleInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHorizonDialogueStyleInfo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHorizonDialogueStyleInfo_Statics::ClassParams = {
		&UHorizonDialogueStyleInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHorizonDialogueStyleInfo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHorizonDialogueStyleInfo_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHorizonDialogueStyleInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHorizonDialogueStyleInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHorizonDialogueStyleInfo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHorizonDialogueStyleInfo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHorizonDialogueStyleInfo, 1167227861);
	template<> HORIZONUI_API UClass* StaticClass<UHorizonDialogueStyleInfo>()
	{
		return UHorizonDialogueStyleInfo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHorizonDialogueStyleInfo(Z_Construct_UClass_UHorizonDialogueStyleInfo, &UHorizonDialogueStyleInfo::StaticClass, TEXT("/Script/HorizonUI"), TEXT("UHorizonDialogueStyleInfo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHorizonDialogueStyleInfo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
