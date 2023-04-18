/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2014-2018 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine 4
 * Module   : Atom Statics
 * File     : AtomStatics.h
 *
 ****************************************************************************/

/* 多重定義防止 */
#pragma once

/***************************************************************************
 *      インクルードファイル
 *      Include files
 ***************************************************************************/
/* Unreal Engine 4関連ヘッダ */
#include "Kismet/BlueprintFunctionLibrary.h"

/* CRIWAREプラグインヘッダ */
#include "CriWareApi.h"
#include "SoundAtomCue.h"
#include "AtomComponent.h"
#include "AtomComponentPool.h"
#include "SoundAtomConfig.h"

/* モジュールヘッダ */
#include "AtomStatics.generated.h"

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
USTRUCT(BlueprintType, meta = (ToolTip = "AtomComponentParams struct."))
struct CRIWARERUNTIME_API FAtomComponentParams
{
	GENERATED_USTRUCT_BODY()

	FAtomComponentParams();

	/* デフォルトのボリューム値 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sound", meta = (DisplayName = "Volume Multiplier", ToolTip = "Volume multiplier.", ClampMin = "0.0", ClampMax = "1.0"))
	float DefaultVolume;

	/* デフォルトのピッチ倍率 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sound", meta = (DisplayName = "Pitch Multiplier", ToolTip = "Pitch multiplier.", ClampMin = "0.0"))
	float DefaultPitchMultiplier;

	/* ここに開始時間(秒)を指定することで、音声データを途中から再生することも可能です。 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sound", meta = (DisplayName = "Start Time", ToolTip = "Start Time.", ClampMin = "0.0"))
	float StartTime;

	/* １つのコンポーネントで複数の音を同時に再生可能かどうか */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Atom", meta = (ToolTip = "Enable multiple sound playback."))
	uint8 bEnableMultipleSoundPlayback : 1;

	/* シームレス連結再生を使用するかどうか */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Atom", meta = (ToolTip = "Use playlist."))
	uint8 bUsePlaylist : 1;

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
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Atom", meta = (DisplayName = "Sound Object", ToolTip = "Sound object."))
	class UAtomSoundObject* SoundObject;

	/* 距離減衰設定（距離減衰アセットを使用） */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Attenuation, meta = (ToolTip = "Enable attenuation settings."))
	class USoundAttenuation* AttenuationSettings;

	/* デフォルトのブロックインデックス */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Atom", meta = (DisplayName = "Block Index", ToolTip = "Initial block index.", ClampMin = "0"))
	int32 DefaultBlockIndex;

	/* デフォルトのAISAC設定 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Atom", meta = (DisplayName = "AISAC Control", ToolTip = "Initial AISAC control."))
	TArray<struct FAtomAisacControlParam> DefaultAisacControl;

	/* デフォルトのセレクタラベル設定 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Atom", meta = (DisplayName = "Selector Label", ToolTip = "Initial selector label."))
	TArray<struct FAtomSelectorParam> DefaultSelectorLabel;

	/* ループ設定 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Atom", meta = (DisplayName = "Loop Setting", ToolTip = "If Inherited, uses Loop Setting from AtomSoundCue Asset."))
	EAtomLoopSetting LoopSetting;

	/* 回転。デフォルト値はFRotator::ZeroRotator */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sound", meta = (DisplayName = "Rotation"))
	FRotator Rotation;
};

/***************************************************************************
 *      変数宣言
 *      Prototype Variables
 ***************************************************************************/

/***************************************************************************
 *      クラス宣言
 *      Prototype Classes
 ***************************************************************************/
