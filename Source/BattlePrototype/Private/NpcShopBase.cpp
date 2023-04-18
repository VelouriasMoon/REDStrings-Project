#include "NpcShopBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
#include "Components/CapsuleComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ChildActorComponent -FallbackName=ChildActorComponent
#include "Components/StaticMeshComponent.h"

void ANpcShopBase::RegisterPairActor() {
}

UChildActorComponent* ANpcShopBase::GetChildActionIcon() {
    return NULL;
}

ANpcShopBase::ANpcShopBase() {
    this->StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->ShowBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("ShowHit"));
    this->CollisionCapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CharacterHitComponent"));
    this->EventBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("EventHit"));
    this->MakeEventActorClass = NULL;
    this->MakeEventActor = NULL;
    this->ChildActionIcon = CreateDefaultSubobject<UChildActorComponent>(TEXT("Action Icon"));
    this->actionIconType = EActionIconType::Shop;
    this->PairActor = NULL;
    this->ShopParam = 0;
    this->TradeParam = 0;
    this->IsFitGround = true;
}

