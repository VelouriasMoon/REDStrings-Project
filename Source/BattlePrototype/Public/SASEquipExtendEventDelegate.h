#pragma once
#include "CoreMinimal.h"
#include "SASEquipExtendEventDelegate.generated.h"

UDELEGATE(BlueprintAuthorityOnly, BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSASEquipExtendEvent, bool, bExtend);

