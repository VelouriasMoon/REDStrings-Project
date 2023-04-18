/****************************************************************************
*
* CRI Middleware SDK
*
* Copyright (c) 2013-2014 CRI Middleware Co., Ltd.
*
* Library  : CRIWARE plugin for Unreal Engine 4
* Module   : Visualizer of AtomComponent
* File     : AtomComponentVisualizer.h
*
****************************************************************************/

/* 多重定義防止 */
#pragma once

/***************************************************************************
*      インクルードファイル
*      Include files
***************************************************************************/
/* Unreal Engine 4関連ヘッダ */
#include "ComponentVisualizer.h"
#include "SceneView.h"
#include "SceneManagement.h"
#include "Algo/Transform.h"
#include "Sound/SoundAttenuation.h"

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

class FAtomComponentVisualizer : public FComponentVisualizer
{
public:
	// Begin FComponentVisualizer interface
	virtual void DrawVisualization(const UActorComponent* Component, const FSceneView* View, FPrimitiveDrawInterface* PDI) override;
	// End FComponentVisualizer interface

private:
	const FColor AUDIO_OUTER_RADIUS_COLOR_DEFAULT = FColor(255, 153, 0);
	const FColor AUDIO_INNER_RADIUS_COLOR_DEFAULT = FColor(216, 130, 0);

	/* 距離減衰上書き時用形状描画関数 */
	void DrawOverrodeAttenuation(
		const FTransform& Transform, const FSoundAttenuationSettings* Attenuation, const FSceneView* View, FPrimitiveDrawInterface* PDI);
};

/***************************************************************************
*      関数宣言
*      Prototype Functions
***************************************************************************/

/* --- end of file --- */
