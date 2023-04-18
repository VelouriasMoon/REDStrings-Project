#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ChangeMinimapStateComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UChangeMinimapStateComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsAccessed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SquareDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeightDifference;
    
public:
    UChangeMinimapStateComponent();
    UFUNCTION(BlueprintCallable)
    void InitializeParam(bool isAlreadyAccessed, float checkDistance, float NewHeightDifference);
    
};

