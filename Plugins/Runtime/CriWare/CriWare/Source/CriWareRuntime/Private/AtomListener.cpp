/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2013-2018 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine 4
 * Module   : Listener
 * File     : AtomListener.cpp
 *
 ****************************************************************************/

/***************************************************************************
 *      インクルードファイル
 *      Include files
 ***************************************************************************/
/* モジュールヘッダ */
#include "AtomListener.h"

/* CRIWAREプラグインヘッダ */
#include "CriWareRuntimePrivatePCH.h"
#include "AtomListenerFocusPoint.h"

/* Unreal Engine 4関連ヘッダ */
#include "Engine/LocalPlayer.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/PlayerController.h"
#include "HeadMountedDisplay.h"
#include "HeadMountedDisplayFunctionLibrary.h"

#if WITH_EDITOR
#include "Settings/SkeletalMeshEditorSettings.h"
#include "Editor/Persona/Private/AnimationEditorViewportClient.h"
#endif

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
TArray<FAtomListener*> FAtomListener::Listeners;
double FAtomListener::previous_time = 0.0;
double FAtomListener::elapsed_time = 0.0;

/***************************************************************************
 *      クラス定義
 *      Class Definition
 ***************************************************************************/
/* コンストラクタ */
FAtomListener::FAtomListener()
{
	/* リスナハンドルを作成 */
	ListenerHandle = criAtomEx3dListener_Create(NULL, NULL, 0);

	/* 距離係数の保存 */
	DistanceFactor = 1.0f;

	/* リスナを自動で操作するよう設定 */
	bAutoUpdateEnabled = true;

	/* リスナ位置の初期化 */
	ListenerLocation = FVector::ZeroVector;
	ListenerRotation = FRotator::ZeroRotator;

	PreviousListenerLocation.x = ListenerLocation.X;
	PreviousListenerLocation.y = ListenerLocation.Y;
	PreviousListenerLocation.z = ListenerLocation.Z;

	/* プレーヤコントローラ、Pawnとの紐づけをクリア */
	PlayerControllerID = INDEX_NONE;
	PawnID = 0;
	ViewTargetID = 0;

	AtomAudioVolumeHandler = new FAtomAudioVolumeHandlerForListener();

	bIsLocationUpdatedAtLeastOnce = false;

	/* リストに登録 */
	Listeners.Add(this);

#if WITH_EDITOR
	bIsEditorPreview = false;
	PreviewLocation = FVector::ZeroVector;
	PreviewRotation = FRotator::ZeroRotator;
#endif
}

/* デストラクタ */
FAtomListener::~FAtomListener()
{
	/* 備考）リスナハンドルは破棄しない。				*/
	/* 　　　AtomExプレーヤより先に破棄できないので、	*/
	/* 　　　Finalizeで自動的に破棄されるのを待つ。		*/

	/* リストから破棄 */
	Listeners.Remove(this);

	delete AtomAudioVolumeHandler;
}

void FAtomListener::ResetEntranceVolumeArray()
{
	for (FAtomListener* listener : Listeners) {
		listener->AtomAudioVolumeHandler->ResetEntranceVolumeArray();
	}
}

