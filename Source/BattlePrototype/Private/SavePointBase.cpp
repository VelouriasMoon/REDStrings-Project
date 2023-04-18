#include "SavePointBase.h"
#include "Components/BoxComponent.h"
#include "Components/CapsuleComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ChildActorComponent -FallbackName=ChildActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent

void ASavePointBase::RegisterPairActor() {
}

UChildActorComponent* ASavePointBase::GetChildActionIcon() {
    return NULL;
}

ASavePointBase::ASavePointBase() {
    this->SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
    this->ShowBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("ShowHit"));
    this->CollisionCapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CharacterHitComponent"));
    this->EventBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("EventHit"));
    this->MakeEventActorClass = NULL;
    this->MakeEventActor = NULL;
    this->ChildActionIcon = CreateDefaultSubobject<UChildActorComponent>(TEXT("Action Icon"));
    this->actionIconType = EActionIconType::Save;
    this->PairActor = NULL;
    this->IsFitGround = true;
}

