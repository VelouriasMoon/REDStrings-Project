#include "StageParameterSettingLightVector.h"
#include "Components/ArrowComponent.h"

AStageParameterSettingLightVector::AStageParameterSettingLightVector() {
    this->AmbientLightVector = CreateDefaultSubobject<UArrowComponent>(TEXT("AmbientLightVector"));
    this->Priority = 0.00f;
    this->bEnabled = true;
}

