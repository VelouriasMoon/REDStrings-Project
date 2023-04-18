#pragma once
#include "CoreMinimal.h"
#include "ASStateInstance.h"
#include "ASStateInstance_Sequence.generated.h"

USTRUCT(BlueprintType)
struct ACTIONSYSTEM_API FASStateInstance_Sequence : public FASStateInstance {
    GENERATED_BODY()
public:
    FASStateInstance_Sequence();
};

