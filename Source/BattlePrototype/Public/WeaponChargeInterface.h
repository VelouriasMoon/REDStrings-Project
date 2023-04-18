#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "WeaponChargeInterface.generated.h"

UINTERFACE(Blueprintable)
class BATTLEPROTOTYPE_API UWeaponChargeInterface : public UInterface {
    GENERATED_BODY()
};

class BATTLEPROTOTYPE_API IWeaponChargeInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CheckWeaponChargeLevelDeficit(int32 CheckLevel) const;
    
};

