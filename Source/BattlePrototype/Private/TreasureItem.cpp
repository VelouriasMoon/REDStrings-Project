#include "TreasureItem.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent

void ATreasureItem::ProcessBeforeGetAnimBegin() {
}

void ATreasureItem::ProcessAfterGetAnimFinished() {
}

ATreasureItem::ATreasureItem() {
    this->skeletalMeshComponent_ = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
    this->isInitialize_ = false;
    this->isGetThisItem_ = false;
}

