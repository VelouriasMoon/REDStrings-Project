/****************************************************************************
*
* CRI Middleware SDK
*
* Copyright (c) 2018 CRI Middleware Co., Ltd.
*
* Library  : CRIWARE plugin for Unreal Engine 4
* Module   : Atom Profile Data
* File     : AtomProfileData.cpp
*
****************************************************************************/

/***************************************************************************
*      インクルードファイル
*      Include files
***************************************************************************/
/* モジュールヘッダ */
#include "AtomProfileData.h"

/* CRIWAREプラグインヘッダ */
#include "CriWareRuntimePrivatePCH.h"
#include "CriWareInitializer.h"
#include "AtomSound.h"
#include "AtomSoundManager.h"

/* Unreal Engine 4関連ヘッダ */
#include "Kismet/GameplayStatics.h"
#include "UObject/Package.h"
#include "GameFramework/WorldSettings.h"

/***************************************************************************
*      定数マクロ
*      Macro Constants
***************************************************************************/
#define LOCTEXT_NAMESPACE "AtomProfileData"

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
UAtomProfileData::UAtomProfileData()
{
#if WITH_EDITOR
	/* Localization of unreal properties metadata with LOCTEXT markups and reflection */
	CRI_LOCCLASS(GetClass());
#endif
}

TArray<FAtomProfileItem> UAtomProfileData::CriWareAdx2ProfileDataUpdate(const UObject* WorldContextObject)
{
	TArray<FAtomProfileItem> ProfiledItem;

	for (auto AtomComponentPair : UAtomComponent::AtomIDToComponentMap) {
		UAtomComponent* AtomComponent = AtomComponentPair.Value;
		if (!AtomComponent->IsValidLowLevel()) {
			continue;
		}

		/* 非アクティブなコンポーネントはリストアップの対象外 */
		if (!AtomComponent->IsActive()) {
			continue;
		}

		/* プレビュー用の音声はリストアップの対象外 */
		if (AtomComponent->bIsPreviewSound) {
			continue;
		}

#if WITH_EDITOR
		/* テンプレートはリストアップの対象外 */
		if (AtomComponent->IsTemplate()) {
			continue;
		}
#endif

		/* 破棄済みのコンポーネントはリストアップの対象外 */
		if (AtomComponent->IsBeingDestroyed() || AtomComponent->IsPendingKill()) {
			continue;
		}

		FAtomProfileItem Item;
		Item.AtomComponentID = AtomComponent->GetAtomComponentID();
		Item.AtomCueName = AtomComponent->GetCueName();
		const UEnum* EnumPtr = FindObject<UEnum>(ANY_PACKAGE, TEXT("EAtomComponentStatus"), true);
		if (!EnumPtr) {
			Item.PlayerState = FString("Invalid");
		}
		else {
			Item.PlayerState = EnumPtr->GetNameStringByValue((int64)AtomComponent->GetStatus());
		}
		Item.PlayingTime = AtomComponent->GetTime();
		Item.DistanceFromListener = (AtomComponent->GetComponentLocation() - UCriWareInitializer::GetListeningPoint()).Size();
		Item.AtomComponentLocation = AtomComponent->GetComponentLocation();
		Item.NumSounds = criAtomExPlayer_GetNumPlaybacks(AtomComponent->GetAtomExPlayer());
		Item.ConcurrencyName = FString("None");

		const UAtomSoundObject * SoundObject = AtomComponent->GetAppliedSoundObject();
		if (SoundObject) {
			Item.SoundObjectId = SoundObject->GetUniqueID();
			Item.SoundObjectName = SoundObject->GetName();
			Item.SoundObjectVoiceLimitFlag = SoundObject->GetAppliedVoiceLimitFlag();
			Item.SoundObjectCategoryLimitFlag = SoundObject->GetAppliedCategoryLimitFlag();
		}
		else {
			Item.SoundObjectId = 0;
			Item.SoundObjectName = FString("None");
			Item.SoundObjectVoiceLimitFlag = false;
			Item.SoundObjectCategoryLimitFlag = false;
		}

		ProfiledItem.Add(Item);
	}

	for(auto settings = FAtomSoundManager::AtomSoundSettingsForAnimNotifyMap.CreateIterator(); settings; ++settings) {
		FAtomSoundSettingsForAnimNotify* atom_sound_settings = settings.Value();

		FAtomProfileItem Item;
		Item.AtomComponentID = atom_sound_settings->AtomSoundID;
		Item.AtomCueName = atom_sound_settings->CueName;
		const UEnum* EnumPtr = FindObject<UEnum>(ANY_PACKAGE, TEXT("EAtomComponentStatus"), true);
		if (!EnumPtr) {
			Item.PlayerState = FString("Invalid");
		}
		else {
			Item.PlayerState = EnumPtr->GetNameStringByValue((int64)atom_sound_settings->GetStatus());
		}
		Item.PlayingTime = atom_sound_settings->GetTime();
		USceneComponent* attach_to_component = atom_sound_settings->AttachToComponent.Get();
		if (attach_to_component) {
			Item.DistanceFromListener = (attach_to_component->GetComponentLocation() - UCriWareInitializer::GetListeningPoint()).Size();
			Item.AtomComponentLocation = attach_to_component->GetComponentLocation();
		}
		Item.NumSounds = criAtomExPlayer_GetNumPlaybacks(atom_sound_settings->PlayerHn);
		Item.ConcurrencyName = atom_sound_settings->SoundConcurrencyName;

		ProfiledItem.Add(Item);
	}

	return ProfiledItem;
}

