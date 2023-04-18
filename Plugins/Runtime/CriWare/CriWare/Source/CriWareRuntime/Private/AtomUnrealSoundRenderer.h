/* Copyright(c) 2019 CRI Middleware Co., Ltd. */

#pragma once

#include "CoreMinimal.h"
#include "Sound/SoundWaveProcedural.h"

/* モジュールヘッダ */
#include "AtomUnrealSoundRenderer.generated.h"


/* CRI Atom ランタイム がデコード・ミックスした音声を UE4 標準オーディオを介して再生するためのクラス。
 * このクラス自体は CRI Atom ランタイムからすればただの出力先。非公開クラスなのでユーザが直接は使わない。
 * CriWareInitializer が内部で生成して保持するのみ。今後、ユーザに予告無く定義を削除または仕様変更する。 
 * --> 注意：CriWareRuntime.Build.cs に AddPublicDefinition("CRIWARE_USE_PCM_OUTPUT=1") を追加してはじめて有効になる
 */
UCLASS()
class CRIWARERUNTIME_API UAtomUnrealSoundRenderer : public USoundWaveProcedural
{
	GENERATED_BODY()

public:
	void Init(const int32 InNumChannels, const int32 InSampleRate);
	void Init();

	/* 再生状態を更新するための関数。毎フレーム呼ぶ必要がある。再生開始するだけで停止にすることは無い。今のところは */
	void Update(FAudioDevice* InAudioDevice);

	/* CRI Atom ランタイムの音声出力の最終バッファから PCM を取得して、UE4 標準オーディオの出力バッファへ渡す関数 */
	virtual int32 OnGeneratePCMAudio(TArray<uint8>& OutAudio, int32 NumSamples) override;

	/* UE4 標準オーディオの出力バッファに、どういうフォーマットで PCM を書き込むか。Float か Int16 か。UE4 の動作モードで変わる */
	virtual Audio::EAudioMixerStreamDataFormat::Type GetGeneratedPCMDataFormat() const override;

private:
	/* 最大チャンネル数。プラットフォームによって違うはず。実際はこのクラスの外部で定義すべき。今後そうする */
	static const int32 MAX_CHANNELS = 8;

	/* サンプリングレート。MAX_CHANNELS とおなじ問題を孕む */
	static const int32 SAMPLING_RATE = 48000;

	/* 単位転送サンプル数 */
	static const int32 SAMPLES_PER_PACKET = 1024;

	/* 中間バッファ */
	float Pcm[MAX_CHANNELS][SAMPLES_PER_PACKET];
	float* WritePointer[MAX_CHANNELS];

	/* AudioMixer が有効かどうか。出力フォーマットが変わるのでインタリーブ処理に影響する */
	bool bAudioMixer;

	int32 GetSoundPlayCount(FAudioDevice* InAudioDevice) const;

	FAudioDevice* CurrentDevice;
};
