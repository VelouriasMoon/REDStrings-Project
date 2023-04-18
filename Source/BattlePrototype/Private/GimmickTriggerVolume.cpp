#include "GimmickTriggerVolume.h"

class AActor;

void AGimmickTriggerVolume::OnActorHitFunc(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) {
}

void AGimmickTriggerVolume::OnActorEndOverlapFunc(AActor* OverlappedActor, AActor* OtherActor) {
}

void AGimmickTriggerVolume::OnActorBeginOverlapFunc(AActor* OverlappedActor, AActor* OtherActor) {
}

bool AGimmickTriggerVolume::IsInPlayer() const {
    return false;
}

void AGimmickTriggerVolume::DelayCollisionOn() {
}

AGimmickTriggerVolume::AGimmickTriggerVolume() {
    this->TargetMapGimmick = NULL;
    this->MapGimmickManager = NULL;
    this->PositionToGimmick = EMapGimmickPlayerPlace::MG_PLAYER_PLACE_UP;
    this->IsOverlapAllPlayer = false;
    this->IsOverlapPartner = false;
    this->FinishAnimationDir = EMapGimmickFinishDir::MGDIR_FORWARD;
    this->UpdateIconOnly = false;
    this->IsUseLimitIcon = false;
}

