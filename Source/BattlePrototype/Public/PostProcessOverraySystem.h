#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PostProcessOverraySystem.generated.h"

UCLASS(Abstract, Blueprintable)
class BATTLEPROTOTYPE_API APostProcessOverraySystem : public AActor {
    GENERATED_BODY()
public:
    APostProcessOverraySystem();
};

