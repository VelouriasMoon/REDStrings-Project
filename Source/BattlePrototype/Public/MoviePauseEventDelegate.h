#pragma once
#include "CoreMinimal.h"
#include "MoviePauseEventDelegate.generated.h"

UDELEGATE(BlueprintAuthorityOnly, BlueprintCallable) 
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMoviePauseEvent, bool, IsPause);

