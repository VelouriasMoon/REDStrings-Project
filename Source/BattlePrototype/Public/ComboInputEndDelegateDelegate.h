#pragma once
#include "CoreMinimal.h"
#include "RSAttackInputKind.h"
#include "ComboInputEndDelegateDelegate.generated.h"

UDELEGATE(BlueprintAuthorityOnly, BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FComboInputEndDelegate, TEnumAsByte<RSAttackInputKind::Type>, AttackInputKind);

