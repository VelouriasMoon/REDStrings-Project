#pragma once
#include "CoreMinimal.h"
#include "ChangeDisableBattleActionFlagDelegateDelegate.generated.h"

UDELEGATE(BlueprintAuthorityOnly, BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChangeDisableBattleActionFlagDelegate, bool, bDisable);

