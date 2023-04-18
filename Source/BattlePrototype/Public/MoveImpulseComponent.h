#pragma once
#include "CoreMinimal.h"
//-FallbackName=Vector
#include "Components/ActorComponent.h"
#include "MoveImpulseComponent.generated.h"

class AActor;
class UMoveImpulseComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UMoveImpulseComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _isDebugDraw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _decSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName _claimantName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector _nowVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector _oldLocation;
    
public:
    UMoveImpulseComponent();
private:
    UFUNCTION(BlueprintCallable)
    void UpdateFunction(float DeltaTime);
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateFlying();
    
    UFUNCTION(BlueprintCallable)
    void SetImpulse(FVector Velocity);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetVelocity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UMoveImpulseComponent* GetMoveImpulseComponent(AActor* Actor);
    
};

