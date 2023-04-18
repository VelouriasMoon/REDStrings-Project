#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DriveBeginDelegateDelegate.h"
#include "DriveEndDelegateDelegate.h"
#include "DriveGaugeMaxDelegateDelegate.h"
#include "DriveNotifyBrainFieldStockDelegate.h"
#include "DriveNotifyParameterMaxDelegate.h"
#include "DriveRegenerateDelegateDelegate.h"
#include "DriveSetDriveGaugeDelegateDelegate.h"
#include "ENotifyDriveEvent.h"
#include "ENpcDriveCheckType.h"
#include "NpcDriveData.h"
#include "PlayerDriveCommonParameter.h"
#include "PlayerDriveGaugeParameter.h"
#include "PlayerDriveParameter.h"
#include "PlayerDriveComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UPlayerDriveComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDriveBeginDelegate DispatchBeginDrive;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDriveEndDelegate DispatchEndDrive;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDriveSetDriveGaugeDelegate DispatchSetDriveGauge;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDriveGaugeMaxDelegate DispatchDriveGaugeMax;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDriveRegenerateDelegate DispatchRegenerateHP;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDriveNotifyBrainFieldStock DispatchNotifyBrainFieldStock;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDriveNotifyParameterMax DispatchNotifyParameterMax;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> DisableDriveClaimantList;
    
public:
    UPlayerDriveComponent();
private:
    UFUNCTION(BlueprintCallable)
    void UpdateNpcDriveInterval(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void UpdateDriveTick(float DeltaSeconds);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetSASCharge(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetRegenerateInterval(float Interval);
    
    UFUNCTION(BlueprintCallable)
    void SetRegenerateHPRate(float Rate);
    
    UFUNCTION(BlueprintCallable)
    void SetRegenerate(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetRecoveryBadStatus(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetPauseDriveTimer(bool bPause);
    
    UFUNCTION(BlueprintCallable)
    void SetNpcDriveData(UPARAM(Ref) FNpcDriveData& InData);
    
    UFUNCTION(BlueprintCallable)
    void SetNexusDriveSeeThroughAddRate(float Rate);
    
    UFUNCTION(BlueprintCallable)
    void SetExtendTimeBrainCrash(float ExtendTime);
    
    UFUNCTION(BlueprintCallable)
    void SetDriveParameter(FPlayerDriveParameter Parameter);
    
    UFUNCTION(BlueprintCallable)
    void SetDriveGaugeParameter(FPlayerDriveGaugeParameter Parameter);
    
    UFUNCTION(BlueprintCallable)
    void SetDriveGaugeIncreaseRate(float Rate);
    
    UFUNCTION(BlueprintCallable)
    void SetDriveGaugeDirect(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetDriveCommonParameter(FPlayerDriveCommonParameter Parameter);
    
    UFUNCTION(BlueprintCallable)
    void RestrictDriveBegin(bool bRestrict);
    
    UFUNCTION(BlueprintCallable)
    void ResetNpcDriveInterval();
    
    UFUNCTION(BlueprintCallable)
    void ResetDriveGauge();
    
    UFUNCTION(BlueprintCallable)
    void ResetBrainFieldCount();
    
    UFUNCTION(BlueprintCallable)
    void ReserveNpcDrive(bool bCrashVision);
    
    UFUNCTION(BlueprintCallable)
    void OnNotifyDriveEvent(ENotifyDriveEvent Type, int32 Param);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSASCharge() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReservedNpcDrive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRecoveryBadStatus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableDriveNpc(bool bIgnoreInterval) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableDrive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableBrainField() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDriveMode() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsDebugInfiniteDrive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsDebugAlwaysDrive() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPsychicWaitGaugeRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPsychicGaugeRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetParameterMaxTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetNpcDriveIntervalTimerRemain() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMoveSpeedRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxDriveTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxDriveGauge() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDriveTimerRemain() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDriveGaugeRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDriveGauge() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDisableDriveLastEnemyHpRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentParameterRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentDriveTimeRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentDriveTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCrashRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBrainFieldCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAttackRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAttackAnimationPlayRate() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceBeginNpcDriveInterval();
    
    UFUNCTION(BlueprintCallable)
    void EndDriveMode(bool bInterruption, bool bLocationChange);
    
    UFUNCTION(BlueprintCallable)
    void DisableDrive(bool bDisable, FName ClaimantName);
    
    UFUNCTION(BlueprintCallable)
    void DirectDriveTimeSetting(float CurrentTime, float ExtendTime);
    
    UFUNCTION(BlueprintCallable)
    void ClearReserveNpcDrive();
    
    UFUNCTION(BlueprintCallable)
    bool CheckNpcDrive(ENpcDriveCheckType CheckType, int32 bondsLevel, float PlayerDriveRate, float PlayerHpRate);
    
    UFUNCTION(BlueprintCallable)
    void BeginDriveTimer();
    
    UFUNCTION(BlueprintCallable)
    void BeginDriveMode(bool bDelayTimerTick, bool bDisableTimer, bool bNpcDrive);
    
    UFUNCTION(BlueprintCallable)
    void AddDefeatedEnemy(int32 defeatedNum);
    
    UFUNCTION(BlueprintCallable)
    void AddBrainFieldCount(bool bItemUse, bool bNoEffect);
    
    UFUNCTION(BlueprintCallable)
    void AddBrainCrashDefeatedEnemy(int32 defeatedNum, bool bUniqueBrainCrash);
    
};

