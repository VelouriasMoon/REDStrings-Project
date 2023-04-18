/****************************************************************************
*
* CRI Middleware SDK
*
* Copyright (c) 2018 CRI Middleware Co., Ltd.
*
* Library  : CRIWARE plugin for Unreal Engine 4
* Module   : Atom Sound Concurrency
* File     : AtomSoundConcurrency.cpp
*
****************************************************************************/

/***************************************************************************
*      インクルードファイル
*      Include files
***************************************************************************/
#include "AtomSoundConcurrency.h"
#include "AtomListener.h"
#include "HAL/LowLevelMemTracker.h"
#include "GameFramework/Actor.h"

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

/***************************************************************************
*      関数宣言
*      Prototype Functions
***************************************************************************/

/***************************************************************************
*      変数定義
*      Variable Definition
***************************************************************************/

/***************************************************************************
*      クラス定義
*      Class Definition
***************************************************************************/
/** Custom new/delete with recycling */
void* FAtomSoundConcurrencyGroup::operator new(size_t Size)
{
	LLM_SCOPE(ELLMTag::Audio);
	return FMemory::Malloc(Size);
}

void FAtomSoundConcurrencyGroup::operator delete(void *RawMemory)
{
	FMemory::Free(RawMemory);
}

FAtomSoundConcurrencyGroup::FAtomSoundConcurrencyGroup()
	: MaxConcurrencySounds(16)
	, ConcurrencyGroupID(0)
	, ResolutionRule(EMaxConcurrentResolutionRule::StopFarthestThenPreventNew)
	, Generation(0)
{
}

FAtomSoundConcurrencyGroup::FAtomSoundConcurrencyGroup(FAtomSoundConcurrency* NewAtomSoundConcurrency)
{
	static FAtomSoundConcurrencyGroupID ConcurrencyGroupIDs = 1;
	ConcurrencyGroupID = ConcurrencyGroupIDs++;

	check(NewAtomSoundConcurrency);
	const FSoundConcurrencySettings* ConcurrencySettings = &NewAtomSoundConcurrency->SoundConcurrency->Concurrency;
	check(ConcurrencySettings);

	MaxConcurrencySounds = ConcurrencySettings->MaxCount;
	ResolutionRule = ConcurrencySettings->ResolutionRule;
	Generation = 0;

	NewAtomSoundConcurrency->ConcurrencyGroupID = ConcurrencyGroupID;
	NewAtomSoundConcurrency->ConcurrencyGeneration = ++Generation;

	AtomSoundConcurrencies.Reset();
	AtomSoundConcurrencies.Add(NewAtomSoundConcurrency);
}

TArray<FAtomSoundConcurrency*>& FAtomSoundConcurrencyGroup::GetAtomSoundConcurrencies()
{
	return AtomSoundConcurrencies;
}

void FAtomSoundConcurrencyGroup::AddAtomSoundConcurrency(FAtomSoundConcurrency* AtomSoundConcurrency)
{
	check(ConcurrencyGroupID != 0);
	AtomSoundConcurrency->ConcurrencyGroupID = ConcurrencyGroupID;
	AtomSoundConcurrency->ConcurrencyGeneration = ++Generation;
	AtomSoundConcurrencies.Add(AtomSoundConcurrency);
}

/************************************************************************/
/* FSoundConcurrencyManager												*/
/************************************************************************/
/** Custom new/delete with recycling */
void* FAtomSoundConcurrencyManager::operator new(size_t Size)
{
	LLM_SCOPE(ELLMTag::Audio);
	return FMemory::Malloc(Size);
}

void FAtomSoundConcurrencyManager::operator delete(void *RawMemory)
{
	FMemory::Free(RawMemory);
}


FAtomSoundConcurrencyManager::FAtomSoundConcurrencyManager()
{
	ResetConcurrencyMap();
}

FAtomSoundConcurrencyManager::~FAtomSoundConcurrencyManager()
{
	ResetConcurrencyMap();
}

void FAtomSoundConcurrencyManager::ResetConcurrencyMap()
{
	ConcurrencyMap.Empty();
	OwnerConcurrencyMap.Empty();
	OwnerPerSoundConcurrencyMap.Empty();
	SoundObjectToAtomSoundConcurrencies.Empty();
	for (auto concurrency_group : ConcurrencyGroups) {
		concurrency_group.Value.GetAtomSoundConcurrencies().Empty();
	}
	ConcurrencyGroups.Empty();
}

