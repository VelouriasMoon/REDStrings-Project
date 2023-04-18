// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionSystem/Public/EDamagePower.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEDamagePower() {}
// Cross Module References
	ACTIONSYSTEM_API UEnum* Z_Construct_UEnum_ActionSystem_EDamagePower();
	UPackage* Z_Construct_UPackage__Script_ActionSystem();
// End Cross Module References
	static UEnum* EDamagePower_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ActionSystem_EDamagePower, Z_Construct_UPackage__Script_ActionSystem(), TEXT("EDamagePower"));
		}
		return Singleton;
	}
	template<> ACTIONSYSTEM_API UEnum* StaticEnum<EDamagePower>()
	{
		return EDamagePower_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDamagePower(EDamagePower_StaticEnum, TEXT("/Script/ActionSystem"), TEXT("EDamagePower"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ActionSystem_EDamagePower_Hash() { return 2959177011U; }
	UEnum* Z_Construct_UEnum_ActionSystem_EDamagePower()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ActionSystem();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDamagePower"), 0, Get_Z_Construct_UEnum_ActionSystem_EDamagePower_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDamagePower::Light", (int64)EDamagePower::Light },
				{ "EDamagePower::Middle", (int64)EDamagePower::Middle },
				{ "EDamagePower::High", (int64)EDamagePower::High },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "High.Name", "EDamagePower::High" },
				{ "Light.Name", "EDamagePower::Light" },
				{ "Middle.Name", "EDamagePower::Middle" },
				{ "ModuleRelativePath", "Public/EDamagePower.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ActionSystem,
				nullptr,
				"EDamagePower",
				"EDamagePower",
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
