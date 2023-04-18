/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2018 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine 4
 * Module   : AtomComponent Pool
 * File     : AtomComponentPool.h
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
#include "GameFramework/Actor.h"

/* CRIWAREプラグインヘッダ */
#include "AtomComponent.h"

/* モジュールヘッダ */
#include "AtomComponentPool.generated.h"

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
UCLASS(MinimalAPI)
class UAtomComponentPool : public UObject
{
	GENERATED_BODY()

public:
	UAtomComponentPool(const FObjectInitializer& ObjectInitializer);

	/* デフォルトプールの取得 */
	static UAtomComponentPool* GetDefaultPool();

	UAtomComponent* Acquire();
	int32 Num() const;
	void Release(UAtomComponent* AtomComponent);
	void Reserve(uint32 NumObjects);

	// Begin UObject interface.
	virtual void BeginDestroy() override;
	// End UObject interface.

private:
	static UAtomComponentPool* DefaultPool;

	/** List of unused objects. */
	UPROPERTY()
	TArray<UAtomComponent*> Pool;

	/* 上限数 */
	uint32 Limit;

	/** Critical section for synchronizing access to the free list. */
	mutable FCriticalSection CriticalSection;
};

/***************************************************************************
 *      関数宣言
 *      Prototype Functions
 ***************************************************************************/

/* --- end of file --- */
