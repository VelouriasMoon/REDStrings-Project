#include "GimmickAttackAreaVolume.h"

class AActor;

void AGimmickAttackAreaVolume::OnActorEndOverlapFunc(AActor* OverlappedActor, AActor* OtherActor) {
}

void AGimmickAttackAreaVolume::OnActorBeginOverlapFunc(AActor* OverlappedActor, AActor* OtherActor) {
}

bool AGimmickAttackAreaVolume::IsEnemyInArea() {
    return false;
}

AGimmickAttackAreaVolume::AGimmickAttackAreaVolume() {
}

