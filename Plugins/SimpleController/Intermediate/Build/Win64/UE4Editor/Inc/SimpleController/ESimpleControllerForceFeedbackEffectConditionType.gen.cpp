// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleController/Public/ESimpleControllerForceFeedbackEffectConditionType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESimpleControllerForceFeedbackEffectConditionType() {}
// Cross Module References
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackEffectConditionType();
	UPackage* Z_Construct_UPackage__Script_SimpleController();
// End Cross Module References
	static UEnum* ESimpleControllerForceFeedbackEffectConditionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackEffectConditionType, Z_Construct_UPackage__Script_SimpleController(), TEXT("ESimpleControllerForceFeedbackEffectConditionType"));
		}
		return Singleton;
	}
	template<> SIMPLECONTROLLER_API UEnum* StaticEnum<ESimpleControllerForceFeedbackEffectConditionType>()
	{
		return ESimpleControllerForceFeedbackEffectConditionType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESimpleControllerForceFeedbackEffectConditionType(ESimpleControllerForceFeedbackEffectConditionType_StaticEnum, TEXT("/Script/SimpleController"), TEXT("ESimpleControllerForceFeedbackEffectConditionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackEffectConditionType_Hash() { return 423577432U; }
	UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackEffectConditionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SimpleController();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESimpleControllerForceFeedbackEffectConditionType"), 0, Get_Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackEffectConditionType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESimpleControllerForceFeedbackEffectConditionType::SPRING", (int64)ESimpleControllerForceFeedbackEffectConditionType::SPRING },
				{ "ESimpleControllerForceFeedbackEffectConditionType::DAMPER", (int64)ESimpleControllerForceFeedbackEffectConditionType::DAMPER },
				{ "ESimpleControllerForceFeedbackEffectConditionType::INERTIA", (int64)ESimpleControllerForceFeedbackEffectConditionType::INERTIA },
				{ "ESimpleControllerForceFeedbackEffectConditionType::FRICTION", (int64)ESimpleControllerForceFeedbackEffectConditionType::FRICTION },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DAMPER.Name", "ESimpleControllerForceFeedbackEffectConditionType::DAMPER" },
				{ "FRICTION.Name", "ESimpleControllerForceFeedbackEffectConditionType::FRICTION" },
				{ "INERTIA.Name", "ESimpleControllerForceFeedbackEffectConditionType::INERTIA" },
				{ "ModuleRelativePath", "Public/ESimpleControllerForceFeedbackEffectConditionType.h" },
				{ "SPRING.Name", "ESimpleControllerForceFeedbackEffectConditionType::SPRING" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SimpleController,
				nullptr,
				"ESimpleControllerForceFeedbackEffectConditionType",
				"ESimpleControllerForceFeedbackEffectConditionType",
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
