#include "ActionIcon.h"
#include "Components/BoxComponent.h"

class AActor;
class UPrimitiveComponent;

void AActionIcon::UpdateActionIconState() {
}

void AActionIcon::SetWorldPositionOffset(const FVector& NewWorldPositionOffset) {
}

void AActionIcon::SetVisible(const bool Flag, const bool UpdateState) {
}

void AActionIcon::SetSubQuestState(EActionIconSubQuestState State, bool subquestActive) {
}

void AActionIcon::SetOverlapEventInvalidFlag(bool Enable) {
}

void AActionIcon::SetLockIconMode(bool isLock) {
}

void AActionIcon::setIconType(EActionIconType NewActionIconType, bool IsActive) {
}

void AActionIcon::SetBattleFlag(bool bBattle) {
}

void AActionIcon::SetActionIconSupportParam(const FActionIconSupportParam& ActionIconSupportParam) {
}

void AActionIcon::SetActionCollisionEnable(bool Enable) {
}

void AActionIcon::SafeSetIconMode(EActionIconMode Mode) {
}

void AActionIcon::RestoreVisible() {
}

void AActionIcon::OnReActivate() {
}

void AActionIcon::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AActionIcon::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AActionIcon::OnDecide() {
}

bool AActionIcon::IsPlayingActionIcon() const {
    return false;
}

bool AActionIcon::IsActionAbleIcon() const {
    return false;
}

EActionIconSubQuestState AActionIcon::GetSubQuestState() const {
    return EActionIconSubQuestState::NonAccept;
}

bool AActionIcon::GetOverlapEventInvalidFlag() {
    return false;
}

EActionIconType AActionIcon::GetIconType() const {
    return EActionIconType::Check;
}

bool AActionIcon::CheckVisibleIcon(AActor* Actor) {
    return false;
}

AActionIcon::AActionIcon() {
    this->PairActionIconActor = NULL;
    this->ShowBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("ShowHit"));
    this->EventBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("EventHit"));
    this->actionIconType = EActionIconType::Talk;
    this->ActionIconSubQuestState = EActionIconSubQuestState::None;
    this->ActionIconSubQuestActive = false;
    this->UIActionIcon = NULL;
    this->PairActionIcon = NULL;
    this->OverlapEventInvalidFlag = false;
}

