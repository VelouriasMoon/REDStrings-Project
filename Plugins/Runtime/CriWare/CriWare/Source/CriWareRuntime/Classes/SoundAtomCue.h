/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2013-2020 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine 4
 * Module   : Atom Sound Data (Cue)
 * File     : SoundAtomCue.h
 *
 ****************************************************************************/

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/ScriptMacros.h"
#include "Sound/SoundConcurrency.h"
#include "Tickable.h"
#include "../Launch/Resources/Version.h"

#include "SoundAtomCueSheet.h"
#include "CriWarePluginSettings.h"
#include "Atom3dRegion.h"

#include "SoundAtomCue.generated.h"

#ifndef UE_DEPRECATED
#define UE_DEPRECATED DEPRECATED
#endif

struct FSoundAttenuationSettings;

UCLASS(hidecategories=Object, editinlinenew, BlueprintType, meta = (ToolTip = "SoundAtomCue class."))
class CRIWARERUNTIME_API USoundAtomCue : public UObject, public FTickableGameObject
{
	GENERATED_BODY()

public:
	USoundAtomCue(const FObjectInitializer& ObjectInitializer);

public:
	/* キューシートオブジェクト */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sound Atom Cue", meta = (ToolTip = "The AtomCueSheet that holds presets and data for this Cue."))
	USoundAtomCueSheet* CueSheet;

	/* キュー名 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sound Atom Cue", meta = (ToolTip = "The Cue name."), AssetRegistrySearchable)
	FString CueName;

	/* ループ設定 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sound Atom Cue", meta = (ToolTip = "Loop Setting. Inherited: Use Loop settings in Cue preset from SoundAtomCueSheet."), AssetRegistrySearchable)
	EAtomLoopSetting LoopSetting;

	// FIXME
	/* Atomパラメータを検索して適用するかどうか */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sound Atom Cue", meta = (ToolTip = "Searches AtomParameterComponent of the owner actor and applies it on play."))
	bool bApplyAtomParameter;

	/** Duration of sound in seconds. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Info, AssetRegistrySearchable)
	float Duration;

	/* 初めのトラックの初めの波形の長さ(秒) */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Info, meta = (ToolTip = "The duration in seconds of the first wave used by this Cue."), AssetRegistrySearchable)
	float FirstWaveDuration;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Attenuation")
	class USoundAttenuation* AttenuationSettings;
	
	/* AudioVolumeの機能を有効にするかどうか */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AudioVolume", meta = (ToolTip = "Enable AudioVolume."))
	bool bEnableAudioVolume;

	/* Soundの座標が変更するかどうか */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AudioVolume", meta = (ToolTip = "Is Movable Sound."))
	bool bIsMovable;

	/* AudioVolume間の移動が発生するかどうか */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AudioVolume", meta = (ToolTip = "Can Straddle audio volume."))
	bool bCanStraddleAudioVolume;

	/* リスナとの距離を見てAtomSoundCueでのAudioVolume利用をするかどうかを決める機能を有効にするかどうか */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AudioVolume", meta = (Display="Enable Audio Volume with Distance", ToolTip = "Enable AudioVolume with distance between this sound and any audio volume."))
	bool bUseDistanceToEnableAudioVolume;

	/* AudioVolumeを有効にするリスナとAtomComponentの距離 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AudioVolume", meta = (EditCondition = "bUseDistanceToEnableAudioVolume", ToolTip = "Maximum distance between this sound and any audio volume."))
	float MinDistanceToEnableAudioVolume;

	/* AreaSoundVolumeの機能を有効にするかどうか */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AreaSoundVolume", meta = (ToolTip = "Enable AreaSoundVolume."))
	bool bUseAreaSoundVolume;

	/* AtomAreaSoundVolumeのパラメータ更新のRate */
	/* 設定値のTickが回るたびに1回情報が更新されます */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AreaSoundVolume", meta = (ToolTip = "UpdateRate.", EditCondition = "bUseAreaSoundVolume", ClampMin = "1", UIMin = "1"))
	int32 UpdateRateForFrame;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Atom 3d Transceiver", meta = (ToolTip = "Atom 3d Sound Region"))
	UAtom3dRegion* Region;

