#pragma once
#include "CoreMinimal.h"
//-FallbackName=Vector
#include "Math/Vector2D.h"
#include "Components/ActorComponent.h"
#include "EPlayerInputRestrictionType.h"
#include "EPlayerInputSASReadyType.h"
#include "EPlayerInputType.h"
#include "ERSGamepadInputName.h"
#include "PlayerInputDelegateDelegate.h"
#include "PlayerLongPressDelegateDelegate.h"
#include "PlayerSasReadyDelegateDelegate.h"
#include "PlayerSasSelectSlowDelegate.h"
#include "PlayerInputBaseComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UPlayerInputBaseComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerInputDelegate DispatchTrigger_Attack;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerLongPressDelegate DispatchTrigger_AttackLongPress;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerInputDelegate DispatchRelease_Attack;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerInputDelegate DispatchTrigger_AttackSub;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerLongPressDelegate DispatchTrigger_AttackSubLongPress;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerInputDelegate DispatchRelease_AttackSub;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerInputDelegate DispatchTrigger_LaunchAttack;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerInputDelegate DispatchRelease_LaunchAttack;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerInputDelegate DispatchTrigger_BackStepAttack;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerInputDelegate DispatchRelease_BackStepAttack;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerInputDelegate DispatchTrigger_Dodge;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerInputDelegate DispatchTrigger_Jump;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerInputDelegate DispatchTrigger_TargetLock;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerInputDelegate DispatchTrigger_TargetChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerInputDelegate DispatchTrigger_TargetChangeLeft;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerInputDelegate DispatchTrigger_TargetChangeRight;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerInputDelegate DispatchTrigger_ReadySAS;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerInputDelegate DispatchRelease_ReadySAS;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerSasReadyDelegate Dispatch_ReadySAS;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerSasSelectSlow Dispatch_SasSelectSlow;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerInputDelegate DispatchTrigger_UpSAS;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerInputDelegate DispatchTrigger_DownSAS;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerInputDelegate DispatchTrigger_LeftSAS;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerInputDelegate DispatchTrigger_RightSAS;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerInputDelegate DispatchTrigger_OffSAS;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerInputDelegate DispatchTrigger_SASHologramAttack;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerInputDelegate DispatchRelease_SASHologramAttack;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerInputDelegate DispatchTrigger_SASHologramAttackManual;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerInputDelegate DispatchTrigger_UpCombinationVision;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerInputDelegate DispatchTrigger_DownCombinationVision;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerInputDelegate DispatchTrigger_LeftCombinationVision;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerInputDelegate DispatchTrigger_RightCombinationVision;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerInputDelegate DispatchTrigger_ChangeSASSet;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerInputDelegate DispatchTrigger_Psychic;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerInputDelegate DispatchRelease_Psychic;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerInputDelegate DispatchTrigger_SpecialPsychic;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerInputDelegate DispatchRelease_SpecialPsychic;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerInputDelegate DispatchTrigger_BrainFieldPsychicUp;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerInputDelegate DispatchTrigger_BrainFieldPsychicLeft;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerInputDelegate DispatchTrigger_BrainFieldPsychicRight;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerInputDelegate DispatchRelease_BrainFieldPsychicRight;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerInputDelegate DispatchTrigger_PsychicField;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerInputDelegate DispatchRelease_PsychicField;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerInputDelegate DispatchTrigger_BrainCrash;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerInputDelegate DispatchTrigger_MapGimmick;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerInputDelegate DispatchRelease_MapGimmick;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerInputDelegate DispatchTrigger_BrainField;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerInputDelegate DispatchTrigger_Intercept;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerInputDelegate DispatchTrigger_UseItem;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerInputDelegate DispatchTrigger_ItemSelectLeft;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerInputDelegate DispatchTrigger_ItemSelectRight;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerInputDelegate DispatchTrigger_Ressurect;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerInputDelegate DispatchRelease_Ressurect;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerInputDelegate DispatchTrigger_ResetCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LONG_ATTACK_INPUT_TIME;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LONG_ATTACK_INPUT_TIME_AERIAL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DOUBLE_INPUT_INTERVAL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SAS_SELECT_SLOW_DELAY_TIME;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SAS_SELECT_SLOW_TIME;
    
    UPlayerInputBaseComponent();
    UFUNCTION(BlueprintCallable)
    void Update(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void TutorialRestrictPsychic(bool bRestrict);
    
    UFUNCTION(BlueprintCallable)
    void TutorialRestrictLaunchAttack(bool bRestrict);
    
    UFUNCTION(BlueprintCallable)
    void TutorialRestrictAttackSub(bool bRestrict);
    
    UFUNCTION(BlueprintCallable)
    void TutorialRestrictAttackAll(bool bRestrict);
    
    UFUNCTION(BlueprintCallable)
    void SubRestriction(EPlayerInputRestrictionType Restriction);
    
    UFUNCTION(BlueprintCallable)
    void SetTutorial(bool bTutorial);
    
    UFUNCTION(BlueprintCallable)
    void SetTalkMode(bool bTalk);
    
    UFUNCTION(BlueprintCallable)
    void SetRightStick(float X, float Y);
    
    UFUNCTION(BlueprintCallable)
    void SetLeftStick(float X, float Y);
    
    UFUNCTION(BlueprintCallable)
    void SetInputType(EPlayerInputType Type);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableSasSelectSlow(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetButton(ERSGamepadInputName Button);
    
    UFUNCTION(BlueprintCallable)
    void SetBrainFieldMode(bool bBrainField);
    
    UFUNCTION(BlueprintCallable)
    void SetAI(bool bAI);
    
    UFUNCTION(BlueprintCallable)
    void ResetChangeSasSetDoubleInput();
    
    UFUNCTION(BlueprintCallable)
    void ReleaseButton(ERSGamepadInputName Button);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrgUpSAS() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrgUpCombinationVision() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrgUniqueTriangle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrgUniqueDischarge() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrgUniqueCircle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrgUniqueCharge() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrgTargetLock(bool& OutTrgKeyboardRelease) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrgTargetChangeRight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrgTargetChangeLeft() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrgTargetChange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrgSASOffAll() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrgSASHologramAttackManual() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrgSASHologramAttack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrgRightSAS() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrgRightCombinationVision() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrgRideAttack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrgRideAccel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrgResurrect() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrgResetCamera() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrgRecovery() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrgReadySAS() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrgPsychicObjectUnique() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrgPsychicObjectNormal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrgMapGimmick() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrgLeftSAS() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrgLeftCombinationVision() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrgLaunchAttack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrgJump() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrgItemUse() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrgItemSelectRight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrgItemSelectLeft() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrgIntercept() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrgDownSAS() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrgDownCombinationVision() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrgDodge() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrgCrashVision() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrgChangeSASSet() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrgBrainFieldPsychicUp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrgBrainFieldPsychicRight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrgBrainFieldPsychicLeft() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrgBrainField() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrgBrainCrash() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrgBackStepAttack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrgAttackSub() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrgAttack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrg(ERSGamepadInputName Button) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRightStickZero(bool bRaw) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRightStickInput(float Power, bool bRaw) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRestriction(EPlayerInputRestrictionType Restriction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReleaseSASHologramAttack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReleaseReadySAS() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReleaseMapGimmick() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReleaseLaunchAttack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReleaseJump() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReleaseDodge() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReleaseBrainFieldPsychicRight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReleaseBackStepAttack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReleaseAttackSub() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReleaseAttack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRelease(ERSGamepadInputName Button) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPrecedeInputUseItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPrecedeInputResurrect() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPrecedeInputPsychic() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPrecedeInputJump() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPrecedeInputDodge() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnWakeUp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnUniqueCircle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnUniqueCharge() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnRideAccel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnResurrect() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnReadyTargetChange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnReadySAS() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnReadyCombinationVision() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnPsychicObjectUnique() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnJump() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnDodge() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnAttackSub() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnAttack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOn(ERSGamepadInputName Button) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsMouseInputRightStick();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLeftStickZero(bool bRaw) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLeftStickRun() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLeftStickInput(float Power, bool bRaw) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsKeyboard() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPlayerInputSASReadyType GetSasReadyType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRightStickY(bool bRaw) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRightStickX(bool bRaw) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPrevLeftStickY(bool bRaw) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPrevLeftStickX(bool bRaw) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetPrecedeInputDodgeStick() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetMoveStick(float& OutX, float& OutY, float& OutPower) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLongPressAttackInputTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLeftStickY(bool bRaw) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLeftStickX(bool bRaw) const;
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetLeftStickPrevInputDiff();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPlayerInputType GetInputType() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceEndSasSelectSlow();
    
    UFUNCTION(BlueprintCallable)
    void ClearPrecedeInputDodge();
    
    UFUNCTION(BlueprintCallable)
    void ClearPrecedeInput();
    
    UFUNCTION(BlueprintCallable)
    void ClearInput(bool bButtonOnly);
    
    UFUNCTION(BlueprintCallable)
    void CheckChangeSasSetOption();
    
    UFUNCTION(BlueprintCallable)
    void AddRestriction(EPlayerInputRestrictionType Restriction);
    
};

