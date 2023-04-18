/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2016-2018 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine 4
 * Module   : Atom ASR Rack
 * File     : AtomAsrRack.h
 *
 ****************************************************************************/

/* 多重定義防止 */
#pragma once

/***************************************************************************
 *      インクルードファイル
 *      Include files
 ***************************************************************************/
/* Unreal Engine 4関連ヘッダ */
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/ScriptMacros.h"

#include "CriWareInitializer.h"

/* モジュールヘッダ */
#include "AtomAsrRack.generated.h"

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

/***************************************************************************
 *      変数宣言
 *      Prototype Variables
 ***************************************************************************/

/***************************************************************************
 *      クラス宣言
 *      Prototype Classes
 ***************************************************************************/
UCLASS(BlueprintType, meta = (ToolTip = "AtomAsrRack class."))
class CRIWARERUNTIME_API UAtomAsrRack : public UObject
{
	GENERATED_UCLASS_BODY()

	/**
	* デフォルトのASRラックを取得します。
	* 本関数で取得したASRラックに対し、適宜DSPバス設定のアタッチ等の操作を行う必要があります。
	*
	* @return デフォルトのASRラックオブジェクトへのリファレンスが返ります。
	*/
	UFUNCTION(BlueprintCallable, Category="AtomAsrRack")
	static UAtomAsrRack* GetDefaultAsrRack();

	/**
	* 任意のASRラックを取得します。
	*
	* @param ここに指定したIDのASRラックを取得します。
	* @return ASRラックオブジェクトへのリファレンスが返ります。
	*/
	UFUNCTION(BlueprintCallable, Category="AtomAsrRack")
	static UAtomAsrRack* GetAsrRack(int32 AsrRackId);

	/**
	* DSPバス設定を適用します。
	* 
	* @param SettingName CRI Atom Craftで作成したDSPバス設定の名前を指定します。
	*/
	UFUNCTION(BlueprintCallable, Category="AtomAsrRack")
	void AttachDspBusSetting(FString SettingName);

	/**
	* DSPバス設定を解除します。
	*/
	UFUNCTION(BlueprintCallable, Category="AtomAsrRack")
	void DetachDspBusSetting();

	/**
	* DSPバススナップショットを適用します。
	*
	* @param SnapshotName CRI Atom Craftで作成したDSPバススナップショットの名前を指定します。
	* @param Milliseconds ここに指定した時間（単位はミリ秒）をかけてスナップショットで設定したパラメータに遷移します。
	*/
	UFUNCTION(BlueprintCallable, Category="AtomAsrRack")
	void ApplyDspBusSnapshot(FString SnapshotName, int32 Milliseconds);

	/**
	 * 現在適用されているSnapshot名を返します。
	 *
	 * @param AsrRackId ここに指定したIDのASRラックに適用されているSnapshotを返します。
	 * @return 適用されているSnapshot名を返します。
	 */
	UFUNCTION(BlueprintCallable, Category = "AtomAsrRack")
	FString GetCurrentAppliedSnapshot(int32 AsrRackId);

	/**
	* DSPバスのボリュームを変更します。
	*
	* @param BusName ボリューム変更の対象となるバスの名前を指定します。
	* @param Volume ボリューム値を指定します。
	*/
	UFUNCTION(BlueprintCallable, Category="AtomAsrRack")
	void SetBusVolumeByName(FString BusName, float Volume);

	/**
	* DSPバス間のセンドレベルを変更します。
	*
	* @param SourceBusName センド元のバス名を指定します。
	* @param DestBusName センド先バス名を指定します。
	* @param Level センドレベルを指定します。
	*/
	UFUNCTION(BlueprintCallable, Category="AtomAsrRack")
	void SetBusSendLevelByName(FString SourceBusName, FString DestBusName, float Level);

	/**
	* エフェクトのバイパスを設定します。
	*
	* @param BusName バス名を指定します。
	* @param EffectName エフェクト名を指定します。
	* @param Bypasses バイパスするかどうかを指定します。
	*/
	UFUNCTION(BlueprintCallable, Category="AtomAsrRack")
	void SetEffectBypass(FString BusName, FString EffectName, bool Bypasses);

	/**
	* レベル測定結果を取得します。
	* 測定結果の値の単位はdB(デシベル)です。
	* [RMS値]
	*  短い期間のサンプル全てを二乗平均平方根で計算したもので、ボリュームユニット（VU）とも呼ばれます。
	*  この値は聴感的な音量に近いとされています。
	* [ピーク値]
	*  その瞬間の振幅の最大値です。主に音声のクリップを検知するときに使用します。
	* [ピークホールド値]
	*  ピークの最大値を一定時間保持したときの値です。
	*  一瞬発生したクリップを見逃さないようにする仕組みです。
	*
	* @param DspBusName DSPバスの名前を指定します。
	* @param num_channels チャンネル数が返ります。
	* @param rms_levels RMS値が返ります。
	* @param peak_levels ピーク値が返ります。
	* @param peak_hold_levels ピークホールド値が返ります。
	* @return 成功/失敗が返ります。
	*/
	UFUNCTION(BlueprintCallable, Category = "AtomAsrRack")
	bool GetBusAnalyzerInfo(FString DspBusName, int32& num_channels, TArray<float>& rms_levels, TArray<float>& peak_levels, TArray<float>& peak_hold_levels);

	/* <cri_delete_if_LE> */
	/* </cri_delete_if_LE> */

	/* ASRラックID */
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category="AtomAsrRack", meta = (ToolTip = "Rack ID."))
	int32 RackId;

	FString UserSetSnapshotName;
};

/***************************************************************************
 *      関数宣言
 *      Prototype Functions
 ***************************************************************************/

/* --- end of file --- */
