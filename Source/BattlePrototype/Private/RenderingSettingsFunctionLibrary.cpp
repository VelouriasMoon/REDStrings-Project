#include "RenderingSettingsFunctionLibrary.h"

class UObject;

void URenderingSettingsFunctionLibrary::SetupRenderingSettingsTranslucencyResolution(UObject* WorldContextObject, const FRenderingSettings& Settings) {
}

void URenderingSettingsFunctionLibrary::SetupRenderingSettingsSSRResolution(UObject* WorldContextObject, const FRenderingSettings& Settings) {
}

FRenderingSettings URenderingSettingsFunctionLibrary::MergeRenderingSettings(const FRenderingSettings& DefaultSettings, const FRenderingSettings& OverrideSettings) {
    return FRenderingSettings{};
}

URenderingSettingsFunctionLibrary::URenderingSettingsFunctionLibrary() {
}

