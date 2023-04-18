#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "HCHitResult.h"
#include "DamageAcceptInterface.generated.h"

UINTERFACE(Blueprintable)
class BATTLEPROTOTYPE_API UDamageAcceptInterface : public UInterface {
    GENERATED_BODY()
};

class BATTLEPROTOTYPE_API IDamageAcceptInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsStartDamageAnimAdditional(const FHCHitResult& HitResult, int32 Damage, bool IsDown);
    
};