void UAtomProfileData::CriWareAdx2ProfileDataSort(TArray<FAtomProfileItem> original_item, EAtomProfileSortType sort_type, EAtomSortOrderType order_type, TArray<FAtomProfileItem> &sorted_item)
{
	sorted_item = original_item;
	switch (sort_type)
	{
	case EAtomProfileSortType::AtomComponentID:
		if (order_type == EAtomSortOrderType::Ascending) {
			sorted_item.Sort([](const FAtomProfileItem& A, const FAtomProfileItem& B) {return A.AtomComponentID < B.AtomComponentID; });
		}
		else {
			sorted_item.Sort([](const FAtomProfileItem& A, const FAtomProfileItem& B) {return A.AtomComponentID > B.AtomComponentID; });
		}
		break;
	case EAtomProfileSortType::Distance:
		if (order_type == EAtomSortOrderType::Ascending) {
			sorted_item.Sort([](const FAtomProfileItem& A, const FAtomProfileItem& B) {return A.DistanceFromListener < B.DistanceFromListener; });
		}
		else {
			sorted_item.Sort([](const FAtomProfileItem& A, const FAtomProfileItem& B) {return A.DistanceFromListener > B.DistanceFromListener; });
		}
		break;
	case EAtomProfileSortType::Name:
		if (order_type == EAtomSortOrderType::Ascending) {
			sorted_item.Sort([](const FAtomProfileItem& A, const FAtomProfileItem& B) {return A.AtomCueName < B.AtomCueName; });
		}
		else {
			sorted_item.Sort([](const FAtomProfileItem& A, const FAtomProfileItem& B) {return A.AtomCueName > B.AtomCueName; });
		}
		break;
	case EAtomProfileSortType::Time:
		if (order_type == EAtomSortOrderType::Ascending) {
			sorted_item.Sort([](const FAtomProfileItem& A, const FAtomProfileItem& B) {return A.PlayingTime < B.PlayingTime; });
		}
		else {
			sorted_item.Sort([](const FAtomProfileItem& A, const FAtomProfileItem& B) {return A.PlayingTime > B.PlayingTime; });
		}
		break;
	default:
		break;
	}
}

/***************************************************************************
*      関数定義
*      Function Definition
***************************************************************************/
#undef LOCTEXT_NAMESPACE

/* --- end of file --- */
