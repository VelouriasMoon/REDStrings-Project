#include "FixPoseActorComponent.h"

UFixPoseActorComponent::UFixPoseActorComponent() {
    this->TargetShape = NULL;
    this->IsFixVelocity = true;
    this->IsFixRot = true;
}

