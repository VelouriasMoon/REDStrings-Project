#include "NpcSequencerActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent

ANpcSequencerActor::ANpcSequencerActor() {
    this->BoundBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoundBoxComponent"));
    this->BoundCollisionHead = CreateDefaultSubobject<USphereComponent>(TEXT("BoundCollisionHead"));
    this->BoundCollisionHandLeft = CreateDefaultSubobject<USphereComponent>(TEXT("BoundCollisionHandLeft"));
    this->BoundCollisionHandRight = CreateDefaultSubobject<USphereComponent>(TEXT("BoundCollisionHandRight"));
    this->BoundCollisionFootLeft = CreateDefaultSubobject<USphereComponent>(TEXT("BoundCollisionFootLeft"));
    this->BoundCollisionFootRight = CreateDefaultSubobject<USphereComponent>(TEXT("BoundCollisionFootRight"));
}

