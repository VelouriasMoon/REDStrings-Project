#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BadStateOffDelegateDelegate.h"
#include "BadStateOnDelegateDelegate.h"
#include "BrainCrashAccessOffDelegateDelegate.h"
#include "BrainCrashAccessOnDelegateDelegate.h"
#include "CharactersParameterBasic.h"
#include "CharactersParameterTable.h"
#include "ECharacterIgnoreDamage.h"
#include "ECharacterIgnoreDamageType.h"
#include "EHpDownLimitType.h"
#include "HpDelegateDelegate.h"
#include "NotifyFinishActorDelegate.h"
#include "SimpleMulticastDelegateBPDelegate.h"
#include "CharactersParameterComponent.generated.h"

class AActor;
class UCharactersParameterComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UCharactersParameterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHpDelegate HpEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBadStateOnDelegate BadStateOnEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBadStateOffDelegate BadStateOffEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainCrashAccessOnDelegate BrainCrashAccessOnEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrainCrashAccessOffDelegate BrainCrashAccessOffEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mIsUseTick;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharactersParameterTable mParamTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharactersParameterBasic mParamBasic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharactersParameterTable mParamInitTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mIsBrainCrashLock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mIsNotUseBrainCrashTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mBrainCrashTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mIsPauseBrainCrashTimer;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNotifyFinishActor OnFinishActor;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleMulticastDelegateBP OnDead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mIsElectricTimer;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mBrainCrashTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mBrainCrashMissAccumulationScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mFrameBaseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mElectricBaseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mElectricAddTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mFloodedBaseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mOilBaseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mConfusionBaseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mAddFrameBaseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mAddElectricBaseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mOilDownScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mFloodedMoveScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mFlameScaleByOil;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mElectricScaleByFlooded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mEndlessFlame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mEndlessFlooded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mEndlessOil;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mIsBeforeEndlessFlooded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mIsBeforeEndlessOil;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mIsUpdateCrashOldFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mUpdateCrashOldFrameCnt;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlameUpdateTimeRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ElectricUpdateTimeRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FloodedUpdateTimeRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OilUpdateTimeRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ConfusionUpdateTimeRate;
    
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 mIgnoreDamageFlag;
    
