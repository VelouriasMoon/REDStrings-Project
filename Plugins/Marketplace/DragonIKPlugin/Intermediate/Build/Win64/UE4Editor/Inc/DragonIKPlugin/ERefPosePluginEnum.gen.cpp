// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DragonIKPlugin/Public/ERefPosePluginEnum.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeERefPosePluginEnum() {}
// Cross Module References
	DRAGONIKPLUGIN_API UEnum* Z_Construct_UEnum_DragonIKPlugin_ERefPosePluginEnum();
	UPackage* Z_Construct_UPackage__Script_DragonIKPlugin();
// End Cross Module References
	static UEnum* ERefPosePluginEnum_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DragonIKPlugin_ERefPosePluginEnum, Z_Construct_UPackage__Script_DragonIKPlugin(), TEXT("ERefPosePluginEnum"));
		}
		return Singleton;
	}
	template<> DRAGONIKPLUGIN_API UEnum* StaticEnum<ERefPosePluginEnum>()
	{
		return ERefPosePluginEnum_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERefPosePluginEnum(ERefPosePluginEnum_StaticEnum, TEXT("/Script/DragonIKPlugin"), TEXT("ERefPosePluginEnum"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DragonIKPlugin_ERefPosePluginEnum_Hash() { return 4006680455U; }
	UEnum* Z_Construct_UEnum_DragonIKPlugin_ERefPosePluginEnum()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DragonIKPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERefPosePluginEnum"), 0, Get_Z_Construct_UEnum_DragonIKPlugin_ERefPosePluginEnum_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERefPosePluginEnum::VE_Animated", (int64)ERefPosePluginEnum::VE_Animated },
				{ "ERefPosePluginEnum::VE_Rest", (int64)ERefPosePluginEnum::VE_Rest },
				{ "ERefPosePluginEnum::VE_MAX", (int64)ERefPosePluginEnum::VE_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ERefPosePluginEnum.h" },
				{ "VE_Animated.Name", "ERefPosePluginEnum::VE_Animated" },
				{ "VE_MAX.Hidden", "" },
				{ "VE_MAX.Name", "ERefPosePluginEnum::VE_MAX" },
				{ "VE_Rest.Name", "ERefPosePluginEnum::VE_Rest" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DragonIKPlugin,
				nullptr,
				"ERefPosePluginEnum",
				"ERefPosePluginEnum",
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
