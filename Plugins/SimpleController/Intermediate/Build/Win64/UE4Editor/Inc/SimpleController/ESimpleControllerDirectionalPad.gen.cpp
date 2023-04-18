// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleController/Public/ESimpleControllerDirectionalPad.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESimpleControllerDirectionalPad() {}
// Cross Module References
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerDirectionalPad();
	UPackage* Z_Construct_UPackage__Script_SimpleController();
// End Cross Module References
	static UEnum* ESimpleControllerDirectionalPad_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SimpleController_ESimpleControllerDirectionalPad, Z_Construct_UPackage__Script_SimpleController(), TEXT("ESimpleControllerDirectionalPad"));
		}
		return Singleton;
	}
	template<> SIMPLECONTROLLER_API UEnum* StaticEnum<ESimpleControllerDirectionalPad>()
	{
		return ESimpleControllerDirectionalPad_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESimpleControllerDirectionalPad(ESimpleControllerDirectionalPad_StaticEnum, TEXT("/Script/SimpleController"), TEXT("ESimpleControllerDirectionalPad"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SimpleController_ESimpleControllerDirectionalPad_Hash() { return 2100287595U; }
	UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerDirectionalPad()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SimpleController();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESimpleControllerDirectionalPad"), 0, Get_Z_Construct_UEnum_SimpleController_ESimpleControllerDirectionalPad_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESimpleControllerDirectionalPad::CENTERED", (int64)ESimpleControllerDirectionalPad::CENTERED },
				{ "ESimpleControllerDirectionalPad::UP", (int64)ESimpleControllerDirectionalPad::UP },
				{ "ESimpleControllerDirectionalPad::RIGHT", (int64)ESimpleControllerDirectionalPad::RIGHT },
				{ "ESimpleControllerDirectionalPad::DOWN", (int64)ESimpleControllerDirectionalPad::DOWN },
				{ "ESimpleControllerDirectionalPad::LEFT", (int64)ESimpleControllerDirectionalPad::LEFT },
				{ "ESimpleControllerDirectionalPad::RIGHTUP", (int64)ESimpleControllerDirectionalPad::RIGHTUP },
				{ "ESimpleControllerDirectionalPad::RIGHTDOWN", (int64)ESimpleControllerDirectionalPad::RIGHTDOWN },
				{ "ESimpleControllerDirectionalPad::LEFTUP", (int64)ESimpleControllerDirectionalPad::LEFTUP },
				{ "ESimpleControllerDirectionalPad::LEFTDOWN", (int64)ESimpleControllerDirectionalPad::LEFTDOWN },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CENTERED.Name", "ESimpleControllerDirectionalPad::CENTERED" },
				{ "DOWN.Name", "ESimpleControllerDirectionalPad::DOWN" },
				{ "LEFT.Name", "ESimpleControllerDirectionalPad::LEFT" },
				{ "LEFTDOWN.Name", "ESimpleControllerDirectionalPad::LEFTDOWN" },
				{ "LEFTUP.Name", "ESimpleControllerDirectionalPad::LEFTUP" },
				{ "ModuleRelativePath", "Public/ESimpleControllerDirectionalPad.h" },
				{ "RIGHT.Name", "ESimpleControllerDirectionalPad::RIGHT" },
				{ "RIGHTDOWN.Name", "ESimpleControllerDirectionalPad::RIGHTDOWN" },
				{ "RIGHTUP.Name", "ESimpleControllerDirectionalPad::RIGHTUP" },
				{ "UP.Name", "ESimpleControllerDirectionalPad::UP" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SimpleController,
				nullptr,
				"ESimpleControllerDirectionalPad",
				"ESimpleControllerDirectionalPad",
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
