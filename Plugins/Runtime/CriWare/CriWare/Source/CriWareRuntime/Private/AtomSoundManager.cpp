/****************************************************************************
*
* CRI Middleware SDK
*
* Copyright (c) 2018 CRI Middleware Co., Ltd.
*
* Library  : CRIWARE plugin for Unreal Engine 4
* Module   : Atom Sound Manager
* File     : AtomSoundManager.cpp
*
****************************************************************************/

/***************************************************************************
*      インクルードファイル
*      Include files
***************************************************************************/
/* モジュールヘッダ */
#include "AtomSoundManager.h"

/* CRIWAREプラグインヘッダ */
#include "AtomListener.h"
#include "AtomAreaSoundVolume.h"
#include "CriWareInitializer.h"
#include "AtomParameterComponent.h"
#include "Sound/SoundAttenuation.h"
#include "AtomStatics.h"
#include "AtomAsyncTask.h"

/* Unreal Engine 4関連ヘッダ */
#include "Engine/LocalPlayer.h"
#include "Async/Async.h"
#include "Kismet/GameplayStatics.h"

#if WITH_EDITOR
#include "Editor.h"
#include "DrawDebugHelpers.h"
#endif

/***************************************************************************
 *      定数マクロ
 *      Macro Constants
 ***************************************************************************/
#define LOCTEXT_NAMESPACE "AtomSoundManager"

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
int64 FAtomSoundManager::AtomSoundID = 0;
TMap<int64, class FAtomSoundSettingsForAnimNotify*> FAtomSoundManager::AtomSoundSettingsForAnimNotifyMap;
/* 距離係数の初期化。この時点では UCriWareInitializer::GetDistanceFactor() は正しい値を返さないの 0 初期化 */
float FAtomSoundManager::DistanceFactor = 0.0f;
FCriticalSection FAtomSoundManager::Mutex;
/***************************************************************************
 *      クラス定義
 *      Class Definition
 ***************************************************************************/
FAtomSoundSettingsForAnimNotify::FAtomSoundSettingsForAnimNotify()
{
	PlayerHn = NULL;
	SourceHn = NULL;
	CueSheetPtr.Reset();
	ParameterPtr.Reset();
	AttachToComponent.Reset();
	SoundAttenuation.Reset();

	bUseDistanceToEnableAudioVolume = false;
	bEnableAudioVolume = false;
	MinDistanceToEnableAudioVolume = 0.0f;

	bIsWorkInthreads = false;
	bIsLoadingCueSheet = true;

#if WITH_EDITOR
	SpriteComponent.Reset();
	bInitDebugShowingInfo = false;
#endif
	AtomAudioVolumeHandler = new FAtomAudioVolumeHandler();
	AtomActiveSound = new FAtomActiveSound();
}

FAtomSoundSettingsForAnimNotify::~FAtomSoundSettingsForAnimNotify()
{
#if WITH_EDITOR
	if (SpriteComponent.IsValid()) {
		if (SpriteComponent->GetFName().IsValid()) {
			if (SpriteComponent->GetFName().ToString().Contains("BillboardComponent")
				&& !SpriteComponent->IsBeingDestroyed()) {
				SpriteComponent->DestroyComponent();
			}
			SpriteComponent.Reset();
		}
	}
	bInitDebugShowingInfo = false;
#endif

	delete AtomAudioVolumeHandler;
	delete AtomActiveSound;
}

FAtomSoundSettingsForAnimNotify* FAtomSoundSettingsForAnimNotify::Create()
{
	/* オブジェクトの作成 */
	FAtomSoundSettingsForAnimNotify* AtomSoundSetting = new FAtomSoundSettingsForAnimNotify();
	if (!AtomSoundSetting) {
		return nullptr;
	}

	/* ソースの作成 */
	AtomSoundSetting->SourceHn = criAtomEx3dSource_Create(NULL, NULL, 0);
	if (AtomSoundSetting->SourceHn == NULL) {
		AtomSoundSetting->Destroy();
		return nullptr;
	}

	/* プレーヤの作成 */
	/* 備考）ユーザの操作対象ではないので、再生時刻は取得しない。 */
	CriAtomExPlayerConfig PlayerConfig;
	criAtomExPlayer_SetDefaultConfig(&PlayerConfig);
	PlayerConfig.updates_time = CRI_FALSE;
	AtomSoundSetting->PlayerHn = criAtomExPlayer_Create(&PlayerConfig, NULL, 0);
	if (AtomSoundSetting->PlayerHn == NULL) {
		AtomSoundSetting->Destroy();
		return nullptr;
	}

	/* 7.1ch環境向けにパンスピーカータイプを設定 */
	criAtomExPlayer_SetPanSpeakerType(AtomSoundSetting->PlayerHn, CRIATOMEX_PAN_SPEAKER_TYPE_6CH);

	return AtomSoundSetting;
}

void FAtomSoundSettingsForAnimNotify::Destroy()
{
	/* ソースとプレーヤを破棄 */
	/* 注意）GC処理の順序によっては、ライブラリ終了処理後にここに来る可能性がある。 */
	if (criAtomEx_IsInitialized() != CRI_FALSE) {
		if (PlayerHn != NULL) {
			criAtomExPlayer_Destroy(PlayerHn);
		}
		if (SourceHn != NULL) {
			criAtomEx3dSource_Destroy(SourceHn);
		}
	}

	/* オブジェクトの破棄 */
	delete this;
}

