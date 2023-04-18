#pragma once
#include "CoreMinimal.h"
#include "ASStateInstance.h"
#include "ASStateInstance_StateMachine.generated.h"

USTRUCT(BlueprintType)
struct ACTIONSYSTEM_API FASStateInstance_StateMachine : public FASStateInstance {
    GENERATED_BODY()
public:
    FASStateInstance_StateMachine();
};

