// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataTableEditorUtilities/Public/DataTableEditorUtilitiesTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataTableEditorUtilitiesTypes() {}
// Cross Module References
	DATATABLEEDITORUTILITIES_API UEnum* Z_Construct_UEnum_DataTableEditorUtilities_EDataTableRowMoveDirection();
	UPackage* Z_Construct_UPackage__Script_DataTableEditorUtilities();
	DATATABLEEDITORUTILITIES_API UEnum* Z_Construct_UEnum_DataTableEditorUtilities_EDataTableRowInsertPosition();
// End Cross Module References
	static UEnum* EDataTableRowMoveDirection_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DataTableEditorUtilities_EDataTableRowMoveDirection, Z_Construct_UPackage__Script_DataTableEditorUtilities(), TEXT("EDataTableRowMoveDirection"));
		}
		return Singleton;
	}
	template<> DATATABLEEDITORUTILITIES_API UEnum* StaticEnum<EDataTableRowMoveDirection>()
	{
		return EDataTableRowMoveDirection_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDataTableRowMoveDirection(EDataTableRowMoveDirection_StaticEnum, TEXT("/Script/DataTableEditorUtilities"), TEXT("EDataTableRowMoveDirection"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DataTableEditorUtilities_EDataTableRowMoveDirection_Hash() { return 755153892U; }
	UEnum* Z_Construct_UEnum_DataTableEditorUtilities_EDataTableRowMoveDirection()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DataTableEditorUtilities();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDataTableRowMoveDirection"), 0, Get_Z_Construct_UEnum_DataTableEditorUtilities_EDataTableRowMoveDirection_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDataTableRowMoveDirection::Up", (int64)EDataTableRowMoveDirection::Up },
				{ "EDataTableRowMoveDirection::Down", (int64)EDataTableRowMoveDirection::Down },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Down.Name", "EDataTableRowMoveDirection::Down" },
				{ "ModuleRelativePath", "Public/DataTableEditorUtilitiesTypes.h" },
				{ "Up.Name", "EDataTableRowMoveDirection::Up" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DataTableEditorUtilities,
				nullptr,
				"EDataTableRowMoveDirection",
				"EDataTableRowMoveDirection",
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
	static UEnum* EDataTableRowInsertPosition_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DataTableEditorUtilities_EDataTableRowInsertPosition, Z_Construct_UPackage__Script_DataTableEditorUtilities(), TEXT("EDataTableRowInsertPosition"));
		}
		return Singleton;
	}
	template<> DATATABLEEDITORUTILITIES_API UEnum* StaticEnum<EDataTableRowInsertPosition>()
	{
		return EDataTableRowInsertPosition_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDataTableRowInsertPosition(EDataTableRowInsertPosition_StaticEnum, TEXT("/Script/DataTableEditorUtilities"), TEXT("EDataTableRowInsertPosition"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DataTableEditorUtilities_EDataTableRowInsertPosition_Hash() { return 1016630492U; }
	UEnum* Z_Construct_UEnum_DataTableEditorUtilities_EDataTableRowInsertPosition()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DataTableEditorUtilities();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDataTableRowInsertPosition"), 0, Get_Z_Construct_UEnum_DataTableEditorUtilities_EDataTableRowInsertPosition_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDataTableRowInsertPosition::Above", (int64)EDataTableRowInsertPosition::Above },
				{ "EDataTableRowInsertPosition::Below", (int64)EDataTableRowInsertPosition::Below },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Above.Name", "EDataTableRowInsertPosition::Above" },
				{ "Below.Name", "EDataTableRowInsertPosition::Below" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/DataTableEditorUtilitiesTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DataTableEditorUtilities,
				nullptr,
				"EDataTableRowInsertPosition",
				"EDataTableRowInsertPosition",
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
