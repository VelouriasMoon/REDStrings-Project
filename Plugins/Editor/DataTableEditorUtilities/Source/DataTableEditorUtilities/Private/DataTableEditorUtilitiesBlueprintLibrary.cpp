//==========================================================================//
// Copyright Elhoussine Mehnik (ue4resources@gmail.com). All Rights Reserved.
//================== http://unrealengineresources.com/ =====================//

#include "DataTableEditorUtilitiesBlueprintLibrary.h"
#include "DataTableEditorUtilitiesHelper.h"
#include "Factories/DataTableFactory.h"

PRAGMA_DISABLE_OPTIMIZATION


#define LOCTEXT_NAMESPACE "DataTableEditorUtilitiesBlueprintLibrary"

bool UDataTableEditorUtilitiesBlueprintLibrary::IsValidDataTableStruct(const UScriptStruct* RowStruct)
{
	return DataTableEditorUtilitiesHelper::IsValidTableStruct(RowStruct);
}

FName UDataTableEditorUtilitiesBlueprintLibrary::CreateUniqueRowNameFromDataTable(FName CandidateName, UDataTable* Table)
{
	return DataTableEditorUtilitiesHelper::GetUniqueRowNameFromTable(CandidateName, Table);
}

FName UDataTableEditorUtilitiesBlueprintLibrary::CreateUniqueDataTableRowNameFromList(FName CandidateName, const TArray<FName>& ExistingNames)
{
	return DataTableEditorUtilitiesHelper::GetUniqueRowNameFromList(CandidateName, ExistingNames);
}

UFactory* UDataTableEditorUtilitiesBlueprintLibrary::CreateDataTableFactory(UScriptStruct* RowStruct, bool& bSuccess)
{
	UDataTableFactory* OutFactory = DataTableEditorUtilitiesHelper::CreateFactory(RowStruct);
	bSuccess = (OutFactory != nullptr);
	return OutFactory;
}

bool UDataTableEditorUtilitiesBlueprintLibrary::SetDataTableRowData(UDataTable* Table, FName RowName, const FTableRowBase& RowData)
{
	// We should never hit this! Stubbed to avoid NoExport on the class.
	check(0);
	return false;
}

bool UDataTableEditorUtilitiesBlueprintLibrary::Generic_SetDataTableRowData(UDataTable* Table, FName RowName, const uint8* RowData)
{
	return DataTableEditorUtilitiesHelper::SetRowData(Table, RowName, RowData);
}

DEFINE_FUNCTION(UDataTableEditorUtilitiesBlueprintLibrary::execSetDataTableRowData)
{
	P_GET_OBJECT(UDataTable, Table);
	P_GET_PROPERTY(FNameProperty, RowName);

	Stack.StepCompiledIn<FStructProperty>(NULL);
	void* RowDataPtr = Stack.MostRecentPropertyAddress;

	P_FINISH;
	bool bSuccess = false;

	FStructProperty* StructProp = CastField<FStructProperty>(Stack.MostRecentProperty);
	if (!Table)
	{
		FBlueprintExceptionInfo ExceptionInfo(
			EBlueprintExceptionType::AccessViolation,
			LOCTEXT("SetDataTableRowData_MissingTableInput", "Failed to resolve the table input. Be sure the DataTable is valid.")
		);
		FBlueprintCoreDelegates::ThrowScriptException(P_THIS, Stack, ExceptionInfo);
	}
	else if (StructProp && RowDataPtr)
	{
		UScriptStruct* OutputType = StructProp->Struct;
		const UScriptStruct* TableType = Table->GetRowStruct();

		const bool bCompatible = (OutputType == TableType) ||
			(OutputType->IsChildOf(TableType) && FStructUtils::TheSameLayout(OutputType, TableType));
		if (bCompatible)
		{
			P_NATIVE_BEGIN;
			uint8* RowData = reinterpret_cast<uint8*>(RowDataPtr);
			bSuccess = Generic_SetDataTableRowData(Table, RowName, RowData);
			P_NATIVE_END;
		}
		else
		{
			FBlueprintExceptionInfo ExceptionInfo(
				EBlueprintExceptionType::AccessViolation,
				LOCTEXT("SetDataTableRowData_IncompatibleProperty", "Incompatible output parameter; the data table's type is not the same as the return type.")
			);
			FBlueprintCoreDelegates::ThrowScriptException(P_THIS, Stack, ExceptionInfo);
		}
	}
	else
	{
		FBlueprintExceptionInfo ExceptionInfo(
			EBlueprintExceptionType::AccessViolation,
			LOCTEXT("SetDataTableRowData_MissingOutputProperty", "Failed to resolve the output parameter for SetDataTableRowData.")
		);
		FBlueprintCoreDelegates::ThrowScriptException(P_THIS, Stack, ExceptionInfo);
	}
	*(bool*)RESULT_PARAM = bSuccess;
}

