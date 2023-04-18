#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DifficultyDamageRate.h"
#include "HCGameDifficulty.h"
#include "HCHitResult.h"
#include "DamageCalcComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UDamageCalcComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DAMAGE_FACTOR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OBJECT_DAMAGE_FACTOR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FIRE_DAMAGE_FACTOR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ELECTRIC_DAMAGE_FACTOR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RANDOM_FACTOR_MIN;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RANDOM_FACTOR_MAX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CRITICAL_FACTOR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CRITICAL_CRASH_FACTOR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CRITICAL_FACTOR_STEALTH;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CRITICAL_CRASH_FACTOR_STEALTH;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CRITICAL_FACTOR_STEALTH_VS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CRITICAL_CRASH_FACTOR_STEALTH_VS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CRITICAL_FACTOR_ASSASSIN_VS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CRITICAL_CRASH_FACTOR_ASSASSIN_VS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CRITICAL_FACTOR_ASSASSIN_ND_VS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CRITICAL_CRASH_FACTOR_ASSASSIN_ND_VS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BAD_STATE_UP_FACTOR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BAD_STATE_DOWN_FACTOR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CRASH_FACTIR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ARMOR_DAMAGE_UP_FACTOR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float COPY_PSYCHIC_ARMOR_FACTOR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PSYCHICFIELD_DAMAGE_FACTOR_BOSS;
    
public:
    UDamageCalcComponent();
    UFUNCTION(BlueprintCallable)
    void SetDifficultyDamageRate(HCGameDifficulty Difficulty, FDifficultyDamageRate Rate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 CalcDamageValue(const FHCHitResult& HitResult, bool IsGuard, bool IsRandom, bool IsArmor) const;
    
};

