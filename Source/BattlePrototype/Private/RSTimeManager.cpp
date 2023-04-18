#include "RSTimeManager.h"

class AActor;
class UObject;

float URSTimeManager::GetWorldNormalDeltaSeconds(const AActor* Actor) {
    return 0.0f;
}

float URSTimeManager::GetSystemDeltaSeconds(const UObject* Object) {
    return 0.0f;
}

float URSTimeManager::GetActorIgnoreHitStop(float HitStopRate) {
    return 0.0f;
}

float URSTimeManager::GetActorDeltaSeconds(const AActor* Actor) {
    return 0.0f;
}

URSTimeManager::URSTimeManager() {
}

