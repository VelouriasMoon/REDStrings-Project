#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ESimpleControllerButtons.h"
#include "ESimpleControllerDirectionalPad.h"
#include "ESimpleControllerDirectoryType.h"
#include "ESimpleControllerForceFeedbackDirectionType.h"
#include "ESimpleControllerForceFeedbackEffectConditionType.h"
#include "ESimpleControllerForceFeedbackEffectPeriodicType.h"
#include "SimpleControllerDevice.h"
#include "SimpleControllerForceFeedbackEffect.h"
#include "SimpleControllerBPLibrary.generated.h"

class USimpleControllerBPLibrary;

UCLASS(Blueprintable)
class SIMPLECONTROLLER_API USimpleControllerBPLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FdirectionalPadEventDelegate, const FString&, DeviceID, int32, directionalPadValue, int32, deviceIndex, FSimpleControllerDevice, device);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FdeviceDetachedEventDelegate, FSimpleControllerDevice, device);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FdeviceAttachedEventDelegate, FSimpleControllerDevice, device);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FbuttonUpEventDelegate, const FString&, DeviceID, int32, buttonID, int32, deviceIndex, FSimpleControllerDevice, device);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FbuttonDownEventDelegate, const FString&, DeviceID, int32, buttonID, int32, deviceIndex, FSimpleControllerDevice, device);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FballMovedEventDelegate, const FString&, DeviceID, int32, ballID, float, xRel, int32, yRel, FSimpleControllerDevice, device);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FaxisMovedEventDelegate, const FString&, DeviceID, int32, axisID, float, AxisValue, int32, deviceIndex, FSimpleControllerDevice, device);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FbuttonDownEventDelegate onButtonDownEventDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FbuttonUpEventDelegate onButtonUpEventDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FdirectionalPadEventDelegate onDirectionalPadEventDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FballMovedEventDelegate onBallMovedEventDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FaxisMovedEventDelegate onaxisMovedEventDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FdeviceAttachedEventDelegate ondeviceAttachedEventDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FdeviceDetachedEventDelegate ondeviceDetachedEventDelegate;
    
    USimpleControllerBPLibrary();
    UFUNCTION(BlueprintCallable)
    static FSimpleControllerForceFeedbackEffect uploadAndRunForceFeedbackEffect(bool& successful, FString& errorMessage, FSimpleControllerForceFeedbackEffect ForceFeedbackEffect, int32 iterations);
    
    UFUNCTION(BlueprintCallable)
    void stopController();
    
    UFUNCTION(BlueprintCallable)
    static void simpleRumble(FSimpleControllerDevice device, int32 low_runble, int32 high_rumble, int32 Duration);
    
    UFUNCTION(BlueprintCallable)
    bool saveMapping(ESimpleControllerDirectoryType directoryType, int32 deviceIndex, const FString& fileNameWithPath, bool createDirectory);
    
    UFUNCTION(BlueprintCallable)
    void rumble(bool& successful, FString& errorMessage, FSimpleControllerDevice device, float strengthSmallMotor, float strengthLargeMotor, int32 lengthInMilliseconds);
    
    UFUNCTION(BlueprintCallable)
    void resetButtonToDefaultMapping(int32 deviceIndex, int32 oldButtonID);
    
    UFUNCTION(BlueprintCallable)
    void resetAxisToDefaultMapping(int32 deviceIndex, int32 oldAxisID);
    
    UFUNCTION(BlueprintCallable)
    void resetAxisInverting(int32 deviceIndex, int32 axisID);
    
    UFUNCTION(BlueprintCallable)
    void resetAllButtonsToDefaultMapping(int32 deviceIndex);
    
    UFUNCTION(BlueprintCallable)
    void resetAllAxisToDefaultMapping(int32 deviceIndex);
    
    UFUNCTION(BlueprintCallable)
    void resetAllAxisInverting(int32 deviceIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnButtonUpEvent(const FString& DeviceID, const int32 buttonID, const int32 deviceIndex, const FSimpleControllerDevice device);
    
    UFUNCTION(BlueprintCallable)
    void OnButtonDownEvent(const FString& DeviceID, const int32 buttonID, const int32 deviceIndex, const FSimpleControllerDevice device);
    
    UFUNCTION(BlueprintCallable)
    bool loadMapping(ESimpleControllerDirectoryType directoryType, int32 deviceIndex, const FString& fileNameWithPath);
    
    UFUNCTION(BlueprintCallable)
    void invertAxis(int32 deviceIndex, int32 axisID);
    
    UFUNCTION(BlueprintCallable)
    void initController(float refreshRateButtonsAndAxis);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USimpleControllerBPLibrary* getSimpleControllerTarget();
    
    UFUNCTION(BlueprintCallable)
    TArray<FSimpleControllerDevice> getConnectedControllers();
    
    UFUNCTION(BlueprintCallable)
    FSimpleControllerDevice findControllerByDeviceIndex(int32 deviceIndex, bool& found);
    
    UFUNCTION(BlueprintCallable)
    FSimpleControllerDevice findControllerByDeviceID(const FString& DeviceID, bool& found);
    
    UFUNCTION(BlueprintCallable)
    void directionalPadEventDelegate(const FString& DeviceID, const int32 directionalPadValue, const int32 deviceIndex, const FSimpleControllerDevice device);
    
    UFUNCTION(BlueprintCallable)
    static void directinalPadValueToDirection(int32 directionalPadValue, ESimpleControllerDirectionalPad& Direction);
    
    UFUNCTION(BlueprintCallable)
    void deviceDetachedEventDelegate(const FSimpleControllerDevice device);
    
    UFUNCTION(BlueprintCallable)
    void deviceAttachedEventDelegate(const FSimpleControllerDevice device);
    
    UFUNCTION(BlueprintCallable)
    static void destroyForceFeedbackEffect(FSimpleControllerForceFeedbackEffect ForceFeedbackEffect);
    
    UFUNCTION(BlueprintCallable)
    void createForceFeedbackEffectRamp(FSimpleControllerForceFeedbackEffect& ForceFeedbackEffect, bool& successful, FString& errorMessage, FSimpleControllerDevice device, ESimpleControllerForceFeedbackDirectionType directionType, int32 directionX, int32 directionY, int32 directionZ, int32 Length, int32 Delay, float startLevel, float endLevel, int32 attackLength, float attackLevel, int32 fadeLength, float fadeLevel);
    
    UFUNCTION(BlueprintCallable)
    void createForceFeedbackEffectPeriodic(FSimpleControllerForceFeedbackEffect& ForceFeedbackEffect, bool& successful, FString& errorMessage, FSimpleControllerDevice device, ESimpleControllerForceFeedbackEffectPeriodicType PeriodicType, ESimpleControllerForceFeedbackDirectionType directionType, int32 directionX, int32 directionY, int32 directionZ, int32 Length, int32 Delay, int32 Period, float magnitude, int32 Offset, int32 phase, int32 attackLength, float attackLevel, int32 fadeLength, float fadeLevel);
    
    UFUNCTION(BlueprintCallable)
    void createForceFeedbackEffectConstant(FSimpleControllerForceFeedbackEffect& ForceFeedbackEffect, bool& successful, FString& errorMessage, FSimpleControllerDevice device, ESimpleControllerForceFeedbackDirectionType directionType, int32 directionX, int32 directionY, int32 directionZ, int32 Length, int32 Delay, float Level, int32 attackLength, float attackLevel, int32 fadeLength, float fadeLevel);
    
    UFUNCTION(BlueprintCallable)
    void createForceFeedbackEffectCondition(FSimpleControllerForceFeedbackEffect& ForceFeedbackEffect, bool& successful, FString& errorMessage, FSimpleControllerDevice device, ESimpleControllerForceFeedbackEffectConditionType ConditionType, bool useDirectionX, bool useDirectionY, bool useDirectionZ, int32 Length, int32 Delay, float rightLevel, float leftLevel, int32 rightLevelIncreaseSpeed, int32 leftLevelIncreaseSpeed, float deadband, int32 Center);
    
    UFUNCTION(BlueprintCallable)
    void changeButtonMapping(int32 deviceIndex, int32 oldButtonID, int32 newButtonID);
    
    UFUNCTION(BlueprintCallable)
    void changeAxisMapping(int32 deviceIndex, int32 oldAxisID, int32 newAxisID);
    
    UFUNCTION(BlueprintCallable)
    void buttonUpEventDelegate(const FString& DeviceID, const int32 buttonID, const int32 deviceIndex, const FSimpleControllerDevice device);
    
    UFUNCTION(BlueprintCallable)
    static void buttonIDToButton(int32 buttonID, ESimpleControllerButtons& buttons);
    
    UFUNCTION(BlueprintCallable)
    void buttonDownEventDelegate(const FString& DeviceID, const int32 buttonID, const int32 deviceIndex, const FSimpleControllerDevice device);
    
    UFUNCTION(BlueprintCallable)
    static void breakForceFeedbackEffect(FSimpleControllerForceFeedbackEffect ForceFeedbackEffect, int32& effectID, bool& successful);
    
    UFUNCTION(BlueprintCallable)
    static void breakDeviceInfo(FSimpleControllerDevice device, int32& deviceIndex, int32& connectionIndex, FString& DeviceID, FString& deviceName, FString& controllerName, int32& vendorID, int32& productID, int32& numAxes, int32& numButtons, int32& numDirectionalPadAxes, int32& numBalls, bool& hasHaptic);
    
    UFUNCTION(BlueprintCallable)
    static void breakDeviceForceFeedbackInfo(FSimpleControllerDevice device, bool& hasHaptic, bool& forceFeedback_CONSTANT, bool& forceFeedback_SINE, bool& forceFeedback_LEFTRIGHT, bool& forceFeedback_TRIANGLE, bool& forceFeedback_SAWTOOTHUP, bool& forceFeedback_SAWTOOTHDOWN, bool& forceFeedback_RAMP, bool& forceFeedback_SPRING, bool& forceFeedback_DAMPER, bool& forceFeedback_INERTIA, bool& forceFeedback_FRICTION, bool& forceFeedback_CUSTOM, bool& forceFeedback_GAIN, bool& forceFeedback_AUTOCENTER, bool& forceFeedback_STATUS, bool& forceFeedback_PAUSE, bool& forceFeedback_POLAR, bool& forceFeedback_CARTESIAN, bool& forceFeedback_SPHERICAL, bool& forceFeedback_INFINITY, int32& maxSimultaneouslyEffects);
    
    UFUNCTION(BlueprintCallable)
    void ballMovedEventDelegate(const FString& DeviceID, const int32 ballID, const int32 xRel, const int32 yRel, const FSimpleControllerDevice device);
    
    UFUNCTION(BlueprintCallable)
    void axisMovedEventDelegate(const FString& DeviceID, const int32 axisID, const float AxisValue, const int32 deviceIndex, const FSimpleControllerDevice device);
    
};

