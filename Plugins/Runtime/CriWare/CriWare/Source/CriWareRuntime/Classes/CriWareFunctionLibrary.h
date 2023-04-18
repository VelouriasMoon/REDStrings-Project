/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2017-2018 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine 4
 * Module   : Blueprint Function Library
 * File     : CriWareFunctionLibrary.h
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
#include "CriWareFunctionLibrary.generated.h"

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
UENUM(BlueprintType)
enum class ECriWareSpeakerSystem : uint8
{
	Surround5Point1 = 0,	/** 5.1ch */
	Surround7Point1 = 1		/** 7.1ch */
};

UCLASS()
class CRIWARERUNTIME_API UCriWareFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	/* スピーカー角度の設定 */
	UFUNCTION(BlueprintCallable, Category="CriWareFunctionLibrary")
	static void SetSpeakerAngleArray(ECriWareSpeakerSystem SpeakerSystem, const TArray<float>& Angles);

	/* ゲーム変数の設定 */
	UFUNCTION(BlueprintCallable, Category="CriWareFunctionLibrary")
	static void SetGameVariableByName(FString GameVariableName, float Value);

	/* セレクタに対するグローバル参照ラベルの設定 */
	UFUNCTION(BlueprintCallable, Category="CriWareFunctionLibrary")
	static void SetGlobalLabelToSelectorByName(FString SelectorName, FString LabelName);
};

/***************************************************************************
 *      関数宣言
 *      Prototype Functions
 ***************************************************************************/

/* --- end of file --- */
