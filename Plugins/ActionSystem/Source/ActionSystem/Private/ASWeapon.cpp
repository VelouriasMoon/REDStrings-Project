#include "ASWeapon.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "ASCollisionGroupComponent.h"

AASWeapon::AASWeapon() {
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    this->Collision = CreateDefaultSubobject<UASCollisionGroupComponent>(TEXT("Collision"));
    this->Character = NULL;
}

