// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UDataTable;
enum class EDataTableRowMoveDirection : uint8;
class UScriptStruct;
class UFactory;
struct FTableRowBase;
enum class EDataTableRowInsertPosition : uint8;
#ifdef DATATABLEEDITORUTILITIES_DataTableEditorUtilitiesBlueprintLibrary_generated_h
#error "DataTableEditorUtilitiesBlueprintLibrary.generated.h already included, missing '#pragma once' in DataTableEditorUtilitiesBlueprintLibrary.h"
#endif
#define DATATABLEEDITORUTILITIES_DataTableEditorUtilitiesBlueprintLibrary_generated_h

#define REDStrings_Plugins_Editor_DataTableEditorUtilities_Source_DataTableEditorUtilities_Public_DataTableEditorUtilitiesBlueprintLibrary_h_23_SPARSE_DATA
#define REDStrings_Plugins_Editor_DataTableEditorUtilities_Source_DataTableEditorUtilities_Public_DataTableEditorUtilitiesBlueprintLibrary_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDataTableClass); \
	DECLARE_FUNCTION(execClearDataTableRows); \
	DECLARE_FUNCTION(execSelectDataTableRow); \
	DECLARE_FUNCTION(execMoveDataTableRow); \
	DECLARE_FUNCTION(execRenameDataTableRow); \
	DECLARE_FUNCTION(execDuplicateDataTableRow); \
	DECLARE_FUNCTION(execResetDataTableRowToDefault); \
	DECLARE_FUNCTION(execDoesDataTableRowDifferFromDefault); \
	DECLARE_FUNCTION(execRemoveDataTableRow); \
	DECLARE_FUNCTION(execCreateDataTableFactory); \
	DECLARE_FUNCTION(execCreateUniqueDataTableRowNameFromList); \
	DECLARE_FUNCTION(execCreateUniqueRowNameFromDataTable); \
	DECLARE_FUNCTION(execIsValidDataTableStruct);


#define REDStrings_Plugins_Editor_DataTableEditorUtilities_Source_DataTableEditorUtilities_Public_DataTableEditorUtilitiesBlueprintLibrary_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDataTableClass); \
	DECLARE_FUNCTION(execClearDataTableRows); \
	DECLARE_FUNCTION(execSelectDataTableRow); \
	DECLARE_FUNCTION(execMoveDataTableRow); \
	DECLARE_FUNCTION(execRenameDataTableRow); \
	DECLARE_FUNCTION(execDuplicateDataTableRow); \
	DECLARE_FUNCTION(execResetDataTableRowToDefault); \
	DECLARE_FUNCTION(execDoesDataTableRowDifferFromDefault); \
	DECLARE_FUNCTION(execRemoveDataTableRow); \
	DECLARE_FUNCTION(execCreateDataTableFactory); \
	DECLARE_FUNCTION(execCreateUniqueDataTableRowNameFromList); \
	DECLARE_FUNCTION(execCreateUniqueRowNameFromDataTable); \
	DECLARE_FUNCTION(execIsValidDataTableStruct);


#define REDStrings_Plugins_Editor_DataTableEditorUtilities_Source_DataTableEditorUtilities_Public_DataTableEditorUtilitiesBlueprintLibrary_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataTableEditorUtilitiesBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UDataTableEditorUtilitiesBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UDataTableEditorUtilitiesBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataTableEditorUtilities"), NO_API) \
	DECLARE_SERIALIZER(UDataTableEditorUtilitiesBlueprintLibrary)


#define REDStrings_Plugins_Editor_DataTableEditorUtilities_Source_DataTableEditorUtilities_Public_DataTableEditorUtilitiesBlueprintLibrary_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUDataTableEditorUtilitiesBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UDataTableEditorUtilitiesBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UDataTableEditorUtilitiesBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataTableEditorUtilities"), NO_API) \
	DECLARE_SERIALIZER(UDataTableEditorUtilitiesBlueprintLibrary)


