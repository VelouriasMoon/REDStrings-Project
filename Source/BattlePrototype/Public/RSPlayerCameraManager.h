#pragma once
#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "RSPlayerCameraManager.generated.h"

UCLASS(Abstract, Blueprintable, NonTransient)
class BATTLEPROTOTYPE_API ARSPlayerCameraManager : public APlayerCameraManager {
    GENERATED_BODY()
public:
    ARSPlayerCameraManager();
    UFUNCTION(BlueprintCallable)
    void ClearCameraShakeCache();
    
};

