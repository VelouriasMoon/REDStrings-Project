/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2013-2017 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine 4
 * Module   : Actor Factory of AtomSound
 * File     : ActorFactoryAtomSound.cpp
 *
 ****************************************************************************/

/***************************************************************************
 *      インクルードファイル
 *      Include files
 ***************************************************************************/
/* モジュールヘッダ */
#include "ActorFactoryAtomSound.h"

/* CRIWAREプラグインヘッダ */
#include "CriWareEditorPrivatePCH.h"
#include "AtomComponent.h"
#include "AtomSound.h"
#include "SoundAtomCue.h"

#include "Editor/EditorEngine.h"

/***************************************************************************
 *      定数マクロ
 *      Macro Constants
 ***************************************************************************/
/* ネームスペースの定義 */
#define LOCTEXT_NAMESPACE "ActorFactory"

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
UActorFactoryAtomSound::UActorFactoryAtomSound(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	DisplayName = LOCTEXT("AtomSoundDisplayName", "AtomSound");
	NewActorClass = AAtomSound::StaticClass();
	bShowInEditorQuickMenu = true;
}

bool UActorFactoryAtomSound::CanCreateActorFrom(const FAssetData& AssetData, FText& OutErrorMsg)
{
	if (UActorFactory::CanCreateActorFrom(AssetData, OutErrorMsg)) {
		return true;
	}

	if (AssetData.IsValid() && !AssetData.GetClass()->IsChildOf(USoundAtomCue::StaticClass())) {
		OutErrorMsg = NSLOCTEXT("CanCreateActor", "NoSoundAsset", "A valid sound asset must be specified.");
		return false;
	}

	return true;
}

void UActorFactoryAtomSound::PostSpawnActor(UObject* Asset, AActor* NewActor)
{
	USoundAtomCue* AtomSound = Cast<USoundAtomCue>(Asset);

	if (AtomSound != NULL) {
		AAtomSound* NewSound = CastChecked<AAtomSound>(NewActor);
		FActorLabelUtilities::SetActorLabelUnique(NewSound, AtomSound->GetName());
		NewSound->AtomComponent->SetSound(AtomSound);
	}
}

UObject* UActorFactoryAtomSound::GetAssetFromActorInstance(AActor* Instance)
{
	check(Instance->IsA(NewActorClass));
	AAtomSound* SoundActor = CastChecked<AAtomSound>(Instance);

	check(SoundActor->AtomComponent);
	return SoundActor->AtomComponent->Sound;
}

void UActorFactoryAtomSound::PostCreateBlueprint(UObject* Asset, AActor* CDO)
{
	USoundAtomCue* AtomSound = Cast<USoundAtomCue>(Asset);

	if (AtomSound != NULL) {
		AAtomSound* NewSound = CastChecked<AAtomSound>(CDO);
		NewSound->AtomComponent->SetSound(AtomSound);
	}
}

/***************************************************************************
 *      関数定義
 *      Function Definition
 ***************************************************************************/
#undef LOCTEXT_NAMESPACE

/* --- end of file --- */
