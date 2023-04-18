/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2013-2018 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine 4
 * Module   : Previewer
 * File     : AtomPreviewer.cpp
 *
 ****************************************************************************/

/***************************************************************************
 *      インクルードファイル
 *      Include files
 ***************************************************************************/
/* モジュールヘッダ */
#include "AtomPreviewer.h"

/* CRIWAREプラグインヘッダ */
#include "CriWareEditorPrivatePCH.h"
#include "CriWareInitializer.h"
#include "AtomStatics.h"

/* Unreal Engine 4関連ヘッダ */
#include "UnrealEdGlobals.h"
#include "Editor/UnrealEdEngine.h"
#include "Engine/LocalPlayer.h"
#include "GameFramework/PlayerController.h"
#include "Editor.h"
#include "UObject/UObjectHash.h"
#include "UObject/UObjectIterator.h"

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
FAtomPreviewer::FAtomPreviewer()
{
	bIsPreviewing = false;
	bIsPaused = false;
	bWasInGame = false;
	bWasSessionPaused = false;
	AtomComponentPtr.Reset();
}

void FAtomPreviewer::Tick(float DeltaTime)
{
	/* 初期化済みかどうかチェック */
	if (FCriWareApi::criAtomEx_IsInitialized() == CRI_FALSE) {
		return;
	}

	/* エディタのUWorldを取得 */
	UWorld* World = (GEditor ? (GEditor->PlayWorld) : nullptr);
	if (!World) {
		ULocalPlayer* LocalPlayer = (GEngine ? (GEngine->GetDebugLocalPlayer()) : nullptr);
		if (LocalPlayer) {
			World = LocalPlayer->GetWorld();
		}
	}

	/* ゲーム実行中かどうかチェック */
	bool bInGame = FApp::IsGame();

	/* Widget表示中は以下の判定も行う必要あり */
	bool bIsDebugging = (World != nullptr);
	bInGame |= bIsDebugging;

	/* プレビュー開始判定 */
	if ((bInGame != false) && (bWasInGame == false)) {
		OnPreviewStart();
	}

	/* プレビュー終了判定 */
	if ((bInGame == false) && (bWasInGame != false)) {
		OnPreviewEnd();
	}

	/* 状態の更新 */
	bWasInGame = bInGame;

	/* ポーズ状態の監視 */
	bool bIsPlaySessionPaused = false;
	if (bInGame && GUnrealEd && GUnrealEd->PlayWorld) {
		bIsPlaySessionPaused = GUnrealEd->PlayWorld->bDebugPauseExecution;
	}

	/* ポーズ判定 */
	if ((bIsPlaySessionPaused != false) && (bWasSessionPaused == false)) {
		OnPreviewPaused();
	}

	/* ポーズ解除判定 */
	if ((bIsPlaySessionPaused == false) && (bWasSessionPaused != false)) {
		OnPreviewResumed();
	}

	/* 状態の更新 */
	bWasSessionPaused = bIsPlaySessionPaused;

	/* PIE中かどうかチェック */
	if ((World == nullptr) || (bInGame == false)) {
		/* アセットプレビュー用のAtomComponentを更新 */
		/* 備考）RegisterComponentされていないのでTickする必要がある。 */
		UAtomComponent* AtomComponent = AtomComponentPtr.Get();
		if (AtomComponent != nullptr) {
			AtomComponent->TickOnEditor(DeltaTime);
		}

		return;
	}

	/* 備考）以降の処理はPIE中のみ実行される。 */
}

bool FAtomPreviewer::IsTickableInEditor() const
{
	return true;
}

bool FAtomPreviewer::IsTickable() const
{
	return true;
}

TStatId FAtomPreviewer::GetStatId() const
{
	RETURN_QUICK_DECLARE_CYCLE_STAT(FAtomPreviewer, STATGROUP_Tickables);
}

void FAtomPreviewer::OnPreviewStart()
{
	/* プレビューの開始を通知 */
	bIsPreviewing = true;

	/* アセットのプレビューを中断 */
	ResetPreviewAtomComponent();

	/* AtomSoundManagerの距離係数を初期化 ( 非PIE中の距離係数変更を引きがないため ) */
	UAtomStatics::UpdateDistanceFactorForAllSounds(UCriWareInitializer::GetDistanceFactor());
}

