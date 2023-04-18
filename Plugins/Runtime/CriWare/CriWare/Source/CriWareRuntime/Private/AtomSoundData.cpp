/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2015-2017 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine 4
 * Module   : Base AtomSoundData Actor
 * File     : AtomSoundData.cpp
 *
 ****************************************************************************/

/***************************************************************************
 *      インクルードファイル
 *      Include files
 ***************************************************************************/
/* モジュールヘッダ */
#include "AtomSoundData.h"

/* CRIWAREプラグインヘッダ */
#include "CriWareRuntimePrivatePCH.h"

/***************************************************************************
 *      定数マクロ
 *      Macro Constants
 ***************************************************************************/
#define LOCTEXT_NAMESPACE "AtomSoundData"

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
AAtomSoundData::AAtomSoundData(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
#if WITH_EDITOR
	/* Localization of unreal properties metadata with LOCTEXT markups and reflection */
	CRI_LOCCLASS(GetClass());
#endif

	bReplicates = false;
	SetHidden(true);
	SetCanBeDamaged(false);

	CueSheet = NULL;
	bIsLoaded = false;
}

void AAtomSoundData::PostLoad()
{
	Super::PostLoad();

	/* デフォルトオブジェクトかどうかチェック */
	if (HasAnyFlags(RF_ClassDefaultObject)) {
		/* デフォルトオブジェクトの場合は何もしない */
		return;
	}

#if WITH_EDITOR
	/* ゲーム実行中かどうかチェック */
	/* 注意）マップロード時は処理をスキップ。 */
	UWorld* World = GetWorld();
	bool bIsGameWorld = (World ? World->IsGameWorld() : false);
	if ((GIsEditor != false) && (bIsGameWorld == false)) {
		return;
	}
#endif

	/* キューシートのロード */
	LoadCueSheet(CueSheet);
}

void AAtomSoundData::BeginDestroy()
{
	/* キューシートのリリース */
	ReleaseCueSheet();

	Super::BeginDestroy();
}

void AAtomSoundData::LoadCueSheet(USoundAtomCueSheet *NewCueSheet)
{
	/* キューシートが設定されているかどうかチェック */
	if (NewCueSheet == NULL) {
		return;
	}

	/* キューシートのロード */
	NewCueSheet->AddRef();

	/* ロード状態の更新 */
	bIsLoaded = true;

	/* キューシートの保存 */
	CueSheet = NewCueSheet;
}

void AAtomSoundData::ReleaseCueSheet()
{
	/* ロード状態のチェック */
	if (bIsLoaded == false) {
		return;
	}

	/* キューシートのリリース */
	if (CueSheet != NULL) {
		CueSheet->Release();
		CueSheet = NULL;
	}

	/* ロード状態の更新 */
	bIsLoaded = false;
}

#if ENGINE_MAJOR_VERSION == 4 && ENGINE_MINOR_VERSION <= 23
void AAtomSoundData::SetHidden(bool InHidden)
{
	bHidden = InHidden;
}

void AAtomSoundData::SetCanBeDamaged(bool InCanBeDamaged)
{
	bCanBeDamaged = InCanBeDamaged;
}
#endif

/***************************************************************************
 *      関数定義
 *      Function Definition
 ***************************************************************************/
#undef LOCTEXT_NAMESPACE

/* --- end of file --- */