float FAtomSoundSettingsForAnimNotify::GetTime()
{
	if (PlayerHn == NULL) {
		return 0.0f;
	}

	CriSint64 TimeMS = criAtomExPlayer_GetTime(PlayerHn);
	if (TimeMS < 0) {
		return -1.0f;
	} else {
		return ((float)TimeMS * 0.001f);
	}
}

EAtomComponentStatus FAtomSoundSettingsForAnimNotify::GetStatus()
{
	if (PlayerHn == NULL) {
		return EAtomComponentStatus::Error;
	}

	/* AtomExプレーヤのステータスを取得 */
	CriAtomExPlayerStatus PlayerStatus = criAtomExPlayer_GetStatus(PlayerHn);

	/* コンポーネントのステータスに変換 */
	EAtomComponentStatus ComponentStatus;
	switch (PlayerStatus) {
	case CRIATOMEXPLAYER_STATUS_STOP:
		ComponentStatus = EAtomComponentStatus::Stop;
		break;

	case CRIATOMEXPLAYER_STATUS_PREP:
		ComponentStatus = EAtomComponentStatus::Prep;
		break;

	case CRIATOMEXPLAYER_STATUS_PLAYING:
		ComponentStatus = EAtomComponentStatus::Playing;
		break;

	case CRIATOMEXPLAYER_STATUS_PLAYEND:
		ComponentStatus = EAtomComponentStatus::PlayEnd;
		break;

	default:
		ComponentStatus = EAtomComponentStatus::Error;
		break;
	}

	return ComponentStatus;
}

void ApplyAttenuation(FAtomSoundSettingsForAnimNotify* AtomSoundSetting)
{
	if (!AtomSoundSetting) {
		return;
	}
	USceneComponent* AttachToComponent = AtomSoundSetting->AttachToComponent.Get();
	if (!AttachToComponent
		||!AttachToComponent->GetFName().IsValid()
		|| AttachToComponent->GetFName().ToString().Contains("None")
		|| AttachToComponent->GetFName().ToString().Contains("Property")) {
		return;
	}

	if (!AtomSoundSetting->DefaultListener) {
		return;
	}

	if (AtomSoundSetting->SoundAttenuation.IsValid()) {
		float tmpVolume = AtomSoundSetting->Volume;

		AtomSoundSetting->Filter_Frequency = MAX_FILTER_FREQUENCY;

		AActor* Actor = AtomSoundSetting->AttachToComponent->GetOwner();
		uint32 UniqueID = AtomSoundSetting->AttachToComponent->GetUniqueID();
		FName Name = AtomSoundSetting->AttachToComponent->GetFName();
		UWorld* World = AtomSoundSetting->AttachToComponent->GetWorld();

		AtomSoundSetting->AtomActiveSound->SetAtomComponent(nullptr, 0, Name);
		AtomSoundSetting->AtomActiveSound->SetWorld(World);

		/* 距離減衰の計算 */
		/* 備考）UE4.10相当の処理を移植。 */
		const auto* Settings = &(AtomSoundSetting->SoundAttenuation->Attenuation);
		FVector ListenerLocation = AtomSoundSetting->DefaultListener->GetListeningPoint();

		const FRotator SourceRotation = AtomSoundSetting->AttachToComponent->GetComponentRotation();
		const FVector SourcePosition = AtomSoundSetting->AttachToComponent->GetComponentLocation();

		/* ボリュームの初期値を計算 */
		FTransform SoundTransform = FTransform(SourceRotation, SourcePosition);

		if (Settings->bAttenuate) {
			switch (Settings->AttenuationShape) {
			case EAttenuationShape::Sphere:
			{
				const float Distance = FMath::Max(
					FVector::Dist(SoundTransform.GetTranslation(), ListenerLocation)
					- Settings->AttenuationShapeExtents.X, 0.f);
				tmpVolume *= Settings->AttenuationEval(Distance, Settings->FalloffDistance, 1.0f);
				break;
			}

			case EAttenuationShape::Box:
				tmpVolume *= Settings->AttenuationEvalBox(SoundTransform, ListenerLocation, 1.0f);
				break;

			case EAttenuationShape::Capsule:
				tmpVolume *= Settings->AttenuationEvalCapsule(SoundTransform, ListenerLocation, 1.0f);
				break;

			case EAttenuationShape::Cone:
				tmpVolume *= Settings->AttenuationEvalCone(SoundTransform, ListenerLocation, 1.0f);
				break;

			default:
				check(false);
			}
		}

		if (Settings->bAttenuateWithLPF) {
			const float Distance = FMath::Max(
				FVector::Dist(SoundTransform.GetTranslation(), ListenerLocation)
				- Settings->LPFRadiusMin, 0.f);
			float ramp_value = Settings->AttenuationEval(Distance, Settings->LPFRadiusMax, 1.0f);
			AtomSoundSetting->Filter_Frequency = FMath::Lerp(Settings->LPFFrequencyAtMin, Settings->LPFFrequencyAtMax, ramp_value);
		}

		// Only do occlusion traces if the sound is audible
		if (Settings->bEnableOcclusion && tmpVolume > 0.0f /*&& !AudioDevice->IsAudioDeviceMuted()*/) {
			AtomSoundSetting->AtomActiveSound->CheckOcclusion(ListenerLocation, AtomSoundSetting->AttachToComponent->GetComponentLocation(), Settings);
			float tmp_FilterFrequency = AtomSoundSetting->AtomActiveSound->CurrentOcclusionFilterFrequency.GetValue();
			AtomSoundSetting->Filter_Frequency = AtomSoundSetting->Filter_Frequency < tmp_FilterFrequency ? AtomSoundSetting->Filter_Frequency : tmp_FilterFrequency;
			// Apply the volume attenuation due to occlusion (using the interpolating dynamic parameter)

			tmpVolume *= AtomSoundSetting->AtomActiveSound->CurrentOcclusionVolumeAttenuation.GetValue();
		}

		/* ボリュームの更新 */
		criAtomExPlayer_SetVolume(AtomSoundSetting->PlayerHn, tmpVolume);

		/* LPFの適用 */
		criAtomExPlayer_SetBandpassFilterParameters(AtomSoundSetting->PlayerHn, 0.f, AtomSoundSetting->Filter_Frequency / MAX_FILTER_FREQUENCY);

		/* ステータスの取得 */
		CriAtomExPlayerStatus Status = criAtomExPlayer_GetStatus(AtomSoundSetting->PlayerHn);
		if ((Status == CRIATOMEXPLAYER_STATUS_PREP) || (Status == CRIATOMEXPLAYER_STATUS_PLAYING)) {
			/* 必要な場合はパラメータを更新 */
			criAtomExPlayer_UpdateAllAsync(AtomSoundSetting->PlayerHn);
		}
	}
}

