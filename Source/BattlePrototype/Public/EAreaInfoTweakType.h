#pragma once
#include "CoreMinimal.h"
#include "EAreaInfoTweakType.generated.h"

UENUM(BlueprintType)
enum class EAreaInfoTweakType : uint8 {
    TWEAKTYPE_ADD,
    TWEAKTYPE_DELETE,
    TWEAKTYPE_REPLACE,
    NUM,
};

