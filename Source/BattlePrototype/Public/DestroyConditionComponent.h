#pragma once
#include "CoreMinimal.h"
#include "ConditionComponent.h"
#include "DestroyConditionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UDestroyConditionComponent : public UConditionComponent {
    GENERATED_BODY()
public:
    UDestroyConditionComponent();
};

