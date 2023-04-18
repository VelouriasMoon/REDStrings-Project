#include "RSParticleTrailSystemComponent.h"

URSParticleTrailSystemComponent::URSParticleTrailSystemComponent() {
    this->WidthScaleMode = ETrailWidthMode_FromCentre;
    this->WidthScale = 1.00f;
    this->FadeRate = 1.00f;
    this->FadeOutMaterialScalarName = TEXT("TrailAlpha");
}

