// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Classes/AtomTriggerTableFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomTriggerTableFunctionLibrary() {}
// Cross Module References
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomTriggerRow();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCue_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomTriggerTableFunctionLibrary_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomTriggerTableFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References
class UScriptStruct* FAtomTriggerRow::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAtomTriggerRow_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomTriggerRow, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomTriggerRow"), sizeof(FAtomTriggerRow), Get_Z_Construct_UScriptStruct_FAtomTriggerRow_Hash());
	}
	return Singleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomTriggerRow>()
{
	return FAtomTriggerRow::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtomTriggerRow(FAtomTriggerRow::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("AtomTriggerRow"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomTriggerRow
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomTriggerRow()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtomTriggerRow")),new UScriptStruct::TCppStructOps<FAtomTriggerRow>);
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomTriggerRow;
	struct Z_Construct_UScriptStruct_FAtomTriggerRow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Cue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bone_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Bone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomTriggerRow_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/AtomTriggerTableFunctionLibrary.h" },
		{ "ToolTip", "AtomTriggerRow struct." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomTriggerRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomTriggerRow>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomTriggerRow_Statics::NewProp_Cue_MetaData[] = {
		{ "Category", "AtomTrigger" },
		{ "ModuleRelativePath", "Classes/AtomTriggerTableFunctionLibrary.h" },
		{ "ToolTip", "Cue." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAtomTriggerRow_Statics::NewProp_Cue = { "Cue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomTriggerRow, Cue), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomTriggerRow_Statics::NewProp_Cue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomTriggerRow_Statics::NewProp_Cue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomTriggerRow_Statics::NewProp_Bone_MetaData[] = {
		{ "Category", "AtomTrigger" },
		{ "ModuleRelativePath", "Classes/AtomTriggerTableFunctionLibrary.h" },
		{ "ToolTip", "Bone." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAtomTriggerRow_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomTriggerRow, Bone), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomTriggerRow_Statics::NewProp_Bone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomTriggerRow_Statics::NewProp_Bone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomTriggerRow_Statics::NewProp_Time_MetaData[] = {
		{ "Category", "AtomTrigger" },
		{ "ModuleRelativePath", "Classes/AtomTriggerTableFunctionLibrary.h" },
		{ "ToolTip", "Time." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomTriggerRow_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomTriggerRow, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomTriggerRow_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomTriggerRow_Statics::NewProp_Time_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomTriggerRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomTriggerRow_Statics::NewProp_Cue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomTriggerRow_Statics::NewProp_Bone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomTriggerRow_Statics::NewProp_Time,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomTriggerRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"AtomTriggerRow",
		sizeof(FAtomTriggerRow),
		alignof(FAtomTriggerRow),
		Z_Construct_UScriptStruct_FAtomTriggerRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomTriggerRow_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomTriggerRow_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomTriggerRow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomTriggerRow()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtomTriggerRow_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtomTriggerRow"), sizeof(FAtomTriggerRow), Get_Z_Construct_UScriptStruct_FAtomTriggerRow_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtomTriggerRow_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtomTriggerRow_Hash() { return 4130880758U; }
	DEFINE_FUNCTION(UAtomTriggerTableFunctionLibrary::execGetDataTableRowFromName)
	{
		P_GET_OBJECT(UDataTable,Z_Param_Table);
		P_GET_PROPERTY(FNameProperty,Z_Param_RowName);
		P_GET_STRUCT_REF(FAtomTriggerRow,Z_Param_Out_OutRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAtomTriggerTableFunctionLibrary::GetDataTableRowFromName(Z_Param_Table,Z_Param_RowName,Z_Param_Out_OutRow);
		P_NATIVE_END;
	}
	void UAtomTriggerTableFunctionLibrary::StaticRegisterNativesUAtomTriggerTableFunctionLibrary()
	{
		UClass* Class = UAtomTriggerTableFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDataTableRowFromName", &UAtomTriggerTableFunctionLibrary::execGetDataTableRowFromName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomTriggerTableFunctionLibrary_GetDataTableRowFromName_Statics
	{
		struct AtomTriggerTableFunctionLibrary_eventGetDataTableRowFromName_Parms
		{
			UDataTable* Table;
			FName RowName;
			FAtomTriggerRow OutRow;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutRow;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RowName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Table;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtomTriggerTableFunctionLibrary_GetDataTableRowFromName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtomTriggerTableFunctionLibrary_eventGetDataTableRowFromName_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomTriggerTableFunctionLibrary_GetDataTableRowFromName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtomTriggerTableFunctionLibrary_eventGetDataTableRowFromName_Parms), &Z_Construct_UFunction_UAtomTriggerTableFunctionLibrary_GetDataTableRowFromName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomTriggerTableFunctionLibrary_GetDataTableRowFromName_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomTriggerTableFunctionLibrary_eventGetDataTableRowFromName_Parms, OutRow), Z_Construct_UScriptStruct_FAtomTriggerRow, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAtomTriggerTableFunctionLibrary_GetDataTableRowFromName_Statics::NewProp_RowName = { "RowName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomTriggerTableFunctionLibrary_eventGetDataTableRowFromName_Parms, RowName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomTriggerTableFunctionLibrary_GetDataTableRowFromName_Statics::NewProp_Table = { "Table", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomTriggerTableFunctionLibrary_eventGetDataTableRowFromName_Parms, Table), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomTriggerTableFunctionLibrary_GetDataTableRowFromName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomTriggerTableFunctionLibrary_GetDataTableRowFromName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomTriggerTableFunctionLibrary_GetDataTableRowFromName_Statics::NewProp_OutRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomTriggerTableFunctionLibrary_GetDataTableRowFromName_Statics::NewProp_RowName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomTriggerTableFunctionLibrary_GetDataTableRowFromName_Statics::NewProp_Table,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomTriggerTableFunctionLibrary_GetDataTableRowFromName_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomTriggerTable" },
		{ "ModuleRelativePath", "Classes/AtomTriggerTableFunctionLibrary.h" },
		{ "ToolTip", "Get data table row from name." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomTriggerTableFunctionLibrary_GetDataTableRowFromName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomTriggerTableFunctionLibrary, nullptr, "GetDataTableRowFromName", nullptr, nullptr, sizeof(AtomTriggerTableFunctionLibrary_eventGetDataTableRowFromName_Parms), Z_Construct_UFunction_UAtomTriggerTableFunctionLibrary_GetDataTableRowFromName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomTriggerTableFunctionLibrary_GetDataTableRowFromName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomTriggerTableFunctionLibrary_GetDataTableRowFromName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomTriggerTableFunctionLibrary_GetDataTableRowFromName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomTriggerTableFunctionLibrary_GetDataTableRowFromName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomTriggerTableFunctionLibrary_GetDataTableRowFromName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAtomTriggerTableFunctionLibrary_NoRegister()
	{
		return UAtomTriggerTableFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UAtomTriggerTableFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomTriggerTableFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomTriggerTableFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomTriggerTableFunctionLibrary_GetDataTableRowFromName, "GetDataTableRowFromName" }, // 2506355627
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomTriggerTableFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AtomTriggerTableFunctionLibrary.h" },
		{ "ModuleRelativePath", "Classes/AtomTriggerTableFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomTriggerTableFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomTriggerTableFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAtomTriggerTableFunctionLibrary_Statics::ClassParams = {
		&UAtomTriggerTableFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAtomTriggerTableFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomTriggerTableFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomTriggerTableFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAtomTriggerTableFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAtomTriggerTableFunctionLibrary, 2941610744);
	template<> CRIWARERUNTIME_API UClass* StaticClass<UAtomTriggerTableFunctionLibrary>()
	{
		return UAtomTriggerTableFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAtomTriggerTableFunctionLibrary(Z_Construct_UClass_UAtomTriggerTableFunctionLibrary, &UAtomTriggerTableFunctionLibrary::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UAtomTriggerTableFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomTriggerTableFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