void FAtomSoundManager::TickComponentForAnimNotify()
{
	for (auto settings = FAtomSoundManager::AtomSoundSettingsForAnimNotifyMap.CreateIterator(); settings; ++settings) {
		FAtomSoundSettingsForAnimNotify* atom_sound_settings = settings.Value();

		CriAtomExPlayerStatus Status = CRIATOMEXPLAYER_STATUS_STOP;

		if (atom_sound_settings->CueSheetPtr->IsLoaded() == false) {
			continue;
		} else if (atom_sound_settings->bIsLoadingCueSheet == true) {
			bool isPlaying = false;
			if (atom_sound_settings->PlayerHn != NULL) {
				Status =  criAtomExPlayer_GetStatus(atom_sound_settings->PlayerHn);
				isPlaying = (Status == CRIATOMEXPLAYER_STATUS_PLAYING || Status == CRIATOMEXPLAYER_STATUS_PREP);
			}
			if (!isPlaying) {
				/* 再生処理を行った際に、CueSheetの読み込みが完了していないという理由でサウンドが再生されていなかった場合に再生処理を行う */
				PlaySound(atom_sound_settings, atom_sound_settings->CueSheetPtr.Get(), atom_sound_settings->Sound.Get());
			}
			atom_sound_settings->bIsLoadingCueSheet = false;
		}

		/* プレーヤのステータスをチェック */
		Status = criAtomExPlayer_GetStatus(atom_sound_settings->PlayerHn);
		if ((Status == CRIATOMEXPLAYER_STATUS_PREP) || (Status == CRIATOMEXPLAYER_STATUS_PLAYING)) {
			if (atom_sound_settings->bFollow) {
				/* Followがtrueの時は毎フレームアタッチされているコンポーネントの座標を参照して座標の追従を行う */
				FVector Location;
				FRotator Rotation;
				if (atom_sound_settings->AttachToComponent != nullptr) {
					if (atom_sound_settings->AttachPointName != NAME_None) {
						Location = atom_sound_settings->AttachToComponent->GetSocketTransform(atom_sound_settings->AttachPointName).GetLocation();
					} else {
						Location = atom_sound_settings->AttachToComponent->GetComponentTransform().GetLocation();
					}
					Rotation = atom_sound_settings->AttachToComponent->GetComponentRotation();
				}
				else {
					goto DELETE_RESOURCE;
				}
				atom_sound_settings->Location = Location;
				atom_sound_settings->Rotation = Rotation;

				CriAtomExVector pos;
				pos.x = Location.X * atom_sound_settings->DistanceFactor;
				pos.y = Location.Y * atom_sound_settings->DistanceFactor;
				pos.z = Location.Z * atom_sound_settings->DistanceFactor;
				criAtomEx3dSource_SetPosition(atom_sound_settings->SourceHn, &pos);

				/* 音源の向きを更新 */
				FVector FrontVector = atom_sound_settings->Rotation.Vector();
				CriAtomExVector front;
				front.x = FrontVector.X;
				front.y = FrontVector.Y;
				front.z = FrontVector.Z;
				criAtomEx3dSource_SetConeOrientation(atom_sound_settings->SourceHn, &front);

				/* 更新の適用 */
				criAtomEx3dSource_Update(atom_sound_settings->SourceHn);
			}

			/* AudioVolume処理 */
			FAtomAudioVolumeHandler* atom_audio_volume_hn = atom_sound_settings->AtomAudioVolumeHandler;
			atom_audio_volume_hn->UpdateInPreprocess(atom_sound_settings);
			bool bEnableAudioVolume = atom_sound_settings->bEnableAudioVolume;
			bool bUseDistanceToEnableAudioVolume = atom_sound_settings->bUseDistanceToEnableAudioVolume;
			float MinDistanceToEnableAudioVolume = atom_sound_settings->MinDistanceToEnableAudioVolume;
//			auto AsyncTask = new FAutoDeleteAsyncTask<FAtomAsyncTask>([atom_sound_settings, atom_audio_volume_hn, bEnableAudioVolume, bUseDistanceToEnableAudioVolume, DistanceForEnablingAudioVolume]() {
//				FScopeLock Lock(&Mutex);
				if (atom_sound_settings->bIsWorkInthreads) {
					return;
				}
				atom_sound_settings->bIsWorkInthreads = true;
				atom_audio_volume_hn->ProcessAudioVolume(bEnableAudioVolume, bUseDistanceToEnableAudioVolume, MinDistanceToEnableAudioVolume);
				atom_sound_settings->bIsWorkInthreads = false; 
//			});
			if (bEnableAudioVolume && !atom_sound_settings->bIsWorkInthreads) {
//				FScopeLock Lock(&Mutex);
				TMap<FString, float> result_map_bus = atom_audio_volume_hn->GetBusSendLevelMap();
				TMap<FString, float> result_map_aisac = atom_audio_volume_hn->GetAisacControlValueMap();
				for (auto It = result_map_bus.CreateConstIterator(); It; ++It) {
					criAtomExPlayer_SetBusSendLevelByName(atom_sound_settings->PlayerHn, TCHAR_TO_UTF8(*It.Key()), 0);
					criAtomExPlayer_SetBusSendLevelOffsetByName(atom_sound_settings->PlayerHn, TCHAR_TO_UTF8(*It.Key()), It.Value());
				}
				for (auto It = result_map_aisac.CreateConstIterator(); It; ++It) {
					criAtomExPlayer_SetAisacControlByName(atom_sound_settings->PlayerHn, TCHAR_TO_UTF8(*It.Key()), It.Value());
				}
				if (result_map_bus.Num() > 0 || result_map_aisac.Num() > 0) {
					criAtomExPlayer_UpdateAllAsync(atom_sound_settings->PlayerHn);
				}
//				AsyncTask->StartBackgroundTask();
			}
			
			ApplyAttenuation(atom_sound_settings);

#if WITH_EDITOR
			if (atom_sound_settings->bFollow && atom_sound_settings->SpriteComponent.IsValid()) {
				if (atom_sound_settings->SpriteComponent->GetFName().IsValid()) {
					if (atom_sound_settings->SpriteComponent->GetFName().ToString().Contains("BillboardComponent")
						&& !atom_sound_settings->SpriteComponent->IsBeingDestroyed()) {
						atom_sound_settings->SpriteComponent->SetWorldLocation(atom_sound_settings->Location);
					}
				}
			}

			/* 距離減衰領域の表示 */
			if (GEditor && (GEditor->PlayWorld || GIsPlayInEditorWorld)) {
				/* コンソール変数 "cri.ShowAtomSoundActor" が 0 より大きいときのみ表示する。 */
				static const auto bShowSoundLoation = IConsoleManager::Get().FindTConsoleVariableDataInt(TEXT("cri.ShowSoundLocation"));
				bool bIsShorSoundLocation = bShowSoundLoation->GetValueOnGameThread() > 0;
				if (bIsShorSoundLocation) {
					atom_sound_settings->DrawDebugShape();	
				} 
				if (atom_sound_settings->SpriteComponent.IsValid()) {
					atom_sound_settings->SpriteComponent->SetHiddenInGame(!bIsShorSoundLocation, true);
				}
			}
#endif //WITH_EDITOR
			continue;
		}

	DELETE_RESOURCE:

		/* atom_sound_settings を破棄しても良いか確認。
		 * AtomActiveSound の Occulusion 処理を UE4 オーディオスレッドで非同期処理中かもしれない */
		if (atom_sound_settings->AtomActiveSound->bAsyncOcclusionPending || atom_sound_settings->bIsWorkInthreads) {
			continue;
		}
		/* 以下、atom_sound_settings と関連リソースの破棄処理 */

		/* キューシートのリリース */
		USoundAtomCueSheet* CueSheet = atom_sound_settings->CueSheetPtr.Get();
		if (CueSheet != nullptr) {
			CueSheet->Release();
			CueSheet = nullptr;
		}

		/* キューシートの参照を破棄 */
		atom_sound_settings->CueSheetPtr.Reset();

		/* SoundObjectとの関連付けを解除 */
		UAtomParameterComponent* AtomParameter = atom_sound_settings->ParameterPtr.Get();
		if (AtomParameter != nullptr) {
			UAtomSoundObject* SoundObject = AtomParameter->SoundObject;
			if (SoundObject != nullptr) {
				criAtomExSoundObject_DeletePlayer(SoundObject->GetSoundObjectHandle(), atom_sound_settings->PlayerHn);
			}
		}

		/* AtomParameterの参照を破棄 */
		atom_sound_settings->ParameterPtr.Reset();

		atom_sound_settings->AttachToComponent.Reset();
		atom_sound_settings->SoundAttenuation.Reset();

#if WITH_EDITOR
		atom_sound_settings->FinalizeDebugShowInfo();
#endif

		/* サウンドが停止した要素を削除 */
		int64 atom_sound_settings_id = atom_sound_settings->AtomSoundID;
		FAtomSoundManager::AtomSoundSettingsForAnimNotifyMap.Remove(atom_sound_settings_id);

		/* リソースの破棄 */
		atom_sound_settings->Destroy();
		atom_sound_settings = nullptr;
	}

	/* Removeされた要素のためMapをShrinkする */
	FAtomSoundManager::AtomSoundSettingsForAnimNotifyMap.Shrink();
}

