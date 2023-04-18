/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2016-2017 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine 4
 * Module   : Atom Category
 * File     : AtomCategory.cpp
 *
 ****************************************************************************/

/***************************************************************************
 *      インクルードファイル
 *      Include files
 ***************************************************************************/
/* モジュールヘッダ */
#include "AtomCategory.h"

/* CRIWAREプラグインヘッダ */
#include "CriWareRuntimePrivatePCH.h"

/***************************************************************************
 *      定数マクロ
 *      Macro Constants
 ***************************************************************************/
#define LOCTEXT_NAMESPACE "AtomCategory"

/***************************************************************************
 *      処理マクロ
 *      Macro Functions
 ***************************************************************************/

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
 /* CRI ADX2 SDK の構造体からUE4用の構造体に変換 */
static void ConvertAisacInfo(const CriAtomExAisacInfo & from, FAtomAisacInfo & to);

/***************************************************************************
 *      変数定義
 *      Variable Definition
 ***************************************************************************/

/***************************************************************************
 *      クラス定義
 *      Class Definition
 ***************************************************************************/
 /* カテゴリボリュームの設定 */
void UAtomCategory::SetVolumeByName(FString CategoryName, float Volume)
{
	criAtomExCategory_SetVolumeByName(TCHAR_TO_UTF8(*CategoryName), Volume);
}

/* カテゴリボリュームの取得 */
float UAtomCategory::GetVolumeByName(FString CategoryName)
{
	return criAtomExCategory_GetVolumeByName(TCHAR_TO_UTF8(*CategoryName));
}

/* カテゴリのポーズ／ポーズ解除 */
void UAtomCategory::PauseByName(FString CategoryName, bool bPause)
{
	criAtomExCategory_PauseByName(TCHAR_TO_UTF8(*CategoryName), (CriBool)bPause);
}

/* カテゴリがポーズ状態の取得 */
bool UAtomCategory::IsPausedByName(FString CategoryName)
{
	CriBool result = criAtomExCategory_IsPausedByName(TCHAR_TO_UTF8(*CategoryName));
	return (result != CRI_FALSE);
}

/* 任意のIDのカテゴリの全てのAISACコントロールをリセット */
bool UAtomCategory::ResetAllAisacControlById(int32 CategoryId)
{
	return criAtomExCategory_ResetAllAisacControlById(static_cast<CriAtomExCategoryId>(CategoryId)) == CRI_TRUE;
}

/* 任意の名前のカテゴリの全てのAISACコントロールをリセット */
bool UAtomCategory::ResetAllAisacControlByName(FString CategoryName)
{
	return criAtomExCategory_ResetAllAisacControlByName(TCHAR_TO_UTF8(*CategoryName)) == CRI_TRUE;
}

/* ID指定でカテゴリにアタッチされているAISAC数を取得 */
int32 UAtomCategory::GetNumAttachedAisacsById(int32 CategoryId)
{
	return criAtomExCategory_GetNumAttachedAisacsById(static_cast<CriAtomExCategoryId>(CategoryId));
}

/* 名前指定でカテゴリにアタッチされているAISAC数を取得 */
int32 UAtomCategory::GetNumAttachedAisacsByName(FString CategoryName)
{
	return criAtomExCategory_GetNumAttachedAisacsByName(TCHAR_TO_UTF8(*CategoryName));
}

/* ID指定でカテゴリにアタッチされているAISACの情報を取得 */
void UAtomCategory::GetAttachedAisacInfoById(int32 CategoryId, int32 AisacAttachedIndex, bool & IsSuccess, FAtomAisacInfo & AisacInfo)
{
	CriAtomExAisacInfo AisacInfoBasic;

	IsSuccess = criAtomExCategory_GetAttachedAisacInfoById(
		static_cast<CriAtomExCategoryId>(CategoryId),
		static_cast<CriSint32>(AisacAttachedIndex),
		&AisacInfoBasic) != 0;

	if (IsSuccess) {
		ConvertAisacInfo(AisacInfoBasic, AisacInfo);
	}
}

/* 名前指定でカテゴリにアタッチされているAISACの情報を取得 */
void UAtomCategory::GetAttachedAisacInfoByName(FString CategoryName, int32 AisacAttachedIndex, bool & IsSuccess, FAtomAisacInfo & AisacInfo)
{
	CriAtomExAisacInfo AisacInfoBasic;

	IsSuccess = criAtomExCategory_GetAttachedAisacInfoByName(
		TCHAR_TO_UTF8(*CategoryName),
		static_cast<CriSint32>(AisacAttachedIndex),
		&AisacInfoBasic) != 0;

	if (IsSuccess) {
		ConvertAisacInfo(AisacInfoBasic, AisacInfo);
	}
}

/* CRI ADX2 SDK の構造体からUE4用の構造体に変換 */
static void ConvertAisacInfo(const CriAtomExAisacInfo & from, FAtomAisacInfo & to)
{
	to.Name = from.name;
	to.DefaultControlFlag = (from.default_control_flag == CRI_TRUE);
	to.DefaultControlValue = from.default_control_value;
	to.ControlId = static_cast<int32>(from.control_id);
	to.ControlName = from.control_name;
}

/* カテゴリAISACの設定 */
void UAtomCategory::SetAisacControlByName(FString CategoryName, FString AisacName, float Value)
{
	criAtomExCategory_SetAisacControlByName(TCHAR_TO_UTF8(*CategoryName), TCHAR_TO_UTF8(*AisacName), Value);
}

/* ID指定でカテゴリAISACコントロールの現在値を取得 */
float UAtomCategory::GetCurrentAisacControlValueById(
	int32 CategoryId,
	int32 AisacControlId)
{
	float value = 1.0f;
	criAtomExCategory_GetCurrentAisacControlValueById(
		static_cast<CriAtomExCategoryId>(CategoryId),
		static_cast<CriAtomExAisacControlId>(AisacControlId),
		&value);
	return value;
}

/* 名前指定でカテゴリAISACコントロールの現在値を取得 */
float UAtomCategory::GetCurrentAisacControlValueByName(
	FString CategoryName,
	FString AisacControlName)
{
	float value;
	criAtomExCategory_GetCurrentAisacControlValueByName(
		TCHAR_TO_UTF8(*CategoryName),
		TCHAR_TO_UTF8(*AisacControlName),
		&value);
	return value;
}

void UAtomCategory::StopByName(FString CategoryName)
{
	criAtomExCategory_StopByName(TCHAR_TO_UTF8(*CategoryName));
}

/***************************************************************************
 *      関数定義
 *      Function Definition
 ***************************************************************************/
#undef LOCTEXT_NAMESPACE

/* --- end of file --- */
