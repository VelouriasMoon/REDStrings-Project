#pragma once
#include "CoreMinimal.h"
//-FallbackName=Vector
#include "Components/ActorComponent.h"
#include "EnemyDamageMoveComponentBase.generated.h"

class AActor;
class ARSCharacterBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UEnemyDamageMoveComponentBase : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARSCharacterBase* mOwnerEnemy;
    
public:
    UEnemyDamageMoveComponentBase();
protected:
    UFUNCTION(BlueprintCallable)
    void Update_Native(float DeltaSec);
    
    UFUNCTION(BlueprintCallable)
    void Start_Native(FVector DamageDir, float Power, bool DeadMove, AActor* attacker);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetDamageMoveScale(float Scale);
    
    UFUNCTION(BlueprintCallable)
    float GetLength();
    
};

