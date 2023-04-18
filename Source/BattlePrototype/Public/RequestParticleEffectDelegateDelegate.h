#pragma once
#include "CoreMinimal.h"
#include "RequestParticleEffectDelegateDelegate.generated.h"

class URequestParticleEffectArgs;

UDELEGATE(BlueprintAuthorityOnly, BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRequestParticleEffectDelegate, URequestParticleEffectArgs*, Args);

