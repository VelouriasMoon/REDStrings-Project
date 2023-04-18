/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2013-2016 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine 4
 * Module   : Atom Component Broker
 * File     : AtomComponentBroker.h
 *
 ****************************************************************************/

/* 多重定義防止 */
#pragma once

/***************************************************************************
 *      インクルードファイル
 *      Include files
 ***************************************************************************/
/* Unreal Engine 4関連ヘッダ */
#include "SoundAtomCue.h"
#include "AtomComponent.h"
#include "ComponentAssetBroker.h"

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
/* SoundAtomCueアセットとAtomComponentを関連付けるクラス */
/* 備考）SoundAtomCueをBlueprintエディタにドロップした際の処理。 */
class FAtomComponentBroker : public IComponentAssetBroker
{
public:
	UClass* GetSupportedAssetClass() override
	{
		return USoundAtomCue::StaticClass();
	}

	virtual bool AssignAssetToComponent(UActorComponent* InComponent, UObject* InAsset) override
	{
		if (UAtomComponent* AtomComp = Cast<UAtomComponent>(InComponent)) {
			USoundAtomCue* Sound = Cast<USoundAtomCue>(InAsset);
			if ((Sound != NULL) || (InAsset == NULL)) {
				AtomComp->SetSound(Sound);
				return true;
			}
		}

		return false;
	}

	virtual UObject* GetAssetFromComponent(UActorComponent* InComponent) override
	{
		if (UAtomComponent* AtomComp = Cast<UAtomComponent>(InComponent)) {
			return AtomComp->Sound;
		}

		return NULL;
	}
};

/***************************************************************************
 *      関数宣言
 *      Prototype Functions
 ***************************************************************************/

/* --- end of file --- */
