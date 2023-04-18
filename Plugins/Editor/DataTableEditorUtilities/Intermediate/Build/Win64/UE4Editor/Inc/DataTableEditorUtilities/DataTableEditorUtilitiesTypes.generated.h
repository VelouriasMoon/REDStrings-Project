// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DATATABLEEDITORUTILITIES_DataTableEditorUtilitiesTypes_generated_h
#error "DataTableEditorUtilitiesTypes.generated.h already included, missing '#pragma once' in DataTableEditorUtilitiesTypes.h"
#endif
#define DATATABLEEDITORUTILITIES_DataTableEditorUtilitiesTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID REDStrings_Plugins_Editor_DataTableEditorUtilities_Source_DataTableEditorUtilities_Public_DataTableEditorUtilitiesTypes_h


#define FOREACH_ENUM_EDATATABLEROWMOVEDIRECTION(op) \
	op(EDataTableRowMoveDirection::Up) \
	op(EDataTableRowMoveDirection::Down) 

enum class EDataTableRowMoveDirection : uint8;
template<> DATATABLEEDITORUTILITIES_API UEnum* StaticEnum<EDataTableRowMoveDirection>();

#define FOREACH_ENUM_EDATATABLEROWINSERTPOSITION(op) \
	op(EDataTableRowInsertPosition::Above) \
	op(EDataTableRowInsertPosition::Below) 

enum class EDataTableRowInsertPosition : uint8;
template<> DATATABLEEDITORUTILITIES_API UEnum* StaticEnum<EDataTableRowInsertPosition>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
