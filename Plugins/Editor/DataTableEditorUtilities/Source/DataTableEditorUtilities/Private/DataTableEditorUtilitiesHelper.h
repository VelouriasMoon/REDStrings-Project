//==========================================================================//
// Copyright Elhoussine Mehnik (ue4resources@gmail.com). All Rights Reserved.
//================== http://unrealengineresources.com/ =====================//

#pragma once
#include "CoreMinimal.h"

class UDataTable;
class UDataTableFactory;
enum class EDataTableRowInsertPosition : uint8;
enum class EDataTableRowMoveDirection : uint8;

namespace DataTableEditorUtilitiesHelper
{
	bool IsValidTableStruct(const UScriptStruct* RowStruct);

	UDataTableFactory* CreateFactory(UScriptStruct* RowStruct);

	bool SetRowData(UDataTable* Table, FName RowName, const uint8* RowData);
	bool AddNewRow(UDataTable* Table, FName RowName, const uint8* NewRowData);
	bool InsertRowAtPosition(UDataTable* Table, FName RowName, FName NewRowName, EDataTableRowInsertPosition InsertPosition, const uint8* NewRowData);
	bool RemoveRow(UDataTable* Table, FName RowName);
	bool DuplicateRow(UDataTable* Table, FName SourceRowName, FName NewRowName);
	bool RenameRow(UDataTable* Table, FName OldName, FName NewName);
	bool ClearRows(UDataTable* Table);
	bool MoveRow(UDataTable* Table, FName RowName, EDataTableRowMoveDirection Direction, int32 NumRowsToMoveBy);
	bool SelectRow(UDataTable* Table, FName RowName);

	bool DosesRowDifferFromDefault(UDataTable* Table, FName RowName);
	bool ResetRowToDefault(UDataTable* Table, FName RowName);

	FName GetUniqueRowNameFromList(FName CandidateName, const TArray<FName>& ExistingNames);
	FName GetUniqueRowNameFromTable(FName CandidateName, UDataTable* Table);
}