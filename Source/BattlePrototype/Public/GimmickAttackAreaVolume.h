#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "GimmickAttackAreaVolume.generated.h"

class AActor;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API AGimmickAttackAreaVolume : public AVolume {
    GENERATED_BODY()
public:
    AGimmickAttackAreaVolume();
    UFUNCTION(BlueprintCallable)
    void OnActorEndOverlapFunc(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnActorBeginOverlapFunc(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    bool IsEnemyInArea();
    
};

