/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2018 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine 4
 * Module   : PerformanceMonitor
 * File     : AtomPerformanceMonitor.h
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
class FAtomPerformanceMonitor : public FTickableGameObject
{
public:
	FAtomPerformanceMonitor();
	~FAtomPerformanceMonitor();

	// Begin FTickableObjectBase Interface
	virtual void Tick(float DeltaTime) override;
	// End FTickableObjectBase Interface

private:
	// Begin FTickableObjectBase Interface
	virtual bool IsTickable() const override;
	virtual TStatId GetStatId() const override;
	// End FTickableObjectBase Interface
};

/***************************************************************************
 *      関数宣言
 *      Prototype Functions
 ***************************************************************************/

/* --- end of file --- */
