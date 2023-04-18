#pragma once
#include "CoreMinimal.h"
#include "HCHitResult.h"
#include "HitResultDelegateDelegate.generated.h"

UDELEGATE(BlueprintAuthorityOnly, BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHitResultDelegate, FHCHitResult, Result);

