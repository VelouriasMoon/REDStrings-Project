/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2013-2018 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine 4
 * Module   : Previewer
 * File     : AtomPreviewer.h
 *
 ****************************************************************************/

/* 多重定義防止 */
#pragma once

/***************************************************************************
 *      インクルードファイル
 *      Include files
 ***************************************************************************/
/* Unreal Engine 4関連ヘッダ */
#include "Tickable.h"

/* CRIWAREプラグインヘッダ */
#include "SoundAtomCue.h"
#include "AtomComponent.h"

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
class FAtomPreviewer : public FTickableGameObject
{
public:
	FAtomPreviewer();

	/* エディタプレビュー用 */
	UAtomComponent* GetPreviewAtomComponent();
	UAtomComponent* ResetPreviewAtomComponent();
	void PlayPreviewSound(USoundAtomCue* Sound);
	void ClearPreviewComponents();

	// Begin FTickableObjectBase Interface
	virtual void Tick(float DeltaTime) override;
	// End FTickableObjectBase Interface

	// Begin FTickableGameObject Interface
	virtual bool IsTickableInEditor() const override;
	// End FTickableGameObject Interface

private:
	// Begin FTickableObjectBase Interface
	virtual bool IsTickable() const override;
	virtual TStatId GetStatId() const override;
	// End FTickableObjectBase Interface

	/* プレビュー開始イベント */
	void OnPreviewStart();

	/* プレビュー終了イベント */
	void OnPreviewEnd();

	/* ポーズイベント */
	void OnPreviewPaused();

	/* ポーズ解除イベント */
	void OnPreviewResumed();

	/* プレビュー中かどうか */
	bool bIsPreviewing;

	/* プレビューポーズ中かどうか */
	bool bIsPaused;

	/* プレビュー終了判定用 */
	bool bWasInGame;

	/* ポーズ判定用 */
	bool bWasSessionPaused;

	/* エディタプレビュー用 */
	TWeakObjectPtr<UAtomComponent> AtomComponentPtr;
};

/***************************************************************************
 *      関数宣言
 *      Prototype Functions
 ***************************************************************************/

/* --- end of file --- */
