#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HoveringComponent.generated.h"

class AActor;
class UHoveringComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UHoveringComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _minFlightAltitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _maxFlightAltitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _isHoveringCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> _disableClaimantNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName _claimantName;
    
public:
    UHoveringComponent();
    UFUNCTION(BlueprintCallable)
    void SetDisableHovering(const FName& ClaimantName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UHoveringComponent* GetHoveringComponent(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFlightAltitudeAverage() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearDisableHovering(const FName& ClaimantName);
    
};

