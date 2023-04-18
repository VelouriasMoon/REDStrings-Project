#include "Atom3dSourceComponentVisualizer.h"

#include "CriWareEditorPrivatePCH.h"
#include "Atom3dTransceiverComponent.h"

#include "SceneManagement.h"
#include "DrawDebugHelpers.h"

void FAtom3dSourceComponentVisualizer::DrawVisualization(const UActorComponent* Component, const FSceneView* View, FPrimitiveDrawInterface* PDI)
{
	if (!View->Family->EngineShowFlags.AudioRadius) {
		return;
	}

	const UAtom3dSourceBaseComponent* Atom3dSourceComponent = StaticCast<const UAtom3dSourceBaseComponent*>(Component);
	if (!IsValid(Atom3dSourceComponent)) {
		return;
	}
	/* Atom3dSourceComponentの位置を取得 */
	const FTransform& Transform = Atom3dSourceComponent->GetComponentTransform();

	// 距離減衰範囲
	if (Atom3dSourceComponent->bIsAttenuationDistanceDebugSpheresVisible) {
		DrawWireSphereAutoSides(PDI, Transform.GetTranslation(), FColor(255, 0, 0), Atom3dSourceComponent->GetMinDistance(), SDPG_World);
		DrawWireSphereAutoSides(PDI, Transform.GetTranslation(), FColor(255, 100, 0), Atom3dSourceComponent->GetMaxDistance(), SDPG_World);
	}

	// OutputInteriorPanField
	if (Atom3dSourceComponent->bIsOutputInteriorPanFieldDebugSpheresVisible) {
		DrawWireSphereAutoSides(PDI, Transform.GetTranslation(), FColor(0, 0, 255), Atom3dSourceComponent->GetSourceDistance(), SDPG_World);
		DrawWireSphereAutoSides(PDI, Transform.GetTranslation(), FColor(0, 100, 255), Atom3dSourceComponent->GetInteriorDistance(), SDPG_World);
	}

	auto DrawSimpleArrow = [](FPrimitiveDrawInterface* PDI, const FVector& StartPoint, const FVector& EndPoint, const FColor& Color, const float ArrowSize) {
		FVector Direction = StartPoint - EndPoint;
		const float Length = Direction.Size();
		Direction = Direction / Length;
		FVector AxisY = {}; 
		FVector AxisZ = {};
		Direction.FindBestAxisVectors(AxisY, AxisZ);
		FMatrix ArrowTransformMatrix = FMatrix(Direction, AxisY, AxisZ, EndPoint);
		DrawDirectionalArrow(PDI, ArrowTransformMatrix, Color, Length, 5.0f, SDPG_Foreground, 10);
	};

	/* TODO: コーンを描画する
	auto DrawSimpleCone = [](FPrimitiveDrawInterface* PDI, const FVector& EndPoint, const FVector& StartPoint, float Angle1, float Angle2, const FColor& Color, const float ConeSize = 1.0f) {
		FVector Direction = EndPoint - StartPoint;
		const float Length = Direction.Size();
		Direction = Direction / Length;
		FVector AxisY = {};
		FVector AxisZ = {};
		Direction.FindBestAxisVectors(AxisY, AxisZ);
		FMatrix ArrowTransformMatrix = FMatrix(Direction, AxisY, AxisZ, StartPoint);
		DrawCone(PDI, FScaleMatrix(ConeSize) * ArrowTransformMatrix, FMath::DegreesToRadians(30), FMath::DegreesToRadians(30), 4, true, Color, GEngine->WireframeMaterial->GetRenderProxy(), SDPG_MAX);
	};
	*/

	// Draw Front Direction Arrow and Cone
	{
		// Arrow
		FVector FowardVector = Atom3dSourceComponent->GetForwardVector();
		FVector DistinationPosition = Transform.GetTranslation() + FowardVector * 100.0f;
		DrawSimpleArrow(PDI, DistinationPosition, Transform.GetTranslation(), FColor(255, 0, 0), 100.0f);

		/* TODO: コーンを描画する
		// Cone
		DistinationPosition = Transform.GetTranslation() + FowardVector;
		float MaxDistance = Atom3dSourceComponent->GetMaxDistance();
		float InnerAngle = 30;
		DrawSimpleCone(PDI, DistinationPosition, Transform.GetTranslation(), InnerAngle, InnerAngle, UAtom3dSourceBaseComponent::ATTENUATION_INNER_CONE_COLOR_DEFAULT, MaxDistance);
		float OuterAngle = 60;
		DrawSimpleCone(PDI, DistinationPosition, Transform.GetTranslation(), OuterAngle, OuterAngle, UAtom3dSourceBaseComponent::ATTENUATION_OUTER_CONE_COLOR_DEFAULT, MaxDistance);
		*/
	}

	// Draw Top Direction Arrow
	{
		FVector UpVector = Atom3dSourceComponent->GetUpVector();
		FVector DistinationPosition = Transform.GetTranslation() + UpVector * 100.0f;
		DrawSimpleArrow(PDI, DistinationPosition, Transform.GetTranslation(), FColor(0, 255, 255), 100.0f);
	}

	// for Transceiver
	{
		const UAtom3dTransceiverComponent* Atom3dTransceiverComponent = StaticCast<const UAtom3dTransceiverComponent*>(Component);
		if (IsValid(Atom3dTransceiverComponent->InputPoint)) {

			FVector InputPointPosition = Atom3dTransceiverComponent->InputPoint->GetTransform().GetTranslation();
			// InputCrossfadeField
			if (Atom3dTransceiverComponent->bIsInputCrossfadeFieldDebugSpheresVisible) {
				float DirectAudioRadius = Atom3dTransceiverComponent->GetDirectAudioRadius();
				DrawWireSphereAutoSides(PDI, InputPointPosition, FColor(0, 255, 0), DirectAudioRadius, SDPG_World);
				DrawWireSphereAutoSides(PDI, InputPointPosition, FColor(0, 255, 100), Atom3dTransceiverComponent->GetCrossfadeDistance() + DirectAudioRadius, SDPG_World);
			}

			// 出力ポイントから入力ポイントを矢印で指す
			DrawSimpleArrow(PDI, Transform.GetTranslation(), InputPointPosition, FColor(0, 255, 0), 100.0f);
		}
	}
}
