#include "IceConditionEffectActor.h"
#include "Components/SceneComponent.h"

void AIceConditionEffectActor::FinishEffect() {
}

AIceConditionEffectActor::AIceConditionEffectActor() {
    this->_pEffectComp = NULL;
    this->_pRootSceneComp = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRootComp"));
}

