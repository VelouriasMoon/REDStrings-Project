// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DragonIKPlugin/Public/EIK_Type_Plugin.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_Type_Plugin() {}
// Cross Module References
	DRAGONIKPLUGIN_API UEnum* Z_Construct_UEnum_DragonIKPlugin_EIK_Type_Plugin();
	UPackage* Z_Construct_UPackage__Script_DragonIKPlugin();
// End Cross Module References
	static UEnum* EIK_Type_Plugin_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DragonIKPlugin_EIK_Type_Plugin, Z_Construct_UPackage__Script_DragonIKPlugin(), TEXT("EIK_Type_Plugin"));
		}
		return Singleton;
	}
	template<> DRAGONIKPLUGIN_API UEnum* StaticEnum<EIK_Type_Plugin>()
	{
		return EIK_Type_Plugin_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EIK_Type_Plugin(EIK_Type_Plugin_StaticEnum, TEXT("/Script/DragonIKPlugin"), TEXT("EIK_Type_Plugin"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DragonIKPlugin_EIK_Type_Plugin_Hash() { return 2191002876U; }
	UEnum* Z_Construct_UEnum_DragonIKPlugin_EIK_Type_Plugin()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DragonIKPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EIK_Type_Plugin"), 0, Get_Z_Construct_UEnum_DragonIKPlugin_EIK_Type_Plugin_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EIK_Type_Plugin::ENUM_Two_Bone_Ik", (int64)EIK_Type_Plugin::ENUM_Two_Bone_Ik },
				{ "EIK_Type_Plugin::ENUM_Single_Bone_Ik", (int64)EIK_Type_Plugin::ENUM_Single_Bone_Ik },
				{ "EIK_Type_Plugin::ENUM_MAX", (int64)EIK_Type_Plugin::ENUM_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ENUM_MAX.Hidden", "" },
				{ "ENUM_MAX.Name", "EIK_Type_Plugin::ENUM_MAX" },
				{ "ENUM_Single_Bone_Ik.Name", "EIK_Type_Plugin::ENUM_Single_Bone_Ik" },
				{ "ENUM_Two_Bone_Ik.Name", "EIK_Type_Plugin::ENUM_Two_Bone_Ik" },
				{ "ModuleRelativePath", "Public/EIK_Type_Plugin.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DragonIKPlugin,
				nullptr,
				"EIK_Type_Plugin",
				"EIK_Type_Plugin",
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
