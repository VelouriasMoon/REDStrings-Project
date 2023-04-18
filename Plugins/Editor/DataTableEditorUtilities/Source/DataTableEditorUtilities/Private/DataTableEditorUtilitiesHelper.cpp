//==========================================================================//
// Copyright Elhoussine Mehnik (ue4resources@gmail.com). All Rights Reserved.
//================== http://unrealengineresources.com/ =====================//

#include "DataTableEditorUtilitiesHelper.h"
#include "UObject/UObjectGlobals.h"
#include "UObject/PropertyAccessUtil.h"
#include "UObject/Stack.h"
#include "DataTableEditorUtils.h"
#include "ScopedTransaction.h"
#include "UObject/Class.h"
#include "UObject/Script.h"
#include "UObject/UnrealType.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Factories/DataTableFactory.h"
#include "Engine/DataTable.h"
#include "DataTableEditorUtilitiesTypes.h"

PRAGMA_DISABLE_OPTIMIZATION

#define LOCTEXT_NAMESPACE "DataTableEditorUtilitiesHelper"

bool DataTableEditorUtilitiesHelper::IsValidTableStruct(const UScriptStruct* RowStruct)
{
	return RowStruct ? FDataTableEditorUtils::IsValidTableStruct(RowStruct) : false;
}

UDataTableFactory* DataTableEditorUtilitiesHelper::CreateFactory(UScriptStruct* RowStruct)
{
	if (IsValidTableStruct(RowStruct))
	{
		UDataTableFactory* NewFactory = NewObject<UDataTableFactory>(GetTransientPackage());
		NewFactory->Struct = RowStruct;
		return NewFactory;
	}
	return nullptr;
}

bool DataTableEditorUtilitiesHelper::SetRowData(UDataTable* Table, FName RowName, const uint8* RowData)
{
	if (Table && RowData && RowName != NAME_None)
	{
		void* OldRowData = Table->FindRowUnchecked(RowName);
		if (OldRowData != nullptr)
		{
			const UScriptStruct* StructType = Table->GetRowStruct();
			if (StructType != nullptr)
			{
				const FScopedTransaction Transaction(LOCTEXT("SetDataTableRow", "Set Data Table Row"));
				Table->Modify();
				FDataTableEditorUtils::BroadcastPreChange(Table, FDataTableEditorUtils::EDataTableChangeInfo::RowData);
				StructType->CopyScriptStruct(OldRowData, RowData);
				FDataTableEditorUtils::BroadcastPostChange(Table, FDataTableEditorUtils::EDataTableChangeInfo::RowData);
				return true;
			}
		}
	}
	return false;
}

bool DataTableEditorUtilitiesHelper::AddNewRow(UDataTable* Table, FName RowName, const uint8* NewRowData)
{
	if (NewRowData && Table)
	{
		if ((RowName == NAME_None) || Table->GetRowMap().Contains(RowName) || !Table->GetRowStruct())
		{
			return false;
		}

		const FScopedTransaction Transaction(LOCTEXT("AddNewDataTableRow", "Add New Data Table Row"));
		Table->Modify();
		uint8* NewRow = FDataTableEditorUtils::AddRow(Table, RowName);
		check(NewRow);
		FDataTableEditorUtils::BroadcastPreChange(Table, FDataTableEditorUtils::EDataTableChangeInfo::RowData);
		Table->RowStruct->CopyScriptStruct(NewRow, NewRowData);
		FDataTableEditorUtils::BroadcastPostChange(Table, FDataTableEditorUtils::EDataTableChangeInfo::RowData);
		return true;
	}

	return false;
}

bool DataTableEditorUtilitiesHelper::InsertRowAtPosition(UDataTable* Table, FName RowName, FName NewRowName, EDataTableRowInsertPosition InsertPosition, const uint8* NewRowData)
{
	if (NewRowData && Table)
	{
		if ((RowName == NAME_None) || (RowName == NewRowName) || Table->GetRowMap().Contains(NewRowName) || !Table->GetRowStruct())
		{
			return false;
		}

		const FScopedTransaction Transaction(LOCTEXT("InsertNewDataTableRowAtPosition", "Insert New Data Table Row At Position"));
		Table->Modify();
		const ERowInsertionPosition NewRowInsertPos = (InsertPosition == EDataTableRowInsertPosition::Above) ? ERowInsertionPosition::Above : ERowInsertionPosition::Below;
		uint8* NewRow = FDataTableEditorUtils::AddRowAboveOrBelowSelection(Table, RowName, NewRowName, NewRowInsertPos);
		check(NewRow);
		FDataTableEditorUtils::BroadcastPreChange(Table, FDataTableEditorUtils::EDataTableChangeInfo::RowData);
		Table->RowStruct->CopyScriptStruct(NewRow, NewRowData);
		FDataTableEditorUtils::BroadcastPostChange(Table, FDataTableEditorUtils::EDataTableChangeInfo::RowData);
		return true;
	}

	return false;
}

