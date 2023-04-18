#pragma once
#include "CoreMinimal.h"
#include "ETitleFlow.generated.h"

UENUM(BlueprintType)
enum class ETitleFlow : uint8 {
    Invalid,
    NewGame,
    ExNewGame,
    LoadGame,
    PlayPV,
    ConfigMenu,
    AnalyticsMenu,
    License,
    TrialDataConvert,
    QuitGame,
    CrossSave,
};

