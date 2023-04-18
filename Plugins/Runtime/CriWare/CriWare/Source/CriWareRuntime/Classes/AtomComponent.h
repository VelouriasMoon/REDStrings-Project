/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2013 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine 4
 * Module   : AudioComponent for Atom
 * File     : AtomComponent.h
 *
 ****************************************************************************/

/* 多重定義防止 */
#pragma once

/***************************************************************************
 *      インクルードファイル
 *      Include files
 ***************************************************************************/
/* Unreal Engine 4関連ヘッダ */
#include "Engine/DataTable.h"
#include "Components/SceneComponent.h"
#include "Sound/SoundAttenuation.h"
#include "Runtime/Launch/Resources/Version.h"

#if WITH_EDITORONLY_DATA
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/Components/DrawSphereComponent.h"
#endif

/* CRIWAREプラグインヘッダ */
#include "SoundAtomCueSheet.h"
#include "SoundAtomCue.h"
#include "AtomSoundObject.h"
#include "AtomActiveSound.h"
#include "AtomPlaylist.h"
#include "CriWarePluginSettings.h"
#include "AtomListener.h"
#include "AtomAudioVolume.h"
#include "AtomAudioVolumeHandler.h"
#include "AtomAreaSoundVolume.h"
#include "AtomDataTables.h"
#include "AtomCallbackManager.h"
#include "Atom3dRegion.h"

/* モジュールヘッダ */
#include "AtomComponent.generated.h"

/***************************************************************************
 *      定数マクロ
 *      Macro Constants
 ***************************************************************************/
#ifndef UE_DEPRECATED
#define UE_DEPRECATED DEPRECATED
#endif

struct[[deprecated("Use FAtomConfigDataTable instead.")]] FAcfDataTable;

USTRUCT(BlueprintType, meta = (DisplayName = "FAcfDataTable (deprecated)"))
struct FAcfDataTable : public FAtomConfigDataTable
{
	GENERATED_BODY()
};


/***************************************************************************
 *      処理マクロ
 *      Macro Functions
 ***************************************************************************/

/***************************************************************************
 *      データ型宣言
 *      Data Type Declarations
 ***************************************************************************/
UENUM(BlueprintType)
enum class EAtomComponentStatus : uint8
{
	Stop,				/** 停止中 */
	Prep,				/** 再生準備中 */
	Playing,			/** 再生中 */
	PlayEnd,			/** 再生終了 */
	Error				/** エラー */
};

UENUM(BlueprintType)
enum class EAtomSpeakerID : uint8
{
	/** Front left speaker */
	FrontLeft UMETA(DisplayName = "Front Left"),
	/** Front right speaker */
	FrontRight UMETA(DisplayName = "Front Right"),
	/** Front center speaker */
	FrontCenter UMETA(DisplayName = "Front Center"),
	/** LFE (サブウーハー) */
	LowFrequency UMETA(DisplayName = "Low Frequency"),
	/** Surround left speaker */
	SurroundLeft UMETA(DisplayName = "Surround Left"),
	/** Surround right speaker */
	SurroundRight UMETA(DisplayName = "Surround Right"),
	/** Surround back left speaker */
	SurroundBackLeft UMETA(DisplayName = "Surround Back Left"),
	/** Surround back right speaker */
	SurroundBackRight UMETA(DisplayName = "Surround Back Right")
};

#if WITH_EDITOR
class FEditorViewportClient;
#endif

class AVolume;
class UBrushComponent;
class FAtomListener;
class AAtomAudioVolume;
class AAtomAreaSoundVolume;
struct FAtomActiveSound;

/***************************************************************************
 *      変数宣言
 *      Prototype Variables
 ***************************************************************************/
namespace AtomComponentPropertyDefaultValue
{
	const float DefaultVolume = 1.0f;
	const float DefaultPitchMultiplier = 1.0f;
	const float StartTime = 0.0f;
	const bool bEnableMultipleSoundPlayback = false;
	const bool bUsePlaylist = false;
	const bool bIsMovable = true;
	const bool bCanStraddleAudioVolume = true;
	const bool bUseAudioVolume = true;
	const bool bUseAreaSoundVolume = true;
	const int32 DefaultBlockIndex = 0;
	const EAtomLoopSetting LoopSetting = EAtomLoopSetting::Inherited;
}

/***************************************************************************
 *      クラス宣言
 *      Prototype Classes
 ***************************************************************************/
/* AISACコントロールパラメータ */
USTRUCT(BlueprintType, meta = (ToolTip = "AtomAisacControlParam struct."))
struct CRIWARERUNTIME_API FAtomAisacControlParam
{
	GENERATED_USTRUCT_BODY()

	FAtomAisacControlParam();

	/* AISACコントロール名 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AisacControl", meta = (ToolTip = "AisacControlName."))
	FString Name;

	/* AISACコントロール値(JSON読み込み時はデフォルト値がデータテーブルに格納される) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AisacControl", meta = (ToolTip = "Value.", ClampMin = "0.0", ClampMax = "1.0"))
	float Value;
};


/* セレクタパラメータ */
USTRUCT(BlueprintType, meta = (ToolTip = "FAtomSelectorParam struct."))
struct CRIWARERUNTIME_API FAtomSelectorParam
{
	GENERATED_USTRUCT_BODY()

public:
	FAtomSelectorParam();
	FAtomSelectorParam(const FString & InSelector, const FString & InLabel);

