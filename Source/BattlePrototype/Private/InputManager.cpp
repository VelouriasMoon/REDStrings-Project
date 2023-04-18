#include "InputManager.h"

class URSGamepadLayout;

void AInputManager::StopSimpleController() {
}

bool AInputManager::ShowVirtualKeyboard(const FString& text, const FString& HintText, int32 KeyboardType) {
    return false;
}

void AInputManager::SetInputPaused(bool bPaused, FName ClaimantName) {
}

void AInputManager::SetDisableChangeInputModeFlag(bool flg) {
}

void AInputManager::SetDeltaMouseMoveRaw(float xDelta, float yDelta) {
}

void AInputManager::SetCurrentLayoutType(const ERSGamepadLayoutType layout) {
}

void AInputManager::ResetCurrentLayout() {
}

void AInputManager::OnReleaseAction(const ERSGamepadInputName Pad) {
}

void AInputManager::OnPressAction(const ERSGamepadInputName Pad) {
}

void AInputManager::OnMouseInputConvertAction(FKey Key, bool actflag) {
}

void AInputManager::OnInputMouseAxisAction(const float Value, const ERSGamepadInputName Pad) {
}

void AInputManager::OnInputAxisAction(const float Value, const ERSGamepadInputName Pad) {
}

void AInputManager::OnConfigedPadActionAndKey(const ERSGamepadInputName Pad, bool isPress, FKey Key) {
}

void AInputManager::OnConfigedPadAction(const ERSGamepadInputName Pad, bool isPress, bool NewIsDInput) {
}

void AInputManager::OnConfigedKeyboardAction(const FKey Key, bool isPress) {
}

void AInputManager::OnConfigedAxisAction(const ERSGamepadInputName Pad, float Value) {
}


bool AInputManager::IsSteamInBigPictureMode() {
    return false;
}

void AInputManager::IsScreenOutMouse(bool isOut) {
}

bool AInputManager::IsMouseWheelItemSelect() {
    return false;
}

bool AInputManager::IsMouseInputRightStick() {
    return false;
}

bool AInputManager::IsInputPaused() {
    return false;
}

bool AInputManager::IsDInput(const ERSGamepadInputName InputName) {
    return false;
}

void AInputManager::Initialize() {
}

FString AInputManager::GetVirtualKeyboardText() {
    return TEXT("");
}

bool AInputManager::GetUseKey(const ERSGamepadInputName InputName, ERSInputDeviceType& useKey, ERSGamepadInputName& padInputName, FName& keyInputName) {
    return false;
}

ERSInputDeviceType AInputManager::GetRSCurrentInputDeviceTypeWithMouse() {
    return ERSInputDeviceType::eNone;
}

ERSInputDeviceType AInputManager::GetRSCurrentInputDeviceType() {
    return ERSInputDeviceType::eNone;
}

void AInputManager::GetRightStickAxisRawValue(float& RStickX, float& RStickY) {
}

bool AInputManager::GetOnTrigger(ERSGamepadLayoutType layout, ERSGamepadInputName Pad) {
    return false;
}

bool AInputManager::GetOnRepeatTrigger(ERSGamepadLayoutType layout, ERSGamepadInputName Pad) {
    return false;
}

bool AInputManager::GetOnPress(ERSGamepadLayoutType layout, ERSGamepadInputName Pad) {
    return false;
}

float AInputManager::GetMouseWheelAxisValue(ERSGamepadLayoutType layout, ERSGamepadInputName Pad) {
    return 0.0f;
}

FVector2D AInputManager::GetMouseMove() {
    return FVector2D{};
}

ERSInputDeviceType AInputManager::GetInputDeviceType() {
    return ERSInputDeviceType::eNone;
}

URSGamepadLayout* AInputManager::GetGamepadLayout(const ERSGamepadLayoutType layout) {
    return NULL;
}

ERSGamepadLayoutType AInputManager::GetCurrentLayoutType() {
    return ERSGamepadLayoutType::RAW;
}

float AInputManager::GetAxisValue(ERSGamepadLayoutType layout, ERSGamepadInputName Pad) {
    return 0.0f;
}

void AInputManager::Finalize() {
}

void AInputManager::DetectionDeltaMouseMove(float xPos, float yPos) {
}

AInputManager::AInputManager() {
    this->CurrentLayout = ERSGamepadLayoutType::BATTLE;
    this->ThresholdStickAnalogToDigital = 0.90f;
    this->IsCrossButtonDecide = true;
    this->deltaMouseX = 0.00f;
    this->deltaMouseY = 0.00f;
    this->bMouseControll = false;
    this->bPreMouseControll = false;
    this->RawRStickX = 0.00f;
    this->RawRStickY = 0.00f;
}

