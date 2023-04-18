#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ChangePsychicComboLevelDelegateDelegate.h"
#include "ComboInputEndDelegateDelegate.h"
#include "RSAttackInputKind.h"
#include "AttackInputComponent.generated.h"

class UAttackComponentBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UAttackInputComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComboInputEndDelegate OnComboInputEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChangePsychicComboLevelDelegate OnChangePsychicComboLevel;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChangePsychicComboLevelDelegate OnChangeFlyingPsychicComboLevel;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAttackComponentBase*> _inputAttackComponentList;
    
public:
    UAttackInputComponent();
    UFUNCTION(BlueprintCallable)
    void UnregisterCurrentAttackComponent(UAttackComponentBase* attackComp);
    
    UFUNCTION(BlueprintCallable)
    void SetPsychicComboLevel(int32 PsychicComboLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetFlyingPsychicComboLevel(int32 PsychicComboLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableCombo(TEnumAsByte<RSAttackInputKind::Type> kind, bool bDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetComboAttackInputKind(TEnumAsByte<RSAttackInputKind::Type> kind);
    
    UFUNCTION(BlueprintCallable)
    void SetAttackedFlyingCombo();
    
    UFUNCTION(BlueprintCallable)
    void ResetSasHologramAttack();
    
    UFUNCTION(BlueprintCallable)
    void ResetPsychicComboLevel();
    
    UFUNCTION(BlueprintCallable)
    void ResetFlyingCombo();
    
    UFUNCTION(BlueprintCallable)
    void ResetComboByInputKind(TEnumAsByte<RSAttackInputKind::Type> kind);
    
    UFUNCTION(BlueprintCallable)
    void ResetCombo();
    
    UFUNCTION(BlueprintCallable)
    void RegisterCurrentAttackComponent(UAttackComponentBase* attackComp);
    
    UFUNCTION(BlueprintCallable)
    void OverwriteComboCount(int32 comboCount);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnAttackComponentChangeAttacking(UAttackComponentBase* attackComp, bool bAttacking);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWaitPsychicCombo() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsRegisterCombo(TEnumAsByte<RSAttackInputKind::Type> kind);
    
    UFUNCTION(BlueprintCallable)
    bool IsDisableCombo(TEnumAsByte<RSAttackInputKind::Type> kind);
    
    UFUNCTION(BlueprintCallable)
    bool IsComboInterval(TEnumAsByte<RSAttackInputKind::Type> kind, bool bCheckWaitFlag);
    
    UFUNCTION(BlueprintCallable)
    bool IsCheckStartAttack(TEnumAsByte<RSAttackInputKind::Type> AttackKind);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAttackingByKind(TEnumAsByte<RSAttackInputKind::Type> kind);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAttacking();
    
    UFUNCTION(BlueprintCallable)
    bool IsAttackedFlyingCombo();
    
    UFUNCTION(BlueprintCallable)
    void InputAttackByPC(TEnumAsByte<RSAttackInputKind::Type> inputKind, bool bPressed);
    
    UFUNCTION(BlueprintCallable)
    int32 GetRemainUseCount(TEnumAsByte<RSAttackInputKind::Type> kind);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPsychicComboLevelMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPsychicComboLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPsychicComboCount();
    
    UFUNCTION(BlueprintCallable)
    TArray<UAttackComponentBase*> GetInputAttackComponentList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFlyingPsychicComboLevelMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFlyingPsychicComboLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetComboPattern() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetComboCountByInputKind(TEnumAsByte<RSAttackInputKind::Type> kind) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetComboCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<RSAttackInputKind::Type> GetComboAttackInputKindPrev() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<RSAttackInputKind::Type> GetComboAttackInputKind() const;
    
    UFUNCTION(BlueprintCallable)
    UAttackComponentBase* FindAttackingComponent(TEnumAsByte<RSAttackInputKind::Type> kind);
    
    UFUNCTION(BlueprintCallable)
    void DebugSetComboDisp(bool bDisp);
    
    UFUNCTION(BlueprintCallable)
    void ClearUseCount();
    
    UFUNCTION(BlueprintCallable)
    void ClearPsychicComboCount();
    
    UFUNCTION(BlueprintCallable)
    void ClearInputAll();
    
    UFUNCTION(BlueprintCallable)
    void ClearComboPattern(FName patternName);
    
    UFUNCTION(BlueprintCallable)
    void CheckStartAttack(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void ChangeComboPattern(FName patternName);
    
    UFUNCTION(BlueprintCallable)
    void BeginComboInterval();
    
    UFUNCTION(BlueprintCallable)
    void AddPsychicComboCount();
    
    UFUNCTION(BlueprintCallable)
    void AddComboPattern(FName patternName, TEnumAsByte<RSAttackInputKind::Type> inputKind, TArray<UAttackComponentBase*> attackComps, float comboInterval, int32 maxUseCount);
    
    UFUNCTION(BlueprintCallable)
    void AddComboCount(TEnumAsByte<RSAttackInputKind::Type> kind, TEnumAsByte<RSAttackInputKind::Type> branchKind, int32 branchComboCount);
    
};

