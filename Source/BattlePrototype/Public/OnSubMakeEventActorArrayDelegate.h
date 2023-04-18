#pragma once
#include "CoreMinimal.h"
#include "OnSubMakeEventActorArrayDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSubMakeEventActorArray, AActor*, Actor);