	/* セレクタ名 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Selector", meta = (ToolTip = "Selector Name."))
	FString Selector;

	/* ラベル名 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Selector", meta = (ToolTip = "Label Name."))
	FString Label;
};

UCLASS(ClassGroup = (CRIWARE, Common),
	hidecategories = (Object, ActorComponent, Physics, Rendering, Mobility, LOD),
	ShowCategories = Trigger,
	meta = (BlueprintSpawnableComponent, ToolTip = "AtomComponent class.")
)
class CRIWARERUNTIME_API UAtomComponent : public USceneComponent, public IAtomCallback
{
	GENERATED_UCLASS_BODY()

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnStatusChanged, EAtomComponentStatus, Status, UAtomComponent*, AtomComponent);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAudioFinished);
	
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnAudioVolumeChanged, EAtomAudioVolumeType, Type, AAtomAudioVolume*, AtomAudioVolume, bool, bIsCalledFromTick);
	
	DECLARE_MULTICAST_DELEGATE_OneParam(FOnAudioFinishedNative, class UAtomComponent*);

	/* ビートシンク用のデリゲート */
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAtomBeatSyncCallbackDelegate, UAtomComponent*, AtomComponent, const FAtomBeatSyncInfo&, BeatSyncInfo);
	/* シーケンス用デリゲート */
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAtomSequenceCallbackDelegate, UAtomComponent*, AtomComponent, const FAtomSequenceInfo&, SequenceInfo);


	/* 音声データ */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Sound", meta = (ToolTip = "Sound data."))
	class USoundAtomCue* Sound;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Atom|Transceiver", meta = (ToolTip = "Atom 3d Sound Region"))
	UAtom3dRegion* Region;

	/* 再生完了と同時にコンポーネントを破棄するかどうか */
	UPROPERTY(meta = (ToolTip = "Auto destroy."))
	uint8 bAutoDestroy:1;

	/* パーシスタントレベルをまたいで音声を再生するかどうか */
	UPROPERTY(meta = (ToolTip = "Is sound persistant across level transition?"))
	uint8 bPersistAcrossLevelTransition:1;

	/* パーシスタントレベルをまたいで音声を再生するかどうか */
	uint8 bAddedAtomNonRegisteredComponentArray:1;

	/* オーナー破棄時に音声を停止するかどうか */
	UPROPERTY(meta = (ToolTip = "Stop when owner destroyed."))
	uint8 bStopWhenOwnerDestroyed:1;

	/* ゲーム中でなくても、PersonaなどのUI向けに再生するかどうか */
	UPROPERTY(meta = (ToolTip = "Is UI sound?"))
	uint8 bIsUISound:1;

	/* プレビューのみに使用する音声かどうか */
	uint8 bIsPreviewSound:1;

	/* プール可能なコンポーネントかどうか */
	uint8 bIsPoolable:1;

	/* 現在プール中のコンポーネントかどうか */
	uint8 bIsPooling:1;

	/* デフォルトのボリューム値 */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Sound", meta = (DisplayName = "Volume Multiplier", ToolTip = "Volume multiplier.", ClampMin = "0.0", ClampMax = "1.0"))
	float DefaultVolume;

	/* １つのコンポーネントで複数の音を同時に再生可能かどうか */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Atom", meta = (ToolTip = "Enable multiple sound playback."))
	uint8 bEnableMultipleSoundPlayback:1;

	/* シームレス連結再生を使用するかどうか */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Atom", meta = (ToolTip = "Use playlist."))
	uint8 bUsePlaylist:1;

	/* AtomComponentの座標が動きうるかどうか */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AudioVolume", meta = (ToolTip = "Use AudioVolume."))
	bool bIsMovable;

	/* AtomComponentが複数のAudioVolumeの間をまたぐかどうか */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AudioVolume", meta = (ToolTip = "Use AudioVolume."))
	bool bCanStraddleAudioVolume;

	/* AudioVolumeの機能を使うかどうか */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AudioVolume", meta = (ToolTip = "Use AudioVolume."))
	bool bUseAudioVolume;

	/* AreaSoundVolume機能を使用するかどうか */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AreaSoundVolume", meta = (ToolTip = "Use AreaSoundVolume."))
	bool bUseAreaSoundVolume;

	/* SoundObject */
	UPROPERTY(EditAnywhere, Category = "Atom", meta = (DisplayName = "Sound Object", ToolTip = "Sound object."))
	class UAtomSoundObject* SoundObject;

	/* デフォルトのブロックインデックス */
	UPROPERTY(EditAnywhere, Category = "Atom", meta = (DisplayName = "Block Index", ToolTip = "Initial block index.", ClampMin = "0"))
	int32 DefaultBlockIndex;

	/* デフォルトのAISAC設定 */
	UPROPERTY(EditAnywhere, Category = "Atom", meta = (DisplayName = "AISAC Control", ToolTip = "Initial AISAC control."))
	TArray<struct FAtomAisacControlParam> DefaultAisacControl;

	/* デフォルトのセレクタラベル設定 */
	UPROPERTY(EditAnywhere, Category = "Atom", meta = (DisplayName = "Selector Label", ToolTip = "Initial selector label."))
	TArray<struct FAtomSelectorParam> DefaultSelectorLabel;

	/* ループ設定 */
	UPROPERTY(EditAnywhere, Category = "Atom", meta = (DisplayName = "Loop Setting", ToolTip = "If Inherited, uses Loop Setting from AtomSoundCue Asset."))
	EAtomLoopSetting LoopSetting;

	/* このコンポーネントから再生する音が全て2Dサウンドである場合、このプロパティをtrueにすることでそれを明示することができます。 */
	/* 2Dサウンドであることを明示すると、Economic-Tick機能やCulling機能の影響を受けなくなります。 */
	/* デフォルト値はfalseです。 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Atom", meta = (DisplayName = "Only 2D Sound"))
	uint8 bOnly2DSound:1;

	/** Event for status. */
	UPROPERTY(BlueprintAssignable, Category = "Atom")
	FOnStatusChanged OnStatusChanged;

	/** Event trigger when this actor entered in an Audio Volume. */
	UPROPERTY(BlueprintAssignable, Category = "Atom")
	FOnAudioVolumeChanged OnAudioVolumeChanged;

	/** called when we finish playing audio, either because it played to completion or because a Stop() call turned it off early */
	UPROPERTY(BlueprintAssignable, Category = "Atom")
	FOnAudioFinished OnAudioFinished;

	/** A pointer to a UWorld that is the duplicated/saved-loaded to be played in with "Play From Here" 								*/
	UPROPERTY()
	class UWorld* PlayWorld;

	/** The view port representing the current game instance. Can be 0 so don't use without checking. */
	UPROPERTY()
	class UGameViewportClient* GameViewport;

	/** shadow delegate for non UObject subscribers */
	FOnAudioFinishedNative OnAudioFinishedNative;

	/**
	* AtomComponentに対し、再生するキューを指定します。
	* 音声再生中にUAtomComponent::SetSound関数を呼び出した際、音声が停止する場合があります。
	* 詳しくはFAQの「 SetSoundを行うと音声が止まってしまいます。 」をご覧ください。
	*
	* @param NewSound 再生するキューアセットを指定します。
	*/
	UFUNCTION(BlueprintCallable, Category = "AtomSound")
	void SetSound(USoundAtomCue* NewSound);

	/**
	* シームレス連結再生用に、AtomComponentに新たな音声データを追加します。
	* 本関数で指定された音声は、AtomComponent::SetSound関数でセットされた音声に続けて再生されます。
	*
	* @param NewSound 次に再生したいキューを指定します。
	*/
	UFUNCTION(BlueprintCallable, Category = "AtomSound")
	void EnqueueSound(USoundAtomCue* NewSound);

	/**
	* シームレス連結再生用にAtomComponentに積まれている音声データの数を取得します。
	* 本関数が 0 を返す状態（未再生の音声データが残っていない状態）で再生が終了すると、AtomComponentのステータスがPlayEndに遷移します。
	*
	* @return キューに残った音声の数を返します。
	*/
	UFUNCTION(BlueprintCallable, Category = "AtomSound")
	int32 GetNumQueuedSounds() const;

	/**
	* AtomComponentでキューの再生を開始します
	*
	* @param StartTime ここに開始時間(秒)を指定することで、音声データを途中から再生することも可能です。
	*/
	UFUNCTION(BlueprintCallable, Category = "AtomSound")
	void Play(float StartTime = 0.f);

	/**
	* AtomComponentによるキュー再生を停止します。
	* 本関数は完了復帰型の関数ではありません。
	* そのため、関数内で処理が長時間ブロックすることはありませんが、
	* 関数を抜けた時点では再生が停止していない可能性がある点にご注意ください。
	*（停止状態になるまでに、時間がかかる場合があります。
	* 停止を保証する必要がある場合には、本関数呼び出し後、
	* UAtomComponent::GetStatus() 関数でステータスが停止状態（EAtomComponentStatus::Stop）
	* になることを確認してください。
	*/
	UFUNCTION(BlueprintCallable, Category = "AtomSound")
	void Stop();

	/**
	* AtomComponentによるキュー再生を停止します。
	* 再生中の音声に ADX2 データとしてエンベロープのリリースタイムが設定されていたとしても、
	* それを無視して停止します。
	* 音声再生中の AtomComponent に対して本関数を実行すると、
	* 即座に音声再生を停止（ファイルの読み込みや、発音を停止）し、
	* ステータスは停止状態（EAtomComponentStatus::Stop）に遷移します。
	* 本関数は完了復帰型の関数です。
	*/
	UFUNCTION(BlueprintCallable, Category = "AtomSound")
	void StopWithoutReleaseTime();

	/**
	* フェードイン
	* 備考）FadeVolumeLevelの指定には未対応です。
	* 　　　（指定された時間で必ずボリュームが1.0fになります。）
	* 　　　FadeInDurationに設定可能な値は2.0fが上限です。
	*
	* @param FadeInDuration フェードインまでの時間を指定します。
	* @param FadeVolumeLevel 現在利用できません。
	* @param StartTime ここに開始時間(秒)を指定することで、音声データを途中から再生することも可能です。
	*/
	UFUNCTION(BlueprintCallable, Category = "AtomSound")
	void FadeIn(float FadeInDuration, float FadeVolumeLevel = 1.f, float StartTime = 0.f);

	/**
	* フェードアウトして停止
	* 備考）FadeVolumeLevelの指定には未対応。
	* 　　　（指定された時間で必ずボリュームが0.0fになります。）
	* 　　　FadeOutDurationに設定可能な値は10.0fが上限です。
	*
	* @param FadeOutDuration フェードアウトまでの時間を指定します。
	* @param FadeVolumeLevel 現在利用できません。
	*/
	UFUNCTION(BlueprintCallable, Category = "AtomSound")
	void FadeOut(float FadeOutDuration, float FadeVolumeLevel = 0.f);

	/**
	* 音声の再生状態を取得します。
	* 返り値はEAtomComponentStatus列挙型で、以下の値を取ります。
	* ・Stop : 停止中
	* ・Prep : 再生準備中
	* ・Playing : 再生中
	* ・PlayEnd : 再生終了
	* ・Error : エラー
	*
	* @return 音声の再生状態が返ります。
	*/
	UFUNCTION(BlueprintCallable, Category = "AtomSound")
	EAtomComponentStatus GetStatus() const;

	/**
	* AtomComponentによるキュー再生を一時停止、もしくは再開します。
	*
	* @param bPause trueを指定すると一時停止します。falseを指定すると、再生を再開します。
	*/
	UFUNCTION(BlueprintCallable, Category = "AtomSound")
	void Pause(bool bPause);

	/**
	* AtomComponentに対してPause操作が行われたかどうかを判定します。
	*
	* @return AtomComponentが一時停止中の場合は[Return Value]がtrueに、再生中の場合はfalseになります。
	*/
	UFUNCTION(BlueprintCallable, Category = "AtomSound")
	bool IsPaused() const;

	/**
	* AtomComponentに対してPlay操作が行われたかどうかを判定します。
	*
	* @return AtomComponentが再生中の場合は[Return Value]がtrueに、停止中の場合はfalseになります。
	*/
	UFUNCTION(BlueprintCallable, Category = "AtomSound")
	bool IsPlaying() const;

	/**
	* AtomComponentの音量を変更します。
	*
	* @param Volume ボリューム値を0.0f〜1.0fの範囲の値で指定します。ボリューム値は音声データの振幅に対する倍率です。（1.0fがキュー本来の音量、0.0fが無音です。）
	*/
	UFUNCTION(BlueprintCallable, Category = "AtomSound")
	void SetVolume(float Volume);

	/**
	* AtomComponentの音量を取得します。
	*/
	UFUNCTION(BlueprintCallable, Category = "AtomSound")
	float GetVolume();

	/**
	* AtomComponentにサウンドオブジェクトを設定します。
	*
	* @param SoundObject サウンドオブジェクトを指定します。
	*/
	UFUNCTION(BlueprintCallable, Category = "AtomSound")
	void SetSoundObject(UAtomSoundObject* InSoundObject);

	UFUNCTION(BlueprintCallable, Category = "AtomSound")
	void SetRegion(UAtom3dRegion* InRegion);

	/**
	* AtomComponentのピッチを変更します。
	* ピッチを倍率で指定する点がUAtomComponent::SetPitch関数と異なります。
	* [New Pitch Multiplier]に2.0を指定した場合、倍のピッチ（1オクターブ高い音）で再生されます。
	* [New Pitch Multiplier]に0.5を指定した場合、半分のピッチ（1オクターブ低い音）で再生されます。
	*
	* @param NewPitchMultiplier ピッチ変更倍率を指定します。
	*/
	UFUNCTION(BlueprintCallable, Category = "AtomSound")
	void SetPitchMultiplier(float NewPitchMultiplier);

	/**
	* AtomComponentのピッチを変更します。
	*
	* @param Pitch セント単位のピッチ変更量を指定します。
	*/
	UFUNCTION(BlueprintCallable, Category = "AtomSound")
	void SetPitch(float Pitch);

	/**
	* AtomComponentのAISACコントロール値を指定します。
	* AISACの初期値はアクタのパラメータとして指定することも可能です。
	* 具体的な設定箇所については「 音源データの配置 」を参照してください。
	*
	* @param ControlName CRI Atom Craftで作成したAISACコントロール名を指定します。
	* @param ControlValue 指定したAISACコントロールに適用する値を指定します。
	*/
	UFUNCTION(BlueprintCallable, Category = "AtomSound")
	void SetAisacByName(FString ControlName, float ControlValue);

	/**
	* DEPRECATED - Use SetBusSendLevelByName instead.
	* 非推奨関数です。SetBusSendLevelByName関数をご利用ください。
	*/
	UFUNCTION(BlueprintCallable, Category = "AtomSound")
	void SetBusSendLevel(int32 BusId, float Level);

	/**
	* AtomComponentのバスセンドレベルを変更します。
	* [注意]バスセンドレベルが0のデータに対してバスセンドレベルを追加したい場合、[Set Bus Send Level Offset by Name]コンポーネントを使用してください。
	*
	* @param BusName 出力先バスの名前を指定します。
	* @param Level 指定したバスにセンドするレベルを指定します。この値は、あらかじめCRI Atom Craftで指定したバスセンドレベルに対して掛け算適用されます。
	*/
	UFUNCTION(BlueprintCallable, Category = "AtomSound")
	void SetBusSendLevelByName(FString BusName, float Level);

	/**
	* DEPRECATED - Use SetBusSendLevelOffsetByName instead.
	* 非推奨関数です。SetBusSendLevelOffsetByName関数をご利用ください。
	*/
	UFUNCTION(BlueprintCallable, Category = "AtomSound")
	void SetBusSendLevelOffset(int32 BusId, float LevelOffset);

	/**
	* AtomComponentのバスセンドレベルを変更します。
	* あらかじめCRI Atom Craftで設定済みのバスセンドレベルに対してレベル補正したい場合、[Set Bus Send Level by Name]コンポーネントを使用してください。
	*
	* @param BusName 出力先バスの名前を指定します。
	* @param LevelOffset 指定したバスにセンドするレベルを指定します。ここで指定した値は、あらかじめCRI Atom Craftで指定したバスセンドレベルに対して足し算適用されます。
	*/
	UFUNCTION(BlueprintCallable, Category = "AtomSound")
	void SetBusSendLevelOffsetByName(FString BusName, float LevelOffset);

	/**
	* AtomComponentで次に再生するブロックを指定します。
	* ブロックインデックスの初期値はアクタのパラメータとして指定することも可能です。
	* 具体的な設定箇所については「 音源データの配置 」を参照してください。
	*
	* @param BlockIndex 次に再生するブロックの番号を指定します。
	*/
	UFUNCTION(BlueprintCallable, Category = "AtomSound")
	void SetNextBlockIndex(int32 BlockIndex);

	/**
	* AtomComponentのセレクタラベルを設定します。
	* トラックにセレクタラベルが指定されているキューを再生した場合、本関数で指定したセレクタラベルと一致したトラックだけを再生します。
	*
	* @param Selector セレクタ名を指定します。
	* @param Label セレクタラベルを指定します。
	*/
	UFUNCTION(BlueprintCallable, Category = "AtomSound")
	void SetSelectorLabel(FString Selector, FString Label);

	/**
	* AtomComponentに設定されているセレクタ名、ラベル名情報を全て削除します。
	* すでに再生中の音声に対してセレクタ情報の削除が行えますが、再生中音声が停止することはありません。
	*/
	UFUNCTION(BlueprintCallable, Category = "AtomSound")
	void ClearSelectorLabels();

	/**
	* ASR Rack IDの指定
	*
	* @param asr_rack_id ASRラックIDを指定します。
	*/
	UFUNCTION(BlueprintCallable, Category = "AtomSound")
	void SetAsrRackID(int32 asr_rack_id = 0);

	/**
	* ASR Rack IDの複数指定
	*
	* @param AsrRackIDs ASRラックIDの配列を指定します。
	*/
	UFUNCTION(BlueprintCallable, Category = "AtomSound")
	void SetAsrRackIdArray(TArray<int32> AsrRackIDs);

	/**
	* 音声再生開始からの経過時間を取得します。単位は秒です。
	*
	* @return 音声再生開始からの経過時間(秒)が返ります。
	*/
	UFUNCTION(BlueprintCallable, Category = "AtomSound")
	float GetTime() const;


	/**
	 * AtomComponentの移動速度を取得します。
	 *
	 * @return AtomComponentの現在の移動速度(cm/sec)を返します。
	 */
	UFUNCTION(BlueprintCallable, Category = "AtomSound")
	FVector GetVelocity() const { return CurrentVelocity; }

	/**
	* 音声の再生位置を取得します。単位は秒です。
	* Get TimeとGet Sequence Positionは、Atom Craft上でシーケンスによるループを作成した場合にのみ動作が異なります。
	* 具体的には、以下のとおりです。
	* ・Get Timeは、ループに関係なく再生開始からの経過時間を返します。
	*  （時刻の値は常に増加し続けます。）
	* ・Get Sequence Positionは、ループで再生位置が巻き戻った際、時刻も巻き戻ります。
	*
	* @return 音声の再生位置(秒)が返ります。
	*/
	UFUNCTION(BlueprintCallable, Category = "AtomSound")
	float GetSequencePosition() const;

	/**
	* AtomComponentのIDを取得します。
	*
	* @return AtomComponentのIDが返ります。
	*/
	UFUNCTION(BlueprintCallable, Category = "AtomSound")
	int32 GetAtomComponentID() const { return AtomComponentID; }

	/**
	* 現在再生中のキューの名前を取得します。
	*
	* @return 現在再生中のキューの名前 が返ります。
	*/
	UFUNCTION(BlueprintCallable, Category = "AtomSound")
	FString GetCueName() const { return CueName; }

	/**
	* デフォルトAttenuation設定が有効かどうかを取得します。
	*
	* @return デフォルトAttenuation設定が有効かどうかが返ります。
	*/
	UFUNCTION(BlueprintCallable, Category = "AtomSound")
	void AttachAreaSoundVolume(AAtomAreaSoundVolume* sound_shape_volume) 
	{
		AreaSoundVolume = sound_shape_volume;
	}

	/**
	* 任意のIDのAtomComponentを取得します。
	*
	* @param TargetID IDを指定します。
	* @return AtomComponentオブジェクトのリファレンスが返ります。
	*/
	UFUNCTION(BlueprintCallable, Category = "AtomSound")
	static UAtomComponent* GetAtomComponentFromID(int32 TargetID);

	/**
	* 任意のIDのAtomComponentを破棄します。
	*
	* @param TargetID IDを指定します。
	*/
	UFUNCTION(BlueprintCallable, Category = "AtomSound")
	static void DestroyComponentByID(int32 TargetID);

	
	/**
	* Economic-Tick機能によってTickの頻度が下がっている状態かどうか返します。
	* @return true:Tickの頻度が下がっている状態です, false:Tickの頻度は下がっていません
	*/
	UFUNCTION(BlueprintCallable, Category = "AtomSound", meta = (ToolTip = "True when currently reducting tick frenquence of this AtomComponent."))
	bool IsReducingTickFrequency() const;

	/**
	* 現在このAtomComponentに適用されているEconomic-Tickマージン距離を返します。
	* つまり最後に再生したキュー固有のEconomic-Tickマージン距離が有効ならそれを返し、
	* そうでなければ全体設定のEconomic-Tickマージン距離を返します。
	*/
	UFUNCTION(BlueprintCallable, Category = "AtomSound", meta = (ToolTip = "Get currently applied Economic-Tick distance margin."))
	float GetEconomicTickDistanceMargin() const;

	/**
	* 現在このAtomComponentに適用されているEconomic-Tick境界距離を返します。
	* つまり最後に再生したキューの(最大減衰距離 + Economic-Tickマージン距離)を返します。
	* ただしキューがセットされていない場合は常にFLT_MAX(floatの最大値)を返します。
	*/
	UFUNCTION(BlueprintCallable, Category = "AtomSound", meta = (ToolTip = "Get currently applied Economic-Tick distance."))
	float GetEconomicTickDistance() const;

	/**
	* 現在このAtomComponentに適用されているEconomic-Tick頻度を返します。
	* つまり最後に再生したキュー固有のEconomic-Tick頻度が有効ならそれを返し、
	* そうでなければ全体設定のEconomic-Tick頻度を返します。
	*/
	UFUNCTION(BlueprintCallable, Category = "AtomSound", meta = (ToolTip = "Get currently applied Economic-Tick frequency."))
	float GetEconomicTickFrequency() const;

	/**
	* 現在このAtomComponentに適用されている最大減衰距離を返します。
	* つまりAtomComponent側のAttenuation設定が有効ならそれを返し、
	* そうでなければ現在セットされているキューの設定を返します。
	* ただしキューがセットされていない場合は常にFLT_MAX(floatの最大値)を返します。
	*/
	UFUNCTION(BlueprintCallable, Category = "AtomSound", meta = (ToolTip = "Get currenty applied maximum attenuation distance."))
	float GetMaxAttenuationDistance() const;

	/**
	* 現在このAtomComponentに適用されているカリングマージン距離を返します。
	* つまり最後に再生したキュー固有のマージン距離が有効ならそれを返し、
	* そうでなければ全体設定のマージン距離を返します。
	*/
	UFUNCTION(BlueprintCallable, Category = "AtomSound", meta = (ToolTip = "Get currently applied margin to maximum attenuation distance for culling."))
	float GetCullDistanceMargin() const;

	/**
	* 現在このAtomComponentに適用されているカリング境界距離を返します。
	* つまり最後に再生したキューのレガシーな設定が有効になっていればMaxProcessDistanceプロパティの値をそのまま返し、
	* そうでなければ(最大減衰距離 + カリングマージン距離)を返します。
	* ただしキューがセットされていない場合は常にFLT_MAX(floatの最大値)を返します。
	*/
	UFUNCTION(BlueprintCallable, Category = "AtomSound", meta = (ToolTip = "Get currently applied cull distance; sum of maximum attenuation distance and cull distance margin."))
	float GetCullDistance() const;

	UFUNCTION(BlueprintCallable, Category = "AtomSound", meta = (ToolTip = "Get AtomAudioVolume Value To apply."))
	TMap<FString, float> GetAudioVolumeValueMap(EAtomAudioVolumeType type);

	UFUNCTION(BlueprintCallable, Category = "AtomSound", meta = (ToolTip = "Get AtomAudioVolume."))
	AAtomAudioVolume* GetCurrentBelongingAudioVolume(EAtomAudioVolumeType type, bool IsNeighbor) const;

	/**
	* LoopSettingを考慮した上で、ループするかどうかを返します。
	*
	* @return ループするかどうかが返ります。<br>LoopSettingが"DefaultLoop"かつキューがセットされていない場合はfalseが返ります。
	*/
	UFUNCTION(BlueprintCallable, Category = "AtomSound", meta = (ToolTip = "Get whether it's loop cue according to LoopSetting."))
	bool IsLoop() const;


	/** Modify the attenuation settings of the audio component */
	UFUNCTION(BlueprintCallable, Category = "AtomSound")
	void AdjustAttenuation(const FSoundAttenuationSettings& InAttenuationSettings);

	UFUNCTION(BlueprintCallable, Category = "AtomSound", meta = (DisplayName = "Get Attenuation Settings To Apply", ScriptName = "GetAttenuationSettingsToApply"))
	bool BP_GetAttenuationSettingsToApply(FSoundAttenuationSettings& OutAttenuationSettings);



	//~ DEPRECATED functions

	/**
	* デフォルトAttenuation設定を有効にするかどうか変更します。
	* @deprecated Use Override Attenuation Settings instead.
	*/
	UE_DEPRECATED(4.21, "Please use Override Attenuation Settings instead.")
	UFUNCTION(meta = (DeprecatedFunction, DeprecationMessage = "Use Override Attenuation Settings instead."))
	static void SetDefaultAttenuationEnable(bool bEnable) {}

	/**
	* デフォルトAttenuation設定が有効かどうかを取得します。
	* @deprecated Use Override Attenuation Settings instead.
	*/
	UE_DEPRECATED(4.21, "Please use Override Attenuation Settings instead.")
	UFUNCTION(meta = (DeprecatedFunction, DeprecationMessage = "Use Override Attenuation Settings instead."))
	static bool GetDefaultAttenuationEnable() { return false; }

	/** SoundObject 
	 * @deprecated Use SoundObject instead.
	 */
	UPROPERTY(meta = (DeprecatedProperty, DeprecationMessage = "Use SoundObject instead."))
	class UAtomSoundObject* DefaultSoundObject_DEPRECATED;

	/**
	 * Economic-Tick機能によってTickの頻度が下がっている状態かどうか返します。
	 * @return true:Tickの頻度が下がっている状態です, false:Tickの頻度は下がっていません
	 * @deprecated Use IsReducingTickFrequency() instead
	 */
	UE_DEPRECATED(4.21, "Please use IsReducingTickFrequency() instead.")
	UFUNCTION(meta = (DeprecatedFunction, DeprecationMessage = "Use IsReducingTickFrequency() instead."))
	bool HasBeenEconomicTick() const;

	/**
	 * 現在このAtomComponentに適用されているEconomic-Tickマージン距離を返します。
	 * つまり最後に再生したキュー固有のEconomic-Tickマージン距離が有効ならそれを返し、
	 * そうでなければ全体設定のEconomic-Tickマージン距離を返します。
	 * @deprecated Use GetEconomicTickDistanceMargin() instead
	 */
	UE_DEPRECATED(4.21, "Please use GetMaxAttenuationDistance() instead.")
	UFUNCTION(meta = (DeprecatedFunction, DeprecationMessage = "Use GetEconomicTickDistanceMargin() instead."))
	float GetCurrentEconomicTickMarginDistance() const;

	/**
	 * 現在このAtomComponentに適用されているEconomic-Tick境界距離を返します。
	 * つまり最後に再生したキューの(最大減衰距離 + Economic-Tickマージン距離)を返します。
	 * ただしキューがセットされていない場合は常にFLT_MAX(floatの最大値)を返します。
	 * @deprecated Use GetEconomicTickDistance() instead
	 */
	UE_DEPRECATED(4.21, "Please use GetEconomicTickDistance() instead.")
	UFUNCTION(meta = (DeprecatedFunction, DeprecationMessage = "Use GetEconomicTickDistance() instead."))
	float GetCurrentEconomicTickBoundaryDistance() const;

	/**
	* 現在このAtomComponentに適用されているEconomic-Tick頻度を返します。
	* つまり最後に再生したキュー固有のEconomic-Tick頻度が有効ならそれを返し、
	* そうでなければ全体設定のEconomic-Tick頻度を返します。
	 * @deprecated Use GetEconomicTickFrequency() instead
	 */
	UE_DEPRECATED(4.21, "Please use GetEconomicTickFrequency() instead.")
	UFUNCTION(meta = (DeprecatedFunction, DeprecationMessage = "Use GetEconomicTickFrequency() instead."))
	float GetCurrentEconomicTickFrequency() const;

	/**
	 * 現在このAtomComponentに適用されている最大減衰距離を返します。
	 * つまりAtomComponent側のAttenuation設定が有効ならそれを返し、
	 * そうでなければ現在セットされているキューの設定を返します。
	 * ただしキューがセットされていない場合は常にFLT_MAX(floatの最大値)を返します。
	 * @deprecated Use GetMaxAttenuationDistance() instead
	 */
	UE_DEPRECATED(4.21, "Please use GetMaxAttenuationDistance() instead.")
	UFUNCTION(meta = (DeprecatedFunction, DeprecationMessage = "Use GetMaxAttenuationDistance() instead."))
	float GetCurrentMaxAttenuationDistance() const;

	/**
	 * 現在このAtomComponentに適用されているカリングマージン距離を返します。
	 * つまり最後に再生したキュー固有のマージン距離が有効ならそれを返し、
	 * そうでなければ全体設定のマージン距離を返します。
     * @deprecated Use GetCullDistanceMargin() instead
	 */
	UE_DEPRECATED(4.21, "Please use GetCullDistanceMargin() instead.")
	UFUNCTION(meta = (DeprecatedFunction, DeprecationMessage = "Use GetCullDistanceMargin() instead."))
	float GetCurrentCullingMarginDistance() const;

	/**
	 * 現在このAtomComponentに適用されているカリング境界距離を返します。
	 * つまり最後に再生したキューのレガシーな設定が有効になっていればMaxProcessDistanceプロパティの値をそのまま返し、
 	 * そうでなければ(最大減衰距離 + カリングマージン距離)を返します。
	 * ただしキューがセットされていない場合は常にFLT_MAX(floatの最大値)を返します。
	 * @deprecated Use GetCullDistance() instead
	 */
	UE_DEPRECATED(4.21, "Please use GetCullDistance() instead.")
	UFUNCTION(meta = (DeprecatedFunction, DeprecationMessage = "Use GetCullDistance() instead."))
	float GetCurrentCullingBoundaryDistance() const;

	//~ end of DEPRECATED functions

