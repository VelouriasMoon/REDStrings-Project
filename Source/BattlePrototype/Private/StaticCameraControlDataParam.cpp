#include "StaticCameraControlDataParam.h"

UStaticCameraControlDataParam::UStaticCameraControlDataParam() {
    this->CameraInterpSpeed = 0.00f;
    this->IsEnableEaseInOut = false;
    this->EaseInOutExp = 0.00f;
    this->MaxRotate = 15.00f;
}

