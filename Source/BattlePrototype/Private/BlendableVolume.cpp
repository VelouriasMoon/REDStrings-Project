#include "BlendableVolume.h"

ABlendableVolume::ABlendableVolume() {
    this->Priority = 0.00f;
    this->BlendRadius = 100.00f;
    this->BlendWeight = 1.00f;
    this->bEnabled = true;
    this->bUnbound = false;
}

