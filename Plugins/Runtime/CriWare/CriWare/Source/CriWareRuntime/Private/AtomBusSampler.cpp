#include "AtomBusSampler.h"
#include "CriWareRuntimePrivatePCH.h"
#include "CriWareLocalization.h"
#include "AtomAsrRack.h"

#define LOCTEXT_NAMESPACE "AtomBusSampler"


bool UAtomBusSampler::bIsAnyRecorderAlreadyStarted = false;

class FAtomCapturedPcmDataPlayer
{
public:
	FAtomCapturedPcmDataPlayer(CriAtomPcmFormat InFormat, FAtomBusSampler* InRecorder);
	~FAtomCapturedPcmDataPlayer();

	void Play();
	void Stop();
	void Pause(bool bPause);
	bool IsPlaying() const;
	bool IsPaused() const;
	void DataRequestCallback(void *Obj, CriAtomExPlaybackId Id, CriAtomPlayerHn PlayerImpl);

private:
	CriAtomExPlayerHn PlayerHn;
	CriAtomExVoicePoolHn RawPcmPool;
	FAtomBusSampler* Recorder;
	const int MaxSamplingRate;
	const int MaxChannels;
	const CriAtomPcmFormat Format;
	bool bIsPaused;

	// This identifier value is needed to play PCM data with AtomExPlayer.
	static const int RAW_PCM_VOICE_POOL_ID = 3333;
};


class FAtomBusSampler
{
	friend FAtomCapturedPcmDataPlayer;

public:
	FAtomBusSampler();
	~FAtomBusSampler();

	bool StartRecording(float InExpectedDuration, CriAtomExAsrRackId InAsrRack, const FString& InBusName, bool BusOutput);
	bool FinishRecording(CriAtomExAsrRackId AsrRack, const FString& BusName);
	bool CanPlayRecordedSound() const;
	void PlayRecordedSound();
	void StopRecordedSound();
	void PauseRecordedSound(bool bPause);
	void BusFilterCallback(void *Obj, CriAtomPcmFormat Format, CriSint32 NumChannels, CriSint32 NumSamples, void *Data[]);
	bool IsRecording() const;
	bool IsPlaying() const;
	bool IsPausedRecordedSound() const;

private:
	bool IsFinishedRecording() const;
	void Finish(bool request);

	// This is a ring buffer.
	CriSint16* CaptureDataBufferSint16;
	int BufferTailIndex;
	int NumSamplesCaptured;
	int NumSamplesPlayed;
	bool bIsFinished;
	CriAtomExAsrRackId AsrRack;
	FString BusName;
	float ExpectedDuration;
	int MaxNumSamples;
	int MaxSamplingRate;
	int MaxNumChannels;
	TUniquePtr<FAtomCapturedPcmDataPlayer> Player;
};


namespace UAtomBusOutputRecorder_NativeCallbacks
{
	// This callback is called from the AtomServerThread, when a mixed PCM data is sent to the bus of the ASR-rack.
	extern "C" void CRIAPI OnBusFilterCallback(void *Obj, CriAtomPcmFormat Format, CriSint32 NumChannels, CriSint32 NumSamples, void *Data[])
	{
		FAtomBusSampler* Self = static_cast<FAtomBusSampler*>(Obj);
		if (Self) {
			Self->BusFilterCallback(Obj, Format, NumChannels, NumSamples, Data);
		}
	}
}


namespace UAtomPcmPlayer_NativeCallbacks
{
	// This callback is called from the AtomServerThread, when a AtomPlayer needs more PCM data to play.
	extern "C" void CRIAPI OnDataRequestCallback(void *Obj, CriAtomExPlaybackId Id, CriAtomPlayerHn PlayerImpl)
	{
		FAtomCapturedPcmDataPlayer* Self = static_cast<FAtomCapturedPcmDataPlayer*>(Obj);
		if (Self) {
			Self->DataRequestCallback(Obj, Id, PlayerImpl);
		}
	}
}


