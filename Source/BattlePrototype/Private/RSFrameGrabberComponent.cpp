#include "RSFrameGrabberComponent.h"

class UTextureRenderTarget2D;

void URSFrameGrabberComponent::StartGrab(EFrameGrabType Type) {
}

void URSFrameGrabberComponent::SetTextureTarget(UTextureRenderTarget2D* Target) {
}

void URSFrameGrabberComponent::GrabFrame(EFrameGrabType Type) {
}

UTextureRenderTarget2D* URSFrameGrabberComponent::GetTextureTarget() {
    return NULL;
}

void URSFrameGrabberComponent::EndGrab() {
}

URSFrameGrabberComponent::URSFrameGrabberComponent() {
    this->TextureTarget = NULL;
}

