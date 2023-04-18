#pragma once
#include "CoreMinimal.h"
#include "EPlayerID.h"
#include "BondsProgressEventDelegate.generated.h"

UDELEGATE(BlueprintAuthorityOnly, BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBondsProgressEvent, EPlayerID, TargetID, float, bondsProgress);

