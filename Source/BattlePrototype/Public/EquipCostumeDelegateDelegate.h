#pragma once
#include "CoreMinimal.h"
#include "EPlayerID.h"
#include "EquipCostumeDelegateDelegate.generated.h"

UDELEGATE(BlueprintAuthorityOnly, BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEquipCostumeDelegate, EPlayerID, playerId, int32, CostumeId);

