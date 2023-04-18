/****************************************************************************
*
* CRI Middleware SDK
*
* Copyright (c) 2013-2017 CRI Middleware Co., Ltd.
*
* Library  : CRIWARE plugin for Unreal Engine 4
* Module   : AtomComponent Visualizer
* File     : AtomComponentVisualizer.cpp
*
****************************************************************************/

/***************************************************************************
*      インクルードファイル
*      Include files
***************************************************************************/
/* モジュールヘッダ */
#include "AtomComponentVisualizer.h"

/* CRIWAREプラグインヘッダ */
#include "CriWareEditorPrivatePCH.h"
#include "CriWareInitializer.h"
#include "AtomComponent.h"
#include "AtomStatics.h"

#include "SceneManagement.h"

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
/* AudioComponentVisualizer.cpp: line 9 を参考 */
void FAtomComponentVisualizer::DrawVisualization(const UActorComponent* Component, const FSceneView* View, FPrimitiveDrawInterface* PDI)
{
	if(View->Family->EngineShowFlags.AudioRadius) {
		const UAtomComponent *AtomComponent = Cast<const UAtomComponent>(Component);
		if (AtomComponent != NULL && AtomComponent->Sound != NULL) {
			/* AtomComponentの位置を取得 */
			const FTransform& Transform = AtomComponent->GetComponentTransform();

			/* 距離減衰上書き指定の有無をチェック */
			const FSoundAttenuationSettings* Attenuation = AtomComponent->GetAttenuationSettingsToApply();
			if (Attenuation != NULL) {
				/* 上書きしたパラメータに合わせて形状を描画 */
				DrawOverrodeAttenuation(Transform, Attenuation, View, PDI);
				return;
			}

			/* 最大減衰距離を取得 */
			float MaxAttenuationDistance = (AtomComponent->Sound->GetMaxAttenuationDistance() * UCriWareInitializer::GetDistanceFactor()) / UAtomStatics::GetCurrentDistanceFactor();
			FLinearColor AudioOuterRadiusColor = AUDIO_OUTER_RADIUS_COLOR_DEFAULT;
			FLinearColor AudioInnerRadiusColor = AUDIO_INNER_RADIUS_COLOR_DEFAULT;
			if (AtomComponent->Sound) {				
				AudioOuterRadiusColor = FLinearColor::FromSRGBColor(AtomComponent->Sound->AudioOuterRadiusColor);
				AudioInnerRadiusColor = FLinearColor::FromSRGBColor(AtomComponent->Sound->AudioInnerRadiusColor);
			}
			if (MaxAttenuationDistance > 0.0f) {
				/* 最大減衰距離の半径でワイヤーフレームのキューを描画 */
				DrawWireSphereAutoSides(PDI, Transform.GetTranslation(), AudioOuterRadiusColor, MaxAttenuationDistance, SDPG_World);
			}
			/* 最小減衰距離を取得 */
			float MinAttenuationDistance = (AtomComponent->Sound->GetMinAttenuationDistance() * UCriWareInitializer::GetDistanceFactor()) / UAtomStatics::GetCurrentDistanceFactor();
			if (MinAttenuationDistance > 0.0f) {
				/* 最小減衰距離の半径でワイヤーフレームのキューを描画 */
				DrawWireSphereAutoSides(PDI, Transform.GetTranslation(), AudioInnerRadiusColor, MinAttenuationDistance, SDPG_World);
			}
		}
	}
}

