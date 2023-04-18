#pragma once
#include "CoreMinimal.h"
#include "BattleFieldRushEndDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBattleFieldRushEndDelegate, int32, GroupID, int32, SubGroupID);

