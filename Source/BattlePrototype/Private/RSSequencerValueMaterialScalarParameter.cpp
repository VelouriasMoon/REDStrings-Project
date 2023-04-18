#include "RSSequencerValueMaterialScalarParameter.h"

class UCurveFloat;
class UMeshComponent;

void URSSequencerValueMaterialScalarParameter::SetParameter(UMeshComponent* MeshComponent, FName Name, float Start, float End, float Timer, UCurveFloat* CurveData, bool bLoop, bool bAutoDestroy) {
}

URSSequencerValueMaterialScalarParameter::URSSequencerValueMaterialScalarParameter() {
    this->Component = NULL;
    this->StartValue = 0.00f;
    this->EndValue = 0.00f;
}