public:

	void UpdateDistanceFactor(float ArgDistanceFactor);

	/* AtomExプレーヤハンドルの取得 */
	CriAtomExPlayerHn GetAtomExPlayer();

	/* AtomEx3dSourceハンドルの取得 */
	CriAtomEx3dSourceHn GetAtomEx3dSource();

	/* コンポーネント単位で距離減衰を設定するかどうか */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Attenuation, meta = (ToolTip = "Attenuation settings for asset."))
	uint32 bOverrideAttenuation : 1;

	/* 距離減衰設定（距離減衰アセットを使用） */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Attenuation, meta = (EditCondition = "!bOverrideAttenuation", ToolTip = "Enable attenuation settings."))
	class USoundAttenuation* AttenuationSettings;

	/* 距離減衰設定（コンポーネント単位の上書き設定） */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Attenuation, meta = (EditCondition = "bOverrideAttenuation", ToolTip = "Attenuation overrides."))
	struct FSoundAttenuationSettings AttenuationOverrides;

	/* C++呼び出し専用 */
	void SetSound(USoundAtomCueSheet* InCueSheet, FString InCueName);

	/* オブジェクト再利用時向け初期化処理 */
	void InitializePoolable();

	/* オブジェクト返却時向け終了処理 */
	void ShutdownPoolable();

