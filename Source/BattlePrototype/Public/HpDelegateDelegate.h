#pragma once
#include "CoreMinimal.h"
#include "HpDelegateDelegate.generated.h"

UDELEGATE(BlueprintAuthorityOnly, BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FHpDelegate, int32, current_hp, int32, base_hp);

