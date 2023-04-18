// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleController/Public/ESimpleControllerButtons.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESimpleControllerButtons() {}
// Cross Module References
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerButtons();
	UPackage* Z_Construct_UPackage__Script_SimpleController();
// End Cross Module References
	static UEnum* ESimpleControllerButtons_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SimpleController_ESimpleControllerButtons, Z_Construct_UPackage__Script_SimpleController(), TEXT("ESimpleControllerButtons"));
		}
		return Singleton;
	}
	template<> SIMPLECONTROLLER_API UEnum* StaticEnum<ESimpleControllerButtons>()
	{
		return ESimpleControllerButtons_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESimpleControllerButtons(ESimpleControllerButtons_StaticEnum, TEXT("/Script/SimpleController"), TEXT("ESimpleControllerButtons"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SimpleController_ESimpleControllerButtons_Hash() { return 1457590070U; }
	UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerButtons()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SimpleController();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESimpleControllerButtons"), 0, Get_Z_Construct_UEnum_SimpleController_ESimpleControllerButtons_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESimpleControllerButtons::Button_0", (int64)ESimpleControllerButtons::Button_0 },
				{ "ESimpleControllerButtons::Button_1", (int64)ESimpleControllerButtons::Button_1 },
				{ "ESimpleControllerButtons::Button_2", (int64)ESimpleControllerButtons::Button_2 },
				{ "ESimpleControllerButtons::Button_3", (int64)ESimpleControllerButtons::Button_3 },
				{ "ESimpleControllerButtons::Button_4", (int64)ESimpleControllerButtons::Button_4 },
				{ "ESimpleControllerButtons::Button_5", (int64)ESimpleControllerButtons::Button_5 },
				{ "ESimpleControllerButtons::Button_6", (int64)ESimpleControllerButtons::Button_6 },
				{ "ESimpleControllerButtons::Button_7", (int64)ESimpleControllerButtons::Button_7 },
				{ "ESimpleControllerButtons::Button_8", (int64)ESimpleControllerButtons::Button_8 },
				{ "ESimpleControllerButtons::Button_9", (int64)ESimpleControllerButtons::Button_9 },
				{ "ESimpleControllerButtons::Button_10", (int64)ESimpleControllerButtons::Button_10 },
				{ "ESimpleControllerButtons::Button_11", (int64)ESimpleControllerButtons::Button_11 },
				{ "ESimpleControllerButtons::Button_12", (int64)ESimpleControllerButtons::Button_12 },
				{ "ESimpleControllerButtons::Button_13", (int64)ESimpleControllerButtons::Button_13 },
				{ "ESimpleControllerButtons::Button_14", (int64)ESimpleControllerButtons::Button_14 },
				{ "ESimpleControllerButtons::Button_15", (int64)ESimpleControllerButtons::Button_15 },
				{ "ESimpleControllerButtons::Button_16", (int64)ESimpleControllerButtons::Button_16 },
				{ "ESimpleControllerButtons::Button_17", (int64)ESimpleControllerButtons::Button_17 },
				{ "ESimpleControllerButtons::Button_18", (int64)ESimpleControllerButtons::Button_18 },
				{ "ESimpleControllerButtons::Button_19", (int64)ESimpleControllerButtons::Button_19 },
				{ "ESimpleControllerButtons::Button_20", (int64)ESimpleControllerButtons::Button_20 },
				{ "ESimpleControllerButtons::Button_MAX", (int64)ESimpleControllerButtons::Button_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Button_0.Name", "ESimpleControllerButtons::Button_0" },
				{ "Button_1.Name", "ESimpleControllerButtons::Button_1" },
				{ "Button_10.Name", "ESimpleControllerButtons::Button_10" },
				{ "Button_11.Name", "ESimpleControllerButtons::Button_11" },
				{ "Button_12.Name", "ESimpleControllerButtons::Button_12" },
				{ "Button_13.Name", "ESimpleControllerButtons::Button_13" },
				{ "Button_14.Name", "ESimpleControllerButtons::Button_14" },
				{ "Button_15.Name", "ESimpleControllerButtons::Button_15" },
				{ "Button_16.Name", "ESimpleControllerButtons::Button_16" },
				{ "Button_17.Name", "ESimpleControllerButtons::Button_17" },
				{ "Button_18.Name", "ESimpleControllerButtons::Button_18" },
				{ "Button_19.Name", "ESimpleControllerButtons::Button_19" },
				{ "Button_2.Name", "ESimpleControllerButtons::Button_2" },
				{ "Button_20.Name", "ESimpleControllerButtons::Button_20" },
				{ "Button_3.Name", "ESimpleControllerButtons::Button_3" },
				{ "Button_4.Name", "ESimpleControllerButtons::Button_4" },
				{ "Button_5.Name", "ESimpleControllerButtons::Button_5" },
				{ "Button_6.Name", "ESimpleControllerButtons::Button_6" },
				{ "Button_7.Name", "ESimpleControllerButtons::Button_7" },
				{ "Button_8.Name", "ESimpleControllerButtons::Button_8" },
				{ "Button_9.Name", "ESimpleControllerButtons::Button_9" },
				{ "Button_MAX.Hidden", "" },
				{ "Button_MAX.Name", "ESimpleControllerButtons::Button_MAX" },
				{ "ModuleRelativePath", "Public/ESimpleControllerButtons.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SimpleController,
				nullptr,
				"ESimpleControllerButtons",
				"ESimpleControllerButtons",
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
