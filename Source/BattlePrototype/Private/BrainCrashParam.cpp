#include "BrainCrashParam.h"

UBrainCrashParam::UBrainCrashParam() {
    this->CameraInterpStartTime = 0.50f;
    this->CameraInterpStartFunc = VTBlend_Cubic;
    this->CameraInterpStartEaseExp = 2.00f;
    this->CameraInterpFinishTime = 0.50f;
    this->CameraInterpFinishFunc = VTBlend_Cubic;
    this->CameraInterpFinishEaseExp = 2.00f;
    this->DitherHiddenSeconds = 0.60f;
    this->SafePointPriorityAngleLength = 200.00f;
    this->SafePointPriorityAngle = 60.00f;
    this->SafePointLimitLength = 1000.00f;
    this->SafePointLimitAngle = 360.00f;
    this->SafePointLimitHeight = 200.00f;
    this->GeneralDamageSeconds = 0.50f;
    this->GeneralDamageMaxIntervalSeconds = 0.10f;
    this->UniqueWaitSecdons = 0.00f;
}

