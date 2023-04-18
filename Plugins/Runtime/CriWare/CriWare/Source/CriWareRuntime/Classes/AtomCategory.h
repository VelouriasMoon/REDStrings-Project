/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2016-2017 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine 4
 * Module   : Atom Category
 * File     : AtomCategory.h
 *
 ****************************************************************************/

/* 多重定義防止 */
#pragma once

/***************************************************************************
 *      インクルードファイル
 *      Include files
 ***************************************************************************/
/* Unreal Engine 4関連ヘッダ */
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"

/* CRIWAREプラグインヘッダ */
#include "AtomAisac.h"

/* モジュールヘッダ */
#include "AtomCategory.generated.h"

/***************************************************************************
 *      定数マクロ
 *      Macro Constants
 ***************************************************************************/

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
UCLASS(meta = (ToolTip = "AtomCategory class."))
class CRIWARERUNTIME_API UAtomCategory : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	/**
	* カテゴリ名指定でボリュームの変更を行います。
	*
	* @param CategoryName カテゴリ名を指定します。
	* @param Volume ボリュームの倍率を 0.0f 〜 1.0f の範囲で指定します。
	*/
	UFUNCTION(BlueprintCallable, Category = "AtomCategory")
	static void SetVolumeByName(FString CategoryName, float Volume);

	/**
	* カテゴリに設定されたボリューム倍率を取得します。
	*
	* @param CategoryName カテゴリ名を指定します。
	* @return ボリューム倍率が返ります。
	*/
	UFUNCTION(BlueprintCallable, Category = "AtomCategory")
	static float GetVolumeByName(FString CategoryName);

	/**
	* カテゴリ名指定でポーズ制御を行います。
	*
	* @param CategoryName カテゴリ名を指定します。
	* @param bPause trueを設定すると、指定したカテゴリの音声が全てポーズされます。falseを設定すると、指定したカテゴリの音声のポーズが解除されます。
	*/
	UFUNCTION(BlueprintCallable, Category = "AtomCategory")
	static void PauseByName(FString CategoryName, bool bPause);

	/**
	* カテゴリのポーズ状態を取得します。
	*
	* @param CategoryName カテゴリ名を指定します。
	* @return ポーズ中の場合はtrueが、ポーズ中でない場合はfalseが返されます。
	*/
	UFUNCTION(BlueprintCallable, Category = "AtomCategory")
	static bool IsPausedByName(FString CategoryName);

	/**
	* 任意のIDのカテゴリの全てのAISACコントロールをリセットします。
	* 任意のカテゴリの範囲で、全てのカテゴリAISACコントロールにデフォルトコントロール値(AtomCraftで設定)をセットします。
	* デフォルトコントロール値が1つも設定されていないカテゴリAISACコントロールには値がセットされないため、ご注意ください。
	*
	* @param CategoryId カテゴリIDを指定します。
	* @return 成功/失敗が返ります。
	*/
	UFUNCTION(BlueprintCallable, Category = "AtomCategory")
	static bool ResetAllAisacControlById(int32 CategoryId);

	/**
	* 任意の名前のカテゴリの全てのAISACコントロールをリセットします。
	* 任意のカテゴリの範囲で、全てのカテゴリAISACコントロールにデフォルトコントロール値(AtomCraftで設定)をセットします。
	* デフォルトコントロール値が1つも設定されていないカテゴリAISACコントロールには値がセットされないため、ご注意ください。
	*
	* @param CategoryName カテゴリ名を指定します。
	* @return 成功/失敗が返ります。
	*/
	UFUNCTION(BlueprintCallable, Category = "AtomCategory")
	static bool ResetAllAisacControlByName(FString CategoryName);

	/**
	* ID指定でカテゴリにアタッチされているAISAC数を取得します。
	*
	* @param CategoryId カテゴリのIDを指定します。
	* @return カテゴリにアタッチされているAISAC数が返ります。
	*/
	UFUNCTION(BlueprintCallable, Category = "AtomCategory")
	static int32 GetNumAttachedAisacsById(int32 CategoryId);

	/**
	* 名前指定でカテゴリにアタッチされているAISAC数を取得します。
	*
	* @param CategoryName カテゴリの名前を指定します。
	* @return カテゴリにアタッチされているAISAC数が返ります。
	*/
	UFUNCTION(BlueprintCallable, Category = "AtomCategory")
	static int32 GetNumAttachedAisacsByName(FString CategoryName);

	/**
	* ID指定でカテゴリにアタッチされているAISACの情報を取得します。
	*
	* @param CategoryId カテゴリのIDを指定します。
	* @param AisacAttachedIndex 何番目のAISACの情報を取得したいかを指定します。指定できる数値はゼロから「アタッチされているAISACの数-1」までです。
	* @param IsSuccess 成功した場合trueが、失敗した場合falseが返ります。
	* @param AisacInfo AISAC情報が返ります。
	*/
	UFUNCTION(BlueprintCallable, Category = "AtomCategory")
	static void GetAttachedAisacInfoById(int32 CategoryId, int32 AisacAttachedIndex, bool & IsSuccess, FAtomAisacInfo & AisacInfo);

	/**
	* 名前指定でカテゴリにアタッチされているAISACの情報を取得します。
	*
	* @param CategoryName カテゴリの名前を指定します。
	* @param AisacAttachedIndex 何番目のAISACの情報を取得したいかを指定します。指定できる数値はゼロから「アタッチされているAISACの数-1」までです。
	* @param IsSuccess 成功した場合trueが、失敗した場合falseが返ります。
	* @param AisacInfo AISAC情報が返ります。
	*/
	UFUNCTION(BlueprintCallable, Category = "AtomCategory")
	static void GetAttachedAisacInfoByName(FString CategoryName, int32 AisacAttachedIndex, bool & IsSuccess, FAtomAisacInfo & AisacInfo);

	/**
	* カテゴリに対してAISACコントロール値を指定します。
	*
	* @param CategoryName カテゴリの名前を指定します。
	* @param AisacName AISACコントロール名を指定します。
	* @param Value 新しいAISACコントロール値を指定します。
	*/
	UFUNCTION(BlueprintCallable, Category = "AtomCategory")
	static void SetAisacControlByName(FString CategoryName, FString AisacName, float Value);

	/**
	* ID指定でカテゴリAISACコントロールの現在値を取得。
	*
	* @param CategoryId カテゴリのIDを指定します。
	* @param AisacControlId カテゴリAISACコントロールのIDを指定します。
	* @return カテゴリAISACコントロールの現在値が返ります。
	*/
	UFUNCTION(BlueprintCallable, Category = "AtomCategory")
	static float GetCurrentAisacControlValueById(int32 CategoryId, int32 AisacControlId);

	/**
	* 名前指定でカテゴリAISACコントロールの現在値を取得。
	*
	* @param CategoryName カテゴリの名前を指定します。
	* @param AisacControlName カテゴリAISACコントロールの名前を指定します。
	* @return カテゴリAISACコントロールの現在値が返ります。
	*/
	UFUNCTION(BlueprintCallable, Category = "AtomCategory")
	static float GetCurrentAisacControlValueByName(FString CategoryName, FString AisacControlName);

	/**
	* ゲーム中で再生中の音声のうち、任意のカテゴリに該当する音声が全て停止します。
	*
	* @param CategoryName カテゴリの名前を指定します。
	*/
	UFUNCTION(BlueprintCallable, Category = "AtomCategory")
	static void StopByName(FString CategoryName);
};

/***************************************************************************
 *      関数宣言
 *      Prototype Functions
 ***************************************************************************/

/* --- end of file --- */
