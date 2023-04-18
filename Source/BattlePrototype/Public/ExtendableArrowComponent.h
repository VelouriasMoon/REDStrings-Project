#pragma once
#include "CoreMinimal.h"
#include "Components/ArrowComponent.h"
#include "ExtendableArrowComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UExtendableArrowComponent : public UArrowComponent {
    GENERATED_BODY()
public:
    UExtendableArrowComponent();
};