FAtomSoundConcurrency* FAtomSoundConcurrencyManager::CreateNewAtomSoundConcurrency(UObject* OwnerObject, CriAtomExPlayerHn Player, CriAtomEx3dSourceHn Source, CriAtomEx3dListenerHn Listener, int32 SoundAtomCueUniqueID, USoundConcurrency* SoundConcurrency, float Priority)
{
	// If there are no concurrency settings associated then there is no limit on this sound
	const FSoundConcurrencySettings* Concurrency = &(SoundConcurrency->Concurrency);

	FAtomSoundConcurrency* AtomSoundConcurrency = new FAtomSoundConcurrency();
	AtomSoundConcurrency->Player = Player;
	AtomSoundConcurrency->Source = Source;
	AtomSoundConcurrency->Listener = Listener;
	AtomSoundConcurrency->OwnerObject = OwnerObject;
	AtomSoundConcurrency->SoundAtomCueUniqueID = SoundAtomCueUniqueID;
	AtomSoundConcurrency->SoundConcurrency = SoundConcurrency;
	AtomSoundConcurrency->Priority = Priority;
	AtomSoundConcurrency->VolumeScaledParam = 1.0f;
	check(AtomSoundConcurrency);

	// If there was no concurrency or the setting was zero, then we will always play this sound.
	if (!Concurrency)
	{
		return AtomSoundConcurrency;
	}

	check(Concurrency->MaxCount > 0);

	uint32 ConcurrencyObjectID = SoundConcurrency->GetUniqueID();
	if (ConcurrencyObjectID == 0)
	{
		FAtomSoundConcurrency* OutAtomSoundConcurrency = HandleConcurrencyEvaluationOverride(*AtomSoundConcurrency);
		return OutAtomSoundConcurrency;
	}
	else if (ConcurrencyObjectID != INDEX_NONE)
	{
		FAtomSoundConcurrency* OutAtomSoundConcurrency = HandleConcurrencyEvaluation(*AtomSoundConcurrency);
		return OutAtomSoundConcurrency;
	}
	delete AtomSoundConcurrency;
	return nullptr;
}

