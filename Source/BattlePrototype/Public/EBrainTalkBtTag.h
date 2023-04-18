#pragma once
#include "CoreMinimal.h"
#include "EBrainTalkBtTag.generated.h"

UENUM(BlueprintType)
enum class EBrainTalkBtTag : uint8 {
    NoSet,
    SallyTimes,
    NoSallyTimes,
    SasNoUse,
    ReturnToTheAjito,
    GiveItemsFromFriendsWithAjito,
    GiveItemsFromFriendsWithField,
};

