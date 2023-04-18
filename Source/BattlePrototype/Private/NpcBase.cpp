#include "NpcBase.h"
#include "Components/BoxComponent.h"
#include "Components/CapsuleComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "NpcSkeletalMeshComponent.h"

void ANpcBase::SetVectorParameterValue(FName ParameterName, FVector ParameterValue) {
}

void ANpcBase::SetScalarParameterValue(FName ParameterName, float ParameterValue) {
}

void ANpcBase::SetRenderLayer(uint8 NewRenderLayer) {
}

void ANpcBase::SetLightChannnel(bool Channel0, bool Channel1, bool Channel2) {
}

void ANpcBase::RefreshMesh() {
}

ANpcBase::ANpcBase() {
    this->NpcMeshDataTableID = 0;
    this->NpcMaterialDataTableID = 0;
    this->CharacterCapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CharacterHitComponent"));
    this->SkeletalMeshComponent = CreateDefaultSubobject<UNpcSkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
    this->SkeletalBody = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalBody"));
    this->SkeletalBodyLower = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalBodyLower"));
    this->SkeletalFace = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalFace"));
    this->SkeletalHair = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalHair"));
    this->SkeletalParts.AddDefaulted(5);
    this->EventBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("EventHit"));
}

