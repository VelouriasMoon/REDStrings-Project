/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2016-2018 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine 4
 * Module   : Atom Disposer
 * File     : AtomDisposer.h
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

/* モジュールヘッダ */
#include "AtomDisposer.generated.h"

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
UCLASS(MinimalAPI)
class AAtomDisposer : public AActor
{
	GENERATED_BODY()

public:
	AAtomDisposer(const FObjectInitializer& ObjectInitializer);

	/* 終了時に行う処理を登録 */
	typedef void (*EndPlayCallback)(void* Object);
	void SetEndPlayCallback(EndPlayCallback EndPlayFunc, void* Object);

	// Begin AActor interface.
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason);
	// End of AActor interface

private:
	EndPlayCallback EndPlayFunction;
	void* EndPlayObject;

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