#define REDStrings_Plugins_Editor_DataTableEditorUtilities_Source_DataTableEditorUtilities_Public_DataTableEditorUtilitiesBlueprintLibrary_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataTableEditorUtilitiesBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataTableEditorUtilitiesBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataTableEditorUtilitiesBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataTableEditorUtilitiesBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataTableEditorUtilitiesBlueprintLibrary(UDataTableEditorUtilitiesBlueprintLibrary&&); \
	NO_API UDataTableEditorUtilitiesBlueprintLibrary(const UDataTableEditorUtilitiesBlueprintLibrary&); \
public:


#define REDStrings_Plugins_Editor_DataTableEditorUtilities_Source_DataTableEditorUtilities_Public_DataTableEditorUtilitiesBlueprintLibrary_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataTableEditorUtilitiesBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataTableEditorUtilitiesBlueprintLibrary(UDataTableEditorUtilitiesBlueprintLibrary&&); \
	NO_API UDataTableEditorUtilitiesBlueprintLibrary(const UDataTableEditorUtilitiesBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataTableEditorUtilitiesBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataTableEditorUtilitiesBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataTableEditorUtilitiesBlueprintLibrary)


#define REDStrings_Plugins_Editor_DataTableEditorUtilities_Source_DataTableEditorUtilities_Public_DataTableEditorUtilitiesBlueprintLibrary_h_23_PRIVATE_PROPERTY_OFFSET
#define REDStrings_Plugins_Editor_DataTableEditorUtilities_Source_DataTableEditorUtilities_Public_DataTableEditorUtilitiesBlueprintLibrary_h_20_PROLOG
#define REDStrings_Plugins_Editor_DataTableEditorUtilities_Source_DataTableEditorUtilities_Public_DataTableEditorUtilitiesBlueprintLibrary_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	REDStrings_Plugins_Editor_DataTableEditorUtilities_Source_DataTableEditorUtilities_Public_DataTableEditorUtilitiesBlueprintLibrary_h_23_PRIVATE_PROPERTY_OFFSET \
	REDStrings_Plugins_Editor_DataTableEditorUtilities_Source_DataTableEditorUtilities_Public_DataTableEditorUtilitiesBlueprintLibrary_h_23_SPARSE_DATA \
	REDStrings_Plugins_Editor_DataTableEditorUtilities_Source_DataTableEditorUtilities_Public_DataTableEditorUtilitiesBlueprintLibrary_h_23_RPC_WRAPPERS \
	REDStrings_Plugins_Editor_DataTableEditorUtilities_Source_DataTableEditorUtilities_Public_DataTableEditorUtilitiesBlueprintLibrary_h_23_INCLASS \
	REDStrings_Plugins_Editor_DataTableEditorUtilities_Source_DataTableEditorUtilities_Public_DataTableEditorUtilitiesBlueprintLibrary_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define REDStrings_Plugins_Editor_DataTableEditorUtilities_Source_DataTableEditorUtilities_Public_DataTableEditorUtilitiesBlueprintLibrary_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	REDStrings_Plugins_Editor_DataTableEditorUtilities_Source_DataTableEditorUtilities_Public_DataTableEditorUtilitiesBlueprintLibrary_h_23_PRIVATE_PROPERTY_OFFSET \
	REDStrings_Plugins_Editor_DataTableEditorUtilities_Source_DataTableEditorUtilities_Public_DataTableEditorUtilitiesBlueprintLibrary_h_23_SPARSE_DATA \
	REDStrings_Plugins_Editor_DataTableEditorUtilities_Source_DataTableEditorUtilities_Public_DataTableEditorUtilitiesBlueprintLibrary_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	REDStrings_Plugins_Editor_DataTableEditorUtilities_Source_DataTableEditorUtilities_Public_DataTableEditorUtilitiesBlueprintLibrary_h_23_INCLASS_NO_PURE_DECLS \
	REDStrings_Plugins_Editor_DataTableEditorUtilities_Source_DataTableEditorUtilities_Public_DataTableEditorUtilitiesBlueprintLibrary_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATATABLEEDITORUTILITIES_API UClass* StaticClass<class UDataTableEditorUtilitiesBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID REDStrings_Plugins_Editor_DataTableEditorUtilities_Source_DataTableEditorUtilities_Public_DataTableEditorUtilitiesBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
