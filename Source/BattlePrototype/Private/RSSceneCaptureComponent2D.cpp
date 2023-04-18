#include "RSSceneCaptureComponent2D.h"

void URSSceneCaptureComponent2D::SetUseTAA(bool UseTAA) {
}

void URSSceneCaptureComponent2D::SetUseScreenPercentage(bool bShow) {
}

void URSSceneCaptureComponent2D::SetShowSkeletalMeshes(bool bShow) {
}

void URSSceneCaptureComponent2D::SetShowDynamicShadows(bool bShow) {
}

void URSSceneCaptureComponent2D::DebugTest() {
}

void URSSceneCaptureComponent2D::ClearTemporary() {
}

void URSSceneCaptureComponent2D::CaptureSceneSafe2Pass() {
}

void URSSceneCaptureComponent2D::CaptureSceneSafe() {
}

FMatrix URSSceneCaptureComponent2D::CalcProjectionMatrix(float ScreenOffsetX, float ScreenOffsetY, float ScaleX, float ScaleY) {
    return FMatrix{};
}

URSSceneCaptureComponent2D::URSSceneCaptureComponent2D() {
    this->bUseTextureStreaming = false;
    this->TextureStreamingBoostFactor = 1.00f;
    this->bSeparateTranslucency = false;
}