UCLASS(meta=(ToolTip = "AtomComponent class."))
class CRIWARERUNTIME_API UAtomStatics : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UAtomStatics();

	/**
	 * 指定された位置に音源を配置し、キューを再生します。
	 * ループ音を再生すると停止できないため、ワンショット音にのみ使用してください。
	 * ループ音の再生には SpawnSoundAtLocation 関数を使用してください。
	 * 本関数で配置した音源はどのActorにも追従しません。
	 * UE4標準オーディオのUGameplayStatics::PlaySoundAtLocation互換のAPIです。
	 * （再生する音声がAtomCueアセットである点が異なります。）
	 * 各引数の意味はUGamePlayStatics::SpawnSoundAtLocation関数に従います。
	 *
	 * @param WorldContextObject WorldContextObjectを指定します。
	 * @param Sound Atomキューを指定します。
	 * @param Location 音源を配置する座標を指定します。
	 * @param Rotation 回転を指定します。
	 * @param VolumeMultiplier 音量の倍率を指定します。
	 * @param PitchMultiplier ピッチの倍率を指定します。
	 * @param StartTime ここに開始時間(秒)を指定することで、音声データを途中から再生することも可能です。
	 * @param AttenuationSettings Attenuationの設定を指定します。
	 * @param ConcurrencySettings Concurrencyの設定を指定します。
	 */
	UFUNCTION(BlueprintCallable, Category="Atom", meta=(WorldContext="WorldContextObject", AdvancedDisplay = "3", UnsafeDuringActorConstruction = "true"))
	static void PlaySoundAtLocation(UObject* WorldContextObject, class USoundAtomCue* Sound, FVector Location, FRotator Rotation = FRotator::ZeroRotator, float VolumeMultiplier = 1.f, float PitchMultiplier = 1.f, float StartTime = 0.f, class USoundAttenuation* AttenuationSettings = NULL, class USoundConcurrency* ConcurrencySettings = nullptr);

	/** PlaySoundAtLocation関数からRotator引数を省いたバージョン。 */
	static void PlaySoundAtLocation(UObject* WorldContextObject, class USoundAtomCue* Sound, FVector Location, float VolumeMultiplier = 1.f, float PitchMultiplier = 1.f, float StartTime = 0.f, class USoundAttenuation* AttenuationSettings = NULL, class USoundConcurrency* ConcurrencySettings = nullptr);

	/**
	 * UGameplayStatics::SpawnSound2D互換のAPIです。
	 * （再生する音声がAtomCueアセットである点が異なります。）
	 *
	 * @param WorldContextObject WorldContextObjectを指定します。
	 * @param Sound Atomキューを指定します。
	 * @param PitchMultiplier ピッチの倍率を指定します。
	 * @param StartTime ここに開始時間(秒)を指定することで、音声データを途中から再生することも可能です。
	 * @param bPersistAcrossLevelTransition パーシスタントレベルをまたいで生存するかどうか指定します。
	 * @param bAutoDestroy 再生が完了したとき自動的にオブジェクトを削除するかどうか指定します。
	 * @return 指定したキューを再生するAtomComponentのリファレンスが返ります。
	 */
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category = "Atom", meta = (WorldContext = "WorldContextObject", AdvancedDisplay = "2", UnsafeDuringActorConstruction = "true", Keywords = "Play"))
	static class UAtomComponent* SpawnSound2D(const UObject* WorldContextObject, USoundAtomCue* Sound, float PitchMultiplier = 1.f, float StartTime = 0.f, bool bPersistAcrossLevelTransition = false, bool bAutoDestroy = true);

	/**
	 * レベルがアンロードされても破棄されないAtomComponentを作成します。
	 * AtomComponentの作成のみを行い、発音は行いません。
	 * 任意のタイミングでキューを設定し、発音を開始してください。
	 * 活用例: AISACコントロール値の指定など、発音開始前に設定が必要な音声をレベルをまたいで再生したい場合...等
	 *
	 * @param WorldContextObject WorldContextObjectを指定します。
	 * @param bAutoDestroy 再生が完了したとき自動的にオブジェクトを削除するかどうか指定します。
	 * @return レベルがアンロードされても破棄されないAtomComponentのリファレンスが返ります。
	 */
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category = "Atom", meta = (WorldContext = "WorldContextObject", AdvancedDisplay = "2", UnsafeDuringActorConstruction = "true", Keywords = "Create"))
	static class UAtomComponent* CreateRootedAtomComponent(const UObject* WorldContextObject, bool bAutoDestroy = true);

	/**
	 * 指定された位置に音源を配置し、キューを再生します。
	 * 再生中のAtomComponentを返すため、ループ音を再生しても停止することが可能です。
	 * 本関数で配置した音源はどのActorにも追従しません。
	 * UE4標準オーディオのUGameplayStatics::SpawnSoundAtLocation互換のAPIです。
	 * （再生する音声がAtomCueアセットである点が異なります。）
	 * 各引数の意味はUGamePlayStatics::SpawnSoundAtLocation関数に従います。
	 *
	 * @param WorldContextObject WorldContextObjectを指定します。
	 * @param Sound Atomキューを指定します。
	 * @param Location 音源を配置する座標を指定します。
	 * @param Rotation 回転を指定します。
	 * @param VolumeMultiplier 音量の倍率を指定します。
	 * @param PitchMultiplier ピッチの倍率を指定します。
	 * @param StartTime ここに開始時間(秒)を指定することで、音声データを途中から再生することも可能です。
	 * @param AttenuationSettings Attenuationの設定を指定します。
	 * @param ConcurrencySettings Concurrencyの設定を指定します。
	 * @param bAutoDestroy 再生が完了したとき自動的にオブジェクトを削除するかどうか指定します。
	 * @return 指定したキューを再生するAtomComponentのリファレンスが返ります。
	 */
	UFUNCTION(BlueprintCallable, Category="Atom", meta=(WorldContext="WorldContextObject", AdvancedDisplay = "3", UnsafeDuringActorConstruction = "true", Keywords = "play"))
	static class UAtomComponent* SpawnSoundAtLocation(const UObject* WorldContextObject, class USoundAtomCue* Sound, FVector Location, FRotator Rotation = FRotator::ZeroRotator, float VolumeMultiplier = 1.f, float PitchMultiplier = 1.f, float StartTime = 0.f, class USoundAttenuation* AttenuationSettings = NULL, class USoundConcurrency* ConcurrencySettings = nullptr, bool bAutoDestroy = true);

	/**
	 * 指定されたコンポーネントに追従する音源を配置し、キューを再生します。
	 * UE4標準オーディオのUGameplayStatics::SpawnSoundAttached互換のAPIです。
	 * （再生する音声がAtomCueアセットである点が異なります。）
	 * 各引数の意味はUGamePlayStatics::SpawnSoundAttached関数に従います。
	 *
	 * @param Sound Atomキューを指定します。
	 * @param AttachToComponent ここで指定したコンポーネントに追従します。
	 * @param AttachPointName アタッチするボーンの名前を指定します。
	 * @param Location 音源を配置する座標を指定します。
	 * @param Rotation 回転を指定します。
	 * @param LocationType ロケーションタイプを指定します。KeepWorldPosition又はKeepRelativeOffsetのみ指定できます。
	 * @param bStopWhenAttachedToDestroyed 追従しているコンポーネントが破棄されたとき音声を停止するかどうか指定します。
	 * @param VolumeMultiplier 音量の倍率を指定します。
	 * @param PitchMultiplier ピッチの倍率を指定します。
	 * @param StartTime ここに開始時間(秒)を指定することで、音声データを途中から再生することも可能です。
	 * @param AttenuationSettings Attenuationの設定を指定します。
	 * @param ConcurrencySettings 利用できません（内部で無視されます）
	 * @param bAutoDestroy 再生が完了したとき自動的にオブジェクトを削除するかどうか指定します。
	 * @return 指定したキューを再生するAtomComponentのリファレンスが返ります。
	 */
	UFUNCTION(BlueprintCallable, Category="Atom", meta=(AdvancedDisplay = "2", UnsafeDuringActorConstruction = "true"))
	static class UAtomComponent* SpawnSoundAttached(class USoundAtomCue* Sound, class USceneComponent* AttachToComponent, FName AttachPointName = NAME_None, FVector Location = FVector(ForceInit), FRotator Rotation = FRotator::ZeroRotator, EAttachLocation::Type LocationType = EAttachLocation::KeepRelativeOffset, bool bStopWhenAttachedToDestroyed = false, float VolumeMultiplier = 1.f, float PitchMultiplier = 1.f, float StartTime = 0.f, class USoundAttenuation* AttenuationSettings = NULL, class USoundConcurrency* ConcurrencySettings = nullptr, bool bAutoDestroy = true);

	/** SpawnSoundAttached関数からRotator引数を省いたバージョン。 */
	static class UAtomComponent* SpawnSoundAttached(class USoundAtomCue* Sound, class USceneComponent* AttachToComponent, FName AttachPointName = NAME_None, FVector Location = FVector(ForceInit), EAttachLocation::Type LocationType = EAttachLocation::KeepRelativeOffset, bool bStopWhenAttachedToDestroyed = false, float VolumeMultiplier = 1.f, float PitchMultiplier = 1.f, float StartTime = 0.f, class USoundAttenuation* AttenuationSettings = NULL, class USoundConcurrency* ConcurrencySettings = nullptr, bool bAutoDestroy = true);

	/**
	 * 指定されたコンポーネントに追従する音源を配置し、キューを再生します。
	 * 各引数の意味はUGamePlayStatics::SpawnSoundAttached関数に従います。
	 * ※本関数は将来のバージョンで削除される予定です。SpawnSoundAttached関数へ移行をお願いいたします。
	 */
