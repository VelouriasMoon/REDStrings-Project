#include "GimmickActionBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ChildActorComponent -FallbackName=ChildActorComponent

void AGimmickActionBase::UpdateActionEnable(EGimmickObjectStatus Status) {
}

void AGimmickActionBase::SetActionIconVisible(bool Visible) {
}

bool AGimmickActionBase::IsActionEnable() {
    return false;
}

void AGimmickActionBase::DisableAction() {
}

bool AGimmickActionBase::CallOpenEventToGimmickObject() {
    return false;
}

bool AGimmickActionBase::CallCloseEventToGimmickObject() {
    return false;
}

AGimmickActionBase::AGimmickActionBase() {
    this->IsActionEnableWhileOpen = true;
    this->IsActionEnableWhileClose = true;
    this->ActionIcon = NULL;
    this->ShowBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("ShowHit"));
    this->EventBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("EventHit"));
    this->ChildActionIcon = CreateDefaultSubobject<UChildActorComponent>(TEXT("Action Icon"));
    this->OnActionMakeEventActorClass = NULL;
    this->OnActionMakeEventActor = NULL;
    this->OnExitMakeEventActorClass = NULL;
    this->OnExitMakeEventActor = NULL;
    this->actionIconType = EActionIconType::Check;
    this->ActionIconSubQuestState = EActionIconSubQuestState::None;
    this->IsOnAction = false;
    this->IsOnExit = false;
    this->TargetGimmickObject = NULL;
    this->IsUseActionIcon = true;
}

