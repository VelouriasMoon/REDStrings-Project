/****************************************************************************
*
* CRI Middleware SDK
*
* Copyright (c) 2018 CRI Middleware Co., Ltd.
*
* Library  : CRIWARE plugin for Unreal Engine 4
* Module   : Atom Aisac
* File     : AtomAisac.h
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

/* モジュールヘッダ */
#include "AtomAisac.generated.h"

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
/* AISAC情報を格納する構造体 */
USTRUCT(BlueprintType, meta = (ToolTip = "AtomAisacInfo struct."))
struct FAtomAisacInfo
{
	GENERATED_USTRUCT_BODY()

	FAtomAisacInfo()
		:DefaultControlFlag(false)
		,DefaultControlValue(0.0f)
		,ControlId(0)
	{}
	
	~FAtomAisacInfo() {}

	/* AISAC名 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aisac", meta = (ToolTip = "Name of AISAC."))
	FString Name;

	/* デフォルトAISACコントロール値が設定されているかどうか */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aisac", meta = (ToolTip = "true: default control value is specified, false: it's not specified."))
	bool DefaultControlFlag;

	/* デフォルトAISACコントロール値 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aisac", meta = (ToolTip = "Default AISAC control value."))
	float DefaultControlValue;

	/* このAISACに紐づくAISACコントロールID */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aisac", meta = (ToolTip = "AISAC control id."))
	int32 ControlId;

	/* このAISACに紐づくAISACコントロール名 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aisac", meta = (ToolTip = "AISAC control name."))
	FString ControlName;
};

/***************************************************************************
*      関数宣言
*      Prototype Functions
***************************************************************************/

/* --- end of file --- */
