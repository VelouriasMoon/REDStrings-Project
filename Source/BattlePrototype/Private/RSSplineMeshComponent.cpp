#include "RSSplineMeshComponent.h"

URSSplineMeshComponent::URSSplineMeshComponent() {
    this->bRsCastDynamicShadow = true;
    this->bRsCastStaticShadow = true;
    this->bRsCanEverAffectNavigation = true;
    this->bRsOverrideLightMapRes = false;
    this->bRsUseTwoSidedLighting = false;
    this->bRsCastShadowAsTwoSided = false;
    this->RsOverriddenLightMapRes = 64;
    this->bRsLightmapTypeForceVolumetric = false;
    this->bRsVisibleInReflectionCaptures = true;
    this->RsMinDrawDistance = 0.00f;
    this->RsLDMaxDrawDistance = 0.00f;
    this->bRsAllowCullDistanceVolume = true;
}

