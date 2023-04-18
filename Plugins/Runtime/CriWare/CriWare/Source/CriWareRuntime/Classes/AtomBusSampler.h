#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/ScriptMacros.h"

#include "CriWareApi.h"

#include "AtomBusSampler.generated.h"

class FAtomBusSampler;

UCLASS(BlueprintType, meta = (ToolTip = "The class to Capture and play the PCM data recorded"))
class CRIWARERUNTIME_API UAtomBusSampler : public UObject
{
	GENERATED_BODY()
public:

	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnRecordingStarted);
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnRecordingFinished);

	UAtomBusSampler(const FObjectInitializer& ObjectInitializer);

	// Begin UObject interface.
	virtual void BeginDestroy() override;
	// End UObject interface.

	/**
	* AtomBusSamplerが録音可能な状態かどうかを調べます。
	*/
	UFUNCTION(BlueprintCallable, Category = "Atom|AtomBusSampler")
	bool CanRecord() const;

	/**
	* 録音区間の開始を要求します。
	* 指定した ASR Rack とバスを通る音声データを録音します。
	* 録音できる音声データの最大長(秒)を、本関数の引数として指定できます。
	* この録音データの最大長が録音区間を超えた場合、録音区間の終了時点から直近の音声出力が最大長まで録音されます。
	* 複数の AtomBusSampler が存在する場合であっても、録音区間を開始できるのは同時に１つまでです。
	*
	* @param InExpectedDuration 録音する音声データの最大長を指定します。単位は秒です。
	* @param InAsrRack 録音の対象とする ASR Rack 番号を指定します。デフォルトは 0 番 (デフォルトラック) です。
	* @param InBusName 録音の対象とするバス名を指定します。デフォルトは MasterOut です。
	* @param BusOutput trueのときはバスの出力を、falseならバスへの入力を録音します。デフォルトはtrueです。
	*/
	UFUNCTION(BlueprintCallable, Category = "Atom|AtomBusSampler")
	void StartRecording(float InExpectedDuration = 3.0f, int32 InAsrRack = 0, FString InBusName = "MasterOut", bool BusOutput = true);

	/**
	* 録音区間の終了を要求します。
	* 録音区間の開始時に指定した時間分の出力音声が内部の録音バッファに保持され、再生可能になります。
	*
	*/
	UFUNCTION(BlueprintCallable, Category = "Atom|AtomBusSampler")
	void FinishRecording();

	/**
	* AtomBusSamplerが録音中かどうかを調べます。
	*/
	UFUNCTION(BlueprintCallable, Category = "Atom|AtomBusSampler")
	bool IsRecording() const;

	/**
	* AtomBusSamplerが録音した音声を再生可能な状態かどうかを調べます。
	*/
	UFUNCTION(BlueprintCallable, Category = "Atom|AtomBusSampler")
	bool CanPlayRecordedSound() const;

	/**
	* 録音した音声を再生開始します。
	*/
	UFUNCTION(BlueprintCallable, Category = "Atom|AtomBusSampler")
	void PlayRecordedSound();

	/**
	* 録音した音声の再生を終了します。
	*/
	UFUNCTION(BlueprintCallable, Category = "Atom|AtomBusSampler")
	void StopRecordedSound();

	/**
	* 録音した音声の再生を一時停止します。
	*/
	UFUNCTION(BlueprintCallable, Category = "Atom|AtomBusSampler")
	void PauseRecordedSound(bool bPause);

	/**
	* AtomBusSamplerの音声再生が一時停止状態にあるかどうかを調べます。
	*/
	UFUNCTION(BlueprintCallable, Category = "Atom|AtomBusSampler")
	bool IsPausedRecordedSound() const;

	/**
	* AtomBusSamplerが音声再生中かどうかを調べます。
	*/
	UFUNCTION(BlueprintCallable, Category = "Atom|AtomBusSampler")
	bool IsPlayingRecordedSound() const;

	/**
	* 録音開始時にブロードキャストされるデリゲートです。
	*/

	UPROPERTY(BlueprintAssignable, Category = "Atom|AtomBusSampler")
	FOnRecordingStarted OnRecordingStarted;

	/**
	* 録音終了時にブロードキャストされるデリゲートです。
	*/
	UPROPERTY(BlueprintAssignable, Category = "Atom|AtomBusSampler")
	FOnRecordingFinished OnRecordingFinished;

private:
	static bool bIsAnyRecorderAlreadyStarted;

	FAtomBusSampler* Recorder;
	int32 AsrRack;
	FString BusName;
};