#if WITH_EDITORONLY_DATA
	/** A color to identify this cue in editor. */
	UPROPERTY(EditDefaultsOnly, Category = "Sound Atom Cue", meta = (ToolTip = "A color to identify this cue in editor."))
	FColor CueColor;

	/* 距離減衰デバッグ表示時のスフィアの色 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attenuation", meta = (ToolTip = "Audio Outer Radius Color."))
	FColor AudioOuterRadiusColor = FColor(255, 153, 0);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attenuation", meta = (ToolTip = "Audio Inner Radius Color."))
	FColor AudioInnerRadiusColor = FColor(216, 130, 0);

	/* カテゴリ名一覧 */
	UPROPERTY(Category = Info, VisibleAnywhere)
	TArray<FString> CategoryName;

	/* AISACコントロール名一覧 */
	UPROPERTY(Category = Info, VisibleAnywhere)
	TArray<FString> AisacControlName;

	UPROPERTY(Category = Info, VisibleAnywhere)
	FAtomAttenuationDistanceParam AttenuationDistanceParam;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Info, meta = (ToolTip = "The info of the first wave used by this Cue."))
	FAtomWaveInfo FirstWaveInfo;

	/* ユーザデータ */
	UPROPERTY(Category = Info, VisibleAnywhere)
	FString UserData;
#endif

protected:
	// Archetype settings

	/* Economic-Tick機能を有効にするかどうか */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Economic Tick", meta = (DisplayName = "Enable Economic Tick"))
	bool bEconomicTick;

public:
	/* Economic-Tick機能の設定を上書きするかどうか */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Economic Tick", meta = (EditCondition = "bEconomicTick", DisplayName = "Overrides Economic Tick Settings", Tooltip = "Override global Economic Tick Settings set in CriWare plugin settings."))
	bool bOverrideEconomicTickSettings;

	/* Economic-Tick機能用のマージン距離 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Economic Tick", meta = (EditCondition = "bOverrideEconomicTickSettings", DisplayName = "Economic Tick Distance Margin", Tooltip = "Margin after sound attenation distance where economic tick will activate."))
	float EconomicTickDistanceMargin;

	/* Economic-Tick効果適用時のTickの頻度(回/秒) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Economic Tick", meta = (EditCondition = "bOverrideEconomicTickSettings", DisplayName = "Economic Tick Frequency", Tooltip = "Set the tick frequency for sound processing. (Hz)"))
	int32 EconomicTickFrequency;

protected:
	// Archetype settings

	/* Culling機能を有効にするかどうか */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Culling", meta = (DisplayName = "Enable Distance Culling", Tooltip = "Cull sound processing by a distance."))
	bool bEnableDistanceCulling;

public:
	/* Culling機能の設定を上書きするかどうか */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Culling", meta = (DisplayName = "Override Cull Settings", Tooltip = "Override global Cull Settings set in CriWare plugin settings."))
	bool bOverrideCullSettings;

	/* Culling機能用のマージン距離 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Culling", meta = (EditCondition = "bOverrideCullSettings", DisplayName = "Cull Distance Margin", Tooltip = "Margin after sound attenation distance where sound will be culled."))
	float CullDistanceMargin;

public:
	//~ DEPRECATED propreties

	/* Economic-Tick機能用のマージン距離 
	 * @deprecated Use EconomicTickDistanceMargin instead
	 */
	UPROPERTY(meta = (DeprecatedProperty, DeprecationMessage = "Use EconomicTickDistanceMargin instead."))
	float EconomicTickMarginDistance_DEPRECATED;

	/* CRI Atom Craft のループ情報
	 * @deprecated Use SetLoopSetting(), GetLoopSetting(), IsLooping() instead
	 */
	UPROPERTY(meta = (DeprecatedProperty, DeprecationMessage = "Use SetLoopSetting(), GetLoopSetting(), IsLooping() instead."))
	bool bLoopSettingByAtomCraft_DEPRECATED;

	/* Culling機能を有効にするかどうか 
	 * @deprecated Use Distance Culling instead
	 */
	UPROPERTY(meta = (DeprecatedProperty, DeprecationMessage = "Use Distance Culling instead."))
	bool bCullingSoundPlayingProcessByDistance_DEPRECATED;

	/* レガシーなカリング設定を使用するかどうか
     * @deprecated Use Cull Distance Margin instead
     */
	UPROPERTY(meta = (DeprecatedProperty, DeprecationMessage = "Use Cull Distance Margin instead."))
	bool bUseLegacyCullingSettings_DEPRECATED;

	/* [Legacy]カリング境界距離
	 * @deprecated Use Cull Distance Margin instead
	 */
	UPROPERTY(meta = (DeprecatedProperty, DeprecationMessage = "Use Cull Distance Margin instead."))
	float MaxProcessDistance_DEPRECATED;

	/* Culling機能の設定を上書きするかどうか
	 * @deprecated Use Override Cull Settings instead
	 */
	UPROPERTY(meta = (DeprecatedProperty, DeprecationMessage = "Use Override Cull Settings instead."))
	bool bOverrideCullingSettings_DEPRECATED;

	/* Culling機能用のマージン距離
	 * @deprecated Use Cull Distance Margin instead
	 */
	UPROPERTY(meta = (DeprecatedProperty, DeprecationMessage = "Use Cull Distance Margin instead."))
	float CullingMarginDistance_DEPRECATED;

	/* Loop
	 * @deprecated Use SetLoopSetting(), GetLoopSetting(), IsLooping() instead.
	 */
	UPROPERTY(meta = (DeprecatedProperty, DeprecationMessage = "Use SetLoopSetting(), GetLoopSetting(), IsLooping() instead."))
	bool bLoop_DEPRECATED;

	/**
	 * @deprecated Use AttenuationSettings instead.	
	 */
	UPROPERTY(meta = (DeprecatedProperty, DeprecationMessage = "Use AttenuationSettings instead."))
	class USoundAttenuation* DefaultAttenuation_DEPRECATED;

	//~ end of DEPRECATED propreties

