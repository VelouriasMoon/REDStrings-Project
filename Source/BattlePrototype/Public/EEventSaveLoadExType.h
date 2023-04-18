#pragma once
#include "CoreMinimal.h"
#include "EEventSaveLoadExType.generated.h"

UENUM(BlueprintType)
enum class EEventSaveLoadExType : uint8 {
    EVENTSAVELOADSUBTYPE_NORMAL,
    EVENTSAVELOADSUBTYPE_EXMODE,
    EVENTSHOPTYPE_NUM,
};