FAtomCapturedPcmDataPlayer::FAtomCapturedPcmDataPlayer(CriAtomPcmFormat InFormat, FAtomBusSampler* InRecorder)
	: Recorder(InRecorder)
	, MaxSamplingRate(InRecorder->MaxSamplingRate)
	, MaxChannels(InRecorder->MaxNumChannels)
	, Format(InFormat)
	, bIsPaused(false)
{
	{
		CriAtomExRawPcmVoicePoolConfig rawpcm_vpconfig;

		// Raw PCMボイスプールの作成
		criAtomExVoicePool_SetDefaultConfigForRawPcmVoicePool(&rawpcm_vpconfig);
		rawpcm_vpconfig.identifier = RAW_PCM_VOICE_POOL_ID;
		rawpcm_vpconfig.num_voices = 1;
		rawpcm_vpconfig.player_config.max_channels = MaxChannels;
		rawpcm_vpconfig.player_config.max_sampling_rate = MaxSamplingRate;
		rawpcm_vpconfig.player_config.pcm_format = InFormat;
		RawPcmPool = FCriWareApi::criAtomExVoicePool_AllocateRawPcmVoicePool(
			&rawpcm_vpconfig, nullptr, 0);
	}

	PlayerHn = FCriWareApi::criAtomExPlayer_Create(nullptr, nullptr, 0);

	// 再生する音声データのフォーマット情報を指定
	FCriWareApi::criAtomExPlayer_SetFormat(PlayerHn, CRIATOMEX_FORMAT_RAW_PCM);
	FCriWareApi::criAtomExPlayer_SetSamplingRate(PlayerHn, MaxSamplingRate);
	FCriWareApi::criAtomExPlayer_SetNumChannels(PlayerHn, MaxChannels);
	FCriWareApi::criAtomExPlayer_SetVoicePoolIdentifier(PlayerHn, RAW_PCM_VOICE_POOL_ID);

	// 次回データを供給するためのコールバック関数を指定
	FCriWareApi::criAtomExPlayer_SetDataRequestCallback(PlayerHn, UAtomPcmPlayer_NativeCallbacks::OnDataRequestCallback, this);
};


FAtomCapturedPcmDataPlayer::~FAtomCapturedPcmDataPlayer()
{
	// The Player must not be destroyed before the Recorder's audio buffer is released.
	check(Recorder && Recorder->CaptureDataBufferSint16 != nullptr);
	if (PlayerHn) {
		FCriWareApi::criAtomExPlayer_StopWithoutReleaseTime(PlayerHn);
		FCriWareApi::criAtomExPlayer_SetDataRequestCallback(PlayerHn, nullptr, nullptr);
		FCriWareApi::criAtomExPlayer_Destroy(PlayerHn);
	}
	if (RawPcmPool) {
		FCriWareApi::criAtomExVoicePool_Free(RawPcmPool);
	}
};


// Set and play PCM data from the ring buffer. 
// If the head index specifies to the intermediate position of this buffer, remained data is processed in the DataRequestCallback function.
void FAtomCapturedPcmDataPlayer::Play()
{
	check(Recorder && Recorder->IsFinishedRecording());
	check(Recorder->CaptureDataBufferSint16);

	if (PlayerHn && (FCriWareApi::criAtomExPlayer_GetStatus(PlayerHn) != CRIATOMEXPLAYER_STATUS_STOP)) {
		FCriWareApi::criAtomExPlayer_StopWithoutReleaseTime(PlayerHn);
	}

	CriSint32 BufferHead = 0;
	if (Recorder->NumSamplesCaptured > Recorder->MaxNumSamples) {
		BufferHead = Recorder->BufferTailIndex;
		Recorder->NumSamplesPlayed = Recorder->MaxNumSamples - Recorder->BufferTailIndex / Recorder->MaxNumChannels;
	}
	else {
		BufferHead = 0;
		Recorder->NumSamplesPlayed = Recorder->BufferTailIndex / Recorder->MaxNumChannels;
	}

	FCriWareApi::criAtomExPlayer_SetData(PlayerHn, &Recorder->CaptureDataBufferSint16[BufferHead], Recorder->NumSamplesPlayed * Recorder->MaxNumChannels * sizeof(CriSint16));
	FCriWareApi::criAtomExPlayer_Start(PlayerHn);
}


void FAtomCapturedPcmDataPlayer::Stop()
{
	if (PlayerHn) {
		FCriWareApi::criAtomExPlayer_Stop(PlayerHn);
	}
}


