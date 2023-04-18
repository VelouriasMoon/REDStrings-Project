/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2020 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine 4
 * Module   : Atom Callback Manager
 * File     : AtomCallbackManager.cpp
 *
 ****************************************************************************/

/***************************************************************************
 *      インクルードファイル
 *      Include files
 ***************************************************************************/
/* モジュールヘッダ */
#include "AtomCallbackManager.h"
#include "CriWareRuntimePrivatePCH.h"
#include "AtomComponent.h"

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
namespace
{
	/* コールバック成功値(マジックナンバー防止策) */
	const CriSint32 CallbackSuccess = 1;
	/* コールバック失敗値(マジックナンバー防止策) */
	const CriSint32 CallbackFailed = 0;
}

/***************************************************************************
 *      クラス宣言
 *      Prototype Classes
 ***************************************************************************/

/***************************************************************************
 *      関数宣言
 *      Prototype Functions
 ***************************************************************************/
/* 外部リンケージを持たないようにしている */
namespace
{
	/** 警告をログに表示 */
	inline void ShowWarningLog(const FString& Massage, const FString& FuncName = "", const FString& FileName = FString(__FILE__), const uint32& Line = __LINE__)
	{
		UE_LOG(LogCriWareRuntime, Warning, TEXT("[%s::%s::%d] %s"), *FileName, *FuncName, Line, *Massage);
	}
	/** エラーをログに表示 */
	inline void ShowErrorLog(const FString& Massage, const FString& FuncName = "", const FString& FileName = FString(__FILE__), const uint32& Line = __LINE__)
	{
		UE_LOG(LogCriWareRuntime, Error, TEXT("[%s::%s::%d] %s"), *FileName, *FuncName, Line, *Massage);
	}
}

/***************************************************************************
 *      変数定義
 *      Variable Definition
 ***************************************************************************/
TMap<CriAtomExPlayerHn, IAtomCallback*> UAtomCallbackManager::CallbackObjectList;

/***************************************************************************
 *      クラス定義
 *      Class Definition
 ***************************************************************************/
/* コンストラクタ */
UAtomCallback::UAtomCallback(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer) 
{
}

/***************************************************************************
 *      クラス定義
 *      Class Definition
 ***************************************************************************/
/* コールバックオブジェクトの配列に追加  */
bool UAtomCallbackManager::InsertCallbackObjectListForAtomPlayerHn(const CriAtomExPlayerHn& Player, IAtomCallback* CallbackObject)
{
	if (CallbackObject == nullptr) {
		return false;
	}

	auto* TempObj = CallbackObjectList.Find(Player);
	if (TempObj != nullptr) {
		return false;
	}

	CallbackObjectList.Add(Player, CallbackObject);

	return true;
}

/* コールバックオブジェクトの配列から削除 */
bool UAtomCallbackManager::RemoveCallbackObjectListForAtomPlayerHn(const CriAtomExPlayerHn& Player)
{
	auto* TempObj = CallbackObjectList.Find(Player);
	if (TempObj == nullptr) {
		return false;
	}

	CallbackObjectList.Remove(Player);

	return true;
}

/* コールバックオブジェクトの配列から値を取得 */
IAtomCallback* UAtomCallbackManager::GetCallbackObjectForList(const CriAtomExPlayerHn& Player)
{
	auto* TempObj = CallbackObjectList.Find(Player);
	if (TempObj == nullptr) {
		return nullptr;
	}

	auto* TempUObj = Cast<UObject>(*TempObj);
	if (IsValid(TempUObj) == false) {
		CallbackObjectList.Remove(Player);
		return nullptr;
	}

	return *TempObj;
}

/* BP上でのビートシンク情報のピンの分解 */
void UAtomCallbackManager::NativeBreakAtomBeatSyncInfo(const FAtomBeatSyncInfo& BeatSyncInfo, int32& BarCnt, int32& BeatCnt, float& BeatProgress, float& Bpm, int32& Offset, int32& NumBeats)
{
	BarCnt       = int32(BeatSyncInfo.BarCnt);
	BeatCnt      = int32(BeatSyncInfo.BeatCnt);
	BeatProgress = BeatSyncInfo.BeatProgress;
	Bpm          = BeatSyncInfo.Bpm;
	Offset       = BeatSyncInfo.Offset;
	NumBeats     = int32(BeatSyncInfo.NumBeats);
}

