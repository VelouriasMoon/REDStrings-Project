#pragma once
#include "CoreMinimal.h"
#include "EMainContentsLoopSubState.generated.h"

UENUM(BlueprintType)
enum class EMainContentsLoopSubState : uint8 {
    Init,
    MainLoop,
    CloseOldTab,
    OpenNewTab,
    WaitOpenNewTab,
    ChangeDrawMode,
};