#if WITH_EDITORONLY_DATA
	void RegisterAtomSoundInfoComponent();
#endif

	/* ルートオブジェクトとして登録されていることを通知 */
	void MarkAsRooted();

	/* 非レジスターAtomComponentのTick */
	static void TickNonRegisteredComponents();

	/* ルートオブジェクトのTick */
	static void TickRootedComponents();

#if WITH_EDITOR
	/* エディタ用のTick */
	void TickOnEditor(float DeltaTime = 0.0f);
#endif

public:
	// Begin UObject interface.
	virtual void PostInitProperties() override;
	virtual void BeginDestroy() override;
	virtual void DestroyComponent(bool bPromoteChildren = false) override;
	virtual void OnComponentDestroyed(bool bDestroyingHierarchy) override;
	virtual void Serialize(FArchive& Ar) override;
#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif
	// End UObject interface.

	// Begin ActorComponent interface
#if WITH_EDITORONLY_DATA
	virtual void OnRegister() override;
#endif
	virtual void OnUnregister() override;
	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction) override;
	// End ActorComponent interface

	// Begin USceneComponent Interface
	virtual void Activate(bool bReset = false) override;
	virtual void Deactivate() override;
	virtual void OnUpdateTransform(EUpdateTransformFlags UpdateTransformFlags, ETeleportType Teleport = ETeleportType::None) override;
