/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2015-2018 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine 4
 * Module   : Lisntener Focus Point
 * File     : AtomListenerFocusPoint.h
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

/* モジュールヘッダ */
#include "AtomListenerFocusPoint.generated.h"

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
UCLASS(ClassGroup=(Camera, Common),
	hidecategories=(Object, ActorComponent, Physics, Rendering, Mobility, LOD),
	ShowCategories=Trigger,
	meta=(BlueprintSpawnableComponent, ToolTip = "AtomListenerFocusPoint class."))
class CRIWARERUNTIME_API UAtomListenerFocusPoint : public USceneComponent
{
	GENERATED_BODY()

public:
	UAtomListenerFocusPoint(const FObjectInitializer& ObjectInitializer);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Atom", meta=(ToolTip = "Distance focus level.", ClampMin = "0.0", ClampMax = "1.0"))
	float DistanceFocusLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Atom", meta=(ToolTip = "Direction focus level.", ClampMin = "0.0", ClampMax = "1.0"))
	float DirectionFocusLevel;

	/* フォーカスポイントの更新 */
	void UpdateFocusPoint();

	// Begin USceneComponent Interface
	virtual void OnUpdateTransform(EUpdateTransformFlags UpdateTransformFlags, ETeleportType Teleport = ETeleportType::None) override;
	// End USceneComponent Interface

private:
	/* ビューターゲットのID */
	uint32 ViewTargetID;

	/* フォーカスポイントを更新するかどうか */
	bool bUpdateTransform;
};

/***************************************************************************
 *      関数宣言
 *      Prototype Functions
 ***************************************************************************/

/* --- end of file --- */
