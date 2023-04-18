#pragma once
#include "CoreMinimal.h"
#include "OnEndOverlapMapGimmickAreaDelegate.generated.h"

class AMapGimmickObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEndOverlapMapGimmickArea, const AMapGimmickObject*, gimmick);

