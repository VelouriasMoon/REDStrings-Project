// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionSystem/Public/EDamageState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEDamageState() {}
// Cross Module References
	ACTIONSYSTEM_API UEnum* Z_Construct_UEnum_ActionSystem_EDamageState();
	UPackage* Z_Construct_UPackage__Script_ActionSystem();
// End Cross Module References
	static UEnum* EDamageState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ActionSystem_EDamageState, Z_Construct_UPackage__Script_ActionSystem(), TEXT("EDamageState"));
		}
		return Singleton;
	}
	template<> ACTIONSYSTEM_API UEnum* StaticEnum<EDamageState>()
	{
		return EDamageState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDamageState(EDamageState_StaticEnum, TEXT("/Script/ActionSystem"), TEXT("EDamageState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ActionSystem_EDamageState_Hash() { return 890138144U; }
	UEnum* Z_Construct_UEnum_ActionSystem_EDamageState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ActionSystem();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDamageState"), 0, Get_Z_Construct_UEnum_ActionSystem_EDamageState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "DS_StandLightFront", (int64)DS_StandLightFront },
				{ "DS_StandLightBack", (int64)DS_StandLightBack },
				{ "DS_StandLightLeft", (int64)DS_StandLightLeft },
				{ "DS_StandLightRight", (int64)DS_StandLightRight },
				{ "DS_StandMiddleFront", (int64)DS_StandMiddleFront },
				{ "DS_StandMiddleBack", (int64)DS_StandMiddleBack },
				{ "DS_StandMiddleLeft", (int64)DS_StandMiddleLeft },
				{ "DS_StandMiddleRight", (int64)DS_StandMiddleRight },
				{ "DS_StandHighFront", (int64)DS_StandHighFront },
				{ "DS_StandHighBack", (int64)DS_StandHighBack },
				{ "DS_StandHighLeft", (int64)DS_StandHighLeft },
				{ "DS_StandHighRight", (int64)DS_StandHighRight },
				{ "DS_SupineLight", (int64)DS_SupineLight },
				{ "DS_SupineMiddleFront", (int64)DS_SupineMiddleFront },
				{ "DS_SupineMiddleBack", (int64)DS_SupineMiddleBack },
				{ "DS_SupineMiddleLeft", (int64)DS_SupineMiddleLeft },
				{ "DS_SupineMiddleRight", (int64)DS_SupineMiddleRight },
				{ "DS_SupineHighFront", (int64)DS_SupineHighFront },
				{ "DS_SupineHighBack", (int64)DS_SupineHighBack },
				{ "DS_SupineHighLeft", (int64)DS_SupineHighLeft },
				{ "DS_SupineHighRight", (int64)DS_SupineHighRight },
				{ "DS_ProneLight", (int64)DS_ProneLight },
				{ "DS_ProneMiddleFront", (int64)DS_ProneMiddleFront },
				{ "DS_ProneMiddleBack", (int64)DS_ProneMiddleBack },
				{ "DS_ProneMiddleLeft", (int64)DS_ProneMiddleLeft },
				{ "DS_ProneMiddleRight", (int64)DS_ProneMiddleRight },
				{ "DS_ProneHighFront", (int64)DS_ProneHighFront },
				{ "DS_ProneHighBack", (int64)DS_ProneHighBack },
				{ "DS_ProneHighLeft", (int64)DS_ProneHighLeft },
				{ "DS_ProneHighRight", (int64)DS_ProneHighRight },
				{ "DS_MAX", (int64)DS_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DS_MAX.Hidden", "" },
				{ "DS_MAX.Name", "DS_MAX" },
				{ "DS_ProneHighBack.Name", "DS_ProneHighBack" },
				{ "DS_ProneHighFront.Name", "DS_ProneHighFront" },
				{ "DS_ProneHighLeft.Name", "DS_ProneHighLeft" },
				{ "DS_ProneHighRight.Name", "DS_ProneHighRight" },
				{ "DS_ProneLight.Name", "DS_ProneLight" },
				{ "DS_ProneMiddleBack.Name", "DS_ProneMiddleBack" },
				{ "DS_ProneMiddleFront.Name", "DS_ProneMiddleFront" },
				{ "DS_ProneMiddleLeft.Name", "DS_ProneMiddleLeft" },
				{ "DS_ProneMiddleRight.Name", "DS_ProneMiddleRight" },
				{ "DS_StandHighBack.Name", "DS_StandHighBack" },
				{ "DS_StandHighFront.Name", "DS_StandHighFront" },
				{ "DS_StandHighLeft.Name", "DS_StandHighLeft" },
				{ "DS_StandHighRight.Name", "DS_StandHighRight" },
				{ "DS_StandLightBack.Name", "DS_StandLightBack" },
				{ "DS_StandLightFront.Name", "DS_StandLightFront" },
				{ "DS_StandLightLeft.Name", "DS_StandLightLeft" },
				{ "DS_StandLightRight.Name", "DS_StandLightRight" },
				{ "DS_StandMiddleBack.Name", "DS_StandMiddleBack" },
				{ "DS_StandMiddleFront.Name", "DS_StandMiddleFront" },
				{ "DS_StandMiddleLeft.Name", "DS_StandMiddleLeft" },
				{ "DS_StandMiddleRight.Name", "DS_StandMiddleRight" },
				{ "DS_SupineHighBack.Name", "DS_SupineHighBack" },
				{ "DS_SupineHighFront.Name", "DS_SupineHighFront" },
				{ "DS_SupineHighLeft.Name", "DS_SupineHighLeft" },
				{ "DS_SupineHighRight.Name", "DS_SupineHighRight" },
				{ "DS_SupineLight.Name", "DS_SupineLight" },
				{ "DS_SupineMiddleBack.Name", "DS_SupineMiddleBack" },
				{ "DS_SupineMiddleFront.Name", "DS_SupineMiddleFront" },
				{ "DS_SupineMiddleLeft.Name", "DS_SupineMiddleLeft" },
				{ "DS_SupineMiddleRight.Name", "DS_SupineMiddleRight" },
				{ "ModuleRelativePath", "Public/EDamageState.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ActionSystem,
				nullptr,
				"EDamageState",
				"EDamageState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
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
