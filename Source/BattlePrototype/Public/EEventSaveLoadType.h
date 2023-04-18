#pragma once
#include "CoreMinimal.h"
#include "EEventSaveLoadType.generated.h"

UENUM(BlueprintType)
enum class EEventSaveLoadType : uint8 {
    EVENTSAVELOADTYPE_SAVE,
    EVENTSAVELOADTYPE_LOAD,
    EVENTSHOPTYPE_NUM,
};

