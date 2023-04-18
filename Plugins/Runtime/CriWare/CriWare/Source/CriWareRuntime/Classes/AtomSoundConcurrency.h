/****************************************************************************
*
* CRI Middleware SDK
*
* Copyright (c) 2018 CRI Middleware Co., Ltd.
*
* Library  : CRIWARE plugin for Unreal Engine 4
* Module   : Atom Sound Concurrency
* File     : AtomSoundConcurrency.h
*
****************************************************************************/

/* 多重定義防止 */
#pragma once

/***************************************************************************
*      インクルードファイル
*      Include files
***************************************************************************/

#include "CoreMinimal.h"
#include "Sound/SoundConcurrency.h"

#include "CriWareApi.h"
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

/** USoundConcurrency unique object IDs. */
typedef uint32 FAtomSoundConcurrencyObjectID;

/** Sound owner object IDs */
typedef uint32 FAtomSoundOwnerObjectID;

/** Sound instance (USoundBase) object ID. */
typedef uint32 FAtomSoundObjectID;

typedef uint32 FAtomSoundConcurrencyGroupID;

/** Struct which is an array of active sound pointers for tracking concurrency */
class FAtomSoundConcurrencyGroup
{
public:
	/** Custom new/delete with recycling */
	void* operator new(size_t Size);

	void operator delete(void *RawMemory);

	/** Array of AtomComponents Sound for this concurrency group. */
	/* SoundConcurrencyでグループ化されたAtomComponentとPlaybackIdのアレイ */
	TArray<struct FAtomSoundConcurrency*> AtomSoundConcurrencies;

	int32 MaxConcurrencySounds;
	FAtomSoundConcurrencyGroupID ConcurrencyGroupID;
	EMaxConcurrentResolutionRule::Type ResolutionRule;
	int32 Generation;

	/** Constructor for the max concurrency active sound entry. */
	FAtomSoundConcurrencyGroup();
	FAtomSoundConcurrencyGroup(struct FAtomSoundConcurrency* NewAtomSoundConcurrency);

	/** Retrieves the active sounds array. */
	TArray<struct FAtomSoundConcurrency*>& GetAtomSoundConcurrencies();

	/** Returns the number of active sounds in concurrency group. */
	const int32 GetNumAtomSoundConcurrencies() const { return AtomSoundConcurrencies.Num(); }

	/** Retrieves the current generation */
	const int32 GetGeneration() const { return Generation; }

	/** Adds an active sound to the active sound array. */
	void AddAtomSoundConcurrency(struct FAtomSoundConcurrency* AtomSoundConcurrency);

	FConcurrencyGroupID GetID() const { return ConcurrencyGroupID; }
};

struct FAtomSoundInstanceEntry
{
	TMap<FAtomSoundObjectID, FAtomSoundConcurrencyGroupID> SoundInstanceToConcurrencyGroup;

	FAtomSoundInstanceEntry(FAtomSoundObjectID SoundObjectID, FAtomSoundConcurrencyGroupID GroupID)
	{
		SoundInstanceToConcurrencyGroup.Add(SoundObjectID, GroupID);
	}
};

typedef TMap<FAtomSoundConcurrencyGroupID, FAtomSoundConcurrencyGroup> FAtomSoundConcurrencyGroups;

/** Type for mapping an object id to a concurrency entry. */
typedef TMap<FAtomSoundConcurrencyObjectID, FAtomSoundConcurrencyGroupID> FAtomSoundConcurrencyMap;

struct FAtomOwnerConcurrencyMapEntry
{
	FAtomSoundConcurrencyMap ConcurrencyObjectToConcurrencyGroup;

	FAtomOwnerConcurrencyMapEntry(FAtomSoundConcurrencyObjectID ConcurrencyObjectID, FAtomSoundConcurrencyGroupID GroupID)
	{
		ConcurrencyObjectToConcurrencyGroup.Add(ConcurrencyObjectID, GroupID);
	}
};

/** Maps owners to concurrency maps */
typedef TMap<FAtomSoundOwnerObjectID, FAtomOwnerConcurrencyMapEntry> FAtomOwnerConcurrencyMap;

/** Maps owners to sound instances */
typedef TMap<FAtomSoundOwnerObjectID, FAtomSoundInstanceEntry> FAtomOwnerPerSoundConcurrencyMap;

