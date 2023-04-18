#include "NpcTownPeopleCrowd.h"
#include "NpcHomingMoveComponent.h"

class USplineComponent;

void ANpcTownPeopleCrowd::SetSpline(USplineComponent* Spline) {
}

ANpcTownPeopleCrowd::ANpcTownPeopleCrowd() {
    this->FixPoseActorComponent = NULL;
    this->NpcHomingMoveComponent = CreateDefaultSubobject<UNpcHomingMoveComponent>(TEXT("NpcHomingMoveComponent"));
    this->SplineMovePath = NULL;
    this->MoveSpeed = 100.00f;
    this->RotSpeed = 5.00f;
    this->LowAnimationDistance = 3000.00f;
    this->IsCollisionOffByDistance = false;
    this->NoCollisionDistance = 500.00f;
    this->LowAnimationTickValue = 0.20f;
    this->CameraNearDistance = 3000.00f;
    this->NeedTransparent = false;
    this->TransparentRate = 0.00f;
    this->TransparentSpeed = 1.00f;
    this->PlayerNearDistance = 300.00f;
    this->IsFadingAsMovement = true;
}

