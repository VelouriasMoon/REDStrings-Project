/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2019 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine 4
 * Module   : AssetTypeActions_AtomAudioVolumeSettings
 * File     : AssetTypeActions_AtomAudioVolumeSettings.h
 *
 ****************************************************************************/

 /* 多重定義防止 */
#pragma once

/***************************************************************************
 *      インクルードファイル
 *      Include files
 ***************************************************************************/
#include "CoreMinimal.h"
#include "AssetTypeActions_Base.h"

/***************************************************************************
 *      定数マクロ
 *      Macro Constants
 ***************************************************************************/

/***************************************************************************
 *      処理マクロ
 *      Macro Functions
 ***************************************************************************/

/****************************************************************************
 *      定数マクロ
 *      Macro Constants
 ****************************************************************************/

/****************************************************************************
 *      データ型宣言
 *      Data Type Declarations
 ****************************************************************************/

/****************************************************************************
 *      変数宣言
 *      Prototype Variables
 ****************************************************************************/

/****************************************************************************
 *      クラス宣言
 *      Prototype Classes
 ****************************************************************************/
class FAssetTypeActions_AtomAudioVolumeSettings : public FAssetTypeActions_Base
{
public:
	// IAssetTypeActions Implementation
	virtual FText GetName() const override { return NSLOCTEXT("AssetTypeActions", "AssetTypeActions_AtomAudioVolumeSettings", "Atom Audio Volume Settings"); }
	virtual FColor GetTypeColor() const override { return FColor(0, 175, 0); }
	virtual UClass* GetSupportedClass() const override;
	virtual uint32 GetCategories() override { return EAssetTypeCategories::Sounds; }
};

/***************************************************************************
 *      関数宣言
 *      Prototype Functions
 ***************************************************************************/

 /* --- end of file --- */