FAtomSoundConcurrency* FAtomSoundConcurrencyManager::ResolveAtomSoundConcurrency(const FAtomSoundConcurrency& NewAtomSoundConcurrency, FAtomSoundConcurrencyGroup& ConcurrencyGroup)
{
	TArray<FAtomSoundConcurrency*>& AtomSoundConcurrencies = ConcurrencyGroup.GetAtomSoundConcurrencies();
	const FSoundConcurrencySettings* Concurrency = &NewAtomSoundConcurrency.SoundConcurrency->Concurrency;
	check(Concurrency && Concurrency->MaxCount > 0);

	bool bCanPlay = true;
	FAtomSoundConcurrency* SoundToStop = nullptr;

	int32 IterationNum = AtomSoundConcurrencies.Num();
	for (int32 SoundIndex = IterationNum - 1; SoundIndex >= 0; --SoundIndex)
	{
		FAtomSoundConcurrency* AtomSoundConcurrency = AtomSoundConcurrencies[SoundIndex];

		/* AtomExプレーヤのステータスを取得 */
		CriAtomExPlayerStatus PlayerStatus = criAtomExPlayer_GetStatus(AtomSoundConcurrency->Player);
		if (PlayerStatus == CRIATOMEXPLAYER_STATUS_STOP || PlayerStatus == CRIATOMEXPLAYER_STATUS_PLAYEND) {
			/* 再生が停止していた場合はAtomConcurrencyを破棄する */
			RemoveAtomSoundConcurrency(AtomSoundConcurrency);
		}
	}

	/* AtomConcurrenies数＋NewAtomConcurrencyがトータル再生数になる */
	/* そのためAtomConcurrencies数がMaxCount以上になった場合は判定が必要となる */
	if (AtomSoundConcurrencies.Num() >= Concurrency->MaxCount)
	{
		switch (Concurrency->ResolutionRule)
		{
		case EMaxConcurrentResolutionRule::PreventNew:
			/* 新規に音を再生しない */
			bCanPlay = false;
			break;

		case EMaxConcurrentResolutionRule::StopOldest:
		{
			for (int32 SoundIndex = 0; SoundIndex < AtomSoundConcurrencies.Num(); ++SoundIndex)
			{
				FAtomSoundConcurrency* AtomSoundConcurrency = AtomSoundConcurrencies[SoundIndex];

				if (SoundToStop == nullptr)
				{
					SoundToStop = AtomSoundConcurrency;
					continue;
				}

				if (AtomSoundConcurrency->Player == nullptr) {
					/* AtomComponentが破棄されておりPlayerがなくなっていた場合は、このAtomSoundConcurrencyを破棄する */
					SoundToStop = AtomSoundConcurrency;
					break;
				}

				float AtomSoundConcurrency_TimeMS = criAtomExPlayer_GetTime(AtomSoundConcurrency->Player);
				float StopToSound_TimeMS = criAtomExPlayer_GetTime(SoundToStop->Player);

				if (AtomSoundConcurrency_TimeMS < 0) {
					/* Playbackが終わっているコンポーネントを除外しているが、Soundがすでに停止しているものが含まれていた場合は、そのサウンドを強制的にSoundToStopとして停止する。 */
					SoundToStop = AtomSoundConcurrency;
					break;
				}

				if (AtomSoundConcurrency_TimeMS > StopToSound_TimeMS) {
					SoundToStop = AtomSoundConcurrency;
				}
			}
		}
		break;

		case EMaxConcurrentResolutionRule::StopFarthestThenPreventNew:
		case EMaxConcurrentResolutionRule::StopFarthestThenOldest:
		{
			/* 新規に追加したAtomComponentとリスナとの距離を計算 */
			CriAtomExVector NewAtomSoundSource_Pos = criAtomEx3dSource_GetPosition(NewAtomSoundConcurrency.Source);
			CriAtomExVector NewAtomSoundListener_Pos = criAtomEx3dListener_GetPosition(NewAtomSoundConcurrency.Listener);
			FVector NewSoundLocation = FVector(NewAtomSoundSource_Pos.x, NewAtomSoundSource_Pos.y, NewAtomSoundSource_Pos.z);
			FVector NewListenerLocation = FVector(NewAtomSoundListener_Pos.x, NewAtomSoundListener_Pos.y, NewAtomSoundListener_Pos.z);
			float DistanceToNewSoundSq = FVector::DistSquared(NewListenerLocation, NewSoundLocation);
			float DistanceToStopSoundSq = 0.0f;

			for (FAtomSoundConcurrency* AtomSoundConcurrency : AtomSoundConcurrencies)
			{
				/* AtomSoundConcurrenciesに含まれるAtomComponentとリスナとの距離を計算 */
				CriAtomExVector AtomSoundSource_Pos = criAtomEx3dSource_GetPosition(AtomSoundConcurrency->Source);
				CriAtomExVector AtomSoundListener_Pos = criAtomEx3dListener_GetPosition(AtomSoundConcurrency->Listener);
				FVector SoundLocation = FVector(AtomSoundSource_Pos.x, AtomSoundSource_Pos.y, AtomSoundSource_Pos.z);
				FVector ListenerLocation = FVector(AtomSoundListener_Pos.x, AtomSoundListener_Pos.y, AtomSoundListener_Pos.z);
				const float DistanceToAtomSoundSq = FVector::DistSquared(ListenerLocation, SoundLocation);

				if (DistanceToAtomSoundSq > DistanceToStopSoundSq)
				{
					/* 最も遠くのサウンドを停止 */
					SoundToStop = AtomSoundConcurrency;
					DistanceToStopSoundSq = DistanceToAtomSoundSq;
				}
				else if (Concurrency->ResolutionRule == EMaxConcurrentResolutionRule::StopFarthestThenOldest && DistanceToAtomSoundSq == DistanceToStopSoundSq)
				{
					if (SoundToStop == nullptr) {
						SoundToStop = AtomSoundConcurrency;
						DistanceToStopSoundSq = DistanceToAtomSoundSq;
					}
					else {
						float AtomSoundConcurrency_TimeMS = criAtomExPlayer_GetTime(AtomSoundConcurrency->Player);
						float StopToSound_TimeMS = criAtomExPlayer_GetTime(SoundToStop->Player);
						if (AtomSoundConcurrency_TimeMS > StopToSound_TimeMS) {
							/* 距離が最も遠く、複数の音声が同一距離にある場合は一番古いサウンドを停止 */
							SoundToStop = AtomSoundConcurrency;
							DistanceToStopSoundSq = DistanceToAtomSoundSq;
						}
					}
				}
			}

			if (Concurrency->ResolutionRule == EMaxConcurrentResolutionRule::StopFarthestThenOldest) {
				/* 新たに再生しようとしているサウンドとSoundToStopとの距離を比較し、距離が同じ以上であればSoundToStopをnullptrとして、新たに再生しようとしているサウンドを停止する */
				if (DistanceToNewSoundSq > DistanceToStopSoundSq) {
					/* 新規に再生したサウンドが最も遠い場合はサウンドを再生しない */
					SoundToStop = nullptr;
					bCanPlay = false;
				}
			}
			else {
				/* 新たに再生しようとしているサウンドとSoundToStopとの距離を比較し、距離が同じ以上であればSoundToStopをnullptrとして、新たに再生しようとしているサウンドを停止する */
				if (DistanceToNewSoundSq >= DistanceToStopSoundSq) {
					/* 新規に再生したサウンドが最も遠い場合はサウンドを再生しない */
					SoundToStop = nullptr;
					bCanPlay = false;
				}
			}
		}
		break;

		case EMaxConcurrentResolutionRule::StopLowestPriority:
		case EMaxConcurrentResolutionRule::StopLowestPriorityThenPreventNew:
		{
			for (FAtomSoundConcurrency* CurrSound : AtomSoundConcurrencies)
			{
				// This will find oldest and oldest lowest priority sound in the group

				if (SoundToStop == nullptr) {
					SoundToStop = CurrSound;
					continue;
				}

				/* 再生時間の計測 */
				float CurrSound_TimeMS = criAtomExPlayer_GetTime(CurrSound->Player);
				float StopToSound_TimeMS = criAtomExPlayer_GetTime(SoundToStop->Player);
				if (CurrSound->Priority < SoundToStop->Priority) {
					SoundToStop = CurrSound;
				}
				else if (CurrSound->Priority == SoundToStop->Priority && CurrSound_TimeMS > StopToSound_TimeMS) {
					/* Priorityが等しいが再生時間がCurrentSoundの方が長かった場合はCurrentSoundをSoundToStopとする */
					SoundToStop = CurrSound;
				}
			}

			if (SoundToStop)
			{
				/* 新規に再生しようとしているサウンドとプライオリティ・再生時刻の比較を行う */
				// Only stop any sounds if the *lowest* priority is lower than the incoming NewAtomSoundConcurrency
				if (SoundToStop->Priority > NewAtomSoundConcurrency.Priority)
				{
					/* 新しく再生したサウンドのプライオリティがほかのどのサウンドのプライオリティよりも低いときは音声の再生はしない */
					SoundToStop = nullptr;
					bCanPlay = false;
				}
				else if (Concurrency->ResolutionRule == EMaxConcurrentResolutionRule::StopLowestPriorityThenPreventNew
					&& SoundToStop->Priority == NewAtomSoundConcurrency.Priority)
				{
					/* 最大数再生していて、かつ一番低いプライオリティと新しいサウンドのプライオリティが等しい時は音声は再生しない */
					SoundToStop = nullptr;
					bCanPlay = false;
				}
			}
		}
		break;

		case EMaxConcurrentResolutionRule::StopQuietest:
		{
			if (AtomSoundConcurrencies.Num() > 0) {
				/* ボリュームを比較 */
				TArray<float> Volume;
				float MinimumVolume = criAtomExPlayer_GetParameterFloat32(AtomSoundConcurrencies[0]->Player, CRIATOMEX_PARAMETER_ID_VOLUME);
				Volume.Add(MinimumVolume);
				int32 ArrayNum = AtomSoundConcurrencies.Num();
				int32 minimum_volume_element = 0;
				for (int32 iter = 1; iter < ArrayNum; iter++) {
					float compared_volume = criAtomExPlayer_GetParameterFloat32(AtomSoundConcurrencies[iter]->Player, CRIATOMEX_PARAMETER_ID_VOLUME);
					Volume.Add(compared_volume);
					if (compared_volume < MinimumVolume) {
						SoundToStop = AtomSoundConcurrencies[iter];
						minimum_volume_element = iter;
						MinimumVolume = compared_volume;
					}
				}

				/* ソートされた内で一番小さい要素を取得 */
				FAtomSoundConcurrency* QuietestAtomSoundConcurrency = AtomSoundConcurrencies[minimum_volume_element];
				float QuietestVolume = criAtomExPlayer_GetParameterFloat32(QuietestAtomSoundConcurrency->Player, CRIATOMEX_PARAMETER_ID_VOLUME);
				float NewAtomSoundVolume = criAtomExPlayer_GetParameterFloat32(NewAtomSoundConcurrency.Player, CRIATOMEX_PARAMETER_ID_VOLUME);

				if (QuietestVolume < NewAtomSoundVolume) {
					/* 新規に再生しようとしたサウンドよりもAtomSoundConcurrencies内のサウンドのボリュームが小さいときは指定されたサウンドを停止する */
					SoundToStop = QuietestAtomSoundConcurrency;
				}
				else {
					/* 新規に再生しようとしたボリュームがAtomSoundConcurrencies内のサウンドのボリュームと等しいもしくは小さいとき、再生命令を破棄 */
					SoundToStop = nullptr;
					bCanPlay = false;
				}
			}
			else {
				SoundToStop = nullptr;
				bCanPlay = false;
			}
		}
		break;

		default:
			checkf(false, TEXT("Unknown EMaxConcurrentResolutionRule enumeration."));
			break;
		}

		// If we found a sound to stop, then stop it and allow the new sound to play.  
		// Otherwise inform the system that the sound failed to start.
		if (SoundToStop == nullptr && bCanPlay)
		{
			// If we didn't find any sound to stop, then we're not going to play this sound, so 
			// immediately do the playback complete notify
			bCanPlay = false;

			/* エラーのため再生しようとしていたPlayerを停止(このAtomComponentで再生していたすべてのサウンドを停止する) */
			criAtomExPlayer_Stop(NewAtomSoundConcurrency.Player);
		}
	}

	if (bCanPlay)
	{
		/* bCanPlayがtrueのためNewAtomConccurencyで指定されている音声の再生を行う */

		// Make a new active sound
		FAtomSoundConcurrency* OutAtomSoundConcurrency = MakeNewAtomSoundConcurrency(NewAtomSoundConcurrency);
		check(OutAtomSoundConcurrency);

		// If we're ducking older sounds in the concurrency group, then loop through each sound in the concurrency group
		// and update their duck amount based on each sound's generation and the next generation count. The older the sound, the more ducking.
#if ENGINE_MAJOR_VERSION == 4 && ENGINE_MINOR_VERSION > 22
		float volume_scale = Concurrency->GetVolumeScale();
#else
		float volume_scale = Concurrency->VolumeScale;
#endif
		if (volume_scale < 1.0f)
		{
			check(volume_scale >= 0.0f);

			AtomSoundConcurrencies = ConcurrencyGroup.GetAtomSoundConcurrencies();

			int32 NextGeneration = ConcurrencyGroup.GetGeneration() + 1;

			for (FAtomSoundConcurrency* AtomSoundConcurrency : AtomSoundConcurrencies)
			{
				/* ボリュームをVolumeScaleだけ乗算していく。すでに再生されていたものは新たに乗算される。ResultVolume *= VolumeScale*VolumeScale*… */
				const int32 AtomSoundConcurrencyGeneration = AtomSoundConcurrency->ConcurrencyGeneration;
				const float GenerationDelta = (float)(NextGeneration - AtomSoundConcurrencyGeneration);
				/* SoundConcurrencyボリューム係数をAtomSoundConcurrency内に保存 */
				AtomSoundConcurrency->VolumeScaledParam = FMath::Pow(volume_scale, GenerationDelta);
			}
		}

		// And add it to to the concurrency group. This automatically updates generation counts.
		ConcurrencyGroup.AddAtomSoundConcurrency(OutAtomSoundConcurrency);

		// Stop any sounds now if needed
		if (SoundToStop)
		{
			if (SoundToStop->ConcurrencyGroupID == 0) {
				/* 無効なコンポーネントは除外 */
				AtomSoundConcurrencies.Remove(SoundToStop);
			}
			else {
				/* 停止するべきサウンドの停止 */
				criAtomExPlayer_Stop(SoundToStop->Player);
				RemoveAtomSoundConcurrency(SoundToStop);
			}
		}

		return OutAtomSoundConcurrency;
	}

	return nullptr;
}

