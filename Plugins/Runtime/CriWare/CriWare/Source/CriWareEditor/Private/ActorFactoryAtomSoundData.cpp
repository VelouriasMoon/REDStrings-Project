/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2015-2017 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine 4
 * Module   : Actor Factory of AtomSoundData
 * File     : ActorFactoryAtomSoundData.cpp
 *
 ****************************************************************************/

/***************************************************************************
 *      インクルードファイル
 *      Include files
 ***************************************************************************/
/* モジュールヘッダ */
#include "ActorFactoryAtomSoundData.h"

/* CRIWAREプラグインヘッダ */
#include "CriWareEditorPrivatePCH.h"
#include "SoundAtomCueSheet.h"
#include "AtomSoundData.h"

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
UActorFactoryAtomSoundData::UActorFactoryAtomSoundData(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	DisplayName = LOCTEXT("AtomSoundDataDisplayName", "AtomSoundData");
	NewActorClass = AAtomSoundData::StaticClass();
	bShowInEditorQuickMenu = true;
}

bool UActorFactoryAtomSoundData::CanCreateActorFrom(const FAssetData& AssetData, FText& OutErrorMsg)
{
	if (UActorFactory::CanCreateActorFrom(AssetData, OutErrorMsg)) {
		return true;
	}

	if (AssetData.IsValid() && !AssetData.GetClass()->IsChildOf(USoundAtomCueSheet::StaticClass())) {
		OutErrorMsg = NSLOCTEXT("CanCreateActor", "NoSoundAsset", "A valid sound asset must be specified.");
		return false;
	}

	return true;
}

void UActorFactoryAtomSoundData::PostSpawnActor(UObject* Asset, AActor* NewActor)
{
	USoundAtomCueSheet* CueSheet = Cast<USoundAtomCueSheet>(Asset);

	if (CueSheet != NULL) {
		AAtomSoundData* NewData = CastChecked<AAtomSoundData>(NewActor);
		FActorLabelUtilities::SetActorLabelUnique(NewData, CueSheet->GetName());
		NewData->CueSheet = CueSheet;
	}
}

UObject* UActorFactoryAtomSoundData::GetAssetFromActorInstance(AActor* Instance)
{
	check(Instance->IsA(NewActorClass));
	AAtomSoundData* DataActor = CastChecked<AAtomSoundData>(Instance);

	check(DataActor->CueSheet);
	return DataActor->CueSheet;
}

void UActorFactoryAtomSoundData::PostCreateBlueprint(UObject* Asset, AActor* CDO)
{
	USoundAtomCueSheet* CueSheet = Cast<USoundAtomCueSheet>(Asset);

	if (CueSheet != NULL) {
		AAtomSoundData* NewData = CastChecked<AAtomSoundData>(CDO);
		NewData->CueSheet = CueSheet;
	}
}

/***************************************************************************
 *      関数定義
 *      Function Definition
 ***************************************************************************/
#undef LOCTEXT_NAMESPACE

/* --- end of file --- */