#if ENGINE_MAJOR_VERSION == 4 && ENGINE_MINOR_VERSION >= 22
	UE_DEPRECATED(4.23, "UAtomStatics::PlaySoundAttached has been deprecated. This function will be removed in UE4.25. Please use UAtomStatics::SpawnSoundAttached instead.")
#endif
	UFUNCTION(BlueprintCallable, Category="Atom", meta=(DeprecatedFunction, DeprecationMessage = "This function will be removed in UE4.25. Please use UAtomStatics::SpawnSoundAttached function instead.", AdvancedDisplay = "2", UnsafeDuringActorConstruction = "true"))
	static class UAtomComponent* PlaySoundAttached(class USoundAtomCue* Sound, class USceneComponent* AttachToComponent, FName AttachPointName = NAME_None, FVector Location = FVector(ForceInit), bool bStopWhenAttachedToDestroyed = false, float VolumeMultiplier = 1.f, float PitchMultiplier = 1.f, float StartTime = 0.f, class USoundAttenuation* AttenuationSettings = NULL);

	/**
	 * 3Dアニメーションに音を付けます。
	 *
	 * @param Sound Atomキューを指定します。
	 * @param AttachToComponent ここで指定したコンポーネントに追従します。
	 * @param AttachPointName アタッチするボーンの名前を指定します。
	 * @param Location 音源を配置する座標を指定します。
	 * @param bStopWhenAttachedToDestroyed 追従しているコンポーネントが破棄されたとき音声を停止するかどうか指定します。
	 * @param VolumeMultiplier 音量の倍率を指定します。
	 * @param PitchMultiplier ピッチの倍率を指定します。
	 * @param StartTime ここに開始時間(秒)を指定することで、音声データを途中から再生することも可能です。
	 * @param AttenuationSettings Attenuationの設定を指定します。
	 * @param bFollow trueを指定するとアニメーションに応じて音源が移動します。falseを指定すると音源は発音位置にとどまります。
	 * @return 指定したキューを再生するAtomComponentのリファレンスが返ります。
	 */
	UFUNCTION(BlueprintCallable, Category = "Atom", meta = (AdvancedDisplay = "2", UnsafeDuringActorConstruction = "true"))
	static class UAtomComponent* PlaySoundForAnimNotify(class USoundAtomCue* Sound, class USceneComponent* AttachToComponent, FName AttachPointName = NAME_None, FVector Location = FVector(ForceInit), bool bStopWhenAttachedToDestroyed = false, float VolumeMultiplier = 1.f, float PitchMultiplier = 1.f, float StartTime = 0.f, class USoundAttenuation* AttenuationSettings = NULL, bool bFollow = false);

	/**
	 * ゲーム中の音声全て一時停止、もしくは再開します。
	 * ポーズ中にレベルを移動した場合、レベル移動時にポーズが解除されます。 
	 *
	 * @param bPause ここにtrueを指定すると一時停止します。falseを指定すると、再生を再開します。
	 */
	UFUNCTION(BlueprintCallable, Category="Atom")
	static void PauseAudioOutput(bool bPause);

	/**
	 * ゲーム中の音声を全て停止します。
	 */
	UFUNCTION(BlueprintCallable, Category="Atom")
	static void StopAllSounds();

	/**
	 * AtomCraft上で作成したゲーム変数の現在の値を取得します。
	 *
	 * @param GameVariableName ゲーム変数名。
	 * @return 指定された名前のゲーム変数の値が返ります。
	 */
	UFUNCTION(BlueprintCallable, Category = "Atom")
	static float GetAtomGameVariable(FString GameVariableName) { return criAtomEx_GetGameVariableByName(TCHAR_TO_UTF8(*GameVariableName)); }

	/**
	 * AtomCraft上で作成したゲーム変数の現在の値をセットします。
	 *
	 * @param GameVariableName ゲーム変数名。
	 * @param Value 指定した名前のゲーム変数に適用する新しい値。
	 */
	UFUNCTION(BlueprintCallable, Category = "Atom")
	static void SetAtomGameVariable(FString GameVariableName, float Value) { criAtomEx_SetGameVariableByName(TCHAR_TO_UTF8(*GameVariableName), Value); }

	/**
	 * Atom Configアセットをロードします。
	 * 既にAtom Configアセットがロード済みの場合、既存の設定をアンロードし、 [Acf Object] で指定されたものに変更します。
	 *
	 * @param AcfObject ロードしたい Atom Config アセットを指定します。
	 * @return 成功/失敗が返ります。
	 */
	UFUNCTION(BlueprintCallable, Category = "Atom", meta = (UnsafeDuringActorConstruction = "true"))
	static bool LoadAtomConfig(USoundAtomConfig* AcfObject);

	/* C++ API */
	static UAtomComponent* SpawnSoundAtLocation(const UObject* WorldContextObject, USoundAtomCueSheet* CueSheet, FString CueName, FVector Location, FRotator Rotation = FRotator::ZeroRotator, float VolumeMultiplier = 1.f, float PitchMultiplier = 1.f, float StartTime = 0.f, class USoundAttenuation* AttenuationSettings = NULL, class USoundConcurrency* ConcurrencySettings = nullptr, bool bAutoDestroy = true);
	static UAtomComponent* SpawnSoundAttached(USoundAtomCueSheet* CueSheet, FString CueName, USceneComponent* AttachToComponent, FName AttachPointName = NAME_None, FVector Location = FVector(ForceInit), FRotator Rotation = FRotator::ZeroRotator, EAttachLocation::Type LocationType = EAttachLocation::KeepRelativeOffset, bool bStopWhenAttachedToDestroyed = false, float VolumeMultiplier = 1.f, float PitchMultiplier = 1.f, float StartTime = 0.f, USoundAttenuation* AttenuationSettings = nullptr, USoundConcurrency* ConcurrencySettings = nullptr, bool bAutoDestroy = true);

	/**
	 * 距離減衰のかかり具合を再生中の全 AtomComponent と Listener について一括更新します。
	 * ※本関数は実験的な機能を提供するものであり、将来のバージョンで削除対象となっています。
	 */
	UFUNCTION(BlueprintCallable, Category = "Atom Experimental", meta = (ToolTip = "Update Distance Factor."))
	static void UpdateDistanceFactorForAllSounds(float ArgDistanceFactor);

	/**
	 * AtomPlayGate で再生された AtomComponent の ID を、AtomPlayGate と MeshComponent の識別子に紐づけて辞書に追加します。
	 * この関数は AnimNotifyState_AtomPlayGate ブループリント内でのみ使用することを想定しています。
	 * CRIWARE UE4 Plugin のユーザが本関数を呼び出すことは不正動作の原因となるため推奨しません
	 */
	UFUNCTION(BlueprintCallable, Category = "Atom")
		static void AddToAtomComponentIds(UObject* AtomPlayGateRef, UObject* SkeltalMeshComponentRef, int32 AtomComponentId);

	/**
	 * AtomPlayGate と MeshComponent に紐付いた全ての AtomComponent を停止します。
	 * この関数は AnimNotifyState_AtomPlayGate ブループリント内でのみ使用することを想定しています。
	 * CRIWARE UE4 Plugin のユーザが本関数を呼び出すことは不正動作の原因となるため推奨しません
	 */
	UFUNCTION(BlueprintCallable, Category = "Atom")
	static void StopAllSoundsForKeyFromAtomComponentIds(UObject* AtomPlayGateRef, UObject* SkeltalMeshComponentRef);

	/**
	* カリングすべきかどうか判定します。
	* @param Sound キューアセットを指定します。
	* @param Location 音源の位置を指定します。
	* @param AttenuationSettings UE4Attenuation設定を指定します。(nullptr可)
	* @param Is3DSound 3Dサウンドなのかどうか指定します。
	* @return true:カリングすべき, false:カリングすべきではない
	*/
	static bool ShouldCullSoundPlayback(USoundAtomCue* Sound, FVector Location, const FSoundAttenuationSettings* AttenuationSettings, bool Is3DSound);

	/* 現在のDistanceFactorを取得する */
	static float GetCurrentDistanceFactor();

	/* [プラグイン開発者専用]現在のDistanceFactorを設定する */
	static void SetCurrentDistanceFactor(float InDistanceFactor);

	/**
	* リスナーが現在影響を受けている AtomAudioVolume を取得します
	* @param PlayerIndex プレイヤー番号
	* @param TypeNum 取得したい AtomAudioVolume のタイプ
	* @return リスナーが影響を受けている AtomAudioVolume へのポインタ
	*/
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Atom Listener")
	static AAtomAudioVolume* GetAudioVolumeAffectingListener(const int32 PlayerIndex, const EAtomAudioVolumeType TypeNum);

	/**
	* リスナーのリージョンの取得
	* @param PlayerIndex プレイヤー番号
	* @return リスナーに設定されているリージョン
	*/
	UFUNCTION(BlueprintCallable, Category = "Atom Listener")
	static UAtom3dRegion* GetListenerRegion(const int32 PlayerIndex = 0);

	/**
	* リスナーのリージョンの設定
	* @param Region リスナーに設定するリージョン
	* @param PlayerIndex プレイヤー番号
	*/
	UFUNCTION(BlueprintCallable, Category = "Atom Listener")
	static void SetListenerRegion(UAtom3dRegion* Region, const int32 PlayerIndex = 0);

	/**
	* リスナーのフォーカスポイント情報を取得します
	* @param PlayerIndex プレイヤー番号
	* @return 指定したリスナーのフォーカスポイント情報が返ります
	*/
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Atom Listener")
	static FAtomListenerFocusPointInfo GetListenerFocusPointInfo(const int32 PlayerIndex = 0);

	/**
	* リスナーのフォーカスポイント情報を変更します
	* @param FocusPointInfo 変更させたいフォーカスポイント情報を指定します
	* @param PlayerIndex プレイヤー番号
	*/
	UFUNCTION(BlueprintCallable, Category = "Atom Listener")
	static void SetListenerFocusPointInfo(const FAtomListenerFocusPointInfo FocusPointInfo, const int32 PlayerIndex = 0);

	/**
	* リスナーのフォーカスポイント情報の内、フォーカスを当てるアクターを変更します
	* @param TargetActor フォーカスを当てたいアクターを指定します
	* @param PlayerIndex プレイヤー番号
	*/
	UFUNCTION(BlueprintCallable, Category = "Atom Listener")
	static void SetListenerFocusPointTargetActor(AActor* TargetActor, const int32 PlayerIndex = 0);

	/**
	* リスナーのフォーカスポイント情報の内、フォーカスを当てるコンポーネントを変更します
	* @param TargetComponent フォーカスを当てたいコンポーネントを指定します
	* @param PlayerIndex プレイヤー番号
	*/
	UFUNCTION(BlueprintCallable, Category = "Atom Listener")
	static void SetListenerFocusPointTargetComponent(USceneComponent* TargetComponent, const int32 PlayerIndex = 0);

	/**
	* リスナーのフォーカスポイント情報の内、距離比率を変更します
	* @param DistanceLevel リスナーとフォーカスポイントとの距離比率を指定します
	* @param PlayerIndex プレイヤー番号
	*/
	UFUNCTION(BlueprintCallable, Category = "Atom Listener")
	static void SetListenerFocusPointDistanceLevel(const float DistanceLevel, const int32 PlayerIndex = 0);

	/**
	* リスナーのフォーカスポイント情報の内、定位比率を変更します
	* @param DirectionLevel リスナーとフォーカスポイントとの定位比率を指定します
	* @param PlayerIndex プレイヤー番号
	*/
	UFUNCTION(BlueprintCallable, Category = "Atom Listener")
	static void SetListenerFocusPointDirectionLevel(const float DirectionLevel, const int32 PlayerIndex = 0);

	/**
	* リスニングポイントの取得
	* @param PlayerIndex プレイヤー番号
	* @return リスニングポイント
	*/
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Atom Listener")
	static FVector GetListeningPoint(const int32 PlayerIndex = 0);

	/**
	 * 指定された位置に音源を配置し、キューを再生します。
	 * ループ音を再生すると停止できないため、ワンショット音にのみ使用してください。
	 * ループ音の再生には SpawnAtomSoundAtLocation 関数を使用してください。
	 * 本関数で配置した音源はどのActorにも追従しません。
	 *
	 * @param WorldContextObject WorldContextObjectを指定します。
	 * @param Sound Atomキューを指定します。
	 * @param Location 音源を配置する座標を指定します。
	 * @param Params 任意のパラメーターを設定したAtomComponentParams構造体を指定します。
	 */
	UFUNCTION(BlueprintCallable, Category = "Atom", meta = (WorldContext = "WorldContextObject", UnsafeDuringActorConstruction = "true"))
	static void PlayAtomSoundAtLocation(const UObject* WorldContextObject, class USoundAtomCue* Sound, FVector Location, const FAtomComponentParams& Params);

	/**
	 * 指定された位置に音源を配置し、キューを再生します。
	 * ループ音を再生すると停止できないため、ワンショット音にのみ使用してください。
	 * ループ音の再生には SpawnAtomSoundAtLocation 関数を使用してください。
	 * 本関数で配置した音源はどのActorにも追従しません。
	 * キューシートとキュー名を指定するバージョンです。
	 * 注意: カリング機能やEconomic-Tick機能は適用されません。
	 *
	 * @param WorldContextObject WorldContextObjectを指定します。
	 * @param CueSheet Atomキューシートを指定します。
	 * @param CueName キュー名を指定します。
	 * @param Location 音源を配置する座標を指定します。
	 * @param Params 任意のパラメーターを設定したAtomComponentParams構造体を指定します。
	 */
	UFUNCTION(BlueprintCallable, Category = "Atom", meta = (WorldContext = "WorldContextObject", UnsafeDuringActorConstruction = "true"))
	static void PlayAtomSoundAtLocationByName(const UObject* WorldContextObject, class USoundAtomCueSheet* CueSheet, FString CueName, FVector Location, const FAtomComponentParams& Params);

	/**
	 * AtomComponentを生成し、2Dサウンドを再生します。
	 *
	 * @param WorldContextObject WorldContextObjectを指定します。
	 * @param Sound Atomキューを指定します。
	 * @param Params 任意のパラメーターを設定したAtomComponentParams構造体を指定します。
	 * @param bPersistAcrossLevelTransition パーシスタントレベルをまたいで生存するかどうか指定します。
	 * @param bAutoDestroy 再生が完了したとき自動的にオブジェクトを削除するかどうか指定します。
	 * @return 指定したキューを再生するAtomComponentのリファレンスが返ります。
	 */
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category = "Atom", meta = (WorldContext = "WorldContextObject", AdvancedDisplay = "3", UnsafeDuringActorConstruction = "true", Keywords = "Play"))
	static class UAtomComponent* SpawnAtomSound2D(const UObject* WorldContextObject, USoundAtomCue* Sound, const FAtomComponentParams& Params, bool bPersistAcrossLevelTransition = false, bool bAutoDestroy = true);

	/**
	 * AtomComponentを生成し、2Dサウンドを再生します。
	 * キューシートとキュー名を指定するバージョンです。
	 *
	 * @param WorldContextObject WorldContextObjectを指定します。
	 * @param CueSheet Atomキューシートを指定します。
	 * @param CueName キュー名を指定します。
	 * @param Params 任意のパラメーターを設定したAtomComponentParams構造体を指定します。
	 * @param bPersistAcrossLevelTransition パーシスタントレベルをまたいで生存するかどうか指定します。
	 * @param bAutoDestroy 再生が完了したとき自動的にオブジェクトを削除するかどうか指定します。
	 * @return 指定したキューを再生するAtomComponentのリファレンスが返ります。
	 */
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category = "Atom", meta = (WorldContext = "WorldContextObject", AdvancedDisplay = "4", UnsafeDuringActorConstruction = "true", Keywords = "Play"))
	static class UAtomComponent* SpawnAtomSound2DByName(const UObject* WorldContextObject, class USoundAtomCueSheet* CueSheet, FString CueName, const FAtomComponentParams& Params, bool bPersistAcrossLevelTransition = false, bool bAutoDestroy = true);

	/**
	 * 指定された位置に音源を配置し、キューを再生します。
	 * 再生中のAtomComponentを返すため、ループ音を再生しても停止することが可能です。
	 * 本関数で配置した音源はどのActorにも追従しません。
	 *
	 * @param WorldContextObject WorldContextObjectを指定します。
	 * @param Sound Atomキューを指定します。
	 * @param Location 音源を配置する座標を指定します。
	 * @param Params 任意のパラメーターを設定したAtomComponentParams構造体を指定します。
	 * @param bAutoDestroy 再生が完了したとき自動的にオブジェクトを削除するかどうか指定します。
	 * @return 指定したキューを再生するAtomComponentのリファレンスが返ります。
	 */
	UFUNCTION(BlueprintCallable, Category = "Atom", meta = (WorldContext = "WorldContextObject", AdvancedDisplay = "4", UnsafeDuringActorConstruction = "true", Keywords = "play"))
	static class UAtomComponent* SpawnAtomSoundAtLocation(const UObject* WorldContextObject, class USoundAtomCue* Sound, FVector Location, const FAtomComponentParams& Params, bool bAutoDestroy = true);

	/**
	 * 指定された位置に音源を配置し、キューを再生します。
	 * 再生中のAtomComponentを返すため、ループ音を再生しても停止することが可能です。
	 * 本関数で配置した音源はどのActorにも追従しません。
	 * キューシートとキュー名を指定するバージョンです。
	 * 注意: カリング機能やEconomic-Tick機能は適用されません。
	 *
	 * @param WorldContextObject WorldContextObjectを指定します。
	 * @param CueSheet Atomキューシートを指定します。
	 * @param CueName キュー名を指定します。
	 * @param Location 音源を配置する座標を指定します。
	 * @param Params 任意のパラメーターを設定したAtomComponentParams構造体を指定します。
	 * @param bAutoDestroy 再生が完了したとき自動的にオブジェクトを削除するかどうか指定します。
	 * @return 指定したキューを再生するAtomComponentのリファレンスが返ります。
	 */
	UFUNCTION(BlueprintCallable, Category = "Atom", meta = (WorldContext = "WorldContextObject", AdvancedDisplay = "5", UnsafeDuringActorConstruction = "true", Keywords = "play"))
	static class UAtomComponent* SpawnAtomSoundAtLocationByName(const UObject* WorldContextObject, class USoundAtomCueSheet* CueSheet, FString CueName, FVector Location, const FAtomComponentParams& Params, bool bAutoDestroy = true);

	/**
	 * 指定されたコンポーネントに追従する音源を配置し、キューを再生します。
	 *
	 * @param Sound Atomキューを指定します。
	 * @param AttachToComponent ここで指定したコンポーネントに追従します。
	 * @param Params 任意のパラメーターを設定したAtomComponentParams構造体を指定します。
	 * @param AttachPointName アタッチするボーンの名前を指定します。
	 * @param Location 音源を配置する座標を指定します。
	 * @param LocationType ロケーションタイプを指定します。
	 * @param bStopWhenAttachedToDestroyed 追従しているコンポーネントが破棄されたとき音声を停止するかどうか指定します。
	 * @param bAutoDestroy 再生が完了したとき自動的にオブジェクトを削除するかどうか指定します。
	 * @return 指定したキューを再生するAtomComponentのリファレンスが返ります。
	 */
	UFUNCTION(BlueprintCallable, Category = "Atom", meta = (AdvancedDisplay = "3", UnsafeDuringActorConstruction = "true"))
	static class UAtomComponent* SpawnAtomSoundAttached(class USoundAtomCue* Sound, class USceneComponent* AttachToComponent, const FAtomComponentParams& Params, FName AttachPointName = NAME_None, FVector Location = FVector(ForceInit), EAttachLocation::Type LocationType = EAttachLocation::KeepRelativeOffset, bool bStopWhenAttachedToDestroyed = false, bool bAutoDestroy = true);

	/**
	 * 指定されたコンポーネントに追従する音源を配置し、キューを再生します。
	 * キューシートとキュー名を指定するバージョンです。
	 * 注意: カリング機能やEconomic-Tick機能は適用されません。
	 *
	 * @param CueSheet Atomキューシートを指定します。
	 * @param CueName キュー名を指定します。
	 * @param AttachToComponent ここで指定したコンポーネントに追従します。
	 * @param Params 任意のパラメーターを設定したAtomComponentParams構造体を指定します。
	 * @param AttachPointName アタッチするボーンの名前を指定します。
	 * @param Location 音源を配置する座標を指定します。
	 * @param LocationType ロケーションタイプを指定します。
	 * @param bStopWhenAttachedToDestroyed 追従しているコンポーネントが破棄されたとき音声を停止するかどうか指定します。
	 * @param bAutoDestroy 再生が完了したとき自動的にオブジェクトを削除するかどうか指定します。
	 * @return 指定したキューを再生するAtomComponentのリファレンスが返ります。
	 */
	UFUNCTION(BlueprintCallable, Category = "Atom", meta = (AdvancedDisplay = "3", UnsafeDuringActorConstruction = "true"))
	static class UAtomComponent* SpawnAtomSoundAttachedByName(class USoundAtomCueSheet* CueSheet, FString CueName, class USceneComponent* AttachToComponent, const FAtomComponentParams& Params, FName AttachPointName = NAME_None, FVector Location = FVector(ForceInit), EAttachLocation::Type LocationType = EAttachLocation::KeepRelativeOffset, bool bStopWhenAttachedToDestroyed = false, bool bAutoDestroy = true);

