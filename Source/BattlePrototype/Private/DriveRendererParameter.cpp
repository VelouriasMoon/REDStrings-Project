#include "DriveRendererParameter.h"

UDriveRendererParameter::UDriveRendererParameter() {
    this->BgEdgeColorShift = 0.00f;
    this->BgEdgeLength = 800.00f;
    this->BgEdgeLengthMin = 600.00f;
    this->BgEdgeSmooth = 200.00f;
    this->BgEdgeEdgeThresholdNormal = 1.00f;
    this->BgEdgeEdgeThresholdLuminance = 1.00f;
    this->VignetteIntensity = 0.70f;
    this->VignetteRange = 0.80f;
    this->TransitionTime = 0.30f;
    this->BattleOnPPStartDelay = 0.00f;
    this->BattleOffPPStartDelay = 1.00f;
}

