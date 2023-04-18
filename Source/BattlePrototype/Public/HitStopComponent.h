#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HCRestictedHitStopType.h"
#include "HitStopComponent.generated.h"

class AActor;
class UHitStopComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UHitStopComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitStopTime_Short;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitStopTime_Middle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitStopTime_Large;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitStopTime_XLarge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitStopTime_XXLarge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitStopRate_Short;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitStopRate_Middle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitStopRate_Large;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitStopRate_XLarge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitStopRate_XXLarge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitStopDelay;
    
    UHitStopComponent();
    UFUNCTION(BlueprintCallable)
    void StartHitStopByType(HCRestictedHitStopType HitStopType, bool bCritical);
    
    UFUNCTION(BlueprintCallable)
    void StartHitStop(float HitStopSec, float actionSpeedRate);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveHitStop(bool activeHitStop);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UHitStopComponent* GetHitStopComponent(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void EndHitStop();
    
};