/* BP上でのシーケンサ情報のピンの分解 */
void UAtomCallbackManager::NativeBreakAtomSequenceInfo(const FAtomSequenceInfo& SequenceInfo, float& Time, FString& TagName, EAtomSequenceEventType& EventType, int32& CallbackID)
{
	Time       = float(SequenceInfo.Position) * 0.001f; /* ミリ秒→秒へ変換 UAtomComponent::GetTime()に合わせている */
	TagName    = SequenceInfo.TagName;
	EventType  = (SequenceInfo.EventType == CriAtomExSequecneEventType::CRIATOMEX_SEQUENCE_EVENT_TYPE_CALLBACK) ? EAtomSequenceEventType::SEQUENCE_TYPE_CALLBACK : EAtomSequenceEventType::SEQUENCE_TYPESIZE_4BYTE;
	CallbackID = int32(SequenceInfo.CallbackID);
}

/* ビートシンクコールバック関数 */
CriSint32 UAtomCallbackManager::OnBeatSyncFunction(void* Obj, const CriAtomExBeatSyncInfo* BeatSyncInfo)
{
	/* 
	 * 現在は戻り値に意味はない(将来的に意味を持たせる可能性はある)
	 */

	if (Obj == nullptr || BeatSyncInfo == nullptr) {
		ShowErrorLog("One or more arguments are invalid", __FUNCTION__);
		return CallbackFailed;
	}

	UAtomCallbackManager* CallbackManager = reinterpret_cast<UAtomCallbackManager*>(Obj);
	if (IsValid(CallbackManager) == false) {
		ShowErrorLog("Callback manager is not valid", __FUNCTION__);
		return CallbackFailed;
	}
	
	/* ネイティブ構造体をUE4用の構造体に変換 */
	FAtomBeatSyncInfo ConvInfo{};
	ConvInfo.Player       = BeatSyncInfo->player;
	ConvInfo.PlaybackID   = BeatSyncInfo->playback_id;
	ConvInfo.BarCnt       = BeatSyncInfo->bar_count;
	ConvInfo.BeatCnt      = BeatSyncInfo->beat_count;
	ConvInfo.BeatProgress = BeatSyncInfo->beat_progress;
	ConvInfo.Bpm          = BeatSyncInfo->bpm;
	ConvInfo.Offset       = BeatSyncInfo->offset;
	ConvInfo.NumBeats     = BeatSyncInfo->num_beats;

	/* キューに追加 */
	CallbackManager->BeatSyncArguments.Enqueue(ConvInfo);

	return CallbackSuccess;
}

/* シーケンスコールバック関数 */
CriSint32 UAtomCallbackManager::OnSequenceFunction(void* Obj, const CriAtomExSequenceEventInfo* SequenceInfo)
{
	/*
	 * 現在は戻り値に意味はない(将来的に意味を持たせる可能性はある)
	 */

	if (Obj == nullptr || SequenceInfo == nullptr) {
		ShowErrorLog("One or more arguments are invalid", __FUNCTION__);
		return CallbackFailed;
	}

	UAtomCallbackManager* CallbackManager = reinterpret_cast<UAtomCallbackManager*>(Obj);
	if (IsValid(CallbackManager) == false) {
		ShowErrorLog("Callback manager is not valid", __FUNCTION__);
		return CallbackFailed;
	}
	
	/* ネイティブ構造体をUE4用の構造体に変換 */
	FAtomSequenceInfo ConvInfo{};
	ConvInfo.Position   = SequenceInfo->position;
	ConvInfo.Player     = SequenceInfo->player;
	ConvInfo.TagName    = SequenceInfo->string;
	ConvInfo.PlaybackID = SequenceInfo->id;
	ConvInfo.EventType  = SequenceInfo->type;
	ConvInfo.CallbackID = SequenceInfo->value;

	/* キューに追加 */
	CallbackManager->SequenceArguments.Enqueue(ConvInfo);

	return CallbackSuccess;
}

/* コンストラクタ */
UAtomCallbackManager::UAtomCallbackManager()
{
	if (HasAnyFlags(RF_ClassDefaultObject)) {
		return;
	}

	if (criAtomEx_IsInitialized() == CRI_FALSE) {
		return;
	}

	RegisterAllCallback();
}

