// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleController/Public/ESimpleControllerForceFeedbackDirectionType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESimpleControllerForceFeedbackDirectionType() {}
// Cross Module References
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackDirectionType();
	UPackage* Z_Construct_UPackage__Script_SimpleController();
// End Cross Module References
	static UEnum* ESimpleControllerForceFeedbackDirectionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackDirectionType, Z_Construct_UPackage__Script_SimpleController(), TEXT("ESimpleControllerForceFeedbackDirectionType"));
		}
		return Singleton;
	}
	template<> SIMPLECONTROLLER_API UEnum* StaticEnum<ESimpleControllerForceFeedbackDirectionType>()
	{
		return ESimpleControllerForceFeedbackDirectionType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESimpleControllerForceFeedbackDirectionType(ESimpleControllerForceFeedbackDirectionType_StaticEnum, TEXT("/Script/SimpleController"), TEXT("ESimpleControllerForceFeedbackDirectionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackDirectionType_Hash() { return 433328096U; }
	UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackDirectionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SimpleController();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESimpleControllerForceFeedbackDirectionType"), 0, Get_Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackDirectionType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESimpleControllerForceFeedbackDirectionType::CARTESIAN", (int64)ESimpleControllerForceFeedbackDirectionType::CARTESIAN },
				{ "ESimpleControllerForceFeedbackDirectionType::POLAR", (int64)ESimpleControllerForceFeedbackDirectionType::POLAR },
				{ "ESimpleControllerForceFeedbackDirectionType::SPHERICAL", (int64)ESimpleControllerForceFeedbackDirectionType::SPHERICAL },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CARTESIAN.Name", "ESimpleControllerForceFeedbackDirectionType::CARTESIAN" },
				{ "ModuleRelativePath", "Public/ESimpleControllerForceFeedbackDirectionType.h" },
				{ "POLAR.Name", "ESimpleControllerForceFeedbackDirectionType::POLAR" },
				{ "SPHERICAL.Name", "ESimpleControllerForceFeedbackDirectionType::SPHERICAL" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SimpleController,
				nullptr,
				"ESimpleControllerForceFeedbackDirectionType",
				"ESimpleControllerForceFeedbackDirectionType",
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
