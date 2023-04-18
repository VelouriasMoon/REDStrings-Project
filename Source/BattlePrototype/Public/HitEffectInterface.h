#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "FHitEffectPriority.h"
#include "HitEffectInterface.generated.h"

UINTERFACE(Blueprintable)
class BATTLEPROTOTYPE_API UHitEffectInterface : public UInterface {
    GENERATED_BODY()
};

class BATTLEPROTOTYPE_API IHitEffectInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FHitEffectPriority GetHitEffectPriorityInterface();
    
};

