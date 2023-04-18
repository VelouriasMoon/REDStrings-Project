#pragma once
#include "CoreMinimal.h"
#include "WorldmapSelectableChangeEventDelegate.generated.h"

UDELEGATE(BlueprintAuthorityOnly, BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWorldmapSelectableChangeEvent, bool, isNotSelectable);

