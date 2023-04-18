/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2019 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine 4
 * Module   : AudioVolumeSettingsFactory
 * File     : AtomAudioVolumeSettingsFactory.h
 *
 ****************************************************************************/

/* 多重定義防止 */
#pragma once

/***************************************************************************
 *      インクルードファイル
 *      Include files
 ***************************************************************************/
#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Factories/Factory.h"
#include "AtomAudioVolumeSettingsFactory.generated.h"

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

UCLASS(MinimalAPI, hidecategories = Object)
class UAtomAudioVolumeSettingsFactory : public UFactory
{
	GENERATED_UCLASS_BODY()

	//~ Begin UFactory Interface
	virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
	//~ Begin UFactory Interface	
};

/***************************************************************************
 *      関数宣言
 *      Prototype Functions
 ***************************************************************************/

 /* --- end of file --- */
