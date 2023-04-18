#pragma once
#include "CoreMinimal.h"
//-FallbackName=Vector
#include "Components/ActorComponent.h"
#include "PlayerLookAtComponent.generated.h"

class AActor;
class UCurveFloat;
class URSPlayerAnimInstance;
class USkeletalMeshComponent;
class UTargetSearchComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UPlayerLookAtComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LimitDegreeUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LimitDegreeDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LimitDegreeRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LimitDegreeLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookAtFollowSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LookAtSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* LookAroundCurve;
    
private:
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UTargetSearchComponent> _TargetSearchComponent;
    
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USkeletalMeshComponent> _MeshComponent;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<URSPlayerAnimInstance> _PlayerAnimInstance;
    
public:
    UPlayerLookAtComponent();
    UFUNCTION(BlueprintCallable)
    void SetLookAtLocation(bool bLookLocation, const FVector& LookAtLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetLookAtEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetLookAround(bool bLookAround);
    
    UFUNCTION(BlueprintCallable)
    void SetEventLookAtLocation(bool bEnable, const FVector& LookAtLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetEventLookAtActor(bool bEnable, AActor* LookAtActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLookAtEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceReset();
    
};