/* 全てのリスナの状態を更新 */
void FAtomListener::UpdateAllListeners()
{
	/* 初期化済みかどうかチェック */
	if (criAtomEx_IsInitialized() == CRI_FALSE) {
		return;
	}

#if WITH_EDITOR
	/* プレビュー実行中かどうかチェック */
	bool bIsDebugging = (GEditor ? (GEditor->PlayWorld != nullptr) : false);
	bool bIsEditorPreviewMode = false;
	for (FAtomListener* Listener : Listeners) {
		if (Listener->bIsEditorPreview) {
			/* PreviewWorldで再生中のSoundがあるかどうかの確認              */
			/* 存在している場合はbIsEditorPreviewがtrueになっているものがある */
			/* 一つでもbIsEditorPreviewがtrueならリスナーの更新を行う        */
			bIsEditorPreviewMode = true;
			break;
		}
	}
	if ((GIsEditor != false) && (bIsDebugging == false) && !bIsEditorPreviewMode) {
		/* エディタ上ではプレビュー中のみリスナの更新を行う */
		for (FAtomListener* Listener : Listeners) {
			Listener->bIsLocationUpdatedAtLeastOnce = false;
		}
		return;
	}
#endif

	double current_time = FPlatformTime::Seconds();
	elapsed_time = current_time - previous_time;

	/* リスナの更新 */
	int32 PlayerIndex = 0;
	for (FAtomListener* Listener : Listeners) {
		if (!Listener) {
			continue;
		}
#if WITH_EDITOR
		if (Listener->bIsEditorPreview) {
			Listener->UpdateListenerTransform(Listener->PreviewLocation, Listener->PreviewRotation);
			continue;
		}
#endif
		Listener->UpdateListener(PlayerIndex);
		Listener->AttachedPlayerIndex = PlayerIndex;
		Listener->bIsLocationUpdatedAtLeastOnce = true;
		PlayerIndex++;
	}

	previous_time = current_time;
}

void FAtomListener::SetDistanceFactorForAllListeners(float InDistanceFactor)
{
	/* 初期化済みかどうかチェック */
	if (criAtomEx_IsInitialized() == CRI_FALSE) {
		return;
	}

#if WITH_EDITOR
	/* プレビュー実行中かどうかチェック */
	bool bIsDebugging = (GEditor ? (GEditor->PlayWorld != nullptr) : false);
	if ((GIsEditor != false) && (bIsDebugging == false)) {
		/* エディタ上ではプレビュー中のみリスナの更新を行う */
		return;
	}
#endif

	/* リスナの更新 */
	int32 PlayerIndex = 0;
	for (FAtomListener* Listener : Listeners) {
		if (Listener != nullptr) {
			Listener->SetDistanceFactor(InDistanceFactor);
			PlayerIndex++;
		}
	}
}

/* 距離係数の設定 */
void FAtomListener::SetDistanceFactor(float InDistanceFactor)
{
	if (InDistanceFactor <= 0.0f) {
		UE_LOG(LogCriWareRuntime, Error, TEXT("Invalid distance factor."));
		return;
	}

	/* 距離係数の保存 */
	DistanceFactor = InDistanceFactor;
}

/* 距離係数の取得 */
float FAtomListener::GetDistanceFactor()
{
	return DistanceFactor;
}

/* 有効／無効の切り替え */
void FAtomListener::SetAutoUpdateEnabled(bool bEnabled)
{
	bAutoUpdateEnabled = bEnabled;
}

/* リスナ位置の指定 */
void FAtomListener::SetListenerLocation(FVector Location)
{
	ListenerLocation = Location;
}

/* リスナの向きの指定 */
void FAtomListener::SetListenerRotation(FRotator Rotation)
{
	ListenerRotation = Rotation;
	ListenerRotation_Quat = ListenerRotation.Quaternion();
}

/* リスナ位置の取得 */
FVector FAtomListener::GetListenerLocation()
{
	return ListenerLocation;
}

/* リスニングポイントの取得 */
FVector FAtomListener::GetListeningPoint()
{
	CriAtomExVector pos;
	FVector ListeningPoint;
	float level;

	/* フォーカスポイントの取得 */
	criAtomEx3dListener_GetFocusPoint(ListenerHandle, &pos);

	/* Distance Focus Levelの取得 */
	level = criAtomEx3dListener_GetDistanceFocusLevel(ListenerHandle);

	/* リスニングポイントの計算 */
	ListeningPoint.X = pos.x / DistanceFactor;
	ListeningPoint.Y = pos.y / DistanceFactor;
	ListeningPoint.Z = pos.z / DistanceFactor;

	/* リスニングポイントの計算 */
	FVector listener_location = ListenerLocation;
#if WITH_EDITOR
	listener_location = FAtomListener::bIsEditorPreview ? PreviewLocation : ListenerLocation;
#endif

	ListeningPoint = ListeningPoint * level + listener_location * (1.0f - level);

	return ListeningPoint;
}

