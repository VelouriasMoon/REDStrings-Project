/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2014-2017 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine 4
 * Module   : Atom Trigger Table
 * File     : AtomTriggerTableFunctionLibrary.cpp
 *
 ****************************************************************************/

/***************************************************************************
 *      インクルードファイル
 *      Include files
 ***************************************************************************/
/* モジュールヘッダ */
#include "AtomTriggerTableFunctionLibrary.h"

/* CRIWAREプラグインヘッダ */
#include "CriWareRuntimePrivatePCH.h"

/* Unreal Engine 4関連ヘッダ */
#include "Kismet/DataTableFunctionLibrary.h"

/***************************************************************************
 *      定数マクロ
 *      Macro Constants
 ***************************************************************************/

/***************************************************************************
 *      処理マクロ
 *      Macro Functions
 ***************************************************************************/
#define LOCTEXT_NAMESPACE "AtomTriggerTableFunctionLibrary"

/***************************************************************************
 *      データ型宣言
 *      Data Type Declarations
 ***************************************************************************/

/***************************************************************************
 *      変数宣言
 *      Prototype Variables
 ***************************************************************************/

/***************************************************************************
 *      クラス宣言
 *      Prototype Classes
 ***************************************************************************/

/***************************************************************************
 *      関数宣言
 *      Prototype Functions
 ***************************************************************************/

/***************************************************************************
 *      変数定義
 *      Variable Definition
 ***************************************************************************/

/***************************************************************************
 *      クラス定義
 *      Class Definition
 ***************************************************************************/

/***************************************************************************
 *      関数定義
 *      Function Definition
 ***************************************************************************/
FAtomTriggerRow::FAtomTriggerRow()
	:Time(0.0f)
	,Cue(nullptr)
{
#if WITH_EDITOR
	/* Localization of unreal properties metadata with LOCTEXT markups and reflection */
	CRI_LOCSTRUCT(StaticStruct());
#endif
}

bool UAtomTriggerTableFunctionLibrary::GetDataTableRowFromName(UDataTable* Table, FName RowName, FAtomTriggerRow& OutRow)
{
	return UDataTableFunctionLibrary::Generic_GetDataTableRowFromName(Table, RowName, &OutRow);
}

#undef LOCTEXT_NAMESPACE

/* --- end of file --- */
