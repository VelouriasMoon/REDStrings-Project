#pragma once
#include "CoreMinimal.h"
#include "HCHitResult.h"
#include "DamageHitDelegateDelegate.generated.h"

UDELEGATE(BlueprintAuthorityOnly, BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDamageHitDelegate, const FHCHitResult&, HitResult, int32, Damage);