private:
	static UAtomComponent* AllocateComponent();
	static void ResumeAudioOutput(void* Object);
	/* AtomPlayGate から再生された AtomComponent の ID を管理するための辞書
	 * AtomPlayGateインスタンスとMeshComponentインスタンスのUniqueIDのペアをキーとして、AtomComponent ID を保持  */
	static TMap<TPair<int32, int32>, int32> DictForAtomComponentIdsAtomPlayGateCreated;
	static float CurrentDistanceFactor;

	/**
	 * 再生すべき音源の絶対座標を取得します。
	 * PlaySoundForAnimNotify関数内で使用します。
	 *
	 * @param AttachToComponent アタッチ先のコンポーネント
	 * @param AttachPointNameアタッチ先のボーンの名前
	 * @param Location 座標
	 * @param LocationType 座標指定タイプ
	 * @param AbsLocation [out]計算結果がここに格納されます
	 */
	static void CalculateAbsLocationToPlaySounds(USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, EAttachLocation::Type LocationType, FVector & AbsLocation);

	/* ContextからWorldSettingsを取得します。 */
	static AWorldSettings* GetWorldSettings(const UObject* WorldContextObject);

	/**
	* AtomComponentをユニークな名前に変更します。
	* @return true: succeeded, false: failed because 'Outer' is nullptr
	*/
	static bool RenameAtomComponentAsUnique(UAtomComponent* AtomComponent, UObject* Outer);

	/* FAtomComponentParamsの情報を全てAtomComponentに適用します。 */
	static void SetParamsToAtomComponent(UAtomComponent* AtomComponent, const FAtomComponentParams& Params);
	
	/* Context情報を元にゲーム実行中かどうかを判定します。 */
	static bool IsInGameWorld(const UObject* WorldContextObject);
	
	static UAtomComponent* SpawnAtomSound2D_CommonInternal(const UObject* WorldContextObject, const FAtomComponentParams& Params, bool bPersistAcrossLevelTransition, bool bAutoDestroy, const TCHAR * FunctionName);
	static UAtomComponent* SpawnAtomSoundAtLocation_CommonInternal(const UObject* WorldContextObject, FVector Location, const FAtomComponentParams& Params, bool bAutoDestroy, const TCHAR * FunctionName);
	static UAtomComponent* SpawnAtomSoundAttached_CommonInternal(class USceneComponent* AttachToComponent, const FAtomComponentParams& Params, FName AttachPointName, FVector Location, EAttachLocation::Type LocationType, bool bStopWhenAttachedToDestroyed, bool bAutoDestroy, const TCHAR * FunctionName);
};

/***************************************************************************
 *      関数宣言
 *      Prototype Functions
 ***************************************************************************/

/* --- end of file --- */