public:
	/**
	 * ユーザーが使用すべきEconomic-Tickマージン距離を返します。
	 * つまりこのキュー固有のEconomic-Tickマージン距離が有効ならそれを返し、
	 * そうでなければ全体設定のEconomic-Tickマージン距離を返します。
	 */
	UFUNCTION(BlueprintCallable, Category = "Sound Atom Cue", meta = (ToolTip = "Get Economic-Tick Distance Margin that will be applied."))
	float GetEconomicTickDistanceMarginToApply() const;

	/**
	 * ユーザーが使用すべきEconomic-Tick境界距離を返します。
	 * つまり(最大減衰距離 + Economic-Tickマージン距離)を返します。
	 */
	UFUNCTION(BlueprintCallable, Category = "Sound Atom Cue", meta = (ToolTip = "Get current Economic-Tick Distance."))
	float GetEconomicTickDistance() const;

	/**
	 * ユーザーが使用すべきEconomic-Tick頻度を返します。
	 * つまり個のキュー固有のEconomic-Tick頻度が有効ならそれを返し、
	 * そうでなければ全体設定のEconomic-Tick頻度を返します。
	 */
	UFUNCTION(BlueprintCallable, Category = "Sound Atom Cue", meta = (ToolTip = "Get Economic-Tick Frequency that will be applied."))
	float GetEconomicTickFrequencyToApply() const;

	/**
	 * ユーザーが使用すべき最大減衰距離を返します。
	 * つまりUE4エディタ側のAttenuation設定が有効ならそれを返し、
	 * そうでなければAtomCraftの設定を返します。
	 */
	UFUNCTION(BlueprintCallable, Category = "Sound Atom Cue", meta = (ToolTip = "Get current Max Attenuation Distance value used for this Atom Cue."))
	float GetMaxAttenuationDistanceToApply() const;

	/**
	 * ユーザーが使用すべきカリングマージン距離を返します。
	 * つまりこのキュー固有のマージン距離が有効ならそれを返し、
	 * そうでなければ全体設定のマージン距離を返します。
	 */
	UFUNCTION(BlueprintCallable, Category = "Sound Atom Cue", meta = (ToolTip = "Get current margin value for cull distance used with this Atom Cue."))
	float GetCullDistanceMarginToApply() const;

	/**
	 * 最大減衰距離 + カリングマージン距離 を返します
	 */
	UFUNCTION(BlueprintCallable, Category = "Sound Atom Cue", meta = (ToolTip = "Get the distance used to cull the Atom Cue sound; sum of maximum attenuation distance and cull distance margin."))
	float GetCullDistance() const;

	/** Returns whether or not this sound is looping. */
	UFUNCTION(BlueprintCallable, Category = "Sound Atom Cue", meta = (ToolTip = "Get whether this cue is looping according to current Loop settings."))
	bool IsLooping() const;

	/** Gets cue information. */
	UFUNCTION(BlueprintCallable, Category = "Sound Atom Cue", meta = (DisplayName = "Get Cue Info", ScriptName = "GetCueInfo"))
	bool BP_GetCueInfo(UPARAM(ref) FAtomCueInfo& CueInfo) const;

	/**
	 * Validate the cue settings.
	 *
	 * @return true if validation passed, false otherwise.
	 */
	UFUNCTION(BlueprintCallable, Category = "Sound Atom Cue", meta = (ToolTip = "Validate the cue settings."))
	bool Validate() const;