#if WITH_EDITOR
	/* 音源表示関連のコンポーネントを破棄する */
	virtual void OnAttachmentChanged() override;
#endif
	// End USceneComponent Interface

	/* AttenuationSettingsの取得 */
	const FSoundAttenuationSettings* GetAttenuationSettingsToApply() const;

	static int32 AtomComponentIDCounter;
	static TMap<int32, UAtomComponent*> AtomIDToComponentMap;
	static TArray<UAtomComponent*> AtomRootedComponentArray;
	static TArray<UAtomComponent*> AtomNonRegisteredComponentArray;

	const UAtomSoundObject * GetAppliedSoundObject() const;

	FAtomListener* GetAtomListener() {
		return Listener;
	}

	/* AtomComponent オブジェクトを新規作成する時にセットされる DistanceFactor の初期値を設定 */
	static void SetDefaultDistanceFactor(float ArgDistanceFactor);

	/**
	* [プラグイン開発者専用]キューを再生します。ただしそのときカリングの判定をスキップし、カリングは行いません。
	* 無駄な判定処理を行わないようにするための関数です。
	* @param StartTime ここに開始時間を指定することで、音声データを途中から再生することも可能です。
	*/
	void PlayWithoutSoundCulling(float StartTime = 0.f);

protected:
	/**
	 * Utility function called by Play and FadeIn to start to play a sound.
	 * Uses this and ask for cue sheet if needed , once cue sheet is loaded Playinternal is called.
	 * or is already called Playinternal is immediatly called.
	 * @param StartTime ここに開始時間を指定することで、音声データを途中から再生することも可能です。
	 * @param FadeInDuration ここに指定した時間をかけてフェードインします。
	 * @param FadeVolumeLevel FadeVolumeLevel
	 * @param bSoundCulling 無駄な判定処理をスキップするためのフラグです。カリングすべきか判定する必要が無い場合にtrueを指定してください。
	 */
	void PrepareInternal(float StartTime, float FadeInDuration, float FadeVolumeLevel, bool bSoundCulling = false);
	
	/** 
	 * If cue sheet is available, starts to play a sound. 
	 * @param StartTime ここに開始時間を指定することで、音声データを途中から再生することも可能です。
	 * @param FadeInDuration ここに指定した時間をかけてフェードインします。
	 * @param FadeVolumeLevel FadeVolumeLevel
	*/
	void PlayInternal(float StartTime, float FadeInDuration, float FadeVolumeLevel);

	/**
	 * 現在のリージョンハンドルを 3d Source に反映させる。
	 * アプリケーション実行中にハンドルが動的に差し替えられた場合に呼び出す必要がある。
	*/
	void ReloadRegion();

