#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ActorVisibleChangeBase.generated.h"

class AArrangeItemBase;
class USphereComponent;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API AActorVisibleChangeBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCollectArrangeItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCollectArrangeObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCollectAnotherActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* CollectorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ChangeActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AArrangeItemBase*> ChangeActors_ArrangeItemBase;
    
    AActorVisibleChangeBase();
    UFUNCTION(BlueprintCallable)
    void VisibleActors();
    
    UFUNCTION(BlueprintCallable)
    void UnvisibleActors();
    
    UFUNCTION(BlueprintCallable)
    void CollectActors();
    
};

