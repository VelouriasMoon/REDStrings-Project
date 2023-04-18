#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SimpleMulticastDelegateBPDelegate.h"
#include "SprintComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API USprintComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _fWalkableFloorAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _isSprinting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _isEndSprinting;
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleMulticastDelegateBP OnStartSprint;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleMulticastDelegateBP OnEndSprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _sprintStartSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _walkStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName _sprintClaimantName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _maxWalkSpeedRateBySprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _maxWalkSpeedRateByBattleSprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _sprintCurveAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _sprintBankPow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _sprintBankBackPow;
    
public:
    USprintComponent();
    UFUNCTION(BlueprintCallable)
    void StartSprint(bool bBattle);
    
    UFUNCTION(BlueprintCallable)
    void SetSprintSpeedRate(float Rate, float BattleRate);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxWalkSpeedRate();
    
    UFUNCTION(BlueprintCallable)
    void SetEventSprint(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void ProcessSprint(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void EndSprint();
    
    UFUNCTION(BlueprintCallable)
    void ChangeBattleSprint(bool bBattle);
    
};

