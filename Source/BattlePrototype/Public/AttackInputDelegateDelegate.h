#pragma once
#include "CoreMinimal.h"
#include "AttackInputDelegateDelegate.generated.h"

UDELEGATE(BlueprintAuthorityOnly, BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAttackInputDelegate, bool, IsPressed);

