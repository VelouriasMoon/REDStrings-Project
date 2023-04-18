/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2014-2017 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine 4
 * Module   : Atom Trigger Table
 * File     : AtomTriggerTableFunctionLibrary.h
 *
 ****************************************************************************/

/* 多重定義防止 */
#pragma once

/***************************************************************************
 *      インクルードファイル
 *      Include files
 ***************************************************************************/
/* Unreal Engine 4関連ヘッダ */
#include "Engine/DataTable.h"
#include "Kismet/BlueprintFunctionLibrary.h"

/* CRIWAREプラグインヘッダ */
#include "SoundAtomCue.h"

/* モジュールヘッダ */
#include "AtomTriggerTableFunctionLibrary.generated.h"

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
USTRUCT(BlueprintType, meta=(ToolTip = "AtomTriggerRow struct."))
struct CRIWARERUNTIME_API FAtomTriggerRow : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	FAtomTriggerRow();

	/* キューをトリガするタイミング */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=AtomTrigger, meta = (ToolTip = "Time."))
	float Time;

	/* 音の鳴る位置 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=AtomTrigger, meta = (ToolTip = "Bone."))
	FName Bone;

	/* トリガされるキューアセット */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=AtomTrigger, meta = (ToolTip = "Cue."))
	USoundAtomCue *Cue;
};

UCLASS()
class CRIWARERUNTIME_API UAtomTriggerTableFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	/* 指定された名前に一致する行の取得 */
	UFUNCTION(BlueprintCallable, Category = "AtomTriggerTable", meta=(ToolTip = "Get data table row from name."))
	static bool GetDataTableRowFromName(UDataTable* Table, FName RowName, FAtomTriggerRow& OutRow);
};

/***************************************************************************
 *      関数宣言
 *      Prototype Functions
 ***************************************************************************/

/* --- end of file --- */
