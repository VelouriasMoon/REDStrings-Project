#pragma once
#include "CoreMinimal.h"
#include "AttackComponentChangeAttackingDelegateDelegate.generated.h"

class UAttackComponentBase;

UDELEGATE(BlueprintAuthorityOnly, BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAttackComponentChangeAttackingDelegate, UAttackComponentBase*, attackComp, bool, bAttacking);

