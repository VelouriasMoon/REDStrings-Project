#pragma once
#include "CoreMinimal.h"
#include "EAreaInfoTweakConditionType.generated.h"

UENUM(BlueprintType)
enum class EAreaInfoTweakConditionType : uint8 {
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

