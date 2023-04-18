#pragma once
#include "CoreMinimal.h"
//-FallbackName=Rotator
//-FallbackName=Vector
#include "Components/ActorComponent.h"
#include "EHCBadState.h"
#include "EPlayerDamageKind.h"
#include "HCHitResult.h"
#include "HCHitStopCauseType.h"
#include "HCSkillAttackType.h"
#include "PlayerDamageReactionInfoBase.generated.h"

class AActor;
class ARSCharacterBase;
class UPlayerENpcBaseComponent;
class UPlayerScriptComponent;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UPlayerDamageReactionInfoBase : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARSCharacterBase* OwnerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerScriptComponent* OwnerPlayerScript;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerDamageKind damageKind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerDamageKind DamageKindNow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DamageDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAddDamage;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> DamageAttacker;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> attacker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    HCHitStopCauseType HitStopCauseType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FloatingPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator FloatingAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    HCSkillAttackType AttackType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BadStateFlag;
    
public:
    UPlayerDamageReactionInfoBase();
    UFUNCTION(BlueprintCallable)
    void UpdateDamageReactionCPP(const FHCHitResult& HitResult);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StartEnpcDamageMove_BPImplement(FVector NewDamageDir, float Power, bool DeadMove);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StartEnemyAddDamageShake_BPImplement(bool bTriggerAttack);
    
    UFUNCTION(BlueprintCallable)
    bool IsKnockbackLongNowCPP();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistDamageCPP() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    bool IsAttackerPlayerCPP();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAerialDamageCPP() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CheckFinishMetamorphosis_BPImplement(UPlayerENpcBaseComponent* ENpcComp, EPlayerDamageKind InDamageKind, bool bFront);
    
    UFUNCTION(BlueprintCallable)
    bool CheckBadStateDamageCPP(int32 Flag, EHCBadState BadState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BrainCrashAccess_CallFromCPP(const FHCHitResult& HitResult);
    
};