int32 FAtomSoundManager::PlaySoundAnimNotify(float StartTime, USceneComponent* AttachToComponent, FName AttachPointName, USoundAtomCue* Sound, bool bEnabled3DPositioning, float Volume, float Pitch, USoundAttenuation* SoundAttenuation, bool follow)
{
	/* サウンドが指定されていない場合は何もしない */
	if (Sound == nullptr) {
		return -1;
	}

	// Attachされたボーンの座標値を取得
	FVector SoundSourceLocation = FVector::ZeroVector;
	if (AttachPointName != NAME_None) {
		SoundSourceLocation = AttachToComponent->GetSocketTransform(AttachPointName).GetLocation();
	} else {
		SoundSourceLocation = AttachToComponent->GetComponentTransform().GetLocation();
	}

	/* デフォルトのリスナを取得 */
	FAtomListener* DefaultListener = FAtomListener::GetNearestListener(SoundSourceLocation);
	if (DefaultListener == NULL) {
		DefaultListener = FAtomListener::GetListener();
		if (DefaultListener == NULL) {
			/* リスナが存在しない場合は何もしない */
			return -1;
		}
	}

	const FSoundAttenuationSettings * AttenuationCore = nullptr;
	if (SoundAttenuation) {
		AttenuationCore = &(SoundAttenuation->Attenuation);
	}

	if (UAtomStatics::ShouldCullSoundPlayback(Sound, SoundSourceLocation, AttenuationCore, true)) {
		return -1;
	}

	/* ここで音声再生を行うのは最後に追加された要素 */
	FAtomSoundSettingsForAnimNotify* AtomSoundSetting = FAtomSoundSettingsForAnimNotify::Create();
	if (!AtomSoundSetting) {
		return -1;
	}

	/* 距離係数の取得 */
	if (FAtomSoundManager::DistanceFactor <= 0.0) {
		/* 距離係数の実質的な初期化 */
		FAtomSoundManager::SetDistanceFactor(UCriWareInitializer::GetDistanceFactor());
	}
	/* 注意）オーディオスレッドからの取得はスレッドセーフではないので、先に変数に保存しておく。 */
	AtomSoundSetting->DistanceFactor = FAtomSoundManager::DistanceFactor;

	/* ローカライズ不具合への対策 */
	USoundAtomCueSheet* CueSheet = USoundAtomCueSheet::GetLocalizedAtomCueSheet(Sound->CueSheet);

	/* 再生中にキューシートが破棄されないよう対策 */
	if (CueSheet != nullptr) {
		CueSheet->AddRef();
	}
	AtomSoundSetting->CueSheetPtr = CueSheet;

	/* 親のActorまで辿って AtomParameter を参照する */
	UAtomParameterComponent* AtomParameter = nullptr;
	if (Sound->bApplyAtomParameter != false) {
		/* パラメータの検索 */
		AActor *TestActor = AttachToComponent->GetOwner();
		while (TestActor) {
			/* Actorにパラメータが設定されているかどうかチェック */
			AtomParameter = Cast<UAtomParameterComponent>(
				TestActor->GetComponentByClass(UAtomParameterComponent::StaticClass()));
			if (AtomParameter != nullptr) {
				/* 最下位(AttachToComponent)からボトムアップで、一番最初に見つかった AtomParameter を使う。より上位のものは無視  */
				break;
			}

			TestActor = TestActor->GetOwner();
		}
	}

	/* サウンドオブジェクトの適用 */
	if (AtomParameter != nullptr) {
		UAtomSoundObject* SoundObject = AtomParameter->SoundObject;
		if (SoundObject != nullptr) {
			criAtomExSoundObject_AddPlayer(SoundObject->GetSoundObjectHandle(), AtomSoundSetting->PlayerHn);
			AtomSoundSetting->ParameterPtr = AtomParameter;
		}
	}

	AtomSoundSetting->Sound = Sound;
	AtomSoundSetting->CueName = TCHAR_TO_UTF8(*Sound->CueName);
	AtomSoundSetting->SoundConcurrencyName = FString("None");

	AtomSoundSetting->Volume = Volume;
	AtomSoundSetting->Pitch = Pitch;

	USceneComponent* scene_component = AttachToComponent;
	AtomSoundSetting->AttachToComponent = scene_component;

	AtomSoundSetting->AttachPointName = AttachPointName;
	AtomSoundSetting->bFollow = follow;
	AtomSoundSetting->DefaultListener = DefaultListener;

	USoundAttenuation* sound_attenuation = SoundAttenuation;
	AtomSoundSetting->SoundAttenuation = sound_attenuation;

	/* 再生パラメータの設定*/
	criAtomExPlayer_SetVolume(AtomSoundSetting->PlayerHn, AtomSoundSetting->Volume);
	criAtomExPlayer_SetStartTime(AtomSoundSetting->PlayerHn, (CriSint32)(StartTime * 1000.0f));

	float Cent = 1200.0f * FMath::Log2(AtomSoundSetting->Pitch);
	criAtomExPlayer_SetPitch(AtomSoundSetting->PlayerHn, Cent);

	AtomSoundSetting->bUseAreaSoundVolume = Sound->bUseAreaSoundVolume;

	/* 音源の座標と向きを取得 */
	FVector Location;
	FRotator Rotation;
	if (AttachToComponent != nullptr) {
		if (AttachPointName != NAME_None) {
			Location = AttachToComponent->GetSocketTransform(AttachPointName).GetLocation();
		}
		else {
			Location = AttachToComponent->GetComponentTransform().GetLocation();
		}
		Rotation = AttachToComponent->GetComponentRotation();
	}
	else {
		Location = FVector::ZeroVector;
		Rotation = FRotator::ZeroRotator;
	}
	AtomSoundSetting->Location = Location;
	AtomSoundSetting->Rotation = Rotation;

	/* ソース、リスナをプレーヤに関連付け */
	criAtomExPlayer_Set3dListenerHn(AtomSoundSetting->PlayerHn, DefaultListener->GetListenerHandle());
	criAtomExPlayer_Set3dSourceHn(AtomSoundSetting->PlayerHn, AtomSoundSetting->SourceHn);

	/* リージョンの適用 */
	{
		UAtom3dRegion *Region = (IsValid(AtomParameter) && IsValid(AtomParameter->Region)) ? AtomParameter->Region : AtomSoundSetting->Sound->Region;
		if (IsValid(Region)) {
			CriAtomEx3dRegionHn RegionHandle = Region->GetHandle()->GetRawHandle();
			if (RegionHandle != NULL) {
				criAtomEx3dSource_Set3dRegionHn(AtomSoundSetting->SourceHn, RegionHandle);
			}
		}
	}

	/* 音源の位置を更新 */
	AtomSoundSetting->UpdateTransform();

	/* 2D再生かどうかチェック */
	if (bEnabled3DPositioning == false) {
		criAtomExPlayer_SetPanType(AtomSoundSetting->PlayerHn, CRIATOMEX_PAN_TYPE_PAN3D);
	}

	AtomSoundSetting->AtomAudioVolumeHandler->UpdateInPreprocess(AtomSoundSetting);
	AtomSoundSetting->bEnableAudioVolume = Sound->bEnableAudioVolume;
	AtomSoundSetting->bUseDistanceToEnableAudioVolume = Sound->bUseDistanceToEnableAudioVolume;
	AtomSoundSetting->MinDistanceToEnableAudioVolume = Sound->MinDistanceToEnableAudioVolume;
	FAtomAudioVolumeHandler* atom_audio_volume_hn = AtomSoundSetting->AtomAudioVolumeHandler;
	bool bEnableAudioVolume = AtomSoundSetting->bEnableAudioVolume;
	bool bUseDistanceToEnableAudioVolume = AtomSoundSetting->bUseDistanceToEnableAudioVolume;
	float MinDistanceToEnableAudioVolume = AtomSoundSetting->MinDistanceToEnableAudioVolume;
	AtomSoundSetting->bIsWorkInthreads = true;

	ApplyAttenuation(AtomSoundSetting);

	atom_audio_volume_hn->FirstProcessAudioVolume(bEnableAudioVolume, bUseDistanceToEnableAudioVolume, MinDistanceToEnableAudioVolume);
	TMap<FString, float> result_map_bus = atom_audio_volume_hn->GetBusSendLevelMap();
	TMap<FString, float> result_map_aisac = atom_audio_volume_hn->GetAisacControlValueMap();
	for (auto It = result_map_bus.CreateConstIterator(); It; ++It) {
		criAtomExPlayer_SetBusSendLevelByName(AtomSoundSetting->PlayerHn, TCHAR_TO_UTF8(*It.Key()), 0);
		criAtomExPlayer_SetBusSendLevelOffsetByName(AtomSoundSetting->PlayerHn, TCHAR_TO_UTF8(*It.Key()), It.Value());
	}
	for (auto It = result_map_aisac.CreateConstIterator(); It; ++It) {
		criAtomExPlayer_SetAisacControlByName(AtomSoundSetting->PlayerHn, TCHAR_TO_UTF8(*It.Key()), It.Value());
	}
	if (result_map_bus.Num() > 0 || result_map_aisac.Num() > 0) {
		criAtomExPlayer_UpdateAllAsync(AtomSoundSetting->PlayerHn);
	}

	if (CueSheet) {
		if (CueSheet->IsLoaded()) {
			PlaySound(AtomSoundSetting, CueSheet, Sound);
		} else {
			CueSheet->AsyncLoadCueSheet();
			AtomSoundSetting->bIsLoadingCueSheet = true;
		}
	}

	/* Mapに追加 */
	AtomSoundSetting->AtomSoundID = ++FAtomSoundManager::AtomSoundID;
	FAtomSoundManager::AtomSoundSettingsForAnimNotifyMap.Add(AtomSoundSetting->AtomSoundID, AtomSoundSetting);

	/* Mapに追加されたIDを返す(AtomComponentを生成しない形での再生のため外側でIDの管理を行う) */
	return AtomSoundSetting->AtomSoundID;
}