bool UDataTableEditorUtilitiesBlueprintLibrary::AddDataTableRow(UDataTable* Table, FName RowName, const FTableRowBase& RowData)
{
	// We should never hit this! Stubbed to avoid NoExport on the class.
	check(0);
	return false;
}

bool UDataTableEditorUtilitiesBlueprintLibrary::Generic_AddDataTableRow(UDataTable* Table, FName RowName, const uint8* RowData)
{
	return DataTableEditorUtilitiesHelper::AddNewRow(Table, RowName, RowData);
}

DEFINE_FUNCTION(UDataTableEditorUtilitiesBlueprintLibrary::execAddDataTableRow)
{
	P_GET_OBJECT(UDataTable, Table);
	P_GET_PROPERTY(FNameProperty, RowName);

	Stack.StepCompiledIn<FStructProperty>(NULL);
	void* RowDataPtr = Stack.MostRecentPropertyAddress;

	P_FINISH;
	bool bSuccess = false;

	FStructProperty* StructProp = CastField<FStructProperty>(Stack.MostRecentProperty);
	if (!Table)
	{
		FBlueprintExceptionInfo ExceptionInfo(
			EBlueprintExceptionType::AccessViolation,
			LOCTEXT("AddDataTableRow_MissingTableInput", "Failed to resolve the table input. Be sure the DataTable is valid.")
		);
		FBlueprintCoreDelegates::ThrowScriptException(P_THIS, Stack, ExceptionInfo);
	}
	else if (StructProp && RowDataPtr)
	{
		UScriptStruct* OutputType = StructProp->Struct;
		const UScriptStruct* TableType = Table->GetRowStruct();

		const bool bCompatible = (OutputType == TableType) ||
			(OutputType->IsChildOf(TableType) && FStructUtils::TheSameLayout(OutputType, TableType));
		if (bCompatible)
		{
			P_NATIVE_BEGIN;
			uint8* RowData = reinterpret_cast<uint8*>(RowDataPtr);
			bSuccess = Generic_AddDataTableRow(Table, RowName, RowData);
			P_NATIVE_END;
		}
		else
		{
			FBlueprintExceptionInfo ExceptionInfo(
				EBlueprintExceptionType::AccessViolation,
				LOCTEXT("AddDataTableRow_IncompatibleProperty", "Incompatible output parameter; the data table's type is not the same as the return type.")
			);
			FBlueprintCoreDelegates::ThrowScriptException(P_THIS, Stack, ExceptionInfo);
		}
	}
	else
	{
		FBlueprintExceptionInfo ExceptionInfo(
			EBlueprintExceptionType::AccessViolation,
			LOCTEXT("AddDataTableRow_MissingOutputProperty", "Failed to resolve the output parameter for AddDataTableRow.")
		);
		FBlueprintCoreDelegates::ThrowScriptException(P_THIS, Stack, ExceptionInfo);
	}
	*(bool*)RESULT_PARAM = bSuccess;
}

bool UDataTableEditorUtilitiesBlueprintLibrary::InsertDataTableRowAt(UDataTable* Table, FName RowName, FName NewRowName, EDataTableRowInsertPosition InsertPosition, const FTableRowBase& RowData)
{
	// We should never hit this! Stubbed to avoid NoExport on the class.
	check(0);
	return false;
}

bool UDataTableEditorUtilitiesBlueprintLibrary::Generic_InsertDataTableRowAt(UDataTable* Table, FName RowName, FName NewRowName, EDataTableRowInsertPosition InsertPosition, const uint8* RowData)
{
	return DataTableEditorUtilitiesHelper::InsertRowAtPosition(Table, RowName, NewRowName, InsertPosition, RowData);
}

