/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2020 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine 4
 * Module   : Atom wave player
 * File     : AtomWavePlayer.h
 *
 ****************************************************************************/

#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "CriWareApi.h"
#include "SoundAtomCueSheet.h"

#include "AtomWavePlayer.generated.h"


class USoundAtomCue;

  // Enum describing the audio component play state
UENUM(BlueprintType)
enum class EAtomWavePlayState : uint8
{
	// If the sound is playing (i.e. not fading in, not fading out, not paused)
	Playing,

	// If the sound is not playing
	Stopped,

	// If the sound is playing but paused
	Paused,

	// If the sound is playing and fading in
	FadingIn,

	// If the sound is playing and fading out
	FadingOut,

	Count UMETA(Hidden)
};

/** called when we finish playing audio, either because it played to completion or because a Stop() call turned it off early */
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnWaveFinished);

/** shadow delegate declaration for above */
DECLARE_MULTICAST_DELEGATE_OneParam(FOnWaveFinishedNative, class UAtomWavePlayer*);

/** Called as a sound plays on the audio component to allow BP to perform actions based on playback percentage.
 * Computed as samples played divided by total samples, taking into account pitch.
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnWavePlaybackPercent, const class USoundAtomCue*, PlayingAtomCue, int32, WaveId, const float, PlaybackPercent);

/** shadow delegate declaration for above */
DECLARE_MULTICAST_DELEGATE_FourParams(FOnWavePlaybackPercentNative, const class UAtomWavePlayer*, const class USoundAtomCue*, int32, const float);

/** Multicast delegate that is invoked when a state changed occurred in the player. */
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAtomWavePlayerStateChanged);

/** Native delegate that is invoked when PCM data need to be filtered out.*/
//DECLARE_DELEGATE_FourParams(FOnFilterDataDelegate, int32, int32, FrameNumber, int32, NumChannels, int16*, Data);

/**
 * Implements an Atom wave player asset that can play Atom waves.
 */
UCLASS(hidecategories = (Object), EditInlineNew)
class CRIWARERUNTIME_API UAtomWavePlayer
	: public UObject, public FTickableGameObject
{
	GENERATED_BODY()

public:

	/** Whether or not this sound plays when the game is paused in the UI */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Sound)
	uint8 bIsUISound : 1;

	/** Whether or not this sound is a preview sound */
	uint8 bIsPreviewSound : 1;

	/** Whether or not this wave player has been paused */
	uint8 bIsPaused : 1;

	/** Whether or not fade out was triggered. */
	uint8 bIsFadingOut : 1;

	/** Whether or not the sound is out to PCM filter. */
	uint8 bUsePCMFilter : 1;

	/** What time the player was told to play. Used to compute state. */
	float TimeAtomWavePlayed;

	/** How much time the player was told to fade in. */
	float FadeInTimeDuration;

	/** called when we finish playing audio, either because it played to completion or because a Stop() call turned it off early */
	UPROPERTY(BlueprintAssignable)
	FOnWaveFinished OnWaveFinished;

	/** shadow delegate for non UObject subscribers */
	FOnWaveFinishedNative OnWaveFinishedNative;

	/** Called as a sound plays on the player to allow BP to perform actions based on playback percentage.
	* Computed as samples played divided by total samples, taking into account pitch.
	*/
	UPROPERTY(BlueprintAssignable)
	FOnWavePlaybackPercent OnWavePlaybackPercent;

	/** shadow delegate for non UObject subscribers */
	FOnWavePlaybackPercentNative OnWavePlaybackPercentNative;

public:

	UAtomWavePlayer(const FObjectInitializer& ObjectInitializer);
	virtual ~UAtomWavePlayer();

	//~ FTickableGameObject Interface

	void Tick(float DeltaTime) override;
	bool IsTickable() const override;
	bool IsTickableInEditor() const override { return true; }
	bool IsTickableWhenPaused() const override { return false; }
	TStatId GetStatId() const override { return TStatId(); }

	//~ UObject Interface

		//~ Begin UObject Interface.
