/* Copyright(c) 2019 CRI Middleware Co., Ltd. */

#include "AtomUnrealSoundRenderer.h"
#include "AudioDevice.h"
#include "Sound/SoundBase.h"
#include "CriWareRuntimePrivatePCH.h"
#include "ActiveSound.h"

namespace {
	FAudioDevice* const GetActiveAudioDeviceFromGEngine() {
		/* タイトルを実行、またはPIEを実行するたびにサウンドデバイスが初期化される */
#if ENGINE_MAJOR_VERSION == 4 && ENGINE_MINOR_VERSION >= 25
		FAudioDevice* const AudioDevice = GEngine->GetActiveAudioDevice().GetAudioDevice();
#else
		FAudioDevice* const AudioDevice = GEngine->GetActiveAudioDevice();
#endif
		return AudioDevice;
	}

}

void  UAtomUnrealSoundRenderer::Init(const int32 InNumChannels, const int32 InSampleRate)
{
	NumChannels = InNumChannels;
	SampleRate = InSampleRate;

	NumSamplesToGeneratePerCallback = DEFAULT_PROCEDURAL_SOUNDWAVE_BUFFER_SIZE;
	Duration = INDEFINITELY_LOOPING_DURATION;
	SoundGroup = SOUNDGROUP_Default;
#if ENGINE_MAJOR_VERSION == 4 && ENGINE_MINOR_VERSION > 22
	VirtualizationMode = EVirtualizationMode::PlayWhenSilent;
#else
	bVirtualizeWhenSilent = true;
#endif
	bCanProcessAsync = true;
	bProcedural = true;
	bLooping = true;
	/* 入力バッファポインタを初期化 */
	for (int32 i = 0; i < MAX_CHANNELS; i++) {
		WritePointer[i] = Pcm[i];
	}
	ResetAudio();
	CurrentDevice = nullptr;
}

void  UAtomUnrealSoundRenderer::Init()
{
	this->Init(MAX_CHANNELS, SAMPLING_RATE);
}

/* 補足: UE4 標準オーディオの仕様にうまく噛み合わせるためは毎フレーム呼ぶ
 *     Active な AudioDevice に AddNewActiveSound した SoundWaveProcedual は UE4 標準オーディオのスレッドで非同期処理される。
 *     したがって実際に SoundWave が有効になるまでラグがある。また、タイミングによっては非同期タスクとして積んだ SoundWave が
 *     アボートされることがある。確実に有効化するために、実際に有効になるまで再生タスクを投げ続ける必要がある */
void UAtomUnrealSoundRenderer::Update(FAudioDevice* InAudioDevice)
{
	check(InAudioDevice != nullptr);

	if (GetSoundPlayCount(InAudioDevice) > 0) {
		/* すでに SoundWave が再生済みなので何もしない */
		return;
	}

	/* 最低限必要なデバイスオブジェクトが取れない場合は何もせず終了
	 * InAudioDevice が取れてる時点で GEngine は絶対に非 null のはずだが */
	if (!GEngine) {
		return;
	}

	/* タイトルを実行、またはPIEを実行するたびにサウンドデバイスが初期化される */
	FAudioDevice* const AudioDevice = GetActiveAudioDeviceFromGEngine();
	if (!AudioDevice) {
		return;
	}

	/* デバイスの変更を検知 */
	bool IsDeviceChanged = (CurrentDevice != AudioDevice);
	if (IsDeviceChanged) {
		CurrentDevice = AudioDevice;
	}

#if ENGINE_MAJOR_VERSION == 4 && ENGINE_MINOR_VERSION >= 25
	/* UE4.25 以降、bPlayingProcedural メンバ定義が追加された*/
	{
		if (IsDeviceChanged) {
			/* デバイスが変更された場合は音を一旦停止状態としてマークする */
			bPlayingProcedural = false;
		}
		if (bPlayingProcedural) {
			/* このまま AddNewActiveSound() を行うと「既に再生状態」という警告が出るのでスキップ */
			return;
		}
	}
#endif

	/* SoundWaveProcedual をスタート。複数回実行される可能性がある */
	FActiveSound NewActiveSound;
	NewActiveSound.SetSound(this);
	NewActiveSound.UserIndex = 0;
	NewActiveSound.bIsUISound = 1;
	CurrentDevice->AddNewActiveSound(NewActiveSound);
	/* AudioDevice に AddNewActiveSound すると、SoundWave の CurrentPlayCount がインクリメントされる */

	/* ちゃんと AddNewActiveSound されれば SoundWave の CurrentPlayCount が 1 以上になる */
	bAudioMixer = InAudioDevice->IsAudioMixerEnabled();
}

