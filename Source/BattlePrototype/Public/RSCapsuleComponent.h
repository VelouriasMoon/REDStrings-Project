#pragma once
#include "CoreMinimal.h"
#include "Components/CapsuleComponent.h"
#include "RSCapsuleComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API URSCapsuleComponent : public UCapsuleComponent {
    GENERATED_BODY()
public:
    URSCapsuleComponent();
};

