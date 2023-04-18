#include "EffectBackground.h"



void AEffectBackground::SetupUseAttachment() {
}





bool AEffectBackground::IsEffectAttachUse() const {
    return false;
}

AEffectBackground::AEffectBackground() {
    this->ParticleComponent = NULL;
    this->bUseCameraDither_ = false;
    this->DitherDistance_ = 0.00f;
    this->DitherSpeed_ = 1.00f;
    this->cameraComp_ = NULL;
}

