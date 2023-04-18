#pragma once
#include "CoreMinimal.h"
#include "HCHitResult.h"
#include "StartDamageAnimDelegateDelegate.generated.h"

UDELEGATE(BlueprintAuthorityOnly, BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FStartDamageAnimDelegate, const FHCHitResult&, HitResult, int32, Damage, bool, IsDamage);

