#pragma once
#include "CoreMinimal.h"
#include "EScenarioType.generated.h"

UENUM(BlueprintType)
enum class EScenarioType : uint8 {
    Invalid,
    SenarioMale,
    SenarioFemale,
    SenarioCommon,
    SenarioBoth,
};