void FAtomCapturedPcmDataPlayer::Pause(bool bPause)
{
	if (PlayerHn) {
		if (bPause) {
			FCriWareApi::criAtomExPlayer_Pause(PlayerHn, CRI_TRUE);
			bIsPaused = true;
		}
		else {
			FCriWareApi::criAtomExPlayer_Pause(PlayerHn, CRI_FALSE);
			bIsPaused = false;
		}
	}
}


bool FAtomCapturedPcmDataPlayer::IsPlaying() const
{
	if (PlayerHn && (FCriWareApi::criAtomExPlayer_GetStatus(PlayerHn) == CRIATOMEXPLAYER_STATUS_PLAYING)) {
		return true;
	}
	return false;
}


bool FAtomCapturedPcmDataPlayer::IsPaused() const
{
	return bIsPaused;
}


// Callback function to set remained PCM data in the ring buffer to AtomPlayer
void FAtomCapturedPcmDataPlayer::DataRequestCallback(void *Obj, CriAtomExPlaybackId Id, CriAtomPlayerHn PlayerImpl)
{
	if (Recorder == nullptr) {
		return;
	}

	if ((Recorder->NumSamplesPlayed <= 0) || (Recorder->NumSamplesPlayed >= Recorder->MaxNumSamples)) {
		return;
	}

	if (Recorder->NumSamplesCaptured < Recorder->MaxNumSamples) {
		return;
	}

	FCriWareApi::criAtomPlayer_SetData(PlayerImpl, &Recorder->CaptureDataBufferSint16[0], Recorder->BufferTailIndex * sizeof(CriSint16));
	Recorder->NumSamplesPlayed += Recorder->BufferTailIndex / Recorder->MaxNumChannels;
	check(Recorder->NumSamplesPlayed == Recorder->MaxNumSamples);
}


FAtomBusSampler::FAtomBusSampler()
	: CaptureDataBufferSint16(nullptr)
	, BufferTailIndex(0)
	, NumSamplesCaptured(0)
	, NumSamplesPlayed(0)
	, bIsFinished(true)
	, Player(nullptr)
{};


FAtomBusSampler::~FAtomBusSampler() {
	// The PlayerImpl must be destroyed before the RecorderImpl is destructed.
	if (Player != nullptr) {
		Player.Release();
		Player = nullptr;
	}
	check(Player == nullptr);

	if (CaptureDataBufferSint16 == nullptr) {
		return;
	}
	delete(CaptureDataBufferSint16);
};


void FAtomBusSampler::BusFilterCallback(void *Obj, CriAtomPcmFormat Format, CriSint32 NumChannels, CriSint32 NumSamples, void *Data[])
{
	// 既に Stop 状態なら何もしない
	if (this->IsFinishedRecording()) {
		return;
	}

	// Do nothing if it's not sound playback.
	if ((NumChannels <= 0) || (NumSamples <= 0)) {
		return;
	}

	if (CaptureDataBufferSint16 == nullptr) {
		MaxSamplingRate = CRIATOM_DEFAULT_OUTPUT_SAMPLING_RATE;
		MaxNumSamples = (int)(ExpectedDuration * (float) MaxSamplingRate);
		MaxNumChannels = NumChannels;
		CaptureDataBufferSint16 = new CriSint16[MaxNumSamples * MaxNumChannels * sizeof(CriSint16)]{};
	}

	if (this->MaxNumChannels != NumChannels) {
		UE_LOG(LogCriWareRuntime, Error, TEXT("The number of channels in the output data is %d. It is not the expected value (%d)."), NumChannels, this->MaxNumChannels);
		return;
	}

	if (Format == CRIATOM_PCM_FORMAT_FLOAT32) {
		int i = 0;
		for (; i < NumSamples; i++) {
			for (int j = 0; j < this->MaxNumChannels; j++) {
				{
					float FVal = ((CriFloat32**)Data)[j][i];
					int Ival = (int)(FVal * (float)(32767 + 1));
					// 本来 Int16 に収まらない値はクリッピングしておく
					if (Ival > 32767) {
						Ival = 32767;
					}
					if (Ival < -32767) {
						Ival = -32767;
					}
					this->CaptureDataBufferSint16[this->BufferTailIndex] = (CriSint16)(Ival);
				}

				if (this->BufferTailIndex == this->MaxNumSamples * this->MaxNumChannels - 1) {
					this->BufferTailIndex = 0;
				}
				else {
					this->BufferTailIndex++;
				}
			}
		}
		this->NumSamplesCaptured += (i - 1);

	} else if (Format == CRIATOM_PCM_FORMAT_SINT16) {
		int i = 0;
		for (; i < NumSamples; i++) {
			for (int j = 0; j < this->MaxNumChannels; j++) {
				CriSint16** InputData = (CriSint16**)Data;
				this->CaptureDataBufferSint16[this->BufferTailIndex] = InputData[j][i];
				if (this->BufferTailIndex == this->MaxNumSamples * this->MaxNumChannels - 1) {
					this->BufferTailIndex = 0;
				}
				else {
					this->BufferTailIndex++;
				}
			}
		}
		this->NumSamplesCaptured += (i - 1);

	} else {
		check(false);
	}
}


