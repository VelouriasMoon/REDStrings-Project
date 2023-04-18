#include "SimpleControllerBPLibrary.h"

class USimpleControllerBPLibrary;

FSimpleControllerForceFeedbackEffect USimpleControllerBPLibrary::uploadAndRunForceFeedbackEffect(bool& successful, FString& errorMessage, FSimpleControllerForceFeedbackEffect ForceFeedbackEffect, int32 iterations) {
    return FSimpleControllerForceFeedbackEffect{};
}

void USimpleControllerBPLibrary::stopController() {
}

void USimpleControllerBPLibrary::simpleRumble(FSimpleControllerDevice device, int32 low_runble, int32 high_rumble, int32 Duration) {
}

bool USimpleControllerBPLibrary::saveMapping(ESimpleControllerDirectoryType directoryType, int32 deviceIndex, const FString& fileNameWithPath, bool createDirectory) {
    return false;
}

void USimpleControllerBPLibrary::rumble(bool& successful, FString& errorMessage, FSimpleControllerDevice device, float strengthSmallMotor, float strengthLargeMotor, int32 lengthInMilliseconds) {
}

void USimpleControllerBPLibrary::resetButtonToDefaultMapping(int32 deviceIndex, int32 oldButtonID) {
}

void USimpleControllerBPLibrary::resetAxisToDefaultMapping(int32 deviceIndex, int32 oldAxisID) {
}

void USimpleControllerBPLibrary::resetAxisInverting(int32 deviceIndex, int32 axisID) {
}

void USimpleControllerBPLibrary::resetAllButtonsToDefaultMapping(int32 deviceIndex) {
}

void USimpleControllerBPLibrary::resetAllAxisToDefaultMapping(int32 deviceIndex) {
}

void USimpleControllerBPLibrary::resetAllAxisInverting(int32 deviceIndex) {
}

void USimpleControllerBPLibrary::OnButtonUpEvent(const FString& DeviceID, const int32 buttonID, const int32 deviceIndex, const FSimpleControllerDevice device) {
}

void USimpleControllerBPLibrary::OnButtonDownEvent(const FString& DeviceID, const int32 buttonID, const int32 deviceIndex, const FSimpleControllerDevice device) {
}

bool USimpleControllerBPLibrary::loadMapping(ESimpleControllerDirectoryType directoryType, int32 deviceIndex, const FString& fileNameWithPath) {
    return false;
}

void USimpleControllerBPLibrary::invertAxis(int32 deviceIndex, int32 axisID) {
}

void USimpleControllerBPLibrary::initController(float refreshRateButtonsAndAxis) {
}

USimpleControllerBPLibrary* USimpleControllerBPLibrary::getSimpleControllerTarget() {
    return NULL;
}

TArray<FSimpleControllerDevice> USimpleControllerBPLibrary::getConnectedControllers() {
    return TArray<FSimpleControllerDevice>();
}

FSimpleControllerDevice USimpleControllerBPLibrary::findControllerByDeviceIndex(int32 deviceIndex, bool& found) {
    return FSimpleControllerDevice{};
}

FSimpleControllerDevice USimpleControllerBPLibrary::findControllerByDeviceID(const FString& DeviceID, bool& found) {
    return FSimpleControllerDevice{};
}

void USimpleControllerBPLibrary::directionalPadEventDelegate(const FString& DeviceID, const int32 directionalPadValue, const int32 deviceIndex, const FSimpleControllerDevice device) {
}

void USimpleControllerBPLibrary::directinalPadValueToDirection(int32 directionalPadValue, ESimpleControllerDirectionalPad& Direction) {
}

void USimpleControllerBPLibrary::deviceDetachedEventDelegate(const FSimpleControllerDevice device) {
}

void USimpleControllerBPLibrary::deviceAttachedEventDelegate(const FSimpleControllerDevice device) {
}

void USimpleControllerBPLibrary::destroyForceFeedbackEffect(FSimpleControllerForceFeedbackEffect ForceFeedbackEffect) {
}

void USimpleControllerBPLibrary::createForceFeedbackEffectRamp(FSimpleControllerForceFeedbackEffect& ForceFeedbackEffect, bool& successful, FString& errorMessage, FSimpleControllerDevice device, ESimpleControllerForceFeedbackDirectionType directionType, int32 directionX, int32 directionY, int32 directionZ, int32 Length, int32 Delay, float startLevel, float endLevel, int32 attackLength, float attackLevel, int32 fadeLength, float fadeLevel) {
}

