#pragma once
#include "CoreMinimal.h"
#include "OnExecMapGimmickDelegate.generated.h"

class AMapGimmickObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnExecMapGimmick, const AMapGimmickObject*, gimmick);

