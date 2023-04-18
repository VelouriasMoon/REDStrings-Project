/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2015-2017 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine 4
 * Module   : Base AtomSoundData Actor
 * File     : AtomSoundData.h
 *
 ****************************************************************************/

/* 多重定義防止 */
#pragma once

/***************************************************************************
 *      インクルードファイル
 *      Include files
 ***************************************************************************/
/* Unreal Engine 4関連ヘッダ */
#include "GameFramework/Actor.h"
#include "Launch/Resources/Version.h"

/* CRIWAREプラグインヘッダ */
#include "SoundAtomCueSheet.h"

/* モジュールヘッダ */
#include "AtomSoundData.generated.h"

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
UCLASS(MinimalAPI, meta=(ToolTip = "AtomSoundData class."))
class AAtomSoundData : public AActor
{
	GENERATED_BODY()

public:
	AAtomSoundData(const FObjectInitializer& ObjectInitializer);

	/* キューシート */
	UPROPERTY(BlueprintReadOnly, Category = "AtomSoundData", meta=(ToolTip = "Cue sheet."))
	class USoundAtomCueSheet *CueSheet;

	// Begin UObject interface.
	virtual void PostLoad() override;
	virtual void BeginDestroy() override;
	// End of UObject interface

	/* キューシートのロード */
	void LoadCueSheet(USoundAtomCueSheet *NewCueSheet);

	/* キューシートのリリース */
	void ReleaseCueSheet(void);

private:
	/* キューシートがロード済みかどうか */
	bool bIsLoaded;

#if ENGINE_MAJOR_VERSION == 4 && ENGINE_MINOR_VERSION <= 23
	void SetHidden(bool InHidden);
	void SetCanBeDamaged(bool InCanBeDamaged);
#endif
};

/***************************************************************************
 *      関数宣言
 *      Prototype Functions
 ***************************************************************************/

/* --- end of file --- */
