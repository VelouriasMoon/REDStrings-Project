#pragma once
#include "CoreMinimal.h"
#include "EHCBadState.h"
#include "BadStateOffDelegateDelegate.generated.h"

UDELEGATE(BlueprintAuthorityOnly, BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBadStateOffDelegate, EHCBadState, bad_state);

