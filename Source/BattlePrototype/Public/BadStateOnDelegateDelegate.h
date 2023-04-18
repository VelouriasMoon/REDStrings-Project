#pragma once
#include "CoreMinimal.h"
#include "EHCBadState.h"
#include "BadStateOnDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintAuthorityOnly, BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBadStateOnDelegate, EHCBadState, bad_state, AActor*, attacker);

