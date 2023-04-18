#pragma once
#include "CoreMinimal.h"
//-FallbackName=Vector
#include "Components/ActorComponent.h"
#include "EEnemyGoalType.h"
#include "EnemyGoalComponentBase.generated.h"

class AActor;
class ARSCharacterBase;
class UEnemyCalcGoalComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UEnemyGoalComponentBase : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEnemyCalcGoalComponent* mCalcComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* mMoveGoalActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* mMyEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARSCharacterBase* mTargetCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector mTargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEnemyGoalType mGoalType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mHitWallRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mHitWallHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mbDisableUpdateCharacter;
    
    UEnemyGoalComponentBase();
    UFUNCTION(BlueprintCallable)
    void UpdateTargetCharacter_Native(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetLocation_Native(FVector Location);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetActor_Native(ARSCharacterBase* Character);
    
    UFUNCTION(BlueprintCallable)
    void SetGoalIntervalTime_Native(float newIntervalTime);
    
    UFUNCTION(BlueprintCallable)
    void ResetGoalIntervalTime_Native();
    
    UFUNCTION(BlueprintCallable)
    void MainTick_Native(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    AActor* InitializeSpawnMoveGoalActor_FromNative(AActor* Owner);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UEnemyCalcGoalComponent* InitializeGetEnemyCalcComponent_FromNative(AActor* Owner);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float InitializeGetCapsuleRadius_FromNative(AActor* Owner);
    
    UFUNCTION(BlueprintCallable)
    void Initialize_Native();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetTargetLocation_Native();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARSCharacterBase* GetTargetActor_Native();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetGoalActor_Native();
    
    UFUNCTION(BlueprintCallable)
    void EndPlay_Native();
    
    UFUNCTION(BlueprintCallable)
    FVector CorrectionHitCollision_Native(FVector SrcLocation, FVector DstLocation, float Radius);
    
};

