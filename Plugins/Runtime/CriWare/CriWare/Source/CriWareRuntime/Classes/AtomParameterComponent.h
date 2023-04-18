/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2018 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine 4
 * Module   : Atom Parameter Component
 * File     : AtomParameterComponent.h
 *
 ****************************************************************************/

/* 多重定義防止 */
#pragma once

/***************************************************************************
 *      インクルードファイル
 *      Include files
 ***************************************************************************/
/* Unreal Engine 4関連ヘッダ */
#include "Components/SceneComponent.h"

/* CRIWAREプラグインヘッダ */
#include "AtomSoundObject.h"
#include "Atom3dRegion.h"

/* モジュールヘッダ */
#include "AtomParameterComponent.generated.h"

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
UCLASS(ClassGroup=(CRIWARE, Common),
	hidecategories=(Object, ActorComponent, Physics, Rendering, Mobility, LOD),
	ShowCategories=Trigger,
	meta=(BlueprintSpawnableComponent, DisplayName = "Atom Parameter", ToolTip = "Atom Parameter Component"))
class CRIWARERUNTIME_API UAtomParameterComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UAtomParameterComponent(const FObjectInitializer& ObjectInitializer);

	/* サウンドオブジェクト */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AtomParameter", meta = (ToolTip = "AtomSoundObject."))
	UAtomSoundObject* SoundObject;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AtomParameter", meta = (ToolTip = "A 3D sound source that belongs to the same region as the transceiver is output from that transceiver."))
	UAtom3dRegion* Region;
};

/***************************************************************************
 *      関数宣言
 *      Prototype Functions
 ***************************************************************************/

/* --- end of file --- */
