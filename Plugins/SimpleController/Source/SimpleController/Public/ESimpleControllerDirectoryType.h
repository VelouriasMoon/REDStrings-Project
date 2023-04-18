#pragma once
#include "CoreMinimal.h"
#include "ESimpleControllerDirectoryType.generated.h"

UENUM(BlueprintType)
enum class ESimpleControllerDirectoryType : uint8 {
    GameDir,
    AbsoluteDir,
};

