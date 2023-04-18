#pragma once
#include "CoreMinimal.h"
#include "PlayerBrainFieldPsychicGaugeDelegateDelegate.generated.h"

UDELEGATE(BlueprintAuthorityOnly, BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerBrainFieldPsychicGaugeDelegate, bool, bChangeDirection);

