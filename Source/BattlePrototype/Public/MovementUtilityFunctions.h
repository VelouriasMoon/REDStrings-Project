#pragma once
#include "CoreMinimal.h"
//-FallbackName=Vector
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MovementUtilityFunctions.generated.h"

class UMovementComponent;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UMovementUtilityFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMovementUtilityFunctions();
    UFUNCTION(BlueprintCallable)
    static void MoveAndSlideUpdatedComponent(UMovementComponent* Target, const FVector DesiredMovementThisFrame);
    
};