int32 FAtomListener::GetAttachedPlayerIndex()
{
	return AttachedPlayerIndex;
}

/* リスナハンドルの取得 */
CriAtomEx3dListenerHn FAtomListener::GetListenerHandle(void)
{
	return ListenerHandle;
}

#if WITH_EDITOR
void FAtomListener::UpdatePreviewListenerTransform(const FVector &location, const FRotator &rotation)
{
	PreviewLocation = location;
	PreviewRotation = rotation;
}
#endif

void FAtomListener::SetRegion(UAtom3dRegion* InRegion)
{
	Region = InRegion;
	if (!IsValid(Region.Get())) {
		return;
	}
	CriAtomEx3dRegionHn RegionHandle = Region.Get()->GetHandle()->GetRawHandle();
	check(RegionHandle != NULL);
	check(ListenerHandle != NULL);
	criAtomEx3dListener_Set3dRegionHn(ListenerHandle, RegionHandle);
}

void FAtomListener::UpdateListenerTransform(const FVector &location, const FRotator &rotation)
{
	if (ListenerHandle == NULL) {
		return;
	}

	/* リスナの座標を設定 */
	CriAtomExVector pos, front, top;
	pos.x = location.X * DistanceFactor;
	pos.y = location.Y * DistanceFactor;
	pos.z = location.Z * DistanceFactor;
	criAtomEx3dListener_SetPosition(ListenerHandle, &pos);

	/* リスナの向きを設定 */
	/* クオータニオンから前方ベクトルと上方ベクトルを取得 */
	FQuat rotation_quat = rotation.Quaternion();
	FVector FrontVector = rotation_quat.GetForwardVector();
	FVector TopVector = rotation_quat.GetUpVector();
	front.x = FrontVector.X;
	front.y = FrontVector.Y;
	front.z = FrontVector.Z;
	top.x = TopVector.X;
	top.y = TopVector.Y;
	top.z = TopVector.Z;
	criAtomEx3dListener_SetOrientation(ListenerHandle, &front, &top);

	/* Listenerの速度更新 */
	FVector CurrentListenerLocation = GetListeningPoint();
	CriAtomExVector listener_pos;
	listener_pos.x = CurrentListenerLocation.X * DistanceFactor;
	listener_pos.y = CurrentListenerLocation.Y * DistanceFactor;
	listener_pos.z = CurrentListenerLocation.Z * DistanceFactor;
	CriAtomExVector listener_velocity;
	listener_velocity.x = (listener_pos.x - PreviousListenerLocation.x) / elapsed_time;
	listener_velocity.y = (listener_pos.y - PreviousListenerLocation.y) / elapsed_time;
	listener_velocity.z = (listener_pos.z - PreviousListenerLocation.z) / elapsed_time;
	criAtomEx3dListener_SetVelocity(ListenerHandle, &listener_velocity);
	PreviousListenerLocation.x = listener_pos.x;
	PreviousListenerLocation.y = listener_pos.y;
	PreviousListenerLocation.z = listener_pos.z;

	/* リージョンを更新 */
	if (Region.IsValid()) {
		SetRegion(Region.Get());
	}

	/* リスナの更新 */
	criAtomEx3dListener_Update(ListenerHandle);
}

