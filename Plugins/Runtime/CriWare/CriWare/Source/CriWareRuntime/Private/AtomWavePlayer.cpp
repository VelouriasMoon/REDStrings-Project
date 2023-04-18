/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2020 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine 4
 * Module   : Atom wave player
 * File     : AtomWavePlayer.cpp
 *
 ****************************************************************************/

#include "AtomWavePlayer.h"

#include "CriWareApi.h"
#include "SoundAtomCue.h"
#include "Async/Async.h"

#include "CriWareRuntimePrivatePCH.h"
#include "CriWareLocalization.h"


#define LOCTEXT_NAMESPACE "AtomWavePlayer"


namespace UAtomWavePlayer_NativeCallbacks
{
	extern "C" void CRIAPI OnStatusChange(void* obj, CriAtomPlayerHn player)
	{
		// ADX do not call this function if player is destroyed
		UAtomWavePlayer* Self = static_cast<UAtomWavePlayer*>(obj);
		if (Self) {
			auto Status = FCriWareApi::criAtomPlayer_GetStatus(player);
			Self->HandleNativePlayerOnStatusChanged(Status);
		}
	}

	extern "C" void CRIAPI OnDecode(void *obj, CriAtomPcmFormat format, CriSint32 num_channels, CriSint32 num_samples, void *data[])
	{
		// ADX do not call this function if player is destroyed
		UAtomWavePlayer* Self = static_cast<UAtomWavePlayer*>(obj);
		if (Self) {
			Self->HandleNativePlayerOnDecode(format, num_channels, num_samples, data);
		}
	}
}

UAtomWavePlayer::UAtomWavePlayer(const FObjectInitializer & ObjectInitializer)
{
#if WITH_EDITOR
	/* Localization of unreal properties metadata with LOCTEXT markups and reflection */
	CRI_LOCCLASS(GetClass());
#endif
}

UAtomWavePlayer::~UAtomWavePlayer()
{
}

void UAtomWavePlayer::Tick(float DeltaTime)
{
	if (bIsCueSheetLoading && SoundAtomCue->CueSheet->IsLoaded())
	{
		bIsCueSheetLoading = false;
		CacheWaveInfo();

		if (bIsRequestPlaying)
		{
			PlayInternal(PlayStartTime, PlayFadeInDuration, PlayFadeVolumeLevel);
		}
	}
}

bool UAtomWavePlayer::IsTickable() const
{
	return bIsCueSheetLoading || NativePlayer != nullptr;
}

#if WITH_EDITOR
void UAtomWavePlayer::PostEditChangeProperty(FPropertyChangedEvent & PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);
}
#endif

FString UAtomWavePlayer::GetDetailedInfoInternal() const
{
	return FString() + Super::GetDetailedInfoInternal();
}

void UAtomWavePlayer::PostLoad()
{
	Super::PostLoad();
}

void UAtomWavePlayer::Serialize(FArchive & Ar)
{
	Super::Serialize(Ar);
}

void UAtomWavePlayer::BeginDestroy()
{
	if (NativePlayer)
	{
		Stop();
	}

	Super::BeginDestroy();
}

void UAtomWavePlayer::SetWave(USoundAtomCue * InCue)
{
	if (!IsValid(InCue) || !InCue->Validate())
	{
		UE_LOG(LogCriWareRuntime, Warning, TEXT("SetWave(): Invalid cue set to %s."), *GetFullName());
		return;
	}
	USoundAtomCueSheet* CueSheet = InCue->CueSheet;

	// set cue
	SoundAtomCue = InCue;

	// load the cue sheet if not (auto load)
	if (!CueSheet->IsLoaded())
	{
		CueSheet->AsyncLoadCueSheet();
		bIsCueSheetLoading = true;
		return;
	}

	bIsPaused = false;
	bIsCueSheetLoading = false;
	bIsRequestPlaying = false;

	CacheWaveInfo();
}

void UAtomWavePlayer::Play(float StartTime /* = 0.0f */)
{
	PlayInternal(StartTime, 0.0f, 1.0f);
}

void UAtomWavePlayer::Stop()
{
	if (!NativePlayer)
	{
		return;
	}

	// avoid defered play if loading
	if (bIsCueSheetLoading)
	{
		bIsCueSheetLoading = false;
		return;
	}

	FCriWareApi::criAtomPlayer_Stop(NativePlayer);
	FCriWareApi::criAtomPlayer_Destroy(NativePlayer);
	NativePlayer = nullptr;
	bIsPaused = false;
}

void UAtomWavePlayer::StopDelayed(float DelayTime)
{
}

void UAtomWavePlayer::SetPaused(bool bPause)
{
	if (bIsPaused != bPause && !bUsePCMFilter)
	{
		bIsPaused = bPause;

		if (NativePlayer)
		{
			FCriWareApi::criAtomPlayer_Pause(NativePlayer, bPause ? CRI_TRUE : CRI_FALSE);
		}
	}
}

void UAtomWavePlayer::AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel)
{
}