#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif // WITH_EDITOR
	virtual FString GetDetailedInfoInternal() const override;
	virtual void PostLoad() override;
	virtual void Serialize(FArchive& Ar) override;
	virtual void BeginDestroy() override;
	UWorld* GetWorld() const override { return GetOuter()->GetWorld(); }
	//~ End UObject Interface.

	FString GetDesc() { return TEXT("UAtomWavePlayer"); }

	//~ Settings

	UFUNCTION(BlueprintCallable, Category = "Atom|AtomWavePlayer")
	void SetWave(USoundAtomCue* InCue);

	//UFUNCTION(BlueprintCallable, Category = "Media|MediaPlayer")
	//bool OpenWaveWithOptions(UManaSource* ManaSource, const FManaPlayerOptions& PlayerOptions);

	UFUNCTION(BlueprintCallable, Category = "Atom|AtomWavePlayer")
	USoundAtomCue* GetCue() const { return SoundAtomCue; }

	UFUNCTION(BlueprintCallable, Category = "Atom|AtomWavePlayer")
	FAtomWaveInfo GetWaveInfo() const { return WaveInfo; }

	//~ Playback

	/** Start a sound playing on an audio component */
	UFUNCTION(BlueprintCallable, Category = "Atom|AtomWavePlayer")
	void Play(float StartTime = 0.0f);

	/** Stop sound, issue any delegates if needed */
	UFUNCTION(BlueprintCallable, Category = "Atom|AtomWavePlayer")
	void Stop();

	/** Cues request to stop sound after the provided delay, stopping immediately if delay is zero or negative */
	UFUNCTION(BlueprintCallable, Category = "Atom|AtomWavePlayer")
	void StopDelayed(float DelayTime);

	/** Pause sound playing, issue any delegates if needed */
	UFUNCTION(BlueprintCallable, Category = "Atom|AtomWavePlayer")
	void SetPaused(bool bPause = true);

	/** This will allow one to adjust the volume on the fly */
	UFUNCTION(BlueprintCallable, Category = "Atom|AtomWavePlayer")
	void AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel/*, const EAudioFaderCurve FadeCurve = EAudioFaderCurve::Linear*/);

	/**
	 * Check whether the player is in an error state.
	 *
	 * When the player is in an error state, no further operations are possible.
	 * The current wave must be stopped, and a new wave source must be set
	 * before the player can be used again. Errors are usually caused by faulty
	 * sound files or interrupted network connections.
	 *
	 * @return true if player is in an error state, false otherwise.
	 */
	UFUNCTION(BlueprintCallable, Category = "Atom|AtomWavePlayer")
	bool HasError() const;

	/**
	 * Check whether playback is looping.
	 *
	 * @return true if looping, false otherwise.
	 * @see IsPaused, IsPlaying, SetLooping
	 */
	UFUNCTION(BlueprintCallable, Category = "Atom|AtomWavePlayer")
	bool IsLooping() const { return bLoop; }

	/**
	 * Check whether playback is currently paused.
	 *
	 * @return true if playback is paused, false otherwise.
	 * @see IsLooping, IsPaused, IsPlaying, Pause
	 */
	UFUNCTION(BlueprintCallable, Category = "Atom|AtomWavePlayer")
	bool IsPaused() const { return bIsPaused; }

	/**
	 * Check whether playback has started.
	 *
	 * @return true if playback has started, false otherwise.
	 * @see IsLooping, IsPaused, IsPlaying, Play
	 */
	UFUNCTION(BlueprintCallable, Category = "Atom|AtomWavePlayer")
	bool IsPlaying() const { return NativePlayer != nullptr; }

	/**
	 * Get wave duration.
	 *
	 * @return A time span representing the duration.
	 * @see GetTime, Seek
	 */
	//UFUNCTION(BlueprintCallable, Category = "Atom|AtomWavePlayer")
	//FTimespan GetDuration() const { return 0; }

	/**
	 * Enables or disables playback looping.
	 *
	 * @param Looping Whether playback should be looped.
	 * @return true on success, false otherwise.
	 * @see IsLooping
	 */
	UFUNCTION(BlueprintCallable, Category = "Atom|AtomWavePlayer")
	bool SetLooping(bool Looping) { return true; }

	/** Returns the enumerated play states of the audio component. */
	UFUNCTION(BlueprintCallable, Category = "Atom|AtomWavePlayer")
	EAtomWavePlayState GetPlayState() const;

	/**
	 * Get the movie's current playback rate.
	 *
	 * @return The playback rate.
	 * @see SetRate, SupportsRate
	 */
	//UFUNCTION(BlueprintCallable, Category = "Mana|ManaPlayer")
	//float GetRate() const { check(ManaComponent); return (ManaComponent->IsPlaying() && !ManaComponent->IsPaused()) ? 1.0f : 0.0f; }

	/**
	 * Changes the movie's playback rate.
	 *
	 * @param Rate The playback rate to set.
	 * @return true on success, false otherwise.
	 * @see GetRate, SupportsRate
	 */
	//UFUNCTION(BlueprintCallable, Category = "Mana|ManaPlayer")
	//bool SetRate(float Rate) { return false; }

	/**
	 * Get the Mana current total playback time.
	 *
	 * @return Playback time.
	 * @see GetMovieTime, GetDuration, Seek
	 */
	UFUNCTION(BlueprintCallable, Category = "Mana|ManaPlayer")
	FTimespan GetTime() const { return 0; }


	/**
	* Filter data to PCM
	*/
	//UFUNCTION(BlueprintCallable, Category = "Mana|ManaPlayer")
	//void BindOnFilterData(const FOnFilterDataDelegate& Event);

public:

	/** A delegate that is invoked when playback has reached the end of the media. */
