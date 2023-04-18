#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "FallFloorAnimInstanceInterface.generated.h"

UINTERFACE(Blueprintable)
class BATTLEPROTOTYPE_API UFallFloorAnimInstanceInterface : public UInterface {
    GENERATED_BODY()
};

class BATTLEPROTOTYPE_API IFallFloorAnimInstanceInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetLaserDamage();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool RemoveBlock(int32 BlockNo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool AppearBlock(int32 BlockNo);
    
};

