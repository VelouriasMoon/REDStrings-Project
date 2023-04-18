/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2018 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine 4
 * Module   : AtomComponent Pool
 * File     : AtomComponentPool.cpp
 *
 ****************************************************************************/

/***************************************************************************
 *      インクルードファイル
 *      Include files
 ***************************************************************************/
/* モジュールヘッダ */
#include "AtomComponentPool.h"

/* CRIWAREプラグインヘッダ */
#include "AtomComponent.h"
#include "CriWareInitializer.h"

/* Unreal Engine 4関連ヘッダ */
#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "UObject/UObjectGlobals.h"

/***************************************************************************
 *      定数マクロ
 *      Macro Constants
 ***************************************************************************/
#define LOCTEXT_NAMESPACE "AtomComponentPool"

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

/***************************************************************************
 *      関数宣言
 *      Prototype Functions
 ***************************************************************************/

/***************************************************************************
 *      変数定義
 *      Variable Definition
 ***************************************************************************/
UAtomComponentPool* UAtomComponentPool::DefaultPool = nullptr;

/***************************************************************************
 *      クラス定義
 *      Class Definition
 ***************************************************************************/
UAtomComponentPool::UAtomComponentPool(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	Pool.Reset();
}

void UAtomComponentPool::BeginDestroy()
{
	/* 保持しているAtomComponentを破棄 */
	Pool.Reserve(0);
	Pool.Reset();

	/* デフォルトプールとしての登録を解除 */
	if (DefaultPool == this) {
		DefaultPool->RemoveFromRoot();
		DefaultPool = nullptr;
	}

	Super::BeginDestroy();
}

UAtomComponentPool* UAtomComponentPool::GetDefaultPool()
{
	/* 終了処理後の呼び出しをブロック */
	CriBool bIsInitialized = criAtomEx_IsInitialized();
	if (bIsInitialized == CRI_FALSE) {
		return nullptr;
	}

	/* プールの有無を確認 */
	if (DefaultPool == nullptr) {
		/* プールが存在しない場合は新規に作成 */
		DefaultPool = NewObject<UAtomComponentPool>();
		DefaultPool->Reserve(UCriWareInitializer::GetPooledAtomComponentNum());
		/* GCを回避 */
		DefaultPool->AddToRoot();
	}

	return DefaultPool;
}

/** Acquire an object from the pool. */
UAtomComponent* UAtomComponentPool::Acquire()
{
	UAtomComponent* Result = nullptr;

	/* プールからAtomComponentを取得 */
	{
		FScopeLock Lock(&CriticalSection);

		while ((Pool.Num() > 0) && (Result == nullptr)) {
			Result = Pool.Pop(false);
		}
	}

	/* オブジェクトが有効かどうかチェック */
	if (Result != nullptr) {
		if (!Result->IsValidLowLevel() || Result->IsPendingKill()
			|| Result->HasAnyFlags(RF_BeginDestroyed|RF_FinishDestroyed)) {
			/* 無効なオブジェクトは使用しない */
			Result = nullptr;
		}
	}

	if (Result != nullptr) {
		/* 再利用時は最小限の初期化処理のみ行う */
		Result->InitializePoolable();
	} else {
		/* AtomComponent枯渇時は新規に作成 */
		Result = NewObject<UAtomComponent>();
		Result->bIsPoolable = true;
	}

	/* プールからの取得を通知 */
	Result->bIsPooling = false;

	return Result;
}

/** Get the number of objects stored. */
int32 UAtomComponentPool::Num() const
{
	FScopeLock Lock(&CriticalSection);
	return Pool.Num();
}

/** Return the given object to the pool. */
void UAtomComponentPool::Release(UAtomComponent* AtomComponent)
{
	if (AtomComponent == nullptr) {
		return;
	}

	/* GCスレッドからの実行かどうかチェック */
	if (IsGarbageCollecting()) {
		/* GCスレッドからDestroyComponentされている場合はメモリをキープできない */
		AtomComponent->bIsPoolable = false;
		AtomComponent->DestroyComponent();
		return;
	}

	/* パラメータをリセット */
	AtomComponent->ShutdownPoolable();

	/* 注意）事前にAtomComponentの依存関係を切っておく必要がある。 */
	FScopeLock Lock(&CriticalSection);

	/* 上限数のチェック */
	while (Limit <= (uint32)Pool.Num()) {
		/* 上限到達時はプールせずに削除 */
		AtomComponent->bIsPoolable = false;
		AtomComponent->DestroyComponent();
		return;
	}

	/* プールへの登録を通知 */
	AtomComponent->bIsPooling = true;

	/* プールに登録 */
	Pool.Push(AtomComponent);
}

/** Reserve the specified number of objects. */
void UAtomComponentPool::Reserve(uint32 NumObjects)
{
	FScopeLock Lock(&CriticalSection);

	/* 上限値の変更 */
	Limit = NumObjects;

	/* 超過時はAtomComponentを削除 */
	while (NumObjects < (uint32)Pool.Num()) {
		UAtomComponent* AtomComponent = Pool.Pop(false);
		AtomComponent->bIsPooling = false;
		AtomComponent->bIsPoolable = false;
		AtomComponent->DestroyComponent();
	}

	/* 不足時はAtomComponentを追加 */
	while (NumObjects > (uint32)Pool.Num()) {
		UAtomComponent* AtomComponent = NewObject<UAtomComponent>();
		AtomComponent->bIsPoolable = true;
		AtomComponent->bIsPooling = true;
		Pool.Push(AtomComponent);
	}
}

/***************************************************************************
 *      関数定義
 *      Function Definition
 ***************************************************************************/
#undef LOCTEXT_NAMESPACE

/* --- end of file --- */
