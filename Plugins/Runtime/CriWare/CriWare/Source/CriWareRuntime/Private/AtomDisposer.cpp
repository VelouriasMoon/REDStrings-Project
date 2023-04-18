/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2016-2018 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine 4
 * Module   : Atom Disposer
 * File     : AtomDisposer.cpp
 *
 ****************************************************************************/

/***************************************************************************
 *      インクルードファイル
 *      Include files
 ***************************************************************************/
/* モジュールヘッダ */
#include "AtomDisposer.h"

/* CRIWAREプラグインヘッダ */
#include "CriWareRuntimePrivatePCH.h"

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
AAtomDisposer::AAtomDisposer(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	bReplicates = false;
	SetHidden(true);
	SetCanBeDamaged(false);

	EndPlayObject = nullptr;
	EndPlayFunction = nullptr;
}

void AAtomDisposer::SetEndPlayCallback(EndPlayCallback EndPlayFunc, void* Object)
{
	EndPlayFunction = EndPlayFunc;
	EndPlayObject = Object;
}

void AAtomDisposer::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	/* 終了処理の実行 */
	if (EndPlayFunction != nullptr) {
		EndPlayFunction(EndPlayObject);
	}
}

#if ENGINE_MAJOR_VERSION == 4 && ENGINE_MINOR_VERSION <= 23
void AAtomDisposer::SetHidden(bool InHidden)
{
	bHidden = InHidden;
}

void AAtomDisposer::SetCanBeDamaged(bool InCanBeDamaged)
{
	bCanBeDamaged = InCanBeDamaged;
}
#endif

/***************************************************************************
 *      関数定義
 *      Function Definition
 ***************************************************************************/

/* --- end of file --- */
