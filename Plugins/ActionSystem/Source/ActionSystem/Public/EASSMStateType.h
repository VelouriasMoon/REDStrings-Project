#pragma once
#include "CoreMinimal.h"
#include "EASSMStateType.generated.h"

UENUM(BlueprintType)
namespace EASSMStateType {
    enum Type {
        None = 0x0,
        Sequence = 0x1,
        BlendSpace,
        StateMachine,
    };
}

