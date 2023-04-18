//==========================================================================//
// Copyright Elhoussine Mehnik (ue4resources@gmail.com). All Rights Reserved.
//================== http://unrealengineresources.com/ =====================//

#pragma once

#include "CoreMinimal.h"
#include "UObject/Class.h"
#include "UObject/Script.h"
#include "Factories/Factory.h"
#include "UObject/UnrealType.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/DataTable.h"
#include "DataTableEditorUtilitiesTypes.h"
#include "DataTableEditorUtilitiesBlueprintLibrary.generated.h"


UCLASS()
class DATATABLEEDITORUTILITIES_API UDataTableEditorUtilitiesBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	/**
	 * Verifies that the specified struct type is viable for data tables.
	 *
	 * @param	RowStruct		struct type.
	 * @return Whether or not the specified struct type is viable for data tables.
	 */
	UFUNCTION(BlueprintPure, Category = "Editor Scripting | DataTable")
	static bool IsValidDataTableStruct(const UScriptStruct* RowStruct);

	/**
	 * Generates a unique row name from a candidate name given a Data Table asset.
	 * The name is made unique by appending a number to the end.
	 */
	UFUNCTION(BlueprintCallable, Category = "Editor Scripting | DataTable")
	static FName CreateUniqueRowNameFromDataTable(FName CandidateName, UDataTable* Table);

	/**
	 * Generates a unique FName from a candidate name given a set of already existing names.
	 * The name is made unique by appending a number to the end.
	 */
	UFUNCTION(BlueprintCallable, Category = "Editor Scripting | DataTable")
	static FName CreateUniqueDataTableRowNameFromList(FName CandidateName, const TArray<FName>& ExistingNames);


	 /**
	  * Creates a Data Table asset factory , needed to create a Data Table asset , for a given data struct type.
	  *
	  * @param	RowStruct		struct type ( Must be a viable struct for data tables , use IsValidDataTableStruct to check struct type use validity ).
	  * @param	bSuccess		Whether the factory creation was successful or not.
	  * @return created DataTableFactory.
	  */
	UFUNCTION(BlueprintCallable, Category = "Editor Scripting | DataTable", Meta = (ReturnDisplayName = "Out Factory"))
	static UFactory* CreateDataTableFactory(UScriptStruct* RowStruct, bool& bSuccess);


	/**
	* Sets a Row value in a Data Table given a row name.
	* @return Whether the row is successfully overridden or not.
	*/
	UFUNCTION(BlueprintCallable, Category = "Editor Scripting | DataTable", CustomThunk, meta = (CustomStructureParam = "RowData"))
	static bool SetDataTableRowData(UDataTable* Table, FName RowName, const FTableRowBase& RowData);
	static bool Generic_SetDataTableRowData(UDataTable* Table, FName RowName, const uint8* RowData);
	DECLARE_FUNCTION(execSetDataTableRowData);


	/**
	* Adds a new row to a given Data Table.
	* @param Table				Data Table asset.
	* @param RowName			New Row name.
	* @param RowData			New Row data.
	* @return Whether the row is successfully added or not.
	*/
	UFUNCTION(BlueprintCallable, Category = "Editor Scripting | DataTable", CustomThunk, meta = (CustomStructureParam = "RowData"))
	static bool AddDataTableRow(UDataTable* Table, FName RowName, const FTableRowBase& RowData);
	static bool Generic_AddDataTableRow(UDataTable* Table, FName RowName, const uint8* RowData);
	DECLARE_FUNCTION(execAddDataTableRow);

	/** Insert a new Row above a give data table row. */

	/**
	* Insert a new Row above or bellow a give data table row.
	* @param Table				Data Table asset.
	* @param RowName			Row to insert above or bellow.
	* @param NewRowName			New Row name.
	* @param RowData			New Row data.
	* @return Whether the row is successfully inserted or not.
	*/
	UFUNCTION(BlueprintCallable, Category = "Editor Scripting | DataTable", CustomThunk, meta = (CustomStructureParam = "RowData"))
	static bool InsertDataTableRowAt(UDataTable* Table, FName RowName, FName NewRowName, EDataTableRowInsertPosition InsertPosition, const FTableRowBase& RowData);
	static bool Generic_InsertDataTableRowAt(UDataTable* Table, FName RowName, FName NewRowName, EDataTableRowInsertPosition InsertPosition, const uint8* RowData);
	DECLARE_FUNCTION(execInsertDataTableRowAt);

	/**
	* Removes a row from a given Data Table.
	* @param Table				Data Table asset.
	* @param RowName			Row to remove.
	* @return Whether the row is successfully added or not.
	*/
	UFUNCTION(BlueprintCallable, Category = "Editor Scripting | DataTable")
	static bool RemoveDataTableRow(UDataTable* Table, FName RowName);


	/**
	* checks if a row differs from its default or not. 
	* @param Table				Data Table asset.
	* @param RowName			Row name.
	* @return Whether a row value differs from its default or not ( Will also return false if the DataTable or RowName are not valid). 
	*/
	UFUNCTION(BlueprintCallable, Category = "Editor Scripting | DataTable")
	static bool DoesDataTableRowDifferFromDefault(UDataTable* DataTable, FName RowName);

	/**
	 * Resets a row to struct default value
	 * @param Table				Data Table asset.
	 * @param SourceRowName		Row that we want to reset to default.
	 * @return	True if reset operation succeeds.
	 */
	UFUNCTION(BlueprintCallable, Category = "Editor Scripting | DataTable")
	static bool ResetDataTableRowToDefault(UDataTable* Table, FName RowName);

	/**
	 * Duplicates row of a given Data Table.
	 * @param Table				Data Table asset.
	 * @param SourceRowName		Row that we want to duplicate.
	 * @param NewName			The duplicated row name.
	 * @return	True if duplication operation succeeds.
	 */
	UFUNCTION(BlueprintCallable, Category = "Editor Scripting | DataTable")
	static bool DuplicateDataTableRow(UDataTable* Table, FName SourceRowName, FName NewRowName);

	/** 
	 * Renames a Data Table Row.
	 * @param Table				Data Table asset.
	 * @param OldName			The old name of the row.
	 * @param NewName			The new name of the row.
	 * @return true if the renaming succeeded.
	 */
	UFUNCTION(BlueprintCallable, Category = "Editor Scripting | DataTable")
	static bool RenameDataTableRow(UDataTable* Table, FName OldName, FName NewName);

	/** Move a given Row to the top or to the bottom. */
	UFUNCTION(BlueprintCallable, Category = "Editor Scripting | DataTable")
	static bool MoveDataTableRow(UDataTable* Table, FName RowName, EDataTableRowMoveDirection Direction, int32 NumRowsToMoveBy = 1);

	/** Select a given data table row on its editor. */
	UFUNCTION(BlueprintCallable, Category = "Editor Scripting | DataTable")
	static bool SelectDataTableRow(UDataTable* Table, FName RowName);

	/**
	 * Clears a Data Table of all rows, resetting it to empty
	 *
	 * @param Table		The Data Table asset to clear
	 * @return	The duplicated object if the operation succeeds.
	 */
	UFUNCTION(BlueprintCallable, Category = "Editor Scripting | DataTable")
	static bool ClearDataTableRows(UDataTable* Table);
	
	/** Returns default Data Table class. */
	UFUNCTION(BlueprintPure, Category = "Editor Scripting | DataTable")
	static UClass* GetDataTableClass();

};
