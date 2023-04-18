#include "ArrangeItemBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ChildActorComponent -FallbackName=ChildActorComponent

class AActor;
class UPrimitiveComponent;

void AArrangeItemBase::SetVisible(const bool Flag) {
}

void AArrangeItemBase::Setup() {
}

void AArrangeItemBase::RestoreVisible() {
}

void AArrangeItemBase::OnRebirth_Implementation(bool IsInitialize) {
}

void AArrangeItemBase::OnBindShowBoxBeginOverlap(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AArrangeItemBase::OnBindAcquire(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AArrangeItemBase::OnAcquire_Implementation(bool IsInitialize) {
}

AArrangeItemBase::AArrangeItemBase() {
    this->isDoBeginPlay = false;
    this->ChildActionIcon = CreateDefaultSubobject<UChildActorComponent>(TEXT("Action Icon"));
    this->ActionIconSupportParamID = TEXT("Default");
    this->actionIconType = EActionIconType::Check;
    this->LevelID = -1;
    this->GroupID = -1;
    this->Acquired = false;
    this->isInvisivleInEvent = true;
    this->IntervalTime = 0.00f;
    this->AddItemSeCue = NULL;
    this->AcquisitionFailureSound = NULL;
    this->ShowBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("ShowHit"));
    this->EventBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("EventHit"));
    this->WhetherToGetFullItem = true;
    this->BrainTalkType = EArrangeItemBrainTalkType::None;
    this->bAutoGet = false;
}