public:
	//~ DEPRECATED functions

	/**
	 * ユーザーが使用すべきEconomic-Tickマージン距離を返します。
	 * つまりこのキュー固有のEconomic-Tickマージン距離が有効ならそれを返し、
	 * そうでなければ全体設定のEconomic-Tickマージン距離を返します。
	 * @deprecated Use GetEconomicTickDistanceMarginToApply() instead
	 */
	UE_DEPRECATED(4.21, "Please use GetEconomicTickDistanceMarginToApply() instead.")
	UFUNCTION(meta = (DeprecatedFunction, DeprecationMessage = "Use GetEconomicTickDistanceMarginToApply() instead."))
	float GetEconomicTickMarginDistanceToUse() const;

	/**
	 * ユーザーが使用すべきEconomic-Tick境界距離を返します。
	 * つまり(最大減衰距離 + Economic-Tickマージン距離)を返します。
	 * @deprecated Use GetEconomicTickDistance() instead
	 */
	UE_DEPRECATED(4.21, "Please use GetEconomicTickDistance() instead.")
	UFUNCTION(meta = (DeprecatedFunction, DeprecationMessage = "Use GetEconomicTickDistance() instead."))
	float GetEconomicTickBoundaryDistanceToUse() const;

	/**
	 * ユーザーが使用すべきEconomic-Tick頻度を返します。
	 * つまり個のキュー固有のEconomic-Tick頻度が有効ならそれを返し、
	 * そうでなければ全体設定のEconomic-Tick頻度を返します。
	 * @deprecated Use GetEconomicTickFrequencyToApply() instead
	 */
	UE_DEPRECATED(4.21, "Please use GetEconomicTickFrequencyToApply() instead.")
	UFUNCTION(meta = (DeprecatedFunction, DeprecationMessage = "Use GetEconomicTickFrequencyToApply() instead."))
	float GetEconomicTickFrequencyToUse() const;

	/**
	 * ユーザーが使用すべき最大減衰距離を返します。
	 * つまりUE4エディタ側のAttenuation設定が有効ならそれを返し、
	 * そうでなければAtomCraftの設定を返します。
	 * @deprecated Use GetMaxAttenuationDistanceToApply() instead
	 */
	UE_DEPRECATED(4.21, "Please use GetMaxAttenuationDistanceToApply() instead.")
	UFUNCTION(meta = (DeprecatedFunction, DeprecationMessage = "Use GetMaxAttenuationDistanceToApply() instead."))
	float GetMaxAttenuationDistanceToUse() const;

	/**
	 * ユーザーが使用すべきカリングマージン距離を返します。
	 * つまりこのキュー固有のマージン距離が有効ならそれを返し、
	 * そうでなければ全体設定のマージン距離を返します。
	 * @deprecated Use GetCullDistanceMarginToApply() instead
	 */
	UE_DEPRECATED(4.21, "Please use GetCullDistanceMarginToApply() instead.")
	UFUNCTION(meta = (DeprecatedFunction, DeprecationMessage = "Use GetCullDistanceMarginToApply() instead."))
	float GetCullingMarginDistanceToUse() const;


	/**
	 * ユーザーが使用すべきカリング境界距離を返します。
	 * つまりレガシーな設定が有効になっていればMaxProcessDistanceプロパティの値をそのまま返し、
	 * そうでなければ(最大減衰距離 + カリングマージン距離)を返します。
	 * @deprecated Use GetCullingDistance() instead
	 */
	UE_DEPRECATED(4.21, "Please use GetCullDistance() instead.")
	UFUNCTION(meta = (DeprecatedFunction, DeprecationMessage = "Use GetCullDistance() instead."))
	float GetCullingBoundaryDistanceToUse() const;

	//~ end of DEPRECATED

public:
	// Begin UObject interface.
	virtual void PostLoad() override;
	virtual FString GetDesc() override;
	virtual void GetAssetRegistryTags(TArray<FAssetRegistryTag>& OutTags) const override;
	virtual void Serialize(FArchive& Ar) override;
	virtual void BeginDestroy() override;
	virtual void PostDuplicate(bool bDuplicateInPiE) override;
#if WITH_EDITOR
	virtual void PostInitProperties() override;
