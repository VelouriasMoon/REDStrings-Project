#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
//-FallbackName=Transform
#include "MovingRoadInterface.generated.h"

class AActor;

UINTERFACE(Blueprintable)
class BATTLEPROTOTYPE_API UMovingRoadInterface : public UInterface {
    GENERATED_BODY()
};

class BATTLEPROTOTYPE_API IMovingRoadInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FTransform GetMovingRoadTransform(AActor* TargetActor);
    
};

