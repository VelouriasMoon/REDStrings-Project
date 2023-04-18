// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleController/Public/ESimpleControllerForceFeedbackEffectType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESimpleControllerForceFeedbackEffectType() {}
// Cross Module References
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackEffectType();
	UPackage* Z_Construct_UPackage__Script_SimpleController();
// End Cross Module References
	static UEnum* ESimpleControllerForceFeedbackEffectType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackEffectType, Z_Construct_UPackage__Script_SimpleController(), TEXT("ESimpleControllerForceFeedbackEffectType"));
		}
		return Singleton;
	}
	template<> SIMPLECONTROLLER_API UEnum* StaticEnum<ESimpleControllerForceFeedbackEffectType>()
	{
		return ESimpleControllerForceFeedbackEffectType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESimpleControllerForceFeedbackEffectType(ESimpleControllerForceFeedbackEffectType_StaticEnum, TEXT("/Script/SimpleController"), TEXT("ESimpleControllerForceFeedbackEffectType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackEffectType_Hash() { return 653999718U; }
	UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackEffectType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SimpleController();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESimpleControllerForceFeedbackEffectType"), 0, Get_Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackEffectType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESimpleControllerForceFeedbackEffectType::CONSTANT", (int64)ESimpleControllerForceFeedbackEffectType::CONSTANT },
				{ "ESimpleControllerForceFeedbackEffectType::LEFTRIGHT", (int64)ESimpleControllerForceFeedbackEffectType::LEFTRIGHT },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CONSTANT.Name", "ESimpleControllerForceFeedbackEffectType::CONSTANT" },
				{ "LEFTRIGHT.Name", "ESimpleControllerForceFeedbackEffectType::LEFTRIGHT" },
				{ "ModuleRelativePath", "Public/ESimpleControllerForceFeedbackEffectType.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SimpleController,
				nullptr,
				"ESimpleControllerForceFeedbackEffectType",
				"ESimpleControllerForceFeedbackEffectType",
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
