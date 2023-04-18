#include "RadialBlurManager.h"

class UCurveVector;

void ARadialBlurManager::Stop() {
}

void ARadialBlurManager::PlayPresetColorModulate(int32 Priority, UCurveVector* CurveData, const FVector& Location, ENotifyRadialBlurModulateType PresetColorType, bool Force) {
}

void ARadialBlurManager::Play(int32 Priority, UCurveVector* CurveData, const FVector& Location, const FLinearColor& ColorModuate, bool Force) {
}

bool ARadialBlurManager::GetPlaying() {
    return false;
}

ARadialBlurManager::ARadialBlurManager() {
    this->IsPlaying = false;
}

