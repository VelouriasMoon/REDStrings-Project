#include "RSCheckCollision.h"
#include "Components/BoxComponent.h"

class UBoxComponent;
class UCapsuleComponent;

bool URSCheckCollision::CheckCollisionCapsuleByComponent(FRSResultCapsule& Result, UCapsuleComponent* Capsule0, UCapsuleComponent* Capsule1) {
    return false;
}

bool URSCheckCollision::CheckCollisionCapsule(FRSResultCapsule& Result, const FVector& StartLocation0, const FVector& EndLocation0, float Radius0, const FVector& StartLocation1, const FVector& EndLocation1, float Radius1) {
    return false;
}

bool URSCheckCollision::CheckCollisionBoxVsCapsuleByComponent(UBoxComponent* Box0, UCapsuleComponent* Capsule0) {
    return false;
}

bool URSCheckCollision::CheckCollisionBoxVsBoxByComponent(UBoxComponent* Box0, UBoxComponent* box1) {
    return false;
}

URSCheckCollision::URSCheckCollision() {
}

