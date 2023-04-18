#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "PsychicObjectSpawnComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UPsychicObjectSpawnComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UPsychicObjectSpawnComponent();
};

