#pragma once
#include "CoreMinimal.h"
#include "EPlayerID.h"
#include "BondsLevelEventDelegate.generated.h"

UDELEGATE(BlueprintAuthorityOnly, BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBondsLevelEvent, EPlayerID, TargetID, int32, bondsLevel);

