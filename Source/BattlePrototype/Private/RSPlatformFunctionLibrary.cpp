#include "RSPlatformFunctionLibrary.h"

void URSPlatformFunctionLibrary::SetEnableShareRecording(bool IsEnable) {
}

bool URSPlatformFunctionLibrary::SetCurrentCulture(ETextLanguage textLang) {
    return false;
}

bool URSPlatformFunctionLibrary::IsEnableShareRecording() {
    return false;
}

bool URSPlatformFunctionLibrary::IsCrossButtonDecide() {
    return false;
}

ETextLanguage URSPlatformFunctionLibrary::GetSystemVoiceLanguage() {
    return ETextLanguage::Japanese;
}

ETextLanguage URSPlatformFunctionLibrary::GetSystemTextLanguage() {
    return ETextLanguage::Japanese;
}

EPlatFormType URSPlatformFunctionLibrary::GetPlatformType() {
    return EPlatFormType::Windows;
}

ERegionType URSPlatformFunctionLibrary::GetPlatformRegion() {
    return ERegionType::ALL;
}

EPlatFormConsoleType URSPlatformFunctionLibrary::GetPlatformConsoleType() {
    return EPlatFormConsoleType::Invalid;
}

FString URSPlatformFunctionLibrary::GetLocalizedPath(ETextLanguage textLang) {
    return TEXT("");
}

ELocalizedKeyboardType URSPlatformFunctionLibrary::GetLocalizedKeyboardType() {
    return ELocalizedKeyboardType::QWERTY;
}

bool URSPlatformFunctionLibrary::GetDisplayRequestState() {
    return false;
}

void URSPlatformFunctionLibrary::DisplayRequestRelease() {
}

void URSPlatformFunctionLibrary::DisplayRequestActive() {
}

void URSPlatformFunctionLibrary::ConvertKeyboardNames(const TArray<FName>& oldKeys, ELocalizedKeyboardType oldType, TArray<FName>& newKeys, ELocalizedKeyboardType newType) {
}

FName URSPlatformFunctionLibrary::ConvertKeyboardName(const FName oldKey, ELocalizedKeyboardType oldType, ELocalizedKeyboardType newType) {
    return NAME_None;
}

URSPlatformFunctionLibrary::URSPlatformFunctionLibrary() {
}

