#pragma once
#include "CoreMinimal.h"
#include "OnChangeFinishedMapGimmickDelegate.generated.h"

class AMapGimmickObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeFinishedMapGimmick, const AMapGimmickObject*, gimmick);

