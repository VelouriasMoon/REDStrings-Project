#include "OptionParam.h"

class URSGameInstance;

void UOptionParam::SetWindowModeImmediate(const TEnumAsByte<EWindowMode::Type>& windowMode, bool isApply) {
}

void UOptionParam::SetWindowMode(const TEnumAsByte<EWindowMode::Type>& windowMode) {
}

void UOptionParam::SetVoiceVolume(uint8 Volume) {
}

void UOptionParam::SetVoiceLanguage(ETextLanguage Type) {
}

void UOptionParam::SetUseVerticalSyncImmediate(bool useVert, bool isApply) {
}

void UOptionParam::SetUseVerticalSync(bool useVert) {
}

void UOptionParam::SetUseBrainCrash(bool SetValue) {
}

void UOptionParam::SetTextureQualityImmediate(const EGradualQuality& textureAuality, bool isApply) {
}

void UOptionParam::SetTextureQuality(const EGradualQuality& textureQuality) {
}

void UOptionParam::SetTargetCameraTraceImmediate(ETargetCameraTrace Type) {
}

void UOptionParam::SetTargetCameraTrace(ETargetCameraTrace Type) {
}

void UOptionParam::SetTargetAutoChangeImmediate(ETargetAutoChange Type) {
}

void UOptionParam::SetTargetAutoChange(ETargetAutoChange Type) {
}

void UOptionParam::SetSoundOutput(EOptionSoundOutput Type) {
}

void UOptionParam::SetShadowQualityImmediate(const EGradualQuality& shadowQuality, bool isApply) {
}

void UOptionParam::SetShadowQuality(const EGradualQuality& shadowQuality) {
}

void UOptionParam::SetSeVolume(uint8 Volume) {
}

void UOptionParam::SetScreenResolutionImmediate(const FScreenResolutionSetting& ScreenResolution, bool isApply) {
}

void UOptionParam::SetScreenResolutionFromUserSettings() {
}

void UOptionParam::SetScreenResolution(const FScreenResolutionSetting& ScreenResolution) {
}

void UOptionParam::SetScreenBrightness(float Param) {
}

void UOptionParam::SetPostQualityImmediate(const EGradualQuality& postQuality, bool isApply) {
}

void UOptionParam::SetPostQuality(const EGradualQuality& postQuality) {
}

void UOptionParam::SetOldScreenResolution(const FScreenResolutionSetting& ScreenResolution) {
}

void UOptionParam::SetMinimapScaling(EOptionMinimapScaling Type) {
}

void UOptionParam::SetMinimapRotation(EOptionMinimapRotation Type) {
}

void UOptionParam::SetMinimapDisplay(EOptionMinimapDisplay Type) {
}

void UOptionParam::SetLockonActionTypeImmediate(ELockonActionType Type) {
}

void UOptionParam::SetLockonActionType(ELockonActionType Type) {
}

void UOptionParam::SetFPSTypeImmediate(const EFPSType fpsType) {
}

void UOptionParam::SetFPSType(const EFPSType& fpsType) {
}

void UOptionParam::SetEventMessageAutoPlayImmediate(EEventMessageAutoPlay Type) {
}

void UOptionParam::SetEventMessageAutoPlay(EEventMessageAutoPlay Type) {
}

void UOptionParam::SetDisplayLanguageImmediate(ETextLanguage Type) {
}

void UOptionParam::SetDisplayLanguage(ETextLanguage Type) {
}

void UOptionParam::SetDisplayEnemyDamage(EOptionDisplayEnemyDamage Type) {
}

void UOptionParam::SetDifficulty(HCGameDifficulty Type) {
}

void UOptionParam::SetDefaultAllGraphic(bool isConstruct, bool setUeDefault) {
}

void UOptionParam::SetDefaultAllController() {
}

void UOptionParam::SetDefaultAllConfig() {
}

void UOptionParam::SetDefaultAll(bool isConstruct, bool setUeDefault) {
}

void UOptionParam::SetControllerVibration(EOptionControllerVibration Type) {
}

void UOptionParam::SetControllerParamValue(EChangeableControllerKey targetKey, ERSGamepadInputName newKey) {
}

void UOptionParam::SetCameraYaw(EOptionCameraYaw Type) {
}

void UOptionParam::SetCameraSpeed(uint8 speedType) {
}

void UOptionParam::SetCameraPitch(EOptionCameraPitch Type) {
}

void UOptionParam::SetCameraAfterMoveTypeImmediate(ECameraAfterMoveType Type) {
}

void UOptionParam::SetCameraAfterMoveType(ECameraAfterMoveType Type) {
}

void UOptionParam::SetBGMVolume(uint8 Volume) {
}