bool FAtomBusSampler::IsRecording() const
{
	return (IsFinishedRecording() == false);
}


bool FAtomBusSampler::IsPlaying() const
{
	if (Player == nullptr) {
		return false;
	}
	return Player->IsPlaying();
}


bool FAtomBusSampler::IsPausedRecordedSound() const
{
	if (Player == nullptr) {
		return false;
	}
	return Player->IsPaused();
}


bool FAtomBusSampler::IsFinishedRecording() const
{
	bool Result = false;
	{
		FCriWareApi::criAtom_Lock();
		Result = bIsFinished;
		FCriWareApi::criAtom_Unlock();
	}
	return Result;
}


void FAtomBusSampler::Finish(bool request)
{
	FCriWareApi::criAtom_Lock();
	bIsFinished = request;
	FCriWareApi::criAtom_Unlock();
};


bool FAtomBusSampler::StartRecording(float InExpectedDuration, CriAtomExAsrRackId InAsrRack, const FString& InBusName, bool BusOutput)
{
	check(InExpectedDuration > 0.0f);

	if (!IsFinishedRecording()) {
		// 2連続呼び出しは禁止。かならず事前に Finish(true) を呼ぶ必要あり
		return false;
	}

	if (CaptureDataBufferSint16) {
		if (InExpectedDuration != ExpectedDuration) {
			// バッファの作り直しが必要なら一旦破棄
			delete CaptureDataBufferSint16;
			CaptureDataBufferSint16 = nullptr;
		}
	}

	BufferTailIndex = 0;
	NumSamplesCaptured = 0;
	NumSamplesPlayed = 0;
	Finish(false);
	ExpectedDuration = InExpectedDuration;
	AsrRack = InAsrRack;
	BusName = InBusName;

	if (BusOutput) {
		FCriWareApi::criAtomExAsrRack_SetBusFilterCallbackByName(
			AsrRack,
			TCHAR_TO_UTF8(*BusName),
			nullptr,
			UAtomBusOutputRecorder_NativeCallbacks::OnBusFilterCallback,
			this);
	} else {
		FCriWareApi::criAtomExAsrRack_SetBusFilterCallbackByName(
			AsrRack,
			TCHAR_TO_UTF8(*BusName),
			UAtomBusOutputRecorder_NativeCallbacks::OnBusFilterCallback,
			nullptr,
			this);
	}

	return true;
};


bool FAtomBusSampler::FinishRecording(CriAtomExAsrRackId InAsrRack, const FString& InBusName)
{
	if (IsFinishedRecording()) {
		return false;
	}

	// バスフィルターコールバックの登録解除
	FCriWareApi::criAtomExAsrRack_SetBusFilterCallbackByName(
		InAsrRack,
		TCHAR_TO_UTF8(*InBusName),
		nullptr,
		nullptr,
		nullptr);

	Finish(true);
	return true;
};


bool FAtomBusSampler::CanPlayRecordedSound() const
{
	if (IsRecording()) {
		return false;
	}

	if ((Player != nullptr) && (Player->IsPlaying())) {
		return false;
	}

	return (CaptureDataBufferSint16 != nullptr);
}


void FAtomBusSampler::PlayRecordedSound()
{
	check(CanPlayRecordedSound());

	// The PlayerImpl must be destroyed before the RecorderImpl is destructed.
	if (Player != nullptr) {
		Player.Release();
		Player = nullptr;
	}
	check(Player == nullptr);

	Player = MakeUnique<FAtomCapturedPcmDataPlayer>(CRIATOM_PCM_FORMAT_SINT16, this);
	check(Player);

	Player->Play();
}


