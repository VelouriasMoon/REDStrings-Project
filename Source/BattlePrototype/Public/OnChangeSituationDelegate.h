#pragma once
#include "CoreMinimal.h"
#include "EBattleSituationType.h"
#include "OnChangeSituationDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeSituation, EBattleSituationType, SituationType);

