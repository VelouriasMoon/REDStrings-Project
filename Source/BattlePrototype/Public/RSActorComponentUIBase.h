#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RSActorComponentUIBase.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API URSActorComponentUIBase : public UActorComponent {
    GENERATED_BODY()
public:
    URSActorComponentUIBase();
};

