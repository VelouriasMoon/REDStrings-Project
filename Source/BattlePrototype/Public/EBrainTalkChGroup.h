#pragma once
#include "CoreMinimal.h"
#include "EBrainTalkChGroup.generated.h"

UENUM(BlueprintType)
enum class EBrainTalkChGroup : uint8 {
    GroupCh_None,
    GroupCh_0100,
    GroupCh_0200,
    GroupCh_0300,
    GroupCh_0400,
    GroupCh_0500,
    GroupCh_0600,
    GroupCh_0700,
    GroupCh_0800,
    GroupCh_0900,
    GroupCh_1000,
    GroupCh_MAX UMETA(Hidden),
};

