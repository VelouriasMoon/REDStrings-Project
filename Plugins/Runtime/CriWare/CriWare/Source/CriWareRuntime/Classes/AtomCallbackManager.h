/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2020 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine 4
 * Module   : Atom Callback Manager
 * File     : AtomCallbackManager.h
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

/* CRIWAREプラグインヘッダ */
#include "CriWareApi.h"

/* モジュールヘッダ */
#include "AtomCallbackManager.generated.h"

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
class UAtomComponent;

/* ビートシンク情報 */
USTRUCT(BlueprintType, Category = "Atom Callback",
	meta = (HasNativeBreak = "CriWareRuntime.AtomCallbackManager.NativeBreakAtomBeatSyncInfo"))
struct FAtomBeatSyncInfo
{
	GENERATED_USTRUCT_BODY()

public:
	/* プレイヤーハンドル */
	CriAtomExPlayerHn Player;
	/* 再生ID */
	CriAtomExPlaybackId PlaybackID;
	/* 現在の小節数 */
	uint32 BarCnt;
	/* 拍数(分子) */
	uint32 BeatCnt;
	/* 拍の進捗(0.0f〜1.0f) */
	float BeatProgress;
	/* テンポ(拍/分) */
	float Bpm;
	/* 同期オフセット(ms) */
	int32 Offset;
	/* 拍子数(分母) */
	uint32 NumBeats;
}; 

/* シーケンスのイベントタイプ */
UENUM(BlueprintType, Category = "Atom Callback")
enum class EAtomSequenceEventType : uint8
{
	/* コールバック */
	SEQUENCE_TYPE_CALLBACK,
	/* Enumのサイズ4バイト */
	SEQUENCE_TYPESIZE_4BYTE,
};

/* シーケンス情報 */
USTRUCT(BlueprintType, Category = "Atom Callback",
	meta = (HasNativeBreak = "CriWareRuntime.AtomCallbackManager.NativeBreakAtomSequenceInfo"))
struct FAtomSequenceInfo
{
	GENERATED_USTRUCT_BODY()

public:
	/* マーカー時刻 */
	uint64 Position;
	/* プレイヤーハンドル */
	CriAtomExPlayerHn Player;
	/* コールバックのタグ名 */
	const char* TagName;
	/* 再生ID */
	CriAtomExPlaybackId PlaybackID;
	/* イベントタイプ */
	CriAtomExSequecneEventType EventType;
	/* コールバックID */
	uint32 CallbackID;

private:
	/* 予約領域 */
	uint32 Reserved[1];
};

/***************************************************************************
 *      変数宣言
 *      Prototype Variables
 ***************************************************************************/

/***************************************************************************
 *      インターフェース宣言
 *      Prototype Interface
***************************************************************************/
/* リフレクションに含めるための定義 */
UINTERFACE(BlueprintType, Category = "Atom Callback")
class UAtomCallback : public UInterface
{
	GENERATED_UINTERFACE_BODY()
};

class IAtomCallback
{
	GENERATED_IINTERFACE_BODY()

public:
	/** コンストラクタ */
	IAtomCallback() = default;

	/*
	 * デストラクタは内部プライベートで宣言済み 
	 */

public:
	
	/*
	 * 純粋仮想関数をテンプレートにできない
	 */
	
	/** ビートシンクコールバックの実行 */
	virtual void OnExecuteBeatSyncCallback(const FAtomBeatSyncInfo&) = 0;
	/** シーケンスコールバックの実行 */
	virtual void OnExecuteSequenceCallback(const FAtomSequenceInfo&) = 0;

	/*
	 * Normalな関数の宣言が可能(実体持てる)
	 * ex) void Sample(){ std::cout << "Function Sample" << std::endl; }
	 * UFUNCTIONな関数を宣言する場合 "BlueprintNativeEvent" or "BlueprintImplementableEvent" を付与する(純粋仮想関数のようなモノ)
	 * ex) UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Sample")
	 *     void Sample(); //virtual void Sample() = 0; と同じ
	 */

	/*
	 * Normalな変数の宣言が可能
	 * ex) int Sample{ 0 };
	 * UPROPERTYは付与できない
	 */
};

/***************************************************************************
 *      クラス宣言
 *      Prototype Classes
 ***************************************************************************/
