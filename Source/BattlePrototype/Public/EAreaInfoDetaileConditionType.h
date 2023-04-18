#pragma once
#include "CoreMinimal.h"
#include "EAreaInfoDetaileConditionType.generated.h"

UENUM(BlueprintType)
enum class EAreaInfoDetaileConditionType : uint8 {
    NONE,
    EQUAL,
    NOT_EQUAL,
    GREATER,
    GREATER_EQUAL,
    LESSER,
    LESSER_EQUAL,
    IS_ON,
    IS_OFF,
    NUM,
};

