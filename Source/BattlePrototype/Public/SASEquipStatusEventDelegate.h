#pragma once
#include "CoreMinimal.h"
#include "ESASEquipStatus.h"
#include "E_SASKindNative.h"
#include "SASEquipStatusEventDelegate.generated.h"

UDELEGATE(BlueprintAuthorityOnly, BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSASEquipStatusEvent, E_SASKindNative, kind, ESASEquipStatus, Status);