void FAtomPreviewer::OnPreviewEnd()
{
	/* プレビューの終了を通知 */
	bIsPreviewing = false;

	/* 再生の停止 */
	FCriWareApi::criAtomExPlayer_StopAllPlayersWithoutReleaseTime();

	/* ルート化されたコンポーネントの破棄 */
	TArray<UAtomComponent*> ArrayForIteration = UAtomComponent::AtomRootedComponentArray;
	for (UAtomComponent* AtomComponent : ArrayForIteration) {
		if (!IsValid(AtomComponent)) {
			continue;
		}
		if (AtomComponent->IsBeingDestroyed()) {
			continue;
		}
		AtomComponent->DestroyComponent();
	}

	/* ACBのアンロード */
	for (TObjectIterator<USoundAtomCueSheet> It; It; ++It) {
		USoundAtomCueSheet* CueSheet = *It;
		if (CueSheet != nullptr) {
			CueSheet->ForceUnload();
		}
	}

	/* カテゴリ情報のリセット */
	int32 NumCategories = FCriWareApi::criAtomExAcf_GetNumCategories();
	for (int32 i = 0; i < NumCategories; i++) {
		CriAtomExCategoryInfo CategoryInfo;
		FCriWareApi::criAtomExAcf_GetCategoryInfo((CriUint16)i, &CategoryInfo);
		FCriWareApi::criAtomExCategory_SetVolumeById(CategoryInfo.id, CategoryInfo.volume);
		FCriWareApi::criAtomExCategory_PauseById(CategoryInfo.id, CRI_FALSE);
	}

	/* リスナ位置のリセット */
	UCriWareInitializer::SetListenerLocation(FVector::ZeroVector);
	UCriWareInitializer::SetListenerRotation(FRotator::ZeroRotator);

	/* AtomSoundManagerの距離係数をリセット( PIE中の距離係数変更を引きがないため ) */
	UAtomStatics::UpdateDistanceFactorForAllSounds(UCriWareInitializer::GetDistanceFactor());
}

void FAtomPreviewer::OnPreviewPaused()
{
	/* ポーズを通知 */
	bIsPaused = true;
}

void FAtomPreviewer::OnPreviewResumed()
{
	/* ポーズ解除を通知 */
	bIsPaused = false;

	/* アセットのプレビューを中断 */
	ResetPreviewAtomComponent();
}

UAtomComponent* FAtomPreviewer::GetPreviewAtomComponent()
{
	return AtomComponentPtr.Get();
}

UAtomComponent* FAtomPreviewer::ResetPreviewAtomComponent()
{
	/* プレビュー用のAtomComponentが作成済みかどうかチェック */
	UAtomComponent* AtomComponent = AtomComponentPtr.Get();
	if (AtomComponent == nullptr) {
		/* 新規にプレビューアを作成して再利用 */
		AtomComponent = NewObject<UAtomComponent>();
		if (AtomComponent != nullptr) {
			/* プロファイル対象から除外 */
			AtomComponent->bIsPreviewSound = true;

			/* プレビューアの参照を保持 */
			AtomComponentPtr = AtomComponent;
		}
	}

	if (AtomComponent == nullptr) {
		return nullptr;
	}

	/* 既存プレビューアを停止して再利用 */
	/* 注意）ACBファイルの再インポートで問題が発生するため、		*/
	/* 　　　停止時には音声データをnullptrで上書きする必要あり。	*/
	AtomComponent->Stop();
	AtomComponent->SetSound(nullptr);

	return AtomComponent;
}

void FAtomPreviewer::PlayPreviewSound(USoundAtomCue* Sound)
{
	/* プレビュー中はアセットのプレビューを禁止 */
	if ((bIsPreviewing != false) && (bIsPaused == false)) {
		return;
	}

	/* アセットのプレビューを開始 */
	UAtomComponent* AtomComponent = ResetPreviewAtomComponent();
	if (AtomComponent) {
		AtomComponent->bAutoDestroy = true;
		AtomComponent->bIsUISound = true;
		AtomComponent->SetSound(Sound);
		AtomComponent->Play();
	}
}

void FAtomPreviewer::ClearPreviewComponents()
{
	/* プレビューの停止 */
	UAtomComponent* AtomComponent = AtomComponentPtr.Get();
	if (AtomComponent != nullptr) {
		AtomComponent->DestroyComponent();
		AtomComponent = nullptr;
	}

	/* 参照のクリア */
	AtomComponentPtr.Reset();
}

/***************************************************************************
 *      関数定義
 *      Function Definition
 ***************************************************************************/

/* --- end of file --- */
