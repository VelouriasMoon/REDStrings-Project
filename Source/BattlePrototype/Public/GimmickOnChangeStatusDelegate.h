#pragma once
#include "CoreMinimal.h"
#include "EGimmickObjectStatus.h"
#include "GimmickOnChangeStatusDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGimmickOnChangeStatus, EGimmickObjectStatus, NewStatus);