#include "DrawDebugHelpers.h"
/* リスナの状態を更新 */
void FAtomListener::UpdateListener(int32 PlayerIndex)
{
	/* 初期化済みかどうかチェック */
	if (ListenerHandle == NULL) {
		return;
	}
	
	/* リスナ座標を自動更新するかどうかのチェック */
	if (bAutoUpdateEnabled != false) {
		/* プレーヤコントローラの取得 */
		APlayerController* PlayerController = GetPlayerController(PlayerIndex);

		/* プレーヤコントローラの有無をチェック */
		if (PlayerController != nullptr) {
			if (UHeadMountedDisplayFunctionLibrary::IsHeadMountedDisplayEnabled()) {
				/* VR Modeの場合HMDのポジションと角度を加える */
				PlayerController->GetPlayerViewPoint(ListenerLocation, ListenerRotation);

				/* HMDとセンサーカメラとの距離を考慮する */
				if (bHMDMovable == true) {
					FVector HMDLocation{};
					FRotator HMDRotation{};
					UHeadMountedDisplayFunctionLibrary::GetOrientationAndPosition(HMDRotation, HMDLocation);
					ListenerLocation += HMDLocation;
				}
			} else {
				/* プレーヤが存在する場合はプレーヤのビューポートを取得 */
				FVector FrontDir, RightDir;
				PlayerController->GetAudioListenerPosition(ListenerLocation, FrontDir, RightDir);
				ListenerRotation = FRotationMatrix::MakeFromXY(FrontDir, RightDir).Rotator();
			}

			bool IsClear  = false;
			bool IsUpdate = false;

			/* ビューターゲットの取得 */
			AActor* NewViewTarget = PlayerController->GetViewTarget();
			if (NewViewTarget != nullptr) {
				uint32 NewViewTargetID = NewViewTarget->GetUniqueID();
				if (ViewTargetID != NewViewTargetID) {
					ViewTargetID = NewViewTargetID;

					IsClear  = true;
					IsUpdate = true;
				}
			}

			/* プレーヤコントローラのIDを取得 */
			int32 NewPlayerControllerID = UGameplayStatics::GetPlayerControllerID(PlayerController);
			if (PlayerControllerID != NewPlayerControllerID) {
				PlayerControllerID = NewPlayerControllerID;

				IsClear = true;
			}

			/* PawnのIDを取得 */
			APawn* NewPawn = PlayerController->GetPawn();
			if (NewPawn != nullptr) {
				uint32 NewPawnID = NewPawn->GetUniqueID();
				if (PawnID != NewPawnID) {
					PawnID = NewPawnID;

					IsClear  = true;
					IsUpdate = true;
				}
			}

			/* フォーカスポイントのクリア */
			if (IsClear == true) {
				criAtomEx3dListener_SetDistanceFocusLevel(ListenerHandle, 0.0f);
				criAtomEx3dListener_SetDirectionFocusLevel(ListenerHandle, 0.0f);
			}
			/* フォーカスポイントの更新 */
			if (IsUpdate == true) {
				/* フォーカスポイントの更新 */
				if (NewPawn != nullptr) {
					/* コンポーネントの取得 */
					UAtomListenerFocusPoint* Component = Cast<UAtomListenerFocusPoint>(NewPawn->GetComponentByClass(UAtomListenerFocusPoint::StaticClass()));
					if (Component != nullptr) {
						Component->UpdateFocusPoint();
					}
				}
			}

		} else {
			/* 非アクティブであることを通知 */
			PlayerControllerID = INDEX_NONE;
			PawnID = 0;
		}
	}

	/* 非アクティブなリスナは処理しない */
	if (PlayerControllerID == INDEX_NONE) {
		return;
	}

	UpdateListenerTransform(ListenerLocation, ListenerRotation);
	ListenerUpdataFocusPointInfo(PlayerIndex);

	/* AudioVolumeによるバスのSnapshot適用 */
	AtomAudioVolumeHandler->ProcessAudioVolume(GetListeningPoint());

#if WITH_EDITOR
	DebugDrawListeningPoint(PlayerIndex);
#endif
}

/* 指定したプレーヤのリスナを取得 */
FAtomListener* FAtomListener::GetListener(int32 PlayerIndex)
{
	/* 指定範囲のチェック */
	if (!Listeners.IsValidIndex(PlayerIndex)) {
		return nullptr;
	}

	/* リスナを返す */
	return Listeners[PlayerIndex];
}

