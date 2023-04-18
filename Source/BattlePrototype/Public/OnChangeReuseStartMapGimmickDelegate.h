#pragma once
#include "CoreMinimal.h"
#include "OnChangeReuseStartMapGimmickDelegate.generated.h"

class AMapGimmickObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeReuseStartMapGimmick, const AMapGimmickObject*, gimmick);