public:

#if WITH_EDITOR
		/**
		 * Called when PIE has been paused.
		 *
		 * @see ResumePIE
		 */
		void PausePIE();

		/**
		 * Called when PIE has been resumed.
		 *
		 * @see PausePIE
		 */
		void ResumePIE();
#endif

private:
	FCriticalSection Mutex;

	/** The play list to use, if any. */
	FAtomPlaylist* Playlist;

	int32 AtomComponentID;
	double CreatedTime;

	/* 音源 */
	static const uint32 PLAYER_WORK_SIZE = 1536;
	static const uint32 SOURCE_WORK_SIZE = 640;
	uint8 PlayerWork[PLAYER_WORK_SIZE];
	uint8 SourceWork[SOURCE_WORK_SIZE];
	CriAtomExPlayerHn Player;
	CriAtomEx3dSourceHn Source;

	CriAtomExVector PreviousSourceLocation;
	CriAtomExVector PreviousListenerLocation;
	FVector CurrentVelocity;
	bool bTransformUpdated;
	bool bIsEnableDoppler;

	/* True when cue sheet is loading */
	bool bIsLoadingCueSheet;

	// todo: param strcut 
	/* defered play parameters */
	float PlayStartTime;
	float PlayFadeInDuration;
	float PlayFadeVolumeLevel;

	/* AudioVolumeの設定情報を使ったサウンド演出設定を行うための構造体 */
	FAtomAudioVolumeHandler* AtomAudioVolumeHandler;
	bool bIsAudioVolumeTickProcessed;
	TAtomic<bool> bIsWorkAudioVolumeProcessThread;
	
	/* AreaSoundVolumeの計算で加算した相対位置を格納しておくための変数 */
	FVector SoundRelativeLocationWithAreaSoundVolume;
	AAtomAreaSoundVolume* AreaSoundVolume;
	int FrameNum;
	bool bIsSwitchedListenerPosBetweenInsideToOutSide;

	/* リスナ */
	FAtomListener* Listener;

	/* AtomComponent オブジェクトの新規作成時の距離倍率デフォルト設定 */
	static float DefaultDistanceFactor;

	/* 距離倍率 */
	float DistanceFactor;

	/* OcclusionのCollision判定などを行うための構造体 */
	FAtomActiveSound AtomActiveSound;

	/* キューシート */
	UPROPERTY(Transient)
	class USoundAtomCueSheet* CueSheet;

	/* キュー名 */
	FString CueName;

	/* 適用済みSoundObject */
	UPROPERTY(Transient)
	class UAtomSoundObject* AppliedSoundObject;



	/* 再生要求の有無 */
	bool bIsPlayed;

	/* Economic-Tick機能によってTick頻度が下がっている状態かどうか(true:下がっている, false:下がっていない) */
	bool bIsReducingTickFrequency; // i.e IsTickReduced

	/* 通常のTickの頻度(秒/1回) */
	float DefaultTickInterval;

	/* Atom player last know status. */
	EAtomComponentStatus Status;

	/* データ要求コールバック */
	static void CRIAPI OnDataRequest(
	void *Object, CriAtomExPlaybackId PlaybackId, CriAtomPlayerHn Player);

	/* AtomComponent の新規作成時または再利用時のメンバ初期化 */
	void ResetMembersWithoutCriDynamicResources();

	/* リソースの確保 */
	void AllocateResource();

	/* リソースの解放 */
	void ReleaseResource();

	/* 定期処理 */
	void OnTickComponent(float DeltaTime = 0.0f);

	/* トランスフォームの更新 */
	void UpdateTransform(bool bHasOwner = false);

	/* AreaSoundVolume処理実行関数 */
	FVector UpdateTransformForAreaSoundVolume(FVector &SourcePosition, bool bHasOwner, AActor* Owner);
	FVector UpdateSourcePosition(FVector& NewPosition);

	/**
	* 現在適用すべきAttenuation情報(ボリューム倍率, フィルタ周波数)を取得します。
	* Attenuation以外の効果は考慮されないため、
	* 必要に応じてその他の効果と掛け合わせてください。
	*
	* @param Volume 「Attenuationによってボリュームが何倍になるか」が返されます。
	* @param FilterFrequency 「Attenuationによってフィルタリングされる周波数」が返されます。
	*/
	void GetAttenuationValuesToApply(float& VolumeScale, float& FilterFrequency);

	/* サウンドオブジェクトの適用 */
	void ApplySoundObject(UAtomSoundObject * SoundObject);

	/**
	* Tickの頻度を下げるべきかどうか判定します。
	* @return true:下げるべき, false:下げるべきでない
	*/
	bool ShouldDecreaseTickFrequency() const;

	/**
	* Economic-Tick効果適用時のTickの頻度を返します。
	* @return Economic-Tick効果適用時のTickの頻度(秒/1回)
	*/
	float GetEconomicTickInterval() const;

	/* 必要に応じてTickの頻度を下げたり元に戻したりします。 */
	void ChangeTickFrequencyAsNeeded();

	/* AudioVolume処理実行関数 */
	void ProcessAudioVolume(bool bIsTick);