/* 指定したプレーヤコントローラIDに対応するリスナを取得 */
FAtomListener* FAtomListener::GetListenerByPlayerControllerID(int32 PlayerControllerID)
{
	for (FAtomListener* Listener : Listeners) {
		if ((Listener != nullptr) && (Listener->PlayerControllerID != INDEX_NONE)
			&& (Listener->PlayerControllerID == PlayerControllerID)) {
			return Listener;
		}
	}

	return nullptr;
}

/* 最も距離の近いリスナを取得 */
FAtomListener* FAtomListener::GetNearestListener(FVector Location)
{
	FAtomListener* MinListener = nullptr;
	float MinDistance = 0.0f;

	/* 最小距離の計算 */
	for (FAtomListener* Listener : Listeners) {
		/* 非アクティブなリスナは無視 */
		if ((Listener == nullptr) || (Listener->PlayerControllerID == INDEX_NONE)) {
			continue;
		}

		/* リスニングポイントからの距離を計算 */
		float Distance = FVector::DistSquared(Listener->GetListeningPoint(), Location);

		/* 最小距離のリスナを選択 */
		if ((MinListener == nullptr) || (Distance < MinDistance)) {
			MinListener = Listener;
			MinDistance = Distance;
		}
	}

	return MinListener;
}

int32 FAtomListener::GetNumListener()
{
	return Listeners.Num();
}

/* プレーヤコントローラの取得 */
APlayerController* FAtomListener::GetPlayerController(int32 PlayerIndex)
{
	/* ワールドの取得 */
	UWorld* World = GWorld;

	/* プレーヤコントローラの取得 */
	APlayerController* PlayerController = nullptr;
	if (World != nullptr) {
		PlayerController = UGameplayStatics::GetPlayerController(World, PlayerIndex);
	}

#if WITH_EDITOR
	/* 備考）PIE時は上記処理でプレーヤコントローラが取得できない可能性あり */
	if (PlayerController == nullptr) {
		/* エディタワールドの取得 */
		World = (GEditor ? (GEditor->PlayWorld) : nullptr);

		/* ローカルプレーヤの取得 */
		ULocalPlayer* LocalPlayer = (GEngine ? (GEngine->GetDebugLocalPlayer()) : nullptr);
		if (LocalPlayer != nullptr) {
			/* ローカルプレーヤのワールドを取得 */
			UWorld* PlayerWorld = LocalPlayer->GetWorld();
			if (!World) {
				World = PlayerWorld;
			}
		}

		/* ワールドが取得できた場合はプレーヤコントローラを再取得 */
		if (World != nullptr) {
			PlayerController = UGameplayStatics::GetPlayerController(World, PlayerIndex);
		}
	}
#endif

	/* プレーヤコントローラが描画対象かどうかチェック */
	if (PlayerController != nullptr) {
		/* プレーヤコントローラがローカルプレーヤかどうかチェック */
		ULocalPlayer* LocalPlayer = PlayerController->GetLocalPlayer();
		if (LocalPlayer == nullptr) {
			return nullptr;
		}

		/* ローカルプレーヤビューの描画が有効かどうかチェック */
		if ((LocalPlayer->Size.X <= 0.f) || (LocalPlayer->Size.Y <= 0.f)) {
			return nullptr;
		}
	}

	return PlayerController;
}

