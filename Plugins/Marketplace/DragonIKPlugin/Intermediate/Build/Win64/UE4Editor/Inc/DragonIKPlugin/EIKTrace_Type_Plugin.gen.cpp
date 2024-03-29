// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DragonIKPlugin/Public/EIKTrace_Type_Plugin.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIKTrace_Type_Plugin() {}
// Cross Module References
	DRAGONIKPLUGIN_API UEnum* Z_Construct_UEnum_DragonIKPlugin_EIKTrace_Type_Plugin();
	UPackage* Z_Construct_UPackage__Script_DragonIKPlugin();
// End Cross Module References
	static UEnum* EIKTrace_Type_Plugin_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DragonIKPlugin_EIKTrace_Type_Plugin, Z_Construct_UPackage__Script_DragonIKPlugin(), TEXT("EIKTrace_Type_Plugin"));
		}
		return Singleton;
	}
	template<> DRAGONIKPLUGIN_API UEnum* StaticEnum<EIKTrace_Type_Plugin>()
	{
		return EIKTrace_Type_Plugin_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EIKTrace_Type_Plugin(EIKTrace_Type_Plugin_StaticEnum, TEXT("/Script/DragonIKPlugin"), TEXT("EIKTrace_Type_Plugin"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DragonIKPlugin_EIKTrace_Type_Plugin_Hash() { return 3962582461U; }
	UEnum* Z_Construct_UEnum_DragonIKPlugin_EIKTrace_Type_Plugin()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DragonIKPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EIKTrace_Type_Plugin"), 0, Get_Z_Construct_UEnum_DragonIKPlugin_EIKTrace_Type_Plugin_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EIKTrace_Type_Plugin::ENUM_LineTrace_Type", (int64)EIKTrace_Type_Plugin::ENUM_LineTrace_Type },
				{ "EIKTrace_Type_Plugin::ENUM_SphereTrace_Type", (int64)EIKTrace_Type_Plugin::ENUM_SphereTrace_Type },
				{ "EIKTrace_Type_Plugin::ENUM_BoxTrace_Type", (int64)EIKTrace_Type_Plugin::ENUM_BoxTrace_Type },
				{ "EIKTrace_Type_Plugin::ENUM_MAX", (int64)EIKTrace_Type_Plugin::ENUM_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ENUM_BoxTrace_Type.Name", "EIKTrace_Type_Plugin::ENUM_BoxTrace_Type" },
				{ "ENUM_LineTrace_Type.Name", "EIKTrace_Type_Plugin::ENUM_LineTrace_Type" },
				{ "ENUM_MAX.Hidden", "" },
				{ "ENUM_MAX.Name", "EIKTrace_Type_Plugin::ENUM_MAX" },
				{ "ENUM_SphereTrace_Type.Name", "EIKTrace_Type_Plugin::ENUM_SphereTrace_Type" },
				{ "ModuleRelativePath", "Public/EIKTrace_Type_Plugin.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DragonIKPlugin,
				nullptr,
				"EIKTrace_Type_Plugin",
				"EIKTrace_Type_Plugin",
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
