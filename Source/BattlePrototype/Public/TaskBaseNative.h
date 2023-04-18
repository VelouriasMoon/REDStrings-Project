#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "TaskBaseNative.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UTaskBaseNative : public UBTTaskNode {
    GENERATED_BODY()
public:
    UTaskBaseNative();
};

