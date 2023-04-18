#pragma once
#include "CoreMinimal.h"
#include "EClearGetterType.h"
#include "ClearGetterClearMissionDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FClearGetterClearMission, EClearGetterType, Value);