void UOptionParam::SetAttackAutoLockOnImmediate(EAttackAutoLockOn Type) {
}

void UOptionParam::SetAttackAutoLockOn(EAttackAutoLockOn Type) {
}

void UOptionParam::SetAntiAliasingQualityImmediate(const EOptionAAQuality& antiAliasingQuality) {
}

void UOptionParam::SetAntiAliasingQuality(const EOptionAAQuality& antiAliasingQuality) {
}

void UOptionParam::ReflectParamImmediate() {
}

void UOptionParam::ReflectParamAllGraphic() {
}

void UOptionParam::ReflectParamAllConfig() {
}

void UOptionParam::ReflectParamAll() {
}

bool UOptionParam::ReflectControllerParam() {
    return false;
}

void UOptionParam::InitData(URSGameInstance* gameInst) {
}

TEnumAsByte<EWindowMode::Type> UOptionParam::GetWindowMode() const {
    return EWindowMode::Fullscreen;
}

uint8 UOptionParam::GetVoiceVolume() const {
    return 0;
}

ETextLanguage UOptionParam::GetVoiceLanguage() const {
    return ETextLanguage::Japanese;
}

bool UOptionParam::GetUseVerticalSync() const {
    return false;
}

EGradualQuality UOptionParam::GetTextureQuality() const {
    return EGradualQuality::Low;
}

ETargetAutoChange UOptionParam::GetTargetAutoChange() const {
    return ETargetAutoChange::Default;
}

EOptionSoundOutput UOptionParam::GetSoundOutput() const {
    return EOptionSoundOutput::Default;
}

EGradualQuality UOptionParam::GetShadowQuality() const {
    return EGradualQuality::Low;
}

uint8 UOptionParam::GetSeVolume() const {
    return 0;
}

ETargetCameraTrace UOptionParam::GetSetTargetCameraTrace() const {
    return ETargetCameraTrace::On;
}

FScreenResolutionSetting UOptionParam::GetScreenResolution() const {
    return FScreenResolutionSetting{};
}

float UOptionParam::GetScreenBrightness() const {
    return 0.0f;
}

EGradualQuality UOptionParam::GetPostQuality() const {
    return EGradualQuality::Low;
}

FScreenResolutionSetting UOptionParam::GetOldScreenResolution() const {
    return FScreenResolutionSetting{};
}

EOptionMinimapScaling UOptionParam::GetMinimapScaling() const {
    return EOptionMinimapScaling::Normal;
}

EOptionMinimapRotation UOptionParam::GetMinimapRotation() const {
    return EOptionMinimapRotation::On;
}

EOptionMinimapDisplay UOptionParam::GetMinimapDisplay() const {
    return EOptionMinimapDisplay::Default;
}

ELockonActionType UOptionParam::GetLockonActionType() const {
    return ELockonActionType::Default;
}

EFPSType UOptionParam::GetFPSType() const {
    return EFPSType::Thirty;
}

EEventMessageAutoPlay UOptionParam::GetEventMessageAutoPlay() const {
    return EEventMessageAutoPlay::Default;
}

ETextLanguage UOptionParam::GetDisplayLanguage() const {
    return ETextLanguage::Japanese;
}

EOptionDisplayEnemyDamage UOptionParam::GetDisplayEnemyDamage() const {
    return EOptionDisplayEnemyDamage::Default;
}

HCGameDifficulty UOptionParam::GetDifficulty() const {
    return HCGameDifficulty::Easy;
}

EOptionControllerVibration UOptionParam::GetControllerVibration() const {
    return EOptionControllerVibration::Default;
}

ERSGamepadInputName UOptionParam::GetControllerParamValue(EChangeableControllerKey targetKey) const {
    return ERSGamepadInputName::R1;
}

ERSGamepadInputName UOptionParam::GetControllerDefaultKey(EChangeableControllerKey targetKey) const {
    return ERSGamepadInputName::R1;
}

EOptionCameraYaw UOptionParam::GetCameraYaw() const {
    return EOptionCameraYaw::Default;
}

uint8 UOptionParam::GetCameraSpeed() const {
    return 0;
}

EOptionCameraPitch UOptionParam::GetCameraPitch() const {
    return EOptionCameraPitch::Default;
}

ECameraAfterMoveType UOptionParam::GetCameraAfterMoveType() const {
    return ECameraAfterMoveType::On;
}

uint8 UOptionParam::GetBgmVolume() const {
    return 0;
}

EAttackAutoLockOn UOptionParam::GetAttackAutoLockOn() const {
    return EAttackAutoLockOn::Default;
}

EOptionAAQuality UOptionParam::GetAntiAliasingQuality() const {
    return EOptionAAQuality::None;
}

UOptionParam::UOptionParam() {
}

