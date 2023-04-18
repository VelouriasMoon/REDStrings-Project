#pragma once
#include "CoreMinimal.h"
#include "EAjitoMemberState.generated.h"

UENUM(BlueprintType)
enum class EAjitoMemberState : uint8 {
    Invalid,
    Entry,
    Idle,
    Talking,
    Conduit,
    Start,
    Wait,
    MAX,
};

