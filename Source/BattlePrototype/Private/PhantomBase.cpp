#include "PhantomBase.h"
#include "DynamicMaterialControllerComponent.h"
#include "HitCheckComponent.h"
#include "HitCheckReceiverComponent.h"
#include "TeamComponent.h"

class UAnimMontage;

void APhantomBase::StartPhantom(UAnimMontage* Montage, float fadeInSec) {
}

void APhantomBase::StartMaterialFade(bool bFadeIn, float fadeSec) {
}

void APhantomBase::RecvOnMontageEnded(UAnimMontage* Montage, bool bInterrupted) {
}

void APhantomBase::RecvOnEndMaterialFade(FName ParameterName) {
}


APhantomBase::APhantomBase() {
    this->Team = CreateDefaultSubobject<UTeamComponent>(TEXT("Team"));
    this->HitCheck = CreateDefaultSubobject<UHitCheckComponent>(TEXT("HitCheck"));
    this->HitCheckReceiver = CreateDefaultSubobject<UHitCheckReceiverComponent>(TEXT("HitCheckReceiver"));
    this->DynamicMaterialController = CreateDefaultSubobject<UDynamicMaterialControllerComponent>(TEXT("DynamicMaterialController"));
}

