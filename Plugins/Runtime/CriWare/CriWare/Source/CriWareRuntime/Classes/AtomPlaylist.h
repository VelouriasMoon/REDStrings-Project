/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2018 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine 4
 * Module   : Atom Playlist
 * File     : AtomPlaylist.h
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
#include "SoundAtomCue.h"

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
/* 再生リストアイテム */
struct FAtomPlaylistItem
{
	/* キュー */
	TWeakObjectPtr<USoundAtomCue> Sound;

	/* AWBハンドル */
	CriAtomAwbHn AwbHn;

	/* 波形ID */
	int32 WaveId;
};

class FAtomPlaylist
{
public:
	/* コンストラクタ */
	FAtomPlaylist();

	/* デストラクタ */
	~FAtomPlaylist();

	/** Add sound to the play list. */
	void Add(USoundAtomCue* Sound);

	/** Remove the sound at the specified position. */
	void RemoveAt(int32 Index);

	/** Get the number of sounds in the play list. */
	int32 Num();

	/** Reset the play list. */
	void Reset();

	/* 再生位置の取得 */
	int32 Tell() { return Offset; }

	/* 再生位置の変更 */
	void Seek(int32 InPos) { Offset = InPos; }

	/* キューの情報を取得 */
	const FAtomPlaylistItem* Get(int32 Index);

	/* 排他制御の開始 */
	void Lock() { CriticalSection.Lock(); }

	/* 排他制御の終了 */
	void Unlock() { CriticalSection.Unlock(); }

private:
	/** List of sounds to play. */
	TArray<FAtomPlaylistItem*> Sounds;

	/* 再生位置 */
	int32 Offset;

	/** A critical section for settings access */
	mutable FCriticalSection CriticalSection;
};

/***************************************************************************
 *      関数宣言
 *      Prototype Functions
 ***************************************************************************/

/* --- end of file --- */
