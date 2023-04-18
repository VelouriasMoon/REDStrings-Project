// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionSystem/Public/EASSMStateType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEASSMStateType() {}
// Cross Module References
	ACTIONSYSTEM_API UEnum* Z_Construct_UEnum_ActionSystem_EASSMStateType();
	UPackage* Z_Construct_UPackage__Script_ActionSystem();
// End Cross Module References
	static UEnum* EASSMStateType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ActionSystem_EASSMStateType, Z_Construct_UPackage__Script_ActionSystem(), TEXT("EASSMStateType"));
		}
		return Singleton;
	}
	template<> ACTIONSYSTEM_API UEnum* StaticEnum<EASSMStateType::Type>()
	{
		return EASSMStateType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EASSMStateType(EASSMStateType_StaticEnum, TEXT("/Script/ActionSystem"), TEXT("EASSMStateType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ActionSystem_EASSMStateType_Hash() { return 516610514U; }
	UEnum* Z_Construct_UEnum_ActionSystem_EASSMStateType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ActionSystem();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EASSMStateType"), 0, Get_Z_Construct_UEnum_ActionSystem_EASSMStateType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EASSMStateType::None", (int64)EASSMStateType::None },
				{ "EASSMStateType::Sequence", (int64)EASSMStateType::Sequence },
				{ "EASSMStateType::BlendSpace", (int64)EASSMStateType::BlendSpace },
				{ "EASSMStateType::StateMachine", (int64)EASSMStateType::StateMachine },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlendSpace.Name", "EASSMStateType::BlendSpace" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EASSMStateType.h" },
				{ "None.Name", "EASSMStateType::None" },
				{ "Sequence.Name", "EASSMStateType::Sequence" },
				{ "StateMachine.Name", "EASSMStateType::StateMachine" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ActionSystem,
				nullptr,
				"EASSMStateType",
				"EASSMStateType::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
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