void FAtomComponentVisualizer::DrawOverrodeAttenuation(
	const FTransform& Transform, const FSoundAttenuationSettings* Attenuation, const FSceneView* View, FPrimitiveDrawInterface* PDI)
{
	TMultiMap<EAttenuationShape::Type, FSoundAttenuationSettings::AttenuationShapeDetails> ShapeDetailsMap;
	Attenuation->CollectAttenuationShapesForVisualization(ShapeDetailsMap);

	FVector Translation = Transform.GetTranslation();
	FVector UnitXAxis   = Transform.GetUnitAxis(EAxis::X);
	FVector UnitYAxis   = Transform.GetUnitAxis(EAxis::Y);
	FVector UnitZAxis   = Transform.GetUnitAxis(EAxis::Z);

	for (auto It = ShapeDetailsMap.CreateConstIterator(); It; ++It) {
		FLinearColor AudioOuterRadiusColor = AUDIO_OUTER_RADIUS_COLOR_DEFAULT;
		FLinearColor AudioInnerRadiusColor = AUDIO_INNER_RADIUS_COLOR_DEFAULT;
		const FSoundAttenuationSettings::AttenuationShapeDetails& ShapeDetails = It.Value();
		switch(It.Key()) {
			case EAttenuationShape::Box:
			if (ShapeDetails.Falloff > 0.0f) {
				DrawOrientedWireBox(PDI, Translation, UnitXAxis, UnitYAxis, UnitZAxis, ShapeDetails.Extents + FVector(ShapeDetails.Falloff), AudioOuterRadiusColor, SDPG_World);
				DrawOrientedWireBox(PDI, Translation, UnitXAxis, UnitYAxis, UnitZAxis, ShapeDetails.Extents, AudioInnerRadiusColor, SDPG_World);
			} else {
				DrawOrientedWireBox(PDI, Translation, UnitXAxis, UnitYAxis, UnitZAxis, ShapeDetails.Extents, AudioOuterRadiusColor, SDPG_World);
			}
			break;

			case EAttenuationShape::Capsule:
			if (ShapeDetails.Falloff > 0.0f) {
				DrawWireCapsule(PDI, Translation, UnitXAxis, UnitYAxis, UnitZAxis, AudioOuterRadiusColor, ShapeDetails.Extents.Y + ShapeDetails.Falloff, ShapeDetails.Extents.X + ShapeDetails.Falloff, 25, SDPG_World);
				DrawWireCapsule(PDI, Translation, UnitXAxis, UnitYAxis, UnitZAxis, AudioInnerRadiusColor, ShapeDetails.Extents.Y, ShapeDetails.Extents.X, 25, SDPG_World);
			} else {
				DrawWireCapsule(PDI, Translation, UnitXAxis, UnitYAxis, UnitZAxis, AudioOuterRadiusColor, ShapeDetails.Extents.Y, ShapeDetails.Extents.X, 25, SDPG_World);
			}
			break;

			case EAttenuationShape::Cone:
			{
				FTransform Origin = Transform;
				Origin.SetScale3D(FVector(1.0f));
				Origin.SetTranslation(Translation - (UnitXAxis * ShapeDetails.ConeOffset));

				if (ShapeDetails.Falloff > 0.0f || ShapeDetails.Extents.Z > 0.0f) {
					float ConeRadius = ShapeDetails.Extents.X + ShapeDetails.Falloff + ShapeDetails.ConeOffset;
					float ConeAngle = ShapeDetails.Extents.Y + ShapeDetails.Extents.Z;
					DrawWireSphereCappedCone(PDI, Origin, ConeRadius, ConeAngle, 16, 4, 10, AudioOuterRadiusColor, SDPG_World);

					ConeRadius = ShapeDetails.Extents.X + ShapeDetails.ConeOffset;
					ConeAngle = ShapeDetails.Extents.Y;
					DrawWireSphereCappedCone(PDI, Origin, ConeRadius, ConeAngle, 16, 4, 10, AudioInnerRadiusColor, SDPG_World);
				} else {
					const float ConeRadius = ShapeDetails.Extents.X + ShapeDetails.ConeOffset;
					const float ConeAngle = ShapeDetails.Extents.Y;
					DrawWireSphereCappedCone(PDI, Origin, ConeRadius, ConeAngle, 16, 4, 10, AudioOuterRadiusColor, SDPG_World);
				}
			}
			break;

			case EAttenuationShape::Sphere:
			if (ShapeDetails.Falloff > 0.0f) {
				DrawWireSphereAutoSides(PDI, Translation, AudioOuterRadiusColor, ShapeDetails.Extents.X + ShapeDetails.Falloff, SDPG_World);
				DrawWireSphereAutoSides(PDI, Translation, AudioInnerRadiusColor, ShapeDetails.Extents.X, SDPG_World);
			} else {
				DrawWireSphereAutoSides(PDI, Translation, AudioOuterRadiusColor, ShapeDetails.Extents.X, SDPG_World);
			}
			break;

			default:
			check(false);
			break;
		}
	}
}

/***************************************************************************
*      関数定義
*      Function Definition
***************************************************************************/

/* --- end of file --- */
