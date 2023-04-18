/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2015-2018 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine 4
 * Module   : Lisntener Focus Point
 * File     : AtomListenerFocusPoint.cpp
 *
 ****************************************************************************/

/***************************************************************************
 *      インクルードファイル
 *      Include files
 ***************************************************************************/
/* モジュールヘッダ */
#include "AtomListenerFocusPoint.h"

/* CRIWAREプラグインヘッダ */
#include "CriWareRuntimePrivatePCH.h"
#include "AtomListener.h"

/* Unreal Engine 4関連ヘッダ */
#include "Kismet/GameplayStatics.h"

/***************************************************************************
 *      定数マクロ
 *      Macro Constants
 ***************************************************************************/
#define LOCTEXT_NAMESPACE "AtomListenerFocusPoint"

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
UAtomListenerFocusPoint::UAtomListenerFocusPoint(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
#if WITH_EDITOR
	/* Localization of unreal properties metadata with LOCTEXT markups and reflection */
	CRI_LOCCLASS(GetClass());
#endif

	PrimaryComponentTick.bCanEverTick = false;
	PrimaryComponentTick.bStartWithTickEnabled = false;

	bAutoActivate = true;

	/* フォーカスポイントの位置を更新するため、OnUpdateTransformを呼び出すよう指定する */
	bWantsOnUpdateTransform = true;

	DistanceFocusLevel = 1.0f;
	DirectionFocusLevel = 0.0f;
	ViewTargetID = 0;
	bUpdateTransform = false;
}

void UAtomListenerFocusPoint::OnUpdateTransform(EUpdateTransformFlags UpdateTransformFlags, ETeleportType Teleport)
{
	Super::OnUpdateTransform(UpdateTransformFlags, Teleport);

	/* デフォルトオブジェクトかどうかチェック */
	if (HasAnyFlags(RF_ClassDefaultObject)) {
		/* デフォルトオブジェクトの場合は何もしない */
		return;
	}

	/* フォーカスポイントの更新 */
	UpdateFocusPoint();
}

void UAtomListenerFocusPoint::UpdateFocusPoint()
{
	/* オーナーの取得 */
	AActor* OwnerActor = GetOwner();
	if (OwnerActor == nullptr) {
		return;
	}

	/* プレーヤコントローラの取得 */
	APlayerController* PlayerController = nullptr;
	AActor *TestActor = OwnerActor;
	while (TestActor) {
		if (APlayerController * CastPC = Cast<APlayerController>(TestActor)) {
			PlayerController = CastPC;
			break;
		}

		if (APawn * Pawn = Cast<APawn>(TestActor)) {
			PlayerController = Cast<APlayerController>(Pawn->GetController());
			break;
		}

		TestActor = TestActor->GetOwner();
	}

	/* プレーヤコントローラに接続されていない場合は無視 */
	if (PlayerController == nullptr) {
		return;
	}

	/* ローカルコントローラ以外は操作の対象外 */
	if (!PlayerController->IsLocalController()) {
		return;
	}

	/* ビューターゲットの取得 */
	AActor* ViewTarget = PlayerController->GetViewTarget();
	if (ViewTarget == nullptr) {
		return;
	}

	/* ビューターゲットの変更をチェック */
	/* 備考）検索負荷を考慮し、ビューターゲットが変更されたタイミング	*/
	/* 　　　でのみフォーカスポイントが有効かどうかを判定する。			*/
	uint32 NewViewTargetID = ViewTarget->GetUniqueID();
	if (ViewTargetID != NewViewTargetID) {
		/* ビューターゲットにフォーカスポイントが設定されているかどうかチェック */
		UAtomListenerFocusPoint* FocusPoint = Cast<UAtomListenerFocusPoint>(
			ViewTarget->GetComponentByClass(UAtomListenerFocusPoint::StaticClass()));

		/* アクタと無関係のカメラが使用されている場合はフォーカスポイントを更新しない */
		if (FocusPoint != this) {
			bUpdateTransform = false;
		} else {
			bUpdateTransform = true;
		}

		/* ビューターゲットのIDを更新 */
		ViewTargetID = NewViewTargetID;
	}

	/* フォーカスポイントの更新が必要かどうかチェック */
	if (bUpdateTransform == false) {
		return;
	}

	/* リスナの取得 */
	int32 PlayerControllerID = UGameplayStatics::GetPlayerControllerID(PlayerController);
	FAtomListener* AtomListener = FAtomListener::GetListenerByPlayerControllerID(PlayerControllerID);
	if (AtomListener == nullptr) {
		return;
	}

	/* リスナハンドルの取得 */
	CriAtomEx3dListenerHn Listener = AtomListener->GetListenerHandle();
	if (Listener == NULL) {
		return;
	}

	/* 距離係数の取得 */
	float DistanceFactor = AtomListener->GetDistanceFactor();

	/* フォーカスポイントの座標を設定 */
	const FVector SourcePosition = GetComponentLocation();
	CriAtomExVector pos;
	pos.x = SourcePosition.X * DistanceFactor;
	pos.y = SourcePosition.Y * DistanceFactor;
	pos.z = SourcePosition.Z * DistanceFactor;
	criAtomEx3dListener_SetFocusPoint(Listener, &pos);

	/* フォーカスレベルを設定 */
	criAtomEx3dListener_SetDistanceFocusLevel(Listener, DistanceFocusLevel);
	criAtomEx3dListener_SetDirectionFocusLevel(Listener, DirectionFocusLevel);
}

/***************************************************************************
 *      関数定義
 *      Function Definition
 ***************************************************************************/
#undef LOCTEXT_NAMESPACE

/* --- end of file --- */