#if WITH_EDITORONLY_DATA
	/* AnimationEditor中でのListenerのトランスフォーム更新 */
	void UpdateListenerTransformInAnimationEditor(const FEditorViewportClient* const anim_viewport);

	class FEditorViewportClient* CheckWhetherExistingAtAnimationEditor();

	/* スピーカーアイコン表示 */
	void UpdateSpriteTexture();

	UPROPERTY(transient, meta = (ToolTip = "Maximum distance for Sphere Component."))
	class UDrawSphereComponent* MaxDistanceSphereComponent;

	UPROPERTY(transient, meta = (ToolTip = "Minimum distance for Sphere Component."))
	class UDrawSphereComponent* MinDistanceSphereComponent;

	UPROPERTY(transient, meta = (ToolTip = "Economic distance for Sphere Component."))
	class UDrawSphereComponent* EconomicDistanceSphereComponent;

	UPROPERTY(transient, meta = (ToolTip = "Cull Distance for Sphere Component."))
	class UDrawSphereComponent* CullDistanceSphereComponent;
#endif

#if WITH_EDITOR
	/* 音源範囲の表示（距離減衰上書き時用） */
	void DrawDebugShape();

	/**
	* キュー情報を取得します。
	* @return true:キュー情報の取得に成功, false:キュー情報の取得に失敗
	* @param CueInfo ここにキュー情報が格納されます。
	*/
	bool GetCueInfo(CriAtomExCueInfo * CueInfo) const;

	/**
	* ワイヤフレーム表示用のオブジェクトを作成します。
	* また、親へのアタッチやコンポーネントの登録なども内部で行います。
	* @param Parent アタッチすべき親Sceneコンポーネントを指定します。
	* @param SphereRadius 球の半径(Unreal Unit)を指定します。
	* @param SphereColor ワイヤフレームの色を指定します。
	*/
	UDrawSphereComponent* CreateSphereComponent(USceneComponent* Parent, float SphereRadius, const FLinearColor & SphereColor);
