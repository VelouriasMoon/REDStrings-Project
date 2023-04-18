#include "DropItem.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent
#include "RSParticleSystemComponentBase.h"

class UParticleSystem;
class UParticleSystemComponent;

void ADropItem::SwitchTickAtBeforeRenderInfo() {
}

void ADropItem::SetUseParticle(DropItemParticleName dpName) {
}

void ADropItem::SetOtherParticle(UParticleSystem* dropParticle, UParticleSystem* aquParticle, UParticleSystem* getParticle) {
}

void ADropItem::SetMeshVisibleAndActive(bool IsVisible) {
}

void ADropItem::SetItemState(DropItemStateName NewState) {
}

void ADropItem::SetItemDataNum(int32 Num) {
}

void ADropItem::SetItemDataID(FName sId) {
}

void ADropItem::SetDropParticle() {
}

void ADropItem::SetAutoTakenFlag(bool bAuto) {
}

void ADropItem::PlayGetSound() {
}

void ADropItem::PlayAddItemSound() {
}

void ADropItem::GetParticleFinished(UParticleSystemComponent* PSystem) {
}

void ADropItem::DropDown(float dropSpeed) {
}

void ADropItem::DoAdsorption(float dTime) {
}

void ADropItem::DoActiveAcquiredParticle() {
}

void ADropItem::DestroyThisItem() {
}

float ADropItem::ComputeAndGetDropDownSpeed(float Time) {
    return 0.0f;
}

void ADropItem::ComputeAdsorptionVector(FVector TargetLocation) {
}

void ADropItem::BindGetItem() {
}

ADropItem::ADropItem() {
    this->itemNameID_ = TEXT("it_0001");
    this->itemNum_ = 1;
    this->isCoreDrop_ = true;
    this->dropSpeedBase_ = 30.00f;
    this->dropAddSpeed_ = 0.00f;
    this->AddSpeedValue_ = 20.00f;
    this->becomeCanGettingItemTime_ = 2.00f;
    this->dropDownSpeed_ = 0.00f;
    this->dropParticleComponent_ = CreateDefaultSubobject<URSParticleSystemComponentBase>(TEXT("dropParticleComponent_"));
    this->acquiredParticleComponent_ = CreateDefaultSubobject<URSParticleSystemComponentBase>(TEXT("AcquiredParticleComponent"));
    this->getParticleComponent_ = CreateDefaultSubobject<URSParticleSystemComponentBase>(TEXT("getParticleComponent_"));
    this->takenDistance_ = 600.00f;
    this->takenAndDestroyDistance_ = 20.00f;
    this->takenSphereComponent_ = CreateDefaultSubobject<USphereComponent>(TEXT("TakenSphereComponent"));
    this->adsorptionSphereComponent_ = CreateDefaultSubobject<USphereComponent>(TEXT("AdsorptionSphereComponent"));
    this->adsorptionSpeed_ = 26.00f;
    this->nowState_ = DropItemStateName::dsDrop;
    this->isDispersionMove_ = false;
    this->activeTickCounter_ = 0;
    this->registNum_ = 0;
    this->getSound_ = NULL;
    this->AddItemSeCue = NULL;
}