Audio::EAudioMixerStreamDataFormat::Type UAtomUnrealSoundRenderer::GetGeneratedPCMDataFormat() const
{
	/* AudioMixer 有効時、UE4標準の出力先バッファは Float フォーマットになる
	 * 本来は Int16 のみサポートしておけば AudioMixer 側で自動変換してくれるが、余計なコストがかかるので自前でやる
	 * 実際の自前インタリーブは OnGeneratePCMAudio 関数を参照すべし */
	return (bAudioMixer) ? Audio::EAudioMixerStreamDataFormat::Float : Audio::EAudioMixerStreamDataFormat::Int16;
}

int32 UAtomUnrealSoundRenderer::OnGeneratePCMAudio(TArray<uint8>& OutAudio, int32 NumSamples)
{
	OutAudio.Reset();
	int32 OutputSamplesGenerated = 0;
	if (NumSamples <= 0) {
		return OutputSamplesGenerated;
	}
#if defined(XPT_TGT_PC)
	/* 各チャンネルごとのサンプル数として NumFrames を求める */
	int32 NumFrames = NumSamples / NumChannels;
	/* 転送上限の計算 */
	int32 Writable = FMath::Min(NumFrames, SAMPLES_PER_PACKET);

	/* PCMデータの取得 */
	int32 ResultFrames = (int32)criAtomExAsrRack_GetPcmDataFloat32(
		CRIATOMEXASR_RACK_DEFAULT_ID, NumChannels, Writable, WritePointer);
	Writable = FMath::Min(NumFrames, (int32)Writable);

	if (ResultFrames > 0) {
		int32 OutAudioSampleIndex = 0;
		/* マルチチャンネルの入力信号を出力バッファへインタリーブ */
		if (bAudioMixer) {
			/* AudioMixer が有効になっているので、出力バッファは float */
			OutAudio.AddZeroed(NumSamples * sizeof(float));
			float* OutAudioBufferHoge = (float*)OutAudio.GetData();
			for (int32 Frame = 0; Frame < ResultFrames; ++Frame)
			{
				for (int32 Channel = 0; Channel < NumChannels; ++Channel)
				{
					OutAudioBufferHoge[OutAudioSampleIndex++] = (float)(WritePointer[Channel][Frame]);
				}
			}
		} else {
			/* AudioMixer が無効になっているので、出力バッファは int16 */
			OutAudio.AddZeroed(NumSamples * sizeof(int16));
			int16* OutAudioBufferHoge = (int16*)OutAudio.GetData();
			for (int32 Frame = 0; Frame < ResultFrames; ++Frame)
			{
				for (int32 Channel = 0; Channel < NumChannels; ++Channel)
				{
					float FVal = WritePointer[Channel][Frame];
					/* 本来 Int16 に収まらない値はクリッピングする */
					int32 Ival = (int32)(FVal * (float)(MAX_int16 + 1));
					if (Ival > MAX_int16) {
						Ival = MAX_int16;
					}
					if (Ival < MIN_int16) {
						Ival = MIN_int16;
					}
					OutAudioBufferHoge[OutAudioSampleIndex++] = (int16)(Ival);
				}
			}
		}
		OutputSamplesGenerated = OutAudioSampleIndex;
	}
#endif
	return OutputSamplesGenerated;
}


int32 UAtomUnrealSoundRenderer::GetSoundPlayCount(FAudioDevice* InAudioDevice) const
{
	const int32* PlayCount = nullptr;
#if ENGINE_MAJOR_VERSION == 4 && ENGINE_MINOR_VERSION >= 25
	PlayCount = this->CurrentPlayCount.Find(InAudioDevice->DeviceID);
#elif ENGINE_MAJOR_VERSION == 4 && ENGINE_MINOR_VERSION >= 24
	PlayCount = this->CurrentPlayCount.Find(InAudioDevice->DeviceHandle);
#else
	int32 PlayCountValue = this->CurrentPlayCount;
	PlayCount = &PlayCountValue;
#endif
	if (!PlayCount) {
		return 0;
	}
	return *PlayCount;
}