void FAtomSoundManager::PlaySound(FAtomSoundSettingsForAnimNotify* AtomSoundSetting,
									USoundAtomCueSheet* CueSheet, USoundAtomCue* Sound)
{
		if (AtomSoundSetting == nullptr ||
			AtomSoundSetting->PlayerHn == nullptr ||
			Sound == nullptr) {
			return;
		}

		/* キュー名の設定 */
		CriAtomExAcbHn AcbHn = ((CueSheet != nullptr) ? CueSheet->GetAcbHn() : nullptr);
		criAtomExPlayer_SetCueName(AtomSoundSetting->PlayerHn, AcbHn, TCHAR_TO_UTF8(*AtomSoundSetting->CueName));

		/* 再生の開始 */
		criAtomExPlayer_StartAsync(AtomSoundSetting->PlayerHn);
		AtomSoundSetting->bIsWorkInthreads = false;

#if WITH_EDITOR
		AtomSoundSetting->InitDebugShowingInfo(Sound);
#endif // WITH_EDITOR
}


void FAtomSoundManager::SetDistanceFactor(float ArgDistanceFactor)
{
	FAtomSoundManager::DistanceFactor = ArgDistanceFactor;
}

void FAtomSoundSettingsForAnimNotify::UpdateTransform()
{
	if (bUseAreaSoundVolume) {
		AAtomAreaSoundVolume* atom_sound_shape_volume = AAtomAreaSoundVolume::GetSoundShapeSettings(Location);
		if (atom_sound_shape_volume) {
			const FVector ListenerPosition = DefaultListener->GetListeningPoint();
			FVector NearestPosition;
			float distance = atom_sound_shape_volume->GetBrushComponent()->GetClosestPointOnCollision(ListenerPosition, NearestPosition);
			if (distance > 0) {
				/* AreaSoundVolume外淵でListenerに最も近いポイントをSourcePositionにする */
				Location = NearestPosition;
			}
			else {
				/* AreaSoundVolume内に入っているときはSourcePositionをListenerPositionの位置にする */
				Location = ListenerPosition;
			}
		}
	}

	/* 音源の位置を更新 */
	CriAtomExVector pos;
	pos.x = Location.X * DistanceFactor;
	pos.y = Location.Y * DistanceFactor;
	pos.z = Location.Z * DistanceFactor;
	criAtomEx3dSource_SetPosition(SourceHn, &pos);

	/* 音源の向きを更新 */
	FVector FrontVector = Rotation.Vector();
	CriAtomExVector front;
	front.x = FrontVector.X;
	front.y = FrontVector.Y;
	front.z = FrontVector.Z;
	criAtomEx3dSource_SetConeOrientation(SourceHn, &front);

	/* 更新の適用 */
	criAtomEx3dSource_Update(SourceHn);

	/* リスナの差し替え */
	FAtomListener* NewListener = FAtomListener::GetNearestListener(Location);
	if (NewListener != nullptr) {
		criAtomExPlayer_Set3dListenerHn(PlayerHn, NewListener->GetListenerHandle());
		criAtomExPlayer_UpdateAllAsync(PlayerHn);
	}
};

