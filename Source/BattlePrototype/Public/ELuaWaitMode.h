#pragma once
#include "CoreMinimal.h"
#include "ELuaWaitMode.generated.h"

UENUM(BlueprintType)
enum class ELuaWaitMode : uint8 {
    None,
    Timer,
    Message,
    Input,
    EndMotion,
    DynamicCutscene,
    AnimMontage,
    LoadAsset,
    LoadAssetAll,
    Fade,
    Shop,
    GeneralChoice,
};