FAtomSoundConcurrency* FAtomSoundConcurrencyManager::HandleConcurrencyEvaluationOverride(const FAtomSoundConcurrency& NewAtomSoundConcurrency)
{
	const FSoundConcurrencySettings* ConcurrencySettings = &NewAtomSoundConcurrency.SoundConcurrency->Concurrency;
	check(ConcurrencySettings);

	/* AtomSoundCueのOwnerはAtomComponentが張り付けられている親オブジェクト */
	const UObject* NewObject = NewAtomSoundConcurrency.OwnerObject;
	const uint32 OwnerObjectID = NewObject ? NewObject->GetUniqueID() : 0;
	FAtomSoundObjectID SoundObjectID = NewAtomSoundConcurrency.SoundAtomCueUniqueID;

	FAtomSoundConcurrency* AtomSoundConcurrency = nullptr;

	// First check to see if we're limiting the sound per-owner (i.e. told to limit per owner and we have a valid object id)
	if (ConcurrencySettings->bLimitToOwner && OwnerObjectID != 0)
	{
		// Get the play count for the owner
		FAtomSoundInstanceEntry* OwnerPerSoundEntry = OwnerPerSoundConcurrencyMap.Find(OwnerObjectID);

		// If we have an entry for this owner
		if (OwnerPerSoundEntry)
		{
			// Check if we already have these sounds playing on this owner
			const FAtomSoundConcurrencyGroupID* ConcurrencyGroupID = OwnerPerSoundEntry->SoundInstanceToConcurrencyGroup.Find(SoundObjectID);
			if (ConcurrencyGroupID)
			{
				// Get the concurrency group
				check(*ConcurrencyGroupID != 0);
				FAtomSoundConcurrencyGroup* ConcurrencyGroup = ConcurrencyGroups.Find(*ConcurrencyGroupID);
				check(ConcurrencyGroup);

				// And perform the concurrency resolution
				AtomSoundConcurrency = ResolveAtomSoundConcurrency(NewAtomSoundConcurrency, *ConcurrencyGroup);
			}
			else
			{
				// If no sounds are playing on this owner, then make a new group and active sound
				FAtomSoundConcurrencyGroupID NewConcurrencyGroupID = MakeNewConcurrencyGroupAndSound(&AtomSoundConcurrency, NewAtomSoundConcurrency);

				// Adding the new concurrency group ID to the owner for this sound id
				OwnerPerSoundEntry->SoundInstanceToConcurrencyGroup.Add(SoundObjectID, NewConcurrencyGroupID);
			}
		}
		else
		{
			// If we don't have an entry for this sound owner, then create a new entry with a single count for the instance object id
			FAtomSoundConcurrencyGroupID NewConcurrencyGroupID = MakeNewConcurrencyGroupAndSound(&AtomSoundConcurrency, NewAtomSoundConcurrency);
			uint32 ObjectID = OwnerObjectID;
			OwnerPerSoundConcurrencyMap.Add(ObjectID, FAtomSoundInstanceEntry(SoundObjectID, NewConcurrencyGroupID));
		}
	}
	else
	{
		// If we're not limiting the concurrency to per-owner, then we need to limit concurrency on sound instances that are playing globally
		FAtomSoundConcurrencyGroupID* ConcurrencyGroupID = SoundObjectToAtomSoundConcurrencies.Find(SoundObjectID);

		if (ConcurrencyGroupID)
		{
			// Get the concurrency group
			check(*ConcurrencyGroupID != 0);
			FAtomSoundConcurrencyGroup* ConcurrencyGroup = ConcurrencyGroups.Find(*ConcurrencyGroupID);
			check(ConcurrencyGroup);

			AtomSoundConcurrency = ResolveAtomSoundConcurrency(NewAtomSoundConcurrency, *ConcurrencyGroup);
		}
		else
		{
			FAtomSoundConcurrencyGroupID NewConcurrencyGroupID = MakeNewConcurrencyGroupAndSound(&AtomSoundConcurrency, NewAtomSoundConcurrency);
			SoundObjectToAtomSoundConcurrencies.Add(SoundObjectID, NewConcurrencyGroupID);
		}
	}

	// If the sound wasn't able to play, this will be nullptr
	return AtomSoundConcurrency;
}

