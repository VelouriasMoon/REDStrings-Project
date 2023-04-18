#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BattleSettingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UBattleSettingComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackExPsychicRateForArmor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EnemyLockOnMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EnemyAttackActionMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WinceAccumulationStopSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KnockBackAccumulationStopSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DownAccumulationStopSeconds;
    
public:
    UBattleSettingComponent();
    UFUNCTION(BlueprintCallable)
    void SetAttackExPsychicRateForArmor(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWinceAccumationStopSeconds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetKnockBackAccumationStopSeconds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEnemyLockOnMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEnemyAttackActionMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDownAccumationStopSeconds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAttackExPsychicRateForArmor();
    
};

