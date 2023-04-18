#pragma once
#include "CoreMinimal.h"
#include "EnterStateDelegadeDelegate.generated.h"

UDELEGATE(BlueprintAuthorityOnly, BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEnterStateDelegade, int32, NewState, int32, Param);