FAtomSoundConcurrency* FAtomSoundConcurrencyManager::HandleConcurrencyEvaluation(const FAtomSoundConcurrency& NewAtomSoundConcurrency)
{
	const FSoundConcurrencySettings* ConcurrencySettings = &NewAtomSoundConcurrency.SoundConcurrency->Concurrency;
	check(ConcurrencySettings);

	const UObject* NewObject = NewAtomSoundConcurrency.OwnerObject;

	const uint32 OwnerObjectID = NewObject ? NewObject->GetUniqueID() : 0;
	FAtomSoundConcurrencyObjectID ConcurrencyObjectID = NewAtomSoundConcurrency.SoundConcurrency->GetUniqueID();
	check(ConcurrencyObjectID != 0);

	// If there is no concurrency object ID, then there is no sound to play, so don't try to play
	if (ConcurrencyObjectID == INDEX_NONE)
	{
		return nullptr;
	}

	FAtomSoundConcurrency* AtomSoundConcurrency = nullptr;

	// Check to see if we're limiting per owner
	if (ConcurrencySettings->bLimitToOwner && OwnerObjectID != 0)
	{
		// Get the map of owner to concurrency map instances
		FAtomOwnerConcurrencyMapEntry* ConcurrencyEntry = nullptr;
		ConcurrencyEntry = OwnerConcurrencyMap.Find(OwnerObjectID);

		if (ConcurrencyEntry)
		{
			// Now get the map of active sounds to the concurrency object
			FAtomSoundConcurrencyGroupID* ConcurrencyGroupID = ConcurrencyEntry->ConcurrencyObjectToConcurrencyGroup.Find(ConcurrencyObjectID);
			if (ConcurrencyGroupID)
			{
				// Get the concurrency group
				check(*ConcurrencyGroupID != 0);
				FAtomSoundConcurrencyGroup* ConcurrencyGroup = ConcurrencyGroups.Find(*ConcurrencyGroupID);
				check(ConcurrencyGroup);

				AtomSoundConcurrency = ResolveAtomSoundConcurrency(NewAtomSoundConcurrency, *ConcurrencyGroup);
			}
			else
			{
				FAtomSoundConcurrencyGroupID NewConcurrencyGroupID = MakeNewConcurrencyGroupAndSound(&AtomSoundConcurrency, NewAtomSoundConcurrency);
				ConcurrencyEntry->ConcurrencyObjectToConcurrencyGroup.Add(ConcurrencyObjectID, NewConcurrencyGroupID);
			}
		}
		else
		{
			FAtomSoundConcurrencyGroupID NewConcurrencyGroupID = MakeNewConcurrencyGroupAndSound(&AtomSoundConcurrency, NewAtomSoundConcurrency);
			uint32 ObjectID = OwnerObjectID;
			OwnerConcurrencyMap.Add(ObjectID, FAtomOwnerConcurrencyMapEntry(ConcurrencyObjectID, NewConcurrencyGroupID));
		}
	}
	else
	{
		// If not limiting per owner, then we need to globally limit concurrency of sounds that are playing with this concurrency object ID
		FAtomSoundConcurrencyGroupID* ConcurrencyGroupID = ConcurrencyMap.Find(ConcurrencyObjectID);
		if (ConcurrencyGroupID)
		{
			check(*ConcurrencyGroupID != 0);
			FAtomSoundConcurrencyGroup* ConcurrencyGroup = ConcurrencyGroups.Find(*ConcurrencyGroupID);
			check(ConcurrencyGroup);

			AtomSoundConcurrency = ResolveAtomSoundConcurrency(NewAtomSoundConcurrency, *ConcurrencyGroup);
		}
		else
		{
			FAtomSoundConcurrencyGroupID NewConcurrencyGroupID = MakeNewConcurrencyGroupAndSound(&AtomSoundConcurrency, NewAtomSoundConcurrency);
			ConcurrencyMap.Add(ConcurrencyObjectID, NewConcurrencyGroupID);
		}
	}

	// If the sound wasn't able to play, this will be nullptr
	return AtomSoundConcurrency;
}