void FAtomBusSampler::StopRecordedSound()
{
	if (Player != nullptr) {
		Player->Stop();
	}
}


void FAtomBusSampler::PauseRecordedSound(bool bPause)
{
	if (Player != nullptr) {
		Player->Pause(bPause);
	}
}


UAtomBusSampler::UAtomBusSampler(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	, Recorder(nullptr)
	, AsrRack(-1)
	, BusName("")
{
#if WITH_EDITOR
	// Localization of unreal properties metadata with LOCTEXT markups and reflection
	CRI_LOCCLASS(GetClass());
#endif
}


void UAtomBusSampler::BeginDestroy()
{
	if (Recorder != nullptr) {
		if (Recorder->FinishRecording((CriAtomExAsrRackId)AsrRack, BusName)) {
			bIsAnyRecorderAlreadyStarted = false;
		}
	}
	OnRecordingStarted.Clear();
	OnRecordingFinished.Clear();
	Super::BeginDestroy();
}


bool UAtomBusSampler::CanRecord() const
{
	return (!bIsAnyRecorderAlreadyStarted);
}


void UAtomBusSampler::StartRecording(float InExpectedDuration, int32 InAsrRack, FString InBusName, bool BusOutput)
{
	if (!CanRecord()) {
		UE_LOG(LogCriWareRuntime, Error, TEXT("It is not allowed to start more than one of UAtomBusSampler objects for recording."));
		return;
	}

	UAtomAsrRack* AsrRackPtr = UAtomAsrRack::GetAsrRack(InAsrRack);
	if (!IsValid(AsrRackPtr)) {
		UE_LOG(LogCriWareRuntime, Error, TEXT("Failed to start recording. The ASR Rack specified is invalid."));
		return;
	}

	if (InExpectedDuration <= 0.0f) {
		UE_LOG(LogCriWareRuntime, Error, TEXT("Failed to start recording. The duration value must be over zero."));
		return;
	}

	AsrRack = InAsrRack;
	BusName = InBusName;

	if (Recorder == nullptr) {
		Recorder = new FAtomBusSampler();
		check(Recorder);
	}
	
	if (Recorder->StartRecording(InExpectedDuration, (CriAtomExAsrRackId)AsrRack, BusName, BusOutput)) {
		bIsAnyRecorderAlreadyStarted = true;
		OnRecordingStarted.Broadcast();
	}
}


void UAtomBusSampler::FinishRecording()
{
	if (Recorder == nullptr) {
		return;
	}

	if (!Recorder->IsRecording())
	{
		return;
	}

	if (Recorder->FinishRecording((CriAtomExAsrRackId)AsrRack, BusName)) {
		bIsAnyRecorderAlreadyStarted = false;
		OnRecordingFinished.Broadcast();
	}
}


bool UAtomBusSampler::IsRecording() const
{
	if (Recorder == nullptr) {
		return false;
	}

	return Recorder->IsRecording();
}


bool UAtomBusSampler::CanPlayRecordedSound() const
{
	if (Recorder == nullptr) {
		return false;
	}

	return Recorder->CanPlayRecordedSound();
}

void UAtomBusSampler::PlayRecordedSound()
{
	if (Recorder == nullptr) {
		UE_LOG(LogCriWareRuntime, Error, TEXT("Failed to play recorded sound. This UAtomBusSampler object is invalid."));
		return;
	}

	if (!CanPlayRecordedSound()) {
		UE_LOG(LogCriWareRuntime, Error, TEXT("Failed to play recorded sound. This UAtomBusSampler can not play sounds now."));
		return;
	}

	Recorder->PlayRecordedSound();
}


void UAtomBusSampler::StopRecordedSound()
{
	if (Recorder == nullptr) {
		return;
	}

	Recorder->StopRecordedSound();
}


void UAtomBusSampler::PauseRecordedSound(bool bPause)
{
	if (Recorder == nullptr) {
		return;
	}

	Recorder->PauseRecordedSound(bPause);
}


bool UAtomBusSampler::IsPlayingRecordedSound() const
{
	if (Recorder == nullptr) {
		return false;
	}

	return Recorder->IsPlaying();
}


bool UAtomBusSampler::IsPausedRecordedSound() const
{
	if (Recorder == nullptr) {
		return false;
	}

	return Recorder->IsPausedRecordedSound();
}

#undef LOCTEXT_NAMESPACE
