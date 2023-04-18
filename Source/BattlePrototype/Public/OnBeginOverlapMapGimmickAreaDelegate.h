#pragma once
#include "CoreMinimal.h"
//-FallbackName=Vector
#include "OnBeginOverlapMapGimmickAreaDelegate.generated.h"

class AMapGimmickObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnBeginOverlapMapGimmickArea, const AMapGimmickObject*, gimmick, FVector, lookAtPos);

