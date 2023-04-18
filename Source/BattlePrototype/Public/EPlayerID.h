#pragma once
#include "CoreMinimal.h"
#include "EPlayerID.generated.h"

UENUM(BlueprintType)
enum class EPlayerID : uint8 {
    Invalid,
    ch0100,
    ch0200,
    ch0300,
    ch0400,
    ch0500,
    ch0600,
    ch0700,
    ch0800,
    ch0900,
    ch1000,
    np1100,
    em8000,
    em8010,
    em8100,
    em8200,
    em8210,
    em8220,
    em8290,
    em8291,
    np2100,
    ch0900_Fort,
    ch0900_FullCopy,
    em8010_ph07,
    em8010_ph09,
    em8290_BattleSimulator,
    em8291_BattleSimulator,
    Max,
    Start = 0x1,
    FriendMax = 0xB,
};

