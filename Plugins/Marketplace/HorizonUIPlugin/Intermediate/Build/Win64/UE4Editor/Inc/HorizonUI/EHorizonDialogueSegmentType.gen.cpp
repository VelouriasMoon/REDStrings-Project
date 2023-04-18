// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HorizonUIPlugin/Public/EHorizonDialogueSegmentType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEHorizonDialogueSegmentType() {}
// Cross Module References
	HORIZONUI_API UEnum* Z_Construct_UEnum_HorizonUI_EHorizonDialogueSegmentType();
	UPackage* Z_Construct_UPackage__Script_HorizonUI();
// End Cross Module References
	static UEnum* EHorizonDialogueSegmentType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HorizonUI_EHorizonDialogueSegmentType, Z_Construct_UPackage__Script_HorizonUI(), TEXT("EHorizonDialogueSegmentType"));
		}
		return Singleton;
	}
	template<> HORIZONUI_API UEnum* StaticEnum<EHorizonDialogueSegmentType>()
	{
		return EHorizonDialogueSegmentType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHorizonDialogueSegmentType(EHorizonDialogueSegmentType_StaticEnum, TEXT("/Script/HorizonUI"), TEXT("EHorizonDialogueSegmentType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HorizonUI_EHorizonDialogueSegmentType_Hash() { return 3157964523U; }
	UEnum* Z_Construct_UEnum_HorizonUI_EHorizonDialogueSegmentType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HorizonUI();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHorizonDialogueSegmentType"), 0, Get_Z_Construct_UEnum_HorizonUI_EHorizonDialogueSegmentType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHorizonDialogueSegmentType::Invalidated", (int64)EHorizonDialogueSegmentType::Invalidated },
				{ "EHorizonDialogueSegmentType::Text", (int64)EHorizonDialogueSegmentType::Text },
				{ "EHorizonDialogueSegmentType::NewLine", (int64)EHorizonDialogueSegmentType::NewLine },
				{ "EHorizonDialogueSegmentType::Image", (int64)EHorizonDialogueSegmentType::Image },
				{ "EHorizonDialogueSegmentType::PaperFlipbook", (int64)EHorizonDialogueSegmentType::PaperFlipbook },
				{ "EHorizonDialogueSegmentType::Material", (int64)EHorizonDialogueSegmentType::Material },
				{ "EHorizonDialogueSegmentType::HyperText", (int64)EHorizonDialogueSegmentType::HyperText },
				{ "EHorizonDialogueSegmentType::Custom", (int64)EHorizonDialogueSegmentType::Custom },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Custom.Name", "EHorizonDialogueSegmentType::Custom" },
				{ "HyperText.Name", "EHorizonDialogueSegmentType::HyperText" },
				{ "Image.Name", "EHorizonDialogueSegmentType::Image" },
				{ "Invalidated.Name", "EHorizonDialogueSegmentType::Invalidated" },
				{ "Material.Name", "EHorizonDialogueSegmentType::Material" },
				{ "ModuleRelativePath", "Public/EHorizonDialogueSegmentType.h" },
				{ "NewLine.Name", "EHorizonDialogueSegmentType::NewLine" },
				{ "PaperFlipbook.Name", "EHorizonDialogueSegmentType::PaperFlipbook" },
				{ "Text.Name", "EHorizonDialogueSegmentType::Text" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HorizonUI,
				nullptr,
				"EHorizonDialogueSegmentType",
				"EHorizonDialogueSegmentType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
