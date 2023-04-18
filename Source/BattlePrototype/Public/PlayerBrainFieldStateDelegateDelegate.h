#pragma once
#include "CoreMinimal.h"
#include "EPlayerBrainFieldState.h"
#include "PlayerBrainFieldStateDelegateDelegate.generated.h"

UDELEGATE(BlueprintAuthorityOnly, BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlayerBrainFieldStateDelegate, EPlayerBrainFieldState, State, EPlayerBrainFieldState, PrevState);

