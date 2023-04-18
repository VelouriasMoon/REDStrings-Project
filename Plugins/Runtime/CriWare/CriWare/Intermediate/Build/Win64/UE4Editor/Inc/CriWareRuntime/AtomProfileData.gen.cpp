// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Classes/AtomProfileData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomProfileData() {}
// Cross Module References
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomSortOrderType();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomProfileSortType();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomProfileItem();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomProfileData_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomProfileData();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	static UEnum* EAtomSortOrderType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CriWareRuntime_EAtomSortOrderType, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("EAtomSortOrderType"));
		}
		return Singleton;
	}
	template<> CRIWARERUNTIME_API UEnum* StaticEnum<EAtomSortOrderType>()
	{
		return EAtomSortOrderType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAtomSortOrderType(EAtomSortOrderType_StaticEnum, TEXT("/Script/CriWareRuntime"), TEXT("EAtomSortOrderType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CriWareRuntime_EAtomSortOrderType_Hash() { return 3604251268U; }
	UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomSortOrderType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAtomSortOrderType"), 0, Get_Z_Construct_UEnum_CriWareRuntime_EAtomSortOrderType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAtomSortOrderType::Ascending", (int64)EAtomSortOrderType::Ascending },
				{ "EAtomSortOrderType::Descending", (int64)EAtomSortOrderType::Descending },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Ascending.Name", "EAtomSortOrderType::Ascending" },
				{ "BlueprintType", "true" },
				{ "Descending.Name", "EAtomSortOrderType::Descending" },
				{ "ModuleRelativePath", "Classes/AtomProfileData.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime,
				nullptr,
				"EAtomSortOrderType",
				"EAtomSortOrderType",
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
	static UEnum* EAtomProfileSortType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CriWareRuntime_EAtomProfileSortType, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("EAtomProfileSortType"));
		}
		return Singleton;
	}
	template<> CRIWARERUNTIME_API UEnum* StaticEnum<EAtomProfileSortType>()
	{
		return EAtomProfileSortType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAtomProfileSortType(EAtomProfileSortType_StaticEnum, TEXT("/Script/CriWareRuntime"), TEXT("EAtomProfileSortType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CriWareRuntime_EAtomProfileSortType_Hash() { return 2056199939U; }
	UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomProfileSortType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAtomProfileSortType"), 0, Get_Z_Construct_UEnum_CriWareRuntime_EAtomProfileSortType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAtomProfileSortType::AtomComponentID", (int64)EAtomProfileSortType::AtomComponentID },
				{ "EAtomProfileSortType::Distance", (int64)EAtomProfileSortType::Distance },
				{ "EAtomProfileSortType::Name", (int64)EAtomProfileSortType::Name },
				{ "EAtomProfileSortType::Time", (int64)EAtomProfileSortType::Time },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AtomComponentID.Name", "EAtomProfileSortType::AtomComponentID" },
				{ "BlueprintType", "true" },
				{ "Comment", "/***************************************************************************\n*      \xe3\x82\xaf\xe3\x83\xa9\xe3\x82\xb9\xe5\xae\xa3\xe8\xa8\x80\n*      Prototype Classes\n***************************************************************************/" },
				{ "Distance.Name", "EAtomProfileSortType::Distance" },
				{ "ModuleRelativePath", "Classes/AtomProfileData.h" },
				{ "Name.Name", "EAtomProfileSortType::Name" },
				{ "Time.Name", "EAtomProfileSortType::Time" },
				{ "ToolTip", "\xe3\x82\xaf\xe3\x83\xa9\xe3\x82\xb9\xe5\xae\xa3\xe8\xa8\x80\nPrototype Classes" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime,
				nullptr,
				"EAtomProfileSortType",
				"EAtomProfileSortType",
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
class UScriptStruct* FAtomProfileItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAtomProfileItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomProfileItem, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomProfileItem"), sizeof(FAtomProfileItem), Get_Z_Construct_UScriptStruct_FAtomProfileItem_Hash());
	}
	return Singleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomProfileItem>()
{
	return FAtomProfileItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtomProfileItem(FAtomProfileItem::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("AtomProfileItem"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomProfileItem
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomProfileItem()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtomProfileItem")),new UScriptStruct::TCppStructOps<FAtomProfileItem>);
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomProfileItem;
	struct Z_Construct_UScriptStruct_FAtomProfileItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConcurrencyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ConcurrencyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumSounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumSounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerState_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayerState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayingTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayingTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceFromListener_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceFromListener;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtomComponentLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AtomComponentLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtomCueName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AtomCueName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtomComponentID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AtomComponentID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomProfileItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/AtomProfileData.h" },
		{ "ToolTip", "AtomAisacControlParam struct." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomProfileItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_ConcurrencyName_MetaData[] = {
		{ "Category", "AtomProfile" },
		{ "ModuleRelativePath", "Classes/AtomProfileData.h" },
		{ "ToolTip", "Sound Concurrency Name." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_ConcurrencyName = { "ConcurrencyName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomProfileItem, ConcurrencyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_ConcurrencyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_ConcurrencyName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_NumSounds_MetaData[] = {
		{ "Category", "AtomProfile" },
		{ "ModuleRelativePath", "Classes/AtomProfileData.h" },
		{ "ToolTip", "Number of playing sound." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_NumSounds = { "NumSounds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomProfileItem, NumSounds), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_NumSounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_NumSounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_PlayerState_MetaData[] = {
		{ "Category", "AtomProfile" },
		{ "ModuleRelativePath", "Classes/AtomProfileData.h" },
		{ "ToolTip", "PlayerState." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_PlayerState = { "PlayerState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomProfileItem, PlayerState), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_PlayerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_PlayerState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_PlayingTime_MetaData[] = {
		{ "Category", "AtomProfile" },
		{ "ModuleRelativePath", "Classes/AtomProfileData.h" },
		{ "ToolTip", "PlayingTime." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_PlayingTime = { "PlayingTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomProfileItem, PlayingTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_PlayingTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_PlayingTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_DistanceFromListener_MetaData[] = {
		{ "Category", "AtomProfile" },
		{ "ModuleRelativePath", "Classes/AtomProfileData.h" },
		{ "ToolTip", "DistanceFromListener." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_DistanceFromListener = { "DistanceFromListener", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomProfileItem, DistanceFromListener), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_DistanceFromListener_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_DistanceFromListener_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_AtomComponentLocation_MetaData[] = {
		{ "Category", "AtomProfile" },
		{ "ModuleRelativePath", "Classes/AtomProfileData.h" },
		{ "ToolTip", "AtomComponentLocation." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_AtomComponentLocation = { "AtomComponentLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomProfileItem, AtomComponentLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_AtomComponentLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_AtomComponentLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_AtomCueName_MetaData[] = {
		{ "Category", "AtomProfile" },
		{ "ModuleRelativePath", "Classes/AtomProfileData.h" },
		{ "ToolTip", "AtomCueName." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_AtomCueName = { "AtomCueName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomProfileItem, AtomCueName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_AtomCueName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_AtomCueName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_AtomComponentID_MetaData[] = {
		{ "Category", "AtomProfile" },
		{ "ModuleRelativePath", "Classes/AtomProfileData.h" },
		{ "ToolTip", "AtomComponentID." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_AtomComponentID = { "AtomComponentID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomProfileItem, AtomComponentID), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_AtomComponentID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_AtomComponentID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomProfileItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_ConcurrencyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_NumSounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_PlayerState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_PlayingTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_DistanceFromListener,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_AtomComponentLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_AtomCueName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_AtomComponentID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomProfileItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"AtomProfileItem",
		sizeof(FAtomProfileItem),
		alignof(FAtomProfileItem),
		Z_Construct_UScriptStruct_FAtomProfileItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomProfileItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomProfileItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomProfileItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomProfileItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtomProfileItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtomProfileItem"), sizeof(FAtomProfileItem), Get_Z_Construct_UScriptStruct_FAtomProfileItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtomProfileItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtomProfileItem_Hash() { return 1550467400U; }
	DEFINE_FUNCTION(UAtomProfileData::execCriWareAdx2ProfileDataSort)
	{
		P_GET_TARRAY(FAtomProfileItem,Z_Param_original_item);
		P_GET_ENUM(EAtomProfileSortType,Z_Param_sort_type);
		P_GET_ENUM(EAtomSortOrderType,Z_Param_order_type);
		P_GET_TARRAY_REF(FAtomProfileItem,Z_Param_Out_sorted_item);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomProfileData::CriWareAdx2ProfileDataSort(Z_Param_original_item,EAtomProfileSortType(Z_Param_sort_type),EAtomSortOrderType(Z_Param_order_type),Z_Param_Out_sorted_item);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomProfileData::execCriWareAdx2ProfileDataUpdate)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FAtomProfileItem>*)Z_Param__Result=UAtomProfileData::CriWareAdx2ProfileDataUpdate(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void UAtomProfileData::StaticRegisterNativesUAtomProfileData()
	{
		UClass* Class = UAtomProfileData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CriWareAdx2ProfileDataSort", &UAtomProfileData::execCriWareAdx2ProfileDataSort },
			{ "CriWareAdx2ProfileDataUpdate", &UAtomProfileData::execCriWareAdx2ProfileDataUpdate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort_Statics
	{
		struct AtomProfileData_eventCriWareAdx2ProfileDataSort_Parms
		{
			TArray<FAtomProfileItem> original_item;
			EAtomProfileSortType sort_type;
			EAtomSortOrderType order_type;
			TArray<FAtomProfileItem> sorted_item;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_sorted_item;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_sorted_item_Inner;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_order_type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_order_type_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_sort_type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_sort_type_Underlying;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_original_item;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_original_item_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort_Statics::NewProp_sorted_item = { "sorted_item", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomProfileData_eventCriWareAdx2ProfileDataSort_Parms, sorted_item), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort_Statics::NewProp_sorted_item_Inner = { "sorted_item", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAtomProfileItem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort_Statics::NewProp_order_type = { "order_type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomProfileData_eventCriWareAdx2ProfileDataSort_Parms, order_type), Z_Construct_UEnum_CriWareRuntime_EAtomSortOrderType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort_Statics::NewProp_order_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort_Statics::NewProp_sort_type = { "sort_type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomProfileData_eventCriWareAdx2ProfileDataSort_Parms, sort_type), Z_Construct_UEnum_CriWareRuntime_EAtomProfileSortType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort_Statics::NewProp_sort_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort_Statics::NewProp_original_item = { "original_item", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomProfileData_eventCriWareAdx2ProfileDataSort_Parms, original_item), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort_Statics::NewProp_original_item_Inner = { "original_item", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAtomProfileItem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort_Statics::NewProp_sorted_item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort_Statics::NewProp_sorted_item_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort_Statics::NewProp_order_type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort_Statics::NewProp_order_type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort_Statics::NewProp_sort_type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort_Statics::NewProp_sort_type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort_Statics::NewProp_original_item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort_Statics::NewProp_original_item_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom" },
		{ "ModuleRelativePath", "Classes/AtomProfileData.h" },
		{ "ToolTip", "Get All Atom Compoent Profiled data." },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomProfileData, nullptr, "CriWareAdx2ProfileDataSort", nullptr, nullptr, sizeof(AtomProfileData_eventCriWareAdx2ProfileDataSort_Parms), Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataUpdate_Statics
	{
		struct AtomProfileData_eventCriWareAdx2ProfileDataUpdate_Parms
		{
			const UObject* WorldContextObject;
			TArray<FAtomProfileItem> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataUpdate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomProfileData_eventCriWareAdx2ProfileDataUpdate_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataUpdate_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAtomProfileItem, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataUpdate_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataUpdate_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomProfileData_eventCriWareAdx2ProfileDataUpdate_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataUpdate_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataUpdate_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataUpdate_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataUpdate_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataUpdate_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataUpdate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom" },
		{ "ModuleRelativePath", "Classes/AtomProfileData.h" },
		{ "ToolTip", "Get All Atom Compoent Profiled data." },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomProfileData, nullptr, "CriWareAdx2ProfileDataUpdate", nullptr, nullptr, sizeof(AtomProfileData_eventCriWareAdx2ProfileDataUpdate_Parms), Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAtomProfileData_NoRegister()
	{
		return UAtomProfileData::StaticClass();
	}
	struct Z_Construct_UClass_UAtomProfileData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomProfileData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomProfileData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataSort, "CriWareAdx2ProfileDataSort" }, // 1438783265
		{ &Z_Construct_UFunction_UAtomProfileData_CriWareAdx2ProfileDataUpdate, "CriWareAdx2ProfileDataUpdate" }, // 3772880054
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomProfileData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AtomProfileData.h" },
		{ "ModuleRelativePath", "Classes/AtomProfileData.h" },
		{ "ToolTip", "AtomComponent class." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomProfileData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomProfileData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAtomProfileData_Statics::ClassParams = {
		&UAtomProfileData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomProfileData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomProfileData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomProfileData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAtomProfileData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAtomProfileData, 112643848);
	template<> CRIWARERUNTIME_API UClass* StaticClass<UAtomProfileData>()
	{
		return UAtomProfileData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAtomProfileData(Z_Construct_UClass_UAtomProfileData, &UAtomProfileData::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UAtomProfileData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomProfileData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