/** Maps sound object ids to active sound array for global concurrency limiting */
typedef TMap<FAtomSoundObjectID, FAtomSoundConcurrencyGroupID> FAtomPerSoundToAtomSoundConcurrenciesMap;

struct FAtomSoundConcurrency
{
public:

	UPROPERTY()
	const UObject* OwnerObject;

	CriAtomExPlayerHn Player;

	CriAtomEx3dSourceHn Source;

	CriAtomEx3dListenerHn Listener;

	UPROPERTY()
	FAtomSoundConcurrencyGroupID ConcurrencyGroupID;

	UPROPERTY()
	int32 ConcurrencyGeneration;

	UPROPERTY()
	float VolumeScaledParam;

	/* SoundAtomCueのUniqueID */
	UPROPERTY()
	int32 SoundAtomCueUniqueID;

	UPROPERTY()
	const USoundConcurrency* SoundConcurrency;

	UPROPERTY()
		float Priority;

	FAtomSoundConcurrency() {
		OwnerObject = nullptr;
		Player = nullptr;
		Source = nullptr;
		Listener = nullptr;
		ConcurrencyGroupID = 0;
		ConcurrencyGeneration = 0;
		SoundAtomCueUniqueID = -1;
		SoundConcurrency = nullptr;
		Priority = 0.0f;
		VolumeScaledParam = 0.0f;
	};
};

class CRIWARERUNTIME_API FAtomSoundConcurrencyManager
{
public:
	/** Custom new/delete with recycling */
	void* operator new(size_t Size);

	void operator delete(void *RawMemory);

	FAtomSoundConcurrencyManager();
	~FAtomSoundConcurrencyManager();

	/** Returns a newly allocated active sound given the input active sound struct. Will return nullptr if the active sound concurrency evaluation doesn't allow for it. */
	FAtomSoundConcurrency* CreateNewAtomSoundConcurrency(UObject* OwnerObject, CriAtomExPlayerHn Player, CriAtomEx3dSourceHn Source, CriAtomEx3dListenerHn Listener, int32 SoundAtomCueUniqueID, USoundConcurrency* SoundConcurrency, float Priority);

	/** Removes the active sound from the manager to remove it from concurrency tracking. */
	void RemoveAtomSoundConcurrency(FAtomSoundConcurrency* RemovedAtomSoundConcurrency);

	void ResetConcurrencyMap();

private: // Methods
		 /** This function handles the concurrency evaluation that happens per USoundConcurrencyObject */
	FAtomSoundConcurrency* HandleConcurrencyEvaluation(const FAtomSoundConcurrency& NewAtomSoundConcurrency);

	/** This function handles the concurrency evaluation that happens per-voice rather than per USoundConcurrencyObject */
	FAtomSoundConcurrency* HandleConcurrencyEvaluationOverride(const FAtomSoundConcurrency& NewAtomSoundConcurrency);

	/** Resolves the concurrency resolution rule for a given sound and its concurrency group */
	FAtomSoundConcurrency* ResolveAtomSoundConcurrency(const FAtomSoundConcurrency& NewAtomSoundConcurrency, FAtomSoundConcurrencyGroup& ConcurrencyGroup);

	FAtomSoundConcurrency* MakeNewAtomSoundConcurrency(const FAtomSoundConcurrency& NewAtomSoundConcurrency);

	FAtomSoundConcurrencyGroupID MakeNewConcurrencyGroupAndSound(FAtomSoundConcurrency** OutAtomSoundConcurrency, const FAtomSoundConcurrency& NewAtomSoundConcurrency);

private: // Data

		 /** Global concurrency map that maps individual sounds instances to shared USoundConcurrency UObjects. */
	FConcurrencyMap ConcurrencyMap;

	/* A map of OwnerObjectId to ConcurrencyMapEntry. */
	FAtomOwnerConcurrencyMap OwnerConcurrencyMap;

	/** A map of owners to concurrency maps for sounds which are concurrency-limited per sound owner. */
	FAtomOwnerPerSoundConcurrencyMap OwnerPerSoundConcurrencyMap;

	/* A map of ConcurrencyObjectID to ConcurrencyGroupID. */
	FAtomPerSoundToAtomSoundConcurrenciesMap SoundObjectToAtomSoundConcurrencies;

	/** A map of concurrency active sound ID to concurrency active sounds */
	FAtomSoundConcurrencyGroups ConcurrencyGroups;
};

/***************************************************************************
*      関数宣言
*      Prototype Functions
***************************************************************************/

/* --- end of file --- */
