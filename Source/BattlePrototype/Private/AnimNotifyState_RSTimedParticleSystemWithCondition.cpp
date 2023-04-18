#include "AnimNotifyState_RSTimedParticleSystemWithCondition.h"

class UAnimSequenceBase;
class USkeletalMeshComponent;

bool UAnimNotifyState_RSTimedParticleSystemWithCondition::CheckCondition_Implementation(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) const {
    return false;
}

UAnimNotifyState_RSTimedParticleSystemWithCondition::UAnimNotifyState_RSTimedParticleSystemWithCondition() {
}

