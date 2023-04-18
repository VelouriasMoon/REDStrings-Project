#pragma once
#include "CoreMinimal.h"
#include "RSPartyPlayerKind.generated.h"

UENUM(BlueprintType)
namespace RSPartyPlayerKind {
    enum Type {
        Main,
        Left,
        Right,
        Invalid,
        NumOfEnum = 0x3,
    };
}

