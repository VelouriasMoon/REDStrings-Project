#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RSActorComponentPlayerBase.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API URSActorComponentPlayerBase : public UActorComponent {
    GENERATED_BODY()
public:
    URSActorComponentPlayerBase();
};

