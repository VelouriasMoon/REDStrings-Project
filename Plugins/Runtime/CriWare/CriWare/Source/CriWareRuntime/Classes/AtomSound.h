/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2013-2017 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine 4
 * Module   : Base AtomSound Actor
 * File     : AtomSound.h
 *
 ****************************************************************************/

/* 多重定義防止 */
#pragma once

/***************************************************************************
 *      インクルードファイル
 *      Include files
 ***************************************************************************/
/* Unreal Engine 4関連ヘッダ */
#include "GameFramework/Actor.h"
#include "Runtime/Launch/Resources/Version.h"

/* CRIWAREプラグインヘッダ */
#include "AtomComponent.h"

/* モジュールヘッダ */
#include "AtomSound.generated.h"

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
UCLASS(AutoExpandCategories=Audio, ClassGroup=Sounds,
	hidecategories(Collision, Input, Game), 
	showcategories=("Input|MouseInput", "Input|TouchInput", "Game|Damage"),
	meta=(ToolTip = "AtomSound class."))
class CRIWARERUNTIME_API AAtomSound : public AActor
{
	GENERATED_BODY()

public:
	AAtomSound(const FObjectInitializer& ObjectInitializer);

	/* 再生に使用するAtomComponent */
	UPROPERTY(Category=Sound, VisibleAnywhere, BlueprintReadOnly, 
		meta=(ExposeFunctionCategories = "Sound,Audio,Audio|Components|Audio", ToolTip = "Atom component."))
	class UAtomComponent *AtomComponent;

	// Begin AActor interface.
#if WITH_EDITOR
	virtual void CheckForErrors() override;
#endif
	virtual void PostLoad() override;
	virtual void PostRegisterAllComponents() override;
	// End AActor interface.

	// BEGIN DEPRECATED (use component functions now in level script)
	void Play(float StartTime = 0.0f);
	void Stop();
	// END DEPRECATED

private:

#if ENGINE_MAJOR_VERSION == 4 && ENGINE_MINOR_VERSION <= 23
	void SetHidden(bool InHidden);
	void SetCanBeDamaged(bool InCanBeDamaged);
#endif

};

/***************************************************************************
 *      関数宣言
 *      Prototype Functions
 ***************************************************************************/

/* --- end of file --- */