EAtomWavePlayState UAtomWavePlayer::GetPlayState() const
{
	UWorld* World = GetWorld();
	if (!NativePlayer || !World)
	{
		return EAtomWavePlayState::Stopped;
	}
	
	if (bIsPaused)
	{
		return EAtomWavePlayState::Paused;
	}

	if (bIsFadingOut)
	{
		return EAtomWavePlayState::FadingOut;
	}

	// Get the current audio time seconds and compare when it started and the fade in duration 
	float CurrentAudioTimeSeconds = World->GetAudioTimeSeconds();
	if (CurrentAudioTimeSeconds - TimeAtomWavePlayed < FadeInTimeDuration)
	{
		return EAtomWavePlayState::FadingIn;
	}

	// If we are not in any of the above states we are "playing"
	return EAtomWavePlayState::Playing;
}

bool UAtomWavePlayer::HasError() const
{
	return NativePlayer ? (FCriWareApi::criAtomPlayer_GetStatus(NativePlayer) == CRIATOMPLAYER_STATUS_ERROR) : false;
}

void UAtomWavePlayer::PlayInternal(const float StartTime, const float FadeInDuration, const float FadeVolumeLevel)
{
	UWorld* World = GetWorld();

	UE_LOG(LogCriWareRuntime, Verbose, TEXT("%g: Playing wave : '%s' with SoundAtomeCue: '%s'"), World ? World->GetAudioTimeSeconds() : 0.0f, *GetFullName(), SoundAtomCue ? *SoundAtomCue->GetName() : TEXT("nullptr"));

	// Reset our fading out flag in case this is a reused player and we are replaying after previously fading out
	bIsFadingOut = false;

	// restart if reusing player
	if (NativePlayer)
	{
		Stop();
	}

	PlayStartTime = StartTime;
	PlayFadeInDuration = FadeInDuration;
	PlayFadeVolumeLevel = FadeVolumeLevel;

	// Whether or not we managed to actually try to play the sound
	if (SoundAtomCue && SoundAtomCue->CueSheet && (World == nullptr || World->bAllowAudioPlayback))
	{
		// defering if loading
		if (bIsCueSheetLoading)
		{
			bIsRequestPlaying = true;
			return;
		}

		// create the native player
		// get the ACB handle
		CriAtomExAcbHn AcbHn = SoundAtomCue->CueSheet->GetAcbHn();
		if (AcbHn == nullptr)
		{
			return;
		}

		// Grab 1st track - 1st Waveform information
		CriAtomExWaveformInfo NativeWaveInfo;
		FCriWareApi::criAtomExAcb_GetWaveformInfoByName(AcbHn, TCHAR_TO_UTF8(*SoundAtomCue->CueName), &NativeWaveInfo);

		if (NativeWaveInfo.num_channels <= 0)
		{
			return;
		}

		// Get AWB handle if requested (external wave data)
		CriAtomAwbHn AwbHn;
		if (NativeWaveInfo.streaming_flag == CRI_FALSE){
			AwbHn = FCriWareApi::criAtomExAcb_GetOnMemoryAwbHandle(AcbHn);
		}
		else
		{
			AwbHn = FCriWareApi::criAtomExAcb_GetStreamingAwbHandle(AcbHn);
		}

		// Create an Atom Player
		CriAtomStandardPlayerConfig NativePlayerConfig;
		criAtomPlayer_SetDefaultConfigForStandardPlayer(&NativePlayerConfig);
		NativePlayerConfig.max_channels = NativeWaveInfo.num_channels;
		NativePlayerConfig.max_sampling_rate = NativeWaveInfo.sampling_rate;
		NativePlayerConfig.streaming_flag = NativeWaveInfo.streaming_flag;
		NativePlayer = FCriWareApi::criAtomPlayer_CreateStandardPlayer(&NativePlayerConfig, nullptr, 0);
		if (!NativePlayer)
		{
			UE_LOG(LogCriWareRuntime, Error, TEXT("Cannot create native atom player in %s."), *GetFullName());
			return;
		}

		// native callbacks registations
		FCriWareApi::criAtomPlayer_SetStatusChangeCallback(NativePlayer, UAtomWavePlayer_NativeCallbacks::OnStatusChange, this);
		if (FilterDataFunction)
		{
			FCriWareApi::criAtomPlayer_SetDecodeCallback(NativePlayer, UAtomWavePlayer_NativeCallbacks::OnDecode, this);
			FCriWareApi::criAtomPlayer_LimitLoopCount(NativePlayer, CRIATOMPLAYER_IGNORE_LOOP);
			FCriWareApi::criAtomPlayer_SetVolume(NativePlayer, 0.0f);

			bUsePCMFilter = true;
			bIsPaused = true;
		}
		else
		{
			bUsePCMFilter = false;
		}

		// Store the time that this audio component played
		if (World)
		{
			TimeAtomWavePlayed = World->GetAudioTimeSeconds();
		}
		else
		{
			TimeAtomWavePlayed = 0.0f;
		}
		FadeInTimeDuration = FadeInDuration;

		// start play
		FCriWareApi::criAtomPlayer_SetWaveId(NativePlayer, AwbHn, NativeWaveInfo.wave_id);
		
		if (bIsPaused)
		{
			FCriWareApi::criAtomPlayer_Pause(NativePlayer, CRI_TRUE);
		}

		FCriWareApi::criAtomPlayer_Start(NativePlayer);

		bIsRequestPlaying = false;
	}
}

