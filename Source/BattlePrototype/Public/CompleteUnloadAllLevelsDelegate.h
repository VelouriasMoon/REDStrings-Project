#pragma once
#include "CoreMinimal.h"
#include "CompleteUnloadAllLevelsDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable, meta=(WorldContext="WorldContext")) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCompleteUnloadAllLevels, const UObject*, WorldContext);

