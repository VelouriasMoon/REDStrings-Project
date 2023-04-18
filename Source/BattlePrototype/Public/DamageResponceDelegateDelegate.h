#pragma once
#include "CoreMinimal.h"
#include "HCHitResult.h"
#include "DamageResponceDelegateDelegate.generated.h"

UDELEGATE(BlueprintAuthorityOnly, BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDamageResponceDelegate, const FHCHitResult&, HitResult, int32, Damage);