bool DataTableEditorUtilitiesHelper::RemoveRow(UDataTable* Table, FName RowName)
{
	if (Table && Table->GetRowMap().Contains(RowName))
	{
		return FDataTableEditorUtils::RemoveRow(Table, RowName);
	}
	return false;
}

bool DataTableEditorUtilitiesHelper::DuplicateRow(UDataTable* Table, FName SourceRowName, FName NewRowName)
{
	const uint8* NewRowData = FDataTableEditorUtils::DuplicateRow(Table, SourceRowName, NewRowName);
	return NewRowData ? true : false;
}

bool DataTableEditorUtilitiesHelper::RenameRow(UDataTable* Table, FName OldName, FName NewName)
{
	return FDataTableEditorUtils::RenameRow(Table, OldName, NewName);
}

bool DataTableEditorUtilitiesHelper::ClearRows(UDataTable* Table)
{
	if (Table)
	{
		const TArray<FName> RowNames = Table->GetRowNames();
		if (RowNames.Num() > 0)
		{
			const FScopedTransaction Transaction(LOCTEXT("ClearDataTableRows", "Clear Data Table Rows"));
			Table->Modify();
			for (const FName& RowName : RowNames)
			{
				FDataTableEditorUtils::RemoveRow(Table, RowName);
			}
			return true;
		}
	}
	return false;
}

bool DataTableEditorUtilitiesHelper::MoveRow(UDataTable* Table, FName RowName, EDataTableRowMoveDirection Direction, int32 NumRowsToMoveBy)
{
	const FDataTableEditorUtils::ERowMoveDirection MoveDir = (Direction == EDataTableRowMoveDirection::Up) ? FDataTableEditorUtils::ERowMoveDirection::Up : FDataTableEditorUtils::ERowMoveDirection::Down;
	return FDataTableEditorUtils::MoveRow(Table, RowName, MoveDir);
}

bool DataTableEditorUtilitiesHelper::SelectRow(UDataTable* Table, FName RowName)
{
	if (Table && Table->GetRowStruct() && Table->GetRowMap().Find(RowName) != nullptr)
	{
		return FDataTableEditorUtils::SelectRow(Table, RowName);
	}
	return false;
}

bool DataTableEditorUtilitiesHelper::DosesRowDifferFromDefault(UDataTable* Table, FName RowName)
{
	return FDataTableEditorUtils::DiffersFromDefault(Table, RowName);
}

bool DataTableEditorUtilitiesHelper::ResetRowToDefault(UDataTable* Table, FName RowName)
{
	return FDataTableEditorUtils::ResetToDefault(Table, RowName);
}

FName DataTableEditorUtilitiesHelper::GetUniqueRowNameFromList(FName CandidateName, const TArray<FName>& ExistingNames)
{
	if (!ExistingNames.Contains(CandidateName))
	{
		return CandidateName;
	}

	FString CandidateNameString = CandidateName.ToString();
	FString BaseNameString = CandidateNameString;
	if (CandidateNameString.Len() >= 3 && CandidateNameString.Right(3).IsNumeric())
	{
		BaseNameString = CandidateNameString.Left(CandidateNameString.Len() - 3);
	}

	FName UniqueName = FName(*BaseNameString);
	int32 NameIndex = 1;
	while (ExistingNames.Contains(UniqueName))
	{
		UniqueName = FName(*FString::Printf(TEXT("%s%i"), *BaseNameString, NameIndex));
		NameIndex++;
	}

	return UniqueName;
}

FName DataTableEditorUtilitiesHelper::GetUniqueRowNameFromTable(FName CandidateName, UDataTable* Table)
{
	if (!Table)
	{
		return CandidateName;
	}

	TArray<FName> RowNames;
	Table->GetRowMap().GenerateKeyArray(RowNames);
	return GetUniqueRowNameFromList(CandidateName, RowNames);
}

#undef LOCTEXT_NAMESPACE
	
PRAGMA_ENABLE_OPTIMIZATION
