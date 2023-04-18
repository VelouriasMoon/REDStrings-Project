#pragma once
#include "CoreMinimal.h"
#include "EAreaInfoDetaileCheckType.generated.h"

UENUM(BlueprintType)
enum class EAreaInfoDetaileCheckType : uint8 {
    PROGRESS,
    FLAG_BOOL,
    NUM,
};

