#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RSActorComponentBackgroundBase.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API URSActorComponentBackgroundBase : public UActorComponent {
    GENERATED_BODY()
public:
    URSActorComponentBackgroundBase();
};