/* デストラクタ */
UAtomCallbackManager::~UAtomCallbackManager()
{
	if (HasAnyFlags(RF_ClassDefaultObject)) {
		return;
	}

	if (criAtomEx_IsInitialized() == CRI_FALSE) {
		return;
	}
	UnRegisterBeatSync();
	UnRegisterSequence();
}

/* すべてのコールバックの登録 */
void UAtomCallbackManager::RegisterAllCallback()
{
	if (criAtomEx_IsInitialized() == CRI_FALSE) {
		ShowErrorLog("CRI library initialization is not finished", __FUNCTION__);
		return;
	}

	ClearAllCallbackDetails();

	/* ネイティブ関数からコールバック関数を登録 */
	criAtomExBeatSync_SetCallback(OnBeatSyncFunction, this);
	criAtomExSequencer_SetEventCallback(OnSequenceFunction, this);
}

/* ビートシンクコールバックの実行 */
void UAtomCallbackManager::ExecuteBeatSyncCallback()
{

	/*
	 * リストから取得する際にValidチェック行っています
	 */

	FAtomBeatSyncInfo Info{};

	/* キューが無くなるまでループ(メモリロックはキューから取得する時のみ) */
	while (BeatSyncArguments.Dequeue(Info) == true) {
		auto* CallbackObject = GetCallbackObjectForList(Info.Player);
		if (CallbackObject != nullptr) {
			CallbackObject->OnExecuteBeatSyncCallback(Info);
		}
	}
}

/* シーケンスコールバックの実行 */
void UAtomCallbackManager::ExecuteSequenceCallback()
{
	/*
	 * リストから取得する際にValidチェック行っています
	 */

	FAtomSequenceInfo Info{};

	/* キューが無くなるまでループ(メモリロックはキューから取得する時のみ) */
	while (SequenceArguments.Dequeue(Info) == true) {
		auto CallbackObject = GetCallbackObjectForList(Info.Player);
		if (CallbackObject != nullptr) {
			CallbackObject->OnExecuteSequenceCallback(Info);
		}
	}
}

/* 毎フレーム処理 */
void UAtomCallbackManager::Tick(float DeltaTime)
{
	/*
	 * メインスレッドで行うことで排他制御を実現している
	 * 遅延の発生は[呼び出す関数の数]&[関数ごとの処理負荷]に影響する
	 */

	if (IsTickable() == false)
	{
		return;
	}

	ExecuteBeatSyncCallback();
	ExecuteSequenceCallback();
}

/* すべてのコールバック内容のクリア */
void UAtomCallbackManager::ClearAllCallbackDetails()
{
	BeatSyncArguments.Empty();
	SequenceArguments.Empty();
}

/* ビートシンクの登録解除 */
void UAtomCallbackManager::UnRegisterBeatSync()
{
	/* ネイティブ関数からコールバック関数の登録を解除 */
	criAtomExBeatSync_SetCallback(nullptr, nullptr);

	BeatSyncArguments.Empty();
}

/* シーケンスの登録解除 */
void UAtomCallbackManager::UnRegisterSequence()
{
	/* ネイティブ関数からコールバック関数の登録を解除 */
	criAtomExSequencer_SetEventCallback(nullptr, nullptr);

	SequenceArguments.Empty();
}

/* 毎フレーム処理の確認 */
bool UAtomCallbackManager::IsTickable() const
{
	/*
	 * キューのどれか1つでも要素が存在する場合は"true"を返す
	 */
	
	if (BeatSyncArguments.IsEmpty() == false) {
		return true;
	}
	if (SequenceArguments.IsEmpty() == false) {
		return true;
	}

	return false;
}

/* エディタ処理の確認 */
bool UAtomCallbackManager::IsTickableInEditor() const
{
	return true;
}

/* 一時停止処理の確認 */
bool UAtomCallbackManager::IsTickableWhenPaused() const
{
	return false;
}

/* TickIDの取得 */
TStatId UAtomCallbackManager::GetStatId() const
{
	return Super::GetStatID();
}

/***************************************************************************
 *      関数定義
 *      Function Definition
 ***************************************************************************/

/* --- end of file --- */