/* フォーカスポイントの更新 */
void FAtomListener::ListenerUpdataFocusPointInfo(int32 PlayerIndex)
{
	/* PlayerControllerの取得 */
	APlayerController* Controller = GetPlayerController(PlayerIndex);
	if (IsValid(Controller) == true) {
		/* Pawnの取得 */
		APawn* Pawn = Controller->GetPawn();
		if (IsValid(Pawn) == true) {
			/* コンポーネントの取得 */
			UAtomListenerFocusPoint* Component = Cast<UAtomListenerFocusPoint>(Pawn->GetComponentByClass(UAtomListenerFocusPoint::StaticClass()));
			if (IsValid(Component) == true) {
				return;
			}
		}
	}

	/* リスナーハンドルの確認 */
	if (ListenerHandle == NULL) {
		return;
	}

	/* ローカルコントローラーの確認 */
	if (Controller->IsLocalController() == false) {
		return;
	}

	/* ターゲットビューの取得 */
	AActor* TargetView = Controller->GetViewTarget();
	if (IsValid(TargetView) == false) {
		return;
	}

	FVector Position{};
	/* ターゲットActorがセットされているか確認 */
	if (IsValid(FocusPointInfo.TargetActor) == true) {
		/* ターゲットActorの位置を保持 */
		Position = FocusPointInfo.TargetActor->GetTransform().GetLocation();
	}
	/* ターゲットComponentがセットされているか確認 */
	else if (IsValid(FocusPointInfo.TargetComponent) == true) {
		/* ターゲットComponentの位置を保持 */
		Position = FocusPointInfo.TargetComponent->GetComponentTransform().GetLocation();
	}
	else {
		APawn* Pawn = Controller->GetPawn();
		if (IsValid(Pawn) == true) {
			Position = Pawn->GetTransform().GetLocation();
		}
	}

	Position *= DistanceFactor;
	CriAtomExVector Location = { Position.X, Position.Y, Position.Z };

	/* フォーカスレベルを設定 */
	criAtomEx3dListener_SetFocusPoint(ListenerHandle, &Location);
	criAtomEx3dListener_SetDistanceFocusLevel(ListenerHandle, FocusPointInfo.DistanceLevel);
	criAtomEx3dListener_SetDirectionFocusLevel(ListenerHandle, FocusPointInfo.DirectionLevel);
}

/* フォーカスポイント情報の取得 */
const FAtomListenerFocusPointInfo & FAtomListener::GetFocusPointInfo() const
{
	return FocusPointInfo;
}

/* フォーカスポイント情報のセット */
void FAtomListener::SetFocusPointInfo(const FAtomListenerFocusPointInfo & FocusPoint)
{
	SetFocusPointTargetActor(FocusPoint.TargetActor);
	SetFocusPointTargetComponent(FocusPoint.TargetComponent);
	SetFocusPointDistanceLevel(FocusPoint.DistanceLevel);
	SetFocusPointDirectionLevel(FocusPoint.DirectionLevel);
}

/* フォーカスポイントのターゲットActorのセット */
void FAtomListener::SetFocusPointTargetActor(AActor * TargetActor)
{
	FocusPointInfo.TargetActor = TargetActor;
}

/* フォーカスポイントのターゲットComponentのセット */
void FAtomListener::SetFocusPointTargetComponent(USceneComponent * TargetComponent)
{
	FocusPointInfo.TargetComponent = TargetComponent;
}

/* フォーカスポイントの距離比率のセット(0.0f〜1.0f) */
void FAtomListener::SetFocusPointDistanceLevel(const float & DistanceLevel)
{
	if (0.0f <= DistanceLevel && DistanceLevel <= 1.0f) {
		FocusPointInfo.DistanceLevel = DistanceLevel;
	}
}

/* フォーカスポイントの定位比率のセット(0.0f〜1.0f) */
void FAtomListener::SetFocusPointDirectionLevel(const float & DirectionLevel)
{
	if (0.0f <= DirectionLevel && DirectionLevel <= 1.0f) {
		FocusPointInfo.DirectionLevel = DirectionLevel;
	}
}

/* HMDとセンサーカメラとの距離を考慮するフラグの取得 */
bool FAtomListener::GetHMDMovable() const
{
	return bHMDMovable;
}

/* HMDとセンサーカメラとの距離を考慮するフラグのセット */
void FAtomListener::SetHMDMovable(const bool& Movable)
{
	bHMDMovable = Movable;
}