UCLASS(BlueprintType, Category = "Atom Callback")
class CRIWARERUNTIME_API UAtomCallbackManager :
	public UObject, public FTickableGameObject
{
	GENERATED_BODY()

public:
	/** コールバックオブジェクトの配列に追加 
	 * @param Player プレイヤーハンドル(キー)
	 * @param CallbackObject コールバックオブジェクト(バリュー)
	 * @return 配列への追加結果フラグ
	 */
	static bool InsertCallbackObjectListForAtomPlayerHn(const CriAtomExPlayerHn& Player, IAtomCallback* CallbackObject);
	/** コールバックオブジェクトの配列から削除
	 * @param Player プレイヤーハンドル(キー)
	 * @return 配列からの削除結果フラグ
	 */
	static bool RemoveCallbackObjectListForAtomPlayerHn(const CriAtomExPlayerHn& Player);
	/** コールバックオブジェクトの配列から値を取得(内部でValidチェック実行)
	 * @param Player プレイヤーハンドル(キー)
	 * @return コールバックオブジェクト
	 */
	static IAtomCallback* GetCallbackObjectForList(const CriAtomExPlayerHn& Player);
	
private:
	/** BP上でのビートシンク情報のピンの分解(HasNativeBreakメタ情報用)
	 * @param BeatSyncInfo 分解するビートシンク情報
	 * @param BarCnt 現在の小節数
	 * @param BeatCnt 拍数(分子)
	 * @param BeatProgress 拍の進捗(0.0f〜1.0f)
	 * @param Bpm テンポ(拍/分)
	 * @param Offset 同期オフセット(ms)
	 * @param NumBeats 拍子数(分母) 
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Atom Callback", meta = (NativeBreakFunc))
	static void NativeBreakAtomBeatSyncInfo(const FAtomBeatSyncInfo& BeatSyncInfo, int32& BarCnt, int32& BeatCnt, float& BeatProgress, float& Bpm, int32& Offset, int32& NumBeats);
	/** BP上でのシーケンサ情報のピンの分解(HasNativeBreakメタ情報用)
	 * @param SequenceInfo 分解するシーケンス情報
	 * @param Time 再生経過時間
	 * @param TagName コールバックのタグ名
	 * @param EventType イベントタイプ
	 * @param CallbackID コールバックID
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Atom Callback", meta = (NativeBreakFunc))
	static void NativeBreakAtomSequenceInfo(const FAtomSequenceInfo& SequenceInfo, float& Time, FString& TagName, EAtomSequenceEventType& EventType, int32& CallbackID);
	/** ビートシンクコールバック関数(CriAtomExBeatSyncCbFuncと同じ関数にしないとコールバックに登録できない)
	 * @param Obj ユーザー指定オブジェクト
	 * @param BeatSyncInfo ビートシンク情報
	 * @return 未使用AtomExライブラリのビートシンクコールバック関数型
	 */
	static CriSint32 OnBeatSyncFunction(void* Obj, const CriAtomExBeatSyncInfo* BeatSyncInfo);
	/** シーケンスコールバック関数(CriAtomExSequencerEventCbFuncと同じ関数にしないとコールバックに登録できない)
	 * @param Obj ユーザー指定オブジェクト
	 * @param SequenceInfo シーケンス情報
	 * @return 未使用AtomExライブラリのシーケンスコールバック関数型
	 */
	static CriSint32 OnSequenceFunction(void* Obj, const CriAtomExSequenceEventInfo* SequenceInfo);
	
public:
	/** コンストラクタ */
	UAtomCallbackManager();
	/** デストラクタ */
	~UAtomCallbackManager();

public:
	/** 毎フレーム処理 */
	virtual void Tick(float DeltaTime) override;

public:
	/** 毎フレーム処理の確認
	 * @return true:処理する / false:処理しない
	 */
	virtual bool IsTickable() const override;
	/** エディタ処理の確認
	 * @return true:処理する / false:処理しない
	 */
	virtual bool IsTickableInEditor() const override;
	/** 一時停止処理の確認  
	 * @return true:処理する / false:処理しない
	 */
	virtual bool IsTickableWhenPaused() const override;
	/** TickIDの取得
	 * @return TickID
	 */
	virtual TStatId GetStatId() const override;

private:
	/** すべてのコールバックの登録 */
	void RegisterAllCallback();
	/** ビートシンクコールバックの実行 */
	void ExecuteBeatSyncCallback();
	/** シーケンスコールバックの実行 */
	void ExecuteSequenceCallback();
	/* すべてのコールバック内容のクリア */
	void ClearAllCallbackDetails();
	/** ビートシンクの登録解除 */
	void UnRegisterBeatSync();
	/** シーケンスの登録解除 */
	void UnRegisterSequence();


private:
	/* コールバックオブジェクトの配列(デストラクタへのアクセス権がない為スマートポインタにできない) */
	static TMap<CriAtomExPlayerHn, IAtomCallback*> CallbackObjectList;

private:
	/* ビートシンクデリゲートに渡す引数の配列(モードをスレッドセーフに設定) */
	TQueue<FAtomBeatSyncInfo, EQueueMode::Mpsc>BeatSyncArguments;
	/* シーケンスデリゲートに渡す引数の配列(モードをスレッドセーフに設定)*/
	TQueue<FAtomSequenceInfo, EQueueMode::Mpsc>SequenceArguments;
};

/***************************************************************************
 *      関数宣言
 *      Prototype Functions
 ***************************************************************************/

/* --- end of file --- */
