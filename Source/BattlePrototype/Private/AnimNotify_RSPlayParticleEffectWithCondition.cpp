#include "AnimNotify_RSPlayParticleEffectWithCondition.h"

class UAnimSequenceBase;
class USkeletalMeshComponent;

bool UAnimNotify_RSPlayParticleEffectWithCondition::CheckCondition_Implementation(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) const {
    return false;
}

UAnimNotify_RSPlayParticleEffectWithCondition::UAnimNotify_RSPlayParticleEffectWithCondition() {
}

