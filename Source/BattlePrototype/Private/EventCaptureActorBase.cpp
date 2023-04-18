#include "EventCaptureActorBase.h"

class ACharacter;
class UMaterialInterface;
class UPrimitiveComponent;
class URSParticleSystemComponentBase;
class URSSceneCaptureComponent2D;
class USkeletalMeshComponent;


void AEventCaptureActorBase::SetupHighResDOF(URSSceneCaptureComponent2D* SceneCapture, float ScaleX) {
}

void AEventCaptureActorBase::SetupAlphaSortNative2(ACharacter* ChildStaticPl, URSParticleSystemComponentBase* CurrentFrameParticle, URSParticleSystemComponentBase* CurrentFrameTelepathyParticle, URSParticleSystemComponentBase* CurrentFrameOverTelepathyParticle) {
}

void AEventCaptureActorBase::SetupAlphaSortNative(int32 Priority, const TArray<UPrimitiveComponent*>& BackTargetPrimitiveComps, const TArray<UPrimitiveComponent*>& TargetPrimitiveComps, const TArray<UPrimitiveComponent*>& FrontTargetPrimitiveComps, USkeletalMeshComponent* ChildMesh) {
}







void AEventCaptureActorBase::CheckPlMaterialType(ACharacter* ChildStaticPl, EEventPlMaterialType& Type, bool& Change) {
}

void AEventCaptureActorBase::ChangePlMaterial(ACharacter* ChildStaticPl, UMaterialInterface* Source, EEventPlMaterialType Type) {
}

AEventCaptureActorBase::AEventCaptureActorBase() {
}

