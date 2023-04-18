#pragma once
#include "CoreMinimal.h"
#include "E_SASButton.h"
#include "E_SASKindNative.h"
#include "SASEquipEventDelegate.generated.h"

UDELEGATE(BlueprintAuthorityOnly, BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSASEquipEvent, E_SASButton, Button, E_SASKindNative, kind);