void USimpleControllerBPLibrary::createForceFeedbackEffectPeriodic(FSimpleControllerForceFeedbackEffect& ForceFeedbackEffect, bool& successful, FString& errorMessage, FSimpleControllerDevice device, ESimpleControllerForceFeedbackEffectPeriodicType PeriodicType, ESimpleControllerForceFeedbackDirectionType directionType, int32 directionX, int32 directionY, int32 directionZ, int32 Length, int32 Delay, int32 Period, float magnitude, int32 Offset, int32 phase, int32 attackLength, float attackLevel, int32 fadeLength, float fadeLevel) {
}

void USimpleControllerBPLibrary::createForceFeedbackEffectConstant(FSimpleControllerForceFeedbackEffect& ForceFeedbackEffect, bool& successful, FString& errorMessage, FSimpleControllerDevice device, ESimpleControllerForceFeedbackDirectionType directionType, int32 directionX, int32 directionY, int32 directionZ, int32 Length, int32 Delay, float Level, int32 attackLength, float attackLevel, int32 fadeLength, float fadeLevel) {
}

void USimpleControllerBPLibrary::createForceFeedbackEffectCondition(FSimpleControllerForceFeedbackEffect& ForceFeedbackEffect, bool& successful, FString& errorMessage, FSimpleControllerDevice device, ESimpleControllerForceFeedbackEffectConditionType ConditionType, bool useDirectionX, bool useDirectionY, bool useDirectionZ, int32 Length, int32 Delay, float rightLevel, float leftLevel, int32 rightLevelIncreaseSpeed, int32 leftLevelIncreaseSpeed, float deadband, int32 Center) {
}

void USimpleControllerBPLibrary::changeButtonMapping(int32 deviceIndex, int32 oldButtonID, int32 newButtonID) {
}

void USimpleControllerBPLibrary::changeAxisMapping(int32 deviceIndex, int32 oldAxisID, int32 newAxisID) {
}

void USimpleControllerBPLibrary::buttonUpEventDelegate(const FString& DeviceID, const int32 buttonID, const int32 deviceIndex, const FSimpleControllerDevice device) {
}

void USimpleControllerBPLibrary::buttonIDToButton(int32 buttonID, ESimpleControllerButtons& buttons) {
}

void USimpleControllerBPLibrary::buttonDownEventDelegate(const FString& DeviceID, const int32 buttonID, const int32 deviceIndex, const FSimpleControllerDevice device) {
}

void USimpleControllerBPLibrary::breakForceFeedbackEffect(FSimpleControllerForceFeedbackEffect ForceFeedbackEffect, int32& effectID, bool& successful) {
}

void USimpleControllerBPLibrary::breakDeviceInfo(FSimpleControllerDevice device, int32& deviceIndex, int32& connectionIndex, FString& DeviceID, FString& deviceName, FString& controllerName, int32& vendorID, int32& productID, int32& numAxes, int32& numButtons, int32& numDirectionalPadAxes, int32& numBalls, bool& hasHaptic) {
}

void USimpleControllerBPLibrary::breakDeviceForceFeedbackInfo(FSimpleControllerDevice device, bool& hasHaptic, bool& forceFeedback_CONSTANT, bool& forceFeedback_SINE, bool& forceFeedback_LEFTRIGHT, bool& forceFeedback_TRIANGLE, bool& forceFeedback_SAWTOOTHUP, bool& forceFeedback_SAWTOOTHDOWN, bool& forceFeedback_RAMP, bool& forceFeedback_SPRING, bool& forceFeedback_DAMPER, bool& forceFeedback_INERTIA, bool& forceFeedback_FRICTION, bool& forceFeedback_CUSTOM, bool& forceFeedback_GAIN, bool& forceFeedback_AUTOCENTER, bool& forceFeedback_STATUS, bool& forceFeedback_PAUSE, bool& forceFeedback_POLAR, bool& forceFeedback_CARTESIAN, bool& forceFeedback_SPHERICAL, bool& forceFeedback_INFINITY, int32& maxSimultaneouslyEffects) {
}

void USimpleControllerBPLibrary::ballMovedEventDelegate(const FString& DeviceID, const int32 ballID, const int32 xRel, const int32 yRel, const FSimpleControllerDevice device) {
}

void USimpleControllerBPLibrary::axisMovedEventDelegate(const FString& DeviceID, const int32 axisID, const float AxisValue, const int32 deviceIndex, const FSimpleControllerDevice device) {
}

USimpleControllerBPLibrary::USimpleControllerBPLibrary() {
}