#if ENGINE_MAJOR_VERSION == 4 && ENGINE_MINOR_VERSION >= 25
	virtual void PreEditChange(FProperty* PropertyAboutToChange) override;
#else
	virtual void PreEditChange(UProperty* PropertyAboutToChange) override;
#endif
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

	// End UObject interface.

	// FTickableGameObject interface
	void Tick(float DeltaTime) override;
	bool IsTickable() const override;
	bool IsTickableInEditor() const override { return true; }
	bool IsTickableWhenPaused() const override { return true; }
	TStatId GetStatId() const override { return TStatId(); }
	//~ FTickableGameObject interface

	/** Get Duration of this cue, returns INDEFINITELY_LOOPING_DURATION if looping. 
	 * Note: Can not get duration added by delay on bus yet.
	 */
	float GetDuration();

	/* Gets the duration in seconds of the first wave used by this Cue. */
	float GetFirstWaveDuration();

	/** Returns a pointer to the attenuation settings that are to be applied for this node */
	const FSoundAttenuationSettings* GetAttenuationSettingsToApply() const;

	/** Check if tick reduction is enabled. */
	UFUNCTION(meta = (DeprecatedProperty, DeprecationMessage = "C++ only, in BP use 'Get Economic Tick' instead."))
	bool IsEconomicTickEnabled() const;

	/** Enable tick reduction based on distsance.*/
	FORCEINLINE void EnableEconomicTick(bool bEnable) { bEconomicTick = bEnable; }

	/** Check if distance culling is enabled.*/
	FORCEINLINE bool IsDistanceCullingEnabled() const { return bEnableDistanceCulling; }

	/** Enable distance culling. */
	FORCEINLINE void EnableDistanceCulling(bool bEnable) { bEnableDistanceCulling = bEnable; }

	/** Access to Cached Cue information and preset settings. */
	FORCEINLINE const FAtomCueInfo* GetCueInfo() const { return CueInfo; }

	/** Call to cache any values which need to be computed from the sound cue graph. e.g. MaxDistance, Duration, etc. */
	void CacheAggregateValues(bool bCanMarkDirty = true);

#if WITH_EDITORONLY_DATA
public:
	// used to sound preview or analysis
	uint8* RawPCMData;
	int32 RawPCMDataNumChannels;
	int32 RawPCMDataSamplingRate;
	int32 RawPCMDataNumSamples;
	FCriticalSection RawPCMDataCriticalSection;

	// for thumbnail
	FByteBulkData RawSnapshot;
	int32 RawSnapshotNumChannels;

#if WITH_EDITOR
	uint32 bNeedsThumbnailGeneration : 1;

private:
	uint32 bIsRequestingSnapshot : 1;

	// settings for snapshot generation
	static const uint32 SnapshotNumFrames = 512;
	static const uint32 MaxSimultaneousSnapshotGenerators = 5;
	static uint32 NumSnapshotGenerators;
#endif

#endif

public:
#if WITH_EDITOR
	/** Access to cached Max Attenunation Distance parameter */
	float GetMaxAttenuationDistance() const;

	/** Access to cached Min Attenunation Distance parameter */
	float GetMinAttenuationDistance() const;

	/** Generate pcm data for thumbnail */
	void TakeFirstWaveSnapshot(uint32 NumFrames = SnapshotNumFrames);
#endif

public:
	//~ DEPRECATED editor functions - will be removed in next release

	/** Access to cached Attenuntion distance parameters
     * @deprecated ERROR - Use GetMaxAttenuationDistance() instead  (Editor only!)
     */
	UE_DEPRECATED(4.21, "ERROR - Please use GetMaxAttenuationDistance() instead. (Editor only!)")
	float GetMaxAcbAttenuationDistance() const;

	/** Access to cached Attenuntion distance parameters
	 * @deprecated ERROR - Use GetMinAttenuationDistance() instead (Editor only!)
	 */
	UE_DEPRECATED(4.21, "ERROR - Please use GetMinAttenuationDistance() instead. (Editor only!)")
	float GetMinACbAttenuationDistance() const;

	//~ end of DEPRECATED editor functions

private:
	/* Pointer to immutable cue preset settings stored in SoundAtomCueSheet. 
	 * This value is valid if a SoundCueSheet is associed to this Cue.
	 */
	const FAtomCueInfo* CueInfo;

	/* Cached cue id to retrieve CueInfo easly */
	int CueId;
		
	/* This cue is requesting the cuesheet, Cue informations are not yet accessible. */
	bool bIsRequestingCueInfo;
};