public:
    UCharactersParameterComponent();
    UFUNCTION(BlueprintCallable)
    void SufferPartDamage(int32 part, int32 Damage);
    
    UFUNCTION(BlueprintCallable)
    int32 SufferDamage(int32 Damage, bool IsEnemy, bool isNoDead, bool NewIsDelayDeath, bool isGuts, AActor* attacker);
    
    UFUNCTION(BlueprintCallable)
    void StartLimitCrashAccumulation();
    
    UFUNCTION(BlueprintCallable)
    void StartDamageReactionAccumulationStopTimer();
    
    UFUNCTION(BlueprintCallable)
    void SetPauseUpdate();
    
    UFUNCTION(BlueprintCallable)
    void SetPauseBrainCrashTimer(bool bPause);
    
    UFUNCTION(BlueprintCallable)
    void SetParameterTable(const FCharactersParameterTable& Param);
    
    UFUNCTION(BlueprintCallable)
    void SetParameterInitTable(const FCharactersParameterTable& Param);
    
    UFUNCTION(BlueprintCallable)
    void SetParameterBasic(const FCharactersParameterTable& Param);
    
    UFUNCTION(BlueprintCallable)
    void SetParameterAll(const FCharactersParameterTable& Param);
    
    UFUNCTION(BlueprintCallable)
    void SetOilTimeCoefficient(float Coefficient);
    
    UFUNCTION(BlueprintCallable)
    void SetOilDownScale(float Num);
    
    UFUNCTION(BlueprintCallable)
    void SetOilBaseTime(float Num);
    
    UFUNCTION(BlueprintCallable)
    void SetOilAttenuationCoefficient(float Coefficient);
    
    UFUNCTION(BlueprintCallable)
    void SetNotUseBrainCrashTimer(bool bNotUse);
    
    UFUNCTION(BlueprintCallable)
    void SetNoReleaseBadState(bool bNoRelease);
    
    UFUNCTION(BlueprintCallable)
    void SetLevelTable(float HP, float Attack, float brain, float Defense, float Exp);
    
    UFUNCTION(BlueprintCallable)
    void SetHpWithoutEvent(int32 HP);
    
    UFUNCTION(BlueprintCallable)
    void SetHpPart(int32 no, int32 HP);
    
    UFUNCTION(BlueprintCallable)
    void SetHpDownLimit(EHpDownLimitType LimitType, float limitValue);
    
    UFUNCTION(BlueprintCallable)
    void SetHp(TArray<int32> HP);
    
    UFUNCTION(BlueprintCallable)
    void SetFrameBaseTime(float Num);
    
    UFUNCTION(BlueprintCallable)
    void SetFloodedTimeCoefficient(float Coefficient);
    
    UFUNCTION(BlueprintCallable)
    void SetFloodedMoveScale(float Num);
    
    UFUNCTION(BlueprintCallable)
    void SetFloodedBaseTime(float Num);
    
    UFUNCTION(BlueprintCallable)
    void SetFloodedAttenuationCoefficient(float Coefficient);
    
    UFUNCTION(BlueprintCallable)
    void SetFlameTimeCoefficient(float Coefficient);
    
    UFUNCTION(BlueprintCallable)
    void SetFlameAttenuationCoefficient(float Coefficient);
    
    UFUNCTION(BlueprintCallable)
    void SetEndlessOil(bool bEndless);
    
    UFUNCTION(BlueprintCallable)
    void SetEndlessFlooded(bool bEndless);
    
    UFUNCTION(BlueprintCallable)
    void SetEndlessFlame(bool bEndless);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableBadStatusTimeRate(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetElectricTimerOn(bool on);
    
    UFUNCTION(BlueprintCallable)
    void SetElectricTimeCoefficient(float Coefficient);
    
    UFUNCTION(BlueprintCallable)
    void SetElectricBaseTime(float Num);
    
    UFUNCTION(BlueprintCallable)
    void SetElectricAttenuationCoefficient(float Coefficient);
    
    UFUNCTION(BlueprintCallable)
    void SetElectricAddTime(float Num);
    
    UFUNCTION(BlueprintCallable)
    void SetCrashMax();
    
    UFUNCTION(BlueprintCallable)
    void SetConfusionTimeCoefficient(float Coefficient);
    
    UFUNCTION(BlueprintCallable)
    void SetConfusionBaseTime(float Num);
    
    UFUNCTION(BlueprintCallable)
    void SetConfusionAttenuationCoefficient(float Coefficient);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterIgnoreDamageFlag(int32 Flags);
    
private:
    UFUNCTION(BlueprintCallable)
    void SetBrainCrashTimeSeconds(float Seconds);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetBrainCrashMissAccumulationScale(float Num);
    
    UFUNCTION(BlueprintCallable)
    void SetBrainCrashMiss();
    
    UFUNCTION(BlueprintCallable)
    void SetBrainCrashLock(bool Lock);
    
    UFUNCTION(BlueprintCallable)
    void SetBrainCrashEnableTime(float Num);
    
    UFUNCTION(BlueprintCallable)
    void SetBadStatusAttenuation(const FCharactersParameterBasic& Param);
    
    UFUNCTION(BlueprintCallable)
    void SetAttenuation(const FCharactersParameterBasic& Param);
    
    UFUNCTION(BlueprintCallable)
    void SetArmorHp(int32 HP);
    
    UFUNCTION(BlueprintCallable)
    void SetAddFrameBaseTime(float Num);
    
    UFUNCTION(BlueprintCallable)
    void SetAddElectricBaseTime(float Num);
    
    UFUNCTION(BlueprintCallable)
    void ResetPauseUpdate();
    
    UFUNCTION(BlueprintCallable)
    void ResetHpDownLimit();
    
    UFUNCTION(BlueprintCallable)
    void ResetDelayDeath();
    
    UFUNCTION(BlueprintCallable)
    void ResetCrash();
    
    UFUNCTION(BlueprintCallable)
    void ResetBadStatusAttenuation();
    
    UFUNCTION(BlueprintCallable)
    void ResetAttenuation(bool bResetCrash);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseOil(bool bRsetAccumulation);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseFlooded(bool bRsetAccumulation);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseFlame(bool bRsetAccumulation);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseElectric(bool bRsetAccumulation);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseConfusion(bool bRsetAccumulation);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseCable();
    
    UFUNCTION(BlueprintCallable)
    void ReleaseAllBadStatus(bool bRsetAccumulation);
    
    UFUNCTION(BlueprintCallable)
    void ParameterBasicCopy(const FCharactersParameterBasic& Param);
    
    UFUNCTION(BlueprintCallable)
    void OutBreakOil(AActor* attacker, float Time, bool bEndless);
    
    UFUNCTION(BlueprintCallable)
    void OutBreakFlooded(AActor* attacker, float Time, bool bEndless);
    
    UFUNCTION(BlueprintCallable)
    void OutBreakFlame(AActor* attacker, float Time, bool bEndless);
    
    UFUNCTION(BlueprintCallable)
    void OutBreakElectric(AActor* attacker, float Time);
    
    UFUNCTION(BlueprintCallable)
    void OutBreakConfusion(AActor* attacker, float Time);
    
    UFUNCTION(BlueprintCallable)
    void OutBreakCable(AActor* attacker);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NeedsStatusAssist() const;
    
    UFUNCTION(BlueprintCallable)
    void ModifyParameterTable_Attack(int32 NewValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReinfoceFlame() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPauseUpdate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOil() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLimitCrashAccumulation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHpDownLimit() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFlooded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFlame() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEndlessOil() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEndlessFlooded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEndlessFlame() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsElectricTimer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsElectric() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDelayDeath();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDead();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsConfusion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCharacterIgnoreDamage(ECharacterIgnoreDamage CheckFlag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBrainCrashLock();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBrainCrashAccess();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBadStateEndless();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyBadStatus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWeakPointRateOldFrame(int32 part);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWeakPointRate(int32 part);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSensingArea() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSearchRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSearchAngle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCharactersParameterTable GetParameterTable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCharactersParameterTable GetParameterInitTable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCharactersParameterBasic GetParameterBasic() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMoveArea() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxHpPart(int32 no) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxHp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxArmorHp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHPPercent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHpPart(int32 no) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHpDownLimit() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetHpArray() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFloodedMoveScale();
    
    UFUNCTION(BlueprintCallable)
    float GetElectricScaleByFlooded();
    
    UFUNCTION(BlueprintCallable)
    float GetCrashResistanceMax();
    
    UFUNCTION(BlueprintCallable)
    float GetCrashResistance(int32 part);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UCharactersParameterComponent* GetCharactersParameterComponentFromActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCharacterIgnoreDamageFlagFromType(ECharacterIgnoreDamageType ignoreType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCharacterIgnoreDamageFlag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCaptureArea() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBrainCrashTimer() const;
    
    UFUNCTION(BlueprintCallable)
    float GetBrainCrashMissAccumulationScale();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetArmorHPPercent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetArmorHp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAllHPPercent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAllHp() const;
    
    UFUNCTION(BlueprintCallable)
    void EndLimitCrashAccumulation();
    
    UFUNCTION(BlueprintCallable)
    void EnableCharacterIgnoreDamageFromType(ECharacterIgnoreDamageType ignoreType);
    
    UFUNCTION(BlueprintCallable)
    void EnableCharacterIgnoreDamageAll();
    
    UFUNCTION(BlueprintCallable)
    void EnableCharacterIgnoreDamage(ECharacterIgnoreDamage setFlag);
    
    UFUNCTION(BlueprintCallable)
    void DisableCharacterIgnoreDamageFromType(ECharacterIgnoreDamageType ignoreType);
    
    UFUNCTION(BlueprintCallable)
    void DisableCharacterIgnoreDamageAll();
    
    UFUNCTION(BlueprintCallable)
    void DisableCharacterIgnoreDamage(ECharacterIgnoreDamage setFlag);
    
    UFUNCTION(BlueprintCallable)
    void DebugSetEnemyCrashCrashResistance(int32 DebugCrashResistance);
    
    UFUNCTION(BlueprintCallable)
    void AddParameterBasic(const FCharactersParameterBasic& Param, AActor* attacker, bool IsEnemy);
    
    UFUNCTION(BlueprintCallable)
    void AddHpArray(TArray<int32> HP);
    
    UFUNCTION(BlueprintCallable)
    void AddHp(int32 HP);
    
    UFUNCTION(BlueprintCallable)
    void AddBrainCrashExtraTime(float ExtraTime);
    
};

