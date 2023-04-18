#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SplineComponent.h"
#include "EventSplineMovePoint.generated.h"

class USplineComponent;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API AEventSplineMovePoint : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineComponent;
    
    AEventSplineMovePoint();
};

