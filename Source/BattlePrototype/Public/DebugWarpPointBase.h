#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DebugWarpPointBase.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ADebugWarpPointBase : public AActor {
    GENERATED_BODY()
public:
    ADebugWarpPointBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FName GetWarpPointName();
    
};

