#include "RSSequencerValueMaterialVectorParameter.h"

class UCurveFloat;
class UMeshComponent;

void URSSequencerValueMaterialVectorParameter::SetParameter(UMeshComponent* MeshComponent, FName Name, const FVector4& Start, const FVector4& End, float Timer, UCurveFloat* CurveData, bool bLoop, bool bAutoDestroy) {
}

URSSequencerValueMaterialVectorParameter::URSSequencerValueMaterialVectorParameter() {
    this->Component = NULL;
}