#if WITH_EDITOR
void FAtomSoundSettingsForAnimNotify::InitDebugShowingInfo(USoundAtomCue* InSound)
{
	FVector attach_to_component_location;

	bPlaySoundInPIE = false;
	bPlaySoundInEditor = false;

	if (bInitDebugShowingInfo == true) {
		return;
	}

	if (GIsEditor) {
		/* Editor状態で再生されたという情報を保存 */
		bPlaySoundInEditor = true;
	}

	if (GEditor && (GEditor->PlayWorld || GIsPlayInEditorWorld)) {
		/* PIE状態で再生されたという情報を保存 */
		bPlaySoundInPIE = true;
	}

	if (InSound) {
		auto MaxAttenuationDistance = InSound->GetMaxAttenuationDistance();
		max_attenuation_distance = MaxAttenuationDistance / DistanceFactor;

		auto MinAttenuationDistance = InSound->GetMinAttenuationDistance();
		min_attenuation_distance = MinAttenuationDistance / DistanceFactor;

		/* デバッグ表示のスフィアカラーを設定 */
		AudioOuterRadiusColor = InSound->AudioOuterRadiusColor;
		AudioInnerRadiusColor = InSound->AudioInnerRadiusColor;
	} else {
		max_attenuation_distance = 0.0f;
		min_attenuation_distance = 0.0f;
		AudioOuterRadiusColor = FColor(255, 0, 0);
		AudioInnerRadiusColor = FColor(155, 0, 0);
	}

	static const auto bShowSoundLoation = IConsoleManager::Get().FindTConsoleVariableDataInt(TEXT("cri.ShowSoundLocation"));
	if (bShowSoundLoation->GetValueOnGameThread() > 0) {
		/* エディターのパースペクティブビューに、スピーカーのアイコンを表示
		 * インゲームでも、デバッグ表示向けにSpriteComponentを初期化しておく */
		/* SceneComponent.cpp USceneComponent::OnRegisterを参考 */
		if (!SpriteComponent.IsValid()) {
			if (AttachToComponent.IsValid()) {
				if (AttachToComponent->GetOwner()) {
					SpriteComponent = NewObject<UBillboardComponent>(AttachToComponent->GetOwner());
				} else {
					SpriteComponent = NewObject<UBillboardComponent>();
				}

				// Attachされたボーンの座標値を取得
				if (AttachPointName != NAME_None) {
					attach_to_component_location = AttachToComponent->GetSocketTransform(AttachPointName).GetLocation();
				} else {
					attach_to_component_location = AttachToComponent->GetComponentTransform().GetLocation();
				}
			}
			// 現在は AttachToComponent が null のときは考えてない。
		}

		if (SpriteComponent.IsValid()) {
			SpriteComponent->SetWorldLocation(attach_to_component_location);
			SpriteComponent->SetRelativeScale3D(FVector(0.5f, 0.5f, 0.5f));
			SpriteComponent->Mobility = EComponentMobility::Movable;
			SpriteComponent->AlwaysLoadOnClient = false;
			SpriteComponent->AlwaysLoadOnServer = false;
			SpriteComponent->SpriteInfo.Category = TEXT("Misc");
			SpriteComponent->SpriteInfo.DisplayName = NSLOCTEXT("SpriteCategory", "Misc", "Misc");
			SpriteComponent->bIsScreenSizeScaled = true;
			SpriteComponent->bUseInEditorScaling = true;
			if (SpriteComponent->GetOwner()) {
				SpriteComponent->GetOwner()->SetActorHiddenInGame(false);
			}
			SpriteComponent->SetHiddenInGame(false, true);
			SpriteComponent->RegisterComponent();

			SpriteComponent->SetSprite(LoadObject<UTexture2D>(NULL, TEXT("/Engine/EditorResources/AudioIcons/S_AudioComponent_AutoActivate.S_AudioComponent_AutoActivate")));
			bInitDebugShowingInfo = true;
		}
	}
}

