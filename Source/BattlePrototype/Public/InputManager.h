#pragma once
#include "CoreMinimal.h"
#include "Math/Vector2D.h"
#include "ERSInputDeviceType.h"
#include "InputCoreTypes.h"
#include "ChangeInputTypeDelegateDelegate.h"
#include "ERSGamepadInputName.h"
#include "ERSGamepadLayoutType.h"
#include "ERSInputDeviceType.h"
#include "KeyboardInputDelegateDelegate.h"
#include "ManagerInterface.h"
#include "RSActorSystemBase.h"
#include "InputManager.generated.h"

class URSGamepadLayout;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API AInputManager : public ARSActorSystemBase, public IManagerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERSGamepadLayoutType CurrentLayout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThresholdStickAnalogToDigital;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCrossButtonDecide;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKeyboardInputDelegate KeyboardPressEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKeyboardInputDelegate KeyboardReleasedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChangeInputTypeDelegate ChangeInputTypeEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChangeInputTypeDelegate ChangeInputTypeWithMouseEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float deltaMouseX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float deltaMouseY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMouseControll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPreMouseControll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RawRStickX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RawRStickY;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> PauseClaimantList;
    
public:
    AInputManager();
    UFUNCTION(BlueprintCallable)
    void StopSimpleController();
    
    UFUNCTION(BlueprintCallable)
    bool ShowVirtualKeyboard(const FString& text, const FString& HintText, int32 KeyboardType);
    
    UFUNCTION(BlueprintCallable)
    void SetInputPaused(bool bPaused, FName ClaimantName);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableChangeInputModeFlag(bool flg);
    
    UFUNCTION(BlueprintCallable)
    void SetDeltaMouseMoveRaw(float xDelta, float yDelta);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentLayoutType(const ERSGamepadLayoutType layout);
    
    UFUNCTION(BlueprintCallable)
    void ResetCurrentLayout();
    
    UFUNCTION(BlueprintCallable)
    void OnReleaseAction(const ERSGamepadInputName Pad);
    
    UFUNCTION(BlueprintCallable)
    void OnPressAction(const ERSGamepadInputName Pad);
    
    UFUNCTION(BlueprintCallable)
    void OnMouseInputConvertAction(FKey Key, bool actflag);
    
    UFUNCTION(BlueprintCallable)
    void OnInputMouseAxisAction(const float Value, const ERSGamepadInputName Pad);
    
    UFUNCTION(BlueprintCallable)
    void OnInputAxisAction(const float Value, const ERSGamepadInputName Pad);
    
    UFUNCTION(BlueprintCallable)
    void OnConfigedPadActionAndKey(const ERSGamepadInputName Pad, bool isPress, FKey Key);
    
    UFUNCTION(BlueprintCallable)
    void OnConfigedPadAction(const ERSGamepadInputName Pad, bool isPress, bool NewIsDInput);
    
    UFUNCTION(BlueprintCallable)
    void OnConfigedKeyboardAction(const FKey Key, bool isPress);
    
    UFUNCTION(BlueprintCallable)
    void OnConfigedAxisAction(const ERSGamepadInputName Pad, float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MouseCursorOnOff();
    
    UFUNCTION(BlueprintCallable)
    bool IsSteamInBigPictureMode();
    
    UFUNCTION(BlueprintCallable)
    void IsScreenOutMouse(bool isOut);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMouseWheelItemSelect();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMouseInputRightStick();
    
    UFUNCTION(BlueprintCallable)
    bool IsInputPaused();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDInput(const ERSGamepadInputName InputName);
    
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
    UFUNCTION(BlueprintCallable)
    FString GetVirtualKeyboardText();
    
    UFUNCTION(BlueprintCallable)
    bool GetUseKey(const ERSGamepadInputName InputName, ERSInputDeviceType& useKey, ERSGamepadInputName& padInputName, FName& keyInputName);
    
    UFUNCTION(BlueprintCallable)
    ERSInputDeviceType GetRSCurrentInputDeviceTypeWithMouse();
    
    UFUNCTION(BlueprintCallable)
    ERSInputDeviceType GetRSCurrentInputDeviceType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetRightStickAxisRawValue(float& RStickX, float& RStickY);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetOnTrigger(ERSGamepadLayoutType layout, ERSGamepadInputName Pad);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetOnRepeatTrigger(ERSGamepadLayoutType layout, ERSGamepadInputName Pad);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetOnPress(ERSGamepadLayoutType layout, ERSGamepadInputName Pad);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMouseWheelAxisValue(ERSGamepadLayoutType layout, ERSGamepadInputName Pad);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetMouseMove();
    
    //Generated as EInputDeviceType from InputCore but that doesn't exist
    UFUNCTION(BlueprintCallable)
    ERSInputDeviceType GetInputDeviceType();
    
    UFUNCTION(BlueprintCallable)
    URSGamepadLayout* GetGamepadLayout(const ERSGamepadLayoutType layout);
    
    UFUNCTION(BlueprintCallable)
    ERSGamepadLayoutType GetCurrentLayoutType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAxisValue(ERSGamepadLayoutType layout, ERSGamepadInputName Pad);
    
    UFUNCTION(BlueprintCallable)
    void Finalize();
    
    UFUNCTION(BlueprintCallable)
    void DetectionDeltaMouseMove(float xPos, float yPos);
    
    
    // Fix for true pure virtual functions not being implemented
};

