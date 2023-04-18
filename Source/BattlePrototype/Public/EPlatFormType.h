#pragma once
#include "CoreMinimal.h"
#include "EPlatFormType.generated.h"

UENUM(BlueprintType)
enum class EPlatFormType : uint8 {
    Windows,
    PS4,
    XboxOne,
    PS5,
    XSX,
    Num,
};

