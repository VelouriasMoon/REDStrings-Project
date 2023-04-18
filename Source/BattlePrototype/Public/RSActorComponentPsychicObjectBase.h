#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RSActorComponentPsychicObjectBase.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API URSActorComponentPsychicObjectBase : public UActorComponent {
    GENERATED_BODY()
public:
    URSActorComponentPsychicObjectBase();
};