//	UPROPERTY(BlueprintAssignable, Category = "Mana|ManaPlayer", meta = (HideInDetailPanel))
	//FOnAtomWavePlayerEvent OnEndReached;

	/** A delegate that is invoked when a media source has been closed. */
	//UPROPERTY(BlueprintAssignable, Category = "Mana|ManaPlayer", meta = (HideInDetailPanel))
	//FOnAtomWavePlayerEvent OnWaveClosed;

	/**
	 * A delegate that is invoked when a Mana movie source has been opened.
	 *
	 * Depending on whether the underlying player implementation opens the media
	 * synchronously or asynchronously, this event may be executed before or
	 * after the call to OpenSource / OpenUrl returns.
	 *
	 * @see OnMediaOpenFailed, OnTracksChanged
	 */
	//UPROPERTY(BlueprintAssignable, Category = "Mana|ManaPlayer", meta = (HideInDetailPanel))
	//FOnAtomWavePlayerEvent OnSetWave;

	/**
	 * A delegate that is invoked when a Mana movie source has failed to open.
	 *
	 * This delegate is only executed if OpenSource / OpenUrl returned true and
	 * the media failed to open asynchronously later. It is not executed if
	 * OpenSource / OpenUrl returned false, indicating an immediate failure.
	 *
	 * @see OnMediaOpened
	 */
	//UPROPERTY(BlueprintAssignable, Category = "Mana|ManaPlayer", meta = (HideInDetailPanel))
	//FOnAtomWavePlayerEvent OnSetWavFailed;

	/**
	 * A delegate that is invoked when movie playback has been resumed.
	 *
	 * @see OnPlaybackSuspended
	 */
	//UPROPERTY(BlueprintAssignable, Category = "Atom|AtomWavePlayer", meta = (HideInDetailPanel))
	//FOnAtomWavePlayerEvent OnPlaybackResumed;

	/**
	 * A delegate that is invoked when movie playback has been suspended.
	 *
	 * @see OnPlaybackResumed
	 */
	//UPROPERTY(BlueprintAssignable, Category = "Atom|AtomWavePlayer", meta = (HideInDetailPanel))
	//FOnAtomWavePlayerEvent OnPlaybackSuspended;


public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Atom", meta = (ToolTip = "Cue to use."))
	USoundAtomCue* SoundAtomCue;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Atom", meta = (ToolTip = "First wave info in the cue."))
	FAtomWaveInfo WaveInfo;

	/**
	 * Get an event delegate that is invoked when a Mana event occurred.
	 *
	 * @return The delegate.
	 */
	//DECLARE_EVENT_OneParam(UManaPlayer, FOnManaEvent, EManaEvent /*Event*/)
	//FOnAtomWavePlayerEvent& OnAtomWavePlayerEvent()
	//{
	//	return AtomWavePlayerEvent;
	//}

	/**
	 * Get an event delegate that is invoked when a next movie frame was sent to RenderThread.
	 *
	 * This delegate if fired only once then removed automatically.
	 * @return The delegate.
	 */
	//DECLARE_DELEGATE_FourParams(FOnFilterDataEvent, int32 /*Format*/, int32 /*NumChannels*/, int32 /*NumSamples*/, void* /*Data*/)
	//FOnFilterDataEvent& OnFilterDataEvent()
	//{
	//	check(SoundAtomCue);

		//ManaComponent->OnFrameOnTime.AddDynamic(this, &UManaPlayer::HandleManaComponentFrameOnTime);
		
		// set callback ?
		
		//return FilterDataDelegate;
	//}

	void HandleNativePlayerOnStatusChanged(CriAtomPlayerStatus Status);
	void HandleNativePlayerOnDecode(CriAtomPcmFormat format, CriSint32 num_channels, CriSint32 num_samples, void *data[]);

protected:

	/**
	 * Whether the player should loop when media playback reaches the end.
	 *
	 * Use the SetLooping function to change this value at runtime.
	 *
	 * @see IsLooping, SetLooping
	 */
	 UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = Playback)
	 uint32 bLoop : 1;

protected:
	/**
	 * Process the given Mana event.
	 *
	 * @param Event The event to process.
	**/
	//void ProcessAtomWavePlayerEvent(EManaEvent Event);

	/** The CriAtom native player handle. */
	CriAtomPlayerHn NativePlayer;

	uint8 bIsCueSheetLoading : 1;
	uint8 bIsRequestPlaying : 1;

	float PlayStartTime;
	float PlayFadeInDuration;
	float PlayFadeVolumeLevel;

private:
	/** An event delegate that is invoked when a new state occurred. */
	FOnAtomWavePlayerStateChanged AtomWavePlayerStateChanged;

	/** Called to inform that playback is finished. */
	void PlaybackCompleted(bool bFailedToStart);

	/** Called to get WaveformInfo from Atom native player. */
	void CacheWaveInfo();

public:	
	typedef TFunction<void(CriAtomPcmFormat Format, int32 NumChannels, int32 NumFrames, void* Data[])> FFilterDataFunction;

	FORCEINLINE void RegisterFilterDataFunction(FFilterDataFunction Function)
	{ 
		FilterDataFunction = Function;
	}

private:
	/**/
	FFilterDataFunction FilterDataFunction;

protected:
	/** Utility function called by Play and FadeIn to start a sound playing. */
	void PlayInternal(const float StartTime = 0.0f, const float FadeInDuration = 0.0f, const float FadeVolumeLevel = 1.0f /*,const EAudioFaderCurve FadeCurve = EAudioFaderCurve::Linear*/);
};