void FAtomSoundSettingsForAnimNotify::FinalizeDebugShowInfo()
{
	if (bInitDebugShowingInfo == false) {
		return;
	}

	if (((GEditor && (GEditor->PlayWorld || GIsPlayInEditorWorld)) && bPlaySoundInPIE && bPlaySoundInEditor)
		|| (bPlaySoundInEditor && !bPlaySoundInPIE)) {
		if (SpriteComponent.IsValid()) {
			if (SpriteComponent->GetFName().IsValid()) {
				if (SpriteComponent->GetFName().ToString().Contains("BillboardComponent")
					&& !SpriteComponent->IsBeingDestroyed()) {
					SpriteComponent->DestroyComponent();
				}
				SpriteComponent.Reset();
			}
		}
		bInitDebugShowingInfo = false;
	}
}

void FAtomSoundSettingsForAnimNotify::DrawDebugShape()
{
	if (bInitDebugShowingInfo == false) {
		return;
	}

	UWorld* World = (GEditor ? (GEditor->PlayWorld) : nullptr);
	class ULocalPlayer* LocalPlayer = (GEngine ? (GEngine->GetDebugLocalPlayer()) : nullptr);
	if (LocalPlayer) {
		UWorld* PlayerWorld = LocalPlayer->GetWorld();
		if (!World) {
			World = PlayerWorld;
		}
	}
	if (!World) {
		return;
	}

	if (!SpriteComponent.IsValid()) {
		return;
	}

	if (!SpriteComponent->GetFName().IsValid()) {
		return;
	}

	if (!SpriteComponent->GetFName().ToString().Contains("BillboardComponent")) {
		return;
	}

	const FRotator SourceRot = SpriteComponent->GetComponentRotation();
	const FVector SourceVec = SpriteComponent->GetComponentLocation();
	const FTransform SourceTrsf = FTransform(SourceRot, SourceVec);

	DrawDebugSphere(World, SourceTrsf.GetTranslation(), max_attenuation_distance, 10, AudioOuterRadiusColor);
	DrawDebugSphere(World, SourceTrsf.GetTranslation(), min_attenuation_distance, 10, AudioInnerRadiusColor);
}
#endif //WITH_EDITOR

/***************************************************************************
 *      関数定義
 *      Function Definition
 ***************************************************************************/
#undef LOCTEXT_NAMESPACE