FAtomSoundConcurrencyGroupID FAtomSoundConcurrencyManager::MakeNewConcurrencyGroupAndSound(FAtomSoundConcurrency** OutAtomSoundConcurrency, const FAtomSoundConcurrency& NewAtomSoundConcurrency)
{
	// First make a new active sound
	*OutAtomSoundConcurrency = MakeNewAtomSoundConcurrency(NewAtomSoundConcurrency);

	check(*OutAtomSoundConcurrency);

	const FSoundConcurrencySettings* ConcurrencySettings = &NewAtomSoundConcurrency.SoundConcurrency->Concurrency;
	check(ConcurrencySettings);

	// Make the new group
	FAtomSoundConcurrencyGroup ConcurrencyGroup(*OutAtomSoundConcurrency);

	// Add it to the concurrency group map
	ConcurrencyGroups.Add(ConcurrencyGroup.GetID(), MoveTemp(ConcurrencyGroup));

	return ConcurrencyGroup.GetID();
}

void FAtomSoundConcurrencyManager::RemoveAtomSoundConcurrency(FAtomSoundConcurrency* RemovedAtomSoundConcurrency)
{
	/* RemovedAtomSoundConcurrencyが何も指定されていない場合は処理を抜ける */
	if (!RemovedAtomSoundConcurrency) {
		return;
	}

	/* ConcurrencyGroupIDが設定されていない場合、無効な場合は処理を抜ける */
	if (!RemovedAtomSoundConcurrency->ConcurrencyGroupID || RemovedAtomSoundConcurrency->ConcurrencyGroupID == INDEX_NONE)
	{
		return;
	}

	// Remove this sound from it's concurrency list
	FAtomSoundConcurrencyGroup* ConcurrencyGroup = ConcurrencyGroups.Find(RemovedAtomSoundConcurrency->ConcurrencyGroupID);
	if (!ConcurrencyGroup) {
		return;
	}

	TArray<FAtomSoundConcurrency*>& AtomSoundConcurrencies = ConcurrencyGroup->GetAtomSoundConcurrencies();
	check(AtomSoundConcurrencies.Num() > 0);
	AtomSoundConcurrencies.Remove(RemovedAtomSoundConcurrency);

	// If we've no longer got any sounds playing in the concurrency group
	if (!AtomSoundConcurrencies.Num())
	{
		// Remove the concurrency group id from the list of concurrency groups (no more sounds playing in the concurrency group)
		ConcurrencyGroups.Find(RemovedAtomSoundConcurrency->ConcurrencyGroupID)->GetAtomSoundConcurrencies().Empty();
		ConcurrencyGroups.Remove(RemovedAtomSoundConcurrency->ConcurrencyGroupID);

		const uint32 ConcurrencyObjectID = RemovedAtomSoundConcurrency->SoundConcurrency ? RemovedAtomSoundConcurrency->SoundConcurrency->GetUniqueID() : INDEX_NONE;

		const UObject* Object = RemovedAtomSoundConcurrency->OwnerObject;
		const uint32 OwnerObjectID = Object ? Object->GetUniqueID() : 0;
		const FSoundConcurrencySettings* ConcurrencySettings = &RemovedAtomSoundConcurrency->SoundConcurrency->Concurrency;

		if (ConcurrencySettings)
		{
			// If 0, that means we're in override mode (i.e. concurrency is limited per-sound instance, not per-group)
			if (ConcurrencyObjectID == 0)
			{
				// Get the sounds unique ID
				const FAtomSoundObjectID SoundObjectID = RemovedAtomSoundConcurrency->SoundAtomCueUniqueID;

				// If we're limiting to owner, we need to clean up the per-owner record keeping
				if (ConcurrencySettings->bLimitToOwner && OwnerObjectID != 0)
				{
					uint32 ObjectID = OwnerObjectID;
					FAtomSoundInstanceEntry* OwnerPerSoundEntry = OwnerPerSoundConcurrencyMap.Find(ObjectID);
					OwnerPerSoundEntry->SoundInstanceToConcurrencyGroup.Remove(SoundObjectID);

					if (!OwnerPerSoundEntry->SoundInstanceToConcurrencyGroup.Num())
					{
						OwnerPerSoundConcurrencyMap.Remove(ObjectID);
					}
				}
				else
				{
					// If we're not limiting per-owner, we need to clean up the global map of per-sound concurrency
					SoundObjectToAtomSoundConcurrencies.Remove(SoundObjectID);
				}
			}
			else if (ConcurrencyObjectID != INDEX_NONE) // We're limiting concurrency per-group (not per-instance)
			{
				// Check if we're doing a per-owner concurrency group
				if (ConcurrencySettings->bLimitToOwner && OwnerObjectID != 0)
				{
					uint32 ObjectID = OwnerObjectID;
					FAtomOwnerConcurrencyMapEntry* ConcurrencyEntry = OwnerConcurrencyMap.Find(ObjectID);
					ConcurrencyEntry->ConcurrencyObjectToConcurrencyGroup.Remove(ConcurrencyObjectID);

					if (!ConcurrencyEntry->ConcurrencyObjectToConcurrencyGroup.Num())
					{
						OwnerConcurrencyMap.Remove(ObjectID);
					}
				}
				else
				{
					// Just remove the map entry that maps concurrency object ID to concurrency group
					ConcurrencyMap.Remove(ConcurrencyObjectID);
				}
			}
		}
	}
}

FAtomSoundConcurrency* FAtomSoundConcurrencyManager::MakeNewAtomSoundConcurrency(const FAtomSoundConcurrency& NewAtomSoundConcurrency)
{
	FAtomSoundConcurrency* AtomSoundConcurrency = new FAtomSoundConcurrency();
	AtomSoundConcurrency->Player = NewAtomSoundConcurrency.Player;
	AtomSoundConcurrency->Source = NewAtomSoundConcurrency.Source;
	AtomSoundConcurrency->Listener = NewAtomSoundConcurrency.Listener;
	AtomSoundConcurrency->OwnerObject = NewAtomSoundConcurrency.OwnerObject;
	AtomSoundConcurrency->SoundAtomCueUniqueID = NewAtomSoundConcurrency.SoundAtomCueUniqueID;
	AtomSoundConcurrency->SoundConcurrency = NewAtomSoundConcurrency.SoundConcurrency;
	AtomSoundConcurrency->Priority = NewAtomSoundConcurrency.Priority;
	AtomSoundConcurrency->VolumeScaledParam = NewAtomSoundConcurrency.VolumeScaledParam;

	return AtomSoundConcurrency;
}

/***************************************************************************
*      関数定義
*      Function Definition
***************************************************************************/

/* --- end of file --- */