#endif

	/* 再生終了時のイベント通知 */
	void NotifyAudioFinished();

	/* プレビュー終了検知用デリゲート */
	void OnWorldCleanedUp(UWorld* World, bool bSessionEnded, bool bCleanupResources);

	/* デリゲートハンドル */
	FDelegateHandle OnWorldCleanedUpHandle;

	/* 参照しているリージョンのハンドルが変更されたときに呼ばれるデリゲートのハンドル */
	FDelegateHandle DelegateOnRegionHandleChanged;

	/* ループ設定の適用 */
	void ApplyLoopSetting();

	void ChangeStatus(CriAtomExPlayerStatus PlayerStatus);

#if ENGINE_MAJOR_VERSION == 4 && ENGINE_MINOR_VERSION <= 23
	void SetActiveFlag(bool InActive);
#endif
	
#if WITH_EDITOR
public:
	/* スプライト表示フラグのセット */
	static void SetAnimSpriteShowFlags(const bool& ShowFlag);
	/* スプライト表示フラグの取得 */
	static bool GetAnimSpriteShowFlags();
	/* アニメーションエディタに存在しているか判定 */
	bool IsExistInAnimationEditor() const;
private:
	/* スプライト表示フラグの設定 */
	void SetSpriteShowFlags();

private:
	/* アニメーションエディタ時のスプライト表示フラグ */
	static bool bAnimSpriteShowFlags;
#endif

public:
	/** ビートシンクコールバックの実行 */
	virtual void OnExecuteBeatSyncCallback(const FAtomBeatSyncInfo& BeatSyncInfo) override;
	/** シーケンスコールバックの実行 */
	virtual void OnExecuteSequenceCallback(const FAtomSequenceInfo& SequenceInfo) override;

	/* ビートシンク用デリゲート変数 */
	UPROPERTY(BlueprintAssignable, Category = "Atom Callback")
	FAtomBeatSyncCallbackDelegate OnAtomBeatSyncCallback;
	/* シーケンス用デリゲート変数 */
	UPROPERTY(BlueprintAssignable, Category = "Atom Callback")
	FAtomSequenceCallbackDelegate OnAtomSequenceCallback;

#if WITH_EDITORONLY_DATA
private:
	/** Whether the component was playing in PIE/SIE. */
	bool WasPlayingInPIE;
#endif
};

/***************************************************************************
 *      関数宣言
 *      Prototype Functions
 ***************************************************************************/

/* --- end of file --- */
