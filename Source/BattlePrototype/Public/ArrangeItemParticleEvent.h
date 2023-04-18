#pragma once
#include "CoreMinimal.h"
#include "ArrangeItemParticle.h"
#include "ArrangeItemParticleEvent.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API AArrangeItemParticleEvent : public AArrangeItemParticle {
    GENERATED_BODY()
public:
    AArrangeItemParticleEvent();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool DoEvent();
    
};