DEFINE_FUNCTION(UDataTableEditorUtilitiesBlueprintLibrary::execInsertDataTableRowAt)
{
	P_GET_OBJECT(UDataTable, Table);
	P_GET_PROPERTY(FNameProperty, RowName);
	P_GET_PROPERTY(FNameProperty, NewRowName);
	P_GET_PROPERTY(FByteProperty, InsertPosition);

	Stack.StepCompiledIn<FStructProperty>(NULL);
	void* RowDataPtr = Stack.MostRecentPropertyAddress;

	P_FINISH;
	bool bSuccess = false;

	FStructProperty* StructProp = CastField<FStructProperty>(Stack.MostRecentProperty);
	if (!Table)
	{
		FBlueprintExceptionInfo ExceptionInfo(
			EBlueprintExceptionType::AccessViolation,
			LOCTEXT("InsertDataTableRowAt_MissingTableInput", "Failed to resolve the table input. Be sure the DataTable is valid.")
		);
		FBlueprintCoreDelegates::ThrowScriptException(P_THIS, Stack, ExceptionInfo);
	}
	else if (StructProp && RowDataPtr)
	{
		UScriptStruct* OutputType = StructProp->Struct;
		const UScriptStruct* TableType = Table->GetRowStruct();

		const bool bCompatible = (OutputType == TableType) ||
			(OutputType->IsChildOf(TableType) && FStructUtils::TheSameLayout(OutputType, TableType));
		if (bCompatible)
		{
			P_NATIVE_BEGIN;
			uint8* RowData = reinterpret_cast<uint8*>(RowDataPtr);
			bSuccess = Generic_InsertDataTableRowAt(Table, RowName, NewRowName, static_cast<EDataTableRowInsertPosition>(InsertPosition), RowData);
			P_NATIVE_END;
		}
		else
		{
			FBlueprintExceptionInfo ExceptionInfo(
				EBlueprintExceptionType::AccessViolation,
				LOCTEXT("InsertDataTableRowAt_IncompatibleProperty", "Incompatible output parameter; the data table's type is not the same as the return type.")
			);
			FBlueprintCoreDelegates::ThrowScriptException(P_THIS, Stack, ExceptionInfo);
		}
	}
	else
	{
		FBlueprintExceptionInfo ExceptionInfo(
			EBlueprintExceptionType::AccessViolation,
			LOCTEXT("InsertDataTableRowAt_MissingOutputProperty", "Failed to resolve the output parameter for InsertDataTableRowAt.")
		);
		FBlueprintCoreDelegates::ThrowScriptException(P_THIS, Stack, ExceptionInfo);
	}
	*(bool*)RESULT_PARAM = bSuccess;
}

bool UDataTableEditorUtilitiesBlueprintLibrary::RemoveDataTableRow(UDataTable* Table, FName RowName)
{
	return DataTableEditorUtilitiesHelper::RemoveRow(Table, RowName);
}

bool UDataTableEditorUtilitiesBlueprintLibrary::DoesDataTableRowDifferFromDefault(UDataTable* Table, FName RowName)
{
	return DataTableEditorUtilitiesHelper::DosesRowDifferFromDefault(Table, RowName);
}

bool UDataTableEditorUtilitiesBlueprintLibrary::ResetDataTableRowToDefault(UDataTable* Table, FName RowName)
{
	return DataTableEditorUtilitiesHelper::ResetRowToDefault(Table, RowName);
}

bool UDataTableEditorUtilitiesBlueprintLibrary::DuplicateDataTableRow(UDataTable* Table, FName SourceRowName, FName NewRowName)
{
	return DataTableEditorUtilitiesHelper::DuplicateRow(Table, SourceRowName, NewRowName);
}

bool UDataTableEditorUtilitiesBlueprintLibrary::RenameDataTableRow(UDataTable* Table, FName OldName, FName NewName)
{
	return DataTableEditorUtilitiesHelper::RenameRow(Table, OldName, NewName);
}

bool UDataTableEditorUtilitiesBlueprintLibrary::MoveDataTableRow(UDataTable* Table, FName RowName, EDataTableRowMoveDirection Direction, int32 NumRowsToMoveBy /*= 1*/)
{
	return DataTableEditorUtilitiesHelper::MoveRow(Table, RowName, Direction, NumRowsToMoveBy);
}

bool UDataTableEditorUtilitiesBlueprintLibrary::SelectDataTableRow(UDataTable* Table, FName RowName)
{
	return DataTableEditorUtilitiesHelper::SelectRow(Table, RowName);
}

bool UDataTableEditorUtilitiesBlueprintLibrary::ClearDataTableRows(UDataTable* Table)
{
	return DataTableEditorUtilitiesHelper::ClearRows(Table);
}

UClass* UDataTableEditorUtilitiesBlueprintLibrary::GetDataTableClass()
{
	return UDataTable::StaticClass();
}

#undef  LOCTEXT_NAMESPACE

PRAGMA_ENABLE_OPTIMIZATION