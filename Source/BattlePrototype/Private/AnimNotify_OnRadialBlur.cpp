#include "AnimNotify_OnRadialBlur.h"

class UCurveVector;
class USkeletalMeshComponent;

void UAnimNotify_OnRadialBlur::PlayBlur(USkeletalMeshComponent* MeshComp) const {
}

UCurveVector* UAnimNotify_OnRadialBlur::GetUseCurveData_Implementation(USkeletalMeshComponent* MeshComp) const {
    return NULL;
}

UAnimNotify_OnRadialBlur::UAnimNotify_OnRadialBlur() {
    this->Priority = 0;
    this->CurveData = NULL;
    this->ModulateType = ENotifyRadialBlurModulateType::Default;
    this->IsUseExecuteKind = false;
}

