#include "NpcTownPeople.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ChildActorComponent -FallbackName=ChildActorComponent

void ANpcTownPeople::UpdateSubQuestStatus_Implementation() {
}

void ANpcTownPeople::UpdateSubQuestId() {
}

void ANpcTownPeople::UpdateSubQuestActionIcon() {
}

void ANpcTownPeople::UpdateRipSyncNative() {
}

void ANpcTownPeople::UnregisterTownPeopleAction() {
}

void ANpcTownPeople::TurnToPlayer(float Speed) {
}

void ANpcTownPeople::StopRipSyncMontageNative() {
}

void ANpcTownPeople::StartRipSyncMontageNative() {
}





QuestProgressState ANpcTownPeople::GetSubQuestProgress(int32 subQuestNumber) {
    return QuestProgressState::qpNotOpen;
}

FVector ANpcTownPeople::GetActionIconWorldPositionOffset() {
    return FVector{};
}

void ANpcTownPeople::AdjustIconOffsetByHeadHeight() {
}

ANpcTownPeople::ANpcTownPeople() {
    this->VisibleStartInSubQuest = true;
    this->VisibleAfterSubQuestCompleted = false;
    this->SubQuestStatus = QuestProgressState::qpNotOpen;
    this->IsTalk = true;
    this->NpcABPNative = NULL;
    this->RipSyncAnimMontageNative = NULL;
    this->BaseFacialAnimMontageNative = NULL;
    this->ShowBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("ShowHit"));
    this->EventBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("EventHit"));
    this->MakeEventActorClass = NULL;
    this->MakeEventActorBPPath = TEXT("None");
    this->MakeEventActor = NULL;
    this->ChildActionIcon = CreateDefaultSubobject<UChildActorComponent>(TEXT("Action Icon"));
    this->ChildActionIcon2 = CreateDefaultSubobject<UChildActorComponent>(TEXT("Action Icon2"));
    this->actionIconType = EActionIconType::Talk;
    this->ActionIconSubQuestState = EActionIconSubQuestState::None;
}

