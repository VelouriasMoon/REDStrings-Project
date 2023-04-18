#include "AutoRecoverComponent.h"

void UAutoRecoverComponent::Setup(float hpRecoverSpeed, float hpRecoverStartSec) {
}

void UAutoRecoverComponent::ProcessAutoRecoverPP(float delataTime, bool enableRecover) {
}

void UAutoRecoverComponent::ProcessAutoRecoverHP(float delataTime, bool enableRecover) {
}

UAutoRecoverComponent::UAutoRecoverComponent() {
    this->_HPRecoverStartSec = 5.00f;
    this->_HPRecoverSpeed = 10.00f;
    this->_autoRecoverHPFraction = 0.00f;
    this->_PPRecoverStartSec = 1.00f;
    this->_autoRecoverFullPPSec = 5.00f;
    this->_autoRecoverPPFraction = 0.00f;
}

