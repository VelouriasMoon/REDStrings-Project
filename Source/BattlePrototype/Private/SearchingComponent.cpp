#include "SearchingComponent.h"

class AActor;

bool USearchingComponent::IsSearch(FVector vecStart, FVector vecEnd, FVector vecForward, float Distance, float Range) const {
    return false;
}

bool USearchingComponent::IsDistanceAngleCheck(AActor* Target, FVector TargetLocation, float Range, float Angle, FRotator Rot, bool noHeight, FVector selfLocation, bool selfLocationOn) {
    return false;
}

USearchingComponent::USearchingComponent() {
}