void UAtomWavePlayer::PlaybackCompleted(bool bFailedToStart)
{
	//const UWorld* MyWorld = GetWorld();
	if (!bFailedToStart /*&& MyWorld != nullptr*/ && (OnWaveFinished.IsBound() || OnWaveFinishedNative.IsBound()))
	{
		//INC_DWORD_STAT(STAT_AudioFinishedDelegatesCalled);
		//SCOPE_CYCLE_COUNTER(STAT_AudioFinishedDelegates);

		OnWaveFinished.Broadcast();
		OnWaveFinishedNative.Broadcast(this);
	}

	Stop();
}

void UAtomWavePlayer::CacheWaveInfo()
{
	check(SoundAtomCue);
	check(SoundAtomCue->CueSheet);

	CriAtomExAcbHn AcbHn = SoundAtomCue->CueSheet->GetAcbHn();
	if (AcbHn == nullptr)
	{
		return;
	}

	// Grab 1st track - 1st Waveform information if possible
	CriAtomExWaveformInfo NativeWaveInfo;
	FCriWareApi::criAtomExAcb_GetWaveformInfoByName(AcbHn, TCHAR_TO_UTF8(*SoundAtomCue->CueName), &NativeWaveInfo);

	if (NativeWaveInfo.num_channels <= 0)
	{
		return;
	}

	// store wave information
	switch (NativeWaveInfo.format)
	{
	case CRIATOM_FORMAT_ADX:			WaveInfo.Format = EAtomFormat::ADX;			break;
	case CRIATOM_FORMAT_HCA:			WaveInfo.Format = EAtomFormat::HCA;			break;
	case CRIATOM_FORMAT_HCA_MX:			WaveInfo.Format = EAtomFormat::HCAMX;		break;
	case CRIATOM_FORMAT_WAVE:			WaveInfo.Format = EAtomFormat::Wave;		break;
	case CRIATOM_FORMAT_AIFF:			WaveInfo.Format = EAtomFormat::AIFF;		break;
	case CRIATOM_FORMAT_RAW_PCM:		WaveInfo.Format = EAtomFormat::RawPCM;		break;
	case CRIATOM_FORMAT_VIBRATION:		WaveInfo.Format = EAtomFormat::Vibration;	break;
	case CRIATOM_FORMAT_AUDIO_BUFFER:	WaveInfo.Format = EAtomFormat::AudioBuffer;	break;
	case CRIATOM_FORMAT_INSTRUMENT:		WaveInfo.Format = EAtomFormat::Instrument;	break;
	case CRIATOM_FORMAT_HW1:			WaveInfo.Format = EAtomFormat::Hardware1;	break;
	case CRIATOM_FORMAT_HW2:			WaveInfo.Format = EAtomFormat::Hardware2;	break;
	default: WaveInfo.Format = static_cast<EAtomFormat>(NativeWaveInfo.format);		break;
	}
	WaveInfo.SamplingRate = NativeWaveInfo.sampling_rate;
	WaveInfo.NumChannels = NativeWaveInfo.num_channels;
	WaveInfo.NumSamples = NativeWaveInfo.num_samples * NativeWaveInfo.num_channels; // note: cri 'samples' are ue4 'frames'
	WaveInfo.bIsStreamed = NativeWaveInfo.streaming_flag;
}

// this occur from atom thread (?)
void UAtomWavePlayer::HandleNativePlayerOnStatusChanged(CriAtomPlayerStatus Status)
{
	check(NativePlayer);

	if (bUsePCMFilter)
	{
		if (Status == CRIATOMPLAYER_STATUS_PLAYING)
		{
			FCriWareApi::criAtomPlayer_DiscardSamples(NativePlayer, WaveInfo.NumSamples);
			FCriWareApi::criAtomPlayer_Pause(NativePlayer, CRI_FALSE);
			bIsPaused = false;
		} 
	}

	if (Status == CRIATOMPLAYER_STATUS_PLAYEND || 
		Status == CRIATOMPLAYER_STATUS_STOP || 
		Status == CRIATOMPLAYER_STATUS_ERROR)
	{
		TWeakObjectPtr<UAtomWavePlayer> Self = this;
		AsyncTask(ENamedThreads::GameThread, [Self]()
		{
			UAtomWavePlayer* Player = Self.Get();
			if (Player) {
				Player->PlaybackCompleted(false);
			}
		});
	}
}

// this occur from atom thread
void UAtomWavePlayer::HandleNativePlayerOnDecode(CriAtomPcmFormat Format, CriSint32 NumChannels, CriSint32 NumFrames, void *Data[])
{
	check(NativePlayer);

	if (bUsePCMFilter)
	{
		// this event is not executed on main thread for performance purpose - user code need to use some CS
		if (FilterDataFunction)
		{
			FilterDataFunction(Format, (int32)NumChannels, (int32)NumFrames, Data);
		}
	}
}


#undef LOCTEXT_NAMESPACE
