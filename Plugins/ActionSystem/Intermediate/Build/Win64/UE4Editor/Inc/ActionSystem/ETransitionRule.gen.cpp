// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionSystem/Public/ETransitionRule.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeETransitionRule() {}
// Cross Module References
	ACTIONSYSTEM_API UEnum* Z_Construct_UEnum_ActionSystem_ETransitionRule();
	UPackage* Z_Construct_UPackage__Script_ActionSystem();
// End Cross Module References
	static UEnum* ETransitionRule_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ActionSystem_ETransitionRule, Z_Construct_UPackage__Script_ActionSystem(), TEXT("ETransitionRule"));
		}
		return Singleton;
	}
	template<> ACTIONSYSTEM_API UEnum* StaticEnum<ETransitionRule>()
	{
		return ETransitionRule_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETransitionRule(ETransitionRule_StaticEnum, TEXT("/Script/ActionSystem"), TEXT("ETransitionRule"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ActionSystem_ETransitionRule_Hash() { return 280114829U; }
	UEnum* Z_Construct_UEnum_ActionSystem_ETransitionRule()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ActionSystem();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETransitionRule"), 0, Get_Z_Construct_UEnum_ActionSystem_ETransitionRule_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "TR_PlayEnd", (int64)TR_PlayEnd },
				{ "TR_Command", (int64)TR_Command },
				{ "TR_MovementMode", (int64)TR_MovementMode },
				{ "TR_Blueprint", (int64)TR_Blueprint },
				{ "TR_Custom", (int64)TR_Custom },
				{ "TR_MAX", (int64)TR_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ETransitionRule.h" },
				{ "TR_Blueprint.Name", "TR_Blueprint" },
				{ "TR_Command.Name", "TR_Command" },
				{ "TR_Custom.Name", "TR_Custom" },
				{ "TR_MAX.Hidden", "" },
				{ "TR_MAX.Name", "TR_MAX" },
				{ "TR_MovementMode.Name", "TR_MovementMode" },
				{ "TR_PlayEnd.Name", "TR_PlayEnd" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ActionSystem,
				nullptr,
				"ETransitionRule",
				"ETransitionRule",
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
