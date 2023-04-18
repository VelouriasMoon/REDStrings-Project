// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataTableEditorUtilities/Public/DataTableEditorUtilitiesBlueprintLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataTableEditorUtilitiesBlueprintLibrary() {}
// Cross Module References
	DATATABLEEDITORUTILITIES_API UClass* Z_Construct_UClass_UDataTableEditorUtilitiesBlueprintLibrary_NoRegister();
	DATATABLEEDITORUTILITIES_API UClass* Z_Construct_UClass_UDataTableEditorUtilitiesBlueprintLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DataTableEditorUtilities();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UScriptStruct();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	DATATABLEEDITORUTILITIES_API UEnum* Z_Construct_UEnum_DataTableEditorUtilities_EDataTableRowInsertPosition();
	DATATABLEEDITORUTILITIES_API UEnum* Z_Construct_UEnum_DataTableEditorUtilities_EDataTableRowMoveDirection();
// End Cross Module References
	DEFINE_FUNCTION(UDataTableEditorUtilitiesBlueprintLibrary::execGetDataTableClass)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UClass**)Z_Param__Result=UDataTableEditorUtilitiesBlueprintLibrary::GetDataTableClass();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataTableEditorUtilitiesBlueprintLibrary::execClearDataTableRows)
	{
		P_GET_OBJECT(UDataTable,Z_Param_Table);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDataTableEditorUtilitiesBlueprintLibrary::ClearDataTableRows(Z_Param_Table);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataTableEditorUtilitiesBlueprintLibrary::execSelectDataTableRow)
	{
		P_GET_OBJECT(UDataTable,Z_Param_Table);
		P_GET_PROPERTY(FNameProperty,Z_Param_RowName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDataTableEditorUtilitiesBlueprintLibrary::SelectDataTableRow(Z_Param_Table,Z_Param_RowName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataTableEditorUtilitiesBlueprintLibrary::execMoveDataTableRow)
	{
		P_GET_OBJECT(UDataTable,Z_Param_Table);
		P_GET_PROPERTY(FNameProperty,Z_Param_RowName);
		P_GET_ENUM(EDataTableRowMoveDirection,Z_Param_Direction);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumRowsToMoveBy);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDataTableEditorUtilitiesBlueprintLibrary::MoveDataTableRow(Z_Param_Table,Z_Param_RowName,EDataTableRowMoveDirection(Z_Param_Direction),Z_Param_NumRowsToMoveBy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataTableEditorUtilitiesBlueprintLibrary::execRenameDataTableRow)
	{
		P_GET_OBJECT(UDataTable,Z_Param_Table);
		P_GET_PROPERTY(FNameProperty,Z_Param_OldName);
		P_GET_PROPERTY(FNameProperty,Z_Param_NewName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDataTableEditorUtilitiesBlueprintLibrary::RenameDataTableRow(Z_Param_Table,Z_Param_OldName,Z_Param_NewName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataTableEditorUtilitiesBlueprintLibrary::execDuplicateDataTableRow)
	{
		P_GET_OBJECT(UDataTable,Z_Param_Table);
		P_GET_PROPERTY(FNameProperty,Z_Param_SourceRowName);
		P_GET_PROPERTY(FNameProperty,Z_Param_NewRowName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDataTableEditorUtilitiesBlueprintLibrary::DuplicateDataTableRow(Z_Param_Table,Z_Param_SourceRowName,Z_Param_NewRowName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataTableEditorUtilitiesBlueprintLibrary::execResetDataTableRowToDefault)
	{
		P_GET_OBJECT(UDataTable,Z_Param_Table);
		P_GET_PROPERTY(FNameProperty,Z_Param_RowName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDataTableEditorUtilitiesBlueprintLibrary::ResetDataTableRowToDefault(Z_Param_Table,Z_Param_RowName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataTableEditorUtilitiesBlueprintLibrary::execDoesDataTableRowDifferFromDefault)
	{
		P_GET_OBJECT(UDataTable,Z_Param_DataTable);
		P_GET_PROPERTY(FNameProperty,Z_Param_RowName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDataTableEditorUtilitiesBlueprintLibrary::DoesDataTableRowDifferFromDefault(Z_Param_DataTable,Z_Param_RowName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataTableEditorUtilitiesBlueprintLibrary::execRemoveDataTableRow)
	{
		P_GET_OBJECT(UDataTable,Z_Param_Table);
		P_GET_PROPERTY(FNameProperty,Z_Param_RowName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDataTableEditorUtilitiesBlueprintLibrary::RemoveDataTableRow(Z_Param_Table,Z_Param_RowName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataTableEditorUtilitiesBlueprintLibrary::execCreateDataTableFactory)
	{
		P_GET_OBJECT(UScriptStruct,Z_Param_RowStruct);
		P_GET_UBOOL_REF(Z_Param_Out_bSuccess);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFactory**)Z_Param__Result=UDataTableEditorUtilitiesBlueprintLibrary::CreateDataTableFactory(Z_Param_RowStruct,Z_Param_Out_bSuccess);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataTableEditorUtilitiesBlueprintLibrary::execCreateUniqueDataTableRowNameFromList)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_CandidateName);
		P_GET_TARRAY_REF(FName,Z_Param_Out_ExistingNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UDataTableEditorUtilitiesBlueprintLibrary::CreateUniqueDataTableRowNameFromList(Z_Param_CandidateName,Z_Param_Out_ExistingNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataTableEditorUtilitiesBlueprintLibrary::execCreateUniqueRowNameFromDataTable)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_CandidateName);
		P_GET_OBJECT(UDataTable,Z_Param_Table);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UDataTableEditorUtilitiesBlueprintLibrary::CreateUniqueRowNameFromDataTable(Z_Param_CandidateName,Z_Param_Table);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataTableEditorUtilitiesBlueprintLibrary::execIsValidDataTableStruct)
	{
		P_GET_OBJECT(UScriptStruct,Z_Param_RowStruct);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDataTableEditorUtilitiesBlueprintLibrary::IsValidDataTableStruct(Z_Param_RowStruct);
		P_NATIVE_END;
	}
	void UDataTableEditorUtilitiesBlueprintLibrary::StaticRegisterNativesUDataTableEditorUtilitiesBlueprintLibrary()
	{
		UClass* Class = UDataTableEditorUtilitiesBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddDataTableRow", &UDataTableEditorUtilitiesBlueprintLibrary::execAddDataTableRow },
			{ "ClearDataTableRows", &UDataTableEditorUtilitiesBlueprintLibrary::execClearDataTableRows },
			{ "CreateDataTableFactory", &UDataTableEditorUtilitiesBlueprintLibrary::execCreateDataTableFactory },
			{ "CreateUniqueDataTableRowNameFromList", &UDataTableEditorUtilitiesBlueprintLibrary::execCreateUniqueDataTableRowNameFromList },
			{ "CreateUniqueRowNameFromDataTable", &UDataTableEditorUtilitiesBlueprintLibrary::execCreateUniqueRowNameFromDataTable },
			{ "DoesDataTableRowDifferFromDefault", &UDataTableEditorUtilitiesBlueprintLibrary::execDoesDataTableRowDifferFromDefault },
			{ "DuplicateDataTableRow", &UDataTableEditorUtilitiesBlueprintLibrary::execDuplicateDataTableRow },
			{ "GetDataTableClass", &UDataTableEditorUtilitiesBlueprintLibrary::execGetDataTableClass },
			{ "InsertDataTableRowAt", &UDataTableEditorUtilitiesBlueprintLibrary::execInsertDataTableRowAt },
			{ "IsValidDataTableStruct", &UDataTableEditorUtilitiesBlueprintLibrary::execIsValidDataTableStruct },
			{ "MoveDataTableRow", &UDataTableEditorUtilitiesBlueprintLibrary::execMoveDataTableRow },
			{ "RemoveDataTableRow", &UDataTableEditorUtilitiesBlueprintLibrary::execRemoveDataTableRow },
			{ "RenameDataTableRow", &UDataTableEditorUtilitiesBlueprintLibrary::execRenameDataTableRow },
			{ "ResetDataTableRowToDefault", &UDataTableEditorUtilitiesBlueprintLibrary::execResetDataTableRowToDefault },
			{ "SelectDataTableRow", &UDataTableEditorUtilitiesBlueprintLibrary::execSelectDataTableRow },
			{ "SetDataTableRowData", &UDataTableEditorUtilitiesBlueprintLibrary::execSetDataTableRowData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_AddDataTableRow_Statics
	{
		struct DataTableEditorUtilitiesBlueprintLibrary_eventAddDataTableRow_Parms
		{
			UDataTable* Table;
			FName RowName;
			FTableRowBase RowData;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RowData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RowData;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RowName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Table;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_AddDataTableRow_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DataTableEditorUtilitiesBlueprintLibrary_eventAddDataTableRow_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_AddDataTableRow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DataTableEditorUtilitiesBlueprintLibrary_eventAddDataTableRow_Parms), &Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_AddDataTableRow_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_AddDataTableRow_Statics::NewProp_RowData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_AddDataTableRow_Statics::NewProp_RowData = { "RowData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataTableEditorUtilitiesBlueprintLibrary_eventAddDataTableRow_Parms, RowData), Z_Construct_UScriptStruct_FTableRowBase, METADATA_PARAMS(Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_AddDataTableRow_Statics::NewProp_RowData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_AddDataTableRow_Statics::NewProp_RowData_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_AddDataTableRow_Statics::NewProp_RowName = { "RowName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataTableEditorUtilitiesBlueprintLibrary_eventAddDataTableRow_Parms, RowName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_AddDataTableRow_Statics::NewProp_Table = { "Table", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataTableEditorUtilitiesBlueprintLibrary_eventAddDataTableRow_Parms, Table), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_AddDataTableRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_AddDataTableRow_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_AddDataTableRow_Statics::NewProp_RowData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_AddDataTableRow_Statics::NewProp_RowName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_AddDataTableRow_Statics::NewProp_Table,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_AddDataTableRow_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | DataTable" },
		{ "Comment", "/**\n\x09* Adds a new row to a given Data Table.\n\x09* @param Table\x09\x09\x09\x09""Data Table asset.\n\x09* @param RowName\x09\x09\x09New Row name.\n\x09* @param RowData\x09\x09\x09New Row data.\n\x09* @return Whether the row is successfully added or not.\n\x09*/" },
		{ "CustomStructureParam", "RowData" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Public/DataTableEditorUtilitiesBlueprintLibrary.h" },
		{ "ToolTip", "Adds a new row to a given Data Table.\n@param Table                          Data Table asset.\n@param RowName                        New Row name.\n@param RowData                        New Row data.\n@return Whether the row is successfully added or not." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_AddDataTableRow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataTableEditorUtilitiesBlueprintLibrary, nullptr, "AddDataTableRow", nullptr, nullptr, sizeof(DataTableEditorUtilitiesBlueprintLibrary_eventAddDataTableRow_Parms), Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_AddDataTableRow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_AddDataTableRow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_AddDataTableRow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_AddDataTableRow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_AddDataTableRow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_AddDataTableRow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_ClearDataTableRows_Statics
	{
		struct DataTableEditorUtilitiesBlueprintLibrary_eventClearDataTableRows_Parms
		{
			UDataTable* Table;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Table;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_ClearDataTableRows_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DataTableEditorUtilitiesBlueprintLibrary_eventClearDataTableRows_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_ClearDataTableRows_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DataTableEditorUtilitiesBlueprintLibrary_eventClearDataTableRows_Parms), &Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_ClearDataTableRows_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_ClearDataTableRows_Statics::NewProp_Table = { "Table", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataTableEditorUtilitiesBlueprintLibrary_eventClearDataTableRows_Parms, Table), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_ClearDataTableRows_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_ClearDataTableRows_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_ClearDataTableRows_Statics::NewProp_Table,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_ClearDataTableRows_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | DataTable" },
		{ "Comment", "/**\n\x09 * Clears a Data Table of all rows, resetting it to empty\n\x09 *\n\x09 * @param Table\x09\x09The Data Table asset to clear\n\x09 * @return\x09The duplicated object if the operation succeeds.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DataTableEditorUtilitiesBlueprintLibrary.h" },
		{ "ToolTip", "Clears a Data Table of all rows, resetting it to empty\n\n@param Table         The Data Table asset to clear\n@return      The duplicated object if the operation succeeds." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_ClearDataTableRows_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataTableEditorUtilitiesBlueprintLibrary, nullptr, "ClearDataTableRows", nullptr, nullptr, sizeof(DataTableEditorUtilitiesBlueprintLibrary_eventClearDataTableRows_Parms), Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_ClearDataTableRows_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_ClearDataTableRows_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_ClearDataTableRows_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_ClearDataTableRows_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_ClearDataTableRows()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_ClearDataTableRows_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_CreateDataTableFactory_Statics
	{
		struct DataTableEditorUtilitiesBlueprintLibrary_eventCreateDataTableFactory_Parms
		{
			UScriptStruct* RowStruct;
			bool bSuccess;
			UFactory* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RowStruct;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_CreateDataTableFactory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataTableEditorUtilitiesBlueprintLibrary_eventCreateDataTableFactory_Parms, ReturnValue), Z_Construct_UClass_UFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_CreateDataTableFactory_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((DataTableEditorUtilitiesBlueprintLibrary_eventCreateDataTableFactory_Parms*)Obj)->bSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_CreateDataTableFactory_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DataTableEditorUtilitiesBlueprintLibrary_eventCreateDataTableFactory_Parms), &Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_CreateDataTableFactory_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_CreateDataTableFactory_Statics::NewProp_RowStruct = { "RowStruct", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataTableEditorUtilitiesBlueprintLibrary_eventCreateDataTableFactory_Parms, RowStruct), Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_CreateDataTableFactory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_CreateDataTableFactory_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_CreateDataTableFactory_Statics::NewProp_bSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_CreateDataTableFactory_Statics::NewProp_RowStruct,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_CreateDataTableFactory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | DataTable" },
		{ "Comment", "/**\n\x09  * Creates a Data Table asset factory , needed to create a Data Table asset , for a given data struct type.\n\x09  *\n\x09  * @param\x09RowStruct\x09\x09struct type ( Must be a viable struct for data tables , use IsValidDataTableStruct to check struct type use validity ).\n\x09  * @param\x09""bSuccess\x09\x09Whether the factory creation was successful or not.\n\x09  * @return created DataTableFactory.\n\x09  */" },
		{ "ModuleRelativePath", "Public/DataTableEditorUtilitiesBlueprintLibrary.h" },
		{ "ReturnDisplayName", "Out Factory" },
		{ "ToolTip", "Creates a Data Table asset factory , needed to create a Data Table asset , for a given data struct type.\n\n@param      RowStruct               struct type ( Must be a viable struct for data tables , use IsValidDataTableStruct to check struct type use validity ).\n@param      bSuccess                Whether the factory creation was successful or not.\n@return created DataTableFactory." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_CreateDataTableFactory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataTableEditorUtilitiesBlueprintLibrary, nullptr, "CreateDataTableFactory", nullptr, nullptr, sizeof(DataTableEditorUtilitiesBlueprintLibrary_eventCreateDataTableFactory_Parms), Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_CreateDataTableFactory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_CreateDataTableFactory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_CreateDataTableFactory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_CreateDataTableFactory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_CreateDataTableFactory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_CreateDataTableFactory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_CreateUniqueDataTableRowNameFromList_Statics
	{
		struct DataTableEditorUtilitiesBlueprintLibrary_eventCreateUniqueDataTableRowNameFromList_Parms
		{
			FName CandidateName;
			TArray<FName> ExistingNames;
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExistingNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExistingNames;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ExistingNames_Inner;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CandidateName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_CreateUniqueDataTableRowNameFromList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataTableEditorUtilitiesBlueprintLibrary_eventCreateUniqueDataTableRowNameFromList_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_CreateUniqueDataTableRowNameFromList_Statics::NewProp_ExistingNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_CreateUniqueDataTableRowNameFromList_Statics::NewProp_ExistingNames = { "ExistingNames", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataTableEditorUtilitiesBlueprintLibrary_eventCreateUniqueDataTableRowNameFromList_Parms, ExistingNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_CreateUniqueDataTableRowNameFromList_Statics::NewProp_ExistingNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_CreateUniqueDataTableRowNameFromList_Statics::NewProp_ExistingNames_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_CreateUniqueDataTableRowNameFromList_Statics::NewProp_ExistingNames_Inner = { "ExistingNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_CreateUniqueDataTableRowNameFromList_Statics::NewProp_CandidateName = { "CandidateName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataTableEditorUtilitiesBlueprintLibrary_eventCreateUniqueDataTableRowNameFromList_Parms, CandidateName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_CreateUniqueDataTableRowNameFromList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_CreateUniqueDataTableRowNameFromList_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_CreateUniqueDataTableRowNameFromList_Statics::NewProp_ExistingNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_CreateUniqueDataTableRowNameFromList_Statics::NewProp_ExistingNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_CreateUniqueDataTableRowNameFromList_Statics::NewProp_CandidateName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_CreateUniqueDataTableRowNameFromList_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | DataTable" },
		{ "Comment", "/**\n\x09 * Generates a unique FName from a candidate name given a set of already existing names.\n\x09 * The name is made unique by appending a number to the end.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DataTableEditorUtilitiesBlueprintLibrary.h" },
		{ "ToolTip", "Generates a unique FName from a candidate name given a set of already existing names.\nThe name is made unique by appending a number to the end." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_CreateUniqueDataTableRowNameFromList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataTableEditorUtilitiesBlueprintLibrary, nullptr, "CreateUniqueDataTableRowNameFromList", nullptr, nullptr, sizeof(DataTableEditorUtilitiesBlueprintLibrary_eventCreateUniqueDataTableRowNameFromList_Parms), Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_CreateUniqueDataTableRowNameFromList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_CreateUniqueDataTableRowNameFromList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_CreateUniqueDataTableRowNameFromList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_CreateUniqueDataTableRowNameFromList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_CreateUniqueDataTableRowNameFromList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_CreateUniqueDataTableRowNameFromList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_CreateUniqueRowNameFromDataTable_Statics
	{
		struct DataTableEditorUtilitiesBlueprintLibrary_eventCreateUniqueRowNameFromDataTable_Parms
		{
			FName CandidateName;
			UDataTable* Table;
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Table;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CandidateName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_CreateUniqueRowNameFromDataTable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataTableEditorUtilitiesBlueprintLibrary_eventCreateUniqueRowNameFromDataTable_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_CreateUniqueRowNameFromDataTable_Statics::NewProp_Table = { "Table", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataTableEditorUtilitiesBlueprintLibrary_eventCreateUniqueRowNameFromDataTable_Parms, Table), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_CreateUniqueRowNameFromDataTable_Statics::NewProp_CandidateName = { "CandidateName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataTableEditorUtilitiesBlueprintLibrary_eventCreateUniqueRowNameFromDataTable_Parms, CandidateName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_CreateUniqueRowNameFromDataTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_CreateUniqueRowNameFromDataTable_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_CreateUniqueRowNameFromDataTable_Statics::NewProp_Table,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_CreateUniqueRowNameFromDataTable_Statics::NewProp_CandidateName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_CreateUniqueRowNameFromDataTable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | DataTable" },
		{ "Comment", "/**\n\x09 * Generates a unique row name from a candidate name given a Data Table asset.\n\x09 * The name is made unique by appending a number to the end.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DataTableEditorUtilitiesBlueprintLibrary.h" },
		{ "ToolTip", "Generates a unique row name from a candidate name given a Data Table asset.\nThe name is made unique by appending a number to the end." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_CreateUniqueRowNameFromDataTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataTableEditorUtilitiesBlueprintLibrary, nullptr, "CreateUniqueRowNameFromDataTable", nullptr, nullptr, sizeof(DataTableEditorUtilitiesBlueprintLibrary_eventCreateUniqueRowNameFromDataTable_Parms), Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_CreateUniqueRowNameFromDataTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_CreateUniqueRowNameFromDataTable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_CreateUniqueRowNameFromDataTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_CreateUniqueRowNameFromDataTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_CreateUniqueRowNameFromDataTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_CreateUniqueRowNameFromDataTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_DoesDataTableRowDifferFromDefault_Statics
	{
		struct DataTableEditorUtilitiesBlueprintLibrary_eventDoesDataTableRowDifferFromDefault_Parms
		{
			UDataTable* DataTable;
			FName RowName;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RowName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DataTable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_DoesDataTableRowDifferFromDefault_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DataTableEditorUtilitiesBlueprintLibrary_eventDoesDataTableRowDifferFromDefault_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_DoesDataTableRowDifferFromDefault_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DataTableEditorUtilitiesBlueprintLibrary_eventDoesDataTableRowDifferFromDefault_Parms), &Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_DoesDataTableRowDifferFromDefault_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_DoesDataTableRowDifferFromDefault_Statics::NewProp_RowName = { "RowName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataTableEditorUtilitiesBlueprintLibrary_eventDoesDataTableRowDifferFromDefault_Parms, RowName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_DoesDataTableRowDifferFromDefault_Statics::NewProp_DataTable = { "DataTable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataTableEditorUtilitiesBlueprintLibrary_eventDoesDataTableRowDifferFromDefault_Parms, DataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_DoesDataTableRowDifferFromDefault_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_DoesDataTableRowDifferFromDefault_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_DoesDataTableRowDifferFromDefault_Statics::NewProp_RowName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_DoesDataTableRowDifferFromDefault_Statics::NewProp_DataTable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_DoesDataTableRowDifferFromDefault_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | DataTable" },
		{ "Comment", "/**\n\x09* checks if a row differs from its default or not. \n\x09* @param Table\x09\x09\x09\x09""Data Table asset.\n\x09* @param RowName\x09\x09\x09Row name.\n\x09* @return Whether a row value differs from its default or not ( Will also return false if the DataTable or RowName are not valid). \n\x09*/" },
		{ "ModuleRelativePath", "Public/DataTableEditorUtilitiesBlueprintLibrary.h" },
		{ "ToolTip", "checks if a row differs from its default or not.\n@param Table                          Data Table asset.\n@param RowName                        Row name.\n@return Whether a row value differs from its default or not ( Will also return false if the DataTable or RowName are not valid)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_DoesDataTableRowDifferFromDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataTableEditorUtilitiesBlueprintLibrary, nullptr, "DoesDataTableRowDifferFromDefault", nullptr, nullptr, sizeof(DataTableEditorUtilitiesBlueprintLibrary_eventDoesDataTableRowDifferFromDefault_Parms), Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_DoesDataTableRowDifferFromDefault_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_DoesDataTableRowDifferFromDefault_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_DoesDataTableRowDifferFromDefault_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_DoesDataTableRowDifferFromDefault_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_DoesDataTableRowDifferFromDefault()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_DoesDataTableRowDifferFromDefault_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_DuplicateDataTableRow_Statics
	{
		struct DataTableEditorUtilitiesBlueprintLibrary_eventDuplicateDataTableRow_Parms
		{
			UDataTable* Table;
			FName SourceRowName;
			FName NewRowName;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NewRowName;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SourceRowName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Table;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_DuplicateDataTableRow_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DataTableEditorUtilitiesBlueprintLibrary_eventDuplicateDataTableRow_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_DuplicateDataTableRow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DataTableEditorUtilitiesBlueprintLibrary_eventDuplicateDataTableRow_Parms), &Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_DuplicateDataTableRow_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_DuplicateDataTableRow_Statics::NewProp_NewRowName = { "NewRowName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataTableEditorUtilitiesBlueprintLibrary_eventDuplicateDataTableRow_Parms, NewRowName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_DuplicateDataTableRow_Statics::NewProp_SourceRowName = { "SourceRowName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataTableEditorUtilitiesBlueprintLibrary_eventDuplicateDataTableRow_Parms, SourceRowName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_DuplicateDataTableRow_Statics::NewProp_Table = { "Table", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataTableEditorUtilitiesBlueprintLibrary_eventDuplicateDataTableRow_Parms, Table), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_DuplicateDataTableRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_DuplicateDataTableRow_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_DuplicateDataTableRow_Statics::NewProp_NewRowName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_DuplicateDataTableRow_Statics::NewProp_SourceRowName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_DuplicateDataTableRow_Statics::NewProp_Table,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_DuplicateDataTableRow_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | DataTable" },
		{ "Comment", "/**\n\x09 * Duplicates row of a given Data Table.\n\x09 * @param Table\x09\x09\x09\x09""Data Table asset.\n\x09 * @param SourceRowName\x09\x09Row that we want to duplicate.\n\x09 * @param NewName\x09\x09\x09The duplicated row name.\n\x09 * @return\x09True if duplication operation succeeds.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DataTableEditorUtilitiesBlueprintLibrary.h" },
		{ "ToolTip", "Duplicates row of a given Data Table.\n@param Table                         Data Table asset.\n@param SourceRowName         Row that we want to duplicate.\n@param NewName                       The duplicated row name.\n@return      True if duplication operation succeeds." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_DuplicateDataTableRow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataTableEditorUtilitiesBlueprintLibrary, nullptr, "DuplicateDataTableRow", nullptr, nullptr, sizeof(DataTableEditorUtilitiesBlueprintLibrary_eventDuplicateDataTableRow_Parms), Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_DuplicateDataTableRow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_DuplicateDataTableRow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_DuplicateDataTableRow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_DuplicateDataTableRow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_DuplicateDataTableRow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_DuplicateDataTableRow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_GetDataTableClass_Statics
	{
		struct DataTableEditorUtilitiesBlueprintLibrary_eventGetDataTableClass_Parms
		{
			UClass* ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_GetDataTableClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataTableEditorUtilitiesBlueprintLibrary_eventGetDataTableClass_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_GetDataTableClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_GetDataTableClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_GetDataTableClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | DataTable" },
		{ "Comment", "/** Returns default Data Table class. */" },
		{ "ModuleRelativePath", "Public/DataTableEditorUtilitiesBlueprintLibrary.h" },
		{ "ToolTip", "Returns default Data Table class." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_GetDataTableClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataTableEditorUtilitiesBlueprintLibrary, nullptr, "GetDataTableClass", nullptr, nullptr, sizeof(DataTableEditorUtilitiesBlueprintLibrary_eventGetDataTableClass_Parms), Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_GetDataTableClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_GetDataTableClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_GetDataTableClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_GetDataTableClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_GetDataTableClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_GetDataTableClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_InsertDataTableRowAt_Statics
	{
		struct DataTableEditorUtilitiesBlueprintLibrary_eventInsertDataTableRowAt_Parms
		{
			UDataTable* Table;
			FName RowName;
			FName NewRowName;
			EDataTableRowInsertPosition InsertPosition;
			FTableRowBase RowData;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RowData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RowData;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InsertPosition;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InsertPosition_Underlying;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NewRowName;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RowName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Table;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_InsertDataTableRowAt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DataTableEditorUtilitiesBlueprintLibrary_eventInsertDataTableRowAt_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_InsertDataTableRowAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DataTableEditorUtilitiesBlueprintLibrary_eventInsertDataTableRowAt_Parms), &Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_InsertDataTableRowAt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_InsertDataTableRowAt_Statics::NewProp_RowData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_InsertDataTableRowAt_Statics::NewProp_RowData = { "RowData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataTableEditorUtilitiesBlueprintLibrary_eventInsertDataTableRowAt_Parms, RowData), Z_Construct_UScriptStruct_FTableRowBase, METADATA_PARAMS(Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_InsertDataTableRowAt_Statics::NewProp_RowData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_InsertDataTableRowAt_Statics::NewProp_RowData_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_InsertDataTableRowAt_Statics::NewProp_InsertPosition = { "InsertPosition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataTableEditorUtilitiesBlueprintLibrary_eventInsertDataTableRowAt_Parms, InsertPosition), Z_Construct_UEnum_DataTableEditorUtilities_EDataTableRowInsertPosition, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_InsertDataTableRowAt_Statics::NewProp_InsertPosition_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_InsertDataTableRowAt_Statics::NewProp_NewRowName = { "NewRowName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataTableEditorUtilitiesBlueprintLibrary_eventInsertDataTableRowAt_Parms, NewRowName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_InsertDataTableRowAt_Statics::NewProp_RowName = { "RowName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataTableEditorUtilitiesBlueprintLibrary_eventInsertDataTableRowAt_Parms, RowName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_InsertDataTableRowAt_Statics::NewProp_Table = { "Table", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataTableEditorUtilitiesBlueprintLibrary_eventInsertDataTableRowAt_Parms, Table), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_InsertDataTableRowAt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_InsertDataTableRowAt_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_InsertDataTableRowAt_Statics::NewProp_RowData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_InsertDataTableRowAt_Statics::NewProp_InsertPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_InsertDataTableRowAt_Statics::NewProp_InsertPosition_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_InsertDataTableRowAt_Statics::NewProp_NewRowName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_InsertDataTableRowAt_Statics::NewProp_RowName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_InsertDataTableRowAt_Statics::NewProp_Table,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_InsertDataTableRowAt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | DataTable" },
		{ "Comment", "/**\n\x09* Insert a new Row above or bellow a give data table row.\n\x09* @param Table\x09\x09\x09\x09""Data Table asset.\n\x09* @param RowName\x09\x09\x09Row to insert above or bellow.\n\x09* @param NewRowName\x09\x09\x09New Row name.\n\x09* @param RowData\x09\x09\x09New Row data.\n\x09* @return Whether the row is successfully inserted or not.\n\x09*/" },
		{ "CustomStructureParam", "RowData" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Public/DataTableEditorUtilitiesBlueprintLibrary.h" },
		{ "ToolTip", "Insert a new Row above or bellow a give data table row.\n@param Table                          Data Table asset.\n@param RowName                        Row to insert above or bellow.\n@param NewRowName                     New Row name.\n@param RowData                        New Row data.\n@return Whether the row is successfully inserted or not." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_InsertDataTableRowAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataTableEditorUtilitiesBlueprintLibrary, nullptr, "InsertDataTableRowAt", nullptr, nullptr, sizeof(DataTableEditorUtilitiesBlueprintLibrary_eventInsertDataTableRowAt_Parms), Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_InsertDataTableRowAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_InsertDataTableRowAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_InsertDataTableRowAt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_InsertDataTableRowAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_InsertDataTableRowAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_InsertDataTableRowAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_IsValidDataTableStruct_Statics
	{
		struct DataTableEditorUtilitiesBlueprintLibrary_eventIsValidDataTableStruct_Parms
		{
			const UScriptStruct* RowStruct;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RowStruct_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RowStruct;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_IsValidDataTableStruct_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DataTableEditorUtilitiesBlueprintLibrary_eventIsValidDataTableStruct_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_IsValidDataTableStruct_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DataTableEditorUtilitiesBlueprintLibrary_eventIsValidDataTableStruct_Parms), &Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_IsValidDataTableStruct_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_IsValidDataTableStruct_Statics::NewProp_RowStruct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_IsValidDataTableStruct_Statics::NewProp_RowStruct = { "RowStruct", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataTableEditorUtilitiesBlueprintLibrary_eventIsValidDataTableStruct_Parms, RowStruct), Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_IsValidDataTableStruct_Statics::NewProp_RowStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_IsValidDataTableStruct_Statics::NewProp_RowStruct_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_IsValidDataTableStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_IsValidDataTableStruct_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_IsValidDataTableStruct_Statics::NewProp_RowStruct,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_IsValidDataTableStruct_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | DataTable" },
		{ "Comment", "/**\n\x09 * Verifies that the specified struct type is viable for data tables.\n\x09 *\n\x09 * @param\x09RowStruct\x09\x09struct type.\n\x09 * @return Whether or not the specified struct type is viable for data tables.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DataTableEditorUtilitiesBlueprintLibrary.h" },
		{ "ToolTip", "Verifies that the specified struct type is viable for data tables.\n\n@param       RowStruct               struct type.\n@return Whether or not the specified struct type is viable for data tables." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_IsValidDataTableStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataTableEditorUtilitiesBlueprintLibrary, nullptr, "IsValidDataTableStruct", nullptr, nullptr, sizeof(DataTableEditorUtilitiesBlueprintLibrary_eventIsValidDataTableStruct_Parms), Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_IsValidDataTableStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_IsValidDataTableStruct_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_IsValidDataTableStruct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_IsValidDataTableStruct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_IsValidDataTableStruct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_IsValidDataTableStruct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_MoveDataTableRow_Statics
	{
		struct DataTableEditorUtilitiesBlueprintLibrary_eventMoveDataTableRow_Parms
		{
			UDataTable* Table;
			FName RowName;
			EDataTableRowMoveDirection Direction;
			int32 NumRowsToMoveBy;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumRowsToMoveBy;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Direction;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Direction_Underlying;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RowName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Table;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_MoveDataTableRow_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DataTableEditorUtilitiesBlueprintLibrary_eventMoveDataTableRow_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_MoveDataTableRow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DataTableEditorUtilitiesBlueprintLibrary_eventMoveDataTableRow_Parms), &Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_MoveDataTableRow_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_MoveDataTableRow_Statics::NewProp_NumRowsToMoveBy = { "NumRowsToMoveBy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataTableEditorUtilitiesBlueprintLibrary_eventMoveDataTableRow_Parms, NumRowsToMoveBy), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_MoveDataTableRow_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataTableEditorUtilitiesBlueprintLibrary_eventMoveDataTableRow_Parms, Direction), Z_Construct_UEnum_DataTableEditorUtilities_EDataTableRowMoveDirection, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_MoveDataTableRow_Statics::NewProp_Direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_MoveDataTableRow_Statics::NewProp_RowName = { "RowName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataTableEditorUtilitiesBlueprintLibrary_eventMoveDataTableRow_Parms, RowName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_MoveDataTableRow_Statics::NewProp_Table = { "Table", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataTableEditorUtilitiesBlueprintLibrary_eventMoveDataTableRow_Parms, Table), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_MoveDataTableRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_MoveDataTableRow_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_MoveDataTableRow_Statics::NewProp_NumRowsToMoveBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_MoveDataTableRow_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_MoveDataTableRow_Statics::NewProp_Direction_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_MoveDataTableRow_Statics::NewProp_RowName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_MoveDataTableRow_Statics::NewProp_Table,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_MoveDataTableRow_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | DataTable" },
		{ "Comment", "/** Move a given Row to the top or to the bottom. */" },
		{ "CPP_Default_NumRowsToMoveBy", "1" },
		{ "ModuleRelativePath", "Public/DataTableEditorUtilitiesBlueprintLibrary.h" },
		{ "ToolTip", "Move a given Row to the top or to the bottom." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_MoveDataTableRow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataTableEditorUtilitiesBlueprintLibrary, nullptr, "MoveDataTableRow", nullptr, nullptr, sizeof(DataTableEditorUtilitiesBlueprintLibrary_eventMoveDataTableRow_Parms), Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_MoveDataTableRow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_MoveDataTableRow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_MoveDataTableRow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_MoveDataTableRow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_MoveDataTableRow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_MoveDataTableRow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_RemoveDataTableRow_Statics
	{
		struct DataTableEditorUtilitiesBlueprintLibrary_eventRemoveDataTableRow_Parms
		{
			UDataTable* Table;
			FName RowName;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RowName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Table;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_RemoveDataTableRow_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DataTableEditorUtilitiesBlueprintLibrary_eventRemoveDataTableRow_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_RemoveDataTableRow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DataTableEditorUtilitiesBlueprintLibrary_eventRemoveDataTableRow_Parms), &Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_RemoveDataTableRow_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_RemoveDataTableRow_Statics::NewProp_RowName = { "RowName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataTableEditorUtilitiesBlueprintLibrary_eventRemoveDataTableRow_Parms, RowName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_RemoveDataTableRow_Statics::NewProp_Table = { "Table", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataTableEditorUtilitiesBlueprintLibrary_eventRemoveDataTableRow_Parms, Table), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_RemoveDataTableRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_RemoveDataTableRow_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_RemoveDataTableRow_Statics::NewProp_RowName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_RemoveDataTableRow_Statics::NewProp_Table,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_RemoveDataTableRow_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | DataTable" },
		{ "Comment", "/**\n\x09* Removes a row from a given Data Table.\n\x09* @param Table\x09\x09\x09\x09""Data Table asset.\n\x09* @param RowName\x09\x09\x09Row to remove.\n\x09* @return Whether the row is successfully added or not.\n\x09*/" },
		{ "ModuleRelativePath", "Public/DataTableEditorUtilitiesBlueprintLibrary.h" },
		{ "ToolTip", "Removes a row from a given Data Table.\n@param Table                          Data Table asset.\n@param RowName                        Row to remove.\n@return Whether the row is successfully added or not." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_RemoveDataTableRow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataTableEditorUtilitiesBlueprintLibrary, nullptr, "RemoveDataTableRow", nullptr, nullptr, sizeof(DataTableEditorUtilitiesBlueprintLibrary_eventRemoveDataTableRow_Parms), Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_RemoveDataTableRow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_RemoveDataTableRow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_RemoveDataTableRow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_RemoveDataTableRow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_RemoveDataTableRow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_RemoveDataTableRow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_RenameDataTableRow_Statics
	{
		struct DataTableEditorUtilitiesBlueprintLibrary_eventRenameDataTableRow_Parms
		{
			UDataTable* Table;
			FName OldName;
			FName NewName;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NewName;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OldName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Table;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_RenameDataTableRow_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DataTableEditorUtilitiesBlueprintLibrary_eventRenameDataTableRow_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_RenameDataTableRow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DataTableEditorUtilitiesBlueprintLibrary_eventRenameDataTableRow_Parms), &Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_RenameDataTableRow_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_RenameDataTableRow_Statics::NewProp_NewName = { "NewName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataTableEditorUtilitiesBlueprintLibrary_eventRenameDataTableRow_Parms, NewName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_RenameDataTableRow_Statics::NewProp_OldName = { "OldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataTableEditorUtilitiesBlueprintLibrary_eventRenameDataTableRow_Parms, OldName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_RenameDataTableRow_Statics::NewProp_Table = { "Table", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataTableEditorUtilitiesBlueprintLibrary_eventRenameDataTableRow_Parms, Table), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_RenameDataTableRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_RenameDataTableRow_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_RenameDataTableRow_Statics::NewProp_NewName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_RenameDataTableRow_Statics::NewProp_OldName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_RenameDataTableRow_Statics::NewProp_Table,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_RenameDataTableRow_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | DataTable" },
		{ "Comment", "/** \n\x09 * Renames a Data Table Row.\n\x09 * @param Table\x09\x09\x09\x09""Data Table asset.\n\x09 * @param OldName\x09\x09\x09The old name of the row.\n\x09 * @param NewName\x09\x09\x09The new name of the row.\n\x09 * @return true if the renaming succeeded.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DataTableEditorUtilitiesBlueprintLibrary.h" },
		{ "ToolTip", "Renames a Data Table Row.\n@param Table                         Data Table asset.\n@param OldName                       The old name of the row.\n@param NewName                       The new name of the row.\n@return true if the renaming succeeded." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_RenameDataTableRow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataTableEditorUtilitiesBlueprintLibrary, nullptr, "RenameDataTableRow", nullptr, nullptr, sizeof(DataTableEditorUtilitiesBlueprintLibrary_eventRenameDataTableRow_Parms), Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_RenameDataTableRow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_RenameDataTableRow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_RenameDataTableRow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_RenameDataTableRow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_RenameDataTableRow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_RenameDataTableRow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_ResetDataTableRowToDefault_Statics
	{
		struct DataTableEditorUtilitiesBlueprintLibrary_eventResetDataTableRowToDefault_Parms
		{
			UDataTable* Table;
			FName RowName;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RowName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Table;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_ResetDataTableRowToDefault_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DataTableEditorUtilitiesBlueprintLibrary_eventResetDataTableRowToDefault_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_ResetDataTableRowToDefault_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DataTableEditorUtilitiesBlueprintLibrary_eventResetDataTableRowToDefault_Parms), &Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_ResetDataTableRowToDefault_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_ResetDataTableRowToDefault_Statics::NewProp_RowName = { "RowName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataTableEditorUtilitiesBlueprintLibrary_eventResetDataTableRowToDefault_Parms, RowName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_ResetDataTableRowToDefault_Statics::NewProp_Table = { "Table", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataTableEditorUtilitiesBlueprintLibrary_eventResetDataTableRowToDefault_Parms, Table), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_ResetDataTableRowToDefault_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_ResetDataTableRowToDefault_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_ResetDataTableRowToDefault_Statics::NewProp_RowName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_ResetDataTableRowToDefault_Statics::NewProp_Table,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_ResetDataTableRowToDefault_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | DataTable" },
		{ "Comment", "/**\n\x09 * Resets a row to struct default value\n\x09 * @param Table\x09\x09\x09\x09""Data Table asset.\n\x09 * @param SourceRowName\x09\x09Row that we want to reset to default.\n\x09 * @return\x09True if reset operation succeeds.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DataTableEditorUtilitiesBlueprintLibrary.h" },
		{ "ToolTip", "Resets a row to struct default value\n@param Table                         Data Table asset.\n@param SourceRowName         Row that we want to reset to default.\n@return      True if reset operation succeeds." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_ResetDataTableRowToDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataTableEditorUtilitiesBlueprintLibrary, nullptr, "ResetDataTableRowToDefault", nullptr, nullptr, sizeof(DataTableEditorUtilitiesBlueprintLibrary_eventResetDataTableRowToDefault_Parms), Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_ResetDataTableRowToDefault_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_ResetDataTableRowToDefault_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_ResetDataTableRowToDefault_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_ResetDataTableRowToDefault_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_ResetDataTableRowToDefault()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_ResetDataTableRowToDefault_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_SelectDataTableRow_Statics
	{
		struct DataTableEditorUtilitiesBlueprintLibrary_eventSelectDataTableRow_Parms
		{
			UDataTable* Table;
			FName RowName;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RowName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Table;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_SelectDataTableRow_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DataTableEditorUtilitiesBlueprintLibrary_eventSelectDataTableRow_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_SelectDataTableRow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DataTableEditorUtilitiesBlueprintLibrary_eventSelectDataTableRow_Parms), &Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_SelectDataTableRow_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_SelectDataTableRow_Statics::NewProp_RowName = { "RowName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataTableEditorUtilitiesBlueprintLibrary_eventSelectDataTableRow_Parms, RowName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_SelectDataTableRow_Statics::NewProp_Table = { "Table", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataTableEditorUtilitiesBlueprintLibrary_eventSelectDataTableRow_Parms, Table), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_SelectDataTableRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_SelectDataTableRow_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_SelectDataTableRow_Statics::NewProp_RowName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_SelectDataTableRow_Statics::NewProp_Table,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_SelectDataTableRow_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | DataTable" },
		{ "Comment", "/** Select a given data table row on its editor. */" },
		{ "ModuleRelativePath", "Public/DataTableEditorUtilitiesBlueprintLibrary.h" },
		{ "ToolTip", "Select a given data table row on its editor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_SelectDataTableRow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataTableEditorUtilitiesBlueprintLibrary, nullptr, "SelectDataTableRow", nullptr, nullptr, sizeof(DataTableEditorUtilitiesBlueprintLibrary_eventSelectDataTableRow_Parms), Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_SelectDataTableRow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_SelectDataTableRow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_SelectDataTableRow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_SelectDataTableRow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_SelectDataTableRow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_SelectDataTableRow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_SetDataTableRowData_Statics
	{
		struct DataTableEditorUtilitiesBlueprintLibrary_eventSetDataTableRowData_Parms
		{
			UDataTable* Table;
			FName RowName;
			FTableRowBase RowData;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RowData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RowData;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RowName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Table;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_SetDataTableRowData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DataTableEditorUtilitiesBlueprintLibrary_eventSetDataTableRowData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_SetDataTableRowData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DataTableEditorUtilitiesBlueprintLibrary_eventSetDataTableRowData_Parms), &Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_SetDataTableRowData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_SetDataTableRowData_Statics::NewProp_RowData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_SetDataTableRowData_Statics::NewProp_RowData = { "RowData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataTableEditorUtilitiesBlueprintLibrary_eventSetDataTableRowData_Parms, RowData), Z_Construct_UScriptStruct_FTableRowBase, METADATA_PARAMS(Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_SetDataTableRowData_Statics::NewProp_RowData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_SetDataTableRowData_Statics::NewProp_RowData_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_SetDataTableRowData_Statics::NewProp_RowName = { "RowName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataTableEditorUtilitiesBlueprintLibrary_eventSetDataTableRowData_Parms, RowName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_SetDataTableRowData_Statics::NewProp_Table = { "Table", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataTableEditorUtilitiesBlueprintLibrary_eventSetDataTableRowData_Parms, Table), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_SetDataTableRowData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_SetDataTableRowData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_SetDataTableRowData_Statics::NewProp_RowData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_SetDataTableRowData_Statics::NewProp_RowName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_SetDataTableRowData_Statics::NewProp_Table,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_SetDataTableRowData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | DataTable" },
		{ "Comment", "/**\n\x09* Sets a Row value in a Data Table given a row name.\n\x09* @return Whether the row is successfully overridden or not.\n\x09*/" },
		{ "CustomStructureParam", "RowData" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Public/DataTableEditorUtilitiesBlueprintLibrary.h" },
		{ "ToolTip", "Sets a Row value in a Data Table given a row name.\n@return Whether the row is successfully overridden or not." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_SetDataTableRowData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataTableEditorUtilitiesBlueprintLibrary, nullptr, "SetDataTableRowData", nullptr, nullptr, sizeof(DataTableEditorUtilitiesBlueprintLibrary_eventSetDataTableRowData_Parms), Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_SetDataTableRowData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_SetDataTableRowData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_SetDataTableRowData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_SetDataTableRowData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_SetDataTableRowData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_SetDataTableRowData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDataTableEditorUtilitiesBlueprintLibrary_NoRegister()
	{
		return UDataTableEditorUtilitiesBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UDataTableEditorUtilitiesBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataTableEditorUtilitiesBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DataTableEditorUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDataTableEditorUtilitiesBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_AddDataTableRow, "AddDataTableRow" }, // 3939752374
		{ &Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_ClearDataTableRows, "ClearDataTableRows" }, // 137740180
		{ &Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_CreateDataTableFactory, "CreateDataTableFactory" }, // 2162598459
		{ &Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_CreateUniqueDataTableRowNameFromList, "CreateUniqueDataTableRowNameFromList" }, // 4028010277
		{ &Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_CreateUniqueRowNameFromDataTable, "CreateUniqueRowNameFromDataTable" }, // 1142743453
		{ &Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_DoesDataTableRowDifferFromDefault, "DoesDataTableRowDifferFromDefault" }, // 1498768243
		{ &Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_DuplicateDataTableRow, "DuplicateDataTableRow" }, // 4178496423
		{ &Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_GetDataTableClass, "GetDataTableClass" }, // 824456133
		{ &Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_InsertDataTableRowAt, "InsertDataTableRowAt" }, // 3388623069
		{ &Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_IsValidDataTableStruct, "IsValidDataTableStruct" }, // 421205477
		{ &Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_MoveDataTableRow, "MoveDataTableRow" }, // 3455176465
		{ &Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_RemoveDataTableRow, "RemoveDataTableRow" }, // 2603664049
		{ &Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_RenameDataTableRow, "RenameDataTableRow" }, // 893232319
		{ &Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_ResetDataTableRowToDefault, "ResetDataTableRowToDefault" }, // 3821861457
		{ &Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_SelectDataTableRow, "SelectDataTableRow" }, // 4071246593
		{ &Z_Construct_UFunction_UDataTableEditorUtilitiesBlueprintLibrary_SetDataTableRowData, "SetDataTableRowData" }, // 3884342578
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataTableEditorUtilitiesBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DataTableEditorUtilitiesBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/DataTableEditorUtilitiesBlueprintLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataTableEditorUtilitiesBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataTableEditorUtilitiesBlueprintLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDataTableEditorUtilitiesBlueprintLibrary_Statics::ClassParams = {
		&UDataTableEditorUtilitiesBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDataTableEditorUtilitiesBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataTableEditorUtilitiesBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataTableEditorUtilitiesBlueprintLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDataTableEditorUtilitiesBlueprintLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDataTableEditorUtilitiesBlueprintLibrary, 2378378076);
	template<> DATATABLEEDITORUTILITIES_API UClass* StaticClass<UDataTableEditorUtilitiesBlueprintLibrary>()
	{
		return UDataTableEditorUtilitiesBlueprintLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDataTableEditorUtilitiesBlueprintLibrary(Z_Construct_UClass_UDataTableEditorUtilitiesBlueprintLibrary, &UDataTableEditorUtilitiesBlueprintLibrary::StaticClass, TEXT("/Script/DataTableEditorUtilities"), TEXT("UDataTableEditorUtilitiesBlueprintLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataTableEditorUtilitiesBlueprintLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