#if WITH_EDITOR
void FAtomListener::DebugDrawListeningPoint(const uint32& PlayerIndex)
{
	/* デバッグコマンドの確認 */
	static auto Flag = IConsoleManager::Get().FindTConsoleVariableDataInt(TEXT("cri.ShowListeningPoint"));
	if (Flag == nullptr || Flag->GetValueOnGameThread() == 0) {
		return;
	}

	if (IsValid(GEditor) == false) {
		return;
	}

	if (IsValid(GEditor->PlayWorld) == false) {
		return;
	}

	/* プレイヤーコントローラーの確認 */
	auto* PlayerController = GetPlayerController(PlayerIndex);
	if (IsValid(PlayerController) == false) {
		return;
	}

	/*
	 * Pawnに紐づいているビューターゲットのサイズを取得出来ないため、
	 * 球体がビューターゲットにフィットするサイズにしています。
	 */
	/* ビューターゲットの仮想の高さ */
	const float ViewTargetVirtualHalfHeight = 20.0f;
	/* ビューターゲットの仮想の半径 */
	const float ViewTargetVirtualRadius = 20.0f;

	/* フォーカスターゲット */
	float TargetHalfHeight  = 0.0f;
	float TargetRadius      = 0.0f;
	FRotator TargetRotation = FRotator::ZeroRotator;
	if (IsValid(FocusPointInfo.TargetActor) == true) {
		TargetHalfHeight = FocusPointInfo.TargetActor->GetSimpleCollisionHalfHeight();
		TargetRadius     = FocusPointInfo.TargetActor->GetSimpleCollisionRadius();
		TargetRotation   = FocusPointInfo.TargetActor->GetActorRotation();
	}
	else if (IsValid(FocusPointInfo.TargetComponent) == true) {
		TargetHalfHeight = ViewTargetVirtualHalfHeight;
		TargetRadius     = ViewTargetVirtualRadius;
		TargetRotation   = FocusPointInfo.TargetComponent->GetComponentRotation();
	}
	else {
		TargetHalfHeight = PlayerController->GetPawn()->GetSimpleCollisionHalfHeight();
		TargetRadius     = PlayerController->GetPawn()->GetSimpleCollisionRadius();
		TargetRotation   = PlayerController->GetPawn()->GetActorRotation();
	}

	/* ビューターゲット(カメラ) */
	float ViewHalfHeight  = ViewTargetVirtualHalfHeight;
	float ViewRadius      = ViewTargetVirtualRadius;
	FRotator ViewRotation = PlayerController->GetViewTarget()->GetActorRotation();

	float DistanceLevel  = criAtomEx3dListener_GetDistanceFocusLevel(ListenerHandle);
	float DirectionLevel = criAtomEx3dListener_GetDirectionFocusLevel(ListenerHandle);

	float HalfHeight  = (ViewHalfHeight * (1.0f - DistanceLevel)) + (TargetHalfHeight * DistanceLevel);
	float Radius      = (ViewRadius * (1.0f - DistanceLevel)) + (TargetRadius * DistanceLevel);
	FRotator Rotation = (ViewRotation * uint32(1.0f - DirectionLevel)) + (TargetRotation * uint32(DirectionLevel));

	FLinearColor Color = FLinearColor::Black;
	switch (Flag->GetValueOnGameThread())
	{
	case 1:
		Color = FLinearColor::Red;
		break;
	case 2:
		Color = FLinearColor::Blue;
		break;
	case 3:
		Color = FLinearColor::Green;
		break;
	case 4:
		Color = FLinearColor::Yellow;
		break;
	case 5:
		Color = FLinearColor::White;
		break;
	default:
		break;
	}

	UKismetSystemLibrary::DrawDebugCapsule(GEditor->PlayWorld, GetListeningPoint(), HalfHeight, Radius, Rotation, Color, 0.01f, 1.0f);
}
#endif

/***************************************************************************
 *      関数定義
 *      Function Definition
 ***************************************************************************/

/* --- end of file --- */
